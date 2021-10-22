void full_pY_RMS_vs_p_truth_AAR_200MeV_AQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 28 15:20:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,5.66667,3456.75,29.23654);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[15] = {
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
   Double_t Graph0_fy1048[15] = {
   9.598045,
   15.14445,
   18.60333,
   20.9798,
   22.761,
   24.10315,
   24.9524,
   25.30254,
   25.26381,
   24.9104,
   24.0175,
   22.59793,
   20.48924,
   17.54471,
   13.32096};
   Double_t Graph0_fex1048[15] = {
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
   Double_t Graph0_fey1048[15] = {
   0.00306322,
   0.004074029,
   0.004498412,
   0.004749328,
   0.004943615,
   0.005190758,
   0.005460192,
   0.00569288,
   0.005918524,
   0.006200543,
   0.00650971,
   0.006864096,
   0.007208884,
   0.007628649,
   0.008389741};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#sigma_{py} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","",100,0,3300);
   Graph_Graph01048->SetMinimum(8.023657);
   Graph_Graph01048->SetMaximum(26.87955);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01048->GetXaxis()->SetRange(0,93);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("#sigma_{py} [MeV]");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
