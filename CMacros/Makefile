
C++ = g++
C_FLAGS = -g

ROOTCFLAGS=$(shell root-config --cflags)
ROOTLIBS=$(shell root-config --libs)

## Do not delete Reader.C bit, it will erase your header files for some reason
SOURCES = $(shell find . ! -name "Reader.C" -name "*.C")

all : $(SOURCES:.C=)

clean:
	rm *.o $(SOURCES:.C=)

##generic rule:
%: %.C
	$(C++) $(ROOTCFLAGS) $(C_FLAGS) $<  -o $@ $(ROOTLIBS)

##generic rule:
#%: %.C
#	$(C++) $(ROOTCFLAGS) $(C_FLAGS) $<  -o $@  -L/Users/samuelgrant/Documents/gm2/EDM/Blinding -lgm2util_blinders $(ROOTLIBS)
