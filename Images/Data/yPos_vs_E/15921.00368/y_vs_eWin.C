void y_vs_eWin()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 15:56:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-826.8751,60,6811.875,100);
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
   74.59468,
   74.66694,
   75.04606,
   74.83413,
   74.84391,
   75.23489,
   73.86788,
   73.09654,
   72.84059,
   72.47957,
   72.62499,
   74.31627};
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
   0.10351,
   0.1282501,
   0.1298417,
   0.1319459,
   0.1508882,
   0.2336211,
   0.4487035,
   0.5311728,
   0.5292656,
   0.6054162,
   0.6909588,
   0.8748704};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";E [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,0,6300);
   Graph_Graph01013->SetMinimum(64);
   Graph_Graph01013->SetMaximum(96);
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
   
   Double_t Graph1_fx1014[10] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250,
   3750,
   4250,
   4750};
   Double_t Graph1_fy1014[10] = {
   75.54222,
   75.26706,
   75.69813,
   75.20185,
   75.40041,
   76.55151,
   72.59645,
   79.1203,
   73.16981,
   83.11516};
   Double_t Graph1_fex1014[10] = {
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
   Double_t Graph1_fey1014[10] = {
   0.184425,
   0.1836652,
   0.1765151,
   0.180683,
   0.2172864,
   0.4071049,
   2.127763,
   4.101114,
   7.295629,
   4.815773};
   gre = new TGraphErrors(10,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,0,5200);
   Graph_Graph11014->SetMinimum(63.66851);
   Graph_Graph11014->SetMaximum(90.1366);
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
   
   Double_t Graph2_fx1015[10] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250,
   3750,
   4250,
   4750};
   Double_t Graph2_fy1015[10] = {
   75.38895,
   75.23791,
   75.6556,
   75.16287,
   75.37257,
   76.50622,
   72.83084,
   80.56836,
   74.16467,
   86.1094};
   Double_t Graph2_fex1015[10] = {
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
   Double_t Graph2_fey1015[10] = {
   0.1956362,
   0.1945166,
   0.1871048,
   0.191371,
   0.2293617,
   0.4302773,
   2.310137,
   4.288579,
   7.719768,
   4.897759};
   gre = new TGraphErrors(10,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21015 = new TH1F("Graph_Graph21015","Graph",100,0,5200);
   Graph_Graph21015->SetMinimum(63.98868);
   Graph_Graph21015->SetMaximum(93.46338);
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
