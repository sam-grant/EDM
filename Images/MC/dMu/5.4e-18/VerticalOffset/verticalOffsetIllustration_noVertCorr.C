#ifdef __CLING__
#pragma cling optimize(0)
#endif
void verticalOffsetIllustration_noVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Thu Sep 15 12:11:36 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(811.7217,-1.25,2678.365,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1004[6] = {
   -0.01744462,
   0.0163779,
   -0.001139381,
   -0.004649449,
   0.00369966,
   0.007344266};
   Double_t _fex1004[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1004[6] = {
   0.01051015,
   0.00936255,
   0.008548368,
   0.007987093,
   0.007634892,
   0.007500835};
   TGraphErrors *gre = new TGraphErrors(6,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle(";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011004 = new TH1F("Graph_Graph_Graph10011004","",100,998.3861,2491.701);
   Graph_Graph_Graph10011004->SetMinimum(-1);
   Graph_Graph_Graph10011004->SetMaximum(1);
   Graph_Graph_Graph10011004->SetDirectory(0);
   Graph_Graph_Graph10011004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011004->SetLineColor(ci);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitle("Momentum [MeV]");
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
   
   Double_t _fx1005[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1005[6] = {
   -0.3150225,
   -0.279177,
   -0.2358988,
   -0.1790306,
   -0.1274037,
   -0.06574668};
   Double_t _fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[6] = {
   0.006381241,
   0.005980672,
   0.005645745,
   0.005393703,
   0.005247819,
   0.005338};
   gre = new TGraphErrors(6,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph10021005 = new TH1F("Graph_Graph_Graph10021005","",100,998.3861,2491.701);
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
   
   Double_t _fx1006[6] = {
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045};
   Double_t _fy1006[6] = {
   -0.3669009,
   -0.2898417,
   -0.2854817,
   -0.2043663,
   -0.1356397,
   -0.1403748};
   Double_t _fex1006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[6] = {
   0.009079925,
   0.008318315,
   0.007953484,
   0.008032046,
   0.008555777,
   0.009395149};
   gre = new TGraphErrors(6,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10031006 = new TH1F("Graph_Graph_Graph10031006","",100,999.074,2487.042);
   Graph_Graph_Graph10031006->SetMinimum(-0.4008705);
   Graph_Graph_Graph10031006->SetMaximum(-0.1021943);
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
   
   Double_t _fx1007[6] = {
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852};
   Double_t _fy1007[6] = {
   -0.4366922,
   -0.5045334,
   -0.254505,
   -0.09926113,
   -0.08569731,
   -0.04996585};
   Double_t _fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[6] = {
   0.01098469,
   0.009561058,
   0.009183375,
   0.009438755,
   0.01010355,
   0.01128491};
   gre = new TGraphErrors(6,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,1004.26,2483.088);
   Graph_Graph1007->SetMinimum(-0.5616358);
   Graph_Graph1007->SetMaximum(0.008860405);
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
   
   Double_t _fx1008[6] = {
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525};
   Double_t _fy1008[6] = {
   -0.3725107,
   -0.4555092,
   -0.2149399,
   -0.0811591,
   -0.06476945,
   -0.03650466};
   Double_t _fex1008[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1008[6] = {
   0.00937876,
   0.008163768,
   0.007836965,
   0.008075695,
   0.008643431,
   0.009639696};
   gre = new TGraphErrors(6,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,1004.192,2482.737);
   Graph_Graph1008->SetMinimum(-0.5073538);
   Graph_Graph1008->SetMaximum(0.01681584);
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
   
   Double_t _fx1009[6] = {
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1009[6] = {
   -0.5629542,
   -0.6036554,
   -0.3206816,
   -0.168001,
   -0.1444805,
   -0.09027326};
   Double_t _fex1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[6] = {
   0.007685793,
   0.006710499,
   0.006464579,
   0.006660835,
   0.007136138,
   0.007986118};
   gre = new TGraphErrors(6,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,1004.197,2482.815);
   Graph_Graph1009->SetMinimum(-0.6631737);
   Graph_Graph1009->SetMaximum(-0.02947927);
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
   
   Double_t _fx1010[6] = {
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1010[6] = {
   -0.8374099,
   -0.8289452,
   -0.5001686,
   -0.3201199,
   -0.260683,
   -0.2065102};
   Double_t _fex1010[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1010[6] = {
   0.005626027,
   0.004914205,
   0.00473288,
   0.004891094,
   0.005240362,
   0.005869402};
   gre = new TGraphErrors(6,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#990099");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#990099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,1004.157,2482.655);
   Graph_Graph1010->SetMinimum(-0.9072754);
   Graph_Graph1010->SetMaximum(-0.1364013);
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
   
   TLegend *leg = new TLegend(0.15,0.55,0.89,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("","Sim: truth vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
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
