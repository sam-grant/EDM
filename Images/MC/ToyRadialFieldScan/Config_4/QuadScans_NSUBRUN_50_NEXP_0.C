void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1015[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1015[2] = {
   -3.115747,
   -2.490112};
   Double_t -50.000000 ppm_fex1015[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1015[2] = {
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1015,-50.000000 ppm_fy1015,-50.000000 ppm_fex1015,-50.000000 ppm_fey1015);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1015 = new TH1F("Graph_mI50dO000000sPppm1015","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1015->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1015->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1015->SetDirectory(0);
   Graph_mI50dO000000sPppm1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1015->SetLineColor(ci);
   Graph_mI50dO000000sPppm1015->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1015->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1015->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1015->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1015->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1015->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1015->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1015->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1015->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1015->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1015->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1015->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1015->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1015);
   
   
   TF1 *quadLineFit1016 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1016->SetFillColor(19);
   quadLineFit1016->SetFillStyle(0);
   quadLineFit1016->SetLineWidth(2);
   quadLineFit1016->SetChisquare(2.458067e-22);
   quadLineFit1016->SetNDF(0);
   quadLineFit1016->GetXaxis()->SetLabelFont(42);
   quadLineFit1016->GetXaxis()->SetTitleOffset(1);
   quadLineFit1016->GetXaxis()->SetTitleFont(42);
   quadLineFit1016->GetYaxis()->SetLabelFont(42);
   quadLineFit1016->GetYaxis()->SetTitleFont(42);
   quadLineFit1016->SetParameter(0,-5.618284);
   quadLineFit1016->SetParError(0,0.1328027);
   quadLineFit1016->SetParLimits(0,0,0);
   quadLineFit1016->SetParameter(1,0.1564086);
   quadLineFit1016->SetParError(1,0.007332801);
   quadLineFit1016->SetParLimits(1,0,0);
   quadLineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1016);
   gre->Draw("ap");
   
   TF1 *quadLineFit1017 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1017->SetFillColor(19);
   quadLineFit1017->SetFillStyle(0);
   quadLineFit1017->SetLineWidth(2);
   quadLineFit1017->SetChisquare(2.458067e-22);
   quadLineFit1017->SetNDF(0);
   quadLineFit1017->GetXaxis()->SetLabelFont(42);
   quadLineFit1017->GetXaxis()->SetTitleOffset(1);
   quadLineFit1017->GetXaxis()->SetTitleFont(42);
   quadLineFit1017->GetYaxis()->SetLabelFont(42);
   quadLineFit1017->GetYaxis()->SetTitleFont(42);
   quadLineFit1017->SetParameter(0,-5.618284);
   quadLineFit1017->SetParError(0,0.1328027);
   quadLineFit1017->SetParLimits(0,0,0);
   quadLineFit1017->SetParameter(1,0.1564086);
   quadLineFit1017->SetParError(1,0.007332801);
   quadLineFit1017->SetParLimits(1,0,0);
   quadLineFit1017->Draw("same");
   
   Double_t -25.000000 ppm_fx1017[2] = {
   16,
   20};
   Double_t -25.000000 ppm_fy1017[2] = {
   -1.266821,
   -1.008552};
   Double_t -25.000000 ppm_fex1017[2] = {
   0,
   0};
   Double_t -25.000000 ppm_fey1017[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-25.000000 ppm_fx1017,-25.000000 ppm_fy1017,-25.000000 ppm_fex1017,-25.000000 ppm_fey1017);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1017 = new TH1F("Graph_mI25dO000000sPppm1017","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1017->SetMinimum(-1.317537);
   Graph_mI25dO000000sPppm1017->SetMaximum(-0.9578362);
   Graph_mI25dO000000sPppm1017->SetDirectory(0);
   Graph_mI25dO000000sPppm1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1017->SetLineColor(ci);
   Graph_mI25dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1017->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineColor(2);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(6.77992e-20);
   quadLineFit1018->SetNDF(0);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,-2.2999);
   quadLineFit1018->SetParError(0,0.1328027);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,0.06456744);
   quadLineFit1018->SetParError(1,0.007332801);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("p ");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineColor(2);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(6.77992e-20);
   quadLineFit1019->SetNDF(0);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,-2.2999);
   quadLineFit1019->SetParError(0,0.1328027);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,0.06456744);
   quadLineFit1019->SetParError(1,0.007332801);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
   Double_t 0.000000 ppm_fx1019[2] = {
   16,
   20};
   Double_t 0.000000 ppm_fy1019[2] = {
   0.6086419,
   0.4867629};
   Double_t 0.000000 ppm_fex1019[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1019[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,0.000000 ppm_fx1019,0.000000 ppm_fy1019,0.000000 ppm_fex1019,0.000000 ppm_fey1019);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1019 = new TH1F("Graph_0dO000000sPppm1019","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1019->SetMinimum(0.4496867);
   Graph_0dO000000sPppm1019->SetMaximum(0.6457181);
   Graph_0dO000000sPppm1019->SetDirectory(0);
   Graph_0dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1019->SetLineColor(ci);
   Graph_0dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1019);
   
   
   TF1 *quadLineFit1020 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1020->SetFillColor(19);
   quadLineFit1020->SetFillStyle(0);
   quadLineFit1020->SetLineColor(3);
   quadLineFit1020->SetLineWidth(2);
   quadLineFit1020->SetChisquare(6.638207e-21);
   quadLineFit1020->SetNDF(0);
   quadLineFit1020->GetXaxis()->SetLabelFont(42);
   quadLineFit1020->GetXaxis()->SetTitleOffset(1);
   quadLineFit1020->GetXaxis()->SetTitleFont(42);
   quadLineFit1020->GetYaxis()->SetLabelFont(42);
   quadLineFit1020->GetYaxis()->SetTitleFont(42);
   quadLineFit1020->SetParameter(0,1.096158);
   quadLineFit1020->SetParError(0,0.1328027);
   quadLineFit1020->SetParLimits(0,0,0);
   quadLineFit1020->SetParameter(1,-0.03046973);
   quadLineFit1020->SetParError(1,0.007332801);
   quadLineFit1020->SetParLimits(1,0,0);
   quadLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1020);
   gre->Draw("p ");
   
   TF1 *quadLineFit1021 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1021->SetFillColor(19);
   quadLineFit1021->SetFillStyle(0);
   quadLineFit1021->SetLineColor(3);
   quadLineFit1021->SetLineWidth(2);
   quadLineFit1021->SetChisquare(6.638207e-21);
   quadLineFit1021->SetNDF(0);
   quadLineFit1021->GetXaxis()->SetLabelFont(42);
   quadLineFit1021->GetXaxis()->SetTitleOffset(1);
   quadLineFit1021->GetXaxis()->SetTitleFont(42);
   quadLineFit1021->GetYaxis()->SetLabelFont(42);
   quadLineFit1021->GetYaxis()->SetTitleFont(42);
   quadLineFit1021->SetParameter(0,1.096158);
   quadLineFit1021->SetParError(0,0.1328027);
   quadLineFit1021->SetParLimits(0,0,0);
   quadLineFit1021->SetParameter(1,-0.03046973);
   quadLineFit1021->SetParError(1,0.007332801);
   quadLineFit1021->SetParLimits(1,0,0);
   quadLineFit1021->Draw("same");
   
   Double_t 25.000000 ppm_fx1021[2] = {
   16,
   20};
   Double_t 25.000000 ppm_fy1021[2] = {
   2.496589,
   1.94136};
   Double_t 25.000000 ppm_fex1021[2] = {
   0,
   0};
   Double_t 25.000000 ppm_fey1021[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,25.000000 ppm_fx1021,25.000000 ppm_fy1021,25.000000 ppm_fex1021,25.000000 ppm_fey1021);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1021 = new TH1F("Graph_25dO000000sPppm1021","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1021->SetMinimum(1.860949);
   Graph_25dO000000sPppm1021->SetMaximum(2.577);
   Graph_25dO000000sPppm1021->SetDirectory(0);
   Graph_25dO000000sPppm1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1021->SetLineColor(ci);
   Graph_25dO000000sPppm1021->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1021->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1021->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1021->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1021->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1021->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1021->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1021);
   
   
   TF1 *quadLineFit1022 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1022->SetFillColor(19);
   quadLineFit1022->SetFillStyle(0);
   quadLineFit1022->SetLineColor(4);
   quadLineFit1022->SetLineWidth(2);
   quadLineFit1022->SetChisquare(3.802374e-20);
   quadLineFit1022->SetNDF(0);
   quadLineFit1022->GetXaxis()->SetLabelFont(42);
   quadLineFit1022->GetXaxis()->SetTitleOffset(1);
   quadLineFit1022->GetXaxis()->SetTitleFont(42);
   quadLineFit1022->GetYaxis()->SetLabelFont(42);
   quadLineFit1022->GetYaxis()->SetTitleFont(42);
   quadLineFit1022->SetParameter(0,4.717506);
   quadLineFit1022->SetParError(0,0.1328027);
   quadLineFit1022->SetParLimits(0,0,0);
   quadLineFit1022->SetParameter(1,-0.1388073);
   quadLineFit1022->SetParError(1,0.007332801);
   quadLineFit1022->SetParLimits(1,0,0);
   quadLineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1022);
   gre->Draw("p ");
   
   TF1 *quadLineFit1023 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1023->SetFillColor(19);
   quadLineFit1023->SetFillStyle(0);
   quadLineFit1023->SetLineColor(4);
   quadLineFit1023->SetLineWidth(2);
   quadLineFit1023->SetChisquare(3.802374e-20);
   quadLineFit1023->SetNDF(0);
   quadLineFit1023->GetXaxis()->SetLabelFont(42);
   quadLineFit1023->GetXaxis()->SetTitleOffset(1);
   quadLineFit1023->GetXaxis()->SetTitleFont(42);
   quadLineFit1023->GetYaxis()->SetLabelFont(42);
   quadLineFit1023->GetYaxis()->SetTitleFont(42);
   quadLineFit1023->SetParameter(0,4.717506);
   quadLineFit1023->SetParError(0,0.1328027);
   quadLineFit1023->SetParLimits(0,0,0);
   quadLineFit1023->SetParameter(1,-0.1388073);
   quadLineFit1023->SetParError(1,0.007332801);
   quadLineFit1023->SetParLimits(1,0,0);
   quadLineFit1023->Draw("same");
   
   Double_t 50.000000 ppm_fx1023[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1023[2] = {
   4.392517,
   3.483603};
   Double_t 50.000000 ppm_fex1023[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1023[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,50.000000 ppm_fx1023,50.000000 ppm_fy1023,50.000000 ppm_fex1023,50.000000 ppm_fey1023);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1023 = new TH1F("Graph_50dO000000sPppm1023","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1023->SetMinimum(3.367824);
   Graph_50dO000000sPppm1023->SetMaximum(4.508297);
   Graph_50dO000000sPppm1023->SetDirectory(0);
   Graph_50dO000000sPppm1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1023->SetLineColor(ci);
   Graph_50dO000000sPppm1023->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1023->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1023->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1023->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1023->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1023->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1023->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1023);
   
   
   TF1 *quadLineFit1024 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1024->SetFillColor(19);
   quadLineFit1024->SetFillStyle(0);
   quadLineFit1024->SetLineColor(5);
   quadLineFit1024->SetLineWidth(2);
   quadLineFit1024->SetChisquare(5.87509e-19);
   quadLineFit1024->SetNDF(0);
   quadLineFit1024->GetXaxis()->SetLabelFont(42);
   quadLineFit1024->GetXaxis()->SetTitleOffset(1);
   quadLineFit1024->GetXaxis()->SetTitleFont(42);
   quadLineFit1024->GetYaxis()->SetLabelFont(42);
   quadLineFit1024->GetYaxis()->SetTitleFont(42);
   quadLineFit1024->SetParameter(0,8.028171);
   quadLineFit1024->SetParError(0,0.1328027);
   quadLineFit1024->SetParLimits(0,0,0);
   quadLineFit1024->SetParameter(1,-0.2272284);
   quadLineFit1024->SetParError(1,0.007332801);
   quadLineFit1024->SetParLimits(1,0,0);
   quadLineFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1024);
   gre->Draw("p ");
   
   TF1 *quadLineFit1025 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1025->SetFillColor(19);
   quadLineFit1025->SetFillStyle(0);
   quadLineFit1025->SetLineColor(5);
   quadLineFit1025->SetLineWidth(2);
   quadLineFit1025->SetChisquare(5.87509e-19);
   quadLineFit1025->SetNDF(0);
   quadLineFit1025->GetXaxis()->SetLabelFont(42);
   quadLineFit1025->GetXaxis()->SetTitleOffset(1);
   quadLineFit1025->GetXaxis()->SetTitleFont(42);
   quadLineFit1025->GetYaxis()->SetLabelFont(42);
   quadLineFit1025->GetYaxis()->SetTitleFont(42);
   quadLineFit1025->SetParameter(0,8.028171);
   quadLineFit1025->SetParError(0,0.1328027);
   quadLineFit1025->SetParLimits(0,0,0);
   quadLineFit1025->SetParameter(1,-0.2272284);
   quadLineFit1025->SetParError(1,0.007332801);
   quadLineFit1025->SetParLimits(1,0,0);
   quadLineFit1025->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("25.000000 ppm","   25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-25.000000 ppm","  #minus25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
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
