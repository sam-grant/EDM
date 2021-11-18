void S12S18_c_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4809,-2.030724,2741.168,6.889514);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[11] = {
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
   Double_t Graph0_fy1055[11] = {
   5.309005,
   -0.1857309,
   -0.5259826,
   -0.405871,
   -0.3321087,
   -0.2993416,
   -0.2021203,
   -0.1686397,
   -0.1737865,
   -0.09956259,
   -0.1294833};
   Double_t Graph0_fex1055[11] = {
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
   Double_t Graph0_fey1055[11] = {
   0.09380313,
   0.03153401,
   0.01803489,
   0.01480218,
   0.01360106,
   0.01301063,
   0.01321193,
   0.01416659,
   0.01568701,
   0.0162563,
   0.03999892};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S12S18_",100,218.1451,3021.503);
   Graph_Graph01055->SetMinimum(-1.1387);
   Graph_Graph01055->SetMaximum(5.99749);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01055->GetXaxis()->SetRange(19,82);
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
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
