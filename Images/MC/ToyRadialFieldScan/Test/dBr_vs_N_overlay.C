void dBr_vs_N_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:36:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(307602.3,-0.1426176,2367200,1.283558);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1002[13] = {
   6.953127e-310,
   1945311,
   0,
   6.953127e-310,
   6.953127e-310,
   2.153399e-314,
   2.970794e-313,
   0,
   0,
   0,
   0,
   0,
   6.953127e-310};
   Double_t Fits_fy1002[13] = {
   0,
   1.037219,
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
   Double_t Fits_fex1002[13] = {
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
   Double_t Fits_fey1002[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1002,Fits_fy1002,Fits_fex1002,Fits_fey1002);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1002 = new TH1F("Graph_Fits1002","",100,0,2139842);
   Graph_Fits1002->SetMinimum(0);
   Graph_Fits1002->SetMaximum(1.14094);
   Graph_Fits1002->SetDirectory(0);
   Graph_Fits1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1002->SetLineColor(ci);
   Graph_Fits1002->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1002->GetXaxis()->SetRange(25,101);
   Graph_Fits1002->GetXaxis()->CenterTitle(true);
   Graph_Fits1002->GetXaxis()->SetLabelFont(42);
   Graph_Fits1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1002->GetXaxis()->SetTitleFont(42);
   Graph_Fits1002->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1002->GetYaxis()->CenterTitle(true);
   Graph_Fits1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1002->GetYaxis()->SetLabelFont(42);
   Graph_Fits1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1002->GetYaxis()->SetTitleFont(42);
   Graph_Fits1002->GetZaxis()->SetLabelFont(42);
   Graph_Fits1002->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1002);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1003[13] = {
   6.953127e-310,
   1945311,
   0,
   6.953127e-310,
   6.953127e-310,
   2.153399e-314,
   2.970794e-313,
   0,
   0,
   0,
   0,
   0,
   6.953127e-310};
   Double_t Truth_fy1003[13] = {
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
   Double_t Truth_fex1003[13] = {
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
   Double_t Truth_fey1003[13] = {
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
   gre = new TGraphErrors(13,Truth_fx1003,Truth_fy1003,Truth_fex1003,Truth_fey1003);
   gre->SetName("Truth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1003 = new TH1F("Graph_Truth1003","Graph",100,0,2139842);
   Graph_Truth1003->SetMinimum(0);
   Graph_Truth1003->SetMaximum(1.1);
   Graph_Truth1003->SetDirectory(0);
   Graph_Truth1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1003->SetLineColor(ci);
   Graph_Truth1003->GetXaxis()->SetLabelFont(42);
   Graph_Truth1003->GetXaxis()->SetTitleOffset(1);
   Graph_Truth1003->GetXaxis()->SetTitleFont(42);
   Graph_Truth1003->GetYaxis()->SetLabelFont(42);
   Graph_Truth1003->GetYaxis()->SetTitleFont(42);
   Graph_Truth1003->GetZaxis()->SetLabelFont(42);
   Graph_Truth1003->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1003);
   
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
   TGaxis *gaxis = new TGaxis(513562.1,1.14094,2161241,1.14094,14,345,510,"-");
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
