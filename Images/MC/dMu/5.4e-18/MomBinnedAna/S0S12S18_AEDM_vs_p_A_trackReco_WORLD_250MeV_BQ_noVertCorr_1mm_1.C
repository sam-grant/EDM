void S0S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.2205,-3.772738e-06,3376.373,1.433303e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1209[11] = {
   451.6658,
   653.2317,
   880.1526,
   1123.144,
   1371.132,
   1620.121,
   1867.161,
   2115.314,
   2363.027,
   2614.442,
   2788.45};
   Double_t Graph0_fy1209[11] = {
   -1.92181e-07,
   8.112886e-08,
   5.274177e-08,
   8.182471e-08,
   1.082708e-07,
   1.420533e-07,
   2.28923e-07,
   3.301103e-07,
   3.556116e-07,
   6.73883e-07,
   5.917538e-06};
   Double_t Graph0_fex1209[11] = {
   0.0800574,
   0.06779092,
   0.04920089,
   0.04812513,
   0.05142385,
   0.05697761,
   0.06639479,
   0.08259982,
   0.1067252,
   0.1309615,
   0.1608216};
   Double_t Graph0_fey1209[11] = {
   5.629298e-07,
   3.871512e-08,
   1.329468e-08,
   1.217995e-08,
   1.49482e-08,
   2.027628e-08,
   3.193007e-08,
   6.034519e-08,
   1.269169e-07,
   2.399743e-07,
   5.397862e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1209,Graph0_fy1209,Graph0_fex1209,Graph0_fey1209);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01209 = new TH1F("Graph_Graph01209","S0S12S18_",100,217.8832,3022.314);
   Graph_Graph01209->SetMinimum(-1.962162e-06);
   Graph_Graph01209->SetMaximum(1.252245e-05);
   Graph_Graph01209->SetDirectory(0);
   Graph_Graph01209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01209->SetLineColor(ci);
   Graph_Graph01209->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01209->GetXaxis()->SetRange(0,100);
   Graph_Graph01209->GetXaxis()->CenterTitle(true);
   Graph_Graph01209->GetXaxis()->SetLabelFont(42);
   Graph_Graph01209->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01209->GetXaxis()->SetTitleFont(42);
   Graph_Graph01209->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01209->GetYaxis()->CenterTitle(true);
   Graph_Graph01209->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01209->GetYaxis()->SetLabelFont(42);
   Graph_Graph01209->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01209->GetYaxis()->SetTitleFont(42);
   Graph_Graph01209->GetZaxis()->SetLabelFont(42);
   Graph_Graph01209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01209);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
