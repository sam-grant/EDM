void full_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 09:49:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.2088799,3550,0.2729324);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1121[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1121[12] = {
   0.2224163,
   0.22516,
   0.2291757,
   0.2347497,
   0.2399731,
   0.2453373,
   0.2495489,
   0.2542276,
   0.2569409,
   0.2535826,
   0.2512608,
   0.2341642};
   Double_t Graph0_fex1121[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1121[12] = {
   0.002860994,
   0.002902146,
   0.002989121,
   0.003127075,
   0.003326074,
   0.003605405,
   0.003993286,
   0.004536189,
   0.005316015,
   0.006513278,
   0.008611461,
   0.0134056};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1121,Graph0_fy1121,Graph0_fex1121,Graph0_fey1121);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01121 = new TH1F("Graph_Graph01121","",100,580,3220);
   Graph_Graph01121->SetMinimum(0.2152852);
   Graph_Graph01121->SetMaximum(0.2665271);
   Graph_Graph01121->SetDirectory(0);
   Graph_Graph01121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01121->SetLineColor(ci);
   Graph_Graph01121->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01121->GetXaxis()->SetRange(1,100);
   Graph_Graph01121->GetXaxis()->CenterTitle(true);
   Graph_Graph01121->GetXaxis()->SetLabelFont(42);
   Graph_Graph01121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01121->GetXaxis()->SetTitleFont(42);
   Graph_Graph01121->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01121->GetYaxis()->CenterTitle(true);
   Graph_Graph01121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01121->GetYaxis()->SetLabelFont(42);
   Graph_Graph01121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01121->GetYaxis()->SetTitleFont(42);
   Graph_Graph01121->GetZaxis()->SetLabelFont(42);
   Graph_Graph01121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01121);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
