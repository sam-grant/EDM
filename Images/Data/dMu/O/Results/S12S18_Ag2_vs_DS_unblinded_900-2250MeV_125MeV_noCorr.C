void S12S18_Ag2_vs_DS_unblinded_900-2250MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-13.08136,4.75,32.26043);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1057[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1057[4] = {
   16.13219,
   1.806185,
   6.333402,
   -0.6423238};
   Double_t _fex1057[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1057[4] = {
   8.571277,
   7.330581,
   6.044533,
   4.437786};
   TGraphErrors *gre = new TGraphErrors(4,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","S12S18",100,0.7,4.3);
   Graph_Graph1057->SetMinimum(-8.547182);
   Graph_Graph1057->SetMaximum(27.72625);
   Graph_Graph1057->SetDirectory(0);
   Graph_Graph1057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1057->SetLineColor(ci);
   Graph_Graph1057->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1057->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1057->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1057->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1057->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1057->GetXaxis()->CenterTitle(true);
   Graph_Graph1057->GetXaxis()->SetLabelFont(42);
   Graph_Graph1057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1057->GetXaxis()->SetTitleFont(42);
   Graph_Graph1057->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph1057->GetYaxis()->CenterTitle(true);
   Graph_Graph1057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1057->GetYaxis()->SetLabelFont(42);
   Graph_Graph1057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1057->GetYaxis()->SetTitleFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelFont(42);
   Graph_Graph1057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1057);
   
   
   TF1 *pol01058 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01058->SetFillColor(19);
   pol01058->SetFillStyle(0);
   pol01058->SetLineColor(2);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(3.315898);
   pol01058->SetNDF(3);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,3.569217);
   pol01058->SetParError(0,3.010088);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
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
