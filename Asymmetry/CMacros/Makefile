C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = ReadDecayNTuple.exe 

all:$(Target)

ReadDecayNTuple.exe: ReadDecayNTuple.C
	${C++} -o $@ ReadDecayNTuple.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)
clean:
	rm *exe
