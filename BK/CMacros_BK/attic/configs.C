{

	double configs[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	double dBr[12] = {1.016,0.7367,0.9937,0.6359,1.622,1.174,1.583,1.012,0.8414,0.7375,0.9935,0.6361};
	double time[12] = {2*2*0.33333333, 2*4*0.33333333, 2*2*0.33333333, 2*5*0.33333333, 2*2*0.33333333, 2*4*0.33333333, 2*2*0.33333333, 2*5*0.33333333, 3*3*0.33333333, 3*4*0.33333333, 3*2*0.33333333, 3*5*0.33333333};

	TGraph *gr1 = new TGraph(12, configs, dBr);
	TGraph *gr2 = new TGraph(12, configs, time);
	TGraph *gr3 = new TGraph(12, time, dBr);

	TCanvas *c1 = new TCanvas("c1","c1",800,600);
	
	gr1->SetTitle(";Config;#deltaB_{r} [ppm]");
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.1);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle
	gr1->Draw("AP");
	//c->SetGridx();

	c1->SaveAs("../Images/MC/ToyRadialFieldScan/dBr_vs_config.pdf");
	c1->SaveAs("../Images/MC/ToyRadialFieldScan/dBr_vs_config.png");
	c1->SaveAs("../Images/MC/ToyRadialFieldScan/dBr_vs_config.C");

	TCanvas *c2 = new TCanvas("c2","c2",800,600);

	gr2->SetTitle(";Config;Max run time [hr]");
	gr2->GetXaxis()->SetTitleSize(.04);
	gr2->GetYaxis()->SetTitleSize(.04);
	gr2->GetXaxis()->SetTitleOffset(1.1);
	gr2->GetYaxis()->SetTitleOffset(1.1);
	gr2->GetXaxis()->CenterTitle(true);
	gr2->GetYaxis()->CenterTitle(true);
	gr2->GetYaxis()->SetMaxDigits(4);
	gr2->SetMarkerStyle(20); //  Full circle
	gr2->Draw("AP");
	//c->SetGridx();

	c2->SaveAs("../Images/MC/ToyRadialFieldScan/time_vs_config.pdf");
	c2->SaveAs("../Images/MC/ToyRadialFieldScan/time_vs_config.png");
	c2->SaveAs("../Images/MC/ToyRadialFieldScan/time_vs_config.C");


	TCanvas *c3 = new TCanvas("c3","c3",800,600);

	gr3->SetTitle(";Max run time [hr];#deltaB_{r} [ppm]");
	gr3->GetXaxis()->SetTitleSize(.04);
	gr3->GetYaxis()->SetTitleSize(.04);
	gr3->GetXaxis()->SetTitleOffset(1.1);
	gr3->GetYaxis()->SetTitleOffset(1.1);
	gr3->GetXaxis()->CenterTitle(true);
	gr3->GetYaxis()->CenterTitle(true);
	gr3->GetYaxis()->SetMaxDigits(4);
	gr3->SetMarkerStyle(20); //  Full circle
	gr3->Draw("AP");
	//c->SetGridx();

	c3->SaveAs("../Images/MC/ToyRadialFieldScan/dBr_vs_time.pdf");
	c3->SaveAs("../Images/MC/ToyRadialFieldScan/dBr_vs_time.png");
	c3->SaveAs("../Images/MC/ToyRadialFieldScan/dBr_vs_time.C");


}