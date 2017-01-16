#!/bin/bash
cd venv/bin
source activate
cd ..
cd ..
pip install -r requirements.txt
cd sip-4.19
python configure.py
make
make install
cd ..
cd PyQt4_gpl_mac-4.12
python configure-ng.py
make
make install
cd ..
python ListenQuick.py