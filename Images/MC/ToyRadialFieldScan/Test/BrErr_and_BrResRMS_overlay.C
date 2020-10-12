void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 18:10:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1195850,0.1417526,1.486271e+07,1.738903);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1005[13] = {
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
   Double_t Fits_fy1005[13] = {
   1.472711,
   1.034487,
   0.8486152,
   0.7367007,
   0.6596216,
   0.6013691,
   0.5568074,
   0.5200703,
   0.4905457,
   0.465205,
   0.4438487,
   0.4248802,
   0.4079442};
   Double_t Fits_fex1005[13] = {
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
   Double_t Fits_fey1005[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1005,Fits_fy1005,Fits_fex1005,Fits_fey1005);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1005 = new TH1F("Graph_Fits1005","",100,0,1.366686e+07);
   Graph_Fits1005->SetMinimum(0.3014676);
   Graph_Fits1005->SetMaximum(1.579188);
   Graph_Fits1005->SetDirectory(0);
   Graph_Fits1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1005->SetLineColor(ci);
   Graph_Fits1005->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1005->GetXaxis()->SetRange(4,97);
   Graph_Fits1005->GetXaxis()->CenterTitle(true);
   Graph_Fits1005->GetXaxis()->SetLabelFont(42);
   Graph_Fits1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1005->GetXaxis()->SetTitleFont(42);
   Graph_Fits1005->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1005->GetYaxis()->CenterTitle(true);
   Graph_Fits1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1005->GetYaxis()->SetLabelFont(42);
   Graph_Fits1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1005->GetYaxis()->SetTitleFont(42);
   Graph_Fits1005->GetZaxis()->SetLabelFont(42);
   Graph_Fits1005->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1005);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1006[13] = {
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
   Double_t Truth_fy1006[13] = {
   1.468178,
   1.035342,
   0.8481669,
   0.7292593,
   0.659376,
   0.5957757,
   0.5692248,
   0.5149427,
   0.4900319,
   0.4645729,
   0.4417335,
   0.43844,
   0.4028447};
   Double_t Truth_fex1006[13] = {
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
   Double_t Truth_fey1006[13] = {
   0.03282947,
   0.02315095,
   0.01896559,
   0.01630673,
   0.0147441,
   0.01332195,
   0.01272825,
   0.01151447,
   0.01095745,
   0.01038817,
   0.009877462,
   0.009803816,
   0.009007882};
   gre = new TGraphErrors(13,Truth_fx1006,Truth_fy1006,Truth_fex1006,Truth_fey1006);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1006 = new TH1F("Graph_Truth1006","",100,0,1.366686e+07);
   Graph_Truth1006->SetMinimum(0.2831197);
   Graph_Truth1006->SetMaximum(1.611725);
   Graph_Truth1006->SetDirectory(0);
   Graph_Truth1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1006->SetLineColor(ci);
   Graph_Truth1006->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1006->GetXaxis()->SetRange(4,97);
   Graph_Truth1006->GetXaxis()->CenterTitle(true);
   Graph_Truth1006->GetXaxis()->SetLabelFont(42);
   Graph_Truth1006->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1006->GetXaxis()->SetTitleFont(42);
   Graph_Truth1006->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1006->GetYaxis()->CenterTitle(true);
   Graph_Truth1006->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1006->GetYaxis()->SetLabelFont(42);
   Graph_Truth1006->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1006->GetYaxis()->SetTitleFont(42);
   Graph_Truth1006->GetZaxis()->SetLabelFont(42);
   Graph_Truth1006->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.69,0.69,0.89,0.89,NULL,"brNDC");
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
   TGaxis *gaxis = new TGaxis(410005.7,1.579188,1.325685e+07,1.579188,14,345,510,"-");
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
