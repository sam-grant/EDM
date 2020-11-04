void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1021[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1021[3] = {
   -1.663345,
   -1.487084,
   -1.334226};
   Double_t -30.000000 ppm_fex1021[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1021[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1021,-30.000000 ppm_fy1021,-30.000000 ppm_fex1021,-30.000000 ppm_fey1021);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1021 = new TH1F("Graph_mI30dO000000sPppm1021","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1021->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1021->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1021->SetDirectory(0);
   Graph_mI30dO000000sPppm1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1021->SetLineColor(ci);
   Graph_mI30dO000000sPppm1021->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1021->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1021->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1021->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1021->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1021->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1021->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1021->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1021->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1021->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1021->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1021->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1021->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1021);
   
   
   TF1 *quadLineFit1022 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1022->SetFillColor(19);
   quadLineFit1022->SetFillStyle(0);
   quadLineFit1022->SetLineWidth(2);
   quadLineFit1022->SetChisquare(0.3173129);
   quadLineFit1022->SetNDF(1);
   quadLineFit1022->GetXaxis()->SetLabelFont(42);
   quadLineFit1022->GetXaxis()->SetTitleOffset(1);
   quadLineFit1022->GetXaxis()->SetTitleFont(42);
   quadLineFit1022->GetYaxis()->SetLabelFont(42);
   quadLineFit1022->GetYaxis()->SetTitleFont(42);
   quadLineFit1022->SetParameter(0,-2.975921);
   quadLineFit1022->SetParError(0,0.1083858);
   quadLineFit1022->SetParLimits(0,0,0);
   quadLineFit1022->SetParameter(1,0.08227976);
   quadLineFit1022->SetParError(1,0.005996808);
   quadLineFit1022->SetParLimits(1,0,0);
   quadLineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1022);
   gre->Draw("ap");
   
   TF1 *quadLineFit1023 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1023->SetFillColor(19);
   quadLineFit1023->SetFillStyle(0);
   quadLineFit1023->SetLineWidth(2);
   quadLineFit1023->SetChisquare(0.3173129);
   quadLineFit1023->SetNDF(1);
   quadLineFit1023->GetXaxis()->SetLabelFont(42);
   quadLineFit1023->GetXaxis()->SetTitleOffset(1);
   quadLineFit1023->GetXaxis()->SetTitleFont(42);
   quadLineFit1023->GetYaxis()->SetLabelFont(42);
   quadLineFit1023->GetYaxis()->SetTitleFont(42);
   quadLineFit1023->SetParameter(0,-2.975921);
   quadLineFit1023->SetParError(0,0.1083858);
   quadLineFit1023->SetParLimits(0,0,0);
   quadLineFit1023->SetParameter(1,0.08227976);
   quadLineFit1023->SetParError(1,0.005996808);
   quadLineFit1023->SetParLimits(1,0,0);
   quadLineFit1023->Draw("same");
   
   Double_t 30.000000 ppm_fx1023[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1023[3] = {
   2.846878,
   2.540704,
   2.274223};
   Double_t 30.000000 ppm_fex1023[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1023[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,30.000000 ppm_fx1023,30.000000 ppm_fy1023,30.000000 ppm_fex1023,30.000000 ppm_fey1023);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1023 = new TH1F("Graph_30dO000000sPppm1023","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1023->SetMinimum(2.196604);
   Graph_30dO000000sPppm1023->SetMaximum(2.924497);
   Graph_30dO000000sPppm1023->SetDirectory(0);
   Graph_30dO000000sPppm1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1023->SetLineColor(ci);
   Graph_30dO000000sPppm1023->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1023->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1023->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1023->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1023->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1023->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1023->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1023);
   
   
   TF1 *quadLineFit1024 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1024->SetFillColor(19);
   quadLineFit1024->SetFillStyle(0);
   quadLineFit1024->SetLineColor(2);
   quadLineFit1024->SetLineWidth(2);
   quadLineFit1024->SetChisquare(0.9127229);
   quadLineFit1024->SetNDF(1);
   quadLineFit1024->GetXaxis()->SetLabelFont(42);
   quadLineFit1024->GetXaxis()->SetTitleOffset(1);
   quadLineFit1024->GetXaxis()->SetTitleFont(42);
   quadLineFit1024->GetYaxis()->SetLabelFont(42);
   quadLineFit1024->GetYaxis()->SetTitleFont(42);
   quadLineFit1024->SetParameter(0,5.130883);
   quadLineFit1024->SetParError(0,0.108552);
   quadLineFit1024->SetParLimits(0,0,0);
   quadLineFit1024->SetParameter(1,-0.1431638);
   quadLineFit1024->SetParError(1,0.006006076);
   quadLineFit1024->SetParLimits(1,0,0);
   quadLineFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1024);
   gre->Draw("p ");
   
   TF1 *quadLineFit1025 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1025->SetFillColor(19);
   quadLineFit1025->SetFillStyle(0);
   quadLineFit1025->SetLineColor(2);
   quadLineFit1025->SetLineWidth(2);
   quadLineFit1025->SetChisquare(0.9127229);
   quadLineFit1025->SetNDF(1);
   quadLineFit1025->GetXaxis()->SetLabelFont(42);
   quadLineFit1025->GetXaxis()->SetTitleOffset(1);
   quadLineFit1025->GetXaxis()->SetTitleFont(42);
   quadLineFit1025->GetYaxis()->SetLabelFont(42);
   quadLineFit1025->GetYaxis()->SetTitleFont(42);
   quadLineFit1025->SetParameter(0,5.130883);
   quadLineFit1025->SetParError(0,0.108552);
   quadLineFit1025->SetParLimits(0,0,0);
   quadLineFit1025->SetParameter(1,-0.1431638);
   quadLineFit1025->SetParError(1,0.006006076);
   quadLineFit1025->SetParLimits(1,0,0);
   quadLineFit1025->Draw("same");
   
   Double_t 0.000000 ppm_fx1025[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1025[3] = {
   0.5712273,
   0.5482001,
   0.495746};
   Double_t 0.000000 ppm_fex1025[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1025[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,0.000000 ppm_fx1025,0.000000 ppm_fy1025,0.000000 ppm_fex1025,0.000000 ppm_fey1025);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1025 = new TH1F("Graph_0dO000000sPppm1025","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1025->SetMinimum(0.4678444);
   Graph_0dO000000sPppm1025->SetMaximum(0.599129);
   Graph_0dO000000sPppm1025->SetDirectory(0);
   Graph_0dO000000sPppm1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1025->SetLineColor(ci);
   Graph_0dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1025->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1025);
   
   
   TF1 *quadLineFit1026 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1026->SetFillColor(19);
   quadLineFit1026->SetFillStyle(0);
   quadLineFit1026->SetLineColor(3);
   quadLineFit1026->SetLineWidth(2);
   quadLineFit1026->SetChisquare(0.5016732);
   quadLineFit1026->SetNDF(1);
   quadLineFit1026->GetXaxis()->SetLabelFont(42);
   quadLineFit1026->GetXaxis()->SetTitleOffset(1);
   quadLineFit1026->GetXaxis()->SetTitleFont(42);
   quadLineFit1026->GetYaxis()->SetLabelFont(42);
   quadLineFit1026->GetYaxis()->SetTitleFont(42);
   quadLineFit1026->SetParameter(0,0.8780569);
   quadLineFit1026->SetParError(0,0.1083833);
   quadLineFit1026->SetParLimits(0,0,0);
   quadLineFit1026->SetParameter(1,-0.01887032);
   quadLineFit1026->SetParError(1,0.005996665);
   quadLineFit1026->SetParLimits(1,0,0);
   quadLineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1026);
   gre->Draw("p ");
   
   TF1 *quadLineFit1027 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1027->SetFillColor(19);
   quadLineFit1027->SetFillStyle(0);
   quadLineFit1027->SetLineColor(3);
   quadLineFit1027->SetLineWidth(2);
   quadLineFit1027->SetChisquare(0.5016732);
   quadLineFit1027->SetNDF(1);
   quadLineFit1027->GetXaxis()->SetLabelFont(42);
   quadLineFit1027->GetXaxis()->SetTitleOffset(1);
   quadLineFit1027->GetXaxis()->SetTitleFont(42);
   quadLineFit1027->GetYaxis()->SetLabelFont(42);
   quadLineFit1027->GetYaxis()->SetTitleFont(42);
   quadLineFit1027->SetParameter(0,0.8780569);
   quadLineFit1027->SetParError(0,0.1083833);
   quadLineFit1027->SetParLimits(0,0,0);
   quadLineFit1027->SetParameter(1,-0.01887032);
   quadLineFit1027->SetParError(1,0.005996665);
   quadLineFit1027->SetParLimits(1,0,0);
   quadLineFit1027->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
