void QuadCTAGs()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 01:22:32 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04581371,562500,0.08035061,4937500);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph0_fy1020[4] = {
   1334549,
   2096121,
   1954344,
   2049274};
   Double_t Graph0_fex1020[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1020[4] = {
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];Integrated CTAGs / setting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","",100,0.0492674,0.07344323);
   Graph_Graph01020->SetMinimum(1000000);
   Graph_Graph01020->SetMaximum(4500000);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("Integrated CTAGs / setting");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1021[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph1_fy1021[4] = {
   2611998,
   1288589,
   2924385,
   1983781};
   Double_t Graph1_fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1021[4] = {
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(4,Graph1_fx1021,Graph1_fy1021,Graph1_fex1021,Graph1_fey1021);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11021 = new TH1F("Graph_Graph11021","Graph",100,0.0492674,0.07344323);
   Graph_Graph11021->SetMinimum(1125009);
   Graph_Graph11021->SetMaximum(3087965);
   Graph_Graph11021->SetDirectory(0);
   Graph_Graph11021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11021->SetLineColor(ci);
   Graph_Graph11021->GetXaxis()->SetLabelFont(42);
   Graph_Graph11021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11021->GetXaxis()->SetTitleFont(42);
   Graph_Graph11021->GetYaxis()->SetLabelFont(42);
   Graph_Graph11021->GetYaxis()->SetTitleFont(42);
   Graph_Graph11021->GetZaxis()->SetLabelFont(42);
   Graph_Graph11021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11021);
   
   gre->Draw("pl ");
   
   Double_t Graph2_fx1022[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t Graph2_fy1022[3] = {
   1761429,
   3852797,
   2298394};
   Double_t Graph2_fex1022[3] = {
   0,
   0,
   0};
   Double_t Graph2_fey1022[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph2_fx1022,Graph2_fy1022,Graph2_fex1022,Graph2_fey1022);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21022 = new TH1F("Graph_Graph21022","Graph",100,0.0492674,0.07344323);
   Graph_Graph21022->SetMinimum(1552292);
   Graph_Graph21022->SetMaximum(4061934);
   Graph_Graph21022->SetDirectory(0);
   Graph_Graph21022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21022->SetLineColor(ci);
   Graph_Graph21022->GetXaxis()->SetLabelFont(42);
   Graph_Graph21022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21022->GetXaxis()->SetTitleFont(42);
   Graph_Graph21022->GetYaxis()->SetLabelFont(42);
   Graph_Graph21022->GetYaxis()->SetTitleFont(42);
   Graph_Graph21022->GetZaxis()->SetLabelFont(42);
   Graph_Graph21022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21022);
   
   gre->Draw("pl ");
   
   Double_t Graph3_fx1023[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph3_fy1023[4] = {
   2619615,
   2298296,
   2392819,
   1864351};
   Double_t Graph3_fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1023[4] = {
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(4,Graph3_fx1023,Graph3_fy1023,Graph3_fex1023,Graph3_fey1023);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31023 = new TH1F("Graph_Graph31023","Graph",100,0.0492674,0.07344323);
   Graph_Graph31023->SetMinimum(1788825);
   Graph_Graph31023->SetMaximum(2695141);
   Graph_Graph31023->SetDirectory(0);
   Graph_Graph31023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31023->SetLineColor(ci);
   Graph_Graph31023->GetXaxis()->SetLabelFont(42);
   Graph_Graph31023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31023->GetXaxis()->SetTitleFont(42);
   Graph_Graph31023->GetYaxis()->SetLabelFont(42);
   Graph_Graph31023->GetYaxis()->SetTitleFont(42);
   Graph_Graph31023->GetZaxis()->SetLabelFont(42);
   Graph_Graph31023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31023);
   
   gre->Draw("pl ");
   
   Double_t Graph4_fx1024[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph4_fy1024[4] = {
   1614611,
   1582426,
   2804680,
   4292010};
   Double_t Graph4_fex1024[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1024[4] = {
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(4,Graph4_fx1024,Graph4_fy1024,Graph4_fex1024,Graph4_fey1024);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41024 = new TH1F("Graph_Graph41024","Graph",100,0.0492674,0.07344323);
   Graph_Graph41024->SetMinimum(1311468);
   Graph_Graph41024->SetMaximum(4562968);
   Graph_Graph41024->SetDirectory(0);
   Graph_Graph41024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41024->SetLineColor(ci);
   Graph_Graph41024->GetXaxis()->SetLabelFont(42);
   Graph_Graph41024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41024->GetXaxis()->SetTitleFont(42);
   Graph_Graph41024->GetYaxis()->SetLabelFont(42);
   Graph_Graph41024->GetYaxis()->SetTitleFont(42);
   Graph_Graph41024->GetZaxis()->SetLabelFont(42);
   Graph_Graph41024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41024);
   
   gre->Draw("pl ");
   
   Double_t Graph5_fx1025[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph5_fy1025[3] = {
   1619373,
   2692482,
   2360453};
   Double_t Graph5_fex1025[3] = {
   0,
   0,
   0};
   Double_t Graph5_fey1025[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph5_fx1025,Graph5_fy1025,Graph5_fex1025,Graph5_fey1025);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph51025 = new TH1F("Graph_Graph51025","Graph",100,0.05016026,0.06362179);
   Graph_Graph51025->SetMinimum(1512062);
   Graph_Graph51025->SetMaximum(2799793);
   Graph_Graph51025->SetDirectory(0);
   Graph_Graph51025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph51025->SetLineColor(ci);
   Graph_Graph51025->GetXaxis()->SetLabelFont(42);
   Graph_Graph51025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph51025->GetXaxis()->SetTitleFont(42);
   Graph_Graph51025->GetYaxis()->SetLabelFont(42);
   Graph_Graph51025->GetYaxis()->SetTitleFont(42);
   Graph_Graph51025->GetZaxis()->SetLabelFont(42);
   Graph_Graph51025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph51025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51025);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","  #minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
