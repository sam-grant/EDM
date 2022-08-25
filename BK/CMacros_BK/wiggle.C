void wiggle() { 

	TF1 *wiggle = new TF1("wiggle","[0] * exp(-x/[1]) * (1 - ([2] *  cos(([3] * x) + [4])))", 30, 70);

	wiggle->SetParameter(0, 1300);
	wiggle->SetParameter(1, 64);
	wiggle->SetParameter(2, 0.3);
	wiggle->SetParameter(3,0.00143934*1e3);
	wiggle->SetParameter(4, 2);

	TCanvas *c = new TCanvas("c","c",800,600);
	wiggle->SetNpx(10e3);
	wiggle->Draw();
	c->SaveAs("../Images/MC/Bz/test/tmp_wiggle.png");

	return;
}