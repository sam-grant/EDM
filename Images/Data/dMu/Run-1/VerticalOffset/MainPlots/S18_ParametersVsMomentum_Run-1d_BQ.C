void S18_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:59:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-150,3218.25,100);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[18] = {
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
   Double_t Graph0_fy1073[18] = {
   -49.74927,
   -57.10536,
   -32.50718,
   -30.62096,
   -27.07383,
   -35.61153,
   -33.3786,
   -26.32167,
   -25.80054,
   -31.50445,
   -31.72589,
   -27.45386,
   -22.20077,
   -15.64329,
   -18.4715,
   -24.84049,
   -23.96382,
   -24.38202};
   Double_t Graph0_fex1073[18] = {
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
   Double_t Graph0_fey1073[18] = {
   15.69944,
   9.645782,
   6.753915,
   5.582877,
   4.915006,
   4.443912,
   4.213016,
   4.012393,
   4.023298,
   3.922018,
   4.110876,
   4.15875,
   4.387149,
   4.467011,
   4.704489,
   5.087654,
   5.32944,
   5.783646};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,349.5,2899.5);
   Graph_Graph01073->SetMinimum(-125);
   Graph_Graph01073->SetMaximum(75);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1074[18] = {
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
   Double_t Graph1_fy1074[18] = {
   31.63369,
   33.12624,
   23.06776,
   25.11074,
   16.94172,
   20.22567,
   18.42625,
   11.79977,
   12.19885,
   12.86762,
   13.36065,
   6.999552,
   6.048265,
   6.270182,
   5.157916,
   5.70589,
   5.021442,
   -18.45298};
   Double_t Graph1_fex1074[18] = {
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
   Double_t Graph1_fey1074[18] = {
   9.92087,
   6.056779,
   4.230225,
   3.491888,
   3.06933,
   2.761342,
   2.608065,
   2.482997,
   2.478233,
   2.417288,
   2.520916,
   2.550402,
   2.676692,
   2.713835,
   2.855664,
   3.0979,
   3.237216,
   3.566155};
   gre = new TGraphErrors(18,Graph1_fx1074,Graph1_fy1074,Graph1_fex1074,Graph1_fey1074);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11074 = new TH1F("Graph_Graph11074","Graph",100,349.5,2899.5);
   Graph_Graph11074->SetMinimum(-28.37651);
   Graph_Graph11074->SetMaximum(47.91193);
   Graph_Graph11074->SetDirectory(0);
   Graph_Graph11074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11074->SetLineColor(ci);
   Graph_Graph11074->GetXaxis()->SetLabelFont(42);
   Graph_Graph11074->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11074->GetXaxis()->SetTitleFont(42);
   Graph_Graph11074->GetYaxis()->SetLabelFont(42);
   Graph_Graph11074->GetYaxis()->SetTitleFont(42);
   Graph_Graph11074->GetZaxis()->SetLabelFont(42);
   Graph_Graph11074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11074);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1075[18] = {
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
   Double_t Graph2_fy1075[18] = {
   1.88117,
   -0.5908218,
   -0.4149722,
   -0.0686643,
   -0.8139236,
   -0.6820648,
   -0.7311004,
   -0.5984364,
   -0.4487169,
   -0.3195884,
   -0.2558577,
   -0.1683939,
   -0.1853535,
   -0.1702954,
   -0.1326147,
   -0.120392,
   -0.04815618,
   -0.03467829};
   Double_t Graph2_fex1075[18] = {
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
   Double_t Graph2_fey1075[18] = {
   0.08614299,
   0.05316338,
   0.0372779,
   0.0308208,
   0.02718551,
   0.02462816,
   0.02338922,
   0.02229648,
   0.02238371,
   0.02181334,
   0.02292583,
   0.0232075,
   0.02453754,
   0.02501679,
   0.02636826,
   0.02853638,
   0.02989707,
   0.03234306};
   gre = new TGraphErrors(18,Graph2_fx1075,Graph2_fy1075,Graph2_fex1075,Graph2_fey1075);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21075 = new TH1F("Graph_Graph21075","Graph",100,349.5,2899.5);
   Graph_Graph21075->SetMinimum(-1.121951);
   Graph_Graph21075->SetMaximum(2.248155);
   Graph_Graph21075->SetDirectory(0);
   Graph_Graph21075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21075->SetLineColor(ci);
   Graph_Graph21075->GetXaxis()->SetLabelFont(42);
   Graph_Graph21075->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21075->GetXaxis()->SetTitleFont(42);
   Graph_Graph21075->GetYaxis()->SetLabelFont(42);
   Graph_Graph21075->GetYaxis()->SetTitleFont(42);
   Graph_Graph21075->GetZaxis()->SetLabelFont(42);
   Graph_Graph21075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21075);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1d","h");
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
