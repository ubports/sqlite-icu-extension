LDFLAGS += $(shell pkg-config --libs icu-uc icu-i18n)
DEB_HOST_MULTIARCH ?= $(shell dpkg-architecture -qDEB_HOST_MULTIARCH)
libdir := $(DESTDIR)/usr/lib/$(DEB_HOST_MULTIARCH)

.PHONY: install

all: libSqliteIcu.so

libSqliteIcu.so: ext/icu/icu.c
	$(CC) -fPIC -shared $< -Iext/icu $(LDFLAGS) -o $@

install: all
	install -d $(libdir)
	install libSqliteIcu.so $(libdir)/
