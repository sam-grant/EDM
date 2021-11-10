void S18_AEDM_vs_DS_unblinded_1025-2125MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:14:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-2.095759e-18,4.75,8.87973e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1029[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1029[4] = {
   -1.007183e-18,
   -1.128177e-19,
   -4.654345e-19,
   -9.158884e-20};
   Double_t _fex1029[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1029[4] = {
   5.912875e-19,
   5.035021e-19,
   4.174555e-19,
   3.081264e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","S18",100,0.7,4.3);
   Graph_Graph1029->SetMinimum(-1.797386e-18);
   Graph_Graph1029->SetMaximum(5.895998e-19);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1029->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1029->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1029->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1029->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1029->GetXaxis()->CenterTitle(true);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph1029->GetYaxis()->CenterTitle(true);
   Graph_Graph1029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
