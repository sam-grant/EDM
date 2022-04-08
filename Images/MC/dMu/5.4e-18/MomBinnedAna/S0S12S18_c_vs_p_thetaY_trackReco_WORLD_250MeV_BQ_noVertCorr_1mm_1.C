void S0S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.2205,-1.879248,3376.373,6.914744);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[11] = {
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
   Double_t Graph0_fy1205[11] = {
   5.37352,
   -0.1499008,
   -0.398967,
   -0.3377934,
   -0.2543754,
   -0.2439233,
   -0.1722903,
   -0.1110443,
   -0.121,
   -0.07672079,
   -0.04876059};
   Double_t Graph0_fex1205[11] = {
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
   Double_t Graph0_fey1205[11] = {
   0.07555837,
   0.02540508,
   0.01461559,
   0.01201215,
   0.01103569,
   0.01055359,
   0.01064204,
   0.0113308,
   0.01242387,
   0.01282898,
   0.03055844};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","S0S12S18_",100,217.8832,3022.314);
   Graph_Graph01205->SetMinimum(-0.9998487);
   Graph_Graph01205->SetMaximum(6.035345);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01205->GetXaxis()->SetRange(0,100);
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
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
