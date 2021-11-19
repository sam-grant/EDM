void S12_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.1083,-4.813011,2725.349,45.42264);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[22] = {
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
   Double_t Graph0_fy1016[22] = {
   35.60602,
   31.46594,
   26.77343,
   23.43311,
   20.45573,
   18.76431,
   17.33338,
   16.15097,
   15.08009,
   14.08971,
   13.19107,
   12.04305,
   11.14056,
   10.19931,
   9.367356,
   8.543301,
   7.776435,
   6.983189,
   6.18463,
   5.522837,
   4.931199,
   4.472553};
   Double_t Graph0_fex1016[22] = {
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
   Double_t Graph0_fey1016[22] = {
   1.444015,
   0.1261183,
   0.06113611,
   0.03634792,
   0.02493993,
   0.0204173,
   0.01795316,
   0.0161866,
   0.01513217,
   0.01432348,
   0.01430751,
   0.01378647,
   0.0142098,
   0.01427076,
   0.01488612,
   0.01502766,
   0.01572837,
   0.01695119,
   0.01792323,
   0.01950814,
   0.04692763,
   0.9129561};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","S12",100,113.7696,3141.687);
   Graph_Graph01016->SetMinimum(0.2105539);
   Graph_Graph01016->SetMaximum(40.39907);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(22,79);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
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
