void S12_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-343.7522,3218.25,145.5801);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[18] = {
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
   Double_t Graph0_fy1045[18] = {
   -43.95359,
   -224.2186,
   -31.57818,
   -22.56527,
   -24.23439,
   -21.12198,
   -32.32841,
   -31.70084,
   -41.575,
   -30.80934,
   -28.72232,
   -32.0393,
   -25.36157,
   -19.97358,
   -41.25525,
   -24.69787,
   -12.83541,
   -30.57458};
   Double_t Graph0_fex1045[18] = {
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
   Double_t Graph0_fey1045[18] = {
   19.76538,
   11.63658,
   8.057689,
   6.589603,
   5.781785,
   5.217136,
   4.885084,
   4.607208,
   4.613717,
   4.440181,
   4.574833,
   4.589094,
   4.789792,
   4.856074,
   5.04637,
   5.474998,
   5.80165,
   6.349723};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12",100,349.5,2899.5);
   Graph_Graph01045->SetMinimum(-294.819);
   Graph_Graph01045->SetMaximum(96.64687);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1046[18] = {
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
   Double_t Graph1_fy1046[18] = {
   35.53547,
   72.62635,
   33.04066,
   35.3813,
   24.36411,
   23.76544,
   24.49772,
   18.16252,
   19.78164,
   16.59035,
   15.10119,
   10.74862,
   9.624982,
   8.742986,
   10.41407,
   7.84464,
   4.139867,
   3.698082};
   Double_t Graph1_fex1046[18] = {
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
   Double_t Graph1_fey1046[18] = {
   8.014362,
   4.691149,
   3.175301,
   2.587056,
   2.262005,
   2.024988,
   1.880373,
   1.764068,
   1.764431,
   1.693955,
   1.738989,
   1.742121,
   1.811936,
   1.842209,
   1.907557,
   2.06139,
   2.217585,
   2.424469};
   gre = new TGraphErrors(18,Graph1_fx1046,Graph1_fy1046,Graph1_fex1046,Graph1_fey1046);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11046 = new TH1F("Graph_Graph11046","Graph",100,349.5,2899.5);
   Graph_Graph11046->SetMinimum(1.146251);
   Graph_Graph11046->SetMaximum(84.92189);
   Graph_Graph11046->SetDirectory(0);
   Graph_Graph11046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11046->SetLineColor(ci);
   Graph_Graph11046->GetXaxis()->SetLabelFont(42);
   Graph_Graph11046->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11046->GetXaxis()->SetTitleFont(42);
   Graph_Graph11046->GetYaxis()->SetLabelFont(42);
   Graph_Graph11046->GetYaxis()->SetTitleFont(42);
   Graph_Graph11046->GetZaxis()->SetLabelFont(42);
   Graph_Graph11046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11046);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1047[18] = {
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
   Double_t Graph2_fy1047[18] = {
   2.26249,
   1.038999,
   0.05213167,
   0.3728565,
   -0.3884404,
   -0.4295982,
   -0.5485897,
   -0.4411396,
   -0.1764448,
   -0.09630569,
   -0.05170697,
   0.07526713,
   -0.0283827,
   -0.0240397,
   0.1310195,
   0.05765168,
   0.02976861,
   0.2839865};
   Double_t Graph2_fex1047[18] = {
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
   Double_t Graph2_fey1047[18] = {
   0.1139857,
   0.06731977,
   0.04697146,
   0.03849252,
   0.03385775,
   0.03064202,
   0.02879969,
   0.02719886,
   0.02730429,
   0.02629046,
   0.02715898,
   0.02727638,
   0.02854889,
   0.02895025,
   0.03020164,
   0.03279194,
   0.03460719,
   0.03797594};
   gre = new TGraphErrors(18,Graph2_fx1047,Graph2_fy1047,Graph2_fex1047,Graph2_fey1047);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21047 = new TH1F("Graph_Graph21047","Graph",100,349.5,2899.5);
   Graph_Graph21047->SetMinimum(-0.8727759);
   Graph_Graph21047->SetMaximum(2.671862);
   Graph_Graph21047->SetDirectory(0);
   Graph_Graph21047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21047->SetLineColor(ci);
   Graph_Graph21047->GetXaxis()->SetLabelFont(42);
   Graph_Graph21047->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21047->GetXaxis()->SetTitleFont(42);
   Graph_Graph21047->GetYaxis()->SetLabelFont(42);
   Graph_Graph21047->GetYaxis()->SetTitleFont(42);
   Graph_Graph21047->GetZaxis()->SetLabelFont(42);
   Graph_Graph21047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21047);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1c","h");
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
