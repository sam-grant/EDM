C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = AcceptanceMaps.out 

all:$(Target)

AcceptanceMaps.out: AcceptanceMaps.C
	${C++} -v -o $@ AcceptanceMaps.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

clean:
	rm *.out