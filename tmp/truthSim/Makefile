C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

Target = Plotter.exe Plotter_Mu.exe

all:$(Target)

Plotter.exe: Plotter.C
	${C++} -o $@ Plotter.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

Plotter_Mu.exe: Plotter_Mu.C
	${C++} -o $@ Plotter_Mu.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

clean:
	rm *exe
