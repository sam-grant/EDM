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

// Crude analyser for cross check
void analyser(){


	double x_quad[4] = {1/14., 1/16., 1/18., 1/19.5}; double zeros[4] = {0., 0., 0., 0.};
	double x_quad_m50[3] = {1/16., 1/18., 1/19.5}; double zeros_m50[3] = {0., 0., 0.};
	double x_quad_p10[3] = {1/14., 1/16., 1/19.5}; double zeros_p10[3] = {0., 0., 0.};

	double y_quad_m50[3] = {72.0732, 72.3307, 72.5039}; 
	double y_quad_m30[4] = {72.9288, 73.119, 73.2948, 73.395}; 
	double y_quad_m10[4] = {74.1448, 74.2453, 74.2103, 74.3001};
	double y_quad_p10[3] = {75.3559, 75.2584, 75.1707};
	double y_quad_p30[4] = {76.5313, 76.3535, 76.1957, 76.1127}; 
	double y_quad_p50[4] = {77.7892, 77.436, 77.1666, 77.0001}; 


	double ey_quad_m50[3] = {0.0225984, 0.0175252, 0.0187124};
	double ey_quad_m30[4] = {0.0226779, 0.022902, 0.0172034, 0.0139087};
	double ey_quad_m10[4] = {0.0178356, 0.0190314, 0.0186503, 0.021126};
	double ey_quad_p10[3] = {0.0217483, 0.0147147, 0.0190428};
	double ey_quad_p30[4] = {0.0178466, 0.0254065, 0.0168674, 0.0204641};
	double ey_quad_p50[4] = {0.0249031, 0.0198802, 0.0206094, 0.0201256}; 

/*	double ey_quad_m50[3] = {0., 0., 0.};
	double ey_quad_m30[4] = {0., 0., 0., 0.};
	double ey_quad_m10[4] = {0., 0., 0., 0.};
	double ey_quad_p10[3] = {0., 0., 0.};
	double ey_quad_p30[4] = {0., 0., 0., 0.};
	double ey_quad_p50[4] = {0., 0., 0., 0.};*/


	TGraphErrors *quadScan_m50 = new TGraphErrors(3, x_quad_m50, y_quad_m50, zeros_m50, ey_quad_m50);
	TGraphErrors *quadScan_m30 = new TGraphErrors(4, x_quad, y_quad_m30, zeros, ey_quad_m30);
	TGraphErrors *quadScan_m10 = new TGraphErrors(4, x_quad, y_quad_m10, zeros, ey_quad_m10);
	TGraphErrors *quadScan_p10 = new TGraphErrors(3, x_quad_p10, y_quad_p10, zeros_p10, ey_quad_p10);
	TGraphErrors *quadScan_p30 = new TGraphErrors(4, x_quad, y_quad_p30, zeros, ey_quad_p30);
	TGraphErrors *quadScan_p50 = new TGraphErrors(4, x_quad, y_quad_p50, zeros, ey_quad_p50);

	// Fit 
	TF1 *quadFit_m50 = new TF1("quadFit_m50", "[0]+[1]*x");
	TF1 *quadFit_m30 = new TF1("quadFit_m30", "[0]+[1]*x");
	TF1 *quadFit_m10 = new TF1("quadFit_m10", "[0]+[1]*x");
	TF1 *quadFit_p10 = new TF1("quadFit_p10", "[0]+[1]*x");
	TF1 *quadFit_p30 = new TF1("quadFit_p30", "[0]+[1]*x");
	TF1 *quadFit_p50 = new TF1("quadFit_p50", "[0]+[1]*x");

	quadScan_m50->Fit(quadFit_m50, "M"); 
	quadScan_m30->Fit(quadFit_m30, "M"); 
	quadScan_m10->Fit(quadFit_m10, "M"); 
	quadScan_p10->Fit(quadFit_p10, "M"); 
	quadScan_p30->Fit(quadFit_p30, "M"); 
	quadScan_p50->Fit(quadFit_p50, "M"); 

	double chi_p50 = quadFit_p50->GetChisquare()/quadFit_p50->GetNDF();
	double chi_p30 = quadFit_p30->GetChisquare()/quadFit_p30->GetNDF();
	double chi_p10 = quadFit_p10->GetChisquare()/quadFit_p10->GetNDF();
	double chi_m10 = quadFit_m10->GetChisquare()/quadFit_m10->GetNDF();
	double chi_m30 = quadFit_m30->GetChisquare()/quadFit_m30->GetNDF();
	double chi_m50 = quadFit_m50->GetChisquare()/quadFit_m50->GetNDF();

	cout<<"chi_m50\t"<<chi_m50<<endl;
	cout<<"chi_m30\t"<<chi_m30<<endl;
	cout<<"chi_m10\t"<<chi_m10<<endl;
	cout<<"chi_p10\t"<<chi_p10<<endl;
	cout<<"chi_p30\t"<<chi_p30<<endl;
	cout<<"chi_p50\t"<<chi_p50<<endl;

	double chis[6] = {chi_m50, chi_m30, chi_m10, chi_p10, chi_p30, chi_p50};
	double br_app[6] = {-50., -30., -10., 10., 30., 50.};

	TGraph *quad_chi = new TGraph(6, br_app, chis);

	TCanvas *c0 = new TCanvas("c0", "c0", 800, 600);

	quad_chi->SetMarkerStyle(20);
	quad_chi->SetTitle(";#LTB_{r}^{App}#GT [ppm];#chi^{2}/ndf");
	quad_chi->GetXaxis()->SetTitleSize(.04);
	quad_chi->GetYaxis()->SetTitleSize(.04);
	quad_chi->GetXaxis()->SetTitleOffset(1.1);
	quad_chi->GetYaxis()->SetTitleOffset(1.1);
	quad_chi->GetXaxis()->CenterTitle(true);
	quad_chi->GetYaxis()->CenterTitle(true);
	quad_chi->Draw("AP");

	c0->SaveAs("Images/quad_chi.pdf");
	c0->SaveAs("Images/quad_chi.png");
	c0->SaveAs("Images/quad_chi.C");
	

	// Draw
	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	c1->SetRightMargin(0.20);

	quadScan_m30->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
	quadScan_m30->GetXaxis()->SetTitleSize(.04);
	quadScan_m30->GetYaxis()->SetTitleSize(.04);
	quadScan_m30->GetXaxis()->SetTitleOffset(1.1);
	quadScan_m30->GetYaxis()->SetTitleOffset(1.1);
	quadScan_m30->GetXaxis()->CenterTitle(true);
	quadScan_m30->GetYaxis()->CenterTitle(true);
	quadScan_m30->GetYaxis()->SetMaxDigits(4);
	//quadScan_m30->SetMarkerStyle(20); //  Full circle
	//quadScan_m30->SetMarkerStyle(24); //  Full circle
	quadScan_m30->GetYaxis()->SetRangeUser(72,79);
	quadScan_m30->Draw("AP");
	
	quadScan_m50->Draw("P SAME");
	quadScan_m10->Draw("P SAME");
	quadScan_p10->Draw("P SAME");
	quadScan_p30->Draw("P SAME");
	quadScan_p50->Draw("P SAME");

	TLegend *l1 = new TLegend(0.81,0.35,0.99,0.65);
	l1->SetBorderSize(0);
	l1->SetHeader("#LTB_{r}^{App}#GT","C");

	l1->AddEntry(quadScan_m50,"#minus50 ppm");
	l1->AddEntry(quadScan_m30,"#minus30 ppm");
	l1->AddEntry(quadScan_m10,"#minus10 ppm");
	l1->AddEntry(quadScan_p10,"+10 ppm");
	l1->AddEntry(quadScan_p30,"+30 ppm");
	l1->AddEntry(quadScan_p50,"+50 ppm");

	l1->Draw("same");

	c1->SaveAs("Images/quadScans.pdf");
	c1->SaveAs("Images/quadScans.png");
	c1->SaveAs("Images/quadScans.C");

	delete c1;

	// Now calc the background field

	double BrTot[6] = {
		quadFit_m50->GetParameter(1),
		//quadFit_m30->GetParameter(1),
		quadFit_m10->GetParameter(1),
		quadFit_p10->GetParameter(1),
		quadFit_p30->GetParameter(1),
		quadFit_p50->GetParameter(1)
	};




	double BrToTErr[6] = {

		quadFit_m50->GetParError(1),
		//quadFit_m30->GetParError(1),
		quadFit_m10->GetParError(1),
		quadFit_p10->GetParError(1),
		quadFit_p30->GetParError(1),
		quadFit_p50->GetParError(1)

	}; 

	double BrToTErr[6] = {0., 0., 0., 0., 0., 0.,};

	double BrApp[6] = {-50, -30, -10, 10, 30, 50};
	// double BrApp[5] = {-50, -10, 10, 30, 50};

	TGraphErrors *result = new TGraphErrors(5, BrApp, BrTot, zeros, BrToTErr);
	TF1 *finalFit = new TF1("finalFit", "[0]+[1]*x");
	TFitResultPtr mainFitRes = result->Fit(finalFit,"SMQ");
	//result->Fit(finalFit,"M");

	double chi2ndf = finalFit->GetChisquare() / finalFit->GetNDF();
	double par0 = finalFit->GetParameter(0);
	double err0 = finalFit->GetParError(0);
	double par1 = finalFit->GetParameter(1);
	double err1 = finalFit->GetParError(1);
	double pval = finalFit->GetProb();
	// We want to retain the sign here
	double xint = - par0 / par1; 
		// From Taylor 9.9
	
	double BrErr = fabs(xint) * sqrt(pow(err0/par0,2) + pow(err1/par1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(par0*par1));
	double xint_err = BrErr;

	// Print p-value
	cout<<"Main fit p-value\t"<<pval<<endl;

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




