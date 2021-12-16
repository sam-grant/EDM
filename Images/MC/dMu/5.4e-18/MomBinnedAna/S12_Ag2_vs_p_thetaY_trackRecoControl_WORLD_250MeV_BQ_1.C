void S12_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1476,-1.214146,3411.031,4.710015);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1096[11] = {
   452.8872,
   656.3485,
   884.581,
   1123.521,
   1363.535,
   1601.503,
   1825.269,
   2100.54,
   2414.205,
   2638.053,
   2790.781};
   Double_t Graph0_fy1096[11] = {
   0.9737798,
   0.0694054,
   -0.08468639,
   -0.03293284,
   0.05638597,
   0.06270157,
   -0.2579605,
   0.1165272,
   0.0102523,
   0.04258669,
   -0.1725502};
   Double_t Graph0_fex1096[11] = {
   0.2848927,
   0.2126365,
   0.1423016,
   0.1309017,
   0.1503931,
   0.2140097,
   0.4416789,
   2.4969,
   1.046089,
   0.5704598,
   0.500334};
   Double_t Graph0_fey1096[11] = {
   0.4052778,
   0.1165013,
   0.06060652,
   0.04662878,
   0.04602973,
   0.05755154,
   0.1131803,
   0.447273,
   0.197511,
   0.07996794,
   0.1251559};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1096,Graph0_fy1096,Graph0_fex1096,Graph0_fey1096);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01096 = new TH1F("Graph_Graph01096","S12_",100,218.7344,3025.149);
   Graph_Graph01096->SetMinimum(-0.6217295);
   Graph_Graph01096->SetMaximum(4.117599);
   Graph_Graph01096->SetDirectory(0);
   Graph_Graph01096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01096->SetLineColor(ci);
   Graph_Graph01096->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01096->GetXaxis()->SetRange(0,101);
   Graph_Graph01096->GetXaxis()->CenterTitle(true);
   Graph_Graph01096->GetXaxis()->SetLabelFont(42);
   Graph_Graph01096->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01096->GetXaxis()->SetTitleFont(42);
   Graph_Graph01096->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01096->GetYaxis()->CenterTitle(true);
   Graph_Graph01096->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01096->GetYaxis()->SetLabelFont(42);
   Graph_Graph01096->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01096->GetYaxis()->SetTitleFont(42);
   Graph_Graph01096->GetZaxis()->SetLabelFont(42);
   Graph_Graph01096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01096);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
