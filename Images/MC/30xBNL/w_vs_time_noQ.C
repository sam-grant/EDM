void w_vs_time_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:34:58 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-96.25001,-0.1631491,866.25,2.515507);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[7] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650};
   Double_t Graph0_fy1016[7] = {
   1.320043,
   1.35163,
   1.426133,
   0.4812047,
   0.466756,
   0.6905054,
   1.447731};
   Double_t Graph0_fex1016[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1016[7] = {
   0.0133885,
   0.02957305,
   0.05672744,
   0.1414105,
   0.1834623,
   0.2092775,
   0.621334};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];#omega_{a} [MHz]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,0,770);
   Graph_Graph01016->SetMinimum(0.1047166);
   Graph_Graph01016->SetMaximum(2.247642);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Track time [#mus]");
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#omega_{a} [MHz]");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
