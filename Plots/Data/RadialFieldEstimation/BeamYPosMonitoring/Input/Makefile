C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = ChangeFileStructure.exe 

all:$(Target)

ChangeFileStructure.exe: ChangeFileStructure.C
	${C++} -o $@ ChangeFileStructure.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)