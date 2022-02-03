{

	TH2D *h = new TH2D("h", "h", 91, -45, +45, 91, -45, +45);

	TCanvas *c = new TCanvas("c", "c", 800, 600);

	h->Draw("COLZ");

	c->SaveAs("tmp2.png");
}