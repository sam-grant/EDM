void S0S12S18_full_AOverMaxDiff_vs_p_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Aug 30 07:30:54 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-1.687924e-06,3456.75,0.0003509031);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1087[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1087[6] = {
   0.0001209099,
   0.0002012,
   0.0002249064,
   0.0002191398,
   0.0002621812,
   0.0001212629};
   Double_t Graph0_fex1087[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1087[6] = {
   6.383264e-05,
   2.008559e-05,
   2.305578e-05,
   2.098195e-05,
   2.995681e-05,
   2.479816e-05};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","",100,0,3300);
   Graph_Graph01087->SetMinimum(3.357118e-05);
   Graph_Graph01087->SetMaximum(0.000315644);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01087->GetXaxis()->SetRange(0,93);
   Graph_Graph01087->GetXaxis()->CenterTitle(true);
   Graph_Graph01087->GetXaxis()->SetLabelFont(42);
   Graph_Graph01087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01087->GetXaxis()->SetTitleFont(42);
   Graph_Graph01087->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01087->GetYaxis()->CenterTitle(true);
   Graph_Graph01087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01087->GetYaxis()->SetLabelFont(42);
   Graph_Graph01087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01087->GetYaxis()->SetTitleFont(42);
   Graph_Graph01087->GetZaxis()->SetLabelFont(42);
   Graph_Graph01087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01087);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
