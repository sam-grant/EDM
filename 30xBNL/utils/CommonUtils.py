
from ROOT import TH1, TH2, TGraphErrors, TCanvas, TLegend, gStyle, TPad, TGaxis, gPad, TLine, TPaveText
from array import array
import numpy as np
from math import floor, log10

G2PERIOD = (2 * np.pi / 0.00143934) * 1e-3; # us

def LoadCommonUtils():
	print("Loaded CommonUtils.py...\n")
	return





def DefineScatErrors(x_, ex_, y_, ey_):

	x, y, ex, ey = array('d'), array('d'), array('d'), array('d')
	n = 0
	n = len(x_)

	if(n==0):
		return

	for i in range(0,n):

		x.append(x_[i])

		ex.append(0)
		y.append(y_[i])
		ey.append(ey_[i])

	return TGraphErrors(n,x,y,ex,ey)

def DrawScat(graph, title, fname): #, grid):

	c = TCanvas("c","c",800,600)

	graph.SetTitle(title)			
	graph.GetXaxis().SetTitleSize(.04)
	graph.GetYaxis().SetTitleSize(.04)
	graph.GetXaxis().SetTitleOffset(1.1)
	graph.GetYaxis().SetTitleOffset(1.1)
	graph.GetXaxis().CenterTitle(1)
	graph.GetYaxis().CenterTitle(1)
	graph.GetYaxis().SetMaxDigits(4)
	graph.SetMarkerStyle(20) # Full circle
	graph.Draw("AP")

	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")
	c.SaveAs(fname+".C")

	return

def DrawModuloScat(graph, title, fname, N): #, grid):

	c = TCanvas("c","c",800,600)

	txt = TPaveText(0.59,0.79,0.89,0.89,"NDC")
	txt.AddText("N:\t"+str(sci_notation(N))) 
	# txt.AddText("700<$p$<2300 MeV") 
	# txt.AddText("0<$t$<306 #mus") 

	txt.SetFillColor(0)
	txt.SetTextFont(44)
	txt.SetTextSize(26)

	graph.SetTitle(title)			
	graph.GetXaxis().SetTitleSize(.04)
	graph.GetYaxis().SetTitleSize(.04)
	graph.GetXaxis().SetTitleOffset(1.1)
	graph.GetYaxis().SetTitleOffset(1.1)
	graph.GetXaxis().CenterTitle(1)
	graph.GetYaxis().CenterTitle(1)
	graph.GetYaxis().SetMaxDigits(4)
	graph.SetMarkerStyle(20) # Full circle
	graph.Draw("AP")
	txt.Draw("same")

	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")
	c.SaveAs(fname+".C")

	return

def DrawModuloFit(graph, func, title, fname, N): #, grid):

	c = TCanvas("c","c",800,600)

	txt = TPaveText(0.59,0.79,0.89,0.89,"NDC")
	txt.AddText("N:\t"+str(sci_notation(N))) 
	# txt.AddText("700<$p$<2300 MeV") 
	# txt.AddText("0<$t$<306 #mus") 

	txt.SetFillColor(0)
	txt.SetTextFont(44)
	txt.SetTextSize(26)

	graph.SetTitle(title)			
	graph.GetXaxis().SetTitleSize(.04)
	graph.GetYaxis().SetTitleSize(.04)
	graph.GetXaxis().SetTitleOffset(1.1)
	graph.GetYaxis().SetTitleOffset(1.1)
	graph.GetXaxis().CenterTitle(1)
	graph.GetYaxis().CenterTitle(1)
	graph.GetYaxis().SetMaxDigits(4)
	graph.SetMarkerStyle(20) # Full circle
	graph.Draw("AP")
	func.Draw("same")
	txt.Draw("same")

	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")
	c.SaveAs(fname+".C")

	return
def DrawTH1(hist, title, fname): 

	c = TCanvas("c","c",800,600)

	hist.SetTitle(title)

	hist.SetStats(0)
			
	hist.GetXaxis().SetTitleSize(.04)
	hist.GetYaxis().SetTitleSize(.04)
	hist.GetXaxis().SetTitleOffset(1.1)
	hist.GetYaxis().SetTitleOffset(1.1)
	hist.GetXaxis().CenterTitle(1)
	hist.GetYaxis().CenterTitle(1)
	hist.GetYaxis().SetMaxDigits(4)

	hist.SetLineWidth(3)
	hist.SetLineColor(1)	
	hist.SetLineColor(1)

	hist.Draw("HIST")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")

	return

def DrawTH2(hist, title, fname): 

	c = TCanvas("c","c",800,600)

	hist.SetTitle(title)

	hist.SetStats(0)
			
	hist.GetXaxis().SetTitleSize(.04)
	hist.GetYaxis().SetTitleSize(.04)
	hist.GetXaxis().SetTitleOffset(1.1)
	hist.GetYaxis().SetTitleOffset(1.1)
	hist.GetXaxis().CenterTitle(1)
	hist.GetYaxis().CenterTitle(1)
	hist.GetYaxis().SetMaxDigits(4)

	gStyle.SetPalette(55)
	c.SetRightMargin(0.13)

	hist.Draw("COLZ")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".png")

	return

# Define function for string formatting of scientific notation
def sci_notation(num, decimal_digits=2, precision=None, exponent=None, mat=False):
    """
    Author: sodd 
    https://stackoverflow.com/questions/18311909/how-do-i-annotate-with-power-of-ten-formatting

    Returns a string representation of the scientific
    notation of the given number formatted for use with
    LaTeX or Mathtext, with specified number of significant
    decimal digits and precision (number of decimal digits
    to show). The exponent to be used can also be specified
    explicitly.
    """
    if exponent is None:
        exponent = int(floor(log10(abs(num))))
    coeff = round(num / float(10**exponent), decimal_digits)
    if precision is None:
        precision = decimal_digits

    
    if(mat==False): return r"${0:.{2}f}\times10^{{{1:d}}}$".format(coeff, exponent, precision)
    if(mat==True):  return "${0:.{2}f}\times10^{{{1:d}}}$".format(coeff, exponent, precision)
