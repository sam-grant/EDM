void S0S12S18_full_AOverMaxDiff_vs_p_trackReco_WORLD_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Aug 24 13:17:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.602427e-05,3378.375,0.0003386607);
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
   9.10352e-05,
   0.0001992966,
   0.0002114051,
   0.0002173824,
   0.0002457014,
   0.0001226481};
   Double_t Graph0_fex1087[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1087[6] = {
   6.943051e-05,
   2.141423e-05,
   2.457345e-05,
   2.235393e-05,
   3.189189e-05,
   2.644115e-05};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","",100,0,3300);
   Graph_Graph01087->SetMinimum(1.944422e-05);
   Graph_Graph01087->SetMaximum(0.0003031922);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01087->GetXaxis()->SetRange(1,91);
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
