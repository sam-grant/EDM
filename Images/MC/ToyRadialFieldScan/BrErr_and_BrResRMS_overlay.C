void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.1599812,1.502589e+07,1.858034);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Mean fit uncertainty_fx1005[13] = {
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
   Double_t Mean fit uncertainty_fy1005[13] = {
   1.575025,
   1.13535,
   0.926365,
   0.80422,
   0.71767,
   0.653965,
   0.60566,
   0.565575,
   0.53338,
   0.50554,
   0.481985,
   0.46124,
   0.44299};
   Double_t Mean fit uncertainty_fex1005[13] = {
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
   Double_t Mean fit uncertainty_fey1005[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Mean fit uncertainty_fx1005,Mean fit uncertainty_fy1005,Mean fit uncertainty_fex1005,Mean fit uncertainty_fey1005);
   gre->SetName("Mean fit uncertainty");
   gre->SetTitle(";CTAGs / setting;#delta#LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_MeansPfitsPuncertainty1005 = new TH1F("Graph_MeansPfitsPuncertainty1005","",100,0,1.362893e+07);
   Graph_MeansPfitsPuncertainty1005->SetMinimum(0.3297865);
   Graph_MeansPfitsPuncertainty1005->SetMaximum(1.688229);
   Graph_MeansPfitsPuncertainty1005->SetDirectory(0);
   Graph_MeansPfitsPuncertainty1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_MeansPfitsPuncertainty1005->SetLineColor(ci);
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->SetRange(1,98);
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->CenterTitle(true);
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->SetTitleSize(0.04);
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_MeansPfitsPuncertainty1005->GetXaxis()->SetTitleFont(42);
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->SetTitle("#delta#LTB_{r}^{b}#GT [ppm]");
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->CenterTitle(true);
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->SetNdivisions(4000510);
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->SetTitleSize(0.04);
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_MeansPfitsPuncertainty1005->GetYaxis()->SetTitleFont(42);
   Graph_MeansPfitsPuncertainty1005->GetZaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1005->GetZaxis()->SetTitleOffset(1);
   Graph_MeansPfitsPuncertainty1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Mean fit uncertainty1005);
   
   gre->Draw("ap");
   
   Double_t RMS of truth residual_fx1006[13] = {
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
   Double_t RMS of truth residual_fy1006[13] = {
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
   Double_t RMS of truth residual_fex1006[13] = {
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
   Double_t RMS of truth residual_fey1006[13] = {
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
   gre = new TGraphErrors(13,RMS of truth residual_fx1006,RMS of truth residual_fy1006,RMS of truth residual_fex1006,RMS of truth residual_fey1006);
   gre->SetName("RMS of truth residual");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RMSsPofsPtruthsPresidual1006 = new TH1F("Graph_RMSsPofsPtruthsPresidual1006","",100,0,1.362893e+07);
   Graph_RMSsPofsPtruthsPresidual1006->SetMinimum(0.3210586);
   Graph_RMSsPofsPtruthsPresidual1006->SetMaximum(1.814595);
   Graph_RMSsPofsPtruthsPresidual1006->SetDirectory(0);
   Graph_RMSsPofsPtruthsPresidual1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RMSsPofsPtruthsPresidual1006->SetLineColor(ci);
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->SetRange(1,98);
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->CenterTitle(true);
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->SetTitleSize(0.04);
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_RMSsPofsPtruthsPresidual1006->GetXaxis()->SetTitleFont(42);
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->CenterTitle(true);
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->SetNdivisions(4000510);
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->SetTitleSize(0.04);
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->SetTitleOffset(1.1);
   Graph_RMSsPofsPtruthsPresidual1006->GetYaxis()->SetTitleFont(42);
   Graph_RMSsPofsPtruthsPresidual1006->GetZaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1006->GetZaxis()->SetTitleOffset(1);
   Graph_RMSsPofsPtruthsPresidual1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_RMS of truth residual1006);
   
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
   TGaxis *gaxis = new TGaxis(0,1.688229,1.335635e+07,1.688229,0,344.5,510,"-");
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
