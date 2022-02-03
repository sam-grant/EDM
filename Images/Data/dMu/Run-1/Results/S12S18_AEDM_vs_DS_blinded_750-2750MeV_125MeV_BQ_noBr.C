void S12S18_AEDM_vs_DS_blinded_750-2750MeV_125MeV_BQ_noBr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 17 16:31:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.35,6.905165e-19,4.85,2.628305e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1003[4] = {
   1.358958e-18,
   1.239558e-18,
   2.084906e-18,
   1.715702e-18};
   Double_t _fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1003[4] = {
   2.623169e-19,
   2.260772e-19,
   2.204344e-19,
   1.700435e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","S12S18",100,0.8,4.4);
   Graph_Graph1003->SetMinimum(8.842954e-19);
   Graph_Graph1003->SetMaximum(2.434526e-18);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph1003->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph1003->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph1003->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph1003->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(8.556789);
   pol01004->SetNDF(3);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,1.638377e-18);
   pol01004->SetParError(0,1.05844e-19);
   pol01004->SetParLimits(0,0,0);
   pol01004->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01004);
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
