void S0S12S18_c_vs_p_slice_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-14.53488,3712.5,3.075692);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1491[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1491[15] = {
   -11.08071,
   -2.161377,
   -1.064188,
   -0.1275457,
   0.05671388,
   0.0697281,
   0.07349007,
   -0.0515008,
   -0.05029162,
   0.08679578,
   0.03684404,
   0.0008087687,
   0.02883315,
   -0.04448888,
   0.06847261};
   Double_t Graph0_fex1491[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1491[15] = {
   0.5190753,
   0.2753842,
   0.09644137,
   0.07253057,
   0.0630827,
   0.05725697,
   0.05233514,
   0.04871909,
   0.04604094,
   0.04436515,
   0.04384403,
   0.04404017,
   0.04572821,
   0.0496826,
   0.07212486};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1491,Graph0_fy1491,Graph0_fex1491,Graph0_fey1491);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01491 = new TH1F("Graph_Graph01491","S0S12S18",100,0,3300);
   Graph_Graph01491->SetMinimum(-12.77382);
   Graph_Graph01491->SetMaximum(1.314635);
   Graph_Graph01491->SetDirectory(0);
   Graph_Graph01491->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01491->SetLineColor(ci);
   Graph_Graph01491->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01491->GetXaxis()->CenterTitle(true);
   Graph_Graph01491->GetXaxis()->SetLabelFont(42);
   Graph_Graph01491->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01491->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01491->GetXaxis()->SetTitleFont(42);
   Graph_Graph01491->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01491->GetYaxis()->CenterTitle(true);
   Graph_Graph01491->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01491->GetYaxis()->SetLabelFont(42);
   Graph_Graph01491->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01491->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01491->GetYaxis()->SetTitleFont(42);
   Graph_Graph01491->GetZaxis()->SetLabelFont(42);
   Graph_Graph01491->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01491->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01491);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
