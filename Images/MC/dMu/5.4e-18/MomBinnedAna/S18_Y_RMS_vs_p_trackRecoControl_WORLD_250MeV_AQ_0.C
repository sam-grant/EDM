void S18_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3887,11.40526,3034.139,25.36136);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[12] = {
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
   Double_t Graph0_fy1072[12] = {
   29.65858,
   23.78913,
   20.17285,
   17.52328,
   16.40159,
   15.99723,
   16.13129,
   16.71409,
   17.20343,
   17.70876,
   18.37453,
   19.34698};
   Double_t Graph0_fex1072[12] = {
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
   Double_t Graph0_fey1072[12] = {
   0.2109876,
   0.02604571,
   0.01314063,
   0.01047506,
   0.009863445,
   0.009985901,
   0.01069183,
   0.01213495,
   0.01432128,
   0.01762174,
   0.02355667,
   0.04375466};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S18_",100,0,3088.183);
   Graph_Graph01072->SetMinimum(12.80087);
   Graph_Graph01072->SetMaximum(23.96575);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01072->GetXaxis()->SetRange(25,90);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
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
