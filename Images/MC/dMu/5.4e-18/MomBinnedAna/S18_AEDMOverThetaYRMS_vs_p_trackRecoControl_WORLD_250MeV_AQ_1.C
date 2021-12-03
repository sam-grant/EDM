void S18_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3887,-0.01136945,3034.139,0.006052459);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[12] = {
   190.8045,
   423.1822,
   631.4187,
   875.8863,
   1123.719,
   1372.827,
   1622.036,
   1870.393,
   2118.659,
   2366.229,
   2612.858,
   2824.592};
   Double_t Graph0_fy1079[12] = {
   -0.02596429,
   -0.001591114,
   -0.001631513,
   -0.005845868,
   -0.007249462,
   -0.009740473,
   -0.01010792,
   -0.01203713,
   -0.01046836,
   -0.01025704,
   -0.01121322,
   0.002587569};
   Double_t Graph0_fex1079[12] = {
   0.3507423,
   0.08314456,
   0.06369688,
   0.05981764,
   0.06076364,
   0.06322629,
   0.06706466,
   0.07319365,
   0.08364082,
   0.09932289,
   0.126322,
   0.161042};
   Double_t Graph0_fey1079[12] = {
   -0.01590326,
   -0.00225519,
   -0.001292529,
   -0.001183082,
   -0.00119332,
   -0.001239926,
   -0.001316177,
   -0.001438419,
   -0.001644205,
   -0.001961104,
   -0.002509714,
   0.0043654};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","S18_",100,0,3088.183);
   Graph_Graph01079->SetMinimum(-0.009627262);
   Graph_Graph01079->SetMaximum(0.004310268);
   Graph_Graph01079->SetDirectory(0);
   Graph_Graph01079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01079->SetLineColor(ci);
   Graph_Graph01079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01079->GetXaxis()->SetRange(25,90);
   Graph_Graph01079->GetXaxis()->CenterTitle(true);
   Graph_Graph01079->GetXaxis()->SetLabelFont(42);
   Graph_Graph01079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01079->GetXaxis()->SetTitleFont(42);
   Graph_Graph01079->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01079->GetYaxis()->CenterTitle(true);
   Graph_Graph01079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01079->GetYaxis()->SetLabelFont(42);
   Graph_Graph01079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01079->GetYaxis()->SetTitleFont(42);
   Graph_Graph01079->GetZaxis()->SetLabelFont(42);
   Graph_Graph01079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01079);
   
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
