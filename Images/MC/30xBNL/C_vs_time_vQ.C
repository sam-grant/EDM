void C_vs_time_vQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:34:32 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-82.50001,-0.4660674,742.5,0.5470039);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[6] = {
   50,
   150,
   250,
   350,
   450,
   550};
   Double_t Graph0_fy1015[6] = {
   0.1228296,
   0.1205257,
   0.1019294,
   0.008030551,
   0.1170833,
   0.04046824};
   Double_t Graph0_fex1015[6] = {
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1015[6] = {
   0.005969719,
   0.01294856,
   0.02904627,
   0.06435027,
   0.1304081,
   0.3376904};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];Average vertical offset, c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,660);
   Graph_Graph01015->SetMinimum(-0.3647603);
   Graph_Graph01015->SetMaximum(0.4456968);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Track time [#mus]");
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("Average vertical offset, c [mrad]");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
