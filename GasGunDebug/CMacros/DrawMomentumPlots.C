

void DrawTH1(TH1 *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
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

	bool boost = true;//true;//false;//true;
	string config = "1e4_noPol";//_0MeV";

	if(boost) config += "_MRF";
	else config += "_LAB";

	string inputName = "../plots/decayNTuplePlots_"+config+".root";
	TFile *input = TFile::Open(inputName.c_str());

	cout<<"Got input file "<<inputName<<", "<<input<<endl;

	// vector<string> labels_ = {"", "X", "Y", "Z"};
	vector<string> labels_ = {"X", "Y", "Z"};

	for(int i = 0; i < labels_.size(); i++) { 

		string posLabel = "Positrons/h_posMom"+labels_.at(i);
		string muLabel = "Muons/h_muMom"+labels_.at(i);

		TH1F *h_posMom = (TH1F*)input->Get(posLabel.c_str());
		// Quick check
		TH1F *h_muPol = (TH1F*)input->Get(("Muons/h_muPol"+labels_.at(i)).c_str()); //  posLabel.c_str());
		cout<<"Got h_muPol "<<h_muPol<<endl;
		//TH1F *h_muMom = (TH1F*)input->Get(muLabel.c_str());

		if(boost) {
			if(i==0) h_posMom->GetXaxis()->SetRangeUser(0, 100);
			else h_posMom->GetXaxis()->SetRangeUser(-100, 100);
			DrawTH1(h_posMom, "", "../Images/h_posMom"+labels_.at(i)+"_"+config);
			//DrawTH1(h_muMom, "", "../Images/h_muMom"+labels_.at(i)+"_MRF");
		} else {

			if(i==0 || i==3) h_posMom->GetXaxis()->SetRangeUser(0, 3100);
			else h_posMom->GetXaxis()->SetRangeUser(-100, 100);

			// 0 MeV only!
			if(config=="1e4_0MeV") { 
				if(i==0) h_posMom->GetXaxis()->SetRangeUser(0, 100);
				else h_posMom->GetXaxis()->SetRangeUser(-100, 100);
			}

			DrawTH1(h_posMom, "", "../Images/h_posMom"+labels_.at(i)+"_"+config);
			DrawTH1(h_muPol, "", "../Images/h_muPol"+labels_.at(i)+"_"+config);
			//DrawTH1(h_muMom, "", "../Images/h_muMom"+labels_.at(i)+"_WORLD");	
		}

	}

	input->Close();

	return;


}