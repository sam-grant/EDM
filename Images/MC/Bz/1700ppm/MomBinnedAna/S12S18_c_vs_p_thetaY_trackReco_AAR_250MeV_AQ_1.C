void S12S18_c_vs_p_thetaY_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:33:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1341,-3.291929,3334.296,0.626977);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[12] = {
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
   Double_t Graph0_fy1077[12] = {
   -1.821201,
   -2.482386,
   -0.8868919,
   -0.4171294,
   -0.3126397,
   -0.2353795,
   -0.1492783,
   -0.1348146,
   -0.1292705,
   -0.1106762,
   -0.07598799,
   -0.05636581};
   Double_t Graph0_fex1077[12] = {
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
   Double_t Graph0_fey1077[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","S12S18_",100,0,3090.888);
   Graph_Graph01077->SetMinimum(-2.900038);
   Graph_Graph01077->SetMaximum(0.2350864);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01077->GetXaxis()->SetRange(2,96);
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
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
