void S18_Momentum_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3887,12.18074,3034.139,29.84569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[12] = {
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
   Double_t Graph0_fy1073[12] = {
   22.73196,
   21.93962,
   21.47709,
   21.75775,
   22.50622,
   23.0006,
   23.26475,
   23.39954,
   22.99395,
   21.92104,
   20.13411,
   17.61721};
   Double_t Graph0_fex1073[12] = {
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
   Double_t Graph0_fey1073[12] = {
   0.1366868,
   0.02359355,
   0.01384571,
   0.01298234,
   0.01357968,
   0.01443479,
   0.015514,
   0.0170836,
   0.01919326,
   0.02177202,
   0.02554226,
   0.03884741};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18_",100,0,3088.183);
   Graph_Graph01073->SetMinimum(13.94724);
   Graph_Graph01073->SetMaximum(28.07919);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01073->GetXaxis()->SetRange(25,90);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
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
