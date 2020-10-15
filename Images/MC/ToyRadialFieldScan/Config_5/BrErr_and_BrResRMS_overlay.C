void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.134805,1.491396e+07,1.605456);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1343[13] = {
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
   Double_t Fits_fy1343[13] = {
   1.360348,
   0.9646318,
   0.7885115,
   0.686857,
   0.6137971,
   0.5603227,
   0.5183858,
   0.4847844,
   0.4567251,
   0.4333146,
   0.4134285,
   0.3953722,
   0.3799135};
   Double_t Fits_fex1343[13] = {
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
   Double_t Fits_fey1343[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1343,Fits_fy1343,Fits_fex1343,Fits_fey1343);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1343 = new TH1F("Graph_Fits1343","",100,0,1.366686e+07);
   Graph_Fits1343->SetMinimum(0.2818701);
   Graph_Fits1343->SetMaximum(1.458391);
   Graph_Fits1343->SetDirectory(0);
   Graph_Fits1343->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1343->SetLineColor(ci);
   Graph_Fits1343->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1343->GetXaxis()->SetRange(1,97);
   Graph_Fits1343->GetXaxis()->CenterTitle(true);
   Graph_Fits1343->GetXaxis()->SetLabelFont(42);
   Graph_Fits1343->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1343->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1343->GetXaxis()->SetTitleFont(42);
   Graph_Fits1343->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1343->GetYaxis()->CenterTitle(true);
   Graph_Fits1343->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1343->GetYaxis()->SetLabelFont(42);
   Graph_Fits1343->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1343->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1343->GetYaxis()->SetTitleFont(42);
   Graph_Fits1343->GetZaxis()->SetLabelFont(42);
   Graph_Fits1343->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1343->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1343);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1344[13] = {
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
   Double_t Truth_fy1344[13] = {
   1.351907,
   0.9437784,
   0.8024199,
   0.6762387,
   0.6169996,
   0.5706042,
   0.5317687,
   0.4914297,
   0.4657211,
   0.4391265,
   0.4148475,
   0.3924248,
   0.3851472};
   Double_t Truth_fex1344[13] = {
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
   Double_t Truth_fey1344[13] = {
   0.03022955,
   0.02110353,
   0.01794265,
   0.01512116,
   0.01379653,
   0.0127591,
   0.01189071,
   0.0109887,
   0.01041384,
   0.009819167,
   0.009276273,
   0.008774886,
   0.008612154};
   gre = new TGraphErrors(13,Truth_fx1344,Truth_fy1344,Truth_fex1344,Truth_fey1344);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1344 = new TH1F("Graph_Truth1344","",100,0,1.366686e+07);
   Graph_Truth1344->SetMinimum(0.275975);
   Graph_Truth1344->SetMaximum(1.482696);
   Graph_Truth1344->SetDirectory(0);
   Graph_Truth1344->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1344->SetLineColor(ci);
   Graph_Truth1344->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1344->GetXaxis()->SetRange(1,97);
   Graph_Truth1344->GetXaxis()->CenterTitle(true);
   Graph_Truth1344->GetXaxis()->SetLabelFont(42);
   Graph_Truth1344->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1344->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1344->GetXaxis()->SetTitleFont(42);
   Graph_Truth1344->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1344->GetYaxis()->CenterTitle(true);
   Graph_Truth1344->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1344->GetYaxis()->SetLabelFont(42);
   Graph_Truth1344->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1344->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1344->GetYaxis()->SetTitleFont(42);
   Graph_Truth1344->GetZaxis()->SetLabelFont(42);
   Graph_Truth1344->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1344->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1344);
   
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
   TGaxis *gaxis = new TGaxis(0,1.458391,1.325685e+07,1.458391,0,344.5,510,"-");
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
