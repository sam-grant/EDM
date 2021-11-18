void S12_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:34:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-93.75,3218.25,93.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[18] = {
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
   Double_t Graph0_fy1018[18] = {
   -23.26402,
   -32.19878,
   -22.30546,
   -7.900061,
   -15.90438,
   -16.02323,
   -17.75742,
   -17.68514,
   -22.53579,
   -13.09637,
   -22.32617,
   -17.8757,
   -8.695879,
   -8.534208,
   -13.31042,
   -16.64167,
   -20.39168,
   -7.279292};
   Double_t Graph0_fex1018[18] = {
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
   Double_t Graph0_fey1018[18] = {
   17.70405,
   10.46179,
   7.15984,
   5.858131,
   5.150821,
   4.625582,
   4.316348,
   4.072246,
   4.063963,
   3.912824,
   4.034759,
   4.050433,
   4.205415,
   4.267394,
   4.439099,
   4.773514,
   5.093423,
   5.469263};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,349.5,2899.5);
   Graph_Graph01018->SetMinimum(-75);
   Graph_Graph01018->SetMaximum(75);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1019[18] = {
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
   Double_t Graph1_fy1019[18] = {
   43.29376,
   45.08393,
   44.35137,
   24.26949,
   33.90525,
   28.20182,
   28.13194,
   17.96644,
   23.31153,
   16.30743,
   14.00316,
   17.19348,
   5.542953,
   -0.9052564,
   8.832784,
   13.32872,
   13.23767,
   -6.696803};
   Double_t Graph1_fex1019[18] = {
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
   Double_t Graph1_fey1019[18] = {
   23.42456,
   13.81948,
   9.431182,
   7.715358,
   6.759997,
   6.04549,
   5.602798,
   5.27401,
   5.238303,
   5.036756,
   5.174789,
   5.194189,
   5.406116,
   5.458826,
   5.657235,
   6.115193,
   6.527444,
   7.080912};
   gre = new TGraphErrors(18,Graph1_fx1019,Graph1_fy1019,Graph1_fex1019,Graph1_fey1019);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11019 = new TH1F("Graph_Graph11019","Graph",100,349.5,2899.5);
   Graph_Graph11019->SetMinimum(-21.82732);
   Graph_Graph11019->SetMaximum(74.76792);
   Graph_Graph11019->SetDirectory(0);
   Graph_Graph11019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11019->SetLineColor(ci);
   Graph_Graph11019->GetXaxis()->SetLabelFont(42);
   Graph_Graph11019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11019->GetXaxis()->SetTitleFont(42);
   Graph_Graph11019->GetYaxis()->SetLabelFont(42);
   Graph_Graph11019->GetYaxis()->SetTitleFont(42);
   Graph_Graph11019->GetZaxis()->SetLabelFont(42);
   Graph_Graph11019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11019);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1020[18] = {
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
   Double_t Graph2_fy1020[18] = {
   2.552294,
   0.06332006,
   0.2999468,
   0.534695,
   -0.2214462,
   -0.2715653,
   -0.433024,
   -0.3862025,
   -0.1259767,
   -0.06028482,
   0.0331366,
   0.06487418,
   -0.02241094,
   -0.01892772,
   0.04933648,
   0.06411257,
   0.1459245,
   0.1575587};
   Double_t Graph2_fex1020[18] = {
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
   Double_t Graph2_fey1020[18] = {
   0.110457,
   0.06580376,
   0.0452502,
   0.03712995,
   0.03272047,
   0.02951387,
   0.02766739,
   0.0261434,
   0.02615802,
   0.02524928,
   0.02612789,
   0.02625654,
   0.02728929,
   0.02772247,
   0.02894868,
   0.03113962,
   0.03307294,
   0.03561562};
   gre = new TGraphErrors(18,Graph2_fx1020,Graph2_fy1020,Graph2_fex1020,Graph2_fey1020);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21020 = new TH1F("Graph_Graph21020","Graph",100,349.5,2899.5);
   Graph_Graph21020->SetMinimum(-0.7730357);
   Graph_Graph21020->SetMaximum(2.975095);
   Graph_Graph21020->SetDirectory(0);
   Graph_Graph21020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21020->SetLineColor(ci);
   Graph_Graph21020->GetXaxis()->SetLabelFont(42);
   Graph_Graph21020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21020->GetXaxis()->SetTitleFont(42);
   Graph_Graph21020->GetYaxis()->SetLabelFont(42);
   Graph_Graph21020->GetYaxis()->SetTitleFont(42);
   Graph_Graph21020->GetZaxis()->SetLabelFont(42);
   Graph_Graph21020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21020);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1b","h");
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

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
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
