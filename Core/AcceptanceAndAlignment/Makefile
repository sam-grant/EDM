C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = AcceptanceMaps.out AcceptanceCorrection.out VerticalAcceptanceIllustration.out

all:$(Target)

AcceptanceMaps.out: AcceptanceMaps.C
	${C++} -v -o $@ AcceptanceMaps.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

AcceptanceCorrection.out: AcceptanceCorrection.C
	${C++} -v -o $@ AcceptanceCorrection.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

VerticalAcceptanceIllustration.out: VerticalAcceptanceIllustration.C
	${C++} -v -o $@ VerticalAcceptanceIllustration.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 
clean:
	rm *.out