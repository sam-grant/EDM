void S18_AEDM_vs_DS_blinded_900-2250MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.170027e-21,4.75,2.064295e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1047[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1047[4] = {
   6.131629e-20,
   9.426908e-20,
   1.520969e-19,
   1.262109e-19};
   Double_t _fex1047[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1047[4] = {
   2.788639e-20,
   2.385224e-20,
   1.973266e-20,
   1.452874e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","S18",100,0.7,4.3);
   Graph_Graph1047->SetMinimum(1.958993e-20);
   Graph_Graph1047->SetMaximum(1.856695e-19);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1047->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1047->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1047->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1047->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1047->GetXaxis()->CenterTitle(true);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1047->GetYaxis()->CenterTitle(true);
   Graph_Graph1047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
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
