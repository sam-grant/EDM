void 30ppm_18kV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 17 18:23:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-55.207,-1.5625,496.863,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[24] = {
   14.69388,
   29.38776,
   44.08163,
   58.77551,
   73.46939,
   88.16327,
   102.8571,
   117.551,
   132.2449,
   146.9388,
   161.6327,
   176.3265,
   191.0204,
   205.7143,
   220.4082,
   235.102,
   249.7959,
   264.4898,
   279.1837,
   293.8776,
   308.5714,
   323.2653,
   337.9592,
   352.6531};
   Double_t Graph0_fy1001[24] = {
   2.590941,
   2.44857,
   2.474013,
   2.608011,
   2.540986,
   2.585594,
   2.409408,
   2.559386,
   2.560998,
   2.483095,
   2.53434,
   2.55733,
   2.438909,
   2.535938,
   2.569592,
   2.49412,
   2.555014,
   2.583698,
   2.58024,
   2.49639,
   2.512026,
   2.534431,
   2.544108,
   2.67335};
   Double_t Graph0_fex1001[24] = {
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
   Double_t Graph0_fey1001[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0,386.449);
   Graph_Graph01001->SetMinimum(-1);
   Graph_Graph01001->SetMaximum(3.5);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1002[24] = {
   14.69388,
   29.38776,
   44.08163,
   58.77551,
   73.46939,
   88.16327,
   102.8571,
   117.551,
   132.2449,
   146.9388,
   161.6327,
   176.3265,
   191.0204,
   205.7143,
   220.4082,
   235.102,
   249.7959,
   264.4898,
   279.1837,
   293.8776,
   308.5714,
   323.2653,
   337.9592,
   352.6531};
   Double_t Graph0_fy1002[24] = {
   2.590941,
   2.44857,
   2.474013,
   2.608011,
   2.540986,
   2.585594,
   2.409408,
   2.559386,
   2.560998,
   2.483095,
   2.53434,
   2.55733,
   2.438909,
   2.535938,
   2.569592,
   2.49412,
   2.555014,
   2.583698,
   2.58024,
   2.49639,
   2.512026,
   2.534431,
   2.544108,
   2.67335};
   Double_t Graph0_fex1002[24] = {
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
   Double_t Graph0_fey1002[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010011002 = new TH1F("Graph_Graph_Graph010011002","",100,0,386.449);
   Graph_Graph_Graph010011002->SetMinimum(-1);
   Graph_Graph_Graph010011002->SetMaximum(3.5);
   Graph_Graph_Graph010011002->SetDirectory(0);
   Graph_Graph_Graph010011002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010011002->SetLineColor(ci);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010011002->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010011002->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010011002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010011002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010011002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010011002);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1003[24] = {
   14.69388,
   29.38776,
   44.08163,
   58.77551,
   73.46939,
   88.16327,
   102.8571,
   117.551,
   132.2449,
   146.9388,
   161.6327,
   176.3265,
   191.0204,
   205.7143,
   220.4082,
   235.102,
   249.7959,
   264.4898,
   279.1837,
   293.8776,
   308.5714,
   323.2653,
   337.9592,
   352.6531};
   Double_t Graph1_fy1003[24] = {
   -0.04061292,
   -0.09062157,
   -0.2607423,
   -0.1316847,
   -0.2646985,
   -0.2393884,
   -0.3833438,
   -0.299669,
   -0.1748608,
   -0.102468,
   -0.1683333,
   -0.03052928,
   0.0810438,
   0.1526351,
   0.1898013,
   0.2275686,
   0.2963082,
   0.3183441,
   0.1421043,
   0.3404734,
   0.2795135,
   0.3300767,
   0.210683,
   0.2099579};
   Double_t Graph1_fex1003[24] = {
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
   Double_t Graph1_fey1003[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,0,386.449);
   Graph_Graph11003->SetMinimum(-0.5431691);
   Graph_Graph11003->SetMaximum(0.4986688);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1004[24] = {
   14.69388,
   29.38776,
   44.08163,
   58.77551,
   73.46939,
   88.16327,
   102.8571,
   117.551,
   132.2449,
   146.9388,
   161.6327,
   176.3265,
   191.0204,
   205.7143,
   220.4082,
   235.102,
   249.7959,
   264.4898,
   279.1837,
   293.8776,
   308.5714,
   323.2653,
   337.9592,
   352.6531};
   Double_t Graph2_fy1004[24] = {
   -0.1174234,
   -0.1289336,
   -0.007888224,
   -0.01022765,
   0.002753967,
   -0.1169228,
   -0.0865049,
   0.01623332,
   0.1063871,
   0.08823362,
   0.00875269,
   0.0563816,
   -0.102645,
   0.01350037,
   -0.05874231,
   -0.1777791,
   -0.0626231,
   -0.1148008,
   0.06071705,
   -0.02268308,
   0.08463754,
   0.08608642,
   0.03116484,
   0.03777473};
   Double_t Graph2_fex1004[24] = {
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
   Double_t Graph2_fey1004[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph2_fx1004,Graph2_fy1004,Graph2_fex1004,Graph2_fey1004);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21004 = new TH1F("Graph_Graph21004","Graph",100,0,386.449);
   Graph_Graph21004->SetMinimum(-0.2965584);
   Graph_Graph21004->SetMaximum(0.2292775);
   Graph_Graph21004->SetDirectory(0);
   Graph_Graph21004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21004->SetLineColor(ci);
   Graph_Graph21004->GetXaxis()->SetLabelFont(42);
   Graph_Graph21004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21004->GetXaxis()->SetTitleFont(42);
   Graph_Graph21004->GetYaxis()->SetLabelFont(42);
   Graph_Graph21004->GetYaxis()->SetTitleFont(42);
   Graph_Graph21004->GetZaxis()->SetLabelFont(42);
   Graph_Graph21004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21004);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1005[24] = {
   14.69388,
   29.38776,
   44.08163,
   58.77551,
   73.46939,
   88.16327,
   102.8571,
   117.551,
   132.2449,
   146.9388,
   161.6327,
   176.3265,
   191.0204,
   205.7143,
   220.4082,
   235.102,
   249.7959,
   264.4898,
   279.1837,
   293.8776,
   308.5714,
   323.2653,
   337.9592,
   352.6531};
   Double_t Graph3_fy1005[24] = {
   2.432904,
   2.229015,
   2.205382,
   2.466099,
   2.279041,
   2.229282,
   1.939559,
   2.27595,
   2.492525,
   2.468861,
   2.374759,
   2.583183,
   2.417308,
   2.702074,
   2.700651,
   2.54391,
   2.788699,
   2.787241,
   2.783062,
   2.81418,
   2.876177,
   2.950594,
   2.785956,
   2.921083};
   Double_t Graph3_fex1005[24] = {
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
   Double_t Graph3_fey1005[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph3_fx1005,Graph3_fy1005,Graph3_fex1005,Graph3_fey1005);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31005 = new TH1F("Graph_Graph31005","Graph",100,0,386.449);
   Graph_Graph31005->SetMinimum(1.750308);
   Graph_Graph31005->SetMaximum(3.145254);
   Graph_Graph31005->SetDirectory(0);
   Graph_Graph31005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31005->SetLineColor(ci);
   Graph_Graph31005->GetXaxis()->SetLabelFont(42);
   Graph_Graph31005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31005->GetXaxis()->SetTitleFont(42);
   Graph_Graph31005->GetYaxis()->SetLabelFont(42);
   Graph_Graph31005->GetYaxis()->SetTitleFont(42);
   Graph_Graph31005->GetZaxis()->SetLabelFont(42);
   Graph_Graph31005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31005);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","1st order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","2nd order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","3rd order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Total","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
