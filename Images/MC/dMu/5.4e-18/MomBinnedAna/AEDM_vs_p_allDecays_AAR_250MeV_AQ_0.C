void AEDM_vs_p_allDecays_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:34:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.998,-0.005772927,2752.101,0.4612902);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[12] = {
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
   Double_t Graph0_fy1010[12] = {
   0.3038619,
   0.3546409,
   0.3453408,
   0.3472659,
   0.3305572,
   0.3116895,
   0.286066,
   0.2623568,
   0.1974848,
   0.1889628,
   0.1219804,
   0.08229344};
   Double_t Graph0_fex1010[12] = {
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
   Double_t Graph0_fey1010[12] = {
   0.07187418,
   0.02880542,
   0.02123869,
   0.01737556,
   0.01495641,
   0.01332132,
   0.01212809,
   0.01125915,
   0.01061072,
   0.01016669,
   0.009938999,
   0.01022251};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,0,3122.951);
   Graph_Graph01010->SetMinimum(0.04093339);
   Graph_Graph01010->SetMaximum(0.4145839);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(25,81);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
