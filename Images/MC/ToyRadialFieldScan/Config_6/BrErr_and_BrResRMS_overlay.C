void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:52:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.2188863,1.491396e+07,2.804448);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1161[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Fits_fy1161[13] = {
   2.373521,
   1.65152,
   1.356101,
   1.174249,
   1.052269,
   0.9586292,
   0.8876336,
   0.8283954,
   0.7816191,
   0.7411353,
   0.7073862,
   0.6771135,
   0.6498133};
   Double_t Fits_fex1161[13] = {
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
   Double_t Fits_fey1161[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1161,Fits_fy1161,Fits_fex1161,Fits_fey1161);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1161 = new TH1F("Graph_Fits1161","",100,0,1.366686e+07);
   Graph_Fits1161->SetMinimum(0.4774425);
   Graph_Fits1161->SetMaximum(2.545892);
   Graph_Fits1161->SetDirectory(0);
   Graph_Fits1161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1161->SetLineColor(ci);
   Graph_Fits1161->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1161->GetXaxis()->SetRange(1,97);
   Graph_Fits1161->GetXaxis()->CenterTitle(true);
   Graph_Fits1161->GetXaxis()->SetLabelFont(42);
   Graph_Fits1161->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1161->GetXaxis()->SetTitleFont(42);
   Graph_Fits1161->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1161->GetYaxis()->CenterTitle(true);
   Graph_Fits1161->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1161->GetYaxis()->SetLabelFont(42);
   Graph_Fits1161->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1161->GetYaxis()->SetTitleFont(42);
   Graph_Fits1161->GetZaxis()->SetLabelFont(42);
   Graph_Fits1161->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1161);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1162[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Truth_fy1162[13] = {
   2.367458,
   1.654133,
   1.353742,
   1.163148,
   1.052814,
   0.9502699,
   0.9073745,
   0.8202903,
   0.7811699,
   0.7396181,
   0.7037328,
   0.6988314,
   0.642052};
   Double_t Truth_fex1162[13] = {
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
   Double_t Truth_fey1162[13] = {
   0.05293798,
   0.03698753,
   0.03027059,
   0.02600878,
   0.02354163,
   0.02124868,
   0.02028951,
   0.01834225,
   0.01746749,
   0.01653836,
   0.01573594,
   0.01562635,
   0.01435672};
   gre = new TGraphErrors(13,Truth_fx1162,Truth_fy1162,Truth_fex1162,Truth_fey1162);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1162 = new TH1F("Graph_Truth1162","",100,0,1.366686e+07);
   Graph_Truth1162->SetMinimum(0.4484252);
   Graph_Truth1162->SetMaximum(2.599666);
   Graph_Truth1162->SetDirectory(0);
   Graph_Truth1162->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1162->SetLineColor(ci);
   Graph_Truth1162->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1162->GetXaxis()->SetRange(1,97);
   Graph_Truth1162->GetXaxis()->CenterTitle(true);
   Graph_Truth1162->GetXaxis()->SetLabelFont(42);
   Graph_Truth1162->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1162->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1162->GetXaxis()->SetTitleFont(42);
   Graph_Truth1162->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1162->GetYaxis()->CenterTitle(true);
   Graph_Truth1162->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1162->GetYaxis()->SetLabelFont(42);
   Graph_Truth1162->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1162->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1162->GetYaxis()->SetTitleFont(42);
   Graph_Truth1162->GetZaxis()->SetLabelFont(42);
   Graph_Truth1162->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1162);
   
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
   TGaxis *gaxis = new TGaxis(0,2.545892,1.325685e+07,2.545892,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs");

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
