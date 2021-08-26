void S0S12S18_full_delta_A_vs_p_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 12:13:05 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.09526777,3378.375,2.595959);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1088[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1088[6] = {
   0.8139453,
   1.925995,
   1.524164,
   1.760498,
   1.757572,
   1.666631};
   Double_t Graph0_fex1088[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1088[6] = {
   0.6207731,
   0.2068717,
   0.17705,
   0.1808788,
   0.2278966,
   0.3592338};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1088,Graph0_fy1088,Graph0_fex1088,Graph0_fey1088);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 250 < p < p #plus 250;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01088 = new TH1F("Graph_Graph01088","",100,0,3300);
   Graph_Graph01088->SetMinimum(0.1738549);
   Graph_Graph01088->SetMaximum(2.326836);
   Graph_Graph01088->SetDirectory(0);
   Graph_Graph01088->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01088->SetLineColor(ci);
   Graph_Graph01088->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_Graph01088->GetXaxis()->SetRange(1,91);
   Graph_Graph01088->GetXaxis()->CenterTitle(true);
   Graph_Graph01088->GetXaxis()->SetLabelFont(42);
   Graph_Graph01088->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01088->GetXaxis()->SetTitleFont(42);
   Graph_Graph01088->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01088->GetYaxis()->CenterTitle(true);
   Graph_Graph01088->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01088->GetYaxis()->SetLabelFont(42);
   Graph_Graph01088->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01088->GetYaxis()->SetTitleFont(42);
   Graph_Graph01088->GetZaxis()->SetLabelFont(42);
   Graph_Graph01088->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01088);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
