void testRead() { 

	TFile *input = TFile::Open("../Plots/QHV_vs_DS.root");

	TGraph *gr = (TGraph*)input->Get("plots/QHV_vs_DS");

	cout<<input<<", "<<gr<<endl;

	cout<<gr->GetN()<<endl;

	for (int i = 0; i<gr->GetN(); i++) { 

		double QHV = gr->GetY()[i];

		cout<<"QHV\t"<<QHV<<endl;

	}
	

	return;

}