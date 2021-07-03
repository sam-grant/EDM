void DrawTH1(TH1 *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawMomentumPlots() { 

	bool boost = false;/

	string config = "1e4_xPol";

	if(boost) config += "_MRF";
	else config += "_LAB";

	string inputName = "../plots/decayNTuplePlots_"+config+".root";
	TFile *input = TFile::Open(inputName.c_str());

	cout<<"Got input file "<<inputName<<", "<<input<<endl;

	vector<string> labels_ = {"", "X", "Y", "Z"};

	for(int i = 0; i < labels_.size(); i++) { 

		string posLabel = "Positrons/h_posMom"+labels_.at(i);

		TH1F *h_posMom = (TH1F*)input->Get(posLabel.c_str());

		if(boost) {

			DrawTH1(h_posMom, "", "../Images/h_posMom"+labels_.at(i)+"_"+config);

		} else {

			// 0 MeV only!
			if(config=="1e4_0MeV") { 
				if(i==0) h_posMom->GetXaxis()->SetRangeUser(0, 100);
				else h_posMom->GetXaxis()->SetRangeUser(-100, 100);
			}

			DrawTH1(h_posMom, "", "../Images/h_posMom"+labels_.at(i)+"_"+config);

		}

	}

	input->Close();

	return;

}