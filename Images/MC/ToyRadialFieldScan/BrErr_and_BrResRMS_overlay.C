void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1672340,-0.1357856,1.505105e+07,1.22207);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Mean fit uncertainty_fx1109[13] = {
   2522568,
   5027864,
   7576235,
   1.011936e+07,
   1.266924e+07,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Mean fit uncertainty_fy1109[13] = {
   0.9875315,
   0.6982605,
   0.569158,
   0.4919425,
   0.439626,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Mean fit uncertainty_fex1109[13] = {
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
   Double_t Mean fit uncertainty_fey1109[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Mean fit uncertainty_fx1109,Mean fit uncertainty_fy1109,Mean fit uncertainty_fex1109,Mean fit uncertainty_fey1109);
   gre->SetName("Mean fit uncertainty");
   gre->SetTitle(";CTAGs / setting;#delta#LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_MeansPfitsPuncertainty1109 = new TH1F("Graph_MeansPfitsPuncertainty1109","",100,0,1.393616e+07);
   Graph_MeansPfitsPuncertainty1109->SetMinimum(0);
   Graph_MeansPfitsPuncertainty1109->SetMaximum(1.086285);
   Graph_MeansPfitsPuncertainty1109->SetDirectory(0);
   Graph_MeansPfitsPuncertainty1109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_MeansPfitsPuncertainty1109->SetLineColor(ci);
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->SetRange(1,96);
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->CenterTitle(true);
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->SetTitleSize(0.04);
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->SetTitleOffset(1.1);
   Graph_MeansPfitsPuncertainty1109->GetXaxis()->SetTitleFont(42);
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->SetTitle("#delta#LTB_{r}^{b}#GT [ppm]");
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->CenterTitle(true);
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->SetNdivisions(4000510);
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->SetTitleSize(0.04);
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->SetTitleOffset(1.1);
   Graph_MeansPfitsPuncertainty1109->GetYaxis()->SetTitleFont(42);
   Graph_MeansPfitsPuncertainty1109->GetZaxis()->SetLabelFont(42);
   Graph_MeansPfitsPuncertainty1109->GetZaxis()->SetTitleOffset(1);
   Graph_MeansPfitsPuncertainty1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Mean fit uncertainty1109);
   
   gre->Draw("ap");
   
   Double_t RMS of truth residual_fx1110[13] = {
   2522568,
   5027864,
   7576235,
   1.011936e+07,
   1.266924e+07,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RMS of truth residual_fy1110[13] = {
   1.006187,
   0.689605,
   0.5603001,
   0.5012449,
   0.4371818,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RMS of truth residual_fex1110[13] = {
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
   Double_t RMS of truth residual_fey1110[13] = {
   0.02249903,
   0.01542004,
   0.01252869,
   0.01120818,
   0.009775681,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(13,RMS of truth residual_fx1110,RMS of truth residual_fy1110,RMS of truth residual_fex1110,RMS of truth residual_fey1110);
   gre->SetName("RMS of truth residual");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_RMSsPofsPtruthsPresidual1110 = new TH1F("Graph_RMSsPofsPtruthsPresidual1110","",100,0,1.393616e+07);
   Graph_RMSsPofsPtruthsPresidual1110->SetMinimum(0);
   Graph_RMSsPofsPtruthsPresidual1110->SetMaximum(1.131555);
   Graph_RMSsPofsPtruthsPresidual1110->SetDirectory(0);
   Graph_RMSsPofsPtruthsPresidual1110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RMSsPofsPtruthsPresidual1110->SetLineColor(ci);
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->SetRange(1,96);
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->CenterTitle(true);
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->SetTitleSize(0.04);
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->SetTitleOffset(1.1);
   Graph_RMSsPofsPtruthsPresidual1110->GetXaxis()->SetTitleFont(42);
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->CenterTitle(true);
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->SetNdivisions(4000510);
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->SetTitleSize(0.04);
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->SetTitleOffset(1.1);
   Graph_RMSsPofsPtruthsPresidual1110->GetYaxis()->SetTitleFont(42);
   Graph_RMSsPofsPtruthsPresidual1110->GetZaxis()->SetLabelFont(42);
   Graph_RMSsPofsPtruthsPresidual1110->GetZaxis()->SetTitleOffset(1);
   Graph_RMSsPofsPtruthsPresidual1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_RMS of truth residual1110);
   
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
   TGaxis *gaxis = new TGaxis(0,1.086285,1.337872e+07,1.086285,0,344.5,510,"-");
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
   TLine *line = new TLine(0,1,1.337872e+07,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
