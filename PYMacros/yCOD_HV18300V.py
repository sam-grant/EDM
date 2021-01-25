import pandas as pd
import numpy as np
from ROOT import TFile, TGraph, TH1F, TCanvas, TF1, TMath, gPad, gStyle
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

def DrawTGraphLine(graph, title, fname): #, grid):

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
	graph.Draw("APL")


	# c.SetGridy()
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")
	c.SaveAs(fname+".C")
	# c2.SaveAs(fname+".pdf")

	return

def DrawTH1(hist, title, fname): #, grid):

	c = TCanvas("c","c",800,600)

	hist.SetTitle(title)			
	hist.GetXaxis().SetTitleSize(.04)
	hist.GetYaxis().SetTitleSize(.04)
	hist.GetXaxis().SetTitleOffset(1.2)
	hist.GetYaxis().SetTitleOffset(1.25)
	hist.GetXaxis().CenterTitle(1)
	hist.GetYaxis().CenterTitle(1)
	hist.GetYaxis().SetMaxDigits(4)
	hist.SetLineWidth(3)
	hist.SetLineColor(1)
	hist.Draw("HIST")


	# c.SetGridy()
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")
	c.SaveAs(fname+".C")
	# c2.SaveAs(fname+".pdf")

	return

data = pd.read_csv('../txt/yCOD_HV18300V.txt', sep='\t')#,header=None)

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
    x.append(float(theta[i]*(np.pi/180)))
    y.append(float(yPos[i])*1e3)

gr = TGraph(n,x,y)
#gr.GetXaxis().SetRangeUser(0,360)
gr.GetXaxis().SetRangeUser(0,360) #2*np.pi)
DrawTGraph(gr, ';#theta [rad];#LTy#GT [mm]', '../Images/MC/ClosedOrbit/y_vs_theta')

gr.SetName('y_vs_theta')

output1 = TFile('../Plots/MC/ClosedOrbit/y_vs_theta.root', 'RECREATE')
gr.Write()
output1.Close()

fCOD_0 = TF1('fCOD_0', '( ([0]/0.108) )', 0, 2*np.pi)
fCOD_1 = TF1('fCOD_1', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) )', 0, 2*np.pi)
fCOD_2 = TF1('fCOD_2', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) )', 0, 2*np.pi)
fCOD_3 = TF1('fCOD_3', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) )', 0, 2*np.pi)
fCOD_4 = TF1('fCOD_4', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) )', 0, 2*np.pi)
fCOD_5 = TF1('fCOD_5', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) )', 0, 2*np.pi)
fCOD_6 = TF1('fCOD_6', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) )', 0, 2*np.pi)
fCOD_7 = TF1('fCOD_7', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) ) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108)', 0, 2*np.pi)
fCOD_8 = TF1('fCOD_8', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) ) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108)  + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108)', 0, 2*np.pi)
fCOD_9 = TF1('fCOD_9', '( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) ) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108)  + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) + ([17]*cos(9*x)+[18]*sin(9*x))/(81-0.108)', 0, 2*np.pi)

funcs = [ fCOD_0, fCOD_1, fCOD_2, fCOD_3, fCOD_4, fCOD_5, fCOD_6, fCOD_7, fCOD_8, fCOD_9 ]

residuals = []

chis = array('f')

fitOrder = array('f')

# Setup output file for fits
output2 = TFile('../Plots/MC/ClosedOrbit/fits_y_vs_theta.root','RECREATE')

# Do the fits
for i_fit in range(10):

	print('Fit order '+str(i_fit))

	gr.Fit(funcs[i_fit],"R")
	
	gStyle.SetOptFit(20222)

	gr.SetName('fit_y_vs_theta_'+str(i_fit))
	gr.Write()

	DrawTGraph(gr, ';#theta [rad];#LTy#GT [mm]', '../Images/MC/ClosedOrbit/fit_y_vs_theta_'+str(i_fit))

	chis.append( funcs[i_fit].GetChisquare() / funcs[i_fit].GetNDF() )

	fitOrder.append( i_fit )

	y_res = array('f')

	h_res = TH1F('h_res',';Fit residuals [mm];Entries', 100, -0.35, 0.35)

	for i_point in range(gr.GetN()): 
		res_val = float(gr.GetPointY(i_point) - funcs[i_fit].Eval(x[i_point]))
		y_res.append(res_val)
		h_res.Fill(res_val)

	res = TGraph(gr.GetN(), x, y_res)

	DrawTGraph(res, ';#theta [rad];Fit residual [mm]', '../Images/MC/ClosedOrbit/fit_residual_'+str(i_fit))

	DrawTH1(h_res, ';Fit residual [mm];Entries', '../Images/MC/ClosedOrbit/1D_residual_'+str(i_fit))

output2.Close()

chi_vs_order = TGraph(10, fitOrder, chis)

DrawTGraphLine(chi_vs_order, ';Fit order;#chi^{2}/ndf', '../Images/MC/ClosedOrbit/fit_chi_vs_order');