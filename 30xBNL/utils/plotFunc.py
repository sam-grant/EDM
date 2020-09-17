from ROOT import TH1, TH2, TGraphErrors, TCanvas, TLegend, gStyle, TPad, TGaxis, gPad, TLine
from array import array

# Need some overlay functionality, and TGraphErrors. 
# Get these from truthLRPlotter.py

def LoadPlotFunc ():
	print("Loaded plotFunc.py...\n")
	return

def FancyDraw1D(hist, title, fname): 

	c = TCanvas("c","c",800,600)

	hist.SetTitle(title)
			
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

	hist.Draw()
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def FancyDraw1DOverlay(hist1, hist2, title, fname): 

	c = TCanvas("c","c",800,600)

	hist1.SetTitle(title)

	leg = TLegend(0.60,0.65,0.89,0.89)
	#leg.SetHeader("Mean time offset")
	leg.AddEntry(hist1,"#splitline{"+str(hist1.GetName())+"}{Mean = "+str('%s' % float('%.2g' % hist1.GetMean()))+"#pm"+str('%s' % float('%.1g' % hist1.GetMeanError()))+" ns}")
	leg.AddEntry(hist2,"#splitline{"+str(hist2.GetName())+"}{Mean = "+str('%s' % float('%.2g' % hist2.GetMean()))+"#pm"+str('%s' % float('%.1g' % hist2.GetMeanError()))+" ns}")
			
	leg.SetBorderSize(0)

	hist1.SetStats(0)
	hist2.SetStats(0)

	hist1.GetXaxis().SetTitleSize(.04)
	hist1.GetYaxis().SetTitleSize(.04)
	hist1.GetXaxis().SetTitleOffset(1.1)
	hist1.GetYaxis().SetTitleOffset(1.1)
	hist1.GetXaxis().CenterTitle(1)
	hist1.GetYaxis().CenterTitle(1)
 	hist1.GetYaxis().SetMaxDigits(4)

	# hist1.SetLineWidth(3)
	# hist1.SetLineColor(1)	
	hist1.SetLineColor(2)
	hist2.SetLineColor(1)

	hist1.Draw()
	hist2.Draw("SAME")
	leg.Draw("SAME")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def FancyDraw1DOverlay3(hist1, hist2, hist3, title, fname): 

	c = TCanvas("c","c",800,600)

	hist1.SetTitle(title)

	leg = TLegend(0.60,0.65,0.89,0.89)
	#leg.SetHeader("Mean time offset")
	leg.AddEntry(hist1,"#splitline{"+str(hist1.GetName())+"}{Mean = "+str('%s' % float('%.2g' % hist1.GetMean()))+"#pm"+str('%s' % float('%.1g' % hist1.GetMeanError()))+" ns}")
	leg.AddEntry(hist2,"#splitline{"+str(hist2.GetName())+"}{Mean = "+str('%s' % float('%.2g' % hist2.GetMean()))+"#pm"+str('%s' % float('%.1g' % hist2.GetMeanError()))+" ns}")
	leg.AddEntry(hist3,"#splitline{"+str(hist3.GetName())+"}{Mean = "+str('%s' % float('%.2g' % hist3.GetMean()))+"#pm"+str('%s' % float('%.1g' % hist3.GetMeanError()))+" ns}")
			
	leg.SetBorderSize(0)

	hist1.SetStats(0)
	hist2.SetStats(0)
	hist3.SetStats(0)

	hist1.GetXaxis().SetTitleSize(.04)
	hist1.GetYaxis().SetTitleSize(.04)
	hist1.GetXaxis().SetTitleOffset(1.1)
	hist1.GetYaxis().SetTitleOffset(1.1)
	hist1.GetXaxis().CenterTitle(1)
	hist1.GetYaxis().CenterTitle(1)
 	hist1.GetYaxis().SetMaxDigits(4)

	# hist1.SetLineWidth(3)
	# hist1.SetLineColor(1)	
	hist1.SetLineColor(4)
	hist2.SetLineColor(2)
	hist3.SetLineColor(1)

	hist1.Draw()
	hist2.Draw("SAME")
	hist3.Draw("SAME")
	leg.Draw("SAME")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def FancyDraw2D(hist, title, fname): 

	c = TCanvas("c","c",800,600)

	hist.SetTitle(title)
			
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
	
	# c.SaveAs(fname+".png")
	c.SaveAs(fname+".pdf")

	return

