import sys
from PyQt4 import QtGui, QtCore
from PyQt4.QtGui import *
from PyQt4.QtCore import pyqtSlot
from PyQt4.QtCore import SIGNAL
import mechanize
from bs4 import BeautifulSoup
import urllib
import re
import time
import os
from pytube import YouTube

class Example(QtGui.QWidget):
    
    def __init__(self):
        super(Example, self).__init__()
        self.initUI()
        
    def initUI(self):
        # "Global" variables needed later on
        self.song_fill = False
        self.song_name = ""
        self.artist_name = ""
        # Create window
        self.resize(600, 350)
        # Color window
        p = QPalette()
        gradient = QLinearGradient(0, 0, 0, 400)
        gradient.setColorAt(0.0, QColor(0, 0, 205))
        gradient.setColorAt(1.0, QColor(30, 144, 255))
        p.setBrush(QPalette.Window, QBrush(gradient))
        self.setPalette(p)
        # Set the Window title
        self.text = "ListenQuick"
        self.setWindowTitle('ListenQuick')
        # Create textboxes
        self.song_textbox = QLineEdit(self)
        self.song_textbox.move(235, 75)
        self.song_textbox.resize(200,30)
        self.artist_textbox = QLineEdit(self)
        self.artist_textbox.move(235, 125)
        self.artist_textbox.resize(200,25)
        # Create response for clicking button
        self.button = QPushButton('Search', self)
        self.button.resize(70,36)
        self.button.move(265,165)
        self.connect(self.button, SIGNAL("clicked()"),self.button_click)
        self.show()

    # Create the actions
    # @pyqtSlot()
    def button_click(self):
        self.song_name = self.song_textbox.text()
        self.artist_name = self.artist_textbox.text()
        if (str(self.song_name) == "") or (str(self.song_name) == "You must enter a song title"):
            self.song_textbox.setText(str("You must enter a song title"))
        else:
            self.song_fill = True
            # Search on youtube
            br = mechanize.Browser()
            br.set_handle_robots(False)
            url = "https://www.youtube.com/"
            response = br.open(url)
            response1 = br.response()
            br.form = list(br.forms())[1]
            control = br.form.find_control("search_query")

            control.value = str(self.song_name) + " " + str(self.artist_name) + " Audio"
            response = br.submit()
            r = urllib.urlopen(str(response.geturl())).read()
            soup = BeautifulSoup(r, "html.parser")
            divs = soup.find_all('div', {"class":"yt-lockup-dismissable"})
            download_url_str =  "https://www.youtube.com" + str(divs[0].h3.a.get('href'))
            download_Video_Audio(os.getcwd(),download_url_str,str(self.song_name).strip());

    # Performs all the drawing methods
    def paintEvent(self, event):
        qp = QtGui.QPainter()
        qp.begin(self)
        self.drawText(event, qp)
        self.drawLabels(qp)
        if self.song_fill:
            self.offerFile(qp)
            self.update()
        qp.end()

    # Draws info after song is downloaded
    def offerFile(self, qp):
        text1_needed = "Song File: " + self.song_name + ".mp3"
        text2_needed = "Artist: " + self.artist_name
        text3_needed = "Download Complete!"
        qp.setFont(QtGui.QFont('Helvitica', 20))
        qp.drawText(180,220,text1_needed)
        qp.drawText(220,250,text2_needed)
        qp.setFont(QtGui.QFont('Helvitica', 20))
        qp.setPen(QtGui.QColor(0, 255, 0))
        qp.drawText(180,280,text3_needed)

    # Draws the labels
    def drawLabels(self, qp):
        qp.setFont(QtGui.QFont('Helvitica', 20))
        qp.drawText(93,93,"Name of Song")
        qp.drawText(105,145,"Artist")
        qp.setFont(QtGui.QFont('Helvitica', 15))
        qp.drawText(158,145,"(Optional)")

    # Draws the title
    def drawText(self, event, qp):
        qp.setPen(QtGui.QColor(255, 255, 255))
        qp.setFont(QtGui.QFont('Calibri', 45))
        qp.drawText(event.rect(), 5, self.text)        

# Method that convert link to mp3 file
def download_Video_Audio(path, vid_url, file_no):
    try:
        yt = YouTube(vid_url)
    except Exception as e:
        print("Error:", str(e), "- Skipping Video with url '"+vid_url+"'.")
        return

    try:  # Tries to find the video in 720p
        video = yt.get('mp4', '720p')
    except Exception:  # Sorts videos by resolution and picks the highest quality video if a 720p video doesn't exist
        video = sorted(yt.filter("mp4"), key=lambda video: int(video.resolution[:-1]), reverse=True)[0]

    print("downloading", yt.filename+" Video and Audio...")
    try:
        # bar = progressBar()
        video.download(path, None, None)
        print("successfully downloaded", yt.filename, "!")
    except OSError:
        print(yt.filename, "already exists in this directory! Skipping video...")

    try:
        # Converts mp4 file to wav file then to mp3 file
        os.rename(yt.filename+'.mp4',str(file_no).replace(" ",",")+'.mp4')
        aud= 'ffmpeg -i '+str(file_no).replace(" ",",")+'.mp4'+' '+str(file_no).replace(" ",",")+'.wav'
        final_audio='lame '+str(file_no).replace(" ",",")+'.wav'+' '+str(file_no).replace(" ",",")+'.mp3'
        os.system(aud)
        os.system(final_audio)
        os.rename(str(file_no).replace(" ",",")+'.mp3', str(file_no).replace(","," ")+'.mp3')
        os.remove(str(file_no).replace(" ",",")+'.wav')
        os.remove(str(file_no).replace(" ",",")+'.mp4')
        print("sucessfully converted",yt.filename, "into audio!")
    except OSError:
        print(yt.filename, "There is some problem with the file names...")
  
# Main method where instance of class is created
def main():
    app = QtGui.QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()