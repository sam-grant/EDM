void S12_AEDM_vs_DS_unblinded_750-2500MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.16305e-19,4.75,8.474177e-20);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1064[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1064[4] = {
   -4.142185e-20,
   1.790337e-20,
   -8.14917e-21,
   -6.273046e-20};
   Double_t _fex1064[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1064[4] = {
   3.907003e-20,
   3.33306e-20,
   2.743968e-20,
   2.006674e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1064,_fy1064,_fex1064,_fey1064);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1064 = new TH1F("Graph_Graph1064","S12",100,0.7,4.3);
   Graph_Graph1064->SetMinimum(-9.620032e-20);
   Graph_Graph1064->SetMaximum(6.463709e-20);
   Graph_Graph1064->SetDirectory(0);
   Graph_Graph1064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1064->SetLineColor(ci);
   Graph_Graph1064->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1064->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1064->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1064->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1064->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1064->GetXaxis()->CenterTitle(true);
   Graph_Graph1064->GetXaxis()->SetLabelFont(42);
   Graph_Graph1064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1064->GetXaxis()->SetTitleFont(42);
   Graph_Graph1064->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph1064->GetYaxis()->CenterTitle(true);
   Graph_Graph1064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1064->GetYaxis()->SetLabelFont(42);
   Graph_Graph1064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1064->GetYaxis()->SetTitleFont(42);
   Graph_Graph1064->GetZaxis()->SetLabelFont(42);
   Graph_Graph1064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1064);
   
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
