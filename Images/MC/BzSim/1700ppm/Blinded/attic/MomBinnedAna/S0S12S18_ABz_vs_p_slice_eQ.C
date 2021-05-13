void S0S12S18_ABz_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 16:53:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.131558,3378.375,0.697764);
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
   -0.9836846,
   -0.1525907,
   0.09003562,
   0.1254053,
   0.2056092,
   0.161478,
   0.1775731,
   0.1631938,
   0.1707752,
   0.1536389,
   0.1159964,
   0.1302188,
   0.1060412,
   0.08331201,
   0.02197315};
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
   0.6763195,
   0.08992105,
   0.03153224,
   0.02364737,
   0.02060121,
   0.01860967,
   0.01706741,
   0.01592388,
   0.01503828,
   0.01458894,
   0.01439954,
   0.01448526,
   0.01495363,
   0.01623126,
   0.02510823};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1164,Graph0_fy1164,Graph0_fex1164,Graph0_fey1164);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01164 = new TH1F("Graph_Graph01164","S0S12S18",100,0,3300);
   Graph_Graph01164->SetMinimum(-1.848626);
   Graph_Graph01164->SetMaximum(0.4148318);
   Graph_Graph01164->SetDirectory(0);
   Graph_Graph01164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01164->SetLineColor(ci);
   Graph_Graph01164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01164->GetXaxis()->SetRange(1,91);
   Graph_Graph01164->GetXaxis()->CenterTitle(true);
   Graph_Graph01164->GetXaxis()->SetLabelFont(42);
   Graph_Graph01164->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01164->GetXaxis()->SetTitleFont(42);
   Graph_Graph01164->GetYaxis()->SetTitle("A_{Bz} [mrad]");
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
