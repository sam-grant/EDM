C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../Blinding/rlib/include
BLINDING = -L./ -lBlinders

Target  = Asymmetry.exe CaloMeanPos.exe MomentumScan.exe SanityPlots_30xBNL.exe SimpleFitter_30xBNL.exe TimeScan.exe testBlinding.exe 

all:$(Target)

Asymmetry.exe: Asymmetry.C
	${C++} -o $@ Asymmetry.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

CaloMeanPos.exe: CaloMeanPos.C
	${C++} -o $@ CaloMeanPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

MomentumScan.exe: MomentumScan.C
	${C++} -o $@ MomentumScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

SanityPlots_30xBNL.exe: SanityPlots_30xBNL.C
	${C++} -o $@ SanityPlots_30xBNL.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

SimpleFitter_30xBNL.exe: SimpleFitter_30xBNL.C
	${C++} -o $@ SimpleFitter_30xBNL.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

TimeScan.exe: TimeScan.C
	${C++} -o $@ TimeScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

############################# BLINDING ###################################
testBlinding.exe: testBlinding.C
	${C++} -o $@ testBlinding.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING} 

clean:
	rm *exe
