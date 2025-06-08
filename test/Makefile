PROG= test
SRCS= test.c
CFLAGS += -I${.CURDIR}/../lib/libpcap
CFLAGS += -I${.CURDIR}/../sys
CFLAGS += -lpcap

LDFLAGS+= -L/home/shibo/tcpdump/lib/libpcap

.include <bsd.prog.mk>

run:
	sudo LD_LIBRARY_PATH=/home/shibo/tcpdump/lib/libpcap ./test

