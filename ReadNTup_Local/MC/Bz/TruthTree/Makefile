C++ = g++
C_FLAGS = -g

ROOTCFLAGS=$(shell root-config --cflags)
ROOTLIBS=$(shell root-config --libs)

SOURCES = $(shell find . ! -name "Reader.C" -name "*.C")

all :  Reader.o $(SOURCES:.C=)

clean:
	rm *.o $(SOURCES:.C=)


Reader.o: Reader.C Reader.h
	$(C++) -c $(ROOTCFLAGS) $(C_FLAGS) Reader.C -o Reader.o

#Drawer: Drawer.C 
#	$(C++) $(ROOTCFLAGS) $(C_FLAGS) Drawer.C -o Drawer $(ROOTLIBS)

#Residuals: Residuals.C 
#	$(C++) $(ROOTCFLAGS) $(C_FLAGS) Residuals.C -o Residuals $(ROOTLIBS)


##generic rule for any plotter:
%: %.C Plotter.h Reader.o
	$(C++) $(ROOTCFLAGS) $(C_FLAGS) Reader.o $<  -o $@  $(ROOTLIBS)




