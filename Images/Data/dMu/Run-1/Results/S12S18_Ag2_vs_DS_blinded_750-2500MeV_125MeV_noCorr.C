void S12S18_Ag2_vs_DS_blinded_750-2500MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-13.40342,4.75,9.212123);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1039[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1039[4] = {
   -2.391843,
   -4.879411,
   0.5742524,
   2.571443};
   Double_t _fex1039[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1039[4] = {
   5.567861,
   4.754753,
   3.918439,
   2.871423};
   TGraphErrors *gre = new TGraphErrors(4,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","S12S18",100,0.7,4.3);
   Graph_Graph1039->SetMinimum(-11.14187);
   Graph_Graph1039->SetMaximum(6.950568);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1039->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1039->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1039->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1039->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1039->GetXaxis()->CenterTitle(true);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph1039->GetYaxis()->CenterTitle(true);
   Graph_Graph1039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
   
   TF1 *pol01040 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01040->SetFillColor(19);
   pol01040->SetFillStyle(0);
   pol01040->SetLineColor(2);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(2.049057);
   pol01040->SetNDF(3);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,0.2141227);
   pol01040->SetParError(0,1.950303);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
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
