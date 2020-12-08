import pandas as pd
import numpy as np
from ROOT import TFile, TGraph, TH1D, TCanvas, TF1, TMath, gPad, gStyle
from array import array

def DrawTGraph(graph, title, fname): #, grid):

	c = TCanvas("c","c",800,600)

	graph.SetTitle(title)			
	graph.GetXaxis().SetTitleSize(.04)
	graph.GetYaxis().SetTitleSize(.04)
	graph.GetXaxis().SetTitleOffset(1.2)
	graph.GetYaxis().SetTitleOffset(1.25)
	graph.GetXaxis().CenterTitle(1)
	graph.GetYaxis().CenterTitle(1)
	graph.GetYaxis().SetMaxDigits(4)
	graph.SetMarkerStyle(20) # Full circle
	graph.Draw("AP")


	# c.SetGridy()
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")
	c.SaveAs(fname+".C")
	# c2.SaveAs(fname+".pdf")

	return



data = pd.read_csv('txt/yCOD_HV18300V.txt', sep='\t')#,header=None)

print('+++++++++++++++++ Input +++++++++++++++++')
print(data)

# Load columns in a list
yPos = data['<y>[m]'].tolist()
theta = data['Angle[deg]'].tolist()
n = len(theta)

# Make TGraph
x, y = array('f'), array('f')

for i in range(n):
    if(theta[i]=='<y>[m]' or theta[i]=='Angle[deg]'): continue
    # if(i==0): continue
    x.append(float(theta[i])*(np.pi/180))
    y.append(float(yPos[i]))

gr = TGraph(n,x,y)
#gr.GetXaxis().SetRangeUser(0,360)
gr.GetXaxis().SetRangeUser(0,2*np.pi)
DrawTGraph(gr, ';#theta [rad];#LTy#GT [mm]', 'Images/y_vs_theta')

# Fit 

fCOD = TF1('fCOD', '( ([0]/0.108) +  ([1]*cos(x+[2])/(1-0.108)) + ([3]*cos(2*x+[4])/(4-0.108)) )', 0, 2*np.pi)

fCOD.SetParameter(0,1e-6)
fCOD.SetParameter(1,0.5e-3/3)
fCOD.SetParLimits(2, -np.pi, np.pi)
#fCOD.SetParameter(2, -np.pi/2)
fCOD.SetParameter(3, 1e-3/3)
fCOD.SetParLimits(4, -np.pi, np.pi)
#fCOD.SetParameter(4, -np.pi/4)

gr.Fit(fCOD,"R")

gr.Draw()
gPad.Update()
gStyle.SetOptFit(20222)
DrawTGraph(gr, ';#theta [rad];#LTy#GT [mm]', 'Images/fit_y_vs_theta')
#print(theta)
#data = data[data['<y>[m]']
#print(data[data['<y>[m]'])
