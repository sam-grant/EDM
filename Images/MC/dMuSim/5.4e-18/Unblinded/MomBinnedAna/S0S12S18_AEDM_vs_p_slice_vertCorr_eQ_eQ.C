void S0S12S18_AEDM_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:18:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.431881,3378.375,0.8727575);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1164[15] = {
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
   Double_t Graph0_fy1164[15] = {
   -1.263743,
   0.2334681,
   0.06607099,
   0.1884322,
   0.1872931,
   0.1584912,
   0.1785238,
   0.187563,
   0.1487524,
   0.1555625,
   0.1400112,
   0.137272,
   0.1233514,
   0.08091144,
   0.02867215};
   Double_t Graph0_fex1164[15] = {
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
   Double_t Graph0_fey1164[15] = {
   0.6173644,
   0.08851635,
   0.03122087,
   0.02344005,
   0.02049795,
   0.01849469,
   0.01697686,
   0.0157867,
   0.01488574,
   0.01430089,
   0.01399573,
   0.0137885,
   0.01392918,
   0.0143686,
   0.020652};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1164,Graph0_fy1164,Graph0_fex1164,Graph0_fey1164);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01164 = new TH1F("Graph_Graph01164","S0S12S18",100,0,3300);
   Graph_Graph01164->SetMinimum(-2.101417);
   Graph_Graph01164->SetMaximum(0.5422937);
   Graph_Graph01164->SetDirectory(0);
   Graph_Graph01164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01164->SetLineColor(ci);
   Graph_Graph01164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01164->GetXaxis()->SetRange(1,91);
   Graph_Graph01164->GetXaxis()->CenterTitle(true);
   Graph_Graph01164->GetXaxis()->SetLabelFont(42);
   Graph_Graph01164->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01164->GetXaxis()->SetTitleFont(42);
   Graph_Graph01164->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01164->GetYaxis()->CenterTitle(true);
   Graph_Graph01164->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01164->GetYaxis()->SetLabelFont(42);
   Graph_Graph01164->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01164->GetYaxis()->SetTitleFont(42);
   Graph_Graph01164->GetZaxis()->SetLabelFont(42);
   Graph_Graph01164->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01164);
   
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
