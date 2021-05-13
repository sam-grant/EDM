void S0S12S18_c_vs_p_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 23:15:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.0468275,2850.5,0.03171241);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1227[17] = {
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
   2350};
   Double_t Graph0_fy1227[17] = {
   -0.01104508,
   -0.002913727,
   -0.001330545,
   -0.0004873193,
   -0.0004892867,
   -0.0008078961,
   0.0002870836,
   -0.0001613194,
   -0.0002724701,
   -5.312243e-05,
   0.0009744671,
   -0.0003869004,
   0.0004133203,
   1.556255e-05,
   -0.0009266528,
   0.0002949177,
   -4.542747e-05};
   Double_t Graph0_fex1227[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1227[17] = {
   0.02269243,
   0.02116942,
   0.01995297,
   0.01899477,
   0.01815238,
   0.01737442,
   0.01672207,
   0.0161346,
   0.01565129,
   0.0151844,
   0.0148573,
   0.0146358,
   0.01448354,
   0.01437814,
   0.01432789,
   0.0143828,
   0.01443915};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1227,Graph0_fy1227,Graph0_fex1227,Graph0_fey1227);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01227 = new TH1F("Graph_Graph01227","S0S12S18",100,530,2570);
   Graph_Graph01227->SetMinimum(-0.03897351);
   Graph_Graph01227->SetMaximum(0.02385842);
   Graph_Graph01227->SetDirectory(0);
   Graph_Graph01227->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01227->SetLineColor(ci);
   Graph_Graph01227->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01227->GetXaxis()->SetRange(0,101);
   Graph_Graph01227->GetXaxis()->CenterTitle(true);
   Graph_Graph01227->GetXaxis()->SetLabelFont(42);
   Graph_Graph01227->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01227->GetXaxis()->SetTitleFont(42);
   Graph_Graph01227->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01227->GetYaxis()->CenterTitle(true);
   Graph_Graph01227->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01227->GetYaxis()->SetLabelFont(42);
   Graph_Graph01227->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01227->GetYaxis()->SetTitleFont(42);
   Graph_Graph01227->GetZaxis()->SetLabelFont(42);
   Graph_Graph01227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01227);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
