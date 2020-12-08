void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:13 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.08602865,1.502589e+07,1.431606);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1160[13] = {
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
   Double_t Truth_fy1160[13] = {
   1.180937,
   0.8436204,
   0.6732921,
   0.5637884,
   0.5340156,
   0.4707361,
   0.4502514,
   0.4134028,
   0.379984,
   0.3836548,
   0.3430447,
   0.3204656,
   0.3173886};
   Double_t Truth_fex1160[13] = {
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
   Double_t Truth_fey1160[13] = {
   0.02640655,
   0.01886393,
   0.01505527,
   0.01260669,
   0.01194095,
   0.01052598,
   0.01006793,
   0.009243967,
   0.0084967,
   0.008578783,
   0.007670713,
   0.007165829,
   0.007097026};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1160,Truth_fy1160,Truth_fex1160,Truth_fey1160);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1160 = new TH1F("Graph_Truth1160","",100,0,1.362893e+07);
   Graph_Truth1160->SetMinimum(0.2205864);
   Graph_Truth1160->SetMaximum(1.297049);
   Graph_Truth1160->SetDirectory(0);
   Graph_Truth1160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1160->SetLineColor(ci);
   Graph_Truth1160->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1160->GetXaxis()->SetRange(1,98);
   Graph_Truth1160->GetXaxis()->CenterTitle(true);
   Graph_Truth1160->GetXaxis()->SetLabelFont(42);
   Graph_Truth1160->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1160->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1160->GetXaxis()->SetTitleFont(42);
   Graph_Truth1160->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Truth1160->GetYaxis()->CenterTitle(true);
   Graph_Truth1160->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1160->GetYaxis()->SetLabelFont(42);
   Graph_Truth1160->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1160->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1160->GetYaxis()->SetTitleFont(42);
   Graph_Truth1160->GetZaxis()->SetLabelFont(42);
   Graph_Truth1160->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1160);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.297049,1.335635e+07,1.297049,0,344.5,510,"-");
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
