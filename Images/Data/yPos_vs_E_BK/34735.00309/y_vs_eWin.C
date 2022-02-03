void y_vs_eWin()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 17:02:00 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-826.8751,57.5,6811.875,82.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[12] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250,
   3750,
   4250,
   4750,
   5250,
   5750};
   Double_t Graph0_fy1013[12] = {
   74.29419,
   74.71558,
   74.48999,
   74.61472,
   75.09894,
   74.79994,
   72.7,
   68.50418,
   70.19758,
   70.03736,
   71.83771,
   65.78704};
   Double_t Graph0_fex1013[12] = {
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
   Double_t Graph0_fey1013[12] = {
   0.1137029,
   0.1444836,
   0.1402127,
   0.1436779,
   0.1698401,
   0.3075115,
   1.297131,
   1.344349,
   1.793902,
   1.908213,
   2.027755,
   2.788287};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";E [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,0,6300);
   Graph_Graph01013->SetMinimum(60);
   Graph_Graph01013->SetMaximum(80);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("E [MeV]: in range E #minus 250 < E < E #plus 250 MeV");
   Graph_Graph01013->GetXaxis()->SetRange(0,96);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#LT y_{calo} #GT [mm]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1014[12] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250,
   3750,
   4250,
   4750,
   5250,
   5750};
   Double_t Graph1_fy1014[12] = {
   74.55944,
   75.16556,
   74.91009,
   75.01216,
   75.41892,
   74.89107,
   73.91153,
   68.61401,
   68.38223,
   67.2897,
   71.83604,
   59.22167};
   Double_t Graph1_fex1014[12] = {
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
   Double_t Graph1_fey1014[12] = {
   0.1805851,
   0.1849931,
   0.1768649,
   0.1809279,
   0.2150511,
   0.4126622,
   2.451257,
   2.840047,
   3.114795,
   3.011359,
   4.565293,
   1.38227};
   gre = new TGraphErrors(12,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,0,6300);
   Graph_Graph11014->SetMinimum(55.98321);
   Graph_Graph11014->SetMaximum(78.25752);
   Graph_Graph11014->SetDirectory(0);
   Graph_Graph11014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11014->SetLineColor(ci);
   Graph_Graph11014->GetXaxis()->SetLabelFont(42);
   Graph_Graph11014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11014->GetXaxis()->SetTitleFont(42);
   Graph_Graph11014->GetYaxis()->SetLabelFont(42);
   Graph_Graph11014->GetYaxis()->SetTitleFont(42);
   Graph_Graph11014->GetZaxis()->SetLabelFont(42);
   Graph_Graph11014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11014);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1015[12] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250,
   3750,
   4250,
   4750,
   5250,
   5750};
   Double_t Graph2_fy1015[12] = {
   74.45414,
   75.23217,
   74.9475,
   75.0729,
   75.37445,
   74.76725,
   72.20224,
   68.23017,
   66.98324,
   67.16547,
   71.83604,
   58.56601};
   Double_t Graph2_fex1015[12] = {
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
   Double_t Graph2_fey1015[12] = {
   0.1913862,
   0.1960975,
   0.1881603,
   0.191484,
   0.2274772,
   0.4364282,
   2.618426,
   3.830686,
   2.947862,
   3.404588,
   4.565293,
   1.495155};
   gre = new TGraphErrors(12,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21015 = new TH1F("Graph_Graph21015","Graph",100,0,6300);
   Graph_Graph21015->SetMinimum(55.13781);
   Graph_Graph21015->SetMaximum(78.33438);
   Graph_Graph21015->SetDirectory(0);
   Graph_Graph21015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21015->SetLineColor(ci);
   Graph_Graph21015->GetXaxis()->SetLabelFont(42);
   Graph_Graph21015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21015->GetXaxis()->SetTitleFont(42);
   Graph_Graph21015->GetYaxis()->SetLabelFont(42);
   Graph_Graph21015->GetYaxis()->SetTitleFont(42);
   Graph_Graph21015->GetZaxis()->SetLabelFont(42);
   Graph_Graph21015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21015);
   
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
