void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.164131,1.491396e+07,1.97817);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1135[13] = {
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
   Double_t Fits_fy1135[13] = {
   1.67583,
   1.188856,
   0.9677654,
   0.8413676,
   0.7531615,
   0.6885303,
   0.6370782,
   0.59424,
   0.5605272,
   0.5316746,
   0.5070401,
   0.4854137,
   0.4664708};
   Double_t Fits_fex1135[13] = {
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
   Double_t Fits_fey1135[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1135,Fits_fy1135,Fits_fex1135,Fits_fey1135);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1135 = new TH1F("Graph_Fits1135","",100,0,1.366686e+07);
   Graph_Fits1135->SetMinimum(0.3455349);
   Graph_Fits1135->SetMaximum(1.796766);
   Graph_Fits1135->SetDirectory(0);
   Graph_Fits1135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1135->SetLineColor(ci);
   Graph_Fits1135->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1135->GetXaxis()->SetRange(1,97);
   Graph_Fits1135->GetXaxis()->CenterTitle(true);
   Graph_Fits1135->GetXaxis()->SetLabelFont(42);
   Graph_Fits1135->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1135->GetXaxis()->SetTitleFont(42);
   Graph_Fits1135->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1135->GetYaxis()->CenterTitle(true);
   Graph_Fits1135->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1135->GetYaxis()->SetLabelFont(42);
   Graph_Fits1135->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1135->GetYaxis()->SetTitleFont(42);
   Graph_Fits1135->GetZaxis()->SetLabelFont(42);
   Graph_Fits1135->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1135);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1136[13] = {
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
   Double_t Truth_fy1136[13] = {
   1.651398,
   1.186842,
   1.006846,
   0.8380857,
   0.737456,
   0.6992095,
   0.6355653,
   0.5939829,
   0.5804319,
   0.5300688,
   0.5049872,
   0.4925044,
   0.4642575};
   Double_t Truth_fex1136[13] = {
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
   Double_t Truth_fey1136[13] = {
   0.03692639,
   0.0265386,
   0.02251377,
   0.01874017,
   0.01649002,
   0.0156348,
   0.01421167,
   0.01328186,
   0.01297885,
   0.0118527,
   0.01129186,
   0.01101273,
   0.01038111};
   gre = new TGraphErrors(13,Truth_fx1136,Truth_fy1136,Truth_fex1136,Truth_fey1136);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1136 = new TH1F("Graph_Truth1136","",100,0,1.366686e+07);
   Graph_Truth1136->SetMinimum(0.3304315);
   Graph_Truth1136->SetMaximum(1.81177);
   Graph_Truth1136->SetDirectory(0);
   Graph_Truth1136->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1136->SetLineColor(ci);
   Graph_Truth1136->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1136->GetXaxis()->SetRange(1,97);
   Graph_Truth1136->GetXaxis()->CenterTitle(true);
   Graph_Truth1136->GetXaxis()->SetLabelFont(42);
   Graph_Truth1136->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1136->GetXaxis()->SetTitleFont(42);
   Graph_Truth1136->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1136->GetYaxis()->CenterTitle(true);
   Graph_Truth1136->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1136->GetYaxis()->SetLabelFont(42);
   Graph_Truth1136->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1136->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1136->GetYaxis()->SetTitleFont(42);
   Graph_Truth1136->GetZaxis()->SetLabelFont(42);
   Graph_Truth1136->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1136);
   
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
   TGaxis *gaxis = new TGaxis(0,1.796766,1.325685e+07,1.796766,0,344.5,510,"-");
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
