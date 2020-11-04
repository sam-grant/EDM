void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:29 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1177121,1.491396e+07,1.409831);
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
   1.194478,
   0.8481514,
   0.6928325,
   0.6028327,
   0.538408,
   0.4912866,
   0.4554689,
   0.425196,
   0.4010024,
   0.3802372,
   0.3621604,
   0.3470425,
   0.3330653};
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
   Graph_Fits1161->SetMinimum(0.246924);
   Graph_Fits1161->SetMaximum(1.280619);
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
   1.2054,
   0.8679069,
   0.6950215,
   0.58476,
   0.5550972,
   0.4881314,
   0.4658386,
   0.429896,
   0.3948682,
   0.3985022,
   0.3562418,
   0.3320268,
   0.32911};
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
   0.02695357,
   0.01940699,
   0.01554115,
   0.01307563,
   0.01241235,
   0.01091495,
   0.01041647,
   0.009612768,
   0.00882952,
   0.008910781,
   0.00796581,
   0.007424344,
   0.007359123};
   gre = new TGraphErrors(13,Truth_fx1162,Truth_fy1162,Truth_fex1162,Truth_fey1162);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1162 = new TH1F("Graph_Truth1162","",100,0,1.366686e+07);
   Graph_Truth1162->SetMinimum(0.2306906);
   Graph_Truth1162->SetMaximum(1.323414);
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
   TGaxis *gaxis = new TGaxis(0,1.280619,1.325685e+07,1.280619,0,344.5,510,"-");
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
