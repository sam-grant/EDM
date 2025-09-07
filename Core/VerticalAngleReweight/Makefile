C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = VerticalAngleDataSimRatios.out VerticalAngleReweightingUnc.out

all:$(Target)

VerticalAngleDataSimRatios.out: VerticalAngleDataSimRatios.C
	${C++} -v -o $@ VerticalAngleDataSimRatios.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

VerticalAngleReweightingUnc.out: VerticalAngleReweightingUnc.C
	${C++} -v -o $@ VerticalAngleReweightingUnc.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

clean:
	rm *.out