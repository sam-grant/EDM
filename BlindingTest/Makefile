# Makefile that also compiles software blinding

# Rather hacky, this is voodoo to me

Target  = Asymmetry.exe testBlinding.exe BlindedEDMAnalysis.exe

C++ = g++

ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)

RANDOMLIB = ../Blinding/rlib/include
BLINDING = -L./ -lBlinders

all:$(Target)

Asymmetry.exe: Asymmetry.C
	echo $@
	${C++} -o $@ Asymmetry.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)

############################# BLINDING ###################################
testBlinding.exe: testBlinding.C
	${C++} -o $@ testBlinding.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING} 
	# ${C++} -I ${RANDOMLIB} testBlinding.C ${BLINDING} -o testBlinding.exe 

BlindedEDMAnalysis.exe: BlindedEDMAnalysis.C
	${C++} -o $@ BlindedEDMAnalysis.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS) -I ${RANDOMLIB} ${BLINDING}
#BlindedEDMAnalysis.exe: BlindedEDMAnalysis.C
#	${C++} -o $@ BlindedEDMAnalysis.C $(Objects) $(ROOTFLAGS) $(ROOTLIBS)
	#${C++} -I ${RANDOMLIB} ${BLINDING} -o $@ BlindedEDMAnalysis.C 

clean:
	rm *exe