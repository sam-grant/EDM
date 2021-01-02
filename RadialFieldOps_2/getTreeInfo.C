
void getTreeInfo(){

	string input = "../Trees/Data/RadialFieldScan_2/merged_noDQC/gm2nearline_hists_run37882.root";
	TFile *f1 = TFile::Open(input.c_str());
   	cout<<"\nOpened tree:\t"<<input<<" "<<f1<<endl;

   	// Get reader for tree
   	TTreeReader treeReader("nearlineHistTree/eventTree",f1);

   	// Get branches
   	TTreeReaderValue<unsigned int> runNum(treeReader,"runNum");
   	TTreeReaderValue<unsigned int> subRunNum(treeReader,"subRunNum");
   	TTreeReaderValue<unsigned int> eventNum(treeReader,"eventNum");
   	TTreeReaderValue<unsigned int> ctag(treeReader,"ctag");
   	TTreeReaderValue<vector<int>> caloNum(treeReader,"caloNum");
   	TTreeReaderValue<std::vector<double>> energy(treeReader,"energy");
   	TTreeReaderValue<std::vector<double>> times(treeReader,"time");
   	TTreeReaderValue<std::vector<double>> x(treeReader,"x");
   	TTreeReaderValue<std::vector<double>> y(treeReader,"y");

   // ++++++++++++++ Book histograms ++++++++++++++

   // All calos
   TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
   TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

   // ++++++++++++++ Loop thro events ++++++++++++++

   unsigned int tot_ctag = 0;
   unsigned int tot_ctag_check = 0;

   while (treeReader.Next()){

    //unsigned int ctag = ctag*;
   	tot_ctag = tot_ctag + *ctag;

      // Get leaves
   	vector<int> caloNum_ = *caloNum;
   	vector<double> x_ = *x;
   	vector<double> y_ = *y;
   	vector<double> energy_ = *energy;
   	vector<double> times_ = *times;

      // Number of clusters in this fill
   	int nClu = caloNum_.size(); 

      // Loop through clusters
   	for(int i_clu = 0; i_clu < nClu; i_clu++) { 

         // Get cluster level variables
   		int caloNum =  caloNum_.at(i_clu);
   		double xmm = x_.at(i_clu) * 25;
   		double ymm = y_.at(i_clu) * 25; 
   		double energy = energy_.at(i_clu);
   		double time = times_.at(i_clu);

         // Apply CTAG cuts
   		if(energy > 1700 && energy < 6000 && time > 24000) {

   			tot_ctag_check++;

            // Fill y-position for all calos
   			hxy->Fill(xmm, ymm);
   			hy->Fill(ymm);


   		}

   	}

   }

   // ++++++++++++++ Draw sanity plots ++++++++++++++

   TCanvas *c1 = new TCanvas("c1","c1",800,600);
   gStyle->SetOptStat(2210);
   hy->Draw("HIST");
   c1->SaveAs("Images/hy.png");


   TCanvas *c3 = new TCanvas("c3","c3",800,600);
   gStyle->SetOptStat(0);
   gStyle->SetPalette(55);
   hxy->Draw("COLZ");
   c3->SaveAs("Images/hxy.png");

   // ++++++++++++++ Print ++++++++++++++

   cout<<"\nMean y-position:\t"<<hy->GetMean()<<"+/-"<<hy->GetMeanError()<<endl;
   cout<<"Total ctags:\t"<<tot_ctag<<endl;
   cout<<"Total ctags check:\t"<<tot_ctag_check<<endl;

   f1->Close();


	return;

}

	// 
	//TGraphErrors *result = new TGraphErrors(n, x_2, y_3, ex, ey_3);




