{

	TH1D *h1 = new TH1D("h", "h", 100, -10, 10);
	TRandom3 *rdn = new TRandom3(); 

	for(int i(0); i<100; i++) h1->Fill(rdn->Gaus(0,1));

   TCanvas *c = new TCanvas("c", "c", 800,800);
   c->Draw();
   TPad *p1 = new TPad("p1","p1",0, 0, 1, 1);//0.1,0.2,0.9,1.);
   p1->Draw();
   p1->cd();
   h1->Draw();

   c->cd(0);
   TPad *p2 = new TPad("p2","p2", .69, .69, .89, .89);
   p2->Draw();
   p2->cd();
   h1->Draw();
}