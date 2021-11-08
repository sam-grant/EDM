void S12S18_AEDM_vs_DS()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 25 13:30:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,6.431082e-19,4.75,2.394284e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1010[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1010[4] = {
   1.337496e-18,
   1.145724e-18,
   1.912506e-18,
   1.627239e-18};
   Double_t _fex1010[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1010[4] = {
   2.452813e-19,
   2.107531e-19,
   1.899153e-19,
   1.458602e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","S12S18",100,0.7,4.3);
   Graph_Graph1010->SetMinimum(8.182258e-19);
   Graph_Graph1010->SetMaximum(2.219167e-18);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1010->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1010->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1010->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1010->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1010->GetXaxis()->CenterTitle(true);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1010->GetYaxis()->CenterTitle(true);
   Graph_Graph1010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
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
