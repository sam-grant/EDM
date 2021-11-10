void S12_AEDM_vs_DS_unblinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.853869e-18,4.75,1.186682e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1028[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1028[4] = {
   -8.20054e-19,
   2.333853e-19,
   -1.115224e-19,
   -8.827429e-19};
   Double_t _fex1028[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1028[4] = {
   5.270561e-19,
   4.465386e-19,
   3.68102e-19,
   2.721715e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1028,_fy1028,_fex1028,_fey1028);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","S12",100,0.7,4.3);
   Graph_Graph1028->SetMinimum(-1.549813e-18);
   Graph_Graph1028->SetMaximum(8.826272e-19);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1028->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1028->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1028->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1028->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1028->GetXaxis()->CenterTitle(true);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph1028->GetYaxis()->CenterTitle(true);
   Graph_Graph1028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
