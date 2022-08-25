void QuadScans_NSUBRUN_250_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 24 16:05:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.25344,0.0663141,7.509016);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1145[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1145[3] = {
   -3.181755,
   -2.820447,
   -2.592499};
   Double_t -50.000000 ppm_fex1145[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1145[3] = {
   0.009341547,
   0.009341547,
   0.009341547};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1145,-50.000000 ppm_fy1145,-50.000000 ppm_fex1145,-50.000000 ppm_fey1145);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1145 = new TH1F("Graph_mI50dO000000sPppm1145","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1145->SetMinimum(-3.977194);
   Graph_mI50dO000000sPppm1145->SetMaximum(6.23277);
   Graph_mI50dO000000sPppm1145->SetDirectory(0);
   Graph_mI50dO000000sPppm1145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1145->SetLineColor(ci);
   Graph_mI50dO000000sPppm1145->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1145->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1145->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1145->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1145->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1145->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1145->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1145->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1145->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1145->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1145->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1145->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1145->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1145->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1145->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1145);
   
   
   TF1 *quadLineFit1146 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1146->SetFillColor(19);
   quadLineFit1146->SetFillStyle(0);
   quadLineFit1146->SetLineWidth(2);
   quadLineFit1146->SetChisquare(0.09025869);
   quadLineFit1146->SetNDF(1);
   quadLineFit1146->GetXaxis()->SetLabelFont(42);
   quadLineFit1146->GetXaxis()->SetTitleOffset(1);
   quadLineFit1146->GetXaxis()->SetTitleFont(42);
   quadLineFit1146->GetYaxis()->SetLabelFont(42);
   quadLineFit1146->GetYaxis()->SetTitleFont(42);
   quadLineFit1146->SetParameter(0,0.09736583);
   quadLineFit1146->SetParError(0,0.06605901);
   quadLineFit1146->SetParLimits(0,0,0);
   quadLineFit1146->SetParameter(1,-52.47977);
   quadLineFit1146->SetParError(1,1.166403);
   quadLineFit1146->SetParLimits(1,0,0);
   quadLineFit1146->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1146);
   gre->Draw("ap");
   
   TF1 *quadLineFit1147 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1147->SetFillColor(19);
   quadLineFit1147->SetFillStyle(0);
   quadLineFit1147->SetLineWidth(2);
   quadLineFit1147->SetChisquare(0.09025869);
   quadLineFit1147->SetNDF(1);
   quadLineFit1147->GetXaxis()->SetLabelFont(42);
   quadLineFit1147->GetXaxis()->SetTitleOffset(1);
   quadLineFit1147->GetXaxis()->SetTitleFont(42);
   quadLineFit1147->GetYaxis()->SetLabelFont(42);
   quadLineFit1147->GetYaxis()->SetTitleFont(42);
   quadLineFit1147->SetParameter(0,0.09736583);
   quadLineFit1147->SetParError(0,0.06605901);
   quadLineFit1147->SetParLimits(0,0,0);
   quadLineFit1147->SetParameter(1,-52.47977);
   quadLineFit1147->SetParError(1,1.166403);
   quadLineFit1147->SetParLimits(1,0,0);
   quadLineFit1147->Draw("same");
   
   Double_t -30.000000 ppm_fx1147[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1147[4] = {
   -1.881323,
   -1.647068,
   -1.466513,
   -1.352943};
   Double_t -30.000000 ppm_fex1147[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1147[4] = {
   0.009341547,
   0.009341547,
   0.009341547,
   0.009341547};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1147,-30.000000 ppm_fy1147,-30.000000 ppm_fex1147,-30.000000 ppm_fey1147);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1147 = new TH1F("Graph_mI30dO000000sPppm1147","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1147->SetMinimum(-1.945371);
   Graph_mI30dO000000sPppm1147->SetMaximum(-1.288895);
   Graph_mI30dO000000sPppm1147->SetDirectory(0);
   Graph_mI30dO000000sPppm1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1147->SetLineColor(ci);
   Graph_mI30dO000000sPppm1147->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1147->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1147->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1147->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1147->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1147->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1147->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1147);
   
   
   TF1 *quadLineFit1148 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1148->SetFillColor(19);
   quadLineFit1148->SetFillStyle(0);
   quadLineFit1148->SetLineColor(2);
   quadLineFit1148->SetLineWidth(2);
   quadLineFit1148->SetChisquare(0.0173795);
   quadLineFit1148->SetNDF(2);
   quadLineFit1148->GetXaxis()->SetLabelFont(42);
   quadLineFit1148->GetXaxis()->SetTitleOffset(1);
   quadLineFit1148->GetXaxis()->SetTitleFont(42);
   quadLineFit1148->GetYaxis()->SetLabelFont(42);
   quadLineFit1148->GetYaxis()->SetTitleFont(42);
   quadLineFit1148->SetParameter(0,-0.01016309);
   quadLineFit1148->SetParError(0,0.03717487);
   quadLineFit1148->SetParLimits(0,0,0);
   quadLineFit1148->SetParameter(1,-26.19635);
   quadLineFit1148->SetParError(1,0.6127147);
   quadLineFit1148->SetParLimits(1,0,0);
   quadLineFit1148->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1148);
   gre->Draw("p ");
   
   TF1 *quadLineFit1149 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1149->SetFillColor(19);
   quadLineFit1149->SetFillStyle(0);
   quadLineFit1149->SetLineColor(2);
   quadLineFit1149->SetLineWidth(2);
   quadLineFit1149->SetChisquare(0.0173795);
   quadLineFit1149->SetNDF(2);
   quadLineFit1149->GetXaxis()->SetLabelFont(42);
   quadLineFit1149->GetXaxis()->SetTitleOffset(1);
   quadLineFit1149->GetXaxis()->SetTitleFont(42);
   quadLineFit1149->GetYaxis()->SetLabelFont(42);
   quadLineFit1149->GetYaxis()->SetTitleFont(42);
   quadLineFit1149->SetParameter(0,-0.01016309);
   quadLineFit1149->SetParError(0,0.03717487);
   quadLineFit1149->SetParLimits(0,0,0);
   quadLineFit1149->SetParameter(1,-26.19635);
   quadLineFit1149->SetParError(1,0.6127147);
   quadLineFit1149->SetParLimits(1,0,0);
   quadLineFit1149->Draw("same");
   
   Double_t -10.000000 ppm_fx1149[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1149[4] = {
   -0.1875532,
   -0.1467417,
   -0.1350808,
   -0.1195831};
   Double_t -10.000000 ppm_fex1149[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1149[4] = {
   0.009341547,
   0.009341547,
   0.009341547,
   0.009341547};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1149,-10.000000 ppm_fy1149,-10.000000 ppm_fex1149,-10.000000 ppm_fey1149);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1149 = new TH1F("Graph_mI10dO000000sPppm1149","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1149->SetMinimum(-0.20556);
   Graph_mI10dO000000sPppm1149->SetMaximum(-0.1015763);
   Graph_mI10dO000000sPppm1149->SetDirectory(0);
   Graph_mI10dO000000sPppm1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1149->SetLineColor(ci);
   Graph_mI10dO000000sPppm1149->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1149->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1149->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1149->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1149->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1149->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1149->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1149);
   
   
   TF1 *quadLineFit1150 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1150->SetFillColor(19);
   quadLineFit1150->SetFillStyle(0);
   quadLineFit1150->SetLineColor(3);
   quadLineFit1150->SetLineWidth(2);
   quadLineFit1150->SetChisquare(1.014575);
   quadLineFit1150->SetNDF(2);
   quadLineFit1150->GetXaxis()->SetLabelFont(42);
   quadLineFit1150->GetXaxis()->SetTitleOffset(1);
   quadLineFit1150->GetXaxis()->SetTitleFont(42);
   quadLineFit1150->GetYaxis()->SetLabelFont(42);
   quadLineFit1150->GetYaxis()->SetTitleFont(42);
   quadLineFit1150->SetParameter(0,0.04814892);
   quadLineFit1150->SetParError(0,0.03717287);
   quadLineFit1150->SetParLimits(0,0,0);
   quadLineFit1150->SetParameter(1,-3.246114);
   quadLineFit1150->SetParError(1,0.6126817);
   quadLineFit1150->SetParLimits(1,0,0);
   quadLineFit1150->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1150);
   gre->Draw("p ");
   
   TF1 *quadLineFit1151 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1151->SetFillColor(19);
   quadLineFit1151->SetFillStyle(0);
   quadLineFit1151->SetLineColor(3);
   quadLineFit1151->SetLineWidth(2);
   quadLineFit1151->SetChisquare(1.014575);
   quadLineFit1151->SetNDF(2);
   quadLineFit1151->GetXaxis()->SetLabelFont(42);
   quadLineFit1151->GetXaxis()->SetTitleOffset(1);
   quadLineFit1151->GetXaxis()->SetTitleFont(42);
   quadLineFit1151->GetYaxis()->SetLabelFont(42);
   quadLineFit1151->GetYaxis()->SetTitleFont(42);
   quadLineFit1151->SetParameter(0,0.04814892);
   quadLineFit1151->SetParError(0,0.03717287);
   quadLineFit1151->SetParLimits(0,0,0);
   quadLineFit1151->SetParameter(1,-3.246114);
   quadLineFit1151->SetParError(1,0.6126817);
   quadLineFit1151->SetParLimits(1,0,0);
   quadLineFit1151->Draw("same");
   
   Double_t 10.000000 ppm_fx1151[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1151[3] = {
   1.554722,
   1.347027,
   1.114537};
   Double_t 10.000000 ppm_fex1151[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1151[3] = {
   0.009341547,
   0.009341547,
   0.009341547};
   gre = new TGraphErrors(3,10.000000 ppm_fx1151,10.000000 ppm_fy1151,10.000000 ppm_fex1151,10.000000 ppm_fey1151);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1151 = new TH1F("Graph_10dO000000sPppm1151","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1151->SetMinimum(1.059309);
   Graph_10dO000000sPppm1151->SetMaximum(1.609951);
   Graph_10dO000000sPppm1151->SetDirectory(0);
   Graph_10dO000000sPppm1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1151->SetLineColor(ci);
   Graph_10dO000000sPppm1151->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1151->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1151->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1151->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1151->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1151->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1151->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1151);
   
   
   TF1 *quadLineFit1152 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1152->SetFillColor(19);
   quadLineFit1152->SetFillStyle(0);
   quadLineFit1152->SetLineColor(4);
   quadLineFit1152->SetLineWidth(2);
   quadLineFit1152->SetChisquare(1.2102);
   quadLineFit1152->SetNDF(1);
   quadLineFit1152->GetXaxis()->SetLabelFont(42);
   quadLineFit1152->GetXaxis()->SetTitleOffset(1);
   quadLineFit1152->GetXaxis()->SetTitleFont(42);
   quadLineFit1152->GetYaxis()->SetLabelFont(42);
   quadLineFit1152->GetYaxis()->SetTitleFont(42);
   quadLineFit1152->SetParameter(0,-0.007221881);
   quadLineFit1152->SetParError(0,0.04075066);
   quadLineFit1152->SetParLimits(0,0,0);
   quadLineFit1152->SetParameter(1,21.80195);
   quadLineFit1152->SetParError(1,0.6542651);
   quadLineFit1152->SetParLimits(1,0,0);
   quadLineFit1152->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1152);
   gre->Draw("p ");
   
   TF1 *quadLineFit1153 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1153->SetFillColor(19);
   quadLineFit1153->SetFillStyle(0);
   quadLineFit1153->SetLineColor(4);
   quadLineFit1153->SetLineWidth(2);
   quadLineFit1153->SetChisquare(1.2102);
   quadLineFit1153->SetNDF(1);
   quadLineFit1153->GetXaxis()->SetLabelFont(42);
   quadLineFit1153->GetXaxis()->SetTitleOffset(1);
   quadLineFit1153->GetXaxis()->SetTitleFont(42);
   quadLineFit1153->GetYaxis()->SetLabelFont(42);
   quadLineFit1153->GetYaxis()->SetTitleFont(42);
   quadLineFit1153->SetParameter(0,-0.007221881);
   quadLineFit1153->SetParError(0,0.04075066);
   quadLineFit1153->SetParLimits(0,0,0);
   quadLineFit1153->SetParameter(1,21.80195);
   quadLineFit1153->SetParError(1,0.6542651);
   quadLineFit1153->SetParLimits(1,0,0);
   quadLineFit1153->Draw("same");
   
   Double_t 30.000000 ppm_fx1153[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1153[4] = {
   3.290436,
   2.862056,
   2.541122,
   2.356558};
   Double_t 30.000000 ppm_fex1153[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1153[4] = {
   0.009341547,
   0.009341547,
   0.009341547,
   0.009341547};
   gre = new TGraphErrors(4,30.000000 ppm_fx1153,30.000000 ppm_fy1153,30.000000 ppm_fex1153,30.000000 ppm_fey1153);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1153 = new TH1F("Graph_30dO000000sPppm1153","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1153->SetMinimum(2.25196);
   Graph_30dO000000sPppm1153->SetMaximum(3.395034);
   Graph_30dO000000sPppm1153->SetDirectory(0);
   Graph_30dO000000sPppm1153->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1153->SetLineColor(ci);
   Graph_30dO000000sPppm1153->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1153->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1153->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1153->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1153->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1153->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1153->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1153);
   
   
   TF1 *quadLineFit1154 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1154->SetFillColor(19);
   quadLineFit1154->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1154->SetLineColor(ci);
   quadLineFit1154->SetLineWidth(2);
   quadLineFit1154->SetChisquare(2.214645);
   quadLineFit1154->SetNDF(2);
   quadLineFit1154->GetXaxis()->SetLabelFont(42);
   quadLineFit1154->GetXaxis()->SetTitleOffset(1);
   quadLineFit1154->GetXaxis()->SetTitleFont(42);
   quadLineFit1154->GetYaxis()->SetLabelFont(42);
   quadLineFit1154->GetYaxis()->SetTitleFont(42);
   quadLineFit1154->SetParameter(0,-0.03517098);
   quadLineFit1154->SetParError(0,0.03717122);
   quadLineFit1154->SetParLimits(0,0,0);
   quadLineFit1154->SetParameter(1,46.48018);
   quadLineFit1154->SetParError(1,0.6126546);
   quadLineFit1154->SetParLimits(1,0,0);
   quadLineFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1154);
   gre->Draw("p ");
   
   TF1 *quadLineFit1155 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1155->SetFillColor(19);
   quadLineFit1155->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1155->SetLineColor(ci);
   quadLineFit1155->SetLineWidth(2);
   quadLineFit1155->SetChisquare(2.214645);
   quadLineFit1155->SetNDF(2);
   quadLineFit1155->GetXaxis()->SetLabelFont(42);
   quadLineFit1155->GetXaxis()->SetTitleOffset(1);
   quadLineFit1155->GetXaxis()->SetTitleFont(42);
   quadLineFit1155->GetYaxis()->SetLabelFont(42);
   quadLineFit1155->GetYaxis()->SetTitleFont(42);
   quadLineFit1155->SetParameter(0,-0.03517098);
   quadLineFit1155->SetParError(0,0.03717122);
   quadLineFit1155->SetParLimits(0,0,0);
   quadLineFit1155->SetParameter(1,46.48018);
   quadLineFit1155->SetParError(1,0.6126546);
   quadLineFit1155->SetParLimits(1,0,0);
   quadLineFit1155->Draw("same");
   
   Double_t 50.000000 ppm_fx1155[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1155[4] = {
   4.986216,
   4.357063,
   3.889826,
   3.569155};
   Double_t 50.000000 ppm_fex1155[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1155[4] = {
   0.009341547,
   0.009341547,
   0.009341547,
   0.009341547};
   gre = new TGraphErrors(4,50.000000 ppm_fx1155,50.000000 ppm_fy1155,50.000000 ppm_fex1155,50.000000 ppm_fey1155);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1155 = new TH1F("Graph_50dO000000sPppm1155","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1155->SetMinimum(3.416239);
   Graph_50dO000000sPppm1155->SetMaximum(5.139132);
   Graph_50dO000000sPppm1155->SetDirectory(0);
   Graph_50dO000000sPppm1155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1155->SetLineColor(ci);
   Graph_50dO000000sPppm1155->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1155->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1155->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1155->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1155->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1155->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1155->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1155);
   
   
   TF1 *quadLineFit1156 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1156->SetFillColor(19);
   quadLineFit1156->SetFillStyle(0);
   quadLineFit1156->SetLineColor(6);
   quadLineFit1156->SetLineWidth(2);
   quadLineFit1156->SetChisquare(3.156383);
   quadLineFit1156->SetNDF(2);
   quadLineFit1156->GetXaxis()->SetLabelFont(42);
   quadLineFit1156->GetXaxis()->SetTitleOffset(1);
   quadLineFit1156->GetXaxis()->SetTitleFont(42);
   quadLineFit1156->GetYaxis()->SetLabelFont(42);
   quadLineFit1156->GetYaxis()->SetTitleFont(42);
   quadLineFit1156->SetParameter(0,-0.008389704);
   quadLineFit1156->SetParError(0,0.03717279);
   quadLineFit1156->SetParLimits(0,0,0);
   quadLineFit1156->SetParameter(1,69.92601);
   quadLineFit1156->SetParError(1,0.6126804);
   quadLineFit1156->SetParLimits(1,0,0);
   quadLineFit1156->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1156);
   gre->Draw("p ");
   
   TF1 *quadLineFit1157 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1157->SetFillColor(19);
   quadLineFit1157->SetFillStyle(0);
   quadLineFit1157->SetLineColor(6);
   quadLineFit1157->SetLineWidth(2);
   quadLineFit1157->SetChisquare(3.156383);
   quadLineFit1157->SetNDF(2);
   quadLineFit1157->GetXaxis()->SetLabelFont(42);
   quadLineFit1157->GetXaxis()->SetTitleOffset(1);
   quadLineFit1157->GetXaxis()->SetTitleFont(42);
   quadLineFit1157->GetYaxis()->SetLabelFont(42);
   quadLineFit1157->GetYaxis()->SetTitleFont(42);
   quadLineFit1157->SetParameter(0,-0.008389704);
   quadLineFit1157->SetParError(0,0.03717279);
   quadLineFit1157->SetParLimits(0,0,0);
   quadLineFit1157->SetParameter(1,69.92601);
   quadLineFit1157->SetParError(1,0.6126804);
   quadLineFit1157->SetParLimits(1,0,0);
   quadLineFit1157->Draw("same");
   
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
