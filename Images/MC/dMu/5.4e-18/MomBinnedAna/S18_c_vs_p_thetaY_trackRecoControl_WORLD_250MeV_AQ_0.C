void S18_c_vs_p_thetaY_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3887,-0.08964303,3034.139,0.2696299);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[12] = {
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
   Double_t Graph0_fy1065[12] = {
   -3.87514,
   -0.110476,
   0.2022406,
   0.1037186,
   0.1058967,
   0.04064097,
   -0.06796597,
   -0.04235216,
   -0.01650134,
   0.07396541,
   0.1028623,
   0.01392619};
   Double_t Graph0_fex1065[12] = {
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
   Double_t Graph0_fey1065[12] = {
   0.5144642,
   0.0662883,
   0.03093853,
   0.02243494,
   0.01875997,
   0.01651424,
   0.01521652,
   0.01482417,
   0.01511454,
   0.01597769,
   0.01848789,
   0.03238303};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S18_",100,0,3088.183);
   Graph_Graph01065->SetMinimum(-0.05371573);
   Graph_Graph01065->SetMaximum(0.2337026);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01065->GetXaxis()->SetRange(25,90);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
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
