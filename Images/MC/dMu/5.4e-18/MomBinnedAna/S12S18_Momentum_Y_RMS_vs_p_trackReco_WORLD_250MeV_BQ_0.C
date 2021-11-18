void S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:35:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4809,11.79314,2741.168,23.33349);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[11] = {
   451.8582,
   653.311,
   880.4297,
   1123.036,
   1370.992,
   1619.97,
   1866.545,
   2115.009,
   2362.89,
   2613.263,
   2787.685};
   Double_t Graph0_fy1060[11] = {
   14.01091,
   16.66884,
   18.53892,
   20.06287,
   21.04742,
   21.39529,
   21.18921,
   20.26541,
   18.68677,
   16.29472,
   13.78466};
   Double_t Graph0_fex1060[11] = {
   0.09988027,
   0.08417426,
   0.06085687,
   0.05941115,
   0.06350254,
   0.07028111,
   0.08235789,
   0.1033713,
   0.1351224,
   0.1638918,
   0.2051006};
   Double_t Graph0_fey1060[11] = {
   0.02988277,
   0.01440532,
   0.01115399,
   0.01170425,
   0.01313558,
   0.01481399,
   0.01722329,
   0.02064133,
   0.02490512,
   0.02723698,
   0.06812244};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S12S18_",100,218.1451,3021.503);
   Graph_Graph01060->SetMinimum(12.94718);
   Graph_Graph01060->SetMaximum(22.17946);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01060->GetXaxis()->SetRange(19,82);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
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
