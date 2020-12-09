TString OneSigFig(double num) { 
  return Form("%5.1g", num);
}

TString ThreeSigFig(double num) { 
  return Form("%5.3g", num);
}

TString SciNotation(double num) { 
	TString text;
	text = ThreeSigFig(num);
  text.ReplaceAll("e+0","#times10^{");
  text.ReplaceAll("e-0","#times10^{#minus");
  text.ReplaceAll("e+","#times10^{");
  text.ReplaceAll("e-","#times10^{#minus");
	if(abs(num)>10 || abs(num)<0.1) text.Append("}");
	return text;
}

TString FormatNegativeNumber(double num) { 
  TString text;
  text = ThreeSigFig(num);
  if(num>=0) {
    //std::cout<<"This number is positive..."<<std::endl;
    return text;
  } else {
    text.ReplaceAll("-","#minus");
  }
  return text;
}

// Crude analyser
void analyser(){

	double x_quad[2] = {1/14., 1/18.}; double zeros[2] = {0., 0.};
	double y_quad1[2] = {77.5427, 76.9278}; double y_quad2[2] = {73.8099, 74.0176};
	double ey_quad1[2] = {0.0170837, 0.0163027}; double ey_quad2[2] = {0.0184163, 0.0165531};

	TGraphErrors *quadScan_1 = new TGraphErrors(2, x_quad, y_quad1, zeros, ey_quad1);
	TGraphErrors *quadScan_2 = new TGraphErrors(2, x_quad, y_quad2, zeros, ey_quad2);

	// Fit 
	TF1 *quadFit1 = new TF1("quadFit1", "[0]+[1]*x"); TF1 *quadFit2 = new TF1("quadFit2", "[0]+[1]*x");
	quadScan_1->Fit(quadFit1,"M"); quadScan_2->Fit(quadFit2,"M"); 

	cout<<"NDF 1:\t"<<quadFit1->GetNDF()<<endl;
	cout<<"chi2ndf 1:\t"<<quadFit1->GetChisquare()<<endl;
	cout<<"chi2ndf red 1:\t"<<quadFit1->GetChisquare()/quadFit1->GetNDF()<<endl;
	cout<<"NDF 2:\t"<<quadFit2->GetNDF()<<endl;
	cout<<"chi2ndf 2:\t"<<quadFit2->GetChisquare()<<endl;
	cout<<"chi2ndf red 2:\t"<<quadFit2->GetChisquare()/quadFit2->GetNDF()<<endl;

	// Draw
	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	c1->SetRightMargin(0.20);

	quadScan_1->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
	quadScan_1->GetXaxis()->SetTitleSize(.04);
	quadScan_1->GetYaxis()->SetTitleSize(.04);
	quadScan_1->GetXaxis()->SetTitleOffset(1.1);
	quadScan_1->GetYaxis()->SetTitleOffset(1.1);
	quadScan_1->GetXaxis()->CenterTitle(true);
	quadScan_1->GetYaxis()->CenterTitle(true);
	quadScan_1->GetYaxis()->SetMaxDigits(4);
	quadScan_1->SetMarkerStyle(20); //  Full circle
	quadScan_2->SetMarkerStyle(24); //  Full circle
	quadScan_1->GetYaxis()->SetRangeUser(72,79);
	quadScan_1->Draw("AP");
	quadScan_2->Draw("P SAME");

	TLegend *l1 = new TLegend(0.81,0.35,0.99,0.65);
	l1->SetBorderSize(0);
	l1->SetHeader("#LTB_{r}^{App}#GT","C");
	l1->AddEntry(quadScan_1,"+30 ppm");
	l1->AddEntry(quadScan_2,"#minus30 ppm");
	l1->Draw("same");

	c1->SaveAs("Images/quadScans.pdf");
	c1->SaveAs("Images/quadScans.png");
	c1->SaveAs("Images/quadScans.C");

	delete c1;

	// Now calc the background field

	double BrTot[2] = {quadFit1->GetParameter(1),quadFit2->GetParameter(1)};
	double BrToTErr[2] = {quadFit1->GetParError(1),quadFit2->GetParError(1)};

	double BrApp[2] = {30, -30};

	TGraphErrors *result = new TGraphErrors(2, BrApp, BrTot, zeros, BrToTErr);
	TF1 *finalFit = new TF1("finalFit", "[0]+[1]*x");
	TFitResultPtr mainFitRes = result->Fit(finalFit,"SMQ");
	//result->Fit(finalFit,"M");

	double chi2ndf = finalFit->GetChisquare() / finalFit->GetNDF();
	double par0 = finalFit->GetParameter(0);
	double err0 = finalFit->GetParError(0);
	double par1 = finalFit->GetParameter(1);
	double err1 = finalFit->GetParError(1);
	// We want to retain the sign here
	double xint = - par0 / par1; 
		// From Taylor 9.9
	
	double BrErr = fabs(xint) * sqrt(pow(err0/par0,2) + pow(err1/par1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(par0*par1));
	double xint_err = BrErr;

	// Draw
	TCanvas *c2 = new TCanvas("c2","c2",800,600);
	result->Draw();
	gPad->Update();

	TPaveText *names = new TPaveText(0.11,0.68,0.33,0.89,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	//names->AddText("#chi^{2}/ndf"); 
	names->AddText("Gradient"); 
	names->AddText("Y-intercept [mm#upointkV]"); 
	names->AddText("#LTB_{r}^{Bkg}#GT [ppm]"); 

	TPaveText *values = new TPaveText(0.50,0.68,0.60,0.89,"NDC");
	values->SetTextAlign(33);

	//values->AddText(ThreeSigFig(chi2ndf));
	values->AddText(FormatNegativeNumber(par1)+"#pm"+ThreeSigFig(err1));
	values->AddText(FormatNegativeNumber(par0)+"#pm"+ThreeSigFig(err0));
	values->AddText(ThreeSigFig(fabs(xint))+"#pm"+ThreeSigFig(xint_err));

	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(26);

	TLine *x_line = new TLine(gPad->GetUxmin(),0,xint,0);
	x_line->SetLineStyle(2);
	x_line->SetLineWidth(2);
	TLine *y_line = new TLine(xint,gPad->GetUymin(),xint,0);
	y_line->SetLineStyle(2);
	y_line->SetLineWidth(2);

	result->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
	result->GetXaxis()->SetTitleSize(.04);
	result->GetYaxis()->SetTitleSize(.04);
	result->GetXaxis()->SetTitleOffset(1.1);
	result->GetYaxis()->SetTitleOffset(1.2);
	result->GetXaxis()->CenterTitle(true);
	result->GetYaxis()->CenterTitle(true);
	result->GetYaxis()->SetMaxDigits(4);
	result->SetMarkerStyle(20); //  Full circle

	result->Draw("AP");
	values->Draw("same");
	names->Draw("same");
	x_line->Draw("same");
	y_line->Draw("same");

	c2->SaveAs("Images/result.pdf");
	c2->SaveAs("Images/result.png");
	c2->SaveAs("Images/result.C");

	delete c2;
	//fit->Draw("same");

	return;

}

	// 
	//TGraphErrors *result = new TGraphErrors(n, x_2, y_3, ex, ey_3);




