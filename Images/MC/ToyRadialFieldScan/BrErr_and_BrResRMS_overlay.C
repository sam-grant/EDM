void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.06026037,1.502589e+07,0.7659241);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Mean fit uncertainty_fx1213[13] = {
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
   Double_t Mean fit uncertainty_fy1213[13] = {
   0.6483135,
   0.4555505,
   0.370816,
   0.3226465,
   0.288084,
   0.2625235,
   0.242851,
   0.227126,
   0.213954,
   0.20292,
   0.1933895,
   0.1851355,
   0.177871};
   Double_t Mean fit uncertainty_fex1213[13] = {
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
   Double_t Mean fit uncertainty_fey1213[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Mean fit uncertainty_fx1213,Mean fit uncertainty_fy1213,Mean fit uncertainty_fex1213,Mean fit uncertainty_fey1213);
   gre->SetName("Mean fit uncertainty");
   gre->SetTitle(";CTAGs / setting;#delta#LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_MeansPfitsPuncertainty1213 = new TH1F("Graph_MeansPfitsPuncertainty1213","",100,0,1.362893e+07);
   Graph_MeansPfitsPuncertainty1213->SetMinimum(0.1308267);
   Graph_MeansPfitsPuncertainty1213->SetMaximum(0.6953578);
   Graph_MeansPfitsPuncertainty1213->SetDirectory(0);
   Graph_MeansPfitsPuncertainty1213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_MeansPfitsPuncertainty1213->SetLineColor(ci);
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->SetRange(1,98);
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->CenterTitle(true);
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->SetTitleSize(0.04);
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->SetTitleOffset(1.1);
   Graph_MeansPfitsPuncertainty1213->GetXaxis()->SetTitleFont(42);
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->SetTitle("#delta#LTB_{r}^{b}#GT [ppm]");
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->CenterTitle(true);
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->SetNdivisions(4000510);
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->SetTitleSize(0.04);
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->SetTitleOffset(1.1);
   Graph_MeansPfitsPuncertainty1213->GetYaxis()->SetTitleFont(42);
   Graph_MeansPfitsPuncertainty1213->GetZaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1213->GetZaxis()->SetTitleOffset(1);
   Graph_MeansPfitsPuncertainty1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Mean fit uncertainty1213);
   
   gre->Draw("ap");
   
   Double_t RMS of truth residual_fx1214[13] = {
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
   Double_t RMS of truth residual_fy1214[13] = {
   0.6519995,
   0.4502068,
   0.3679536,
   0.3101471,
   0.2906558,
   0.2704667,
   0.2461516,
   0.2336668,
   0.2069826,
   0.2034521,
   0.1964132,
   0.1899648,
   0.178118};
   Double_t RMS of truth residual_fex1214[13] = {
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
   Double_t RMS of truth residual_fey1214[13] = {
   0.01457915,
   0.01006693,
   0.008227692,
   0.006935099,
   0.00649926,
   0.00604782,
   0.005504116,
   0.005224949,
   0.004628271,
   0.004549328,
   0.004391933,
   0.004247743,
   0.00398284};
   gre = new TGraphErrors(13,RMS of truth residual_fx1214,RMS of truth residual_fy1214,RMS of truth residual_fex1214,RMS of truth residual_fey1214);
   gre->SetName("RMS of truth residual");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RMSsPofsPtruthsPresidual1214 = new TH1F("Graph_RMSsPofsPtruthsPresidual1214","",100,0,1.362893e+07);
   Graph_RMSsPofsPtruthsPresidual1214->SetMinimum(0.1248908);
   Graph_RMSsPofsPtruthsPresidual1214->SetMaximum(0.715823);
   Graph_RMSsPofsPtruthsPresidual1214->SetDirectory(0);
   Graph_RMSsPofsPtruthsPresidual1214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RMSsPofsPtruthsPresidual1214->SetLineColor(ci);
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->SetRange(1,98);
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->CenterTitle(true);
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->SetTitleSize(0.04);
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->SetTitleOffset(1.1);
   Graph_RMSsPofsPtruthsPresidual1214->GetXaxis()->SetTitleFont(42);
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->CenterTitle(true);
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->SetNdivisions(4000510);
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->SetTitleSize(0.04);
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->SetTitleOffset(1.1);
   Graph_RMSsPofsPtruthsPresidual1214->GetYaxis()->SetTitleFont(42);
   Graph_RMSsPofsPtruthsPresidual1214->GetZaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1214->GetZaxis()->SetTitleOffset(1);
   Graph_RMSsPofsPtruthsPresidual1214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_RMS of truth residual1214);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.5,0.75,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Mean fit uncertainty","Mean fit uncertainty","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("RMS of truth residual","RMS of truth residual","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(0,0.6953578,1.335635e+07,0.6953578,0,344.5,510,"-");
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
   TLine *line = new TLine(0,1,1.335635e+07,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
