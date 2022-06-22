void theta_y_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.3044365,3377.5,3.486266);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[26] = {
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850};
   Double_t _fy1005[26] = {
   2.840935,
   2.75657,
   2.611419,
   2.337082,
   2.074242,
   1.937299,
   1.860798,
   1.733151,
   1.655934,
   1.568098,
   1.497407,
   1.411572,
   1.319616,
   1.253885,
   1.179977,
   1.093911,
   1.044476,
   1.011286,
   1.010494,
   0.8638084,
   0.8895113,
   0.8931539,
   0.9492777,
   0.8458132,
   0.9097388,
   1.122511};
   Double_t _fex1005[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[26] = {
   0.1150261,
   0.03070828,
   0.02180427,
   0.01512682,
   0.01041452,
   0.00878307,
   0.008052763,
   0.007402168,
   0.007272949,
   0.006990832,
   0.006923245,
   0.006747682,
   0.006626805,
   0.006567452,
   0.006589688,
   0.006537367,
   0.00679292,
   0.007245311,
   0.008011222,
   0.007538502,
   0.008693999,
   0.01001838,
   0.01152355,
   0.01107176,
   0.0161022,
   0.04970562};
   TGraphErrors *gre = new TGraphErrors(26,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta #theta_{y} (truth #minus reco) RMS [mrad] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,100,3100);
   Graph_Graph1005->SetMinimum(0.6226195);
   Graph_Graph1005->SetMaximum(3.168083);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1005->GetXaxis()->SetRange(0,97);
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#Delta #theta_{y} (truth #minus reco) RMS [mrad] / 100 MeV");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
