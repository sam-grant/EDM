void S0S12S18_ABz_vs_p_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:17:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,0.07044348,2877,0.2573638);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1161[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t Graph0_fy1161[9] = {
   0.1764251,
   0.2056092,
   0.161478,
   0.1775731,
   0.1631938,
   0.1707752,
   0.1536389,
   0.1159964,
   0.1302188};
   Double_t Graph0_fex1161[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1161[9] = {
   0.0321022,
   0.02060121,
   0.01860967,
   0.01706741,
   0.01592388,
   0.01063367,
   0.01458894,
   0.01439954,
   0.01448526};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1161,Graph0_fy1161,Graph0_fex1161,Graph0_fey1161);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01161 = new TH1F("Graph_Graph01161","S0S12S18",100,420,2580);
   Graph_Graph01161->SetMinimum(0.08913551);
   Graph_Graph01161->SetMaximum(0.2386717);
   Graph_Graph01161->SetDirectory(0);
   Graph_Graph01161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01161->SetLineColor(ci);
   Graph_Graph01161->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01161->GetXaxis()->SetRange(0,101);
   Graph_Graph01161->GetXaxis()->CenterTitle(true);
   Graph_Graph01161->GetXaxis()->SetLabelFont(42);
   Graph_Graph01161->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01161->GetXaxis()->SetTitleFont(42);
   Graph_Graph01161->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01161->GetYaxis()->CenterTitle(true);
   Graph_Graph01161->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01161->GetYaxis()->SetLabelFont(42);
   Graph_Graph01161->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01161->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01161->GetYaxis()->SetTitleFont(42);
   Graph_Graph01161->GetZaxis()->SetLabelFont(42);
   Graph_Graph01161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01161);
   
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
