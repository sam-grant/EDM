void Gaus() { 

	// Set random number pointer with seed
	TRandom3 *randGen = new TRandom3(12345);

	TH1D *h_gaus = new TH1D("h_gaus","",100,-5,5);

	for (int i(0); i<1000; i++) {

		h_gaus->Fill(randGen->Gaus(0,1));

	}

	TCanvas *c = new TCanvas("c","c",800,600);

	h_gaus->Draw("HIST");

	c->SaveAs("../Images/h_gaus.png");


}