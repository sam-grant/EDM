void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1235[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1235[3] = {
   -3.15145,
   -2.805011,
   -2.524127};
   Double_t -50.000000 ppm_fex1235[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1235[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1235,-50.000000 ppm_fy1235,-50.000000 ppm_fex1235,-50.000000 ppm_fey1235);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1235 = new TH1F("Graph_mI50dO000000sPppm1235","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1235->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1235->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1235->SetDirectory(0);
   Graph_mI50dO000000sPppm1235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1235->SetLineColor(ci);
   Graph_mI50dO000000sPppm1235->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1235->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1235->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1235->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1235->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1235->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1235->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1235->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1235->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1235->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1235->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1235->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1235->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1235->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1235->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1235);
   
   
   TF1 *quadLineFit1236 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1236->SetFillColor(19);
   quadLineFit1236->SetFillStyle(0);
   quadLineFit1236->SetLineWidth(2);
   quadLineFit1236->SetChisquare(8.240809);
   quadLineFit1236->SetNDF(1);
   quadLineFit1236->GetXaxis()->SetLabelFont(42);
   quadLineFit1236->GetXaxis()->SetTitleOffset(1);
   quadLineFit1236->GetXaxis()->SetTitleFont(42);
   quadLineFit1236->GetYaxis()->SetLabelFont(42);
   quadLineFit1236->GetYaxis()->SetTitleFont(42);
   quadLineFit1236->SetParameter(0,-5.649817);
   quadLineFit1236->SetParError(0,0.05957433);
   quadLineFit1236->SetParLimits(0,0,0);
   quadLineFit1236->SetParameter(1,0.1568308);
   quadLineFit1236->SetParError(1,0.003296149);
   quadLineFit1236->SetParLimits(1,0,0);
   quadLineFit1236->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1236);
   gre->Draw("ap");
   
   TF1 *quadLineFit1237 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1237->SetFillColor(19);
   quadLineFit1237->SetFillStyle(0);
   quadLineFit1237->SetLineWidth(2);
   quadLineFit1237->SetChisquare(8.240809);
   quadLineFit1237->SetNDF(1);
   quadLineFit1237->GetXaxis()->SetLabelFont(42);
   quadLineFit1237->GetXaxis()->SetTitleOffset(1);
   quadLineFit1237->GetXaxis()->SetTitleFont(42);
   quadLineFit1237->GetYaxis()->SetLabelFont(42);
   quadLineFit1237->GetYaxis()->SetTitleFont(42);
   quadLineFit1237->SetParameter(0,-5.649817);
   quadLineFit1237->SetParError(0,0.05957433);
   quadLineFit1237->SetParLimits(0,0,0);
   quadLineFit1237->SetParameter(1,0.1568308);
   quadLineFit1237->SetParError(1,0.003296149);
   quadLineFit1237->SetParLimits(1,0,0);
   quadLineFit1237->Draw("same");
   
   Double_t -40.000000 ppm_fx1237[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1237[3] = {
   -2.414006,
   -2.145412,
   -1.927383};
   Double_t -40.000000 ppm_fex1237[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1237[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1237,-40.000000 ppm_fy1237,-40.000000 ppm_fex1237,-40.000000 ppm_fey1237);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1237 = new TH1F("Graph_mI40dO000000sPppm1237","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1237->SetMinimum(-2.473855);
   Graph_mI40dO000000sPppm1237->SetMaximum(-1.867533);
   Graph_mI40dO000000sPppm1237->SetDirectory(0);
   Graph_mI40dO000000sPppm1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1237->SetLineColor(ci);
   Graph_mI40dO000000sPppm1237->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1237->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1237->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1237->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1237->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1237->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1237->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1237);
   
   
   TF1 *quadLineFit1238 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1238->SetFillColor(19);
   quadLineFit1238->SetFillStyle(0);
   quadLineFit1238->SetLineColor(2);
   quadLineFit1238->SetLineWidth(2);
   quadLineFit1238->SetChisquare(4.902939);
   quadLineFit1238->SetNDF(1);
   quadLineFit1238->GetXaxis()->SetLabelFont(42);
   quadLineFit1238->GetXaxis()->SetTitleOffset(1);
   quadLineFit1238->GetXaxis()->SetTitleFont(42);
   quadLineFit1238->GetYaxis()->SetLabelFont(42);
   quadLineFit1238->GetYaxis()->SetTitleFont(42);
   quadLineFit1238->SetParameter(0,-4.35207);
   quadLineFit1238->SetParError(0,0.0595735);
   quadLineFit1238->SetParLimits(0,0,0);
   quadLineFit1238->SetParameter(1,0.1216557);
   quadLineFit1238->SetParError(1,0.003296103);
   quadLineFit1238->SetParLimits(1,0,0);
   quadLineFit1238->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1238);
   gre->Draw("p ");
   
   TF1 *quadLineFit1239 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1239->SetFillColor(19);
   quadLineFit1239->SetFillStyle(0);
   quadLineFit1239->SetLineColor(2);
   quadLineFit1239->SetLineWidth(2);
   quadLineFit1239->SetChisquare(4.902939);
   quadLineFit1239->SetNDF(1);
   quadLineFit1239->GetXaxis()->SetLabelFont(42);
   quadLineFit1239->GetXaxis()->SetTitleOffset(1);
   quadLineFit1239->GetXaxis()->SetTitleFont(42);
   quadLineFit1239->GetYaxis()->SetLabelFont(42);
   quadLineFit1239->GetYaxis()->SetTitleFont(42);
   quadLineFit1239->SetParameter(0,-4.35207);
   quadLineFit1239->SetParError(0,0.0595735);
   quadLineFit1239->SetParLimits(0,0,0);
   quadLineFit1239->SetParameter(1,0.1216557);
   quadLineFit1239->SetParError(1,0.003296103);
   quadLineFit1239->SetParLimits(1,0,0);
   quadLineFit1239->Draw("same");
   
   Double_t -30.000000 ppm_fx1239[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1239[3] = {
   -1.654221,
   -1.459677,
   -1.326291};
   Double_t -30.000000 ppm_fex1239[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1239[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1239,-30.000000 ppm_fy1239,-30.000000 ppm_fex1239,-30.000000 ppm_fey1239);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1239 = new TH1F("Graph_mI30dO000000sPppm1239","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1239->SetMinimum(-1.698201);
   Graph_mI30dO000000sPppm1239->SetMaximum(-1.28231);
   Graph_mI30dO000000sPppm1239->SetDirectory(0);
   Graph_mI30dO000000sPppm1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1239->SetLineColor(ci);
   Graph_mI30dO000000sPppm1239->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1239->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1239->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1239->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1239->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1239->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1239->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1239);
   
   
   TF1 *quadLineFit1240 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1240->SetFillColor(19);
   quadLineFit1240->SetFillStyle(0);
   quadLineFit1240->SetLineColor(3);
   quadLineFit1240->SetLineWidth(2);
   quadLineFit1240->SetChisquare(7.172372);
   quadLineFit1240->SetNDF(1);
   quadLineFit1240->GetXaxis()->SetLabelFont(42);
   quadLineFit1240->GetXaxis()->SetTitleOffset(1);
   quadLineFit1240->GetXaxis()->SetTitleFont(42);
   quadLineFit1240->GetYaxis()->SetLabelFont(42);
   quadLineFit1240->GetYaxis()->SetTitleFont(42);
   quadLineFit1240->SetParameter(0,-2.955747);
   quadLineFit1240->SetParError(0,0.05957212);
   quadLineFit1240->SetParLimits(0,0,0);
   quadLineFit1240->SetParameter(1,0.08198247);
   quadLineFit1240->SetParError(1,0.003296026);
   quadLineFit1240->SetParLimits(1,0,0);
   quadLineFit1240->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1240);
   gre->Draw("p ");
   
   TF1 *quadLineFit1241 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1241->SetFillColor(19);
   quadLineFit1241->SetFillStyle(0);
   quadLineFit1241->SetLineColor(3);
   quadLineFit1241->SetLineWidth(2);
   quadLineFit1241->SetChisquare(7.172372);
   quadLineFit1241->SetNDF(1);
   quadLineFit1241->GetXaxis()->SetLabelFont(42);
   quadLineFit1241->GetXaxis()->SetTitleOffset(1);
   quadLineFit1241->GetXaxis()->SetTitleFont(42);
   quadLineFit1241->GetYaxis()->SetLabelFont(42);
   quadLineFit1241->GetYaxis()->SetTitleFont(42);
   quadLineFit1241->SetParameter(0,-2.955747);
   quadLineFit1241->SetParError(0,0.05957212);
   quadLineFit1241->SetParLimits(0,0,0);
   quadLineFit1241->SetParameter(1,0.08198247);
   quadLineFit1241->SetParError(1,0.003296026);
   quadLineFit1241->SetParLimits(1,0,0);
   quadLineFit1241->Draw("same");
   
   Double_t -20.000000 ppm_fx1241[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1241[3] = {
   -0.8978097,
   -0.8226233,
   -0.7212746};
   Double_t -20.000000 ppm_fex1241[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1241[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1241,-20.000000 ppm_fy1241,-20.000000 ppm_fex1241,-20.000000 ppm_fey1241);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1241 = new TH1F("Graph_mI20dO000000sPppm1241","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1241->SetMinimum(-0.9266505);
   Graph_mI20dO000000sPppm1241->SetMaximum(-0.6924337);
   Graph_mI20dO000000sPppm1241->SetDirectory(0);
   Graph_mI20dO000000sPppm1241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1241->SetLineColor(ci);
   Graph_mI20dO000000sPppm1241->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1241->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1241->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1241->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1241->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1241->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1241->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1241->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1241);
   
   
   TF1 *quadLineFit1242 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1242->SetFillColor(19);
   quadLineFit1242->SetFillStyle(0);
   quadLineFit1242->SetLineColor(4);
   quadLineFit1242->SetLineWidth(2);
   quadLineFit1242->SetChisquare(1.312545);
   quadLineFit1242->SetNDF(1);
   quadLineFit1242->GetXaxis()->SetLabelFont(42);
   quadLineFit1242->GetXaxis()->SetTitleOffset(1);
   quadLineFit1242->GetXaxis()->SetTitleFont(42);
   quadLineFit1242->GetYaxis()->SetLabelFont(42);
   quadLineFit1242->GetYaxis()->SetTitleFont(42);
   quadLineFit1242->SetParameter(0,-1.60831);
   quadLineFit1242->SetParError(0,0.05957173);
   quadLineFit1242->SetParLimits(0,0,0);
   quadLineFit1242->SetParameter(1,0.04413378);
   quadLineFit1242->SetParError(1,0.003296004);
   quadLineFit1242->SetParLimits(1,0,0);
   quadLineFit1242->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1242);
   gre->Draw("p ");
   
   TF1 *quadLineFit1243 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1243->SetFillColor(19);
   quadLineFit1243->SetFillStyle(0);
   quadLineFit1243->SetLineColor(4);
   quadLineFit1243->SetLineWidth(2);
   quadLineFit1243->SetChisquare(1.312545);
   quadLineFit1243->SetNDF(1);
   quadLineFit1243->GetXaxis()->SetLabelFont(42);
   quadLineFit1243->GetXaxis()->SetTitleOffset(1);
   quadLineFit1243->GetXaxis()->SetTitleFont(42);
   quadLineFit1243->GetYaxis()->SetLabelFont(42);
   quadLineFit1243->GetYaxis()->SetTitleFont(42);
   quadLineFit1243->SetParameter(0,-1.60831);
   quadLineFit1243->SetParError(0,0.05957173);
   quadLineFit1243->SetParLimits(0,0,0);
   quadLineFit1243->SetParameter(1,0.04413378);
   quadLineFit1243->SetParError(1,0.003296004);
   quadLineFit1243->SetParLimits(1,0,0);
   quadLineFit1243->Draw("same");
   
   Double_t -10.000000 ppm_fx1243[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1243[3] = {
   -0.1537417,
   -0.1498989,
   -0.1195532};
   Double_t -10.000000 ppm_fex1243[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1243[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1243,-10.000000 ppm_fy1243,-10.000000 ppm_fex1243,-10.000000 ppm_fey1243);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1243 = new TH1F("Graph_mI10dO000000sPppm1243","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1243->SetMinimum(-0.1683479);
   Graph_mI10dO000000sPppm1243->SetMaximum(-0.104947);
   Graph_mI10dO000000sPppm1243->SetDirectory(0);
   Graph_mI10dO000000sPppm1243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1243->SetLineColor(ci);
   Graph_mI10dO000000sPppm1243->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1243->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1243->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1243->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1243->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1243->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1243->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1243->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1243);
   
   
   TF1 *quadLineFit1244 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1244->SetFillColor(19);
   quadLineFit1244->SetFillStyle(0);
   quadLineFit1244->SetLineColor(5);
   quadLineFit1244->SetLineWidth(2);
   quadLineFit1244->SetChisquare(1.346933);
   quadLineFit1244->SetNDF(1);
   quadLineFit1244->GetXaxis()->SetLabelFont(42);
   quadLineFit1244->GetXaxis()->SetTitleOffset(1);
   quadLineFit1244->GetXaxis()->SetTitleFont(42);
   quadLineFit1244->GetYaxis()->SetLabelFont(42);
   quadLineFit1244->GetYaxis()->SetTitleFont(42);
   quadLineFit1244->SetParameter(0,-0.294913);
   quadLineFit1244->SetParError(0,0.0595731);
   quadLineFit1244->SetParLimits(0,0,0);
   quadLineFit1244->SetParameter(1,0.008547136);
   quadLineFit1244->SetParError(1,0.00329608);
   quadLineFit1244->SetParLimits(1,0,0);
   quadLineFit1244->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1244);
   gre->Draw("p ");
   
   TF1 *quadLineFit1245 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1245->SetFillColor(19);
   quadLineFit1245->SetFillStyle(0);
   quadLineFit1245->SetLineColor(5);
   quadLineFit1245->SetLineWidth(2);
   quadLineFit1245->SetChisquare(1.346933);
   quadLineFit1245->SetNDF(1);
   quadLineFit1245->GetXaxis()->SetLabelFont(42);
   quadLineFit1245->GetXaxis()->SetTitleOffset(1);
   quadLineFit1245->GetXaxis()->SetTitleFont(42);
   quadLineFit1245->GetYaxis()->SetLabelFont(42);
   quadLineFit1245->GetYaxis()->SetTitleFont(42);
   quadLineFit1245->SetParameter(0,-0.294913);
   quadLineFit1245->SetParError(0,0.0595731);
   quadLineFit1245->SetParLimits(0,0,0);
   quadLineFit1245->SetParameter(1,0.008547136);
   quadLineFit1245->SetParError(1,0.00329608);
   quadLineFit1245->SetParLimits(1,0,0);
   quadLineFit1245->Draw("same");
   
   Double_t 0.000000 ppm_fx1245[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1245[3] = {
   0.6020396,
   0.5309084,
   0.4800684};
   Double_t 0.000000 ppm_fex1245[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1245[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,0.000000 ppm_fx1245,0.000000 ppm_fy1245,0.000000 ppm_fex1245,0.000000 ppm_fey1245);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1245 = new TH1F("Graph_0dO000000sPppm1245","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1245->SetMinimum(0.456684);
   Graph_0dO000000sPppm1245->SetMaximum(0.625424);
   Graph_0dO000000sPppm1245->SetDirectory(0);
   Graph_0dO000000sPppm1245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1245->SetLineColor(ci);
   Graph_0dO000000sPppm1245->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1245->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1245->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1245->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1245->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1245->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1245->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1245);
   
   
   TF1 *quadLineFit1246 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1246->SetFillColor(19);
   quadLineFit1246->SetFillStyle(0);
   quadLineFit1246->SetLineColor(6);
   quadLineFit1246->SetLineWidth(2);
   quadLineFit1246->SetChisquare(0.7895442);
   quadLineFit1246->SetNDF(1);
   quadLineFit1246->GetXaxis()->SetLabelFont(42);
   quadLineFit1246->GetXaxis()->SetTitleOffset(1);
   quadLineFit1246->GetXaxis()->SetTitleFont(42);
   quadLineFit1246->GetYaxis()->SetLabelFont(42);
   quadLineFit1246->GetYaxis()->SetTitleFont(42);
   quadLineFit1246->SetParameter(0,1.086542);
   quadLineFit1246->SetParError(0,0.05957168);
   quadLineFit1246->SetParLimits(0,0,0);
   quadLineFit1246->SetParameter(1,-0.03049279);
   quadLineFit1246->SetParError(1,0.003296001);
   quadLineFit1246->SetParLimits(1,0,0);
   quadLineFit1246->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1246);
   gre->Draw("p ");
   
   TF1 *quadLineFit1247 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1247->SetFillColor(19);
   quadLineFit1247->SetFillStyle(0);
   quadLineFit1247->SetLineColor(6);
   quadLineFit1247->SetLineWidth(2);
   quadLineFit1247->SetChisquare(0.7895442);
   quadLineFit1247->SetNDF(1);
   quadLineFit1247->GetXaxis()->SetLabelFont(42);
   quadLineFit1247->GetXaxis()->SetTitleOffset(1);
   quadLineFit1247->GetXaxis()->SetTitleFont(42);
   quadLineFit1247->GetYaxis()->SetLabelFont(42);
   quadLineFit1247->GetYaxis()->SetTitleFont(42);
   quadLineFit1247->SetParameter(0,1.086542);
   quadLineFit1247->SetParError(0,0.05957168);
   quadLineFit1247->SetParLimits(0,0,0);
   quadLineFit1247->SetParameter(1,-0.03049279);
   quadLineFit1247->SetParError(1,0.003296001);
   quadLineFit1247->SetParLimits(1,0,0);
   quadLineFit1247->Draw("same");
   
   Double_t 10.000000 ppm_fx1247[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1247[3] = {
   1.3606,
   1.203338,
   1.086971};
   Double_t 10.000000 ppm_fex1247[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1247[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,10.000000 ppm_fx1247,10.000000 ppm_fy1247,10.000000 ppm_fex1247,10.000000 ppm_fey1247);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1247 = new TH1F("Graph_10dO000000sPppm1247","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1247->SetMinimum(1.04842);
   Graph_10dO000000sPppm1247->SetMaximum(1.399151);
   Graph_10dO000000sPppm1247->SetDirectory(0);
   Graph_10dO000000sPppm1247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1247->SetLineColor(ci);
   Graph_10dO000000sPppm1247->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1247->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1247->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1247->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1247->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1247->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1247->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1247->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1247);
   
   
   TF1 *quadLineFit1248 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1248->SetFillColor(19);
   quadLineFit1248->SetFillStyle(0);
   quadLineFit1248->SetLineColor(7);
   quadLineFit1248->SetLineWidth(2);
   quadLineFit1248->SetChisquare(3.20712);
   quadLineFit1248->SetNDF(1);
   quadLineFit1248->GetXaxis()->SetLabelFont(42);
   quadLineFit1248->GetXaxis()->SetTitleOffset(1);
   quadLineFit1248->GetXaxis()->SetTitleFont(42);
   quadLineFit1248->GetYaxis()->SetLabelFont(42);
   quadLineFit1248->GetYaxis()->SetTitleFont(42);
   quadLineFit1248->SetParameter(0,2.448303);
   quadLineFit1248->SetParError(0,0.05957458);
   quadLineFit1248->SetParLimits(0,0,0);
   quadLineFit1248->SetParameter(1,-0.06840743);
   quadLineFit1248->SetParError(1,0.003296163);
   quadLineFit1248->SetParLimits(1,0,0);
   quadLineFit1248->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1248);
   gre->Draw("p ");
   
   TF1 *quadLineFit1249 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1249->SetFillColor(19);
   quadLineFit1249->SetFillStyle(0);
   quadLineFit1249->SetLineColor(7);
   quadLineFit1249->SetLineWidth(2);
   quadLineFit1249->SetChisquare(3.20712);
   quadLineFit1249->SetNDF(1);
   quadLineFit1249->GetXaxis()->SetLabelFont(42);
   quadLineFit1249->GetXaxis()->SetTitleOffset(1);
   quadLineFit1249->GetXaxis()->SetTitleFont(42);
   quadLineFit1249->GetYaxis()->SetLabelFont(42);
   quadLineFit1249->GetYaxis()->SetTitleFont(42);
   quadLineFit1249->SetParameter(0,2.448303);
   quadLineFit1249->SetParError(0,0.05957458);
   quadLineFit1249->SetParLimits(0,0,0);
   quadLineFit1249->SetParameter(1,-0.06840743);
   quadLineFit1249->SetParError(1,0.003296163);
   quadLineFit1249->SetParLimits(1,0,0);
   quadLineFit1249->Draw("same");
   
   Double_t 20.000000 ppm_fx1249[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1249[3] = {
   2.110388,
   1.865091,
   1.692589};
   Double_t 20.000000 ppm_fex1249[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1249[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,20.000000 ppm_fx1249,20.000000 ppm_fy1249,20.000000 ppm_fex1249,20.000000 ppm_fey1249);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1249 = new TH1F("Graph_20dO000000sPppm1249","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1249->SetMinimum(1.639622);
   Graph_20dO000000sPppm1249->SetMaximum(2.163355);
   Graph_20dO000000sPppm1249->SetDirectory(0);
   Graph_20dO000000sPppm1249->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1249->SetLineColor(ci);
   Graph_20dO000000sPppm1249->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1249->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1249->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1249->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1249->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1249->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1249->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1249->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1249);
   
   
   TF1 *quadLineFit1250 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1250->SetFillColor(19);
   quadLineFit1250->SetFillStyle(0);
   quadLineFit1250->SetLineColor(8);
   quadLineFit1250->SetLineWidth(2);
   quadLineFit1250->SetChisquare(10.16183);
   quadLineFit1250->SetNDF(1);
   quadLineFit1250->GetXaxis()->SetLabelFont(42);
   quadLineFit1250->GetXaxis()->SetTitleOffset(1);
   quadLineFit1250->GetXaxis()->SetTitleFont(42);
   quadLineFit1250->GetYaxis()->SetLabelFont(42);
   quadLineFit1250->GetYaxis()->SetTitleFont(42);
   quadLineFit1250->SetParameter(0,3.769448);
   quadLineFit1250->SetParError(0,0.05958169);
   quadLineFit1250->SetParLimits(0,0,0);
   quadLineFit1250->SetParameter(1,-0.1044496);
   quadLineFit1250->SetParError(1,0.003296554);
   quadLineFit1250->SetParLimits(1,0,0);
   quadLineFit1250->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1250);
   gre->Draw("p ");
   
   TF1 *quadLineFit1251 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1251->SetFillColor(19);
   quadLineFit1251->SetFillStyle(0);
   quadLineFit1251->SetLineColor(8);
   quadLineFit1251->SetLineWidth(2);
   quadLineFit1251->SetChisquare(10.16183);
   quadLineFit1251->SetNDF(1);
   quadLineFit1251->GetXaxis()->SetLabelFont(42);
   quadLineFit1251->GetXaxis()->SetTitleOffset(1);
   quadLineFit1251->GetXaxis()->SetTitleFont(42);
   quadLineFit1251->GetYaxis()->SetLabelFont(42);
   quadLineFit1251->GetYaxis()->SetTitleFont(42);
   quadLineFit1251->SetParameter(0,3.769448);
   quadLineFit1251->SetParError(0,0.05958169);
   quadLineFit1251->SetParLimits(0,0,0);
   quadLineFit1251->SetParameter(1,-0.1044496);
   quadLineFit1251->SetParError(1,0.003296554);
   quadLineFit1251->SetParLimits(1,0,0);
   quadLineFit1251->Draw("same");
   
   Double_t 30.000000 ppm_fx1251[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1251[3] = {
   2.888676,
   2.53986,
   2.269298};
   Double_t 30.000000 ppm_fex1251[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1251[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,30.000000 ppm_fx1251,30.000000 ppm_fy1251,30.000000 ppm_fex1251,30.000000 ppm_fey1251);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1251 = new TH1F("Graph_30dO000000sPppm1251","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1251->SetMinimum(2.196173);
   Graph_30dO000000sPppm1251->SetMaximum(2.961801);
   Graph_30dO000000sPppm1251->SetDirectory(0);
   Graph_30dO000000sPppm1251->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1251->SetLineColor(ci);
   Graph_30dO000000sPppm1251->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1251->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1251->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1251->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1251->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1251->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1251->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1251->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1251);
   
   
   TF1 *quadLineFit1252 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1252->SetFillColor(19);
   quadLineFit1252->SetFillStyle(0);
   quadLineFit1252->SetLineColor(9);
   quadLineFit1252->SetLineWidth(2);
   quadLineFit1252->SetChisquare(11.74303);
   quadLineFit1252->SetNDF(1);
   quadLineFit1252->GetXaxis()->SetLabelFont(42);
   quadLineFit1252->GetXaxis()->SetTitleOffset(1);
   quadLineFit1252->GetXaxis()->SetTitleFont(42);
   quadLineFit1252->GetYaxis()->SetLabelFont(42);
   quadLineFit1252->GetYaxis()->SetTitleFont(42);
   quadLineFit1252->SetParameter(0,5.353144);
   quadLineFit1252->SetParError(0,0.05957354);
   quadLineFit1252->SetParLimits(0,0,0);
   quadLineFit1252->SetParameter(1,-0.1548444);
   quadLineFit1252->SetParError(1,0.003296105);
   quadLineFit1252->SetParLimits(1,0,0);
   quadLineFit1252->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1252);
   gre->Draw("p ");
   
   TF1 *quadLineFit1253 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1253->SetFillColor(19);
   quadLineFit1253->SetFillStyle(0);
   quadLineFit1253->SetLineColor(9);
   quadLineFit1253->SetLineWidth(2);
   quadLineFit1253->SetChisquare(11.74303);
   quadLineFit1253->SetNDF(1);
   quadLineFit1253->GetXaxis()->SetLabelFont(42);
   quadLineFit1253->GetXaxis()->SetTitleOffset(1);
   quadLineFit1253->GetXaxis()->SetTitleFont(42);
   quadLineFit1253->GetYaxis()->SetLabelFont(42);
   quadLineFit1253->GetYaxis()->SetTitleFont(42);
   quadLineFit1253->SetParameter(0,5.353144);
   quadLineFit1253->SetParError(0,0.05957354);
   quadLineFit1253->SetParLimits(0,0,0);
   quadLineFit1253->SetParameter(1,-0.1548444);
   quadLineFit1253->SetParError(1,0.003296105);
   quadLineFit1253->SetParLimits(1,0,0);
   quadLineFit1253->Draw("same");
   
   Double_t 40.000000 ppm_fx1253[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1253[3] = {
   3.620488,
   3.2072,
   2.888936};
   Double_t 40.000000 ppm_fex1253[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1253[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,40.000000 ppm_fx1253,40.000000 ppm_fy1253,40.000000 ppm_fex1253,40.000000 ppm_fey1253);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1253 = new TH1F("Graph_40dO000000sPppm1253","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1253->SetMinimum(2.804593);
   Graph_40dO000000sPppm1253->SetMaximum(3.704831);
   Graph_40dO000000sPppm1253->SetDirectory(0);
   Graph_40dO000000sPppm1253->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1253->SetLineColor(ci);
   Graph_40dO000000sPppm1253->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1253->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1253->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1253->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1253->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1253->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1253->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1253->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1253);
   
   
   TF1 *quadLineFit1254 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1254->SetFillColor(19);
   quadLineFit1254->SetFillStyle(0);
   quadLineFit1254->SetLineColor(10);
   quadLineFit1254->SetLineWidth(2);
   quadLineFit1254->SetChisquare(17.31495);
   quadLineFit1254->SetNDF(1);
   quadLineFit1254->GetXaxis()->SetLabelFont(42);
   quadLineFit1254->GetXaxis()->SetTitleOffset(1);
   quadLineFit1254->GetXaxis()->SetTitleFont(42);
   quadLineFit1254->GetYaxis()->SetLabelFont(42);
   quadLineFit1254->GetYaxis()->SetTitleFont(42);
   quadLineFit1254->SetParameter(0,6.530859);
   quadLineFit1254->SetParError(0,0.05957518);
   quadLineFit1254->SetParLimits(0,0,0);
   quadLineFit1254->SetParameter(1,-0.182888);
   quadLineFit1254->SetParError(1,0.003296196);
   quadLineFit1254->SetParLimits(1,0,0);
   quadLineFit1254->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1254);
   gre->Draw("p ");
   
   TF1 *quadLineFit1255 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1255->SetFillColor(19);
   quadLineFit1255->SetFillStyle(0);
   quadLineFit1255->SetLineColor(10);
   quadLineFit1255->SetLineWidth(2);
   quadLineFit1255->SetChisquare(17.31495);
   quadLineFit1255->SetNDF(1);
   quadLineFit1255->GetXaxis()->SetLabelFont(42);
   quadLineFit1255->GetXaxis()->SetTitleOffset(1);
   quadLineFit1255->GetXaxis()->SetTitleFont(42);
   quadLineFit1255->GetYaxis()->SetLabelFont(42);
   quadLineFit1255->GetYaxis()->SetTitleFont(42);
   quadLineFit1255->SetParameter(0,6.530859);
   quadLineFit1255->SetParError(0,0.05957518);
   quadLineFit1255->SetParLimits(0,0,0);
   quadLineFit1255->SetParameter(1,-0.182888);
   quadLineFit1255->SetParError(1,0.003296196);
   quadLineFit1255->SetParLimits(1,0,0);
   quadLineFit1255->Draw("same");
   
   Double_t 50.000000 ppm_fx1255[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1255[3] = {
   4.393031,
   3.8822,
   3.485692};
   Double_t 50.000000 ppm_fex1255[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1255[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,50.000000 ppm_fx1255,50.000000 ppm_fy1255,50.000000 ppm_fex1255,50.000000 ppm_fey1255);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1255 = new TH1F("Graph_50dO000000sPppm1255","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1255->SetMinimum(3.38377);
   Graph_50dO000000sPppm1255->SetMaximum(4.494953);
   Graph_50dO000000sPppm1255->SetDirectory(0);
   Graph_50dO000000sPppm1255->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1255->SetLineColor(ci);
   Graph_50dO000000sPppm1255->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1255->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1255->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1255->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1255->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1255->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1255->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1255->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1255);
   
   
   TF1 *quadLineFit1256 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1256->SetFillColor(19);
   quadLineFit1256->SetFillStyle(0);
   quadLineFit1256->SetLineColor(11);
   quadLineFit1256->SetLineWidth(2);
   quadLineFit1256->SetChisquare(25.06298);
   quadLineFit1256->SetNDF(1);
   quadLineFit1256->GetXaxis()->SetLabelFont(42);
   quadLineFit1256->GetXaxis()->SetTitleOffset(1);
   quadLineFit1256->GetXaxis()->SetTitleFont(42);
   quadLineFit1256->GetYaxis()->SetLabelFont(42);
   quadLineFit1256->GetYaxis()->SetTitleFont(42);
   quadLineFit1256->SetParameter(0,8.003336);
   quadLineFit1256->SetParError(0,0.05957371);
   quadLineFit1256->SetParLimits(0,0,0);
   quadLineFit1256->SetParameter(1,-0.2268349);
   quadLineFit1256->SetParError(1,0.003296114);
   quadLineFit1256->SetParLimits(1,0,0);
   quadLineFit1256->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1256);
   gre->Draw("p ");
   
   TF1 *quadLineFit1257 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1257->SetFillColor(19);
   quadLineFit1257->SetFillStyle(0);
   quadLineFit1257->SetLineColor(11);
   quadLineFit1257->SetLineWidth(2);
   quadLineFit1257->SetChisquare(25.06298);
   quadLineFit1257->SetNDF(1);
   quadLineFit1257->GetXaxis()->SetLabelFont(42);
   quadLineFit1257->GetXaxis()->SetTitleOffset(1);
   quadLineFit1257->GetXaxis()->SetTitleFont(42);
   quadLineFit1257->GetYaxis()->SetLabelFont(42);
   quadLineFit1257->GetYaxis()->SetTitleFont(42);
   quadLineFit1257->SetParameter(0,8.003336);
   quadLineFit1257->SetParError(0,0.05957371);
   quadLineFit1257->SetParLimits(0,0,0);
   quadLineFit1257->SetParameter(1,-0.2268349);
   quadLineFit1257->SetParError(1,0.003296114);
   quadLineFit1257->SetParLimits(1,0,0);
   quadLineFit1257->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("40.000000 ppm","   40 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("20.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-20.000000 ppm","  #minus20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-40.000000 ppm","  #minus40 ppm","lpf");
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
