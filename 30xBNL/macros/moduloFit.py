import os, sys
sys.path.append('../utils/')
import CommonUtils as cu 
import numpy as np
from ROOT import TFile, TH1, TMath, TGraphErrors, TPaveText, TF1

cu.LoadCommonUtils()

def SinFunc(): 
 	return TF1('SinFit', '[0] * sin([1] * x) + [2]', 0, cu.G2PERIOD, 3)


# def SinFit(graph):
# 	f1 = TF1('SinFit', '[0] * np.sin([1] * x) + [2]', 0, cu.G2PERIOD, 3)
#  	graph.Fit(f1,'MR')
#  	return
# 

config="AllQ"
# config="RedQ"
# config="NoQ"

# Load file
file = TFile.Open('../plots/verticalAnglePlots'+str(config)+'.root')
print('Reading file...\t'+str(file))

# Plot sanity plots
cu.DrawTH1(file.Get("DecayVertexMom"), ";Decay vertex momentum [MeV];Decay vertices","../images/"+str(config)+"/DecayVertexMom")
cu.DrawTH1(file.Get("pValues"), ";p-value;Tracks","../images/"+str(config)+"/pValues")
cu.DrawTH1(file.Get("nHits"), ";nHits;Tracks","../images/"+str(config)+"/nHits")
cu.DrawTH2(file.Get("DecayX_vs_DecayZ"), ";Decay vertex position Z [mm];Decay vertex position Z [mm]","../images/"+str(config)+"/DecayX_vs_DecayZ")

# Get unmodulated hist
hist0 = file.Get("ThetaY_vs_DecayTime")
cu.DrawTH2(hist0,";t [#mus];#theta_{y} [mrad]","../images/"+str(config)+"/ThetaYVersusTime")
# Draw X and Y projections
cu.DrawTH1(hist0.ProjectionX(), ";t [#mus];Entries", "../images/"+str(config)+"/ProjXThetaYVersusTime")
cu.DrawTH1(hist0.ProjectionY(), ";#LT#theta_{y}#GT [mrad];Entries", "../images/"+str(config)+"/ProjYThetaYVersusTime")

# Get modulo hist 
hist = file.Get("ThetaY_vs_DecayTime_Modulo_2")
cu.DrawTH2(hist,";t_{g#minus2}^{mod} [#mus];#theta_{y} [mrad]","../images/"+str(config)+"/ThetaYTimeModulo")

# Generate profile
prof = hist.ProfileX()
print('Created x-profile..\t'+str(prof)+"\tN = "+str(prof.GetEntries()))
cu.DrawTH1(prof, ";t^{mod}_{g#minus2} [#mus];#LT#theta_{y}#GT [mrad];", "../images/"+str(config)+"/ProfThetaYTimeModulo") 

# Draw X and Y projections
cu.DrawTH1(hist.ProjectionX(), ";t^{mod}_{g#minus2} [#mus];Entries", "../images/"+str(config)+"/ProjXThetaYTimeModulo")
cu.DrawTH1(hist.ProjectionY(), ";#LT#theta_{y}#GT [mrad];Entries", "../images/"+str(config)+"/ProjYThetaYTimeModulo")

# Rebin
print("Nbins pre rebin = \t"+str(prof.GetNbinsX()))
print("Binwidth...\t"+str(prof.GetXaxis().GetBinWidth(1)*1e3)+" ns")

prof.Rebin(150) #10) 

print("Nbins post rebin = \t"+str(prof.GetNbinsX()))
print("Binwidth...\t"+str(prof.GetXaxis().GetBinWidth(1)*1e3)+" ns")

cu.DrawTH1(prof, ";t^{mod}_{g#minus2} [#mus];#LT#theta_{y}#GT [mrad]", "../images/"+str(config)+"/RebinProfThetaYTimeModulo") # ROOT syntax makes so much sense WOW

# Now load into TGraph 
xVals = []
yVals = [] 
yErr = []
xErr = [] 

for i in range(prof.GetNbinsX()+1):
	if(i==0): continue
	xVals.append(prof.GetBinCenter(i))
	yVals.append(prof.GetBinContent(i))
	yErr.append(prof.GetBinError(i))
	xErr.append(0)

graph = cu.DefineScatErrors(xVals, xErr, yVals, yErr)
graph.GetXaxis().SetRangeUser(0, cu.G2PERIOD)
# graph.GetYaxis().SetRangeUser(-0.85,0.85)
# graph = TGraphErrors(len(xVals),xVals,xErr,yVals,yErr)
cu.DrawModuloScat(graph, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", "../images/"+str(config)+"/TGraphThetaYTimeModulo", prof.GetEntries())

###############
# Perform fit #
###############
# func = SinFunc() #TF1('SinFit', SinFunc(), 0, cu.G2PERIOD, 3)
# graph.Fit('func')
# 
# cu.DrawModuloFit(graph, func, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", "../images/"+str(config)+"/TGraphThetaYTimeModuloFit", prof.GetEntries())

