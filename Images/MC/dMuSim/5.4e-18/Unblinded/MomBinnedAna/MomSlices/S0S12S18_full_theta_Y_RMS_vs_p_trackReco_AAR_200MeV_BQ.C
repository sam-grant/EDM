void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Aug 25 16:47:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-360.8,-2.067708,3575.2,38.47158);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1161[14] = {
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
   Double_t Graph0_fy1161[14] = {
   31.39067,
   29.54133,
   24.24424,
   20.89104,
   18.31797,
   16.19866,
   14.40949,
   12.77317,
   11.28061,
   9.835165,
   8.476916,
   7.068921,
   5.73651,
   4.744306};
   Double_t Graph0_fex1161[14] = {
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
   Double_t Graph0_fey1161[14] = {
   0.3243572,
   0.05705746,
   0.02749045,
   0.01927488,
   0.01651024,
   0.01523724,
   0.01457182,
   0.01410385,
   0.01424442,
   0.01476658,
   0.01542431,
   0.0159815,
   0.01618779,
   0.05546715};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1161,Graph0_fy1161,Graph0_fex1161,Graph0_fey1161);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01161 = new TH1F("Graph_Graph01161","",100,0,3280);
   Graph_Graph01161->SetMinimum(1.98622);
   Graph_Graph01161->SetMaximum(34.41765);
   Graph_Graph01161->SetDirectory(0);
   Graph_Graph01161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01161->SetLineColor(ci);
   Graph_Graph01161->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01161->GetXaxis()->SetRange(2,97);
   Graph_Graph01161->GetXaxis()->CenterTitle(true);
   Graph_Graph01161->GetXaxis()->SetLabelFont(42);
   Graph_Graph01161->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01161->GetXaxis()->SetTitleFont(42);
   Graph_Graph01161->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01161->GetYaxis()->CenterTitle(true);
   Graph_Graph01161->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01161->GetYaxis()->SetLabelFont(42);
   Graph_Graph01161->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01161->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01161->GetYaxis()->SetTitleFont(42);
   Graph_Graph01161->GetZaxis()->SetLabelFont(42);
   Graph_Graph01161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01161);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
