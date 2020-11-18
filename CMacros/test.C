void test()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 17 17:58:08 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-48.30613,-3.875,434.7551,4.875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
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
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077};
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
   gre->SetTitle("test");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","test",100,0,386.449);
   Graph_Graph01001->SetMinimum(-3);
   Graph_Graph01001->SetMaximum(4);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
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
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077};
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
   gre->SetTitle("test");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010011002 = new TH1F("Graph_Graph_Graph010011002","test",100,0,386.449);
   Graph_Graph_Graph010011002->SetMinimum(-3);
   Graph_Graph_Graph010011002->SetMaximum(4);
   Graph_Graph_Graph010011002->SetDirectory(0);
   Graph_Graph_Graph010011002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010011002->SetLineColor(ci);
   Graph_Graph_Graph010011002->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleFont(42);
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
   -0.07669941,
   -0.1483819,
   -0.2103587,
   -0.2585758,
   -0.2898795,
   -0.302222,
   -0.2947962,
   -0.2680876,
   -0.2238433,
   -0.1649574,
   -0.0952816,
   -0.01937339,
   0.05780205,
   0.1311966,
   0.1960096,
   0.2480016,
   0.2837716,
   0.3009802,
   0.2985015,
   0.2764977,
   0.2364082,
   0.1808551,
   0.1134723,
   0.03866716};
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
   Graph_Graph11003->SetMinimum(-0.4513959);
   Graph_Graph11003->SetMaximum(0.4411643);
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
   -0.03405937,
   -0.05935313,
   -0.06937161,
   -0.06153644,
   -0.03786409,
   -0.004446939,
   0.03011469,
   0.05692592,
   0.06908655,
   0.06346689,
   0.04151322,
   0.008875605,
   -0.02604626,
   -0.05426479,
   -0.0685176,
   -0.06513654,
   -0.04499177,
   -0.0132678,
   0.0218708,
   0.05138068,
   0.06766709,
   0.06653852,
   0.04828543,
   0.01760547};
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
   Graph_Graph21004->SetMinimum(-0.1774224);
   Graph_Graph21004->SetMaximum(0.1777554);
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
   2.433318,
   2.336342,
   2.264346,
   2.223964,
   2.216333,
   2.237408,
   2.279395,
   2.332915,
   2.38932,
   2.442586,
   2.490308,
   2.533579,
   2.575832,
   2.621008,
   2.671569,
   2.726942,
   2.782856,
   2.831789,
   2.864449,
   2.871955,
   2.848152,
   2.79147,
   2.705834,
   2.600349};
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
   Graph_Graph31005->SetMinimum(2.053449);
   Graph_Graph31005->SetMaximum(3.024229);
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("test");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
