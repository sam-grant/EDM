void S0S12S18_full_AOverMaxDiff_vs_p_trackReco_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 15:27:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.0007566892,3456.75,0.003022237);
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
   -0.0001268682,
   0.0008502362,
   0.001109437,
   0.0013695,
   0.001315867,
   0.00198882};
   Double_t Graph0_fex1087[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1087[6] = {
   -0.0005871404,
   0.0001169607,
   9.796437e-05,
   0.0001070483,
   0.0001792139,
   0.0004035954};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","",100,0,3300);
   Graph_Graph01087->SetMinimum(-0.0003787966);
   Graph_Graph01087->SetMaximum(0.002644344);
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
