void verticalOffsetIllustration_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Sun Jun 12 17:26:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(811.7217,-1.25,2678.365,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1024[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1024[6] = {
   -0.01744462,
   0.0163779,
   -0.001139381,
   -0.004649449,
   0.00369966,
   0.007344266};
   Double_t _fex1024[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1024[6] = {
   0.01051015,
   0.00936255,
   0.008548368,
   0.007987093,
   0.007634892,
   0.007500835};
   TGraphErrors *gre = new TGraphErrors(6,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle(";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10211024 = new TH1F("Graph_Graph_Graph10211024","",100,998.3861,2491.701);
   Graph_Graph_Graph10211024->SetMinimum(-1);
   Graph_Graph_Graph10211024->SetMaximum(1);
   Graph_Graph_Graph10211024->SetDirectory(0);
   Graph_Graph_Graph10211024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10211024->SetLineColor(ci);
   Graph_Graph_Graph10211024->GetXaxis()->SetTitle("Momentum [MeV]");
   Graph_Graph_Graph10211024->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10211024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10211024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211024->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10211024->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10211024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10211024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211024->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10211024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10211024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10211024);
   
   gre->Draw("apl");
   
   Double_t _fx1025[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1025[6] = {
   -0.3150225,
   -0.279177,
   -0.2358988,
   -0.1790306,
   -0.1274037,
   -0.06574668};
   Double_t _fex1025[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[6] = {
   0.006381241,
   0.005980672,
   0.005645745,
   0.005393703,
   0.005247819,
   0.005338};
   gre = new TGraphErrors(6,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph10221025 = new TH1F("Graph_Graph_Graph10221025","",100,998.3861,2491.701);
   Graph_Graph_Graph10221025->SetMinimum(-0.3475033);
   Graph_Graph_Graph10221025->SetMaximum(-0.03430917);
   Graph_Graph_Graph10221025->SetDirectory(0);
   Graph_Graph_Graph10221025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10221025->SetLineColor(ci);
   Graph_Graph_Graph10221025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10221025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10221025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10221025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10221025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10221025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10221025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10221025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10221025);
   
   gre->Draw("pl ");
   
   Double_t _fx1026[6] = {
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045};
   Double_t _fy1026[6] = {
   -0.3669009,
   -0.2898417,
   -0.2854817,
   -0.2043663,
   -0.1356397,
   -0.1403748};
   Double_t _fex1026[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1026[6] = {
   0.009079925,
   0.008318315,
   0.007953484,
   0.008032046,
   0.008555777,
   0.009395149};
   gre = new TGraphErrors(6,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10231026 = new TH1F("Graph_Graph_Graph10231026","",100,999.074,2487.042);
   Graph_Graph_Graph10231026->SetMinimum(-0.4008705);
   Graph_Graph_Graph10231026->SetMaximum(-0.1021943);
   Graph_Graph_Graph10231026->SetDirectory(0);
   Graph_Graph_Graph10231026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10231026->SetLineColor(ci);
   Graph_Graph_Graph10231026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10231026->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10231026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10231026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10231026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10231026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10231026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10231026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10231026);
   
   gre->Draw("pl ");
   
   Double_t _fx1027[6] = {
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852};
   Double_t _fy1027[6] = {
   -0.3665914,
   -0.4342452,
   -0.1838807,
   -0.02833879,
   -0.01459609,
   0.021638};
   Double_t _fex1027[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[6] = {
   0.01098471,
   0.009560957,
   0.009183309,
   0.009438713,
   0.01010321,
   0.01128518};
   gre = new TGraphErrors(6,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,1004.26,2483.088);
   Graph_Graph1027->SetMinimum(-0.4914791);
   Graph_Graph1027->SetMaximum(0.08059612);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   gre->Draw("pl ");
   
   Double_t _fx1028[6] = {
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525};
   Double_t _fy1028[6] = {
   -0.3107747,
   -0.3934509,
   -0.1526507,
   -0.01857527,
   -0.001888213,
   0.02691211};
   Double_t _fex1028[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1028[6] = {
   0.009378732,
   0.008163751,
   0.00783685,
   0.008075552,
   0.008643557,
   0.009639573};
   gre = new TGraphErrors(6,_fx1028,_fy1028,_fex1028,_fey1028);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,1004.192,2482.737);
   Graph_Graph1028->SetMinimum(-0.4454313);
   Graph_Graph1028->SetMaximum(0.08036832);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw("pl ");
   
   Double_t _fx1029[6] = {
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1029[6] = {
   -0.4578313,
   -0.4981196,
   -0.2148995,
   -0.0619183,
   -0.03784886,
   0.01663339};
   Double_t _fex1029[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[6] = {
   0.007685775,
   0.006710462,
   0.006464503,
   0.006660782,
   0.007135973,
   0.007986024};
   gre = new TGraphErrors(6,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,1004.197,2482.815);
   Graph_Graph1029->SetMinimum(-0.557775);
   Graph_Graph1029->SetMaximum(0.07756436);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   gre->Draw("pl ");
   
   Double_t _fx1030[6] = {
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1030[6] = {
   -0.6655052,
   -0.6564017,
   -0.3270393,
   -0.1464115,
   -0.08626587,
   -0.03116973};
   Double_t _fex1030[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1030[6] = {
   0.005625967,
   0.004914132,
   0.004732782,
   0.004890917,
   0.005240215,
   0.005869202};
   gre = new TGraphErrors(6,_fx1030,_fy1030,_fex1030,_fey1030);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#990099");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#990099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(23);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","",100,1004.157,2482.655);
   Graph_Graph1030->SetMinimum(-0.7357142);
   Graph_Graph1030->SetMaximum(0.03928253);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
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
