void A_vs_p_min_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:25:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-300.3,-0.09875,3318.7,0.28875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1011[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t A_vs_p_fy1011[15] = {
   0.1955485,
   0.1994305,
   0.2097895,
   0.2183744,
   0.2181974,
   0.2129909,
   0.2078771,
   0.2015232,
   0.1919653,
   0.1817725,
   0.1656291,
   0.1585733,
   0.1306159,
   0.1064111,
   0.05921124};
   Double_t A_vs_p_fex1011[15] = {
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
   Double_t A_vs_p_fey1011[15] = {
   0.00300686,
   0.002991174,
   0.002952812,
   0.002887979,
   0.002801588,
   0.00274871,
   0.002737452,
   0.002766557,
   0.002843715,
   0.002981298,
   0.003190367,
   0.003507893,
   0.00399981,
   0.00485674,
   0.006651421};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1011,A_vs_p_fy1011,A_vs_p_fex1011,A_vs_p_fey1011);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1011 = new TH1F("Graph_A_vs_p1011","",100,0,3080);
   Graph_A_vs_p1011->SetMinimum(-0.06);
   Graph_A_vs_p1011->SetMaximum(0.25);
   Graph_A_vs_p1011->SetDirectory(0);
   Graph_A_vs_p1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1011->SetLineColor(ci);
   Graph_A_vs_p1011->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1011->GetXaxis()->SetRange(3,96);
   Graph_A_vs_p1011->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1011->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1011->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_A_vs_p1011->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1011->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1011->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1011->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1011->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1011->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1011->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1011);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1012[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S0S12S18_A_vs_p_fy1012[15] = {
   0.1099219,
   0.1101382,
   0.1192519,
   0.1428939,
   0.1645869,
   0.1498671,
   0.1540656,
   0.1552532,
   0.1504629,
   0.1414747,
   0.1273847,
   0.1303217,
   0.1001877,
   0.06176508,
   -0.007979628};
   Double_t S0S12S18_A_vs_p_fex1012[15] = {
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
   Double_t S0S12S18_A_vs_p_fey1012[15] = {
   0.01051336,
   0.01051336,
   0.01048494,
   0.01033172,
   0.01023541,
   0.01029163,
   0.01051333,
   0.01093711,
   0.01161239,
   0.01263313,
   0.01410953,
   0.01622553,
   0.0193006,
   0.02449034,
   0.04021262};
   gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1012,S0S12S18_A_vs_p_fy1012,S0S12S18_A_vs_p_fex1012,S0S12S18_A_vs_p_fey1012);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1012 = new TH1F("Graph_S0S12S18_A_vs_p1012","S0S12S18",100,0,3080);
   Graph_S0S12S18_A_vs_p1012->SetMinimum(-0.07049371);
   Graph_S0S12S18_A_vs_p1012->SetMaximum(0.1971238);
   Graph_S0S12S18_A_vs_p1012->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1012->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->SetRange(3,96);
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1012->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1012->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1012->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1012->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1012);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
