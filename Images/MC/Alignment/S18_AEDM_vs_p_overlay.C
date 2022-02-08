void S18_AEDM_vs_p_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:20:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-132.5739,-1.200558,3373.82,0.6826609);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_AEDM_vs_p_thetaY_fx1005[11] = {
   452.0134,
   653.3253,
   880.4841,
   1123.189,
   1370.809,
   1619.631,
   1866.594,
   2114.327,
   2363.237,
   2612.616,
   2789.011};
   Double_t S18_AEDM_vs_p_thetaY_fy1005[11] = {
   -0.4644942,
   0.1105722,
   0.09404844,
   0.08939177,
   0.1128394,
   0.1553594,
   0.1181202,
   0.06725476,
   0.01802083,
   0.1499062,
   -0.06837481};
   Double_t S18_AEDM_vs_p_thetaY_fex1005[11] = {
   0.1882326,
   0.1587287,
   0.1152162,
   0.1128802,
   0.1211086,
   0.1349382,
   0.1585994,
   0.2000091,
   0.2630659,
   0.3154403,
   0.4104892};
   Double_t S18_AEDM_vs_p_thetaY_fey1005[11] = {
   0.2297841,
   0.07657863,
   0.04413261,
   0.03631642,
   0.03357049,
   0.03220454,
   0.03261103,
   0.03462594,
   0.0377729,
   0.03709966,
   0.08448057};
   TGraphErrors *gre = new TGraphErrors(11,S18_AEDM_vs_p_thetaY_fx1005,S18_AEDM_vs_p_thetaY_fy1005,S18_AEDM_vs_p_thetaY_fex1005,S18_AEDM_vs_p_thetaY_fey1005);
   gre->SetName("S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p_thetaY1005 = new TH1F("Graph_S18_AEDM_vs_p_thetaY1005","S18",100,218.0656,3023.181);
   Graph_S18_AEDM_vs_p_thetaY1005->SetMinimum(-1.012236);
   Graph_S18_AEDM_vs_p_thetaY1005->SetMaximum(0.494339);
   Graph_S18_AEDM_vs_p_thetaY1005->SetDirectory(0);
   Graph_S18_AEDM_vs_p_thetaY1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p_thetaY1005->SetLineColor(ci);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetRange(1,100);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p_thetaY1005);
   
   gre->Draw("ap");
   
   Double_t S18_AEDM_vs_p_thetaY_fx1006[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t S18_AEDM_vs_p_thetaY_fy1006[11] = {
   -0.5029309,
   0.1571695,
   0.1158919,
   0.08338558,
   0.1165895,
   0.15778,
   0.1390867,
   0.07402185,
   0.0253646,
   0.1599982,
   -0.05627686};
   Double_t S18_AEDM_vs_p_thetaY_fex1006[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t S18_AEDM_vs_p_thetaY_fey1006[11] = {
   0.2593055,
   0.08716948,
   0.05043613,
   0.0416306,
   0.03865014,
   0.03715608,
   0.03786252,
   0.04038831,
   0.04415373,
   0.04342417,
   0.1000376};
   gre = new TGraphErrors(11,S18_AEDM_vs_p_thetaY_fx1006,S18_AEDM_vs_p_thetaY_fy1006,S18_AEDM_vs_p_thetaY_fex1006,S18_AEDM_vs_p_thetaY_fey1006);
   gre->SetName("S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_AEDM_vs_p_thetaY1006 = new TH1F("Graph_S18_AEDM_vs_p_thetaY1006","S18_",100,217.9537,3022.812);
   Graph_S18_AEDM_vs_p_thetaY1006->SetMinimum(-1.85146);
   Graph_S18_AEDM_vs_p_thetaY1006->SetMaximum(0.1899621);
   Graph_S18_AEDM_vs_p_thetaY1006->SetDirectory(0);
   Graph_S18_AEDM_vs_p_thetaY1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p_thetaY1006->SetLineColor(ci);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetRange(0,101);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p_thetaY1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p_thetaY1006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_AEDM_vs_p_thetaY","Nominal","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p_thetaY","#minus1 mm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
