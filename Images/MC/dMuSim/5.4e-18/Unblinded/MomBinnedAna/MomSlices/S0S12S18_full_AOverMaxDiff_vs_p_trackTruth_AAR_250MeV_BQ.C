void S0S12S18_full_AOverMaxDiff_vs_p_trackTruth_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:49:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(45.03123,-0.001565607,3197.219,0.004150387);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1137[11] = {
   -0.000245263,
   0.001047129,
   0.001012012,
   0.001388984,
   0.001595515,
   0.002214771,
   0.002199968,
   0.001864802,
   0.001426069,
   0.002693265,
   -0.0006129412};
   Double_t Graph0_fex1137[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1137[11] = {
   -0.0006084088,
   0.0002353784,
   0.000175043,
   0.0001744308,
   0.000195727,
   0.0002308594,
   0.0002628862,
   0.0003098542,
   0.0003808169,
   0.0005044567,
   -0.001526535};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","",100,0,3275);
   Graph_Graph01137->SetMinimum(-0.0009940074);
   Graph_Graph01137->SetMaximum(0.003578788);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01137->GetXaxis()->SetRange(12,88);
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
