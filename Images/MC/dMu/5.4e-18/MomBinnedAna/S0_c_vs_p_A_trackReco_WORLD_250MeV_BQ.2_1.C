void S0_c_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.118,-4.914916e-05,3409.577,0.0001507657);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[11] = {
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
   Double_t Graph0_fy1060[11] = {
   2.906899e-05,
   -1.226663e-07,
   -1.911346e-07,
   -9.672706e-08,
   -2.141521e-07,
   -1.708383e-07,
   -8.812021e-08,
   -5.544919e-08,
   -1.331344e-06,
   -3.030852e-06,
   -1.265621e-05};
   Double_t Graph0_fex1060[11] = {
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
   Double_t Graph0_fey1060[11] = {
   3.279695e-06,
   2.147124e-07,
   7.328232e-08,
   6.718794e-08,
   8.098963e-08,
   1.106401e-07,
   1.748287e-07,
   3.340483e-07,
   7.454432e-07,
   1.72335e-06,
   3.971381e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0_",100,217.7119,3023.747);
   Graph_Graph01060->SetMinimum(-2.915768e-05);
   Graph_Graph01060->SetMaximum(0.0001307742);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01060->GetXaxis()->SetRange(0,101);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
   Graph_Graph01060->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01060->GetYaxis()->CenterTitle(true);
   Graph_Graph01060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01060->GetYaxis()->SetLabelFont(42);
   Graph_Graph01060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01060->GetYaxis()->SetTitleFont(42);
   Graph_Graph01060->GetZaxis()->SetLabelFont(42);
   Graph_Graph01060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01060);
   
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
