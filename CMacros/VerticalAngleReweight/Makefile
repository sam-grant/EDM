C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = VerticalAngleWidths.out 

all:$(Target)

VerticalAngleWidths.out: VerticalAngleWidths.C
	${C++} -v -o $@ VerticalAngleWidths.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

clean:
	rm *.out