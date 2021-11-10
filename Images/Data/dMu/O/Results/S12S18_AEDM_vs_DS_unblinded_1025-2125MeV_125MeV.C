void S12S18_AEDM_vs_DS_unblinded_1025-2125MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:14:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-2.076027e-18,4.75,9.553389e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1030[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1030[4] = {
   -1.158348e-18,
   1.009261e-19,
   -3.089853e-19,
   -5.436553e-19};
   Double_t _fex1030[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1030[4] = {
   4.124512e-19,
   3.491851e-19,
   2.884759e-19,
   2.133296e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1030,_fy1030,_fex1030,_fey1030);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","S12S18",100,0.7,4.3);
   Graph_Graph1030->SetMinimum(-1.772891e-18);
   Graph_Graph1030->SetMaximum(6.522023e-19);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1030->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1030->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1030->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1030->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1030->GetXaxis()->CenterTitle(true);
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph1030->GetYaxis()->CenterTitle(true);
   Graph_Graph1030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
   
   TF1 *pol01031 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(2);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(5.870475);
   pol01031->SetNDF(3);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,-4.501864e-19);
   pol01031->SetParError(0,1.442328e-19);
   pol01031->SetParLimits(0,0,0);
   pol01031->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01031);
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
