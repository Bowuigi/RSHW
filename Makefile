# RSHW
# A readline shell wrapper (made for dash, but works with other shells)
# By Bowuigi
# Done in 15 minutes so expect bugs

CC=clang
CFLAGS=-Os
LDFLAGS=-lreadline
STRIP=strip
DESTDIR=/usr/local/bin

build:
	$(CC) $(CFLAGS) $(LDFLAGS) rshw.c -o rshw
	$(STRIP) rshw

install: build
	cp -f rshw $(DESTDIR)/rshw

uninstall:
	rm $(DESTDIR)/rshw

