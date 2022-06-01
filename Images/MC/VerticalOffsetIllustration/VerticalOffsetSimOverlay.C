void VerticalOffsetSimOverlay()
{
//=========Macro generated from canvas: c/
//=========  (Mon May 30 21:32:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(183.4742,-0.74375,3345.477,0.19375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t c_vs_p_thetaY_fx1001[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t c_vs_p_thetaY_fy1001[12] = {
   -0.08893375,
   -0.03645726,
   0.0006427415,
   -0.002126049,
   -0.01744567,
   0.01637706,
   -0.00114005,
   -0.004650469,
   0.003699036,
   0.007343757,
   0.003158806,
   -0.01085779};
   Double_t c_vs_p_thetaY_fex1001[12] = {
   0.02908963,
   0.02973433,
   0.03055162,
   0.03167911,
   0.03320863,
   0.0352714,
   0.03796636,
   0.04164352,
   0.04682622,
   0.05470628,
   0.06824828,
   0.09707939};
   Double_t c_vs_p_thetaY_fey1001[12] = {
   0.05050939,
   0.02024725,
   0.01493749,
   0.01221683,
   0.01051015,
   0.009362542,
   0.00854835,
   0.007987062,
   0.007634845,
   0.007500768,
   0.007672783,
   0.008573111};
   TGraphErrors *gre = new TGraphErrors(12,c_vs_p_thetaY_fx1001,c_vs_p_thetaY_fy1001,c_vs_p_thetaY_fex1001,c_vs_p_thetaY_fey1001);
   gre->SetName("c_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_c_vs_p_thetaY1001 = new TH1F("Graph_c_vs_p_thetaY1001","",100,0,3122.965);
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
   451.8963,
   653.3497,
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265,
   2787.611};
   Double_t S12S18_c_vs_p_thetaY_fy1002[11] = {
   5.247846,
   -0.2394523,
   -0.5142433,
   -0.4037808,
   -0.3166845,
   -0.3087492,
   -0.2130678,
   -0.1470875,
   -0.1637278,
   -0.1027107,
   -0.1144444};
   Double_t S12S18_c_vs_p_thetaY_fex1002[11] = {
   0.06811951,
   0.05748166,
   0.04155252,
   0.0405763,
   0.04336583,
   0.04797142,
   0.05629496,
   0.07062218,
   0.0925011,
   0.1122526,
   0.1394332};
   Double_t S12S18_c_vs_p_thetaY_fey1002[11] = {
   0.06422236,
   0.02151934,
   0.01232496,
   0.01011461,
   0.009282415,
   0.008876876,
   0.00901367,
   0.009674837,
   0.01072016,
   0.01108595,
   0.02737586};
   gre = new TGraphErrors(11,S12S18_c_vs_p_thetaY_fx1002,S12S18_c_vs_p_thetaY_fy1002,S12S18_c_vs_p_thetaY_fex1002,S12S18_c_vs_p_thetaY_fey1002);
   gre->SetName("S12S18_c_vs_p_thetaY");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_thetaY1002 = new TH1F("Graph_S12S18_c_vs_p_thetaY1002","S12S18_",100,218.2359,3021.343);
   Graph_S12S18_c_vs_p_thetaY1002->SetMinimum(-1.110432);
   Graph_S12S18_c_vs_p_thetaY1002->SetMaximum(5.895932);
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
