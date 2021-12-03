void S12S18_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 17:55:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8522,8.467509,3034.329,24.40981);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[22] = {
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
   Double_t Graph0_fy1044[22] = {
   14.58943,
   13.62802,
   13.05363,
   12.80124,
   12.79309,
   12.77994,
   12.74878,
   12.72949,
   12.70787,
   12.72637,
   12.71055,
   12.7242,
   12.70786,
   12.65195,
   12.65345,
   12.60596,
   12.58911,
   12.57686,
   12.66336,
   12.82591,
   13.2451,
   23.58635};
   Double_t Graph0_fex1044[22] = {
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
   Double_t Graph0_fey1044[22] = {
   0.3090869,
   0.02916756,
   0.01603936,
   0.01080574,
   0.008589396,
   0.007683833,
   0.007317902,
   0.007079607,
   0.007107708,
   0.007232944,
   0.007703153,
   0.008179643,
   0.009145657,
   0.0100374,
   0.01141423,
   0.01259289,
   0.0145123,
   0.01751785,
   0.02089823,
   0.02581926,
   0.07237869,
   2.312832};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12S18",100,114.9465,3140.214);
   Graph_Graph01044->SetMinimum(10.06174);
   Graph_Graph01044->SetMaximum(22.81558);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(21,88);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
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
