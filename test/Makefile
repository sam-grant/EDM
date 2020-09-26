# Makefile that also compiles software blinding

# Rather hacky, this is voodoo to me

Target  = Asymmetry.exe testBlinding.exe

C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../Blinding/rlib/include
BLINDING = -L./ -lBlinders

all:$(Target)

Asymmetry.exe: Asymmetry.C
	${C++} -o $@ Asymmetry.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

############################# BLINDING ###################################
testBlinding.exe: testBlinding.C
	${C++} -I ${RANDOMLIB} testBlinding.C ${BLINDING} -o testBlinding.exe 

clean:
	rm *exe