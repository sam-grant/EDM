{

	TF1 *f1 = new TF1("f1", "1/sqrt(x)", 0, 10e6);

	TCanvas *c; 
	f1->Draw();


}