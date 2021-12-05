void S0_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 18:52:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(490.571,-3.530469e-07,3001.368,1.899351e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[12] = {
   195.803,
   429.651,
   630.7927,
   875.2717,
   1123.906,
   1373.288,
   1622.379,
   1870.823,
   2119.356,
   2366.927,
   2612.775,
   2826.941};
   Double_t Graph0_fy1040[12] = {
   -6.174338e-05,
   7.292043e-07,
   9.401587e-09,
   5.755129e-09,
   -1.502824e-08,
   1.717927e-08,
   1.34936e-08,
   9.509222e-09,
   1.113546e-08,
   1.266417e-08,
   -1.617274e-07,
   1.305619e-06};
   Double_t Graph0_fex1040[12] = {
   0.3454689,
   0.05887629,
   0.04616318,
   0.04428225,
   0.04494108,
   0.04636558,
   0.04888031,
   0.0529867,
   0.05945939,
   0.0697281,
   0.08735603,
   0.1109392};
   Double_t Graph0_fey1040[12] = {
   3.874623e-05,
   5.973052e-08,
   1.144072e-08,
   9.609876e-09,
   9.962796e-09,
   1.097116e-08,
   1.302554e-08,
   1.720491e-08,
   2.582254e-08,
   4.576907e-08,
   1.014333e-07,
   5.313348e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S0_",100,0,3090.211);
   Graph_Graph01040->SetMinimum(-1.278071e-07);
   Graph_Graph01040->SetMaximum(1.674111e-06);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(25,89);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
