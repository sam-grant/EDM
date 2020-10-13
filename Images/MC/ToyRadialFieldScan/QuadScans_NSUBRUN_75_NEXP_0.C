void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 20:04:18 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1021[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1021[2] = {
   -1.629479,
   -1.319504};
   Double_t -30.000000 ppm_fex1021[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1021[2] = {
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1021,-30.000000 ppm_fy1021,-30.000000 ppm_fex1021,-30.000000 ppm_fey1021);
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
   quadLineFit1022->SetChisquare(3.120541e-18);
   quadLineFit1022->SetNDF(0);
   quadLineFit1022->GetXaxis()->SetLabelFont(42);
   quadLineFit1022->GetXaxis()->SetTitleOffset(1);
   quadLineFit1022->GetXaxis()->SetTitleFont(42);
   quadLineFit1022->GetYaxis()->SetLabelFont(42);
   quadLineFit1022->GetYaxis()->SetTitleFont(42);
   quadLineFit1022->SetParameter(0,-2.86938);
   quadLineFit1022->SetParError(0,0.1086052);
   quadLineFit1022->SetParLimits(0,0,0);
   quadLineFit1022->SetParameter(1,0.07749381);
   quadLineFit1022->SetParError(1,0.00599672);
   quadLineFit1022->SetParLimits(1,0,0);
   quadLineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1022);
   gre->Draw("ap");
   
   TF1 *quadLineFit1023 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1023->SetFillColor(19);
   quadLineFit1023->SetFillStyle(0);
   quadLineFit1023->SetLineWidth(2);
   quadLineFit1023->SetChisquare(3.120541e-18);
   quadLineFit1023->SetNDF(0);
   quadLineFit1023->GetXaxis()->SetLabelFont(42);
   quadLineFit1023->GetXaxis()->SetTitleOffset(1);
   quadLineFit1023->GetXaxis()->SetTitleFont(42);
   quadLineFit1023->GetYaxis()->SetLabelFont(42);
   quadLineFit1023->GetYaxis()->SetTitleFont(42);
   quadLineFit1023->SetParameter(0,-2.86938);
   quadLineFit1023->SetParError(0,0.1086052);
   quadLineFit1023->SetParLimits(0,0,0);
   quadLineFit1023->SetParameter(1,0.07749381);
   quadLineFit1023->SetParError(1,0.00599672);
   quadLineFit1023->SetParLimits(1,0,0);
   quadLineFit1023->Draw("same");
   
   Double_t -10.000000 ppm_fx1023[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1023[2] = {
   -0.15381,
   -0.1021537};
   Double_t -10.000000 ppm_fex1023[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1023[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1023,-10.000000 ppm_fy1023,-10.000000 ppm_fex1023,-10.000000 ppm_fey1023);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1023 = new TH1F("Graph_mI10dO000000sPppm1023","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1023->SetMinimum(-0.1793292);
   Graph_mI10dO000000sPppm1023->SetMaximum(-0.07663448);
   Graph_mI10dO000000sPppm1023->SetDirectory(0);
   Graph_mI10dO000000sPppm1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1023->SetLineColor(ci);
   Graph_mI10dO000000sPppm1023->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1023->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1023->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1023->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1023->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1023->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1023->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1023);
   
   
   TF1 *quadLineFit1024 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1024->SetFillColor(19);
   quadLineFit1024->SetFillStyle(0);
   quadLineFit1024->SetLineColor(2);
   quadLineFit1024->SetLineWidth(2);
   quadLineFit1024->SetChisquare(7.774897e-22);
   quadLineFit1024->SetNDF(0);
   quadLineFit1024->GetXaxis()->SetLabelFont(42);
   quadLineFit1024->GetXaxis()->SetTitleOffset(1);
   quadLineFit1024->GetXaxis()->SetTitleFont(42);
   quadLineFit1024->GetYaxis()->SetLabelFont(42);
   quadLineFit1024->GetYaxis()->SetTitleFont(42);
   quadLineFit1024->SetParameter(0,-0.3604354);
   quadLineFit1024->SetParError(0,0.1086052);
   quadLineFit1024->SetParLimits(0,0,0);
   quadLineFit1024->SetParameter(1,0.01291409);
   quadLineFit1024->SetParError(1,0.005996719);
   quadLineFit1024->SetParLimits(1,0,0);
   quadLineFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1024);
   gre->Draw("p ");
   
   TF1 *quadLineFit1025 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1025->SetFillColor(19);
   quadLineFit1025->SetFillStyle(0);
   quadLineFit1025->SetLineColor(2);
   quadLineFit1025->SetLineWidth(2);
   quadLineFit1025->SetChisquare(7.774897e-22);
   quadLineFit1025->SetNDF(0);
   quadLineFit1025->GetXaxis()->SetLabelFont(42);
   quadLineFit1025->GetXaxis()->SetTitleOffset(1);
   quadLineFit1025->GetXaxis()->SetTitleFont(42);
   quadLineFit1025->GetYaxis()->SetLabelFont(42);
   quadLineFit1025->GetYaxis()->SetTitleFont(42);
   quadLineFit1025->SetParameter(0,-0.3604354);
   quadLineFit1025->SetParError(0,0.1086052);
   quadLineFit1025->SetParLimits(0,0,0);
   quadLineFit1025->SetParameter(1,0.01291409);
   quadLineFit1025->SetParError(1,0.005996719);
   quadLineFit1025->SetParLimits(1,0,0);
   quadLineFit1025->Draw("same");
   
   Double_t 10.000000 ppm_fx1025[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1025[2] = {
   1.35959,
   1.066677};
   Double_t 10.000000 ppm_fex1025[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1025[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,10.000000 ppm_fx1025,10.000000 ppm_fy1025,10.000000 ppm_fex1025,10.000000 ppm_fey1025);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1025 = new TH1F("Graph_10dO000000sPppm1025","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1025->SetMinimum(1.017032);
   Graph_10dO000000sPppm1025->SetMaximum(1.409235);
   Graph_10dO000000sPppm1025->SetDirectory(0);
   Graph_10dO000000sPppm1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1025->SetLineColor(ci);
   Graph_10dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1025->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1025);
   
   
   TF1 *quadLineFit1026 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1026->SetFillColor(19);
   quadLineFit1026->SetFillStyle(0);
   quadLineFit1026->SetLineColor(3);
   quadLineFit1026->SetLineWidth(2);
   quadLineFit1026->SetChisquare(1.523235e-20);
   quadLineFit1026->SetNDF(0);
   quadLineFit1026->GetXaxis()->SetLabelFont(42);
   quadLineFit1026->GetXaxis()->SetTitleOffset(1);
   quadLineFit1026->GetXaxis()->SetTitleFont(42);
   quadLineFit1026->GetYaxis()->SetLabelFont(42);
   quadLineFit1026->GetYaxis()->SetTitleFont(42);
   quadLineFit1026->SetParameter(0,2.531245);
   quadLineFit1026->SetParError(0,0.1086052);
   quadLineFit1026->SetParLimits(0,0,0);
   quadLineFit1026->SetParameter(1,-0.07322844);
   quadLineFit1026->SetParError(1,0.005996719);
   quadLineFit1026->SetParLimits(1,0,0);
   quadLineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1026);
   gre->Draw("p ");
   
   TF1 *quadLineFit1027 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1027->SetFillColor(19);
   quadLineFit1027->SetFillStyle(0);
   quadLineFit1027->SetLineColor(3);
   quadLineFit1027->SetLineWidth(2);
   quadLineFit1027->SetChisquare(1.523235e-20);
   quadLineFit1027->SetNDF(0);
   quadLineFit1027->GetXaxis()->SetLabelFont(42);
   quadLineFit1027->GetXaxis()->SetTitleOffset(1);
   quadLineFit1027->GetXaxis()->SetTitleFont(42);
   quadLineFit1027->GetYaxis()->SetLabelFont(42);
   quadLineFit1027->GetYaxis()->SetTitleFont(42);
   quadLineFit1027->SetParameter(0,2.531245);
   quadLineFit1027->SetParError(0,0.1086052);
   quadLineFit1027->SetParLimits(0,0,0);
   quadLineFit1027->SetParameter(1,-0.07322844);
   quadLineFit1027->SetParError(1,0.005996719);
   quadLineFit1027->SetParLimits(1,0,0);
   quadLineFit1027->Draw("same");
   
   Double_t 30.000000 ppm_fx1027[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1027[2] = {
   2.864965,
   2.3111};
   Double_t 30.000000 ppm_fex1027[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1027[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,30.000000 ppm_fx1027,30.000000 ppm_fy1027,30.000000 ppm_fex1027,30.000000 ppm_fey1027);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1027 = new TH1F("Graph_30dO000000sPppm1027","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1027->SetMinimum(2.23536);
   Graph_30dO000000sPppm1027->SetMaximum(2.940705);
   Graph_30dO000000sPppm1027->SetDirectory(0);
   Graph_30dO000000sPppm1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1027->SetLineColor(ci);
   Graph_30dO000000sPppm1027->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1027->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1027->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1027->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1027->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1027->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1027->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1027);
   
   
   TF1 *quadLineFit1028 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1028->SetFillColor(19);
   quadLineFit1028->SetFillStyle(0);
   quadLineFit1028->SetLineColor(4);
   quadLineFit1028->SetLineWidth(2);
   quadLineFit1028->SetChisquare(1.008223e-18);
   quadLineFit1028->SetNDF(0);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,5.080425);
   quadLineFit1028->SetParError(0,0.1086052);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,-0.1384662);
   quadLineFit1028->SetParError(1,0.00599672);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("p ");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineColor(4);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(1.008223e-18);
   quadLineFit1029->SetNDF(0);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,5.080425);
   quadLineFit1029->SetParError(0,0.1086052);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,-0.1384662);
   quadLineFit1029->SetParError(1,0.00599672);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   16 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","8.83e+199 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.96e+26 ppm","lpf");
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
