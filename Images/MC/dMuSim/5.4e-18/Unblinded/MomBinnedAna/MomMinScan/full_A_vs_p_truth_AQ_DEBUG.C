void full_A_vs_p_truth_AQ_DEBUG()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 07:21:53 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.01280234,3330.25,0.272506);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1091[15] = {
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
   Double_t Graph0_fy1091[15] = {
   0.1992729,
   0.2048568,
   0.2138009,
   0.2220977,
   0.2207812,
   0.2137848,
   0.2057431,
   0.1925967,
   0.1796515,
   0.1659169,
   0.1470428,
   0.1270463,
   0.1020451,
   0.08139041,
   0.04016593};
   Double_t Graph0_fex1091[15] = {
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
   Double_t Graph0_fey1091[15] = {
   0.002987834,
   0.002970663,
   0.002928228,
   0.002856899,
   0.002764086,
   0.002701575,
   0.002676715,
   0.002687599,
   0.002739465,
   0.002838987,
   0.002992041,
   0.003222612,
   0.003575712,
   0.004176715,
   0.005416875};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","",100,0,3080);
   Graph_Graph01091->SetMinimum(0.0157285);
   Graph_Graph01091->SetMaximum(0.2439752);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01091->GetXaxis()->SetRange(0,96);
   Graph_Graph01091->GetXaxis()->CenterTitle(true);
   Graph_Graph01091->GetXaxis()->SetLabelFont(42);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01091->GetXaxis()->SetTitleFont(42);
   Graph_Graph01091->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01091->GetYaxis()->CenterTitle(true);
   Graph_Graph01091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01091->GetYaxis()->SetLabelFont(42);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01091->GetYaxis()->SetTitleFont(42);
   Graph_Graph01091->GetZaxis()->SetLabelFont(42);
   Graph_Graph01091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01091);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
