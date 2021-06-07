void full_c_vs_p_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:56 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.1885885,3330.25,0.04422692);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1089[15] = {
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
   Double_t Graph0_fy1089[15] = {
   -0.1030858,
   -0.1119883,
   -0.1206066,
   -0.09441452,
   -0.06869017,
   -0.04656026,
   -0.02594516,
   -0.03693269,
   -0.02077997,
   -0.01936132,
   -0.01999093,
   -0.01353803,
   -0.006547289,
   -0.004279009,
   -0.01362372};
   Double_t Graph0_fex1089[15] = {
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
   Double_t Graph0_fey1089[15] = {
   0.03148567,
   0.03061062,
   0.02917936,
   0.02724819,
   0.02492243,
   0.02271896,
   0.02077231,
   0.01900263,
   0.01738131,
   0.01584383,
   0.01434641,
   0.01282258,
   0.01131731,
   0.009703355,
   0.007801549};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","",100,0,3080);
   Graph_Graph01089->SetMinimum(-0.165307);
   Graph_Graph01089->SetMaximum(0.02094537);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01089->GetXaxis()->SetRange(0,96);
   Graph_Graph01089->GetXaxis()->CenterTitle(true);
   Graph_Graph01089->GetXaxis()->SetLabelFont(42);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01089->GetXaxis()->SetTitleFont(42);
   Graph_Graph01089->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01089->GetYaxis()->CenterTitle(true);
   Graph_Graph01089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01089->GetYaxis()->SetLabelFont(42);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01089->GetYaxis()->SetTitleFont(42);
   Graph_Graph01089->GetZaxis()->SetLabelFont(42);
   Graph_Graph01089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01089);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
