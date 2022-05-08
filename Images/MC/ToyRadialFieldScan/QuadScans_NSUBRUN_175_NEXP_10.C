void QuadScans_NSUBRUN_175_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.224459,0.0663141,7.485923);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1097[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1097[3] = {
   -3.162737,
   -2.816433,
   -2.582778};
   Double_t -50.000000 ppm_fex1097[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1097[3] = {
   0.01118368,
   0.01118368,
   0.01118368};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1097,-50.000000 ppm_fy1097,-50.000000 ppm_fex1097,-50.000000 ppm_fey1097);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1097 = new TH1F("Graph_mI50dO000000sPppm1097","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1097->SetMinimum(-3.953421);
   Graph_mI50dO000000sPppm1097->SetMaximum(6.214885);
   Graph_mI50dO000000sPppm1097->SetDirectory(0);
   Graph_mI50dO000000sPppm1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1097->SetLineColor(ci);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1097->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1097->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1097);
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(0.8461715);
   quadLineFit1098->SetNDF(1);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,0.05425351);
   quadLineFit1098->SetParError(0,0.07910153);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,-51.52257);
   quadLineFit1098->SetParError(1,1.396693);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("ap");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(0.8461715);
   quadLineFit1099->SetNDF(1);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,0.05425351);
   quadLineFit1099->SetParError(0,0.07910153);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,-51.52257);
   quadLineFit1099->SetParError(1,1.396693);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   Double_t -30.000000 ppm_fx1099[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1099[4] = {
   -1.897748,
   -1.661063,
   -1.470735,
   -1.367553};
   Double_t -30.000000 ppm_fex1099[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1099[4] = {
   0.01118368,
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1099,-30.000000 ppm_fy1099,-30.000000 ppm_fex1099,-30.000000 ppm_fey1099);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1099 = new TH1F("Graph_mI30dO000000sPppm1099","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1099->SetMinimum(-1.964188);
   Graph_mI30dO000000sPppm1099->SetMaximum(-1.301113);
   Graph_mI30dO000000sPppm1099->SetDirectory(0);
   Graph_mI30dO000000sPppm1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1099->SetLineColor(ci);
   Graph_mI30dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1099->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineColor(2);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(0.4182498);
   quadLineFit1100->SetNDF(2);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,-0.005097527);
   quadLineFit1100->SetParError(0,0.04450441);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,-26.48507);
   quadLineFit1100->SetParError(1,0.7335202);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("p ");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineColor(2);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(0.4182498);
   quadLineFit1101->SetNDF(2);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,-0.005097527);
   quadLineFit1101->SetParError(0,0.04450441);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,-26.48507);
   quadLineFit1101->SetParError(1,0.7335202);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
   Double_t -10.000000 ppm_fx1101[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1101[4] = {
   -0.1731335,
   -0.1460821,
   -0.124219,
   -0.1252235};
   Double_t -10.000000 ppm_fex1101[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1101[4] = {
   0.01118368,
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1101,-10.000000 ppm_fy1101,-10.000000 ppm_fex1101,-10.000000 ppm_fey1101);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1101 = new TH1F("Graph_mI10dO000000sPppm1101","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1101->SetMinimum(-0.1914453);
   Graph_mI10dO000000sPppm1101->SetMaximum(-0.1059071);
   Graph_mI10dO000000sPppm1101->SetDirectory(0);
   Graph_mI10dO000000sPppm1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1101->SetLineColor(ci);
   Graph_mI10dO000000sPppm1101->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1101->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1101->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1101->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1101->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1101->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1101->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1101);
   
   
   TF1 *quadLineFit1102 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1102->SetFillColor(19);
   quadLineFit1102->SetFillStyle(0);
   quadLineFit1102->SetLineColor(3);
   quadLineFit1102->SetLineWidth(2);
   quadLineFit1102->SetChisquare(0.6405002);
   quadLineFit1102->SetNDF(2);
   quadLineFit1102->GetXaxis()->SetLabelFont(42);
   quadLineFit1102->GetXaxis()->SetTitleOffset(1);
   quadLineFit1102->GetXaxis()->SetTitleFont(42);
   quadLineFit1102->GetYaxis()->SetLabelFont(42);
   quadLineFit1102->GetYaxis()->SetTitleFont(42);
   quadLineFit1102->SetParameter(0,0.01090235);
   quadLineFit1102->SetParError(0,0.04450367);
   quadLineFit1102->SetParLimits(0,0,0);
   quadLineFit1102->SetParameter(1,-2.542996);
   quadLineFit1102->SetParError(1,0.7335077);
   quadLineFit1102->SetParLimits(1,0,0);
   quadLineFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1102);
   gre->Draw("p ");
   
   TF1 *quadLineFit1103 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1103->SetFillColor(19);
   quadLineFit1103->SetFillStyle(0);
   quadLineFit1103->SetLineColor(3);
   quadLineFit1103->SetLineWidth(2);
   quadLineFit1103->SetChisquare(0.6405002);
   quadLineFit1103->SetNDF(2);
   quadLineFit1103->GetXaxis()->SetLabelFont(42);
   quadLineFit1103->GetXaxis()->SetTitleOffset(1);
   quadLineFit1103->GetXaxis()->SetTitleFont(42);
   quadLineFit1103->GetYaxis()->SetLabelFont(42);
   quadLineFit1103->GetYaxis()->SetTitleFont(42);
   quadLineFit1103->SetParameter(0,0.01090235);
   quadLineFit1103->SetParError(0,0.04450367);
   quadLineFit1103->SetParLimits(0,0,0);
   quadLineFit1103->SetParameter(1,-2.542996);
   quadLineFit1103->SetParError(1,0.7335077);
   quadLineFit1103->SetParLimits(1,0,0);
   quadLineFit1103->Draw("same");
   
   Double_t 10.000000 ppm_fx1103[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1103[3] = {
   1.564319,
   1.340532,
   1.105673};
   Double_t 10.000000 ppm_fex1103[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1103[3] = {
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(3,10.000000 ppm_fx1103,10.000000 ppm_fy1103,10.000000 ppm_fex1103,10.000000 ppm_fey1103);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1103 = new TH1F("Graph_10dO000000sPppm1103","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1103->SetMinimum(1.046388);
   Graph_10dO000000sPppm1103->SetMaximum(1.623604);
   Graph_10dO000000sPppm1103->SetDirectory(0);
   Graph_10dO000000sPppm1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1103->SetLineColor(ci);
   Graph_10dO000000sPppm1103->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1103->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1103->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1103->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1103->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1103->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1103->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1103);
   
   
   TF1 *quadLineFit1104 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1104->SetFillColor(19);
   quadLineFit1104->SetFillStyle(0);
   quadLineFit1104->SetLineColor(4);
   quadLineFit1104->SetLineWidth(2);
   quadLineFit1104->SetChisquare(2.235484);
   quadLineFit1104->SetNDF(1);
   quadLineFit1104->GetXaxis()->SetLabelFont(42);
   quadLineFit1104->GetXaxis()->SetTitleOffset(1);
   quadLineFit1104->GetXaxis()->SetTitleFont(42);
   quadLineFit1104->GetYaxis()->SetLabelFont(42);
   quadLineFit1104->GetYaxis()->SetTitleFont(42);
   quadLineFit1104->SetParameter(0,-0.06388749);
   quadLineFit1104->SetParError(0,0.04879192);
   quadLineFit1104->SetParLimits(0,0,0);
   quadLineFit1104->SetParameter(1,22.68869);
   quadLineFit1104->SetParError(1,0.7833697);
   quadLineFit1104->SetParLimits(1,0,0);
   quadLineFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1104);
   gre->Draw("p ");
   
   TF1 *quadLineFit1105 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1105->SetFillColor(19);
   quadLineFit1105->SetFillStyle(0);
   quadLineFit1105->SetLineColor(4);
   quadLineFit1105->SetLineWidth(2);
   quadLineFit1105->SetChisquare(2.235484);
   quadLineFit1105->SetNDF(1);
   quadLineFit1105->GetXaxis()->SetLabelFont(42);
   quadLineFit1105->GetXaxis()->SetTitleOffset(1);
   quadLineFit1105->GetXaxis()->SetTitleFont(42);
   quadLineFit1105->GetYaxis()->SetLabelFont(42);
   quadLineFit1105->GetYaxis()->SetTitleFont(42);
   quadLineFit1105->SetParameter(0,-0.06388749);
   quadLineFit1105->SetParError(0,0.04879192);
   quadLineFit1105->SetParLimits(0,0,0);
   quadLineFit1105->SetParameter(1,22.68869);
   quadLineFit1105->SetParError(1,0.7833697);
   quadLineFit1105->SetParLimits(1,0,0);
   quadLineFit1105->Draw("same");
   
   Double_t 30.000000 ppm_fx1105[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1105[4] = {
   3.264036,
   2.870056,
   2.530669,
   2.344499};
   Double_t 30.000000 ppm_fex1105[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1105[4] = {
   0.01118368,
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(4,30.000000 ppm_fx1105,30.000000 ppm_fy1105,30.000000 ppm_fex1105,30.000000 ppm_fey1105);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1105 = new TH1F("Graph_30dO000000sPppm1105","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1105->SetMinimum(2.239125);
   Graph_30dO000000sPppm1105->SetMaximum(3.36941);
   Graph_30dO000000sPppm1105->SetDirectory(0);
   Graph_30dO000000sPppm1105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1105->SetLineColor(ci);
   Graph_30dO000000sPppm1105->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1105->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1105->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1105->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1105->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1105->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1105->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1105);
   
   
   TF1 *quadLineFit1106 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1106->SetFillColor(19);
   quadLineFit1106->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1106->SetLineColor(ci);
   quadLineFit1106->SetLineWidth(2);
   quadLineFit1106->SetChisquare(1.873208);
   quadLineFit1106->SetNDF(2);
   quadLineFit1106->GetXaxis()->SetLabelFont(42);
   quadLineFit1106->GetXaxis()->SetTitleOffset(1);
   quadLineFit1106->GetXaxis()->SetTitleFont(42);
   quadLineFit1106->GetYaxis()->SetLabelFont(42);
   quadLineFit1106->GetYaxis()->SetTitleFont(42);
   quadLineFit1106->SetParameter(0,-0.01373283);
   quadLineFit1106->SetParError(0,0.04449213);
   quadLineFit1106->SetParLimits(0,0,0);
   quadLineFit1106->SetParameter(1,45.95409);
   quadLineFit1106->SetParError(1,0.7333179);
   quadLineFit1106->SetParLimits(1,0,0);
   quadLineFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1106);
   gre->Draw("p ");
   
   TF1 *quadLineFit1107 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1107->SetFillColor(19);
   quadLineFit1107->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1107->SetLineColor(ci);
   quadLineFit1107->SetLineWidth(2);
   quadLineFit1107->SetChisquare(1.873208);
   quadLineFit1107->SetNDF(2);
   quadLineFit1107->GetXaxis()->SetLabelFont(42);
   quadLineFit1107->GetXaxis()->SetTitleOffset(1);
   quadLineFit1107->GetXaxis()->SetTitleFont(42);
   quadLineFit1107->GetYaxis()->SetLabelFont(42);
   quadLineFit1107->GetYaxis()->SetTitleFont(42);
   quadLineFit1107->SetParameter(0,-0.01373283);
   quadLineFit1107->SetParError(0,0.04449213);
   quadLineFit1107->SetParLimits(0,0,0);
   quadLineFit1107->SetParameter(1,45.95409);
   quadLineFit1107->SetParError(1,0.7333179);
   quadLineFit1107->SetParLimits(1,0,0);
   quadLineFit1107->Draw("same");
   
   Double_t 50.000000 ppm_fx1107[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1107[4] = {
   4.971908,
   4.387598,
   3.873706,
   3.562905};
   Double_t 50.000000 ppm_fex1107[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1107[4] = {
   0.01118368,
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(4,50.000000 ppm_fx1107,50.000000 ppm_fy1107,50.000000 ppm_fex1107,50.000000 ppm_fey1107);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1107 = new TH1F("Graph_50dO000000sPppm1107","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1107->SetMinimum(3.408584);
   Graph_50dO000000sPppm1107->SetMaximum(5.126229);
   Graph_50dO000000sPppm1107->SetDirectory(0);
   Graph_50dO000000sPppm1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1107->SetLineColor(ci);
   Graph_50dO000000sPppm1107->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1107->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1107->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1107->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1107);
   
   
   TF1 *quadLineFit1108 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1108->SetFillColor(19);
   quadLineFit1108->SetFillStyle(0);
   quadLineFit1108->SetLineColor(6);
   quadLineFit1108->SetLineWidth(2);
   quadLineFit1108->SetChisquare(8.550289);
   quadLineFit1108->SetNDF(2);
   quadLineFit1108->GetXaxis()->SetLabelFont(42);
   quadLineFit1108->GetXaxis()->SetTitleOffset(1);
   quadLineFit1108->GetXaxis()->SetTitleFont(42);
   quadLineFit1108->GetYaxis()->SetLabelFont(42);
   quadLineFit1108->GetYaxis()->SetTitleFont(42);
   quadLineFit1108->SetParameter(0,-0.02031311);
   quadLineFit1108->SetParError(0,0.04438992);
   quadLineFit1108->SetParLimits(0,0,0);
   quadLineFit1108->SetParameter(1,70.09859);
   quadLineFit1108->SetParError(1,0.7316626);
   quadLineFit1108->SetParLimits(1,0,0);
   quadLineFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1108);
   gre->Draw("p ");
   
   TF1 *quadLineFit1109 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1109->SetFillColor(19);
   quadLineFit1109->SetFillStyle(0);
   quadLineFit1109->SetLineColor(6);
   quadLineFit1109->SetLineWidth(2);
   quadLineFit1109->SetChisquare(8.550289);
   quadLineFit1109->SetNDF(2);
   quadLineFit1109->GetXaxis()->SetLabelFont(42);
   quadLineFit1109->GetXaxis()->SetTitleOffset(1);
   quadLineFit1109->GetXaxis()->SetTitleFont(42);
   quadLineFit1109->GetYaxis()->SetLabelFont(42);
   quadLineFit1109->GetYaxis()->SetTitleFont(42);
   quadLineFit1109->SetParameter(0,-0.02031311);
   quadLineFit1109->SetParError(0,0.04438992);
   quadLineFit1109->SetParLimits(0,0,0);
   quadLineFit1109->SetParameter(1,70.09859);
   quadLineFit1109->SetParError(1,0.7316626);
   quadLineFit1109->SetParLimits(1,0,0);
   quadLineFit1109->Draw("same");
   
   TLegend *leg = new TLegend(0.87,0.4,0.99,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{a}#GT [ppm]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
