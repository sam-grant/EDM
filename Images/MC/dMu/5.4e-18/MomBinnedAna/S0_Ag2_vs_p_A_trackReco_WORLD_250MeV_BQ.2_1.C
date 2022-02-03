void S0_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.118,-1.175406e-05,3409.577,1.953557e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[11] = {
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
   Double_t Graph0_fy1062[11] = {
   -3.28687e-06,
   -5.490617e-07,
   -1.043548e-08,
   -9.786952e-08,
   3.117672e-08,
   -1.199711e-07,
   2.297669e-07,
   -1.772643e-07,
   -1.023912e-06,
   -3.92669e-06,
   1.142563e-06};
   Double_t Graph0_fex1062[11] = {
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
   Double_t Graph0_fey1062[11] = {
   4.631965e-06,
   3.038855e-07,
   1.033453e-07,
   9.541427e-08,
   1.146703e-07,
   1.561365e-07,
   2.445599e-07,
   4.57475e-07,
   9.986065e-07,
   2.252328e-06,
   4.990433e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S0_",100,217.7119,3023.747);
   Graph_Graph01062->SetMinimum(-8.625097e-06);
   Graph_Graph01062->SetMaximum(1.640661e-05);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(0,101);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
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
