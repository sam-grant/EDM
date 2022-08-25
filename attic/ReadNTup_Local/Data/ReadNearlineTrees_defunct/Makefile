C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = Reader.exe

all:$(Target)

Reader.exe: Reader.C
	${C++} -o $@ Reader.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)


clean:
	rm *exe
