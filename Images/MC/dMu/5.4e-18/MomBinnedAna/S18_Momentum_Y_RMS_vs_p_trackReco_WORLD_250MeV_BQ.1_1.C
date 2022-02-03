void S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3688,2.934397,3407.305,28.18401);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[11] = {
   451.9647,
   653.4925,
   880.767,
   1123.136,
   1370.893,
   1619.751,
   1866.448,
   2115.026,
   2363.115,
   2612.439,
   2787.761};
   Double_t Graph0_fy1139[11] = {
   14.01802,
   16.64456,
   18.50724,
   20.0051,
   21.03976,
   21.38279,
   21.13603,
   20.21392,
   18.74146,
   16.32466,
   13.72738};
   Double_t Graph0_fex1139[11] = {
   0.1907078,
   0.160043,
   0.1156315,
   0.1125663,
   0.1209118,
   0.1340669,
   0.1579088,
   0.1985804,
   0.2601144,
   0.3119886,
   0.4006198};
   Double_t Graph0_fey1139[11] = {
   0.05713508,
   0.02731326,
   0.02113381,
   0.02212193,
   0.02499619,
   0.02822383,
   0.03295761,
   0.03956189,
   0.04799825,
   0.05215681,
   0.1326952};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,218.1353,3021.801);
   Graph_Graph01139->SetMinimum(5.459358);
   Graph_Graph01139->SetMaximum(25.65905);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01139->GetXaxis()->SetRange(0,101);
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
