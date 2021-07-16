void tmp() { 


	TF1 *AsymFunc = new TF1("AsymFunc", "(-1-x+8*x*x)/(5+5*x-4*x*x)", 0, 1);

	TCanvas *c = new TCanvas();

	AsymFunc->Draw();

	c->SaveAs("tmp.png");
	return;

}