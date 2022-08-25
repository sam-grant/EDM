C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = PlotYvsBr.exe

all:$(Target)

PlotYvsBr.exe: PlotYvsBr.C
	${C++} -o $@ PlotYvsBr.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

clean:
	rm *exe
