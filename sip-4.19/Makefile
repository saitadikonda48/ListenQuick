
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages || mkdir -p $(DESTDIR)/Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages
	cp -f sipconfig.py $(DESTDIR)/Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/sipconfig.py
	cp -f /Users/saitadikonda/Desktop/TestingFolder/sip-4.19/sipdistutils.py $(DESTDIR)/Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
