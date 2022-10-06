#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VerticalOffsetSimOverlay()
{
//=========Macro generated from canvas: c/
//=========  (Tue Oct  4 14:56:59 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(183.4689,-0.74375,3345.379,0.19375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t c_vs_p_thetaY_fx1001[12] = {
   124.3991,
   374.0341,
   623.7056,
   873.2706,
   1122.785,
   1372.229,
   1621.527,
   1870.634,
   2119.341,
   2367.305,
   2613.177,
   2850.267};
   Double_t c_vs_p_thetaY_fy1001[12] = {
   0.0153372,
   -0.002456987,
   0.0007658164,
   0.001048982,
   -0.002142891,
   0.005348593,
   0.004629735,
   0.0008879849,
   -0.00519526,
   0.003016005,
   0.003139812,
   0.002286544};
   Double_t c_vs_p_thetaY_fex1001[12] = {
   0.005427748,
   0.005549968,
   0.005701468,
   0.005911954,
   0.006197705,
   0.006576526,
   0.007084382,
   0.007771727,
   0.008743531,
   0.01021422,
   0.01272538,
   0.0181069};
   Double_t c_vs_p_thetaY_fey1001[12] = {
   0.009118501,
   0.003654496,
   0.002693602,
   0.002201523,
   0.001896887,
   0.001687423,
   0.001539289,
   0.001428141,
   0.001347133,
   0.001291105,
   0.001261542,
   0.001310288};
   TGraphErrors *gre = new TGraphErrors(12,c_vs_p_thetaY_fx1001,c_vs_p_thetaY_fy1001,c_vs_p_thetaY_fex1001,c_vs_p_thetaY_fey1001);
   gre->SetName("c_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_c_vs_p_thetaY1001 = new TH1F("Graph_c_vs_p_thetaY1001","",100,0,3122.874);
   Graph_c_vs_p_thetaY1001->SetMinimum(-0.65);
   Graph_c_vs_p_thetaY1001->SetMaximum(0.1);
   Graph_c_vs_p_thetaY1001->SetDirectory(0);
   Graph_c_vs_p_thetaY1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_c_vs_p_thetaY1001->SetLineColor(ci);
   Graph_c_vs_p_thetaY1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_c_vs_p_thetaY1001->GetXaxis()->SetRange(17,97);
   Graph_c_vs_p_thetaY1001->GetXaxis()->CenterTitle(true);
   Graph_c_vs_p_thetaY1001->GetXaxis()->SetLabelFont(42);
   Graph_c_vs_p_thetaY1001->GetXaxis()->SetTitleSize(0.04);
   Graph_c_vs_p_thetaY1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_c_vs_p_thetaY1001->GetXaxis()->SetTitleFont(42);
   Graph_c_vs_p_thetaY1001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_c_vs_p_thetaY1001->GetYaxis()->CenterTitle(true);
   Graph_c_vs_p_thetaY1001->GetYaxis()->SetNdivisions(4000510);
   Graph_c_vs_p_thetaY1001->GetYaxis()->SetLabelFont(42);
   Graph_c_vs_p_thetaY1001->GetYaxis()->SetTitleSize(0.04);
   Graph_c_vs_p_thetaY1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_c_vs_p_thetaY1001->GetYaxis()->SetTitleFont(42);
   Graph_c_vs_p_thetaY1001->GetZaxis()->SetLabelFont(42);
   Graph_c_vs_p_thetaY1001->GetZaxis()->SetTitleOffset(1);
   Graph_c_vs_p_thetaY1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_c_vs_p_thetaY1001);
   
   gre->Draw("ap");
   
   Double_t S12S18_c_vs_p_thetaY_fx1002[11] = {
   451.9584,
   653.4154,
   880.4514,
   1123.144,
   1371.119,
   1620.056,
   1866.791,
   2114.981,
   2362.875,
   2612.826,
   2786.745};
   Double_t S12S18_c_vs_p_thetaY_fy1002[11] = {
   4.972185,
   -0.206864,
   -0.4981976,
   -0.3828575,
   -0.2967475,
   -0.2858567,
   -0.2033852,
   -0.14112,
   -0.1652164,
   -0.09765419,
   -0.07600925};
   Double_t S12S18_c_vs_p_thetaY_fex1002[11] = {
   0.05711957,
   0.04821639,
   0.03479855,
   0.03393825,
   0.036261,
   0.04006455,
   0.04694329,
   0.0588926,
   0.07720515,
   0.09374739,
   0.1172269};
   Double_t S12S18_c_vs_p_thetaY_fey1002[11] = {
   0.05170614,
   0.0173905,
   0.009976378,
   0.008197003,
   0.007498946,
   0.007162471,
   0.007216194,
   0.007630709,
   0.00832092,
   0.008147446,
   0.02016634};
   gre = new TGraphErrors(11,S12S18_c_vs_p_thetaY_fx1002,S12S18_c_vs_p_thetaY_fy1002,S12S18_c_vs_p_thetaY_fex1002,S12S18_c_vs_p_thetaY_fey1002);
   gre->SetName("S12S18_c_vs_p_thetaY");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_thetaY1002 = new TH1F("Graph_S12S18_c_vs_p_thetaY1002","S12S18_",100,218.4052,3020.358);
   Graph_S12S18_c_vs_p_thetaY1002->SetMinimum(-1.061381);
   Graph_S12S18_c_vs_p_thetaY1002->SetMaximum(5.577098);
   Graph_S12S18_c_vs_p_thetaY1002->SetDirectory(0);
   Graph_S12S18_c_vs_p_thetaY1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_thetaY1002->SetLineColor(ci);
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->SetRange(0,100);
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_thetaY1002->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_thetaY1002->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_thetaY1002->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_thetaY1002->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_thetaY1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_thetaY1002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.63,0.2,0.85,0.33,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("c_vs_p_thetaY","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12S18_c_vs_p_thetaY","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
