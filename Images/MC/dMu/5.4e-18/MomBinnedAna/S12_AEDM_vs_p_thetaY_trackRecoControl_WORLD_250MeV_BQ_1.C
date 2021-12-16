void S12_AEDM_vs_p_thetaY_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1476,-1.123962,3411.031,1.807543);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[11] = {
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
   Double_t Graph0_fy1095[11] = {
   -0.09114719,
   0.2574821,
   0.0899319,
   0.06180636,
   0.05286421,
   0.1956695,
   0.1679035,
   0.8083237,
   0.0758259,
   0.003189901,
   0.3335536};
   Double_t Graph0_fex1095[11] = {
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
   Double_t Graph0_fey1095[11] = {
   0.4025452,
   0.1164712,
   0.06036638,
   0.0464699,
   0.04595148,
   0.05720968,
   0.1141293,
   0.4213132,
   0.1866405,
   0.07334113,
   0.1102151};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","S12_",100,218.7344,3025.149);
   Graph_Graph01095->SetMinimum(-0.8308117);
   Graph_Graph01095->SetMaximum(1.514393);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01095->GetXaxis()->SetRange(0,101);
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
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
