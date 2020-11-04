void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1245318,1.491396e+07,1.489238);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1187[13] = {
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
   Double_t Fits_fy1187[13] = {
   1.261787,
   0.8925231,
   0.731422,
   0.6359312,
   0.5690481,
   0.5188793,
   0.4802037,
   0.4489212,
   0.4234835,
   0.4013387,
   0.3828523,
   0.3663556,
   0.3519828};
   Double_t Fits_fex1187[13] = {
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
   Double_t Fits_fey1187[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1187,Fits_fy1187,Fits_fex1187,Fits_fey1187);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1187 = new TH1F("Graph_Fits1187","",100,0,1.366686e+07);
   Graph_Fits1187->SetMinimum(0.2610024);
   Graph_Fits1187->SetMaximum(1.352767);
   Graph_Fits1187->SetDirectory(0);
   Graph_Fits1187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1187->SetLineColor(ci);
   Graph_Fits1187->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1187->GetXaxis()->SetRange(1,97);
   Graph_Fits1187->GetXaxis()->CenterTitle(true);
   Graph_Fits1187->GetXaxis()->SetLabelFont(42);
   Graph_Fits1187->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1187->GetXaxis()->SetTitleFont(42);
   Graph_Fits1187->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1187->GetYaxis()->CenterTitle(true);
   Graph_Fits1187->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1187->GetYaxis()->SetLabelFont(42);
   Graph_Fits1187->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1187->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1187->GetYaxis()->SetTitleFont(42);
   Graph_Fits1187->GetZaxis()->SetLabelFont(42);
   Graph_Fits1187->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1187);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1188[13] = {
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
   Double_t Truth_fy1188[13] = {
   1.240449,
   0.8958372,
   0.6962496,
   0.6350339,
   0.5693567,
   0.5004652,
   0.4986319,
   0.4469096,
   0.4181364,
   0.4009004,
   0.3955286,
   0.368658,
   0.3517677};
   Double_t Truth_fex1188[13] = {
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
   Double_t Truth_fey1188[13] = {
   0.02773727,
   0.02003153,
   0.01556861,
   0.01419979,
   0.0127312,
   0.01119074,
   0.01114975,
   0.009993202,
   0.009349815,
   0.008964405,
   0.008844288,
   0.008243445,
   0.007865765};
   gre = new TGraphErrors(13,Truth_fx1188,Truth_fy1188,Truth_fex1188,Truth_fey1188);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1188 = new TH1F("Graph_Truth1188","",100,0,1.366686e+07);
   Graph_Truth1188->SetMinimum(0.2514736);
   Graph_Truth1188->SetMaximum(1.360614);
   Graph_Truth1188->SetDirectory(0);
   Graph_Truth1188->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1188->SetLineColor(ci);
   Graph_Truth1188->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1188->GetXaxis()->SetRange(1,97);
   Graph_Truth1188->GetXaxis()->CenterTitle(true);
   Graph_Truth1188->GetXaxis()->SetLabelFont(42);
   Graph_Truth1188->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1188->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1188->GetXaxis()->SetTitleFont(42);
   Graph_Truth1188->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1188->GetYaxis()->CenterTitle(true);
   Graph_Truth1188->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1188->GetYaxis()->SetLabelFont(42);
   Graph_Truth1188->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1188->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1188->GetYaxis()->SetTitleFont(42);
   Graph_Truth1188->GetZaxis()->SetLabelFont(42);
   Graph_Truth1188->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1188->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1188);
   
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
   TGaxis *gaxis = new TGaxis(0,1.352767,1.325685e+07,1.352767,0,344.5,510,"-");
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