def DefineScat(x_, y_):

	x, y, ex, ey = array('d'), array('d'), array('d'), array('d')
	n = 0
	n = len(x_)
	if(n==0):
		return

	for i in range(0,n):

		x.append(x_[i])

		ex.append(0)
		y.append(y_[i])
		ey.append(0)

	return TGraphErrors(n,x,y,ex,ey)
	
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
	c.SaveAs(fname+".C")
	# c2.SaveAs(fname+".pdf")

	return

def DrawScatXYLine(graph, title, fname, xcoord, ycoord): #, grid):

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
	graph.Draw()

	gPad.Update()
	xLine = TLine(xcoord, gPad.GetUymin(), xcoord, gPad.GetUymax())
	yLine = TLine(gPad.GetUxmin(),ycoord,gPad.GetUxmax(),ycoord)
	# print(gPad.GetUymin(),gPad.GetUymax())
	xLine.SetLineWidth(3)
	xLine.SetLineColor(2)
	xLine.SetLineStyle(2)
	yLine.SetLineStyle(2)
	yLine.SetLineColor(2)
	yLine.SetLineWidth(3)

	graph.Draw("AP")
	xLine.Draw("same")
	yLine.Draw("same")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def DrawScatXYYLine(graph, title, fname, xcoord, ycoord, xcoord2): #, grid):

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
	graph.Draw()

	gPad.Update()
	xLine = TLine(xcoord, gPad.GetUymin(), xcoord, gPad.GetUymax())
	xLine2 = TLine(xcoord2, gPad.GetUymin(), xcoord2, gPad.GetUymax())
	yLine = TLine(gPad.GetUxmin(),ycoord,gPad.GetUxmax(),ycoord)
	# print(gPad.GetUymin(),gPad.GetUymax())
	xLine.SetLineWidth(3)
	xLine.SetLineColor(2)
	xLine.SetLineStyle(2)
	xLine2.SetLineWidth(3)
	xLine2.SetLineColor(2)
	xLine2.SetLineStyle(2)
	yLine.SetLineStyle(2)
	yLine.SetLineColor(2)
	yLine.SetLineWidth(3)

	graph.Draw("AP")
	xLine.Draw("same")
	# xLine2.Draw("same")
	yLine.Draw("same")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def DrawScatXYLineDoubleXaxis(graph, title, fname, xcoord, ycoord): #, grid):

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
	graph.Draw()

	gPad.Update()
	xLine = TLine(xcoord, gPad.GetUymin(), xcoord, gPad.GetUymax())
	yLine = TLine(gPad.GetUxmin(),ycoord,gPad.GetUxmax(),ycoord)
	# print(gPad.GetUymin(),gPad.GetUymax())
	xLine.SetLineWidth(3)
	xLine.SetLineColor(2)
	xLine.SetLineStyle(2)
	yLine.SetLineStyle(2)
	yLine.SetLineColor(2)
	yLine.SetLineWidth(3)

	graph.Draw("AP")
	xLine.Draw("same")
	yLine.Draw("same")

	# Make second x axis

	# axis2 = TGaxis(gPad.GetUxmax(),gPad.GetUymax(),gPad.GetUxmin(),gPad.GetUymax(),0,1e-60,20,"+L")
	# axis2.Draw("same")

	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return


