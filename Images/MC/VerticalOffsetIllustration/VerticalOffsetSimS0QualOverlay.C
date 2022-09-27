#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VerticalOffsetSimS0QualOverlay()
{
//=========Macro generated from canvas: c/
//=========  (Sun Sep 25 14:24:40 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(193.1389,-0.58125,3206.106,0.23125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_thetaY_fx1006[12] = {
   195.823,
   429.6527,
   630.8,
   875.2732,
   1123.898,
   1373.276,
   1622.384,
   1870.824,
   2119.362,
   2366.93,
   2612.759,
   2826.954};
   Double_t S0_c_vs_p_thetaY_fy1006[12] = {
   3.509044,
   -1.435164,
   -0.3860891,
   -0.05826032,
   0.008128809,
   0.03153519,
   0.02715605,
   0.03917384,
   0.02563029,
   0.01650422,
   0.005627881,
   0.03145751};
   Double_t S0_c_vs_p_thetaY_fex1006[12] = {
   0.3433006,
   0.05845302,
   0.04584003,
   0.04397189,
   0.04462686,
   0.04604067,
   0.0485406,
   0.05262217,
   0.05904232,
   0.06922493,
   0.0867387,
   0.1101555};
   Double_t S0_c_vs_p_thetaY_fey1006[12] = {
   0.3993767,
   0.03808793,
   0.01806976,
   0.01414398,
   0.01211903,
   0.01071791,
   0.009792776,
   0.00925882,
   0.009089862,
   0.009308413,
   0.01025336,
   0.01567279};
   TGraphErrors *gre = new TGraphErrors(12,S0_c_vs_p_thetaY_fx1006,S0_c_vs_p_thetaY_fy1006,S0_c_vs_p_thetaY_fex1006,S0_c_vs_p_thetaY_fey1006);
   gre->SetName("S0_c_vs_p_thetaY");
   gre->SetTitle("Station 0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_thetaY1006 = new TH1F("Graph_S0_c_vs_p_thetaY1006","Station 0",100,0,3090.222);
   Graph_S0_c_vs_p_thetaY1006->SetMinimum(-0.5);
   Graph_S0_c_vs_p_thetaY1006->SetMaximum(0.15);
   Graph_S0_c_vs_p_thetaY1006->SetDirectory(0);
   Graph_S0_c_vs_p_thetaY1006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_thetaY1006->SetLineColor(ci);
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->SetRange(17,94);
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_thetaY1006->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_c_vs_p_thetaY1006->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_thetaY1006->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_thetaY1006->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_thetaY1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_thetaY1006);
   
   gre->Draw("ap");
   
   Double_t S0_c_vs_p_thetaY_fx1007[11] = {
   451.9069,
   653.3776,
   879.9446,
   1123.186,
   1371.518,
   1620.715,
   1867.947,
   2116.42,
   2363.18,
   2614.765,
   2787.854};
   Double_t S0_c_vs_p_thetaY_fy1007[11] = {
   5.669889,
   0.1255085,
   -0.2081711,
   -0.1745036,
   -0.1313914,
   -0.147111,
   -0.06172958,
   -0.02059434,
   0.01858561,
   0.002514351,
   -0.07358436};
   Double_t S0_c_vs_p_thetaY_fex1007[11] = {
   0.1002108,
   0.08522798,
   0.06199341,
   0.06053071,
   0.06432475,
   0.07078151,
   0.08118231,
   0.0984243,
   0.1230972,
   0.1545819,
   0.1789477};
   Double_t S0_c_vs_p_thetaY_fey1007[11] = {
   0.09621891,
   0.03215632,
   0.0185151,
   0.01520998,
   0.01387826,
   0.01317524,
   0.01306866,
   0.01357145,
   0.01445461,
   0.01506939,
   0.03554807};
   gre = new TGraphErrors(11,S0_c_vs_p_thetaY_fx1007,S0_c_vs_p_thetaY_fy1007,S0_c_vs_p_thetaY_fex1007,S0_c_vs_p_thetaY_fey1007);
   gre->SetName("S0_c_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S0_c_vs_p_thetaY10031007 = new TH1F("Graph_Graph_S0_c_vs_p_thetaY10031007","",100,218.1841,3021.656);
   Graph_Graph_S0_c_vs_p_thetaY10031007->SetMinimum(-0.75);
   Graph_Graph_S0_c_vs_p_thetaY10031007->SetMaximum(0.2);
   Graph_Graph_S0_c_vs_p_thetaY10031007->SetDirectory(0);
   Graph_Graph_S0_c_vs_p_thetaY10031007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S0_c_vs_p_thetaY10031007->SetLineColor(ci);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->SetRange(11,96);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->CenterTitle(true);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->CenterTitle(true);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S0_c_vs_p_thetaY10031007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S0_c_vs_p_thetaY10031007);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.63,0.2,0.85,0.33,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_thetaY","No quality","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0_c_vs_p_thetaY","Vertex quality","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4133668,0.94,0.5866332,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Station 0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
