void verticalOffsetIllustration_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 15:51:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(438.2574,-1.25,3048.213,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1004[8] = {
   -0.002126049,
   -0.01744567,
   0.01637706,
   -0.001140048,
   -0.004650469,
   0.00369904,
   0.007343833,
   0.003158794};
   Double_t _fex1004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1004[8] = {
   0.01221683,
   0.01051015,
   0.009362542,
   0.00854835,
   0.007987062,
   0.007634845,
   0.007500768,
   0.007672783};
   TGraphErrors *gre = new TGraphErrors(8,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011004 = new TH1F("Graph_Graph_Graph10011004","",100,699.253,2787.217);
   Graph_Graph_Graph10011004->SetMinimum(-1);
   Graph_Graph_Graph10011004->SetMaximum(1);
   Graph_Graph_Graph10011004->SetDirectory(0);
   Graph_Graph_Graph10011004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011004->SetLineColor(ci);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10011004->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10011004->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10011004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10011004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011004);
   
   gre->Draw("apl");
   
   Double_t _fx1005[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1005[8] = {
   -0.2766769,
   -0.3150225,
   -0.279177,
   -0.2358988,
   -0.1790306,
   -0.1274037,
   -0.06574668,
   -0.08531841};
   Double_t _fex1005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[8] = {
   0.006983207,
   0.006381241,
   0.005980672,
   0.005645745,
   0.005393703,
   0.005247819,
   0.005338,
   0.006171018};
   gre = new TGraphErrors(8,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph10021005 = new TH1F("Graph_Graph_Graph10021005","",100,699.253,2787.217);
   Graph_Graph_Graph10021005->SetMinimum(-0.3475033);
   Graph_Graph_Graph10021005->SetMaximum(-0.03430917);
   Graph_Graph_Graph10021005->SetDirectory(0);
   Graph_Graph_Graph10021005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10021005->SetLineColor(ci);
   Graph_Graph_Graph10021005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021005);
   
   gre->Draw("pl ");
   
   Double_t _fx1006[8] = {
   880.3222,
   1123.094,
   1371.099,
   1620.134,
   1866.992,
   2115.379,
   2362.982,
   2613.714};
   Double_t _fy1006[8] = {
   -0.4614711,
   -0.3589119,
   -0.2789773,
   -0.2799331,
   -0.1896839,
   -0.1246899,
   -0.1311361,
   -0.08100928};
   Double_t _fex1006[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[8] = {
   0.0110986,
   0.009109488,
   0.008351933,
   0.007981295,
   0.008064142,
   0.008598615,
   0.009443757,
   0.009784803};
   gre = new TGraphErrors(8,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph10031006 = new TH1F("Graph_Graph_Graph10031006","",100,706.983,2787.053);
   Graph_Graph_Graph10031006->SetMinimum(-0.5127042);
   Graph_Graph_Graph10031006->SetMaximum(-0.03108996);
   Graph_Graph_Graph10031006->SetDirectory(0);
   Graph_Graph_Graph10031006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10031006->SetLineColor(ci);
   Graph_Graph_Graph10031006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031006);
   
   gre->Draw("pl ");
   
   Double_t _fx1007[8] = {
   883.9284,
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852,
   2607.406};
   Double_t _fy1007[8] = {
   0.3292892,
   -0.3665914,
   -0.4342452,
   -0.1838807,
   -0.02833879,
   -0.01459609,
   0.021638,
   0.05747815};
   Double_t _fex1007[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[8] = {
   0.01444056,
   0.01098471,
   0.009560957,
   0.009183309,
   0.009438713,
   0.01010321,
   0.01128518,
   0.01331469};
   gre = new TGraphErrors(8,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,711.5807,2779.754);
   Graph_Graph1007->SetMinimum(-0.5225597);
   Graph_Graph1007->SetMaximum(0.4224833);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("pl ");
   
   Double_t _fx1008[8] = {
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525,
   2607.531};
   Double_t _fy1008[8] = {
   0.3643772,
   -0.3107747,
   -0.3934509,
   -0.1526507,
   -0.01857527,
   -0.001888213,
   0.02691211,
   0.08388301};
   Double_t _fex1008[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1008[8] = {
   0.01229849,
   0.009378732,
   0.008163751,
   0.00783685,
   0.008075552,
   0.008643557,
   0.009639573,
   0.0114117};
   gre = new TGraphErrors(8,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,711.6254,2779.886);
   Graph_Graph1008->SetMinimum(-0.4794437);
   Graph_Graph1008->SetMaximum(0.4545048);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw("pl ");
   
   Double_t _fx1009[8] = {
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597,
   2607.039};
   Double_t _fy1009[8] = {
   0.1477541,
   -0.4578313,
   -0.4981196,
   -0.2148995,
   -0.0619183,
   -0.03784886,
   0.01663339,
   0.09018698};
   Double_t _fex1009[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[8] = {
   0.01010273,
   0.007685775,
   0.006710462,
   0.006464503,
   0.006660782,
   0.007135973,
   0.007986024,
   0.009544384};
   gre = new TGraphErrors(8,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,711.6823,2779.344);
   Graph_Graph1009->SetMinimum(-0.5710988);
   Graph_Graph1009->SetMaximum(0.2241255);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw("pl ");
   
   Double_t _fx1010[8] = {
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447,
   2607.574};
   Double_t _fy1010[8] = {
   -0.1249487,
   -0.6655052,
   -0.6564017,
   -0.3270393,
   -0.1464115,
   -0.08626587,
   -0.03116973,
   0.09483528};
   Double_t _fex1010[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1010[8] = {
   0.007372814,
   0.005625967,
   0.004914132,
   0.004732782,
   0.004890917,
   0.005240215,
   0.005869202,
   0.006974874};
   gre = new TGraphErrors(8,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#990099");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#990099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,711.5353,2779.941);
   Graph_Graph1010->SetMinimum(-0.7484253);
   Graph_Graph1010->SetMaximum(0.1791043);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.15,0.65,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: all decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Sim: all decays (acceptance weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Sim: reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
