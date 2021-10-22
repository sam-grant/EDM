void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_WORLD_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Aug 24 13:17:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.8191599,3378.375,42.41089);
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
   35.17044,
   25.83969,
   18.30292,
   13.44088,
   9.809061,
   6.395485};
   Double_t Graph0_fex1081[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1081[6] = {
   0.03544446,
   0.01121489,
   0.00879365,
   0.007887649,
   0.008177603,
   0.009635842};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1081,Graph0_fy1081,Graph0_fex1081,Graph0_fey1081);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01081 = new TH1F("Graph_Graph01081","",100,0,3300);
   Graph_Graph01081->SetMinimum(3.503846);
   Graph_Graph01081->SetMaximum(38.08789);
   Graph_Graph01081->SetDirectory(0);
   Graph_Graph01081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01081->SetLineColor(ci);
   Graph_Graph01081->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01081->GetXaxis()->SetRange(1,91);
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
