{

	//float a;
	TRandom3 rndm;
	TH1F *hist = new TH1F("a","a",100,-1,1);

	for (int i=0;i<10000;++i){
		hist->Fill(rndm.Gaus(0,0.3));
		//cout<<a<<endl;
	}

	TCanvas *c = new TCanvas();
	hist->Draw("HIST");
	c->SaveAs("toy.png");
}