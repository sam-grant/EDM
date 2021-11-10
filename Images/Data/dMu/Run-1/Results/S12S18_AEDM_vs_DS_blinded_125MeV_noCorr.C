void S12S18_AEDM_vs_DS_blinded_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:41:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,5.901466e-20,4.75,1.738181e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1048[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1048[4] = {
   9.987854e-20,
   9.325802e-20,
   1.422356e-19,
   1.239971e-19};
   Double_t _fex1048[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1048[4] = {
   1.767998e-20,
   1.510946e-20,
   1.244858e-20,
   9.123708e-21};
   TGraphErrors *gre = new TGraphErrors(4,_fx1048,_fy1048,_fex1048,_fey1048);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1048 = new TH1F("Graph_Graph1048","S12S18",100,0.7,4.3);
   Graph_Graph1048->SetMinimum(7.0495e-20);
   Graph_Graph1048->SetMaximum(1.623377e-19);
   Graph_Graph1048->SetDirectory(0);
   Graph_Graph1048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1048->SetLineColor(ci);
   Graph_Graph1048->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1048->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1048->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1048->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1048->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1048->GetXaxis()->CenterTitle(true);
   Graph_Graph1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph1048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph1048->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1048->GetYaxis()->CenterTitle(true);
   Graph_Graph1048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph1048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph1048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1048);
   
   
   TF1 *pol01049 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);
   pol01049->SetLineColor(2);
   pol01049->SetLineWidth(2);
   pol01049->SetChisquare(7.806333);
   pol01049->SetNDF(3);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetTitleOffset(1);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,1.203837e-19);
   pol01049->SetParError(0,6.196308e-21);
   pol01049->SetParLimits(0,0,0);
   pol01049->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01049);
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
