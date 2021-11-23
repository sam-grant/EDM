void S18_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:59:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-150,3218.25,100);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[18] = {
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
   Double_t Graph0_fy1010[18] = {
   -16.88028,
   -21.91784,
   -5.415066,
   -15.60102,
   -20.15476,
   5.952914,
   -17.52467,
   -7.986863,
   -12.5417,
   -10.79428,
   -20.2888,
   -10.23352,
   -12.06837,
   -20.74134,
   -12.18259,
   -5.351962,
   -22.8592,
   -9.072267};
   Double_t Graph0_fex1010[18] = {
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
   Double_t Graph0_fey1010[18] = {
   23.39248,
   14.29151,
   10.00001,
   8.258364,
   7.276729,
   6.561894,
   6.207571,
   5.903016,
   5.899956,
   5.742461,
   5.980068,
   6.063678,
   6.375306,
   6.510098,
   6.801532,
   7.359473,
   7.696408,
   8.320475};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","S18",100,349.5,2899.5);
   Graph_Graph01010->SetMinimum(-125);
   Graph_Graph01010->SetMaximum(75);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1011[18] = {
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
   Double_t Graph1_fy1011[18] = {
   14.1795,
   42.86124,
   29.19538,
   34.88498,
   43.43999,
   13.95701,
   21.56102,
   14.67817,
   12.87966,
   9.605831,
   20.02605,
   14.18496,
   13.56483,
   11.80682,
   5.960353,
   1.372867,
   8.891421,
   -14.84667};
   Double_t Graph1_fex1011[18] = {
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
   Double_t Graph1_fey1011[18] = {
   23.53604,
   14.28261,
   9.906548,
   8.179069,
   7.204775,
   6.464761,
   6.095402,
   5.811095,
   5.800877,
   5.603099,
   5.833563,
   5.930265,
   6.181379,
   6.323228,
   6.631165,
   7.098918,
   7.517688,
   8.093535};
   gre = new TGraphErrors(18,Graph1_fx1011,Graph1_fy1011,Graph1_fex1011,Graph1_fey1011);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11011 = new TH1F("Graph_Graph11011","Graph",100,349.5,2899.5);
   Graph_Graph11011->SetMinimum(-30.94861);
   Graph_Graph11011->SetMaximum(65.15226);
   Graph_Graph11011->SetDirectory(0);
   Graph_Graph11011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11011->SetLineColor(ci);
   Graph_Graph11011->GetXaxis()->SetLabelFont(42);
   Graph_Graph11011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11011->GetXaxis()->SetTitleFont(42);
   Graph_Graph11011->GetYaxis()->SetLabelFont(42);
   Graph_Graph11011->GetYaxis()->SetTitleFont(42);
   Graph_Graph11011->GetZaxis()->SetLabelFont(42);
   Graph_Graph11011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11011);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1012[18] = {
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
   Double_t Graph2_fy1012[18] = {
   2.400481,
   -0.07982104,
   0.05788738,
   0.3616322,
   -0.4359268,
   -0.5343552,
   -0.4443485,
   -0.3936604,
   -0.2773956,
   -0.1665624,
   -0.07397537,
   -0.06362578,
   -0.06133121,
   0.0315071,
   0.01331261,
   -0.07739666,
   0.03697277,
   -0.0004889291};
   Double_t Graph2_fex1012[18] = {
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
   Double_t Graph2_fey1012[18] = {
   0.141198,
   0.08642217,
   0.06066302,
   0.0500557,
   0.04417749,
   0.03994568,
   0.0378003,
   0.03600577,
   0.0360626,
   0.03512457,
   0.03660236,
   0.03716564,
   0.0392143,
   0.04000217,
   0.04182379,
   0.04534252,
   0.04726657,
   0.05093415};
   gre = new TGraphErrors(18,Graph2_fx1012,Graph2_fy1012,Graph2_fex1012,Graph2_fey1012);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21012 = new TH1F("Graph_Graph21012","Graph",100,349.5,2899.5);
   Graph_Graph21012->SetMinimum(-0.8858989);
   Graph_Graph21012->SetMaximum(2.853277);
   Graph_Graph21012->SetDirectory(0);
   Graph_Graph21012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21012->SetLineColor(ci);
   Graph_Graph21012->GetXaxis()->SetLabelFont(42);
   Graph_Graph21012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21012->GetXaxis()->SetTitleFont(42);
   Graph_Graph21012->GetYaxis()->SetLabelFont(42);
   Graph_Graph21012->GetYaxis()->SetTitleFont(42);
   Graph_Graph21012->GetZaxis()->SetLabelFont(42);
   Graph_Graph21012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21012);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1a","h");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
