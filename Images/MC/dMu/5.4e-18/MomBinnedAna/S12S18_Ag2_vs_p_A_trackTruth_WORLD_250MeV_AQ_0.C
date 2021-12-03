void S12S18_Ag2_vs_p_A_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.531,-1.033835e-07,3019.477,3.592047e-08);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[12] = {
   107.613,
   434.4437,
   631.4983,
   875.645,
   1124.343,
   1373.479,
   1622.481,
   1871.403,
   2119.962,
   2367.8,
   2613.257,
   2835.815};
   Double_t Graph0_fy1085[12] = {
   0.0008364723,
   1.551815e-07,
   1.970926e-08,
   1.443484e-09,
   4.010972e-09,
   2.764945e-09,
   -1.037993e-08,
   -8.952586e-09,
   -1.348461e-08,
   -2.06555e-08,
   -1.333895e-08,
   -1.099989e-07};
   Double_t Graph0_fex1085[12] = {
   1.269651,
   0.0406821,
   0.03384306,
   0.03229208,
   0.03241306,
   0.03321891,
   0.0348207,
   0.03738667,
   0.04138397,
   0.04767772,
   0.05903171,
   0.08572427};
   Double_t Graph0_fey1085[12] = {
   0.0002576341,
   2.689477e-08,
   4.528812e-09,
   3.726988e-09,
   3.734806e-09,
   4.021736e-09,
   4.69509e-09,
   5.997202e-09,
   8.643048e-09,
   1.449817e-08,
   3.123392e-08,
   1.540797e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","S12S18_",100,0,3108.857);
   Graph_Graph01085->SetMinimum(-8.945309e-08);
   Graph_Graph01085->SetMaximum(2.199007e-08);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01085->GetXaxis()->SetRange(25,89);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
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
