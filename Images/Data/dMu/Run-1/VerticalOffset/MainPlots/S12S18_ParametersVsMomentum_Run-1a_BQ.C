void S12S18_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:39 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-121.2826,3218.25,97.2855);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1167[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1167[18] = {
   -64.51921,
   -28.05707,
   -11.30905,
   -14.71744,
   -17.63969,
   -4.1862,
   -16.34968,
   -12.23008,
   -20.49722,
   -12.97906,
   -36.77334,
   -13.70792,
   -13.34394,
   -20.02068,
   -21.08632,
   -13.49917,
   -17.33575,
   -12.71996};
   Double_t Graph0_fex1167[18] = {
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
   Double_t Graph0_fey1167[18] = {
   15.02144,
   9.055718,
   6.266565,
   5.146505,
   4.530522,
   4.07832,
   3.830868,
   3.628348,
   3.622702,
   3.505735,
   3.619662,
   3.655361,
   3.817306,
   3.888343,
   4.055919,
   4.37286,
   4.59237,
   4.971116};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1167,Graph0_fy1167,Graph0_fex1167,Graph0_fey1167);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01167 = new TH1F("Graph_Graph01167","S12S18",100,349.5,2899.5);
   Graph_Graph01167->SetMinimum(-99.4258);
   Graph_Graph01167->SetMaximum(75.42869);
   Graph_Graph01167->SetDirectory(0);
   Graph_Graph01167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01167->SetLineColor(ci);
   Graph_Graph01167->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01167->GetXaxis()->CenterTitle(true);
   Graph_Graph01167->GetXaxis()->SetLabelFont(42);
   Graph_Graph01167->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01167->GetXaxis()->SetTitleFont(42);
   Graph_Graph01167->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01167->GetYaxis()->CenterTitle(true);
   Graph_Graph01167->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01167->GetYaxis()->SetLabelFont(42);
   Graph_Graph01167->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01167->GetYaxis()->SetTitleFont(42);
   Graph_Graph01167->GetZaxis()->SetLabelFont(42);
   Graph_Graph01167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01167);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1168[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph1_fy1168[18] = {
   51.81404,
   37.43773,
   34.99443,
   26.27502,
   28.11761,
   20.91881,
   22.24271,
   15.62007,
   22.59057,
   13.3626,
   17.85588,
   11.30656,
   12.32651,
   12.57112,
   9.996255,
   7.779153,
   6.408859,
   2.270729};
   Double_t Graph1_fex1168[18] = {
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
   Double_t Graph1_fey1168[18] = {
   8.52891,
   5.137758,
   3.547959,
   2.905944,
   2.546324,
   2.287423,
   2.136724,
   2.021254,
   2.002086,
   1.941373,
   1.998917,
   2.012181,
   2.113254,
   2.136335,
   2.220404,
   2.394112,
   2.555527,
   2.809011};
   gre = new TGraphErrors(18,Graph1_fx1168,Graph1_fy1168,Graph1_fex1168,Graph1_fey1168);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11168 = new TH1F("Graph_Graph11168","Graph",100,349.5,2899.5);
   Graph_Graph11168->SetMinimum(-6.626406);
   Graph_Graph11168->SetMaximum(66.43107);
   Graph_Graph11168->SetDirectory(0);
   Graph_Graph11168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11168->SetLineColor(ci);
   Graph_Graph11168->GetXaxis()->SetLabelFont(42);
   Graph_Graph11168->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11168->GetXaxis()->SetTitleFont(42);
   Graph_Graph11168->GetYaxis()->SetLabelFont(42);
   Graph_Graph11168->GetYaxis()->SetTitleFont(42);
   Graph_Graph11168->GetZaxis()->SetLabelFont(42);
   Graph_Graph11168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11168);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1169[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph2_fy1169[18] = {
   2.650741,
   -0.01436921,
   0.1302647,
   0.4536404,
   -0.3478045,
   -0.4247463,
   -0.4703395,
   -0.4043872,
   -0.2285142,
   -0.119928,
   0.09877464,
   -0.01157995,
   -0.0404038,
   0.0302048,
   0.04717342,
   0.01061073,
   0.06148438,
   0.06172171};
   Double_t Graph2_fex1169[18] = {
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
   Double_t Graph2_fey1169[18] = {
   0.09646666,
   0.05841805,
   0.04053974,
   0.03334732,
   0.02940684,
   0.02657458,
   0.02500866,
   0.02372308,
   0.02377407,
   0.0230279,
   0.02378506,
   0.02409021,
   0.02522225,
   0.02565539,
   0.02684462,
   0.02896876,
   0.0302724,
   0.03267708};
   gre = new TGraphErrors(18,Graph2_fx1169,Graph2_fy1169,Graph2_fex1169,Graph2_fey1169);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21169 = new TH1F("Graph_Graph21169","Graph",100,349.5,2899.5);
   Graph_Graph21169->SetMinimum(-0.8196037);
   Graph_Graph21169->SetMaximum(3.071463);
   Graph_Graph21169->SetDirectory(0);
   Graph_Graph21169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21169->SetLineColor(ci);
   Graph_Graph21169->GetXaxis()->SetLabelFont(42);
   Graph_Graph21169->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21169->GetXaxis()->SetTitleFont(42);
   Graph_Graph21169->GetYaxis()->SetLabelFont(42);
   Graph_Graph21169->GetYaxis()->SetTitleFont(42);
   Graph_Graph21169->GetZaxis()->SetLabelFont(42);
   Graph_Graph21169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21169);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1a","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
