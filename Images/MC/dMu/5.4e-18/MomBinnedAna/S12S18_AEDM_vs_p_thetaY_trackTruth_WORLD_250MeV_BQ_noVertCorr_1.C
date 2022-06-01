void S12S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 17:11:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6724,-0.1423836,3380.572,0.2217688);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[11] = {
   452.0109,
   653.3666,
   880.43,
   1123.084,
   1371.063,
   1619.993,
   1866.796,
   2114.997,
   2363.005,
   2613.127,
   2791.874};
   Double_t Graph0_fy1169[11] = {
   0.009022028,
   0.1307605,
   0.1183408,
   0.1206423,
   0.1292314,
   0.1406206,
   0.1389431,
   0.1006724,
   0.09487493,
   0.1012176,
   0.0323975};
   Double_t Graph0_fex1169[11] = {
   0.06819885,
   0.05757163,
   0.04157158,
   0.04058758,
   0.04335803,
   0.04795859,
   0.05629018,
   0.07044358,
   0.09237263,
   0.112246,
   0.1640369};
   Double_t Graph0_fey1169[11] = {
   0.09071358,
   0.03031625,
   0.01736169,
   0.01425383,
   0.01307196,
   0.01246319,
   0.01258492,
   0.01332036,
   0.01438035,
   0.01422018,
   0.0320713};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12S18_",100,217.9332,3026.047);
   Graph_Graph01169->SetMinimum(-0.1059684);
   Graph_Graph01169->SetMaximum(0.1853535);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01169->GetXaxis()->SetRange(0,100);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
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
