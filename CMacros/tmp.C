	

void tmp() {

	TFile *simFile = TFile::Open("../Plots/MC/ClosedOrbit/y_vs_theta.root"); 

	TGraphErrors *sim = (TGraphErrors*)simFile->Get("y_vs_theta"); 

	TCanvas *c = new TCanvas("c","c",800,600);

	sim->Draw();

	c->SaveAs("tmp.png");

	return;


}
