void S18_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:36:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-104.9688,3125,71.32946);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1337[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1337[9] = {
   -62.4654,
   -36.63886,
   -33.73381,
   -31.32912,
   -30.76402,
   -30.56683,
   -19.80757,
   -25.4429,
   -32.38147};
   Double_t Graph0_fex1337[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1337[9] = {
   7.4058,
   3.851464,
   2.946117,
   2.595428,
   2.513123,
   2.613067,
   2.797585,
   3.090352,
   3.51299};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1337,Graph0_fy1337,Graph0_fex1337,Graph0_fey1337);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01337 = new TH1F("Graph_Graph01337","S18",100,425,2825);
   Graph_Graph01337->SetMinimum(-87.339);
   Graph_Graph01337->SetMaximum(53.69963);
   Graph_Graph01337->SetDirectory(0);
   Graph_Graph01337->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01337->SetLineColor(ci);
   Graph_Graph01337->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01337->GetXaxis()->CenterTitle(true);
   Graph_Graph01337->GetXaxis()->SetLabelFont(42);
   Graph_Graph01337->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01337->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01337->GetXaxis()->SetTitleFont(42);
   Graph_Graph01337->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01337->GetYaxis()->CenterTitle(true);
   Graph_Graph01337->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01337->GetYaxis()->SetLabelFont(42);
   Graph_Graph01337->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01337->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01337->GetYaxis()->SetTitleFont(42);
   Graph_Graph01337->GetZaxis()->SetLabelFont(42);
   Graph_Graph01337->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01337->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01337);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1338[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1338[9] = {
   40.15551,
   28.56305,
   21.88204,
   17.4625,
   14.58279,
   12.23965,
   7.26278,
   7.349427,
   5.463372};
   Double_t Graph1_fex1338[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1338[9] = {
   2.804192,
   1.440554,
   1.092668,
   0.9565643,
   0.9219883,
   0.9510242,
   1.012819,
   1.116781,
   1.280488};
   gre = new TGraphErrors(9,Graph1_fx1338,Graph1_fy1338,Graph1_fex1338,Graph1_fey1338);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11338 = new TH1F("Graph_Graph11338","Graph",100,425,2825);
   Graph_Graph11338->SetMinimum(0.3052015);
   Graph_Graph11338->SetMaximum(46.83739);
   Graph_Graph11338->SetDirectory(0);
   Graph_Graph11338->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11338->SetLineColor(ci);
   Graph_Graph11338->GetXaxis()->SetLabelFont(42);
   Graph_Graph11338->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11338->GetXaxis()->SetTitleFont(42);
   Graph_Graph11338->GetYaxis()->SetLabelFont(42);
   Graph_Graph11338->GetYaxis()->SetTitleFont(42);
   Graph_Graph11338->GetZaxis()->SetLabelFont(42);
   Graph_Graph11338->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11338->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11338);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1339[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1339[9] = {
   0.2550027,
   -0.1984649,
   -0.7387477,
   -0.6621714,
   -0.3777253,
   -0.2156829,
   -0.1779007,
   -0.1020885,
   -0.0113523};
   Double_t Graph2_fex1339[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1339[9] = {
   0.04271018,
   0.02229555,
   0.01711426,
   0.01512881,
   0.01467348,
   0.0153084,
   0.01644313,
   0.01819282,
   0.02065119};
   gre = new TGraphErrors(9,Graph2_fx1339,Graph2_fy1339,Graph2_fex1339,Graph2_fey1339);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21339 = new TH1F("Graph_Graph21339","Graph",100,425,2825);
   Graph_Graph21339->SetMinimum(-0.8612195);
   Graph_Graph21339->SetMaximum(0.4030703);
   Graph_Graph21339->SetDirectory(0);
   Graph_Graph21339->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21339->SetLineColor(ci);
   Graph_Graph21339->GetXaxis()->SetLabelFont(42);
   Graph_Graph21339->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21339->GetXaxis()->SetTitleFont(42);
   Graph_Graph21339->GetYaxis()->SetLabelFont(42);
   Graph_Graph21339->GetYaxis()->SetTitleFont(42);
   Graph_Graph21339->GetZaxis()->SetLabelFont(42);
   Graph_Graph21339->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21339->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21339);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1d","h");
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
