from ROOT import TH1, TH2, TGraphErrors, TCanvas, TLegend, gStyle, TPad, TGaxis, gPad, TLine
from array import array

# Need some overlay functionality, and TGraphErrors. 
# Get these from truthLRPlotter.py

def LoadFancyDraw():
	print("Loaded FancyDraw.py...\n")
	return

def DefineTGraph(x_, y_):

	x, y = array('f'), array('f')

	n = 0
	n = len(x_)
	if(n==0):
		return

	for i in range(0,n):

		x.append(float(x_[i]))
		y.append(float(x_[i]))

	return TGraph(n,x,y)
	
def DefineTGraphErrors(x_, y_, ex_, ey_):

	x, y, ex, ey = array('f'), array('f'), array('f'), array('f')
	n = 0
	n = len(x_)

	if(n==0):
		return

	for i in range(0,n):

		x.append(float(x_[i]))
		ex.append(0.)
		y.append(float(y_[i]))
		ey.append(float(ey_[i]))

	return TGraphErrors(n,x,y,ex,ey)

def DrawTGraph(graph, title, fname): #, grid):

	c = TCanvas("c","c",800,600)
	c.SetLogx()

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