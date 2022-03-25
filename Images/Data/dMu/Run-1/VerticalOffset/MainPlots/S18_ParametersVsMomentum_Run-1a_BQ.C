void S18_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-71.94542,3218.25,76.06265);
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
   -25.11424,
   -18.08212,
   -5.415452,
   -14.5355,
   -12.40417,
   5.122397,
   -15.53176,
   -8.248543,
   -18.14269,
   -29.83571,
   -16.14989,
   -10.76537,
   -11.09188,
   -22.45073,
   -10.12455,
   -5.143788,
   4.657647,
   -5.971412};
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
   20.60145,
   12.62323,
   8.829263,
   7.29522,
   6.416233,
   5.793013,
   5.478241,
   5.210503,
   5.202589,
   5.052828,
   5.265112,
   5.341259,
   5.607695,
   5.727183,
   5.978673,
   6.472007,
   6.637859,
   7.270585};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","S18",100,349.5,2899.5);
   Graph_Graph01010->SetMinimum(-57.14461);
   Graph_Graph01010->SetMaximum(61.26184);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   37.38337,
   35.04133,
   36.33198,
   28.27307,
   27.07197,
   17.29488,
   22.42737,
   15.70955,
   23.5477,
   19.90057,
   12.6637,
   10.06714,
   12.09046,
   14.28268,
   3.765507,
   7.202297,
   -0.1381954,
   -7.054125};
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
   11.62611,
   7.15186,
   4.958041,
   4.090408,
   3.584471,
   3.218262,
   3.033898,
   2.881325,
   2.862545,
   2.787396,
   2.892923,
   2.926809,
   3.076019,
   3.125177,
   3.264529,
   3.503026,
   3.726495,
   4.133699};
   gre = new TGraphErrors(18,Graph1_fx1011,Graph1_fy1011,Graph1_fex1011,Graph1_fey1011);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11011 = new TH1F("Graph_Graph11011","Graph",100,349.5,2899.5);
   Graph_Graph11011->SetMinimum(-17.20755);
   Graph_Graph11011->SetMaximum(55.0292);
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
   2.413976,
   -0.09297774,
   0.04077864,
   0.3686754,
   -0.4608825,
   -0.5355526,
   -0.4629962,
   -0.3939905,
   -0.256674,
   -0.03335,
   -0.0904144,
   -0.0491115,
   -0.06583211,
   0.03972139,
   0.001489033,
   -0.0934737,
   -0.1702714,
   -0.04531704};
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
   0.1325454,
   0.08143405,
   0.0571481,
   0.047187,
   0.04156565,
   0.03765752,
   0.03563705,
   0.03393848,
   0.03397601,
   0.03298408,
   0.03441099,
   0.03499546,
   0.03681909,
   0.03757035,
   0.03928217,
   0.04257075,
   0.04315265,
   0.04722922};
   gre = new TGraphErrors(18,Graph2_fx1012,Graph2_fy1012,Graph2_fex1012,Graph2_fey1012);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21012 = new TH1F("Graph_Graph21012","Graph",100,349.5,2899.5);
   Graph_Graph21012->SetMinimum(-0.8851833);
   Graph_Graph21012->SetMaximum(2.858495);
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
