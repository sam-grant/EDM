C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = DilutionFitter.out 

all:$(Target)

DilutionFitter.out: DilutionFitter.C
	${C++} -v -o $@ DilutionFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

clean:
	rm *.out