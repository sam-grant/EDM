void y_vs_eWin_zoom()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 17:02:00 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-225,73.7625,3225,76.1375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1016[6] = {
   74.29419,
   74.71558,
   74.48999,
   74.61472,
   75.09894,
   74.79994};
   Double_t Graph0_fex1016[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1016[6] = {
   0.1137029,
   0.1444836,
   0.1402127,
   0.1436779,
   0.1698401,
   0.3075115};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";E [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,0,3000);
   Graph_Graph01016->SetMinimum(74);
   Graph_Graph01016->SetMaximum(75.9);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("E [MeV]: in range E #minus 250 < E < E #plus 250 MeV");
   Graph_Graph01016->GetXaxis()->SetRange(5,96);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#LT y_{calo} #GT [mm]");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1017[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph1_fy1017[6] = {
   74.55944,
   75.16556,
   74.91009,
   75.01216,
   75.41892,
   74.89107};
   Double_t Graph1_fex1017[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1017[6] = {
   0.1805851,
   0.1849931,
   0.1768649,
   0.1809279,
   0.2150511,
   0.4126622};
   gre = new TGraphErrors(6,Graph1_fx1017,Graph1_fy1017,Graph1_fex1017,Graph1_fey1017);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11017 = new TH1F("Graph_Graph11017","Graph",100,0,3000);
   Graph_Graph11017->SetMinimum(74.25335);
   Graph_Graph11017->SetMaximum(75.75948);
   Graph_Graph11017->SetDirectory(0);
   Graph_Graph11017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11017->SetLineColor(ci);
   Graph_Graph11017->GetXaxis()->SetLabelFont(42);
   Graph_Graph11017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11017->GetXaxis()->SetTitleFont(42);
   Graph_Graph11017->GetYaxis()->SetLabelFont(42);
   Graph_Graph11017->GetYaxis()->SetTitleFont(42);
   Graph_Graph11017->GetZaxis()->SetLabelFont(42);
   Graph_Graph11017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11017);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1018[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph2_fy1018[6] = {
   74.45414,
   75.23217,
   74.9475,
   75.0729,
   75.37445,
   74.76725};
   Double_t Graph2_fex1018[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1018[6] = {
   0.1913862,
   0.1960975,
   0.1881603,
   0.191484,
   0.2274772,
   0.4364282};
   gre = new TGraphErrors(6,Graph2_fx1018,Graph2_fy1018,Graph2_fex1018,Graph2_fey1018);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21018 = new TH1F("Graph_Graph21018","Graph",100,0,3000);
   Graph_Graph21018->SetMinimum(74.12884);
   Graph_Graph21018->SetMaximum(75.73585);
   Graph_Graph21018->SetDirectory(0);
   Graph_Graph21018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21018->SetLineColor(ci);
   Graph_Graph21018->GetXaxis()->SetLabelFont(42);
   Graph_Graph21018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21018->GetXaxis()->SetTitleFont(42);
   Graph_Graph21018->GetYaxis()->SetLabelFont(42);
   Graph_Graph21018->GetYaxis()->SetTitleFont(42);
   Graph_Graph21018->GetZaxis()->SetLabelFont(42);
   Graph_Graph21018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21018);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.45,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","t > 0 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t > 24 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","t > 30 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
