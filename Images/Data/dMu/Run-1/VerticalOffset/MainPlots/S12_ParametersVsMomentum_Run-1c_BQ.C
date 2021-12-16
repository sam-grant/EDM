void S12_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:36:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-90.96898,3218.25,59.59199);
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
   -35.04497,
   -47.54458,
   -23.36824,
   -19.09421,
   -22.19602,
   -15.78129,
   -30.21979,
   -31.39924,
   -42.50178,
   -27.21716,
   -28.52362,
   -25.53085,
   -26.44554,
   -16.92966,
   -31.58162,
   -25.65585,
   -26.30694,
   -28.71248};
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
   22.11634,
   13.18572,
   9.022866,
   7.376999,
   6.471649,
   5.844105,
   5.47378,
   5.165496,
   5.172559,
   4.979483,
   5.126313,
   5.161781,
   5.371753,
   5.457592,
   5.682382,
   6.148041,
   6.546127,
   7.121205};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12",100,349.5,2899.5);
   Graph_Graph01045->SetMinimum(-75.91288);
   Graph_Graph01045->SetMaximum(44.53589);
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
   16.19754,
   26.75038,
   23.06199,
   27.85007,
   22.46915,
   17.83285,
   22.26475,
   17.53903,
   19.92428,
   10.71104,
   14.47146,
   7.73014,
   11.07465,
   1.771896,
   6.255805,
   5.755627,
   10.83289,
   -1.829983};
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
   15.16547,
   8.878335,
   6.070387,
   4.95414,
   4.339543,
   3.888081,
   3.613794,
   3.401672,
   3.391295,
   3.258732,
   3.338984,
   3.34683,
   3.476982,
   3.530709,
   3.661571,
   3.947349,
   4.233801,
   4.601324};
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
   Graph_Graph11046->SetMinimum(-10.63731);
   Graph_Graph11046->SetMaximum(39.83472);
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
   2.245234,
   -0.08048569,
   0.01840957,
   0.3664889,
   -0.3982134,
   -0.4528495,
   -0.5579857,
   -0.4416978,
   -0.170243,
   -0.1071288,
   -0.0515285,
   0.03673976,
   -0.02431894,
   -0.0281972,
   0.07274109,
   0.06973536,
   0.1087016,
   0.2844911};
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
   0.1219508,
   0.07312555,
   0.05021586,
   0.04113183,
   0.03616595,
   0.03274775,
   0.03077527,
   0.02907949,
   0.02919001,
   0.02810088,
   0.02900906,
   0.02927167,
   0.03051889,
   0.03102491,
   0.03244174,
   0.0351211,
   0.03728277,
   0.04069032};
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
   Graph_Graph21047->SetMinimum(-0.8843556);
   Graph_Graph21047->SetMaximum(2.662779);
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
