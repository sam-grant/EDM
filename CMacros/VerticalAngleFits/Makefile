C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../../Blinding/rlib/include
BLINDING = -L./ -lBlinders

Target = BlindedEDMSimFitter.out 

all:$(Target)

BlindedEDMSimFitter.out: BlindedEDMSimFitter.C
	${C++} -v -o $@ BlindedEDMSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING}

clean:
	rm *.out
