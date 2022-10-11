#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_ExtrapDistvsMomFitsData()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 17:03:30 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.5262,499.6995,2977.82,3455.036);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_extrapDist_vs_p_fx1039[7] = {
   1127.642,
   1373.563,
   1620.324,
   1867.208,
   2116.298,
   2359.991,
   2607.577};
   Double_t S12_gr_extrapDist_vs_p_fy1039[7] = {
   992.3562,
   1182.429,
   1393.311,
   1639.439,
   1944.635,
   2349.726,
   2961.455};
   Double_t S12_gr_extrapDist_vs_p_fex1039[7] = {
   0.06671287,
   0.065106,
   0.07171083,
   0.08614936,
   0.1078001,
   0.1395465,
   0.1943591};
   Double_t S12_gr_extrapDist_vs_p_fey1039[7] = {
   0.1005462,
   0.1154518,
   0.1521794,
   0.2185442,
   0.3140011,
   0.5209841,
   1.025509};
   TGraphErrors *gre = new TGraphErrors(7,S12_gr_extrapDist_vs_p_fx1039,S12_gr_extrapDist_vs_p_fy1039,S12_gr_extrapDist_vs_p_fex1039,S12_gr_extrapDist_vs_p_fey1039);
   gre->SetName("S12_gr_extrapDist_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_extrapDist_vs_p1039 = new TH1F("Graph_S12_gr_extrapDist_vs_p1039","S12",100,979.5556,2755.791);
   Graph_S12_gr_extrapDist_vs_p1039->SetMinimum(795.2332);
   Graph_S12_gr_extrapDist_vs_p1039->SetMaximum(3159.503);
   Graph_S12_gr_extrapDist_vs_p1039->SetDirectory(0);
   Graph_S12_gr_extrapDist_vs_p1039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_extrapDist_vs_p1039->SetLineColor(ci);
   Graph_S12_gr_extrapDist_vs_p1039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_extrapDist_vs_p1039->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_extrapDist_vs_p1039->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1039->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_extrapDist_vs_p1039->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_extrapDist_vs_p1039->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->SetTitle("Decay extrapolated distance [mm] / 250 MeV");
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_gr_extrapDist_vs_p1039->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1039->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1039->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_extrapDist_vs_p1039);
   
   gre->Draw("apl");
   
   Double_t S12_gr_extrapDist_vs_p_fx1040[7] = {
   1127.627,
   1373.622,
   1620.285,
   1867.088,
   2116.434,
   2359.737,
   2607.782};
   Double_t S12_gr_extrapDist_vs_p_fy1040[7] = {
   989.9462,
   1179.945,
   1390.404,
   1635.328,
   1939.617,
   2343.636,
   2957.56};
   Double_t S12_gr_extrapDist_vs_p_fex1040[7] = {
   0.05677434,
   0.05548426,
   0.06097623,
   0.07342569,
   0.09177072,
   0.1190406,
   0.1664736};
   Double_t S12_gr_extrapDist_vs_p_fey1040[7] = {
   0.08462587,
   0.09737096,
   0.1280838,
   0.183073,
   0.2627923,
   0.4368963,
   0.8651045};
   gre = new TGraphErrors(7,S12_gr_extrapDist_vs_p_fx1040,S12_gr_extrapDist_vs_p_fy1040,S12_gr_extrapDist_vs_p_fex1040,S12_gr_extrapDist_vs_p_fey1040);
   gre->SetName("S12_gr_extrapDist_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_extrapDist_vs_p1040 = new TH1F("Graph_S12_gr_extrapDist_vs_p1040","",100,979.532,2755.986);
   Graph_S12_gr_extrapDist_vs_p1040->SetMinimum(793.0052);
   Graph_S12_gr_extrapDist_vs_p1040->SetMaximum(3155.282);
   Graph_S12_gr_extrapDist_vs_p1040->SetDirectory(0);
   Graph_S12_gr_extrapDist_vs_p1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_extrapDist_vs_p1040->SetLineColor(ci);
   Graph_S12_gr_extrapDist_vs_p1040->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1040->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1040->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1040->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1040->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1040->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1040->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_extrapDist_vs_p1040);
   
   gre->Draw("pl ");
   
   Double_t S12_gr_extrapDist_vs_p_fx1041[7] = {
   1127.521,
   1373.594,
   1620.3,
   1867.14,
   2116.241,
   2359.687,
   2607.541};
   Double_t S12_gr_extrapDist_vs_p_fy1041[7] = {
   993.5243,
   1184.012,
   1394.818,
   1641.275,
   1947.316,
   2351.762,
   2965.53};
   Double_t S12_gr_extrapDist_vs_p_fex1041[7] = {
   0.04653765,
   0.04560684,
   0.05024491,
   0.06051975,
   0.07584874,
   0.09852956,
   0.1381994};
   Double_t S12_gr_extrapDist_vs_p_fey1041[7] = {
   0.07001225,
   0.08053207,
   0.1063913,
   0.1529072,
   0.220623,
   0.3663497,
   0.726418};
   gre = new TGraphErrors(7,S12_gr_extrapDist_vs_p_fx1041,S12_gr_extrapDist_vs_p_fy1041,S12_gr_extrapDist_vs_p_fex1041,S12_gr_extrapDist_vs_p_fey1041);
   gre->SetName("S12_gr_extrapDist_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_extrapDist_vs_p1041 = new TH1F("Graph_S12_gr_extrapDist_vs_p1041","",100,979.4539,2755.699);
   Graph_S12_gr_extrapDist_vs_p1041->SetMinimum(796.1741);
   Graph_S12_gr_extrapDist_vs_p1041->SetMaximum(3163.537);
   Graph_S12_gr_extrapDist_vs_p1041->SetDirectory(0);
   Graph_S12_gr_extrapDist_vs_p1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_extrapDist_vs_p1041->SetLineColor(ci);
   Graph_S12_gr_extrapDist_vs_p1041->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1041->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1041->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1041->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1041->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1041->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1041->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_extrapDist_vs_p1041);
   
   gre->Draw("pl ");
   
   Double_t S12_gr_extrapDist_vs_p_fx1042[7] = {
   1127.483,
   1373.62,
   1620.287,
   1866.946,
   2116.359,
   2359.645,
   2608.213};
   Double_t S12_gr_extrapDist_vs_p_fy1042[7] = {
   989.6192,
   1179.51,
   1389.699,
   1633.886,
   1938.69,
   2341.361,
   2956.184};
   Double_t S12_gr_extrapDist_vs_p_fex1042[7] = {
   0.03384042,
   0.03313154,
   0.03650538,
   0.04404049,
   0.05518869,
   0.07177596,
   0.1004619};
   Double_t S12_gr_extrapDist_vs_p_fey1042[7] = {
   0.05049343,
   0.05825484,
   0.07678118,
   0.1102621,
   0.1585804,
   0.2636353,
   0.5261219};
   gre = new TGraphErrors(7,S12_gr_extrapDist_vs_p_fx1042,S12_gr_extrapDist_vs_p_fy1042,S12_gr_extrapDist_vs_p_fex1042,S12_gr_extrapDist_vs_p_fey1042);
   gre->SetName("S12_gr_extrapDist_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_extrapDist_vs_p1042 = new TH1F("Graph_S12_gr_extrapDist_vs_p1042","",100,979.3624,2756.4);
   Graph_S12_gr_extrapDist_vs_p1042->SetMinimum(792.8546);
   Graph_S12_gr_extrapDist_vs_p1042->SetMaximum(3153.424);
   Graph_S12_gr_extrapDist_vs_p1042->SetDirectory(0);
   Graph_S12_gr_extrapDist_vs_p1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_extrapDist_vs_p1042->SetLineColor(ci);
   Graph_S12_gr_extrapDist_vs_p1042->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1042->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1042->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1042->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1042->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_extrapDist_vs_p1042->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_extrapDist_vs_p1042->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_extrapDist_vs_p1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_extrapDist_vs_p1042);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.11,0.6,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_extrapDist_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_extrapDist_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_extrapDist_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_gr_extrapDist_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
