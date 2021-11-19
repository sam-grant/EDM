void S12_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.1083,-7.760326,2725.349,7.652067);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[22] = {
   366.4807,
   456.7343,
   570.5426,
   695.251,
   815.9612,
   938.4982,
   1062.71,
   1188.361,
   1312.739,
   1435.916,
   1561.843,
   1685.365,
   1810.672,
   1935.19,
   2060.201,
   2185.038,
   2309.334,
   2433.003,
   2559.541,
   2678.772,
   2781.283,
   2887.705};
   Double_t Graph0_fy1015[22] = {
   1.574127,
   0.5271222,
   0.17687,
   0.0008854103,
   -0.02020725,
   0.07738565,
   0.06120541,
   0.04396535,
   0.02230189,
   0.09811354,
   -0.08018995,
   0.01620398,
   0.01684036,
   -0.04915614,
   0.03139816,
   0.03000425,
   0.04923986,
   -0.04232251,
   0.02235793,
   0.01531131,
   0.150898,
   -0.6589751};
   Double_t Graph0_fex1015[22] = {
   0.384646,
   0.1721968,
   0.1145503,
   0.0772643,
   0.06172717,
   0.05561102,
   0.05263646,
   0.05089841,
   0.05132909,
   0.05157249,
   0.05534517,
   0.05804077,
   0.06517134,
   0.07120831,
   0.08126697,
   0.08967208,
   0.1030685,
   0.1231302,
   0.1477272,
   0.1694471,
   0.3433133,
   1.655531};
   Double_t Graph0_fey1015[22] = {
   3.509207,
   0.327069,
   0.1585068,
   0.09452649,
   0.06484367,
   0.05289276,
   0.04652108,
   0.04199549,
   0.03925838,
   0.03711707,
   0.03706591,
   0.03567919,
   0.03670465,
   0.03681972,
   0.03844988,
   0.03892675,
   0.04090705,
   0.04398302,
   0.04624281,
   0.05074263,
   0.1198506,
   4.532619};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","S12",100,113.7696,3141.687);
   Graph_Graph01015->SetMinimum(-6.219087);
   Graph_Graph01015->SetMaximum(6.110827);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(22,79);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
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
