void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-3.110646,3605.25,0.8544882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1466[15] = {
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
   Double_t Graph0_fy1466[15] = {
   -1.401647,
   0.08779097,
   0.01171505,
   0.06533432,
   0.05384454,
   0.03646108,
   0.04268169,
   0.03989424,
   0.02637303,
   0.008212815,
   0.0493273,
   0.01833045,
   -0.02556434,
   0.01710374,
   0.03126468};
   Double_t Graph0_fex1466[15] = {
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
   Double_t Graph0_fey1466[15] = {
   1.048143,
   0.1058416,
   0.03781452,
   0.02410152,
   0.01873576,
   0.01616421,
   0.01443877,
   0.01347226,
   0.01291185,
   0.01286723,
   0.01304176,
   0.0134211,
   0.01501094,
   0.01501113,
   0.02349112};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1466,Graph0_fy1466,Graph0_fex1466,Graph0_fey1466);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01466 = new TH1F("Graph_Graph01466","S0S12S18",100,0,3300);
   Graph_Graph01466->SetMinimum(-2.714132);
   Graph_Graph01466->SetMaximum(0.4579748);
   Graph_Graph01466->SetDirectory(0);
   Graph_Graph01466->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01466->SetLineColor(ci);
   Graph_Graph01466->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01466->GetXaxis()->SetRange(0,97);
   Graph_Graph01466->GetXaxis()->CenterTitle(true);
   Graph_Graph01466->GetXaxis()->SetLabelFont(42);
   Graph_Graph01466->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01466->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01466->GetXaxis()->SetTitleFont(42);
   Graph_Graph01466->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01466->GetYaxis()->CenterTitle(true);
   Graph_Graph01466->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01466->GetYaxis()->SetLabelFont(42);
   Graph_Graph01466->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01466->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01466->GetYaxis()->SetTitleFont(42);
   Graph_Graph01466->GetZaxis()->SetLabelFont(42);
   Graph_Graph01466->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01466);
   
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
