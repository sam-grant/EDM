
C++ = g++
C_FLAGS = -g

ROOTCFLAGS=$(shell root-config --cflags)
ROOTLIBS=$(shell root-config --libs)

SOURCES = $(shell find . ! -name "Reader.C" -name "*.C")

all : $(SOURCES:.C=)

clean:
	rm *.o $(SOURCES:.C=)

##generic rule:
%: %.C
	$(C++) $(ROOTCFLAGS) $(C_FLAGS) $<  -o $@  $(ROOTLIBS)
