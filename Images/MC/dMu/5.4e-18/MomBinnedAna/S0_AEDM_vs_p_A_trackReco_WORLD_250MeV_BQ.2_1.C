void S0_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.118,-1.141313e-05,3409.577,3.038856e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[11] = {
   451.7058,
   653.2488,
   879.8973,
   1122.993,
   1371.413,
   1620.679,
   1868.015,
   2116.494,
   2363.32,
   2615.509,
   2789.629};
   Double_t Graph0_fy1061[11] = {
   -2.089749e-06,
   4.496787e-07,
   2.818166e-07,
   2.652299e-07,
   5.682951e-07,
   7.890739e-07,
   8.673144e-07,
   1.444508e-06,
   1.170297e-06,
   2.11372e-06,
   7.795855e-06};
   Double_t Graph0_fex1061[11] = {
   0.15762,
   0.1333984,
   0.09722522,
   0.09511307,
   0.1013248,
   0.1117834,
   0.1283377,
   0.1551935,
   0.1942938,
   0.2431966,
   0.2816604};
   Double_t Graph0_fey1061[11] = {
   4.494271e-06,
   2.956586e-07,
   1.026732e-07,
   9.445021e-08,
   1.142369e-07,
   1.526949e-07,
   2.295686e-07,
   4.024484e-07,
   7.738028e-07,
   1.50436e-06,
   2.834704e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,217.7119,3023.747);
   Graph_Graph01061->SetMinimum(-7.23296e-06);
   Graph_Graph01061->SetMaximum(2.620839e-05);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(0,101);
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
