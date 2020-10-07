C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../Blinding/rlib/include
BLINDING = -L./ -lBlinders

Target = Asymmetry.exe CaloMeanPos.exe MomentumScan.exe SanityPlots.exe SimpleFitter.exe testBlinding.exe TimeScan.exe ToyRadialFieldScan.exe  

all:$(Target)

Asymmetry.exe: Asymmetry.C
	${C++} -o $@ Asymmetry.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

CaloMeanPos.exe: CaloMeanPos.C
	${C++} -o $@ CaloMeanPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

MomentumScan.exe: MomentumScan.C
	${C++} -o $@ MomentumScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

SanityPlots.exe: SanityPlots.C
	${C++} -o $@ SanityPlots.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

SimpleFitter.exe: SimpleFitter.C
	${C++} -o $@ SimpleFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

TimeScan.exe: TimeScan.C
	${C++} -o $@ TimeScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

ToyRadialFieldScan.exe: ToyRadialFieldScan.C
	${C++} -o $@ ToyRadialFieldScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

############################# BLINDING ###################################

testBlinding.exe: testBlinding.C
	${C++} -o $@ testBlinding.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING} 

clean:
	rm *exe
