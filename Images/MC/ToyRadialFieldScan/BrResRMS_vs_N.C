void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.06751644,1.502589e+07,0.9593381);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1212[13] = {
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
   Double_t Truth_fy1212[13] = {
   0.7929698,
   0.5470955,
   0.4515364,
   0.3896659,
   0.3632856,
   0.3161952,
   0.2990022,
   0.2760917,
   0.2708734,
   0.2445977,
   0.2383316,
   0.2304464,
   0.2210973};
   Double_t Truth_fex1212[13] = {
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
   Double_t Truth_fey1212[13] = {
   0.01773134,
   0.01223343,
   0.01009666,
   0.008713194,
   0.008123313,
   0.007070339,
   0.006685893,
   0.006173599,
   0.006056912,
   0.005469371,
   0.005329256,
   0.005152939,
   0.004943885};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1212,Truth_fy1212,Truth_fex1212,Truth_fey1212);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1212 = new TH1F("Graph_Truth1212","",100,0,1.362893e+07);
   Graph_Truth1212->SetMinimum(0.1566986);
   Graph_Truth1212->SetMaximum(0.8701559);
   Graph_Truth1212->SetDirectory(0);
   Graph_Truth1212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1212->SetLineColor(ci);
   Graph_Truth1212->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1212->GetXaxis()->SetRange(1,98);
   Graph_Truth1212->GetXaxis()->CenterTitle(true);
   Graph_Truth1212->GetXaxis()->SetLabelFont(42);
   Graph_Truth1212->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1212->GetXaxis()->SetTitleFont(42);
   Graph_Truth1212->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_Truth1212->GetYaxis()->CenterTitle(true);
   Graph_Truth1212->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1212->GetYaxis()->SetLabelFont(42);
   Graph_Truth1212->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1212->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1212->GetYaxis()->SetTitleFont(42);
   Graph_Truth1212->GetZaxis()->SetLabelFont(42);
   Graph_Truth1212->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1212);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.8701559,1.335635e+07,0.8701559,0,344.5,510,"-");
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
