void S12S18_full_c_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-437.25,-3.71955,3605.25,0.7183561);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1277[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1277[15] = {
   -1.989195,
   -2.863958,
   -1.470861,
   -0.5886854,
   -0.405896,
   -0.3246392,
   -0.2528759,
   -0.2027487,
   -0.1237584,
   -0.1434835,
   -0.1346341,
   -0.129486,
   -0.05590405,
   -0.09437038,
   -0.05805092};
   Double_t Graph0_fex1277[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1277[15] = {
   0.7133207,
   0.1159413,
   0.03960999,
   0.03071342,
   0.02716148,
   0.02513058,
   0.02349196,
   0.02228624,
   0.02159851,
   0.0216106,
   0.0223008,
   0.02380613,
   0.02564144,
   0.0260484,
   0.03675598};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1277,Graph0_fy1277,Graph0_fex1277,Graph0_fey1277);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01277 = new TH1F("Graph_Graph01277","S12S18",100,0,3300);
   Graph_Graph01277->SetMinimum(-3.27576);
   Graph_Graph01277->SetMaximum(0.2745655);
   Graph_Graph01277->SetDirectory(0);
   Graph_Graph01277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01277->SetLineColor(ci);
   Graph_Graph01277->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01277->GetXaxis()->SetRange(0,97);
   Graph_Graph01277->GetXaxis()->CenterTitle(true);
   Graph_Graph01277->GetXaxis()->SetLabelFont(42);
   Graph_Graph01277->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01277->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01277->GetXaxis()->SetTitleFont(42);
   Graph_Graph01277->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01277->GetYaxis()->CenterTitle(true);
   Graph_Graph01277->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01277->GetYaxis()->SetLabelFont(42);
   Graph_Graph01277->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01277->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01277->GetYaxis()->SetTitleFont(42);
   Graph_Graph01277->GetZaxis()->SetLabelFont(42);
   Graph_Graph01277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01277);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
