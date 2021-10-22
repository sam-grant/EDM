void full_Y_RMS_vs_p_truth_AAR_200MeV_AQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 28 15:20:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,12.87805,3456.75,13.40081);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1046[15] = {
   12.96932,
   13.05089,
   13.1323,
   13.18071,
   13.18342,
   13.17596,
   13.17489,
   13.18861,
   13.19726,
   13.20877,
   13.20311,
   13.22665,
   13.24223,
   13.256,
   13.3053};
   Double_t Graph0_fex1046[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1046[15] = {
   0.004139164,
   0.003510836,
   0.003175481,
   0.0029838,
   0.002863397,
   0.002837523,
   0.002882986,
   0.002967338,
   0.003091707,
   0.003287846,
   0.003578573,
   0.004017581,
   0.004659114,
   0.005763866,
   0.008379877};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","",100,0,3300);
   Graph_Graph01046->SetMinimum(12.93033);
   Graph_Graph01046->SetMaximum(13.34853);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01046->GetXaxis()->SetRange(0,93);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
