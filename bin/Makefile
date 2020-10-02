# Makefile that also compiles software blinding

# Rather hacky, this is voodoo to me

Target  = Asymmetry.exe testBlinding.exe # BlindedEDMAnalysis.exe




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
