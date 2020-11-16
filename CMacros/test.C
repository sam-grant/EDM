void test()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 17:10:55 2020) by ROOT version 6.22/02
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
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956};
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
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956,
   3.270956};
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
   3.162376,
   3.067396,
   2.997056,
   2.957868,
   2.9509,
   2.97209,
   3.013678,
   3.066349,
   3.121543,
   3.173327,
   3.219389,
   3.260903,
   3.301381,
   3.344838,
   3.393817,
   3.447831,
   3.502704,
   3.551003,
   3.583515,
   3.591409,
   3.56854,
   3.513294,
   3.429502,
   3.326127};
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
   Graph_Graph11003->SetMinimum(2.789527);
   Graph_Graph11003->SetMaximum(3.742172);
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
