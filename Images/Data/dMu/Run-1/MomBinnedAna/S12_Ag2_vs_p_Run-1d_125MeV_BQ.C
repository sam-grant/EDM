void S12_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8389,-0.06099545,3033.522,0.07836535);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[22] = {
   367.2236,
   456.6639,
   570.2517,
   695.0627,
   815.9831,
   938.554,
   1062.655,
   1188.287,
   1312.788,
   1435.9,
   1561.968,
   1685.267,
   1810.602,
   1935.128,
   2060.285,
   2185.022,
   2309.141,
   2432.952,
   2559.541,
   2679.196,
   2781.12,
   2886.415};
   Double_t Graph0_fy1063[22] = {
   -0.8406816,
   0.03121913,
   0.0609025,
   0.04961615,
   0.04889037,
   -0.006795834,
   0.03252307,
   -0.0003777846,
   0.03374699,
   0.01310167,
   -0.02181426,
   0.02399167,
   0.0008018521,
   -0.008610461,
   -0.004923938,
   -0.003648751,
   -0.01719458,
   -0.03766601,
   -0.03081776,
   0.01496777,
   -0.0499571,
   -0.06581412};
   Double_t Graph0_fex1063[22] = {
   0.15529,
   0.07767284,
   0.05215712,
   0.03528341,
   0.02828885,
   0.02549312,
   0.02417555,
   0.02334841,
   0.02364677,
   0.02371021,
   0.02546434,
   0.02672193,
   0.02997394,
   0.03283023,
   0.03742638,
   0.0412261,
   0.04755622,
   0.05709664,
   0.06850077,
   0.07809568,
   0.1560077,
   0.9305664};
   Double_t Graph0_fey1063[22] = {
   1.277164,
   0.1138359,
   0.05565216,
   0.03323623,
   0.02279825,
   0.0187182,
   0.0164624,
   0.01484252,
   0.01390927,
   0.01313152,
   0.01314045,
   0.01269759,
   0.01316252,
   0.01326579,
   0.01392948,
   0.01414934,
   0.01496386,
   0.01633319,
   0.01778185,
   0.01964265,
   0.0489938,
   0.4746507};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S12",100,115.0406,3139.374);
   Graph_Graph01063->SetMinimum(-0.04705937);
   Graph_Graph01063->SetMaximum(0.06442927);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(21,88);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
