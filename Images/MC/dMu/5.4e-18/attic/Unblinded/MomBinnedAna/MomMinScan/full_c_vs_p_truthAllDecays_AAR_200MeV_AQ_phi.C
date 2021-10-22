void full_c_vs_p_truthAllDecays_AAR_200MeV_AQ_phi()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 14 18:07:07 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.05138127,3330.25,0.05592999);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[15] = {
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
   Double_t Graph0_fy1098[15] = {
   -0.0001471823,
   0.01329785,
   0.01505281,
   0.0145241,
   0.01131851,
   0.003838925,
   0.006589307,
   0.01442112,
   0.01535208,
   0.007991466,
   0.006386732,
   0.005920596,
   -0.01902959,
   -0.01498431,
   0.01415318};
   Double_t Graph0_fex1098[15] = {
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
   Double_t Graph0_fey1098[15] = {
   0.02152226,
   0.013049,
   0.0114155,
   0.01060267,
   0.0101521,
   0.009927593,
   0.009876717,
   0.009983903,
   0.01026048,
   0.01072723,
   0.0114806,
   0.01264175,
   0.01446647,
   0.01755974,
   0.0238916};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","",100,0,3080);
   Graph_Graph01098->SetMinimum(-0.04065015);
   Graph_Graph01098->SetMaximum(0.04519887);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,96);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
