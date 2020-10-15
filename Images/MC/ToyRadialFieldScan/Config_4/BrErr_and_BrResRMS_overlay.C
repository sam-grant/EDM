void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:40:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.08495895,1.491396e+07,1.007483);
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
   0.853729,
   0.6057683,
   0.495303,
   0.4314639,
   0.3855962,
   0.3519518,
   0.3256768,
   0.3045543,
   0.2869843,
   0.2722514,
   0.2596829,
   0.2484375,
   0.238713};
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
   Graph_Fits1343->SetMinimum(0.1772114);
   Graph_Fits1343->SetMaximum(0.9152306);
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
   0.8481604,
   0.5925682,
   0.5039822,
   0.4247161,
   0.3875791,
   0.3584248,
   0.3340829,
   0.3087823,
   0.2926544,
   0.2757667,
   0.2604838,
   0.2465454,
   0.2420309};
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
   0.01896544,
   0.01325023,
   0.01126939,
   0.009496942,
   0.008666533,
   0.008014621,
   0.00747032,
   0.006904583,
   0.006543952,
   0.006166332,
   0.005824594,
   0.005512922,
   0.005411975};
   gre = new TGraphErrors(13,Truth_fx1344,Truth_fy1344,Truth_fex1344,Truth_fey1344);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1344 = new TH1F("Graph_Truth1344","",100,0,1.366686e+07);
   Graph_Truth1344->SetMinimum(0.1735682);
   Graph_Truth1344->SetMaximum(0.9301765);
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
   TGaxis *gaxis = new TGaxis(0,0.9152306,1.325685e+07,0.9152306,0,344.5,510,"-");
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
