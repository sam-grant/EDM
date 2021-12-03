void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 17:55:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8522,-0.03562833,3034.329,0.3116593);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[22] = {
   367.2357,
   456.7094,
   570.1064,
   694.7384,
   815.8181,
   938.6515,
   1062.74,
   1188.098,
   1312.711,
   1435.779,
   1562.01,
   1685.105,
   1810.597,
   1935.076,
   2060.311,
   2184.992,
   2309.087,
   2433.142,
   2559.748,
   2678.663,
   2780.904,
   2886.857};
   Double_t Graph0_fy1049[22] = {
   0.01096033,
   0.009663373,
   0.006674366,
   0.002899038,
   0.003814166,
   0.002105168,
   0.003353726,
   0.0008193282,
   0.002328789,
   0.001401072,
   0.001558608,
   0.001170505,
   0.0008905128,
   0.002714091,
   0.006004939,
   0.001475828,
   0.0067686,
   0.005818604,
   0.002525212,
   -0.001411233,
   0.03375147,
   0.3869962};
   Double_t Graph0_fex1049[22] = {
   0.1835482,
   0.09181292,
   0.06165579,
   0.04212079,
   0.03405696,
   0.03070085,
   0.0292026,
   0.02820956,
   0.02864864,
   0.02884614,
   0.0309262,
   0.03266457,
   0.03671056,
   0.04027293,
   0.04611049,
   0.05082832,
   0.0587242,
   0.07083069,
   0.08409929,
   0.09634159,
   0.1950596,
   1.250899};
   Double_t Graph0_fey1049[22] = {
   0.04250938,
   0.004281719,
   0.002460426,
   0.00169167,
   0.001346237,
   0.001205827,
   0.001150487,
   0.001114151,
   0.001121945,
   0.001138532,
   0.00121486,
   0.001287829,
   0.001441992,
   0.00159089,
   0.0018087,
   0.001998731,
   0.002311186,
   0.002789666,
   0.003306712,
   -0.004027257,
   0.01095071,
   0.07460773};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12S18",100,114.9465,3140.214);
   Graph_Graph01049->SetMinimum(-0.0008995638);
   Graph_Graph01049->SetMaximum(0.2769305);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(21,88);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
