void QuadFitRes()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 20 23:23:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04581371,-0.0625,0.08035061,0.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph0_fy1014[4] = {
   -0.002960202,
   0.00681544,
   -0.004540854,
   0.0008188546};
   Double_t Graph0_fex1014[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1014[4] = {
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];Fit residual [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0.0492674,0.07344323);
   Graph_Graph01014->SetMinimum(-0.05);
   Graph_Graph01014->SetMaximum(0.05);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("Fit residual [mm]");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1015[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t Graph1_fy1015[3] = {
   -0.002575028,
   0.004319271,
   -0.002720769};
   Double_t Graph1_fex1015[3] = {
   0,
   0,
   0};
   Double_t Graph1_fey1015[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph1_fx1015,Graph1_fy1015,Graph1_fex1015,Graph1_fey1015);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11015 = new TH1F("Graph_Graph11015","Graph",100,0.05396825,0.07301588);
   Graph_Graph11015->SetMinimum(-0.003424773);
   Graph_Graph11015->SetMaximum(0.005023274);
   Graph_Graph11015->SetDirectory(0);
   Graph_Graph11015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11015->SetLineColor(ci);
   Graph_Graph11015->GetXaxis()->SetLabelFont(42);
   Graph_Graph11015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11015->GetXaxis()->SetTitleFont(42);
   Graph_Graph11015->GetYaxis()->SetLabelFont(42);
   Graph_Graph11015->GetYaxis()->SetTitleFont(42);
   Graph_Graph11015->GetZaxis()->SetLabelFont(42);
   Graph_Graph11015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11015);
   
   gre->Draw("pl ");
   
   Double_t Graph2_fx1016[1] = {
   0.0625};
   Double_t Graph2_fy1016[1] = {
   0};
   Double_t Graph2_fex1016[1] = {
   0};
   Double_t Graph2_fey1016[1] = {
   0};
   gre = new TGraphErrors(1,Graph2_fx1016,Graph2_fy1016,Graph2_fex1016,Graph2_fey1016);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21016 = new TH1F("Graph_Graph21016","Graph",100,0,1.1625);
   Graph_Graph21016->SetMinimum(0);
   Graph_Graph21016->SetMaximum(1.1);
   Graph_Graph21016->SetDirectory(0);
   Graph_Graph21016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21016->SetLineColor(ci);
   Graph_Graph21016->GetXaxis()->SetLabelFont(42);
   Graph_Graph21016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21016->GetXaxis()->SetTitleFont(42);
   Graph_Graph21016->GetYaxis()->SetLabelFont(42);
   Graph_Graph21016->GetYaxis()->SetTitleFont(42);
   Graph_Graph21016->GetZaxis()->SetLabelFont(42);
   Graph_Graph21016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21016);
   
   gre->Draw("pl ");
   
   Double_t Graph3_fx1017[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t Graph3_fy1017[3] = {
   -0.01173939,
   0.02284765,
   -0.0114557};
   Double_t Graph3_fex1017[3] = {
   0,
   0,
   0};
   Double_t Graph3_fey1017[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph3_fx1017,Graph3_fy1017,Graph3_fex1017,Graph3_fey1017);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31017 = new TH1F("Graph_Graph31017","Graph",100,0.05396825,0.07301588);
   Graph_Graph31017->SetMinimum(-0.0151981);
   Graph_Graph31017->SetMaximum(0.02630636);
   Graph_Graph31017->SetDirectory(0);
   Graph_Graph31017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31017->SetLineColor(ci);
   Graph_Graph31017->GetXaxis()->SetLabelFont(42);
   Graph_Graph31017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31017->GetXaxis()->SetTitleFont(42);
   Graph_Graph31017->GetYaxis()->SetLabelFont(42);
   Graph_Graph31017->GetYaxis()->SetTitleFont(42);
   Graph_Graph31017->GetZaxis()->SetLabelFont(42);
   Graph_Graph31017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31017);
   
   gre->Draw("pl ");
   
   Double_t Graph4_fx1018[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t Graph4_fy1018[3] = {
   0.005066494,
   -0.01008504,
   0.005305477};
   Double_t Graph4_fex1018[3] = {
   0,
   0,
   0};
   Double_t Graph4_fey1018[3] = {
   0,
   0,
   0};
   gre = new TGraphErrors(3,Graph4_fx1018,Graph4_fy1018,Graph4_fex1018,Graph4_fey1018);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41018 = new TH1F("Graph_Graph41018","Graph",100,0.05396825,0.07301588);
   Graph_Graph41018->SetMinimum(-0.0116241);
   Graph_Graph41018->SetMaximum(0.006844529);
   Graph_Graph41018->SetDirectory(0);
   Graph_Graph41018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41018->SetLineColor(ci);
   Graph_Graph41018->GetXaxis()->SetLabelFont(42);
   Graph_Graph41018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41018->GetXaxis()->SetTitleFont(42);
   Graph_Graph41018->GetYaxis()->SetLabelFont(42);
   Graph_Graph41018->GetYaxis()->SetTitleFont(42);
   Graph_Graph41018->GetZaxis()->SetLabelFont(42);
   Graph_Graph41018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41018);
   
   gre->Draw("pl ");
   
   Double_t Graph5_fx1019[2] = {
   0.0625,
   0.05555556};
   Double_t Graph5_fy1019[2] = {
   -5.161667e-10,
   -4.866791e-10};
   Double_t Graph5_fex1019[2] = {
   0,
   0};
   Double_t Graph5_fey1019[2] = {
   0,
   0};
   gre = new TGraphErrors(2,Graph5_fx1019,Graph5_fy1019,Graph5_fex1019,Graph5_fey1019);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph51019 = new TH1F("Graph_Graph51019","Graph",100,0.05486111,0.06319444);
   Graph_Graph51019->SetMinimum(-5.191154e-10);
   Graph_Graph51019->SetMaximum(-4.837304e-10);
   Graph_Graph51019->SetDirectory(0);
   Graph_Graph51019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph51019->SetLineColor(ci);
   Graph_Graph51019->GetXaxis()->SetLabelFont(42);
   Graph_Graph51019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph51019->GetXaxis()->SetTitleFont(42);
   Graph_Graph51019->GetYaxis()->SetLabelFont(42);
   Graph_Graph51019->GetYaxis()->SetTitleFont(42);
   Graph_Graph51019->GetZaxis()->SetLabelFont(42);
   Graph_Graph51019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph51019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51019);
   
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
