void c_vs_p_full_overlay_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-5.25,3456.75,7.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1385[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0_c_vs_p_fy1385[15] = {
   5.040422,
   -2.414658,
   -1.1898,
   -0.2054251,
   -0.03941183,
   -0.08588758,
   0.03481582,
   -0.02161853,
   -0.03986247,
   -0.005869751,
   0.03163686,
   -0.01045277,
   -0.01663388,
   0.0311821,
   0.03742323};
   Double_t S0_c_vs_p_fex1385[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1385[15] = {
   0.7816273,
   0.167349,
   0.0558266,
   0.04351873,
   0.03837591,
   0.03559444,
   0.03324143,
   0.03143849,
   0.03020585,
   0.02994338,
   0.03007943,
   0.03079539,
   0.03280707,
   0.03468265,
   0.04430929};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1385,S0_c_vs_p_fy1385,S0_c_vs_p_fex1385,S0_c_vs_p_fey1385);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1385 = new TH1F("Graph_S0_c_vs_p1385","",100,0,3300);
   Graph_S0_c_vs_p1385->SetMinimum(-4);
   Graph_S0_c_vs_p1385->SetMaximum(6);
   Graph_S0_c_vs_p1385->SetDirectory(0);
   Graph_S0_c_vs_p1385->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1385->SetLineColor(ci);
   Graph_S0_c_vs_p1385->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1385->GetXaxis()->SetRange(0,93);
   Graph_S0_c_vs_p1385->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1385->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1385->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1385->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1385->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1385->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1385->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1385->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1385->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1385->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1385->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1385->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1385->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1385->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1385->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1385);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1386[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_c_vs_p_fy1386[15] = {
   -2.442107,
   -2.853816,
   -1.499151,
   -0.6574026,
   -0.4380454,
   -0.3488786,
   -0.269318,
   -0.218433,
   -0.148595,
   -0.1414146,
   -0.08387276,
   -0.1701992,
   -0.03575088,
   -0.08449188,
   -0.11918};
   Double_t S12_c_vs_p_fex1386[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1386[15] = {
   0.8951059,
   0.1615526,
   0.05606524,
   0.04349768,
   0.03847304,
   0.03557676,
   0.03319356,
   0.03145502,
   0.030357,
   0.0303256,
   0.03116761,
   0.03294709,
   0.03583509,
   0.03625673,
   0.05066315};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1386,S12_c_vs_p_fy1386,S12_c_vs_p_fex1386,S12_c_vs_p_fey1386);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1386 = new TH1F("Graph_S12_c_vs_p1386","S12",100,0,3300);
   Graph_S12_c_vs_p1386->SetMinimum(-3.670943);
   Graph_S12_c_vs_p1386->SetMaximum(0.3338139);
   Graph_S12_c_vs_p1386->SetDirectory(0);
   Graph_S12_c_vs_p1386->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1386->SetLineColor(ci);
   Graph_S12_c_vs_p1386->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1386->GetXaxis()->SetRange(0,97);
   Graph_S12_c_vs_p1386->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1386->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1386->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1386->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1386->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1386->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1386->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1386->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1386->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1386->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1386->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1386->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1386->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1386->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1386->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1386);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1387[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S18_c_vs_p_fy1387[15] = {
   -2.717524,
   -2.885568,
   -1.444939,
   -0.5204484,
   -0.3730839,
   -0.3005174,
   -0.2366966,
   -0.1861169,
   -0.09554347,
   -0.1470477,
   -0.1833412,
   -0.09005649,
   -0.07521348,
   -0.1046703,
   0.002588472};
   Double_t S18_c_vs_p_fex1387[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1387[15] = {
   0.888521,
   0.1659513,
   0.05594277,
   0.04335651,
   0.03833817,
   0.03548948,
   0.0332363,
   0.03156064,
   0.03071251,
   0.03077405,
   0.03188105,
   0.03434911,
   0.03654948,
   0.03720263,
   0.05167119};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1387,S18_c_vs_p_fy1387,S18_c_vs_p_fex1387,S18_c_vs_p_fey1387);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1387 = new TH1F("Graph_S18_c_vs_p1387","S18",100,0,3300);
   Graph_S18_c_vs_p1387->SetMinimum(-3.972075);
   Graph_S18_c_vs_p1387->SetMaximum(0.4202901);
   Graph_S18_c_vs_p1387->SetDirectory(0);
   Graph_S18_c_vs_p1387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1387->SetLineColor(ci);
   Graph_S18_c_vs_p1387->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1387->GetXaxis()->SetRange(0,97);
   Graph_S18_c_vs_p1387->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1387->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1387->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1387->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1387->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1387->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1387->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1387->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1387->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1387->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1387->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1387->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1387->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1387->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1387->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1387);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
