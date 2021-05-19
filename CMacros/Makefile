C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../Blinding/rlib/include
BLINDING = -L./ -lBlinders

Target = Asymmetry.exe AllCaloMeanPos.exe PerCaloMeanPos.exe SanityPlots.exe UnblindedEDMSimFitter.exe ToyRadialFieldScan.exe testBlinding.exe BlindedEDMSimFitter.exe HigherOrderFunc.exe BeamGunTuningPlotter.exe ToyHO.exe AnalyseBr_nearline.exe AnalyseBr_beamGun.exe AnalyseVCOD_nearline.exe ReadNearlineTrees.exe CaloMisalignment18kV.exe BeamYPos.exe PlotBeamYPosVsRun.exe UnblindedBzSimFitter.exe BlindedBzSimFitter.exe TruthBzSimFitter.exe dY_and_dBr.exe EstimateRadialField.exe PlotBeamYPosVsRun_Run4_Jan.exe BrCutsScanPlots.exe yPos_vs_E.exe d_Bz.exe BlindedBzFitter.exe PlotYvsBr.exe TruthEDMSimFitter.exe Dilution.exe EDMBlindingIllustration.exe

all:$(Target)

Asymmetry.exe: Asymmetry.C
	${C++} -o $@ Asymmetry.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

AllCaloMeanPos.exe: AllCaloMeanPos.C
	${C++} -o $@ AllCaloMeanPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

PerCaloMeanPos.exe: PerCaloMeanPos.C
	${C++} -o $@ PerCaloMeanPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

SanityPlots.exe: SanityPlots.C
	${C++} -o $@ SanityPlots.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

UnblindedEDMSimFitter.exe: UnblindedEDMSimFitter.C
	${C++} -o $@ UnblindedEDMSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

UnblindedBzSimFitter.exe: UnblindedBzSimFitter.C
	${C++} -o $@ UnblindedBzSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

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

PlotBeamYPosVsRun_Run4_Jan.exe: PlotBeamYPosVsRun_Run4_Jan.C
	${C++} -o $@ PlotBeamYPosVsRun_Run4_Jan.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) 

dY_and_dBr.exe: dY_and_dBr.C
	${C++} -o $@ dY_and_dBr.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

EstimateRadialField.exe: EstimateRadialField.C
	${C++} -o $@ EstimateRadialField.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

BrCutsScanPlots.exe: BrCutsScanPlots.C
	${C++} -o $@ BrCutsScanPlots.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

yPos_vs_E.exe: yPos_vs_E.C
	${C++} -o $@ yPos_vs_E.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

d_Bz.exe: d_Bz.C
	${C++} -o $@ d_Bz.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

TruthBzSimFitter.exe: TruthBzSimFitter.C
	${C++} -o $@ TruthBzSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

PlotYvsBr.exe: PlotYvsBr.C
	${C++} -o $@ PlotYvsBr.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

TruthEDMSimFitter.exe: TruthEDMSimFitter.C
	${C++} -o $@ TruthEDMSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

Dilution.exe: Dilution.C
	${C++} -o $@ Dilution.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

############################# BLINDING ###################################

testBlinding.exe: testBlinding.C
	${C++} -o $@ testBlinding.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING} 

EDMBlindingIllustration.exe: EDMBlindingIllustration.C
	${C++} -o $@ EDMBlindingIllustration.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING} 
	
BlindedEDMSimFitter.exe: BlindedEDMSimFitter.C
	${C++} -o $@ BlindedEDMSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING}

BlindedBzSimFitter.exe: BlindedBzSimFitter.C
	${C++} -o $@ BlindedBzSimFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING}

BlindedBzFitter.exe: BlindedBzFitter.C
	${C++} -o $@ BlindedBzFitter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING}


clean:
	rm *exe
