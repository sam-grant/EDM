Offline code for the g-2 Run-1 muon EDM analysis 
------------------------------------------------

Important information:

---> By far, the majority of the work is done in CMacros   
---> Base histograms are produced in /gm2/app/users/sgrant/analysis/EDM/ReadNTup, or ReadNTup (github)  
---> Compiled code is controlled by Makefile (to run, type "make")  
---> Header files CMacros/Utils.h and CMacros/FancyDraw.h contain some common fitting and plotting code, used by most of the .C files in /EDM/CMacros     
---> Most important fitting code for the EDM is CMacros/BlindedEDMFitter.C and CMacros/BlindedEDMSimFitter.C  
---> The output from the fitters are taken by CMacros/GetTiltAngle.C, which applies corrections and calculates the tilt angle. This also prints results in .csv format  
---> theta_y vs y acceptance maps are produced by CMacros/AcceptanceMaps.C   
---> The acceptance correction, used in CMacros/GetTiltAngle.C, is calculated in CMacros/AcceptanceCorrection.C  
---> Toy radial magnetic field measurement self-contained in ToyRadialFieldScan.C ToyRadialFieldScan.h   
---> Radial magnetic field measurement fits are performed in CMacros/AnalyseBr_nearline.C  
---> The rest of the stuff here is mostly just macros to create specific plots   