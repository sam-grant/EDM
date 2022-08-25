Local code for g-2 Run-1 muon EDM analysis 
------------------------------------------

Important information:

---> By far, the majority of the work is done in /EDM/CMacros   
---> Base histograms are produced in /gm2/app/users/sgrant/analysis/EDM/ReadNTup, or ReadNTup (github)  
---> Compiled code is controlled by Makefile (to run, type "make")  
---> Header files /EDM/CMacros/Utils.h and /EDM/CMacros/FancyDraw.h contain some common fitting and plotting code, used by most of the .C files in /EDM/CMacros     
---> Most important fitting code for the EDM is /EDM/CMacros/BlindedEDMFitter.C and /EDM/CMacros/BlindedEDMSimFitter.C  
---> The output from the fitters are taken by /EDM/CMacros/GetTiltAngle.C, which applies sorrections are applied calculated the tilt angle. This also prints results in .csv format  
---> theta_y vs y acceptance maps are produced by /EDM/CMacros/AcceptanceMaps.C   
---> The acceptance correction, used in /EDM/CMacros/GetTiltAngle.C, is calculated in /EDM/CMacros/AcceptanceCorrection.C  
---> Toy radial magnetic field measurement self-contained in ToyRadialFieldScan.C ToyRadialFieldScan.h   
---> Radial magnetic field measurement fits are performed in /EDM/CMacros/AnalyseBr_nearline.C  
---> The rest of the stuff here is mostly just macros to create specific plots   