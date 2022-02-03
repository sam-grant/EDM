void S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4313,-2.508016e-05,3406.974,0.0001854338);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[11] = {
   451.7994,
   653.446,
   880.5243,
   1123.169,
   1371.058,
   1619.937,
   1866.741,
   2114.974,
   2362.685,
   2613.301,
   2787.6};
   Double_t Graph0_fy1172[11] = {
   -1.243855e-06,
   1.419114e-07,
   2.074018e-07,
   1.716733e-07,
   3.111385e-07,
   3.036985e-07,
   5.909725e-07,
   7.901176e-07,
   6.564093e-07,
   4.116137e-06,
   4.228816e-05};
   Double_t Graph0_fex1172[11] = {
   0.1344131,
   0.1129402,
   0.08165877,
   0.07969477,
   0.08523107,
   0.09432402,
   0.1105355,
   0.1386522,
   0.1809677,
   0.2203638,
   0.2773712};
   Double_t Graph0_fey1172[11] = {
   2.71486e-06,
   1.791722e-07,
   6.083828e-08,
   5.541823e-08,
   6.80857e-08,
   9.224575e-08,
   1.484365e-07,
   2.85099e-07,
   6.169781e-07,
   1.165245e-06,
   2.894802e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18_",100,218.0438,3021.499);
   Graph_Graph01172->SetMinimum(-4.028769e-06);
   Graph_Graph01172->SetMaximum(0.0001643824);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(0,101);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
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