def DrawScatXLine(graph, title, fname, ycoord): #, grid):

	c = TCanvas("c","c",800,600)
	# c.SetLogx()
			
	graph.SetTitle(title)			
	graph.GetXaxis().SetTitleSize(.04)
	graph.GetYaxis().SetTitleSize(.04)
	graph.GetXaxis().SetTitleOffset(1.2)
	graph.GetYaxis().SetTitleOffset(1.25)
	graph.GetXaxis().CenterTitle(1)
	graph.GetYaxis().CenterTitle(1)
	graph.GetYaxis().SetMaxDigits(4)
	graph.SetMarkerStyle(20) # Full circle
	# graph.GetXaxis().SetRangeUser(1e-22,1e-1)
	graph.Draw()

	gPad.Update()
	line = TLine(gPad.GetUxmin(),ycoord,gPad.GetUxmax(),ycoord)
	# print(gPad.GetUymin(),gPad.GetUymax())
	line.SetLineStyle(2)
	line.SetLineColor(2)
	line.SetLineWidth(3)


	graph.Draw("AP")
	line.Draw("same")

	# 
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def DrawScatYLine(graph, title, fname, xcoord): #, grid):

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
	graph.Draw()

	gPad.Update()
	# line = TLine(gPad.GetUxmin(),ycoord,gPad.GetUxmax(),ycoord)
	line = TLine(xcoord, gPad.GetUymin(), xcoord, gPad.GetUymax())
	# print(gPad.GetUymin(),gPad.GetUymax())
	line.SetLineStyle(2)
	line.SetLineColor(2)
	line.SetLineWidth(3)

	graph.Draw("AP")
	line.Draw("same")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def DrawScat2XLine(graph, title, fname, ycoord1, ycoord2): #, grid):

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
	graph.Draw()

	gPad.Update()
	line1 = TLine(gPad.GetUxmin(),ycoord1,gPad.GetUxmax(),ycoord1)
	line2 = TLine(gPad.GetUxmin(),ycoord2,gPad.GetUxmax(),ycoord2)
	# print(gPad.GetUymin(),gPad.GetUymax())
	line1.SetLineStyle(2)
	line1.SetLineColor(2)
	line1.SetLineWidth(3)
	line2.SetLineStyle(2)
	line2.SetLineColor(2)
	line2.SetLineWidth(3)

	graph.Draw("AP")
	line1.Draw("same")
	line2.Draw("same")
	
	c.SaveAs(fname+".C")
	c.SaveAs(fname+".pdf")

	return

def DrawScatOverlay(graph1, graph2, name1, name2, title, fname): #, grid):

	c = TCanvas("c","c",800,600)

	leg = TLegend(0.69,0.89,0.69,0.89)
	leg.AddEntry(graph1,name1)
	leg.AddEntry(graph2,name2)
	leg.SetBorderSize(0)

	graph1.SetTitle(title)			
	graph1.GetXaxis().SetTitleSize(.04)
	graph1.GetYaxis().SetTitleSize(.04)
	graph1.GetXaxis().SetTitleOffset(1.2)
	graph1.GetYaxis().SetTitleOffset(1.2)
	graph1.GetXaxis().CenterTitle(1)
	graph1.GetYaxis().CenterTitle(1)
	graph1.GetYaxis().SetMaxDigits(4)
	graph1.SetMarkerStyle(20) # Full circle
	graph2.SetMarkerStyle(24) # Open circle
	graph1.Draw("AP")
	graph2.Draw("P SAME")
	leg.Draw("same")
	# c.SetRightMargin(0.13)
	# c.SetGridy()
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".C")
	# c2.SaveAs(fname+".pdf")

	return

