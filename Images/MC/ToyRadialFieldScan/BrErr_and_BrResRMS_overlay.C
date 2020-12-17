void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:16 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.06026387,1.502589e+07,0.7659232);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1213[13] = {
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
   Double_t Fits_fy1213[13] = {
   0.6483133,
   0.455556,
   0.3708095,
   0.3226463,
   0.2880845,
   0.2625181,
   0.242849,
   0.2271299,
   0.2139569,
   0.20292,
   0.1933874,
   0.1851432,
   0.1778738};
   Double_t Fits_fex1213[13] = {
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
   Double_t Fits_fey1213[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1213,Fits_fy1213,Fits_fex1213,Fits_fey1213);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs / setting;#delta#LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1213 = new TH1F("Graph_Fits1213","",100,0,1.362893e+07);
   Graph_Fits1213->SetMinimum(0.1308298);
   Graph_Fits1213->SetMaximum(0.6953573);
   Graph_Fits1213->SetDirectory(0);
   Graph_Fits1213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1213->SetLineColor(ci);
   Graph_Fits1213->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1213->GetXaxis()->SetRange(1,98);
   Graph_Fits1213->GetXaxis()->CenterTitle(true);
   Graph_Fits1213->GetXaxis()->SetLabelFont(42);
   Graph_Fits1213->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1213->GetXaxis()->SetTitleFont(42);
   Graph_Fits1213->GetYaxis()->SetTitle("#delta#LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Fits1213->GetYaxis()->CenterTitle(true);
   Graph_Fits1213->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1213->GetYaxis()->SetLabelFont(42);
   Graph_Fits1213->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1213->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1213->GetYaxis()->SetTitleFont(42);
   Graph_Fits1213->GetZaxis()->SetLabelFont(42);
   Graph_Fits1213->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1213);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1214[13] = {
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
   Double_t Truth_fy1214[13] = {
   0.6522301,
   0.4496337,
   0.367446,
   0.3105331,
   0.2910145,
   0.2703952,
   0.2461954,
   0.23332,
   0.2065397,
   0.2032225,
   0.1967144,
   0.1896753,
   0.1779282};
   Double_t Truth_fex1214[13] = {
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
   Double_t Truth_fey1214[13] = {
   0.01458431,
   0.01005411,
   0.008216343,
   0.006943731,
   0.006507282,
   0.00604622,
   0.005505096,
   0.005217194,
   0.004618367,
   0.004544194,
   0.004398667,
   0.004241268,
   0.003978596};
   gre = new TGraphErrors(13,Truth_fx1214,Truth_fy1214,Truth_fex1214,Truth_fey1214);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1214 = new TH1F("Graph_Truth1214","",100,0,1.362893e+07);
   Graph_Truth1214->SetMinimum(0.1246631);
   Graph_Truth1214->SetMaximum(0.7161008);
   Graph_Truth1214->SetDirectory(0);
   Graph_Truth1214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1214->SetLineColor(ci);
   Graph_Truth1214->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1214->GetXaxis()->SetRange(1,98);
   Graph_Truth1214->GetXaxis()->CenterTitle(true);
   Graph_Truth1214->GetXaxis()->SetLabelFont(42);
   Graph_Truth1214->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1214->GetXaxis()->SetTitleFont(42);
   Graph_Truth1214->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Truth1214->GetYaxis()->CenterTitle(true);
   Graph_Truth1214->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1214->GetYaxis()->SetLabelFont(42);
   Graph_Truth1214->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1214->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1214->GetYaxis()->SetTitleFont(42);
   Graph_Truth1214->GetZaxis()->SetLabelFont(42);
   Graph_Truth1214->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1214);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.7,0.65,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fits","Fits","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Truth","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(0,0.6953573,1.335635e+07,0.6953573,0,344.5,510,"-");
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
