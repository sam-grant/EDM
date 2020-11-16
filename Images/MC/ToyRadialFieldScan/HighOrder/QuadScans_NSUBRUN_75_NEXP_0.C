void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 12 08:03:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1025[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1025[4] = {
   -3.593173,
   -3.182485,
   -2.829295,
   -2.538929};
   Double_t -50.000000 ppm_fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1025[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1025,-50.000000 ppm_fy1025,-50.000000 ppm_fex1025,-50.000000 ppm_fey1025);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1025 = new TH1F("Graph_mI50dO000000sPppm1025","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1025->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1025->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1025->SetDirectory(0);
   Graph_mI50dO000000sPppm1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1025->SetLineColor(ci);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1025->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1025->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1025);
   
   
   TF1 *quadLineFit1026 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1026->SetFillColor(19);
   quadLineFit1026->SetFillStyle(0);
   quadLineFit1026->SetLineWidth(2);
   quadLineFit1026->SetChisquare(12.58586);
   quadLineFit1026->SetNDF(2);
   quadLineFit1026->GetXaxis()->SetLabelFont(42);
   quadLineFit1026->GetXaxis()->SetTitleOffset(1);
   quadLineFit1026->GetXaxis()->SetTitleFont(42);
   quadLineFit1026->GetYaxis()->SetLabelFont(42);
   quadLineFit1026->GetYaxis()->SetTitleFont(42);
   quadLineFit1026->SetParameter(0,-6.024505);
   quadLineFit1026->SetParError(0,0.06503063);
   quadLineFit1026->SetParLimits(0,0,0);
   quadLineFit1026->SetParameter(1,0.1757961);
   quadLineFit1026->SetParError(1,0.003792663);
   quadLineFit1026->SetParLimits(1,0,0);
   quadLineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1026);
   gre->Draw("ap");
   
   TF1 *quadLineFit1027 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1027->SetFillColor(19);
   quadLineFit1027->SetFillStyle(0);
   quadLineFit1027->SetLineWidth(2);
   quadLineFit1027->SetChisquare(12.58586);
   quadLineFit1027->SetNDF(2);
   quadLineFit1027->GetXaxis()->SetLabelFont(42);
   quadLineFit1027->GetXaxis()->SetTitleOffset(1);
   quadLineFit1027->GetXaxis()->SetTitleFont(42);
   quadLineFit1027->GetYaxis()->SetLabelFont(42);
   quadLineFit1027->GetYaxis()->SetTitleFont(42);
   quadLineFit1027->SetParameter(0,-6.024505);
   quadLineFit1027->SetParError(0,0.06503063);
   quadLineFit1027->SetParLimits(0,0,0);
   quadLineFit1027->SetParameter(1,0.1757961);
   quadLineFit1027->SetParError(1,0.003792663);
   quadLineFit1027->SetParLimits(1,0,0);
   quadLineFit1027->Draw("same");
   
   Double_t -30.000000 ppm_fx1027[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1027[4] = {
   -1.909071,
   -1.649669,
   -1.489098,
   -1.318978};
   Double_t -30.000000 ppm_fex1027[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1027[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1027,-30.000000 ppm_fy1027,-30.000000 ppm_fex1027,-30.000000 ppm_fey1027);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1027 = new TH1F("Graph_mI30dO000000sPppm1027","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1027->SetMinimum(-1.988434);
   Graph_mI30dO000000sPppm1027->SetMaximum(-1.239615);
   Graph_mI30dO000000sPppm1027->SetDirectory(0);
   Graph_mI30dO000000sPppm1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1027->SetLineColor(ci);
   Graph_mI30dO000000sPppm1027->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1027->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1027->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1027->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1027->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1027->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1027->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1027);
   
   
   TF1 *quadLineFit1028 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1028->SetFillColor(19);
   quadLineFit1028->SetFillStyle(0);
   quadLineFit1028->SetLineColor(2);
   quadLineFit1028->SetLineWidth(2);
   quadLineFit1028->SetChisquare(8.968549);
   quadLineFit1028->SetNDF(2);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,-3.232927);
   quadLineFit1028->SetParError(0,0.06503056);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,0.09654255);
   quadLineFit1028->SetParError(1,0.003792659);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("p ");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineColor(2);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(8.968549);
   quadLineFit1029->SetNDF(2);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,-3.232927);
   quadLineFit1029->SetParError(0,0.06503056);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,0.09654255);
   quadLineFit1029->SetParError(1,0.003792659);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
   Double_t -10.000000 ppm_fx1029[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1029[4] = {
   -0.1435151,
   -0.1721886,
   -0.1222909,
   -0.1083972};
   Double_t -10.000000 ppm_fex1029[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1029[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1029,-10.000000 ppm_fy1029,-10.000000 ppm_fex1029,-10.000000 ppm_fey1029);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1029 = new TH1F("Graph_mI10dO000000sPppm1029","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1029->SetMinimum(-0.1989213);
   Graph_mI10dO000000sPppm1029->SetMaximum(-0.08166449);
   Graph_mI10dO000000sPppm1029->SetDirectory(0);
   Graph_mI10dO000000sPppm1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1029->SetLineColor(ci);
   Graph_mI10dO000000sPppm1029->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1029->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1029->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1029->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1029->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1029->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1029->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1029);
   
   
   TF1 *quadLineFit1030 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1030->SetFillColor(19);
   quadLineFit1030->SetFillStyle(0);
   quadLineFit1030->SetLineColor(3);
   quadLineFit1030->SetLineWidth(2);
   quadLineFit1030->SetChisquare(3.856185);
   quadLineFit1030->SetNDF(2);
   quadLineFit1030->GetXaxis()->SetLabelFont(42);
   quadLineFit1030->GetXaxis()->SetTitleOffset(1);
   quadLineFit1030->GetXaxis()->SetTitleFont(42);
   quadLineFit1030->GetYaxis()->SetLabelFont(42);
   quadLineFit1030->GetYaxis()->SetTitleFont(42);
   quadLineFit1030->SetParameter(0,-0.2685619);
   quadLineFit1030->SetParError(0,0.0650306);
   quadLineFit1030->SetParLimits(0,0,0);
   quadLineFit1030->SetParameter(1,0.007762584);
   quadLineFit1030->SetParError(1,0.003792662);
   quadLineFit1030->SetParLimits(1,0,0);
   quadLineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1030);
   gre->Draw("p ");
   
   TF1 *quadLineFit1031 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1031->SetFillColor(19);
   quadLineFit1031->SetFillStyle(0);
   quadLineFit1031->SetLineColor(3);
   quadLineFit1031->SetLineWidth(2);
   quadLineFit1031->SetChisquare(3.856185);
   quadLineFit1031->SetNDF(2);
   quadLineFit1031->GetXaxis()->SetLabelFont(42);
   quadLineFit1031->GetXaxis()->SetTitleOffset(1);
   quadLineFit1031->GetXaxis()->SetTitleFont(42);
   quadLineFit1031->GetYaxis()->SetLabelFont(42);
   quadLineFit1031->GetYaxis()->SetTitleFont(42);
   quadLineFit1031->SetParameter(0,-0.2685619);
   quadLineFit1031->SetParError(0,0.0650306);
   quadLineFit1031->SetParLimits(0,0,0);
   quadLineFit1031->SetParameter(1,0.007762584);
   quadLineFit1031->SetParError(1,0.003792662);
   quadLineFit1031->SetParLimits(1,0,0);
   quadLineFit1031->Draw("same");
   
   Double_t 10.000000 ppm_fx1031[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1031[4] = {
   1.53197,
   1.371472,
   1.210337,
   1.054327};
   Double_t 10.000000 ppm_fex1031[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1031[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,10.000000 ppm_fx1031,10.000000 ppm_fy1031,10.000000 ppm_fex1031,10.000000 ppm_fey1031);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1031 = new TH1F("Graph_10dO000000sPppm1031","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1031->SetMinimum(0.9862087);
   Graph_10dO000000sPppm1031->SetMaximum(1.600088);
   Graph_10dO000000sPppm1031->SetDirectory(0);
   Graph_10dO000000sPppm1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1031->SetLineColor(ci);
   Graph_10dO000000sPppm1031->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1031->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1031->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1031->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1031->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1031->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1031->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1031);
   
   
   TF1 *quadLineFit1032 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1032->SetFillColor(19);
   quadLineFit1032->SetFillStyle(0);
   quadLineFit1032->SetLineColor(4);
   quadLineFit1032->SetLineWidth(2);
   quadLineFit1032->SetChisquare(0.02326698);
   quadLineFit1032->SetNDF(2);
   quadLineFit1032->GetXaxis()->SetLabelFont(42);
   quadLineFit1032->GetXaxis()->SetTitleOffset(1);
   quadLineFit1032->GetXaxis()->SetTitleFont(42);
   quadLineFit1032->GetYaxis()->SetLabelFont(42);
   quadLineFit1032->GetYaxis()->SetTitleFont(42);
   quadLineFit1032->SetParameter(0,2.646982);
   quadLineFit1032->SetParError(0,0.06503054);
   quadLineFit1032->SetParLimits(0,0,0);
   quadLineFit1032->SetParameter(1,-0.07970327);
   quadLineFit1032->SetParError(1,0.003792658);
   quadLineFit1032->SetParLimits(1,0,0);
   quadLineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1032);
   gre->Draw("p ");
   
   TF1 *quadLineFit1033 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1033->SetFillColor(19);
   quadLineFit1033->SetFillStyle(0);
   quadLineFit1033->SetLineColor(4);
   quadLineFit1033->SetLineWidth(2);
   quadLineFit1033->SetChisquare(0.02326698);
   quadLineFit1033->SetNDF(2);
   quadLineFit1033->GetXaxis()->SetLabelFont(42);
   quadLineFit1033->GetXaxis()->SetTitleOffset(1);
   quadLineFit1033->GetXaxis()->SetTitleFont(42);
   quadLineFit1033->GetYaxis()->SetLabelFont(42);
   quadLineFit1033->GetYaxis()->SetTitleFont(42);
   quadLineFit1033->SetParameter(0,2.646982);
   quadLineFit1033->SetParError(0,0.06503054);
   quadLineFit1033->SetParLimits(0,0,0);
   quadLineFit1033->SetParameter(1,-0.07970327);
   quadLineFit1033->SetParError(1,0.003792658);
   quadLineFit1033->SetParLimits(1,0,0);
   quadLineFit1033->Draw("same");
   
   Double_t 30.000000 ppm_fx1033[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1033[4] = {
   3.242129,
   2.874475,
   2.537458,
   2.284744};
   Double_t 30.000000 ppm_fex1033[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1033[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,30.000000 ppm_fx1033,30.000000 ppm_fy1033,30.000000 ppm_fex1033,30.000000 ppm_fey1033);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1033 = new TH1F("Graph_30dO000000sPppm1033","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1033->SetMinimum(2.168652);
   Graph_30dO000000sPppm1033->SetMaximum(3.358221);
   Graph_30dO000000sPppm1033->SetDirectory(0);
   Graph_30dO000000sPppm1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1033->SetLineColor(ci);
   Graph_30dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineColor(5);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(11.98119);
   quadLineFit1034->SetNDF(2);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,5.462496);
   quadLineFit1034->SetParError(0,0.06503129);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,-0.1604585);
   quadLineFit1034->SetParError(1,0.003792702);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("p ");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineColor(5);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(11.98119);
   quadLineFit1035->SetNDF(2);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,5.462496);
   quadLineFit1035->SetParError(0,0.06503129);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,-0.1604585);
   quadLineFit1035->SetParError(1,0.003792702);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t 50.000000 ppm_fx1035[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1035[4] = {
   5.024049,
   4.370025,
   3.877409,
   3.505384};
   Double_t 50.000000 ppm_fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1035[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,50.000000 ppm_fx1035,50.000000 ppm_fy1035,50.000000 ppm_fex1035,50.000000 ppm_fey1035);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1035 = new TH1F("Graph_50dO000000sPppm1035","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1035->SetMinimum(3.333164);
   Graph_50dO000000sPppm1035->SetMaximum(5.196269);
   Graph_50dO000000sPppm1035->SetDirectory(0);
   Graph_50dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1035->SetLineColor(ci);
   Graph_50dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(6);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(69.39593);
   quadLineFit1036->SetNDF(2);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,8.485536);
   quadLineFit1036->SetParError(0,0.06503051);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-0.2524306);
   quadLineFit1036->SetParError(1,0.003792657);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(6);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(69.39593);
   quadLineFit1037->SetNDF(2);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,8.485536);
   quadLineFit1037->SetParError(0,0.06503051);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-0.2524306);
   quadLineFit1037->SetParError(1,0.003792657);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","App. #LTB_{r}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
