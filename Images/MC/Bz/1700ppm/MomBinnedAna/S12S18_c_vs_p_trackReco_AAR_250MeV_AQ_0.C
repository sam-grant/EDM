void S12S18_c_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.5874,-3.29193,2723.845,0.6269773);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[12] = {
   174.3059,
   432.3497,
   628.5159,
   872.9756,
   1121.754,
   1371.387,
   1620.423,
   1868.331,
   2116.098,
   2363.123,
   2614.683,
   2825.386};
   Double_t Graph0_fy1055[12] = {
   -1.821202,
   -2.482386,
   -0.886889,
   -0.4171293,
   -0.3126398,
   -0.2353795,
   -0.1492784,
   -0.1348145,
   -0.1292704,
   -0.1106763,
   -0.07598795,
   -0.0563657};
   Double_t Graph0_fex1055[12] = {
   0.899896,
   0.08549393,
   0.07685733,
   0.07728029,
   0.08298593,
   0.08989513,
   0.09897207,
   0.1136525,
   0.1365983,
   0.1749214,
   0.2275663,
   0.276649};
   Double_t Graph0_fey1055[12] = {
   0.8175762,
   0.06046163,
   0.03011937,
   0.02467794,
   0.02227174,
   0.02054468,
   0.01947121,
   0.01924777,
   0.02003484,
   0.02206307,
   0.0232079,
   0.03019185};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S12S18_",100,0,3090.888);
   Graph_Graph01055->SetMinimum(-2.900039);
   Graph_Graph01055->SetMaximum(0.2350866);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01055->GetXaxis()->SetRange(25,81);
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
