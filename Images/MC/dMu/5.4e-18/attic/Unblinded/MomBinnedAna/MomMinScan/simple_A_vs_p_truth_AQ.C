void simple_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 14 14:38:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.0113139,3335,0.2704675);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1090[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1090[15] = {
   0.1981792,
   0.2036245,
   0.2124486,
   0.2206452,
   0.2192532,
   0.2128861,
   0.2042456,
   0.1913737,
   0.1781241,
   0.1639653,
   0.1453212,
   0.1263143,
   0.1020099,
   0.08122221,
   0.04109427};
   Double_t Graph0_fex1090[15] = {
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
   Double_t Graph0_fey1090[15] = {
   0.002989319,
   0.002972198,
   0.002929863,
   0.002858714,
   0.002766063,
   0.002703853,
   0.002679352,
   0.002690732,
   0.002743246,
   0.002843863,
   0.002998372,
   0.003231103,
   0.003587502,
   0.004193968,
   0.005444601};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1090,Graph0_fy1090,Graph0_fex1090,Graph0_fey1090);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01090 = new TH1F("Graph_Graph01090","",100,-400,3200);
   Graph_Graph01090->SetMinimum(0.01686424);
   Graph_Graph01090->SetMaximum(0.2422893);
   Graph_Graph01090->SetDirectory(0);
   Graph_Graph01090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01090->SetLineColor(ci);
   Graph_Graph01090->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01090->GetXaxis()->SetRange(8,93);
   Graph_Graph01090->GetXaxis()->CenterTitle(true);
   Graph_Graph01090->GetXaxis()->SetLabelFont(42);
   Graph_Graph01090->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01090->GetXaxis()->SetTitleFont(42);
   Graph_Graph01090->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01090->GetYaxis()->CenterTitle(true);
   Graph_Graph01090->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01090->GetYaxis()->SetLabelFont(42);
   Graph_Graph01090->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01090->GetYaxis()->SetTitleFont(42);
   Graph_Graph01090->GetZaxis()->SetLabelFont(42);
   Graph_Graph01090->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01090);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
