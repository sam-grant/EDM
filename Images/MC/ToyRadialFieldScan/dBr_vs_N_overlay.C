void dBr_vs_N_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1195850,0.1615882,1.486271e+07,1.963345);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1132[13] = {
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
   Double_t Fits_fy1132[13] = {
   1.659195,
   1.176765,
   0.9590596,
   0.8367675,
   0.7482169,
   0.6824814,
   0.6310478,
   0.5905235,
   0.5560436,
   0.526984,
   0.5035773,
   0.4822773,
   0.4621821};
   Double_t Fits_fex1132[13] = {
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
   Double_t Fits_fey1132[13] = {
   0.003857036,
   0.001985079,
   0.001267287,
   0.0009748052,
   0.0008034981,
   0.0006639253,
   0.0005446472,
   0.0004742235,
   0.0004337016,
   0.0003925233,
   0.000350129,
   0.0003108033,
   0.0003009887};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1132,Fits_fy1132,Fits_fex1132,Fits_fey1132);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1132 = new TH1F("Graph_Fits1132","",100,0,1.366686e+07);
   Graph_Fits1132->SetMinimum(0.341764);
   Graph_Fits1132->SetMaximum(1.78317);
   Graph_Fits1132->SetDirectory(0);
   Graph_Fits1132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1132->SetLineColor(ci);
   Graph_Fits1132->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1132->GetXaxis()->SetRange(4,97);
   Graph_Fits1132->GetXaxis()->CenterTitle(true);
   Graph_Fits1132->GetXaxis()->SetLabelFont(42);
   Graph_Fits1132->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1132->GetXaxis()->SetTitleFont(42);
   Graph_Fits1132->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1132->GetYaxis()->CenterTitle(true);
   Graph_Fits1132->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1132->GetYaxis()->SetLabelFont(42);
   Graph_Fits1132->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1132->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1132->GetYaxis()->SetTitleFont(42);
   Graph_Fits1132->GetZaxis()->SetLabelFont(42);
   Graph_Fits1132->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1132);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1133[13] = {
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
   Double_t Truth_fy1133[13] = {
   1.716088,
   1.285421,
   1.024064,
   0.8595439,
   0.8149934,
   0.7315355,
   0.6402964,
   0.6119374,
   0.5927982,
   0.5634603,
   0.5265757,
   0.523179,
   0.482854};
   Double_t Truth_fex1133[13] = {
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
   Double_t Truth_fey1133[13] = {
   0.0384692,
   0.02874289,
   0.02289876,
   0.01921999,
   0.01822381,
   0.01635763,
   0.01431746,
   0.01368334,
   0.01325537,
   0.01259936,
   0.01177459,
   0.01169864,
   0.01079694};
   gre = new TGraphErrors(13,Truth_fx1133,Truth_fy1133,Truth_fex1133,Truth_fey1133);
   gre->SetName("Truth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1133 = new TH1F("Graph_Truth1133","Graph",100,0,1.366686e+07);
   Graph_Truth1133->SetMinimum(0.3438071);
   Graph_Truth1133->SetMaximum(1.882808);
   Graph_Truth1133->SetDirectory(0);
   Graph_Truth1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1133->SetLineColor(ci);
   Graph_Truth1133->GetXaxis()->SetLabelFont(42);
   Graph_Truth1133->GetXaxis()->SetTitleOffset(1);
   Graph_Truth1133->GetXaxis()->SetTitleFont(42);
   Graph_Truth1133->GetYaxis()->SetLabelFont(42);
   Graph_Truth1133->GetYaxis()->SetTitleFont(42);
   Graph_Truth1133->GetZaxis()->SetLabelFont(42);
   Graph_Truth1133->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1133);
   
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
   TGaxis *gaxis = new TGaxis(410005.7,1.78317,1.325685e+07,1.78317,14,345,510,"-");
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
