C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../Blinding/rlib/include
BLINDING = -L./ -lBlinders

Target = Asymmetry.exe AllCaloMeanPos.exe PerCaloMeanPos.exe MomentumScan.exe SanityPlots.exe UnblindedEDMSimFitter.exe TimeScan.exe ToyRadialFieldScan.exe testBlinding.exe BlindedEDMSimFitter.exe HigherOrderFunc.exe BeamGunTuningPlotter.exe ToyHO.exe AnalyseBr_nearline.exe AnalyseBr_beamGun.exe AnalyseVCOD_nearline.exe ReadNearlineTrees.exe CaloMisalignment18kV.exe BeamYPos.exe PlotBeamYPosVsRun.exe UnblindedBzFitter.exe

all:$(Target)

Asymmetry.exe: Asymmetry.C
	${C++} -o $@ Asymmetry.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

AllCaloMeanPos.exe: AllCaloMeanPos.C
	${C++} -o $@ AllCaloMeanPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

PerCaloMeanPos.exe: PerCaloMeanPos.C
	${C++} -o $@ PerCaloMeanPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

MomentumScan.exe: MomentumScan.C
	${C++} -o $@ MomentumScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

SanityPlots.exe: SanityPlots.C
	${C++} -o $@ SanityPlots.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

UnblindedEDMSimFitter.exe: UnblindedEDMSimFitter.C
	${C++} -o $@ UnblindedEDMSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

UnblindedBzFitter.exe: UnblindedBzFitter.C
	${C++} -o $@ UnblindedBzFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

TimeScan.exe: TimeScan.C
	${C++} -o $@ TimeScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

ToyRadialFieldScan.exe: ToyRadialFieldScan.C
	${C++} -o $@ ToyRadialFieldScan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

HigherOrderFunc.exe: HigherOrderFunc.C
	${C++} -o $@ HigherOrderFunc.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

BeamGunTuningPlotter.exe: BeamGunTuningPlotter.C
	${C++} -o $@ BeamGunTuningPlotter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

ToyHO.exe: ToyHO.C
	${C++} -o $@ ToyHO.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

AnalyseBr_nearline.exe: AnalyseBr_nearline.C
	${C++} -o $@ AnalyseBr_nearline.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

AnalyseBr_beamGun.exe: AnalyseBr_beamGun.C
	${C++} -o $@ AnalyseBr_beamGun.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

AnalyseVCOD_nearline.exe: AnalyseVCOD_nearline.C
	${C++} -o $@ AnalyseVCOD_nearline.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

ReadNearlineTrees.exe: ReadNearlineTrees.C
	${C++} -o $@ ReadNearlineTrees.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

CaloMisalignment18kV.exe: CaloMisalignment18kV.C
	${C++} -o $@ CaloMisalignment18kV.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

BeamYPos.exe: BeamYPos.C
	${C++} -o $@ BeamYPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)
	
PlotBeamYPosVsRun.exe: PlotBeamYPosVsRun.C
	${C++} -o $@ PlotBeamYPosVsRun.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 
############################# BLINDING ###################################

testBlinding.exe: testBlinding.C
	${C++} -o $@ testBlinding.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING} 

BlindedEDMSimFitter.exe: BlindedEDMSimFitter.C
	${C++} -o $@ BlindedEDMSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING}

clean:
	rm *exe
