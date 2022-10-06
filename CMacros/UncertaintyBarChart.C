void DrawBarChart(TGraph *graph, std::string title, std::string fname, vector<string> label_) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetLineWidth(3);
	graph->SetLineColor(1);
	graph->SetFillColor(1);

	for(int i(0); i<graph->GetN(); i++) {

		graph->GetXaxis()->SetBinLabel(graph->GetXaxis()->FindBin(i+1), (label_.at(i)).c_str());

		//cout<<graph->GetXaxis()->FindBin(i+1)<<endl;
		//cout<<label_.at(i)<<endl;

	}
		
	
/*labels = ["", "Total spent", "Income", ""]
	for i in range(gr2.GetN()):

	gr2.GetXaxis().SetBinLabel(gr2.GetXaxis().FindBin(i+1), labels[i])*/
	graph->GetXaxis()->SetRangeUser(1.5, 6.5);
	graph->GetXaxis()->LabelsOption("h");
	graph->GetXaxis()->SetTickLength(0);
	graph->Draw("APB*");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void UncertaintyBarChart() { 

/*labels = ["", "Total spent", "Income", ""]
for i in range(gr2.GetN()):
	gr2.GetXaxis().SetBinLabel(gr2.GetXaxis().FindBin(i+1), labels[i])*/

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};


	//vector<string> label_ = {"#delta_{stat}", "#delta_{acc}", "#delta_{align}", "#delta_{B_{r}}", "#delta_{tot}", "#delta_{reweight}"}; 
	//vector<string> label_ = {"Stat.", "Acc. corr.", "Align", "#B_{r}", "Tot", "Reweight"}; 
	vector<string> label_ = {"", "Stat.", "Acc. corr.", "Align", "B_{r}", "Reweight", ""}; 


	//vector<double> run1a_ = {0.069957, 0.000436, 0.002094, 0.007298, 0.070369, 0.004941};
	//vector<double> run1a_ = {0, 0.069957, 0.000436, 0.002094, 0.007298, 0.002086, 0};  
	vector<double> run1a_ = {0, 0.104013, 0.024611, 0.017957, 0.007298, 0.009323, 0};

	//double run1a_reweight = 0.004941;

	//vector<double> run1b_ = {0.081413, 0.000408, 0.008656, 0.008172, 0.082280, 0.005203}; 

	// vector<double> run1b_ = {0, 0.059782, 0.000416, 0.001434, 0.008172, 0.001254, 0};
	vector<double> run1b_  = {0, 0.066065, 0.010681, 0.001986, 0.008172, 0.002135, 0};
	//double run1b_reweight = 0.005203;

	//vector<double> run1c_ = {0.066790, 0.000757, 0.020955, 0.008243, 0.070488, 0.010907}; 

	// vector<double> run1c_ = {0, 0.049249, 0.000722, 0.001729, 0.008243, 0.005782, 0}; 
	vector<double> run1c_ = {0, 0.049249, 0.000722, 0.001729, 0.008243, 0.005782, 0};
	//double run1c_reweight = 0.010907;

	//vector<double> run1d_ = {0.058613, 0.000553, 0.013057, 0.009145, 0.060744, 0.007974}; 
	
	//vector<double> run1d_ = {0, 0.043222, 0.000523, 0.003210, 0.009145, 0.005092, 0}; 
	vector<double> run1d_ = {0, 0.047769, 0.012784, -0.002236, 0.009145, 0.020159, 0}; 
	//double run1d_reweight = 0.007974;

	vector<vector<double>> run1_ = {run1a_, run1b_, run1c_, run1d_};
	//vector<double> run1_reweight_ = {run1a_reweight, run1b_reweight, run1c_reweight, run1d_reweight};

	TGraph *gr_run1a = new TGraph();
	TGraph *gr_run1b = new TGraph();
	TGraph *gr_run1c = new TGraph();
	TGraph *gr_run1d = new TGraph();

	vector<TGraph*> gr_ = {gr_run1a, gr_run1b, gr_run1c, gr_run1d};

	int count = 0;

	for(auto& gr : gr_) {

		vector<double> tmp_ = run1_.at(count);

		for(int j(0); j<tmp_.size(); j++) { 

			gr->SetPoint(j, j+1, tmp_.at(j));

		}

		DrawBarChart(gr, ds_.at(count)+";Source;Uncertainty [mrad]", "../Images/Data/dMu/Run-1/Results/error_bar_chart_"+ds_.at(count), label_);

		count++;

/*		gr->SetMarkerStyle(20);
		gr->SetLineWidth(3);
		gr->SetLineColor(1);
		gr->SetFillColor(1);
		gr->Draw("APB*");*/

		//break;

	}

	return;

}