C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = ReadNearlineTrees.exe PlotCaloYvsRun.exe GetRefPos.exe EstimateRadialField.exe PlotBrvsDS.exe CheckCaloAlignment.exe OverlayEstimatedRadialFieldPlots.exe PlotBrvsRunAll.exe

all:$(Target)

ReadNearlineTrees.exe: ReadNearlineTrees.C
	${C++} -o $@ ReadNearlineTrees.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

PlotCaloYvsRun.exe: PlotCaloYvsRun.C
	${C++} -o $@ PlotCaloYvsRun.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

GetRefPos.exe: GetRefPos.C
	${C++} -o $@ GetRefPos.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

EstimateRadialField.exe: EstimateRadialField.C
	${C++} -o $@ EstimateRadialField.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

PlotBrvsDS.exe: PlotBrvsDS.C
	${C++} -o $@ PlotBrvsDS.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

CheckCaloAlignment.exe: CheckCaloAlignment.C
	${C++} -o $@ CheckCaloAlignment.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)
	
OverlayEstimatedRadialFieldPlots.exe: OverlayEstimatedRadialFieldPlots.C
	${C++} -o $@ OverlayEstimatedRadialFieldPlots.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

PlotBrvsRunAll.exe: PlotBrvsRunAll.C
	${C++} -o $@ PlotBrvsRunAll.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)
clean:
	rm *exe
