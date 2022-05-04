void S12_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 29 14:16:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,-7.135705e-21,4.65,2.65254e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1010[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1010[4] = {
   1.706737e-19,
   8.292889e-20,
   1.805751e-19,
   1.259016e-19};
   Double_t _fex1010[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1010[4] = {
   4.891289e-20,
   4.466631e-20,
   3.928059e-20,
   3.37512e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,0.6,4.2);
   Graph_Graph1010->SetMinimum(2.010327e-20);
   Graph_Graph1010->SetMaximum(2.38015e-19);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph1010->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph1010->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph1010->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph1010->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1010->GetXaxis()->CenterTitle(true);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
