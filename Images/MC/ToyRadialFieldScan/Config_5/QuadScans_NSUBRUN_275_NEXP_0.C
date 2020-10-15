void QuadScans_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1261[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1261[2] = {
   -3.169082,
   -2.760348};
   Double_t -50.000000 ppm_fex1261[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1261[2] = {
   0.008888156,
   0.008888156};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1261,-50.000000 ppm_fy1261,-50.000000 ppm_fex1261,-50.000000 ppm_fey1261);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1261 = new TH1F("Graph_mI50dO000000sPppm1261","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1261->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1261->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1261->SetDirectory(0);
   Graph_mI50dO000000sPppm1261->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1261->SetLineColor(ci);
   Graph_mI50dO000000sPppm1261->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1261->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1261->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1261->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1261->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1261->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1261->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1261->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1261->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1261->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1261->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1261->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1261->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1261->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1261->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1261->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1261);
   
   
   TF1 *quadLineFit1262 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1262->SetFillColor(19);
   quadLineFit1262->SetFillStyle(0);
   quadLineFit1262->SetLineWidth(2);
   quadLineFit1262->SetChisquare(5.640173e-17);
   quadLineFit1262->SetNDF(0);
   quadLineFit1262->GetXaxis()->SetLabelFont(42);
   quadLineFit1262->GetXaxis()->SetTitleOffset(1);
   quadLineFit1262->GetXaxis()->SetTitleFont(42);
   quadLineFit1262->GetYaxis()->SetLabelFont(42);
   quadLineFit1262->GetYaxis()->SetTitleFont(42);
   quadLineFit1262->SetParameter(0,-6.012452);
   quadLineFit1262->SetParError(0,0.0939371);
   quadLineFit1262->SetParLimits(0,0,0);
   quadLineFit1262->SetParameter(1,0.1777106);
   quadLineFit1262->SetParError(1,0.005465109);
   quadLineFit1262->SetParLimits(1,0,0);
   quadLineFit1262->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1262);
   gre->Draw("ap");
   
   TF1 *quadLineFit1263 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1263->SetFillColor(19);
   quadLineFit1263->SetFillStyle(0);
   quadLineFit1263->SetLineWidth(2);
   quadLineFit1263->SetChisquare(5.640173e-17);
   quadLineFit1263->SetNDF(0);
   quadLineFit1263->GetXaxis()->SetLabelFont(42);
   quadLineFit1263->GetXaxis()->SetTitleOffset(1);
   quadLineFit1263->GetXaxis()->SetTitleFont(42);
   quadLineFit1263->GetYaxis()->SetLabelFont(42);
   quadLineFit1263->GetYaxis()->SetTitleFont(42);
   quadLineFit1263->SetParameter(0,-6.012452);
   quadLineFit1263->SetParError(0,0.0939371);
   quadLineFit1263->SetParLimits(0,0,0);
   quadLineFit1263->SetParameter(1,0.1777106);
   quadLineFit1263->SetParError(1,0.005465109);
   quadLineFit1263->SetParLimits(1,0,0);
   quadLineFit1263->Draw("same");
   
   Double_t -40.000000 ppm_fx1263[2] = {
   16,
   18.3};
   Double_t -40.000000 ppm_fy1263[2] = {
   -2.397523,
   -2.104901};
   Double_t -40.000000 ppm_fex1263[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1263[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1263,-40.000000 ppm_fy1263,-40.000000 ppm_fex1263,-40.000000 ppm_fey1263);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1263 = new TH1F("Graph_mI40dO000000sPppm1263","Graph",100,15.77,18.53);
   Graph_mI40dO000000sPppm1263->SetMinimum(-2.437451);
   Graph_mI40dO000000sPppm1263->SetMaximum(-2.064973);
   Graph_mI40dO000000sPppm1263->SetDirectory(0);
   Graph_mI40dO000000sPppm1263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1263->SetLineColor(ci);
   Graph_mI40dO000000sPppm1263->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1263->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1263->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1263->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1263->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1263->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1263->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1263->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1263);
   
   
   TF1 *quadLineFit1264 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1264->SetFillColor(19);
   quadLineFit1264->SetFillStyle(0);
   quadLineFit1264->SetLineColor(2);
   quadLineFit1264->SetLineWidth(2);
   quadLineFit1264->SetChisquare(5.924719e-17);
   quadLineFit1264->SetNDF(0);
   quadLineFit1264->GetXaxis()->SetLabelFont(42);
   quadLineFit1264->GetXaxis()->SetTitleOffset(1);
   quadLineFit1264->GetXaxis()->SetTitleFont(42);
   quadLineFit1264->GetYaxis()->SetLabelFont(42);
   quadLineFit1264->GetYaxis()->SetTitleFont(42);
   quadLineFit1264->SetParameter(0,-4.433152);
   quadLineFit1264->SetParError(0,0.0939371);
   quadLineFit1264->SetParLimits(0,0,0);
   quadLineFit1264->SetParameter(1,0.1272268);
   quadLineFit1264->SetParError(1,0.005465109);
   quadLineFit1264->SetParLimits(1,0,0);
   quadLineFit1264->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1264);
   gre->Draw("p ");
   
   TF1 *quadLineFit1265 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1265->SetFillColor(19);
   quadLineFit1265->SetFillStyle(0);
   quadLineFit1265->SetLineColor(2);
   quadLineFit1265->SetLineWidth(2);
   quadLineFit1265->SetChisquare(5.924719e-17);
   quadLineFit1265->SetNDF(0);
   quadLineFit1265->GetXaxis()->SetLabelFont(42);
   quadLineFit1265->GetXaxis()->SetTitleOffset(1);
   quadLineFit1265->GetXaxis()->SetTitleFont(42);
   quadLineFit1265->GetYaxis()->SetLabelFont(42);
   quadLineFit1265->GetYaxis()->SetTitleFont(42);
   quadLineFit1265->SetParameter(0,-4.433152);
   quadLineFit1265->SetParError(0,0.0939371);
   quadLineFit1265->SetParLimits(0,0,0);
   quadLineFit1265->SetParameter(1,0.1272268);
   quadLineFit1265->SetParError(1,0.005465109);
   quadLineFit1265->SetParLimits(1,0,0);
   quadLineFit1265->Draw("same");
   
   Double_t -30.000000 ppm_fx1265[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1265[2] = {
   -1.646688,
   -1.442011};
   Double_t -30.000000 ppm_fex1265[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1265[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1265,-30.000000 ppm_fy1265,-30.000000 ppm_fex1265,-30.000000 ppm_fey1265);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1265 = new TH1F("Graph_mI30dO000000sPppm1265","Graph",100,15.77,18.53);
   Graph_mI30dO000000sPppm1265->SetMinimum(-1.677822);
   Graph_mI30dO000000sPppm1265->SetMaximum(-1.410878);
   Graph_mI30dO000000sPppm1265->SetDirectory(0);
   Graph_mI30dO000000sPppm1265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1265->SetLineColor(ci);
   Graph_mI30dO000000sPppm1265->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1265->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1265->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1265->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1265->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1265->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1265->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1265->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1265);
   
   
   TF1 *quadLineFit1266 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1266->SetFillColor(19);
   quadLineFit1266->SetFillStyle(0);
   quadLineFit1266->SetLineColor(3);
   quadLineFit1266->SetLineWidth(2);
   quadLineFit1266->SetChisquare(6.58988e-17);
   quadLineFit1266->SetNDF(0);
   quadLineFit1266->GetXaxis()->SetLabelFont(42);
   quadLineFit1266->GetXaxis()->SetTitleOffset(1);
   quadLineFit1266->GetXaxis()->SetTitleFont(42);
   quadLineFit1266->GetYaxis()->SetLabelFont(42);
   quadLineFit1266->GetYaxis()->SetTitleFont(42);
   quadLineFit1266->SetParameter(0,-3.070529);
   quadLineFit1266->SetParError(0,0.0939371);
   quadLineFit1266->SetParLimits(0,0,0);
   quadLineFit1266->SetParameter(1,0.08899006);
   quadLineFit1266->SetParError(1,0.005465109);
   quadLineFit1266->SetParLimits(1,0,0);
   quadLineFit1266->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1266);
   gre->Draw("p ");
   
   TF1 *quadLineFit1267 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1267->SetFillColor(19);
   quadLineFit1267->SetFillStyle(0);
   quadLineFit1267->SetLineColor(3);
   quadLineFit1267->SetLineWidth(2);
   quadLineFit1267->SetChisquare(6.58988e-17);
   quadLineFit1267->SetNDF(0);
   quadLineFit1267->GetXaxis()->SetLabelFont(42);
   quadLineFit1267->GetXaxis()->SetTitleOffset(1);
   quadLineFit1267->GetXaxis()->SetTitleFont(42);
   quadLineFit1267->GetYaxis()->SetLabelFont(42);
   quadLineFit1267->GetYaxis()->SetTitleFont(42);
   quadLineFit1267->SetParameter(0,-3.070529);
   quadLineFit1267->SetParError(0,0.0939371);
   quadLineFit1267->SetParLimits(0,0,0);
   quadLineFit1267->SetParameter(1,0.08899006);
   quadLineFit1267->SetParError(1,0.005465109);
   quadLineFit1267->SetParLimits(1,0,0);
   quadLineFit1267->Draw("same");
   
   Double_t -20.000000 ppm_fx1267[2] = {
   16,
   18.3};
   Double_t -20.000000 ppm_fy1267[2] = {
   -0.8882948,
   -0.7816672};
   Double_t -20.000000 ppm_fex1267[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1267[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1267,-20.000000 ppm_fy1267,-20.000000 ppm_fex1267,-20.000000 ppm_fey1267);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1267 = new TH1F("Graph_mI20dO000000sPppm1267","Graph",100,15.77,18.53);
   Graph_mI20dO000000sPppm1267->SetMinimum(-0.9096233);
   Graph_mI20dO000000sPppm1267->SetMaximum(-0.7603386);
   Graph_mI20dO000000sPppm1267->SetDirectory(0);
   Graph_mI20dO000000sPppm1267->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1267->SetLineColor(ci);
   Graph_mI20dO000000sPppm1267->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1267->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1267->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1267->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1267->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1267->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1267->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1267->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1267);
   
   
   TF1 *quadLineFit1268 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1268->SetFillColor(19);
   quadLineFit1268->SetFillStyle(0);
   quadLineFit1268->SetLineColor(4);
   quadLineFit1268->SetLineWidth(2);
   quadLineFit1268->SetChisquare(5.929029e-20);
   quadLineFit1268->SetNDF(0);
   quadLineFit1268->GetXaxis()->SetLabelFont(42);
   quadLineFit1268->GetXaxis()->SetTitleOffset(1);
   quadLineFit1268->GetXaxis()->SetTitleFont(42);
   quadLineFit1268->GetYaxis()->SetLabelFont(42);
   quadLineFit1268->GetYaxis()->SetTitleFont(42);
   quadLineFit1268->SetParameter(0,-1.630052);
   quadLineFit1268->SetParError(0,0.0939371);
   quadLineFit1268->SetParLimits(0,0,0);
   quadLineFit1268->SetParameter(1,0.04635983);
   quadLineFit1268->SetParError(1,0.005465109);
   quadLineFit1268->SetParLimits(1,0,0);
   quadLineFit1268->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1268);
   gre->Draw("p ");
   
   TF1 *quadLineFit1269 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1269->SetFillColor(19);
   quadLineFit1269->SetFillStyle(0);
   quadLineFit1269->SetLineColor(4);
   quadLineFit1269->SetLineWidth(2);
   quadLineFit1269->SetChisquare(5.929029e-20);
   quadLineFit1269->SetNDF(0);
   quadLineFit1269->GetXaxis()->SetLabelFont(42);
   quadLineFit1269->GetXaxis()->SetTitleOffset(1);
   quadLineFit1269->GetXaxis()->SetTitleFont(42);
   quadLineFit1269->GetYaxis()->SetLabelFont(42);
   quadLineFit1269->GetYaxis()->SetTitleFont(42);
   quadLineFit1269->SetParameter(0,-1.630052);
   quadLineFit1269->SetParError(0,0.0939371);
   quadLineFit1269->SetParLimits(0,0,0);
   quadLineFit1269->SetParameter(1,0.04635983);
   quadLineFit1269->SetParError(1,0.005465109);
   quadLineFit1269->SetParLimits(1,0,0);
   quadLineFit1269->Draw("same");
   
   Double_t -10.000000 ppm_fx1269[2] = {
   16,
   18.3};
   Double_t -10.000000 ppm_fy1269[2] = {
   -0.1518806,
   -0.1220055};
   Double_t -10.000000 ppm_fex1269[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1269[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1269,-10.000000 ppm_fy1269,-10.000000 ppm_fex1269,-10.000000 ppm_fey1269);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1269 = new TH1F("Graph_mI10dO000000sPppm1269","Graph",100,15.77,18.53);
   Graph_mI10dO000000sPppm1269->SetMinimum(-0.1655339);
   Graph_mI10dO000000sPppm1269->SetMaximum(-0.1083522);
   Graph_mI10dO000000sPppm1269->SetDirectory(0);
   Graph_mI10dO000000sPppm1269->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1269->SetLineColor(ci);
   Graph_mI10dO000000sPppm1269->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1269->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1269->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1269->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1269->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1269->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1269->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1269->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1269);
   
   
   TF1 *quadLineFit1270 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1270->SetFillColor(19);
   quadLineFit1270->SetFillStyle(0);
   quadLineFit1270->SetLineColor(5);
   quadLineFit1270->SetLineWidth(2);
   quadLineFit1270->SetChisquare(2.997777e-19);
   quadLineFit1270->SetNDF(0);
   quadLineFit1270->GetXaxis()->SetLabelFont(42);
   quadLineFit1270->GetXaxis()->SetTitleOffset(1);
   quadLineFit1270->GetXaxis()->SetTitleFont(42);
   quadLineFit1270->GetYaxis()->SetLabelFont(42);
   quadLineFit1270->GetYaxis()->SetTitleFont(42);
   quadLineFit1270->SetParameter(0,-0.3597073);
   quadLineFit1270->SetParError(0,0.0939371);
   quadLineFit1270->SetParLimits(0,0,0);
   quadLineFit1270->SetParameter(1,0.01298917);
   quadLineFit1270->SetParError(1,0.005465109);
   quadLineFit1270->SetParLimits(1,0,0);
   quadLineFit1270->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1270);
   gre->Draw("p ");
   
   TF1 *quadLineFit1271 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1271->SetFillColor(19);
   quadLineFit1271->SetFillStyle(0);
   quadLineFit1271->SetLineColor(5);
   quadLineFit1271->SetLineWidth(2);
   quadLineFit1271->SetChisquare(2.997777e-19);
   quadLineFit1271->SetNDF(0);
   quadLineFit1271->GetXaxis()->SetLabelFont(42);
   quadLineFit1271->GetXaxis()->SetTitleOffset(1);
   quadLineFit1271->GetXaxis()->SetTitleFont(42);
   quadLineFit1271->GetYaxis()->SetLabelFont(42);
   quadLineFit1271->GetYaxis()->SetTitleFont(42);
   quadLineFit1271->SetParameter(0,-0.3597073);
   quadLineFit1271->SetParError(0,0.0939371);
   quadLineFit1271->SetParLimits(0,0,0);
   quadLineFit1271->SetParameter(1,0.01298917);
   quadLineFit1271->SetParError(1,0.005465109);
   quadLineFit1271->SetParLimits(1,0,0);
   quadLineFit1271->Draw("same");
   
   Double_t 0.000000 ppm_fx1271[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1271[2] = {
   0.5992569,
   0.5323227};
   Double_t 0.000000 ppm_fex1271[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1271[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,0.000000 ppm_fx1271,0.000000 ppm_fy1271,0.000000 ppm_fex1271,0.000000 ppm_fey1271);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1271 = new TH1F("Graph_0dO000000sPppm1271","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1271->SetMinimum(0.5149635);
   Graph_0dO000000sPppm1271->SetMaximum(0.6166161);
   Graph_0dO000000sPppm1271->SetDirectory(0);
   Graph_0dO000000sPppm1271->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1271->SetLineColor(ci);
   Graph_0dO000000sPppm1271->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1271->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1271->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1271->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1271->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1271->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1271->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1271->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1271);
   
   
   TF1 *quadLineFit1272 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1272->SetFillColor(19);
   quadLineFit1272->SetFillStyle(0);
   quadLineFit1272->SetLineColor(6);
   quadLineFit1272->SetLineWidth(2);
   quadLineFit1272->SetChisquare(9.978291e-20);
   quadLineFit1272->SetNDF(0);
   quadLineFit1272->GetXaxis()->SetLabelFont(42);
   quadLineFit1272->GetXaxis()->SetTitleOffset(1);
   quadLineFit1272->GetXaxis()->SetTitleFont(42);
   quadLineFit1272->GetYaxis()->SetLabelFont(42);
   quadLineFit1272->GetYaxis()->SetTitleFont(42);
   quadLineFit1272->SetParameter(0,1.064886);
   quadLineFit1272->SetParError(0,0.0939371);
   quadLineFit1272->SetParLimits(0,0,0);
   quadLineFit1272->SetParameter(1,-0.0291018);
   quadLineFit1272->SetParError(1,0.005465109);
   quadLineFit1272->SetParLimits(1,0,0);
   quadLineFit1272->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1272);
   gre->Draw("p ");
   
   TF1 *quadLineFit1273 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1273->SetFillColor(19);
   quadLineFit1273->SetFillStyle(0);
   quadLineFit1273->SetLineColor(6);
   quadLineFit1273->SetLineWidth(2);
   quadLineFit1273->SetChisquare(9.978291e-20);
   quadLineFit1273->SetNDF(0);
   quadLineFit1273->GetXaxis()->SetLabelFont(42);
   quadLineFit1273->GetXaxis()->SetTitleOffset(1);
   quadLineFit1273->GetXaxis()->SetTitleFont(42);
   quadLineFit1273->GetYaxis()->SetLabelFont(42);
   quadLineFit1273->GetYaxis()->SetTitleFont(42);
   quadLineFit1273->SetParameter(0,1.064886);
   quadLineFit1273->SetParError(0,0.0939371);
   quadLineFit1273->SetParLimits(0,0,0);
   quadLineFit1273->SetParameter(1,-0.0291018);
   quadLineFit1273->SetParError(1,0.005465109);
   quadLineFit1273->SetParLimits(1,0,0);
   quadLineFit1273->Draw("same");
   
   Double_t 10.000000 ppm_fx1273[2] = {
   16,
   18.3};
   Double_t 10.000000 ppm_fy1273[2] = {
   1.349733,
   1.194754};
   Double_t 10.000000 ppm_fex1273[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1273[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,10.000000 ppm_fx1273,10.000000 ppm_fy1273,10.000000 ppm_fex1273,10.000000 ppm_fey1273);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1273 = new TH1F("Graph_10dO000000sPppm1273","Graph",100,15.77,18.53);
   Graph_10dO000000sPppm1273->SetMinimum(1.168591);
   Graph_10dO000000sPppm1273->SetMaximum(1.375897);
   Graph_10dO000000sPppm1273->SetDirectory(0);
   Graph_10dO000000sPppm1273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1273->SetLineColor(ci);
   Graph_10dO000000sPppm1273->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1273->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1273->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1273->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1273->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1273->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1273->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1273);
   
   
   TF1 *quadLineFit1274 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1274->SetFillColor(19);
   quadLineFit1274->SetFillStyle(0);
   quadLineFit1274->SetLineColor(7);
   quadLineFit1274->SetLineWidth(2);
   quadLineFit1274->SetChisquare(1.936614e-19);
   quadLineFit1274->SetNDF(0);
   quadLineFit1274->GetXaxis()->SetLabelFont(42);
   quadLineFit1274->GetXaxis()->SetTitleOffset(1);
   quadLineFit1274->GetXaxis()->SetTitleFont(42);
   quadLineFit1274->GetYaxis()->SetLabelFont(42);
   quadLineFit1274->GetYaxis()->SetTitleFont(42);
   quadLineFit1274->SetParameter(0,2.427844);
   quadLineFit1274->SetParError(0,0.0939371);
   quadLineFit1274->SetParLimits(0,0,0);
   quadLineFit1274->SetParameter(1,-0.06738194);
   quadLineFit1274->SetParError(1,0.005465109);
   quadLineFit1274->SetParLimits(1,0,0);
   quadLineFit1274->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1274);
   gre->Draw("p ");
   
   TF1 *quadLineFit1275 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1275->SetFillColor(19);
   quadLineFit1275->SetFillStyle(0);
   quadLineFit1275->SetLineColor(7);
   quadLineFit1275->SetLineWidth(2);
   quadLineFit1275->SetChisquare(1.936614e-19);
   quadLineFit1275->SetNDF(0);
   quadLineFit1275->GetXaxis()->SetLabelFont(42);
   quadLineFit1275->GetXaxis()->SetTitleOffset(1);
   quadLineFit1275->GetXaxis()->SetTitleFont(42);
   quadLineFit1275->GetYaxis()->SetLabelFont(42);
   quadLineFit1275->GetYaxis()->SetTitleFont(42);
   quadLineFit1275->SetParameter(0,2.427844);
   quadLineFit1275->SetParError(0,0.0939371);
   quadLineFit1275->SetParLimits(0,0,0);
   quadLineFit1275->SetParameter(1,-0.06738194);
   quadLineFit1275->SetParError(1,0.005465109);
   quadLineFit1275->SetParLimits(1,0,0);
   quadLineFit1275->Draw("same");
   
   Double_t 20.000000 ppm_fx1275[2] = {
   16,
   18.3};
   Double_t 20.000000 ppm_fy1275[2] = {
   2.110867,
   1.851004};
   Double_t 20.000000 ppm_fex1275[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1275[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,20.000000 ppm_fx1275,20.000000 ppm_fy1275,20.000000 ppm_fex1275,20.000000 ppm_fey1275);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1275 = new TH1F("Graph_20dO000000sPppm1275","Graph",100,15.77,18.53);
   Graph_20dO000000sPppm1275->SetMinimum(1.814352);
   Graph_20dO000000sPppm1275->SetMaximum(2.147519);
   Graph_20dO000000sPppm1275->SetDirectory(0);
   Graph_20dO000000sPppm1275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1275->SetLineColor(ci);
   Graph_20dO000000sPppm1275->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1275->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1275->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1275->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1275->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1275->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1275->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1275);
   
   
   TF1 *quadLineFit1276 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1276->SetFillColor(19);
   quadLineFit1276->SetFillStyle(0);
   quadLineFit1276->SetLineColor(8);
   quadLineFit1276->SetLineWidth(2);
   quadLineFit1276->SetChisquare(1.902818e-17);
   quadLineFit1276->SetNDF(0);
   quadLineFit1276->GetXaxis()->SetLabelFont(42);
   quadLineFit1276->GetXaxis()->SetTitleOffset(1);
   quadLineFit1276->GetXaxis()->SetTitleFont(42);
   quadLineFit1276->GetYaxis()->SetLabelFont(42);
   quadLineFit1276->GetYaxis()->SetTitleFont(42);
   quadLineFit1276->SetParameter(0,3.918607);
   quadLineFit1276->SetParError(0,0.0939371);
   quadLineFit1276->SetParLimits(0,0,0);
   quadLineFit1276->SetParameter(1,-0.1129837);
   quadLineFit1276->SetParError(1,0.005465109);
   quadLineFit1276->SetParLimits(1,0,0);
   quadLineFit1276->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1276);
   gre->Draw("p ");
   
   TF1 *quadLineFit1277 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1277->SetFillColor(19);
   quadLineFit1277->SetFillStyle(0);
   quadLineFit1277->SetLineColor(8);
   quadLineFit1277->SetLineWidth(2);
   quadLineFit1277->SetChisquare(1.902818e-17);
   quadLineFit1277->SetNDF(0);
   quadLineFit1277->GetXaxis()->SetLabelFont(42);
   quadLineFit1277->GetXaxis()->SetTitleOffset(1);
   quadLineFit1277->GetXaxis()->SetTitleFont(42);
   quadLineFit1277->GetYaxis()->SetLabelFont(42);
   quadLineFit1277->GetYaxis()->SetTitleFont(42);
   quadLineFit1277->SetParameter(0,3.918607);
   quadLineFit1277->SetParError(0,0.0939371);
   quadLineFit1277->SetParLimits(0,0,0);
   quadLineFit1277->SetParameter(1,-0.1129837);
   quadLineFit1277->SetParError(1,0.005465109);
   quadLineFit1277->SetParLimits(1,0,0);
   quadLineFit1277->Draw("same");
   
   Double_t 30.000000 ppm_fx1277[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1277[2] = {
   2.860858,
   2.50225};
   Double_t 30.000000 ppm_fex1277[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1277[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,30.000000 ppm_fx1277,30.000000 ppm_fy1277,30.000000 ppm_fex1277,30.000000 ppm_fey1277);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1277 = new TH1F("Graph_30dO000000sPppm1277","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1277->SetMinimum(2.455724);
   Graph_30dO000000sPppm1277->SetMaximum(2.907384);
   Graph_30dO000000sPppm1277->SetDirectory(0);
   Graph_30dO000000sPppm1277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1277->SetLineColor(ci);
   Graph_30dO000000sPppm1277->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1277->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1277->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1277->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1277->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1277->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1277->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1277);
   
   
   TF1 *quadLineFit1278 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1278->SetFillColor(19);
   quadLineFit1278->SetFillStyle(0);
   quadLineFit1278->SetLineColor(9);
   quadLineFit1278->SetLineWidth(2);
   quadLineFit1278->SetChisquare(2.928481e-16);
   quadLineFit1278->SetNDF(0);
   quadLineFit1278->GetXaxis()->SetLabelFont(42);
   quadLineFit1278->GetXaxis()->SetTitleOffset(1);
   quadLineFit1278->GetXaxis()->SetTitleFont(42);
   quadLineFit1278->GetYaxis()->SetLabelFont(42);
   quadLineFit1278->GetYaxis()->SetTitleFont(42);
   quadLineFit1278->SetParameter(0,5.355518);
   quadLineFit1278->SetParError(0,0.0939371);
   quadLineFit1278->SetParLimits(0,0,0);
   quadLineFit1278->SetParameter(1,-0.1559163);
   quadLineFit1278->SetParError(1,0.005465109);
   quadLineFit1278->SetParLimits(1,0,0);
   quadLineFit1278->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1278);
   gre->Draw("p ");
   
   TF1 *quadLineFit1279 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1279->SetFillColor(19);
   quadLineFit1279->SetFillStyle(0);
   quadLineFit1279->SetLineColor(9);
   quadLineFit1279->SetLineWidth(2);
   quadLineFit1279->SetChisquare(2.928481e-16);
   quadLineFit1279->SetNDF(0);
   quadLineFit1279->GetXaxis()->SetLabelFont(42);
   quadLineFit1279->GetXaxis()->SetTitleOffset(1);
   quadLineFit1279->GetXaxis()->SetTitleFont(42);
   quadLineFit1279->GetYaxis()->SetLabelFont(42);
   quadLineFit1279->GetYaxis()->SetTitleFont(42);
   quadLineFit1279->SetParameter(0,5.355518);
   quadLineFit1279->SetParError(0,0.0939371);
   quadLineFit1279->SetParLimits(0,0,0);
   quadLineFit1279->SetParameter(1,-0.1559163);
   quadLineFit1279->SetParError(1,0.005465109);
   quadLineFit1279->SetParLimits(1,0,0);
   quadLineFit1279->Draw("same");
   
   Double_t 40.000000 ppm_fx1279[2] = {
   16,
   18.3};
   Double_t 40.000000 ppm_fy1279[2] = {
   3.616249,
   3.165873};
   Double_t 40.000000 ppm_fex1279[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1279[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,40.000000 ppm_fx1279,40.000000 ppm_fy1279,40.000000 ppm_fex1279,40.000000 ppm_fey1279);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1279 = new TH1F("Graph_40dO000000sPppm1279","Graph",100,15.77,18.53);
   Graph_40dO000000sPppm1279->SetMinimum(3.11017);
   Graph_40dO000000sPppm1279->SetMaximum(3.671952);
   Graph_40dO000000sPppm1279->SetDirectory(0);
   Graph_40dO000000sPppm1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1279->SetLineColor(ci);
   Graph_40dO000000sPppm1279->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1279->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1279->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1279->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1279->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1279->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1279->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1279);
   
   
   TF1 *quadLineFit1280 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1280->SetFillColor(19);
   quadLineFit1280->SetFillStyle(0);
   quadLineFit1280->SetLineColor(10);
   quadLineFit1280->SetLineWidth(2);
   quadLineFit1280->SetChisquare(3.590182e-16);
   quadLineFit1280->SetNDF(0);
   quadLineFit1280->GetXaxis()->SetLabelFont(42);
   quadLineFit1280->GetXaxis()->SetTitleOffset(1);
   quadLineFit1280->GetXaxis()->SetTitleFont(42);
   quadLineFit1280->GetYaxis()->SetLabelFont(42);
   quadLineFit1280->GetYaxis()->SetTitleFont(42);
   quadLineFit1280->SetParameter(0,6.749296);
   quadLineFit1280->SetParError(0,0.0939371);
   quadLineFit1280->SetParLimits(0,0,0);
   quadLineFit1280->SetParameter(1,-0.1958154);
   quadLineFit1280->SetParError(1,0.005465109);
   quadLineFit1280->SetParLimits(1,0,0);
   quadLineFit1280->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1280);
   gre->Draw("p ");
   
   TF1 *quadLineFit1281 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1281->SetFillColor(19);
   quadLineFit1281->SetFillStyle(0);
   quadLineFit1281->SetLineColor(10);
   quadLineFit1281->SetLineWidth(2);
   quadLineFit1281->SetChisquare(3.590182e-16);
   quadLineFit1281->SetNDF(0);
   quadLineFit1281->GetXaxis()->SetLabelFont(42);
   quadLineFit1281->GetXaxis()->SetTitleOffset(1);
   quadLineFit1281->GetXaxis()->SetTitleFont(42);
   quadLineFit1281->GetYaxis()->SetLabelFont(42);
   quadLineFit1281->GetYaxis()->SetTitleFont(42);
   quadLineFit1281->SetParameter(0,6.749296);
   quadLineFit1281->SetParError(0,0.0939371);
   quadLineFit1281->SetParLimits(0,0,0);
   quadLineFit1281->SetParameter(1,-0.1958154);
   quadLineFit1281->SetParError(1,0.005465109);
   quadLineFit1281->SetParLimits(1,0,0);
   quadLineFit1281->Draw("same");
   
   Double_t 50.000000 ppm_fx1281[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1281[2] = {
   4.35729,
   3.809489};
   Double_t 50.000000 ppm_fex1281[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1281[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,50.000000 ppm_fx1281,50.000000 ppm_fy1281,50.000000 ppm_fex1281,50.000000 ppm_fey1281);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1281 = new TH1F("Graph_50dO000000sPppm1281","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1281->SetMinimum(3.744043);
   Graph_50dO000000sPppm1281->SetMaximum(4.422736);
   Graph_50dO000000sPppm1281->SetDirectory(0);
   Graph_50dO000000sPppm1281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1281->SetLineColor(ci);
   Graph_50dO000000sPppm1281->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1281->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1281->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1281->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1281->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1281->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1281->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1281);
   
   
   TF1 *quadLineFit1282 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1282->SetFillColor(19);
   quadLineFit1282->SetFillStyle(0);
   quadLineFit1282->SetLineColor(11);
   quadLineFit1282->SetLineWidth(2);
   quadLineFit1282->SetChisquare(2.635228e-19);
   quadLineFit1282->SetNDF(0);
   quadLineFit1282->GetXaxis()->SetLabelFont(42);
   quadLineFit1282->GetXaxis()->SetTitleOffset(1);
   quadLineFit1282->GetXaxis()->SetTitleFont(42);
   quadLineFit1282->GetYaxis()->SetLabelFont(42);
   quadLineFit1282->GetYaxis()->SetTitleFont(42);
   quadLineFit1282->SetParameter(0,8.168084);
   quadLineFit1282->SetParError(0,0.0939371);
   quadLineFit1282->SetParLimits(0,0,0);
   quadLineFit1282->SetParameter(1,-0.2381746);
   quadLineFit1282->SetParError(1,0.005465109);
   quadLineFit1282->SetParLimits(1,0,0);
   quadLineFit1282->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1282);
   gre->Draw("p ");
   
   TF1 *quadLineFit1283 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1283->SetFillColor(19);
   quadLineFit1283->SetFillStyle(0);
   quadLineFit1283->SetLineColor(11);
   quadLineFit1283->SetLineWidth(2);
   quadLineFit1283->SetChisquare(2.635228e-19);
   quadLineFit1283->SetNDF(0);
   quadLineFit1283->GetXaxis()->SetLabelFont(42);
   quadLineFit1283->GetXaxis()->SetTitleOffset(1);
   quadLineFit1283->GetXaxis()->SetTitleFont(42);
   quadLineFit1283->GetYaxis()->SetLabelFont(42);
   quadLineFit1283->GetYaxis()->SetTitleFont(42);
   quadLineFit1283->SetParameter(0,8.168084);
   quadLineFit1283->SetParError(0,0.0939371);
   quadLineFit1283->SetParLimits(0,0,0);
   quadLineFit1283->SetParameter(1,-0.2381746);
   quadLineFit1283->SetParError(1,0.005465109);
   quadLineFit1283->SetParLimits(1,0,0);
   quadLineFit1283->Draw("same");
   
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
