void S12S18_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7656,10.01916,2726.81,25.17716);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[22] = {
   367.1918,
   456.6147,
   570.0834,
   694.7135,
   815.7883,
   938.6512,
   1062.729,
   1188.095,
   1312.704,
   1435.772,
   1562,
   1685.097,
   1810.599,
   1935.109,
   2060.314,
   2185.016,
   2309.07,
   2433.164,
   2559.726,
   2678.651,
   2780.754,
   2885.425};
   Double_t Graph0_fy1037[22] = {
   14.59281,
   13.59287,
   13.04175,
   12.79893,
   12.78222,
   12.76605,
   12.73948,
   12.71364,
   12.69451,
   12.70983,
   12.69439,
   12.70847,
   12.69099,
   12.63311,
   12.64782,
   12.5913,
   12.58062,
   12.5648,
   12.6362,
   12.79045,
   12.86306,
   20.23257};
   Double_t Graph0_fex1037[22] = {
   0.1970936,
   0.1002381,
   0.06733037,
   0.04602636,
   0.03727099,
   0.03359952,
   0.03198166,
   0.03090757,
   0.03144366,
   0.03165276,
   0.03395879,
   0.03588086,
   0.0403638,
   0.04430086,
   0.05071275,
   0.05596869,
   0.06482442,
   0.07808434,
   0.09274195,
   0.1063002,
   0.2145415,
   1.394003};
   Double_t Graph0_fey1037[22] = {
   0.3328605,
   0.03172996,
   0.01749954,
   0.0118136,
   0.009389511,
   0.008404016,
   0.008008397,
   0.007749873,
   0.007791321,
   0.007928168,
   0.008449137,
   0.008975736,
   0.01003677,
   0.01102611,
   0.01255094,
   0.0138498,
   0.01600432,
   0.01930457,
   0.02298966,
   0.02838833,
   0.07760103,
   2.418254};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12S18",100,115.0123,3138.801);
   Graph_Graph01037->SetMinimum(11.53496);
   Graph_Graph01037->SetMaximum(23.66136);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(21,79);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
