void S12S18_AEDM_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4809,-0.2912451,2741.168,0.3444017);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[11] = {
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
   Double_t Graph0_fy1056[11] = {
   -0.05278214,
   0.1939915,
   0.1422853,
   0.1661247,
   0.1334659,
   0.1688368,
   0.1726161,
   0.1212639,
   0.09400139,
   0.1493058,
   0.05016791};
   Double_t Graph0_fex1056[11] = {
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
   Double_t Graph0_fey1056[11] = {
   0.1325218,
   0.0444691,
   0.02547609,
   0.02093017,
   0.01922645,
   0.01831038,
   0.01852036,
   0.01959373,
   0.02113643,
   0.02094512,
   0.04904083};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S12S18_",100,218.1451,3021.503);
   Graph_Graph01056->SetMinimum(-0.2276804);
   Graph_Graph01056->SetMaximum(0.280837);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01056->GetXaxis()->SetRange(19,82);
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
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
