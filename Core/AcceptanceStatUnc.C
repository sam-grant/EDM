#include <numeric>
#include <algorithm>
#include <vector>
#include <vector>
#include "Utils.h"

void DrawGraph(TGraphErrors *gr, TF1 *f1, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr->SetTitle(title.c_str());
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.2);
	gr->GetXaxis()->CenterTitle(true);
	gr->GetYaxis()->CenterTitle(true);
	gr->GetYaxis()->SetMaxDigits(2);
	gr->GetXaxis()->SetMaxDigits(2);
	//f1->GetXaxis()->SetRangeUser(900e6, 10e9);//MaxDigits(4);
	gr->SetMarkerStyle(20); //  Full circle
	gr->Draw("AP SAME");

	f1->Draw("SAME");

	TLegend *l = new TLegend(.30, .79, .50, .89);
	l->SetNColumns(2);
	l->SetBorderSize(0);
	l->SetTextSize(28);
	l->SetTextFont(44);

	l->AddEntry(f1, "Fit: a#frac{1}{#sqrt{N}}");
	//l->SetTextSize(23);

	l->Draw("SAME");


  	TPaveText *names = new TPaveText(0.59,0.725,0.79,0.89,"NDC");

  	names->SetTextAlign(13);
  	names->AddText("#chi^{2}/ndf");
  	names->AddText("a"); 

  	TPaveText *values = new TPaveText(0.79,0.75,0.89,0.89,"NDC");
 	values->SetTextAlign(33);
  	values->AddText(Round(f1->GetChisquare()/f1->GetNDF(), 3));//GetParameter(0), 3)+"#pm"+Round(f1->GetParError(0), 1));//"(3.6#pm0.3)#times10^{4}");////
  	values->AddText("(3.9#pm0.1)#times10^{5}");//Round(f1->GetParameter(0), 2)+"#pm"+Round(f1->GetParError(0), 1));//"(3.6#pm0.3)#times10^{4}");////
   	
  	names->SetTextSize(26);
  	names->SetTextFont(44);
  	names->SetFillColor(0);
  	values->SetFillColor(0);
  	values->SetTextFont(44);
  	values->SetTextSize(26);

  	names->Draw("SAME");
  	values->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void Overlay(vector<TGraph*> gr_, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);
	//c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	//TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	TLegend *l = new TLegend(0.75,0.69,0.89,0.89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetXaxis()->SetMaxDigits(3);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(2);
	//gr_.at(0)->GetYaxis()->SetRangeUser(10e-3, 80e-3);//s//,6.5);

	int nGraphs = gr_.size();

	gStyle->SetPalette(kBird);

	vector<string> names_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<int> colours_ = {4, 807, 413, 614};

	for(int i = 0; i < nGraphs; i++) {
    	gr_.at(i)->SetMarkerStyle(20);
    	gr_.at(i)->SetMarkerColor(colours_.at(i));
    	gr_.at(i)->SetLineColor(colours_.at(i));
    	l->AddEntry(gr_.at(i), (names_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("AP");// PLC PMC");
      	else gr_.at(i)->Draw("P SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

double average(std::vector<double> const& v){

    if(v.empty()){
        return 0;
    }

    auto const count = static_cast<double>(v.size());
    return std::reduce(v.begin(), v.end()) / count;
}

double range(std::vector<double> const& v) { 

	double max = *max_element(v.begin(), v.end()); 
	double min = *min_element(v.begin(), v.end()); 
	
	cout<<max<<", "<<min<<endl;
	return max - min;

}

double StdDev(vector<double> v) { // TGraphErrors *input, double zero) {

  double sum = std::accumulate(v.begin(), v.end(), 0.0);
  double mean = sum / v.size();

  std::vector<double> diff(v.size());
  std::transform(v.begin(), v.end(), diff.begin(), [mean](double x) { return x - mean; });
  double sq_sum = std::inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);
  double stdev = std::sqrt(sq_sum / v.size());

  return stdev;

}

TGraphErrors *GetTotGraph(vector<TGraph*> gr_) {

	TGraphErrors *gr = new TGraphErrors();

	for (int i(0); i<gr_.at(0)->GetN(); i++) {

		double x = gr_.at(0)->GetX()[i]; double ex = 0; 

		vector<double> y_;

		for (auto& gr : gr_) y_.push_back(gr->GetY()[i]);

		// Get mean 
		double y = average(y_);
		// Get range
		double ey = StdDev(y_);//range(y_)/sqrt(2);

		gr->SetPoint(i, x, y);
		gr->SetPointError(i, ex, ey);
	}

	return gr;
}


void AcceptanceStatUnc() { 

	double eventsPerQualVertex = 182.3376452;
	double eventsPerQualVertexAfterCuts = 422.611579;

	vector<double> qualVertices_ = {5625977, 10532577, 14827887, 18956669, 23965876, 29450207, 32885451};
	vector<double> qualVerticesAfterCuts_ = {2429052, 4547895, 6404052, 8187845, 10349880, 12716119, 14198918};

	vector<vector<double>> accFracErr_ = { 
										  {0.149731448, 0.142862635, 0.125931647, 0.119898794} ,
										  {0.105285702, 0.103413658, 0.088467606, 0.086188039} ,
										  {0.080419145, 0.078948892, 0.067230904, 0.069491374} , 
										  {0.075526319, 0.075876139, 0.063271157, 0.06597967} ,
										  {0.06363507, 0.06464865, 0.054803071, 0.055273128} ,
										  {0.052716043, 0.052573868, 0.045211816, 0.04539942} ,
										  {0.049406335, 0.047990669, 0.041894357, 0.042372261}
										};

	vector<vector<double>> accAbsErr_ = { 
										  {0.048479, 0.044596, 0.075172, 0.052411} ,
										  {0.030725, 0.028122, 0.047557, 0.032939} ,
										  {0.022594, 0.020451, 0.034491, 0.024042} , 
										  {0.022515, 0.020343, 0.034429, 0.024055} ,
										  {0.019233, 0.017389, 0.029589, 0.020658} ,
										  {0.014979, 0.013521, 0.023029, 0.016097} ,
										  {0.014023, 0.012631, 0.02152, 0.015038}
										};

	vector<vector<double>> accStarFracErr_ = { 
										  {0.46905468, 0.551153076, 1.12721929, 0.894721568} ,
										  {0.364212897, 0.390106536, 0.800919532, 0.632226488} ,
										  {0.287832656, 0.30491114, 0.624486249, 0.496376587} , 
										  {0.271127863, 0.286662439, 0.589003131, 0.469054676} ,
										  {0.230971538, 0.244364812, 0.504647553, 0.401414609} ,
										  {0.190732676, 0.201472188, 0.416437613, 0.331623403} ,
										  {0.178162599, 0.187796429, 0.388342507, 0.309194835}
										};

    TGraph *gra = new TGraph(); 
    TGraph *grb = new TGraph();
    TGraph *grc = new TGraph();
    TGraph *grd = new TGraph();
/*
    for(int i(0); i<accAbsErr_.size(); i++) {

    	vector<double> err_ = accAbsErr_.at(i);*/

    for(int i(0); i<accFracErr_.size(); i++) {

    	vector<double> err_ = accFracErr_.at(i);

    	gra->SetPoint(i, qualVerticesAfterCuts_.at(i)*eventsPerQualVertexAfterCuts, err_.at(0)*100);
    	grb->SetPoint(i, qualVerticesAfterCuts_.at(i)*eventsPerQualVertexAfterCuts, err_.at(1)*100);
    	grc->SetPoint(i, qualVerticesAfterCuts_.at(i)*eventsPerQualVertexAfterCuts, err_.at(2)*100);
    	grd->SetPoint(i, qualVerticesAfterCuts_.at(i)*eventsPerQualVertexAfterCuts, err_.at(3)*100);

    }

    vector<TGraph*> gr_ = {gra, grb, grc, grd};

    Overlay(gr_, ";Events;Acceptance correction uncertainty [%]", "../Images/AccStatUnc/TestOverlay");
    //Overlay(gr_, ";Events;Acceptance correction uncertainty / statisical uncertainty [%]", "../Images/AccStatUnc/TestOverlay");
    //Overlay(gr_, ";Events;Acceptance absolute uncertainty [mrad]", "../Images/AccStatUnc/TestOverlay");

    TGraphErrors *grTot = GetTotGraph(gr_);

   	TF1 *f1 = new TF1("f1", "[0]/sqrt(x)", grTot->GetX()[0], grTot->GetX()[grTot->GetN()-1]);
	//f1->SetParameter(0, 2.0e+04);//3.55676e+04);
	//f1->SetParameter(1, -5);//-5.03528e+00);
	grTot->Fit(f1, "R");

	DrawGraph(grTot, f1, ";Events, N;Acceptance correction uncertainty [%]", "	");//MC/dMu/DilutionUncertaintyEstimates/TotalFit");
	//DrawGraph(grTot, f1, ";Events, N;Acceptance correction uncertainty / statisical uncertainty [%]", "../Images/AccStatUnc/TestFits");//MC/dMu/DilutionUncertaintyEstimates/TotalFit");

	cout<<"At 8 billion events we would have "<<f1->Eval(8e9)<<endl;

	cout<<f1->Eval(8e9)-f1->Eval(6e9)<<endl;


	return;

}