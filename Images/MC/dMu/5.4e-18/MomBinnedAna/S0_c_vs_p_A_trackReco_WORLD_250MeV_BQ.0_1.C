void S0_c_vs_p_A_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:31:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.7171,-4.437707e-05,3409.979,0.0003626425);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[11] = {
   451.3795,
   653.2084,
   880.0107,
   1122.885,
   1371.272,
   1620.698,
   1868.122,
   2116.398,
   2362.901,
   2615.842,
   2789.677};
   Double_t Graph0_fy1060[11] = {
   7.009735e-05,
   -2.447494e-06,
   2.753465e-08,
   -7.121233e-07,
   -7.113945e-07,
   -6.247902e-07,
   -1.670363e-06,
   -1.524673e-06,
   -1.653686e-06,
   -4.663406e-06,
   5.851678e-05};
   Double_t Graph0_fex1060[11] = {
   0.2570146,
   0.2168445,
   0.1578235,
   0.1543579,
   0.1647142,
   0.1816809,
   0.208312,
   0.2527105,
   0.3151618,
   0.3975541,
   0.4627629};
   Double_t Graph0_fey1060[11] = {
   1.394787e-05,
   9.191039e-07,
   3.132854e-07,
   2.86533e-07,
   3.478966e-07,
   4.740019e-07,
   7.593527e-07,
   1.435814e-06,
   3.187524e-06,
   7.670297e-06,
   0.000172889};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0_",100,217.2208,3024.042);
   Graph_Graph01060->SetMinimum(-3.675118e-06);
   Graph_Graph01060->SetMaximum(0.0003219405);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01060->GetXaxis()->SetRange(0,101);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
   Graph_Graph01060->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01060->GetYaxis()->CenterTitle(true);
   Graph_Graph01060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01060->GetYaxis()->SetLabelFont(42);
   Graph_Graph01060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01060->GetYaxis()->SetTitleFont(42);
   Graph_Graph01060->GetZaxis()->SetLabelFont(42);
   Graph_Graph01060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01060);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
