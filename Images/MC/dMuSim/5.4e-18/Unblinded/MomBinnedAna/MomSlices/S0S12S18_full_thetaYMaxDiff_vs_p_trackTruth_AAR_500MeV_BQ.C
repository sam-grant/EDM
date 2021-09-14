void S0S12S18_full_thetaYMaxDiff_vs_p_trackTruth_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 12:45:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-3.476405,3456.75,217.8945);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1086[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1086[6] = {
   177.967,
   154.381,
   100.7765,
   70.75796,
   53.60452,
   36.45107};
   Double_t Graph0_fex1086[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1086[6] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1086,Graph0_fy1086,Graph0_fex1086,Graph0_fey1086);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;(#Delta#theta_{y})_{MAX} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01086 = new TH1F("Graph_Graph01086","",100,0,3300);
   Graph_Graph01086->SetMinimum(18.66068);
   Graph_Graph01086->SetMaximum(195.7574);
   Graph_Graph01086->SetDirectory(0);
   Graph_Graph01086->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01086->SetLineColor(ci);
   Graph_Graph01086->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01086->GetXaxis()->SetRange(0,93);
   Graph_Graph01086->GetXaxis()->CenterTitle(true);
   Graph_Graph01086->GetXaxis()->SetLabelFont(42);
   Graph_Graph01086->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01086->GetXaxis()->SetTitleFont(42);
   Graph_Graph01086->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad]");
   Graph_Graph01086->GetYaxis()->CenterTitle(true);
   Graph_Graph01086->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01086->GetYaxis()->SetLabelFont(42);
   Graph_Graph01086->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01086->GetYaxis()->SetTitleFont(42);
   Graph_Graph01086->GetZaxis()->SetLabelFont(42);
   Graph_Graph01086->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01086);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
