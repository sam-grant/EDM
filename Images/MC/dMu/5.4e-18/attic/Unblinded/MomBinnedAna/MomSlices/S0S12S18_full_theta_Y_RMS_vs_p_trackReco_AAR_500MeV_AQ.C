void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 15:29:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.7056278,3456.75,41.00785);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1081[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1081[6] = {
   34.03536,
   25.58268,
   18.09902,
   13.28628,
   9.670864,
   6.25219};
   Double_t Graph0_fex1081[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1081[6] = {
   0.02024519,
   0.006529573,
   0.005133198,
   0.004615704,
   0.004775542,
   0.005571207};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1081,Graph0_fy1081,Graph0_fex1081,Graph0_fey1081);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01081 = new TH1F("Graph_Graph01081","",100,0,3300);
   Graph_Graph01081->SetMinimum(3.465721);
   Graph_Graph01081->SetMaximum(36.8365);
   Graph_Graph01081->SetDirectory(0);
   Graph_Graph01081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01081->SetLineColor(ci);
   Graph_Graph01081->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01081->GetXaxis()->SetRange(0,93);
   Graph_Graph01081->GetXaxis()->CenterTitle(true);
   Graph_Graph01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph01081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph01081->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01081->GetYaxis()->CenterTitle(true);
   Graph_Graph01081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph01081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01081->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph01081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01081);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
