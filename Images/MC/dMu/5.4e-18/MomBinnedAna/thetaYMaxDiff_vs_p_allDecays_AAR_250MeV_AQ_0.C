void thetaYMaxDiff_vs_p_allDecays_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:34:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.998,-122.0715,2752.101,1322.221);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[12] = {
   124.3992,
   374.0378,
   623.6659,
   873.2514,
   1122.83,
   1372.241,
   1621.488,
   1870.589,
   2119.347,
   2367.26,
   2613.214,
   2850.255};
   Double_t Graph0_fy1017[12] = {
   1069.946,
   233.7157,
   156.5252,
   122.2183,
   100.7765,
   85.76723,
   75.04632,
   62.18124,
   53.60452,
   45.02779,
   36.45107,
   27.87435};
   Double_t Graph0_fex1017[12] = {
   0.02929484,
   0.0299443,
   0.03076585,
   0.0318993,
   0.0334412,
   0.03552109,
   0.03823314,
   0.0419347,
   0.04715824,
   0.05508999,
   0.06872665,
   0.09775045};
   Double_t Graph0_fey1017[12] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",100,0,3122.951);
   Graph_Graph01017->SetMinimum(22.35782);
   Graph_Graph01017->SetMaximum(1177.792);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(25,81);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
