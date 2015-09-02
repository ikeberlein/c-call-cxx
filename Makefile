CFLAGS=-Wall -Wextra -Werror
CXXFLAGS=$(CFLAGS)

all: htest

htest: cmain.o cxxmodule.o
	$(CXX) cmain.o cxxmodule.o -o htest

cmain.o: cmain.c

cxxmodule.o: cxxmodule.cc

clean:
	rm -f htest *.o

