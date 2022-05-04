void S12S18_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 29 14:17:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.35,2.725166e-20,4.85,2.588013e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1012[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1012[4] = {
   1.06367e-19,
   1.028367e-19,
   1.866839e-19,
   1.336904e-19};
   Double_t _fex1012[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1012[4] = {
   3.916802e-20,
   3.699348e-20,
   3.352574e-20,
   3.032809e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,0.8,4.4);
   Graph_Graph1012->SetMinimum(5.040662e-20);
   Graph_Graph1012->SetMaximum(2.356463e-19);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph1012->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph1012->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph1012->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph1012->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1012->GetXaxis()->CenterTitle(true);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->CenterTitle(true);
   Graph_Graph1012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   
   TF1 *pol01013 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(2);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(3.667066);
   pol01013->SetNDF(3);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.357123e-19);
   pol01013->SetParError(0,1.725305e-20);
   pol01013->SetParLimits(0,0,0);
   pol01013->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01013);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
