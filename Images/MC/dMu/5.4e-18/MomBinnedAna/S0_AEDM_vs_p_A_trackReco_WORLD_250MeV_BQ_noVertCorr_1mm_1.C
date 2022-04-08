void S0_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.9719,-3.348531e-05,3377.802,3.979811e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[11] = {
   451.3645,
   653.3156,
   879.8719,
   1123.107,
   1371.383,
   1620.847,
   1868.012,
   2116.528,
   2363.424,
   2615.856,
   2789.408};
   Double_t Graph0_fy1061[11] = {
   -1.586284e-06,
   2.967285e-07,
   1.764088e-07,
   3.990609e-07,
   4.841115e-07,
   6.807104e-07,
   1.005436e-06,
   1.530482e-06,
   1.30983e-06,
   1.019798e-06,
   3.156399e-06};
   Double_t Graph0_fex1061[11] = {
   0.1508903,
   0.1278291,
   0.09305751,
   0.0909969,
   0.09703234,
   0.1071778,
   0.1228627,
   0.1487252,
   0.1863402,
   0.2337685,
   0.2703847};
   Double_t Graph0_fey1061[11] = {
   3.806694e-06,
   2.600618e-07,
   9.012169e-08,
   8.251554e-08,
   1.004687e-07,
   1.340937e-07,
   2.013762e-07,
   3.534204e-07,
   7.078818e-07,
   1.310574e-06,
   2.442781e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,217.3671,3023.525);
   Graph_Graph01061->SetMinimum(-2.615697e-05);
   Graph_Graph01061->SetMaximum(3.246977e-05);
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
