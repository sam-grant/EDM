void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1029[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1029[3] = {
   -3.17151,
   -2.813153,
   -2.529378};
   Double_t -50.000000 ppm_fex1029[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1029[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1029,-50.000000 ppm_fy1029,-50.000000 ppm_fex1029,-50.000000 ppm_fey1029);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1029 = new TH1F("Graph_mI50dO000000sPppm1029","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1029->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1029->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1029->SetDirectory(0);
   Graph_mI50dO000000sPppm1029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1029->SetLineColor(ci);
   Graph_mI50dO000000sPppm1029->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1029->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1029->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1029->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1029->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1029->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1029->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1029->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1029->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1029->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1029->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1029->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1029->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1029->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1029);
   
   
   TF1 *quadLineFit1030 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1030->SetFillColor(19);
   quadLineFit1030->SetFillStyle(0);
   quadLineFit1030->SetLineWidth(2);
   quadLineFit1030->SetChisquare(3.222485);
   quadLineFit1030->SetNDF(1);
   quadLineFit1030->GetXaxis()->SetLabelFont(42);
   quadLineFit1030->GetXaxis()->SetTitleOffset(1);
   quadLineFit1030->GetXaxis()->SetTitleFont(42);
   quadLineFit1030->GetYaxis()->SetLabelFont(42);
   quadLineFit1030->GetYaxis()->SetTitleFont(42);
   quadLineFit1030->SetParameter(0,-5.727605);
   quadLineFit1030->SetParError(0,0.1083841);
   quadLineFit1030->SetParLimits(0,0,0);
   quadLineFit1030->SetParameter(1,0.1605328);
   quadLineFit1030->SetParError(1,0.00599671);
   quadLineFit1030->SetParLimits(1,0,0);
   quadLineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1030);
   gre->Draw("ap");
   
   TF1 *quadLineFit1031 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1031->SetFillColor(19);
   quadLineFit1031->SetFillStyle(0);
   quadLineFit1031->SetLineWidth(2);
   quadLineFit1031->SetChisquare(3.222485);
   quadLineFit1031->SetNDF(1);
   quadLineFit1031->GetXaxis()->SetLabelFont(42);
   quadLineFit1031->GetXaxis()->SetTitleOffset(1);
   quadLineFit1031->GetXaxis()->SetTitleFont(42);
   quadLineFit1031->GetYaxis()->SetLabelFont(42);
   quadLineFit1031->GetYaxis()->SetTitleFont(42);
   quadLineFit1031->SetParameter(0,-5.727605);
   quadLineFit1031->SetParError(0,0.1083841);
   quadLineFit1031->SetParLimits(0,0,0);
   quadLineFit1031->SetParameter(1,0.1605328);
   quadLineFit1031->SetParError(1,0.00599671);
   quadLineFit1031->SetParLimits(1,0,0);
   quadLineFit1031->Draw("same");
   
   Double_t -25.000000 ppm_fx1031[3] = {
   16,
   18,
   20};
   Double_t -25.000000 ppm_fy1031[3] = {
   -1.280316,
   -1.118143,
   -1.017771};
   Double_t -25.000000 ppm_fex1031[3] = {
   0,
   0,
   0};
   Double_t -25.000000 ppm_fey1031[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,-25.000000 ppm_fx1031,-25.000000 ppm_fy1031,-25.000000 ppm_fex1031,-25.000000 ppm_fey1031);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1031 = new TH1F("Graph_mI25dO000000sPppm1031","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1031->SetMinimum(-1.326924);
   Graph_mI25dO000000sPppm1031->SetMaximum(-0.971163);
   Graph_mI25dO000000sPppm1031->SetDirectory(0);
   Graph_mI25dO000000sPppm1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1031->SetLineColor(ci);
   Graph_mI25dO000000sPppm1031->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1031->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1031->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1031->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1031->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1031->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1031->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1031);
   
   
   TF1 *quadLineFit1032 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1032->SetFillColor(19);
   quadLineFit1032->SetFillStyle(0);
   quadLineFit1032->SetLineColor(2);
   quadLineFit1032->SetLineWidth(2);
   quadLineFit1032->SetChisquare(2.212667);
   quadLineFit1032->SetNDF(1);
   quadLineFit1032->GetXaxis()->SetLabelFont(42);
   quadLineFit1032->GetXaxis()->SetTitleOffset(1);
   quadLineFit1032->GetXaxis()->SetTitleFont(42);
   quadLineFit1032->GetYaxis()->SetLabelFont(42);
   quadLineFit1032->GetYaxis()->SetTitleFont(42);
   quadLineFit1032->SetParameter(0,-2.320198);
   quadLineFit1032->SetParError(0,0.1083841);
   quadLineFit1032->SetParLimits(0,0,0);
   quadLineFit1032->SetParameter(1,0.06563634);
   quadLineFit1032->SetParError(1,0.005996709);
   quadLineFit1032->SetParLimits(1,0,0);
   quadLineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1032);
   gre->Draw("p ");
   
   TF1 *quadLineFit1033 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1033->SetFillColor(19);
   quadLineFit1033->SetFillStyle(0);
   quadLineFit1033->SetLineColor(2);
   quadLineFit1033->SetLineWidth(2);
   quadLineFit1033->SetChisquare(2.212667);
   quadLineFit1033->SetNDF(1);
   quadLineFit1033->GetXaxis()->SetLabelFont(42);
   quadLineFit1033->GetXaxis()->SetTitleOffset(1);
   quadLineFit1033->GetXaxis()->SetTitleFont(42);
   quadLineFit1033->GetYaxis()->SetLabelFont(42);
   quadLineFit1033->GetYaxis()->SetTitleFont(42);
   quadLineFit1033->SetParameter(0,-2.320198);
   quadLineFit1033->SetParError(0,0.1083841);
   quadLineFit1033->SetParLimits(0,0,0);
   quadLineFit1033->SetParameter(1,0.06563634);
   quadLineFit1033->SetParError(1,0.005996709);
   quadLineFit1033->SetParLimits(1,0,0);
   quadLineFit1033->Draw("same");
   
   Double_t 0.000000 ppm_fx1033[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1033[3] = {
   0.6032581,
   0.5381619,
   0.4843133};
   Double_t 0.000000 ppm_fex1033[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1033[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,0.000000 ppm_fx1033,0.000000 ppm_fy1033,0.000000 ppm_fex1033,0.000000 ppm_fey1033);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1033 = new TH1F("Graph_0dO000000sPppm1033","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1033->SetMinimum(0.4520653);
   Graph_0dO000000sPppm1033->SetMaximum(0.6355061);
   Graph_0dO000000sPppm1033->SetDirectory(0);
   Graph_0dO000000sPppm1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1033->SetLineColor(ci);
   Graph_0dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1033->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineColor(3);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(0.07329246);
   quadLineFit1034->SetNDF(1);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,1.077162);
   quadLineFit1034->SetParError(0,0.1083842);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,-0.02973618);
   quadLineFit1034->SetParError(1,0.005996719);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("p ");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineColor(3);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(0.07329246);
   quadLineFit1035->SetNDF(1);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,1.077162);
   quadLineFit1035->SetParError(0,0.1083842);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,-0.02973618);
   quadLineFit1035->SetParError(1,0.005996719);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t 25.000000 ppm_fx1035[3] = {
   16,
   18,
   20};
   Double_t 25.000000 ppm_fy1035[3] = {
   2.495909,
   2.189061,
   1.984915};
   Double_t 25.000000 ppm_fex1035[3] = {
   0,
   0,
   0};
   Double_t 25.000000 ppm_fey1035[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,25.000000 ppm_fx1035,25.000000 ppm_fy1035,25.000000 ppm_fex1035,25.000000 ppm_fey1035);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1035 = new TH1F("Graph_25dO000000sPppm1035","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1035->SetMinimum(1.913462);
   Graph_25dO000000sPppm1035->SetMaximum(2.567362);
   Graph_25dO000000sPppm1035->SetDirectory(0);
   Graph_25dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1035->SetLineColor(ci);
   Graph_25dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(4);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(6.110554);
   quadLineFit1036->SetNDF(1);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,4.522766);
   quadLineFit1036->SetParError(0,0.108379);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-0.1277484);
   quadLineFit1036->SetParError(1,0.005996427);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(4);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(6.110554);
   quadLineFit1037->SetNDF(1);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,4.522766);
   quadLineFit1037->SetParError(0,0.108379);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-0.1277484);
   quadLineFit1037->SetParError(1,0.005996427);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   Double_t 50.000000 ppm_fx1037[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1037[3] = {
   4.372718,
   3.874972,
   3.4722};
   Double_t 50.000000 ppm_fex1037[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1037[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,50.000000 ppm_fx1037,50.000000 ppm_fy1037,50.000000 ppm_fex1037,50.000000 ppm_fey1037);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1037 = new TH1F("Graph_50dO000000sPppm1037","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1037->SetMinimum(3.361795);
   Graph_50dO000000sPppm1037->SetMaximum(4.483123);
   Graph_50dO000000sPppm1037->SetDirectory(0);
   Graph_50dO000000sPppm1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1037->SetLineColor(ci);
   Graph_50dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1037->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineColor(5);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(5.225535);
   quadLineFit1038->SetNDF(1);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,7.95896);
   quadLineFit1038->SetParError(0,0.1083841);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,-0.2251294);
   quadLineFit1038->SetParError(1,0.00599671);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("p ");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineColor(5);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(5.225535);
   quadLineFit1039->SetNDF(1);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,7.95896);
   quadLineFit1039->SetParError(0,0.1083841);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,-0.2251294);
   quadLineFit1039->SetParError(1,0.00599671);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
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
