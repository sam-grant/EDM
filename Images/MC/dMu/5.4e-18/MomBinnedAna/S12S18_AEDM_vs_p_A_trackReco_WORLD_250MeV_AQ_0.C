void S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:31:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.4894,-7.892102e-08,3034.767,9.008126e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1084[12] = {
   194.2052,
   428.5039,
   630.9259,
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793,
   2612.56,
   2825.572};
   Double_t Graph0_fy1084[12] = {
   1.503673e-05,
   6.56111e-08,
   2.333744e-08,
   2.945841e-08,
   4.168133e-08,
   4.759524e-08,
   6.468541e-08,
   8.118495e-08,
   8.196406e-08,
   1.219832e-07,
   2.407761e-07,
   6.418655e-07};
   Double_t Graph0_fex1084[12] = {
   0.2401371,
   0.04226504,
   0.03284899,
   0.03158196,
   0.03208886,
   0.0331561,
   0.0349262,
   0.03789215,
   0.04269879,
   0.05025669,
   0.06362822,
   0.08097805};
   Double_t Graph0_fey1084[12] = {
   1.249838e-05,
   2.142813e-08,
   4.053365e-09,
   3.451004e-09,
   3.604864e-09,
   3.976636e-09,
   4.638834e-09,
   5.873522e-09,
   8.25292e-09,
   1.316892e-08,
   2.611432e-08,
   1.268219e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01084 = new TH1F("Graph_Graph01084","S12S18_",100,0,3088.822);
   Graph_Graph01084->SetMinimum(1.905234e-08);
   Graph_Graph01084->SetMaximum(8.028392e-07);
   Graph_Graph01084->SetDirectory(0);
   Graph_Graph01084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01084->SetLineColor(ci);
   Graph_Graph01084->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01084->GetXaxis()->SetRange(25,90);
   Graph_Graph01084->GetXaxis()->CenterTitle(true);
   Graph_Graph01084->GetXaxis()->SetLabelFont(42);
   Graph_Graph01084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01084->GetXaxis()->SetTitleFont(42);
   Graph_Graph01084->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01084->GetYaxis()->CenterTitle(true);
   Graph_Graph01084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01084->GetYaxis()->SetLabelFont(42);
   Graph_Graph01084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01084->GetYaxis()->SetTitleFont(42);
   Graph_Graph01084->GetZaxis()->SetLabelFont(42);
   Graph_Graph01084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01084);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
