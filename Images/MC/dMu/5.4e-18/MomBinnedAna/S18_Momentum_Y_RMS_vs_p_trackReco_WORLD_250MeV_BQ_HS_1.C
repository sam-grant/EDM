void S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0172,2.879749,3406.604,28.19914);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[11] = {
   452.0626,
   653.2683,
   880.5495,
   1123.02,
   1370.775,
   1619.706,
   1866.412,
   2115.028,
   2363.257,
   2612.187,
   2787.393};
   Double_t Graph0_fy1139[11] = {
   14.01122,
   16.65233,
   18.49843,
   20.01682,
   21.00386,
   21.38964,
   21.13729,
   20.21679,
   18.70354,
   16.2896,
   13.82145};
   Double_t Graph0_fex1139[11] = {
   0.1193582,
   0.1008816,
   0.07268885,
   0.07093285,
   0.07614695,
   0.08434817,
   0.09945782,
   0.1250793,
   0.1642018,
   0.1964806,
   0.2503264};
   Double_t Graph0_fey1139[11] = {
   0.03581383,
   0.01722927,
   0.01329771,
   0.01394549,
   0.01571534,
   0.01778101,
   0.02074284,
   0.02490833,
   0.03020781,
   0.03276505,
   0.08435871};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,218.3733,3021.213);
   Graph_Graph01139->SetMinimum(5.411688);
   Graph_Graph01139->SetMaximum(25.6672);
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
