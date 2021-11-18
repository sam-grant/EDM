void S12_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8664,-3.295596,2727.341,2.93555);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
   367.2264,
   456.6616,
   570.2511,
   695.0728,
   815.9922,
   938.5583,
   1062.66,
   1188.291,
   1312.787,
   1435.903,
   1561.974,
   1685.264,
   1810.607,
   1935.13,
   2060.293,
   2185.026,
   2309.146,
   2432.958,
   2559.535,
   2679.195,
   2781.14,
   2886.432};
   Double_t Graph0_fy1018[22] = {
   0.6473227,
   -0.120547,
   0.06988711,
   0.0172337,
   0.03353152,
   0.02740541,
   0.04240312,
   0.03028164,
   0.05377398,
   0.02848068,
   0.04548007,
   0.04474737,
   0.03619166,
   0.03480604,
   0.02391383,
   0.04910862,
   0.03178405,
   0.03026715,
   0.0511317,
   0.0214823,
   -0.04321843,
   -1.974382};
   Double_t Graph0_fex1018[22] = {
   0.1560151,
   0.07824154,
   0.05252292,
   0.03553039,
   0.02848522,
   0.025669,
   0.02434069,
   0.02350631,
   0.02380413,
   0.02386992,
   0.02563485,
   0.0268977,
   0.03016952,
   0.03304359,
   0.03766603,
   0.04149162,
   0.04786816,
   0.05746284,
   0.06891139,
   0.07858218,
   0.1570593,
   0.9491119};
   Double_t Graph0_fey1018[22] = {
   1.249703,
   0.1150689,
   0.05616198,
   0.03345371,
   0.02301205,
   0.01888822,
   0.01664098,
   0.01502008,
   0.01407199,
   0.01327806,
   0.01328986,
   0.01281662,
   0.01322963,
   0.01330714,
   0.01388489,
   0.01404066,
   0.01467973,
   0.01580807,
   0.01682308,
   0.0180391,
   0.04342944,
   0.2826894};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,115.0394,3139.412);
   Graph_Graph01018->SetMinimum(-2.672481);
   Graph_Graph01018->SetMaximum(2.312436);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(21,79);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
