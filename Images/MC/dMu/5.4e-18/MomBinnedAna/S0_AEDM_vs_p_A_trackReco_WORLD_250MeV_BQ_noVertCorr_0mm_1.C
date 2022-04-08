void S0_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7291,-3.01801e-05,3377.355,9.304574e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[11] = {
   451.5069,
   653.3858,
   879.7988,
   1123.221,
   1371.452,
   1620.906,
   1867.986,
   2116.638,
   2363.802,
   2615.911,
   2789.041};
   Double_t Graph0_fy1061[11] = {
   -4.070755e-06,
   4.769213e-07,
   2.877511e-07,
   4.391803e-07,
   6.212993e-07,
   9.044247e-07,
   1.290927e-06,
   2.120394e-06,
   7.606588e-07,
   1.076134e-07,
   3.700989e-05};
   Double_t Graph0_fex1061[11] = {
   0.1705331,
   0.1452717,
   0.1058655,
   0.1035205,
   0.1102686,
   0.1219472,
   0.1396871,
   0.1690043,
   0.2121382,
   0.265093,
   0.3045348};
   Double_t Graph0_fey1061[11] = {
   5.571705e-06,
   3.819974e-07,
   1.326311e-07,
   1.215191e-07,
   1.477406e-07,
   1.97123e-07,
   2.969915e-07,
   5.189649e-07,
   1.013148e-06,
   1.926196e-06,
   3.549821e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,217.5354,3023.147);
   Graph_Graph01061->SetMinimum(-1.785752e-05);
   Graph_Graph01061->SetMaximum(8.072316e-05);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(0,100);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
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
