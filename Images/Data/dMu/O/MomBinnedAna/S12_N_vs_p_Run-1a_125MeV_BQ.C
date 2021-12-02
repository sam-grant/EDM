void S12_N_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 19:14:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.1083,-68435.34,2725.349,616026);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
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
   Double_t Graph0_fy1019[22] = {
   304,
   31124,
   95892,
   207812,
   336364,
   422317,
   466074,
   497801,
   496564,
   483812,
   425013,
   381537,
   307332,
   255398,
   197989,
   161599,
   122226,
   84855,
   59534,
   40074,
   5521,
   12};
   Double_t Graph0_fex1019[22] = {
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
   Double_t Graph0_fey1019[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,113.7696,3141.687);
   Graph_Graph01019->SetMinimum(10.8);
   Graph_Graph01019->SetMaximum(547579.9);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(22,79);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
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
