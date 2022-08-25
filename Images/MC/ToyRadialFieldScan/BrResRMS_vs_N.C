void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.1343665,1.502589e+07,2.001288);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1004[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Truth_fy1004[13] = {
   1.653168,
   1.122725,
   0.9104954,
   0.8191217,
   0.7122489,
   0.6414378,
   0.6079917,
   0.562985,
   0.556473,
   0.4974539,
   0.4709518,
   0.4652094,
   0.45571};
   Double_t Truth_fex1004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Truth_fey1004[13] = {
   0.03696596,
   0.02510489,
   0.0203593,
   0.01831612,
   0.01592637,
   0.01434299,
   0.01359511,
   0.01258873,
   0.01244312,
   0.01112341,
   0.0105308,
   0.0104024,
   0.01018999};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1004,Truth_fy1004,Truth_fex1004,Truth_fey1004);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1004 = new TH1F("Graph_Truth1004","",100,0,1.362893e+07);
   Graph_Truth1004->SetMinimum(0.3210586);
   Graph_Truth1004->SetMaximum(1.814595);
   Graph_Truth1004->SetDirectory(0);
   Graph_Truth1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1004->SetLineColor(ci);
   Graph_Truth1004->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1004->GetXaxis()->SetRange(1,98);
   Graph_Truth1004->GetXaxis()->CenterTitle(true);
   Graph_Truth1004->GetXaxis()->SetLabelFont(42);
   Graph_Truth1004->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1004->GetXaxis()->SetTitleFont(42);
   Graph_Truth1004->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_Truth1004->GetYaxis()->CenterTitle(true);
   Graph_Truth1004->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1004->GetYaxis()->SetLabelFont(42);
   Graph_Truth1004->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1004->GetYaxis()->SetTitleFont(42);
   Graph_Truth1004->GetZaxis()->SetLabelFont(42);
   Graph_Truth1004->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1004);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.814595,1.335635e+07,1.814595,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