def DrawScatRatio(graph1, graph2, ratio, name1, name2, fname): #, grid):

	c = TCanvas("c","c",800,800)
	# Upper histogram plot is pad1
	p1 = TPad("p1", "p1", 0, 0.3, 1, 1.0)
	p1.SetBottomMargin(0)  # joins upper and lower plot
	p1.Draw()
	# Lower ratio plot is pad 2
	c.cd()  # returns to main canvas before defining pad2
	p2 = TPad("p2", "p2", 0, 0.05, 1, 0.3)
	p2.SetTopMargin(0)  # joins upper and lower plot
	p2.SetBottomMargin(0.2)
	# p2.SetGridx()
	p2.Draw()

	# Now draw
	p1.cd()

	leg = TLegend(0.69,0.89,0.69,0.89)
	leg.AddEntry(graph1,name1)
	leg.AddEntry(graph2,name2)
	leg.SetBorderSize(0)
	graph1.SetTitle("")
	graph1.GetXaxis().SetRangeUser(-1,501)
	graph1.GetYaxis().SetTitle("Tracks passing quality cuts")
	# graph1.GetYaxis().SetTitleSize(20) # .04)
	graph1.GetYaxis().SetTitleOffset(1.25)
	graph1.GetYaxis().CenterTitle(1)
	graph1.SetMarkerStyle(20) # Full circle
	graph2.SetMarkerStyle(24) # Open circle
	graph1.Draw("AP")
	graph2.Draw("P SAME")
	leg.Draw("same")

	# to avoid clipping the bottom zero, redraw a small axis
  	# ratio.GetYaxis().SetLabelSize(15) # SetLabelSize(.05)
  	# axis = TGaxis(-5, 20, -5, 220, 20, 220, 510, "")
  	# axis.SetLabelFont(43)
  	# axis.SetLabelSize(15)




  	p2.cd()
  	# Sort out y-axis\
  	ratio.SetTitle("") # ;test;test")
  	y2 = ratio.GetYaxis()
  	y2.SetTitle("Ratio")
  	y2.CenterTitle(1)
  	y2.SetTitleOffset(1.75)
  	y2.SetTitleSize(20)
  	y2.SetTitleFont(43)
  	y2.SetLabelFont(43)
  	y2.SetLabelSize(15)
  	y2.SetNdivisions(6)
  	# Sort x-axis
  	x2 = ratio.GetXaxis()
  	x2.SetTitle("Lock low DCA threshold [#mum]")
  	x2.CenterTitle(1)
	x2.SetTitleSize(20) #)
	x2.SetTitleFont(43)
	x2.SetRangeUser(-1,501)
	x2.SetTitleOffset(3.5)
	x2.SetLabelFont(43)
	x2.SetLabelSize(15)
	ratio.SetLineColor(2)
	ratio.SetMarkerColor(2)
	ratio.SetMarkerStyle(24)
  	ratio.Draw("AP")
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".C")

	return

def DrawScatOverlay3(graph1, graph2, graph3, name1, name2, name3, title, fname): #, grid):

	c = TCanvas("c","c",800,600)
	c.Divide(2)



	leg = TLegend(0.69,0.89,0.69,0.89)
	leg.AddEntry(graph1,name1)
	leg.AddEntry(graph2,name2)
	leg.AddEntry(graph3,name3)
	leg.SetBorderSize(0)

	graph1.SetTitle(title)			
	graph1.GetXaxis().SetTitleSize(.04)
	graph1.GetYaxis().SetTitleSize(.04)
	graph1.GetXaxis().SetTitleOffset(1.2)
	graph1.GetYaxis().SetTitleOffset(1.2)
	graph1.GetXaxis().CenterTitle(1)
	graph1.GetYaxis().CenterTitle(1)
	graph1.GetYaxis().SetMaxDigits(4)
	graph1.SetMarkerStyle(20) # Full circle
	graph2.SetMarkerStyle(24) # Open circle
	graph3.SetMarkerStyle(22) # Full triangle
	graph1.Draw("AP")
	graph2.Draw("P SAME")
	graph3.Draw("P SAME")
	leg.Draw("same")
	# c.SetRightMargin(0.13)
	# c.SetGridy()
	c.SaveAs(fname+".pdf")
	c.SaveAs(fname+".C")
	# c2.SaveAs(fname+".pdf")

	return

def pValFrac(hist):

 	# Loop over the bins
 	# Get bin x-values
 	# if x-value is < 5%, sum the bin contents
 	# Divide by total entries
 	tracksLessThan = 0.0

 	tracks = 0

 	for bin in range(hist.GetNbinsX()):

 		pValue = hist.GetBinCenter(bin+1)
 		# print("p-value", pValue)
 		# binVal = hist.GetBinContent(bin+1) + binVal
 		if(pValue < 0.05):

 			tracks = hist.GetBinContent(bin+1) + tracks
 				# fraction = binVal / hist.GetEntries()

 	tracksLessThan = tracks / hist.GetEntries()
 	# print(tracksLessThan)

 	return tracksLessThan
