void AEDM_vs_p_allDecays_AAR_500MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:33:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-399.9421,-4.88259e-08,3333.438,6.014953e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[6] = {
   246.731,
   743.9185,
   1240.053,
   1734.52,
   2223.851,
   2686.703};
   Double_t Graph0_fy1010[6] = {
   2.100791e-08,
   5.929512e-08,
   1.057714e-07,
   1.713764e-07,
   2.330681e-07,
   4.333549e-07};
   Double_t Graph0_fex1010[6] = {
   0.04187464,
   0.04423354,
   0.0485662,
   0.05623253,
   0.0707762,
   0.104282};
   Double_t Graph0_fey1010[6] = {
   3.000997e-09,
   3.561957e-09,
   4.725634e-09,
   7.342485e-09,
   1.447946e-08,
   5.597594e-08};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,2.677358,2930.819);
   Graph_Graph01010->SetMinimum(1.620622e-08);
   Graph_Graph01010->SetMaximum(5.364632e-07);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(0,101);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("A_{EDM}");
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
