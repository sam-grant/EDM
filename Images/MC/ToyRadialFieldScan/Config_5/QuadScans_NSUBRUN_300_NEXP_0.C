void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1287[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1287[2] = {
   -3.181575,
   -2.754947};
   Double_t -50.000000 ppm_fex1287[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1287[2] = {
   0.008508651,
   0.008508651};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1287,-50.000000 ppm_fy1287,-50.000000 ppm_fex1287,-50.000000 ppm_fey1287);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1287 = new TH1F("Graph_mI50dO000000sPppm1287","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1287->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1287->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1287->SetDirectory(0);
   Graph_mI50dO000000sPppm1287->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1287->SetLineColor(ci);
   Graph_mI50dO000000sPppm1287->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1287->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1287->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1287->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1287->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1287->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1287->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1287->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1287->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1287->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1287->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1287->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1287->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1287->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1287->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1287->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1287);
   
   
   TF1 *quadLineFit1288 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1288->SetFillColor(19);
   quadLineFit1288->SetFillStyle(0);
   quadLineFit1288->SetLineWidth(2);
   quadLineFit1288->SetChisquare(5.559414e-21);
   quadLineFit1288->SetNDF(0);
   quadLineFit1288->GetXaxis()->SetLabelFont(42);
   quadLineFit1288->GetXaxis()->SetTitleOffset(1);
   quadLineFit1288->GetXaxis()->SetTitleFont(42);
   quadLineFit1288->GetYaxis()->SetLabelFont(42);
   quadLineFit1288->GetYaxis()->SetTitleFont(42);
   quadLineFit1288->SetParameter(0,-6.149422);
   quadLineFit1288->SetParError(0,0.08992619);
   quadLineFit1288->SetParLimits(0,0,0);
   quadLineFit1288->SetParameter(1,0.1854905);
   quadLineFit1288->SetParError(1,0.005231761);
   quadLineFit1288->SetParLimits(1,0,0);
   quadLineFit1288->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1288);
   gre->Draw("ap");
   
   TF1 *quadLineFit1289 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1289->SetFillColor(19);
   quadLineFit1289->SetFillStyle(0);
   quadLineFit1289->SetLineWidth(2);
   quadLineFit1289->SetChisquare(5.559414e-21);
   quadLineFit1289->SetNDF(0);
   quadLineFit1289->GetXaxis()->SetLabelFont(42);
   quadLineFit1289->GetXaxis()->SetTitleOffset(1);
   quadLineFit1289->GetXaxis()->SetTitleFont(42);
   quadLineFit1289->GetYaxis()->SetLabelFont(42);
   quadLineFit1289->GetYaxis()->SetTitleFont(42);
   quadLineFit1289->SetParameter(0,-6.149422);
   quadLineFit1289->SetParError(0,0.08992619);
   quadLineFit1289->SetParLimits(0,0,0);
   quadLineFit1289->SetParameter(1,0.1854905);
   quadLineFit1289->SetParError(1,0.005231761);
   quadLineFit1289->SetParLimits(1,0,0);
   quadLineFit1289->Draw("same");
   
   Double_t -40.000000 ppm_fx1289[2] = {
   16,
   18.3};
   Double_t -40.000000 ppm_fy1289[2] = {
   -2.41942,
   -2.100443};
   Double_t -40.000000 ppm_fex1289[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1289[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1289,-40.000000 ppm_fy1289,-40.000000 ppm_fex1289,-40.000000 ppm_fey1289);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1289 = new TH1F("Graph_mI40dO000000sPppm1289","Graph",100,15.77,18.53);
   Graph_mI40dO000000sPppm1289->SetMinimum(-2.461528);
   Graph_mI40dO000000sPppm1289->SetMaximum(-2.058335);
   Graph_mI40dO000000sPppm1289->SetDirectory(0);
   Graph_mI40dO000000sPppm1289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1289->SetLineColor(ci);
   Graph_mI40dO000000sPppm1289->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1289->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1289->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1289->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1289->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1289->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1289->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1289->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1289);
   
   
   TF1 *quadLineFit1290 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1290->SetFillColor(19);
   quadLineFit1290->SetFillStyle(0);
   quadLineFit1290->SetLineColor(2);
   quadLineFit1290->SetLineWidth(2);
   quadLineFit1290->SetChisquare(1.441896e-20);
   quadLineFit1290->SetNDF(0);
   quadLineFit1290->GetXaxis()->SetLabelFont(42);
   quadLineFit1290->GetXaxis()->SetTitleOffset(1);
   quadLineFit1290->GetXaxis()->SetTitleFont(42);
   quadLineFit1290->GetYaxis()->SetLabelFont(42);
   quadLineFit1290->GetYaxis()->SetTitleFont(42);
   quadLineFit1290->SetParameter(0,-4.638389);
   quadLineFit1290->SetParError(0,0.08992619);
   quadLineFit1290->SetParLimits(0,0,0);
   quadLineFit1290->SetParameter(1,0.1386856);
   quadLineFit1290->SetParError(1,0.005231761);
   quadLineFit1290->SetParLimits(1,0,0);
   quadLineFit1290->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1290);
   gre->Draw("p ");
   
   TF1 *quadLineFit1291 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1291->SetFillColor(19);
   quadLineFit1291->SetFillStyle(0);
   quadLineFit1291->SetLineColor(2);
   quadLineFit1291->SetLineWidth(2);
   quadLineFit1291->SetChisquare(1.441896e-20);
   quadLineFit1291->SetNDF(0);
   quadLineFit1291->GetXaxis()->SetLabelFont(42);
   quadLineFit1291->GetXaxis()->SetTitleOffset(1);
   quadLineFit1291->GetXaxis()->SetTitleFont(42);
   quadLineFit1291->GetYaxis()->SetLabelFont(42);
   quadLineFit1291->GetYaxis()->SetTitleFont(42);
   quadLineFit1291->SetParameter(0,-4.638389);
   quadLineFit1291->SetParError(0,0.08992619);
   quadLineFit1291->SetParLimits(0,0,0);
   quadLineFit1291->SetParameter(1,0.1386856);
   quadLineFit1291->SetParError(1,0.005231761);
   quadLineFit1291->SetParLimits(1,0,0);
   quadLineFit1291->Draw("same");
   
   Double_t -30.000000 ppm_fx1291[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1291[2] = {
   -1.651133,
   -1.455007};
   Double_t -30.000000 ppm_fex1291[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1291[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1291,-30.000000 ppm_fy1291,-30.000000 ppm_fex1291,-30.000000 ppm_fey1291);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1291 = new TH1F("Graph_mI30dO000000sPppm1291","Graph",100,15.77,18.53);
   Graph_mI30dO000000sPppm1291->SetMinimum(-1.680956);
   Graph_mI30dO000000sPppm1291->SetMaximum(-1.425184);
   Graph_mI30dO000000sPppm1291->SetDirectory(0);
   Graph_mI30dO000000sPppm1291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1291->SetLineColor(ci);
   Graph_mI30dO000000sPppm1291->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1291->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1291->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1291->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1291->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1291->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1291->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1291);
   
   
   TF1 *quadLineFit1292 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1292->SetFillColor(19);
   quadLineFit1292->SetFillStyle(0);
   quadLineFit1292->SetLineColor(3);
   quadLineFit1292->SetLineWidth(2);
   quadLineFit1292->SetChisquare(4.629118e-20);
   quadLineFit1292->SetNDF(0);
   quadLineFit1292->GetXaxis()->SetLabelFont(42);
   quadLineFit1292->GetXaxis()->SetTitleOffset(1);
   quadLineFit1292->GetXaxis()->SetTitleFont(42);
   quadLineFit1292->GetYaxis()->SetLabelFont(42);
   quadLineFit1292->GetYaxis()->SetTitleFont(42);
   quadLineFit1292->SetParameter(0,-3.015485);
   quadLineFit1292->SetParError(0,0.08992619);
   quadLineFit1292->SetParLimits(0,0,0);
   quadLineFit1292->SetParameter(1,0.08527204);
   quadLineFit1292->SetParError(1,0.005231761);
   quadLineFit1292->SetParLimits(1,0,0);
   quadLineFit1292->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1292);
   gre->Draw("p ");
   
   TF1 *quadLineFit1293 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1293->SetFillColor(19);
   quadLineFit1293->SetFillStyle(0);
   quadLineFit1293->SetLineColor(3);
   quadLineFit1293->SetLineWidth(2);
   quadLineFit1293->SetChisquare(4.629118e-20);
   quadLineFit1293->SetNDF(0);
   quadLineFit1293->GetXaxis()->SetLabelFont(42);
   quadLineFit1293->GetXaxis()->SetTitleOffset(1);
   quadLineFit1293->GetXaxis()->SetTitleFont(42);
   quadLineFit1293->GetYaxis()->SetLabelFont(42);
   quadLineFit1293->GetYaxis()->SetTitleFont(42);
   quadLineFit1293->SetParameter(0,-3.015485);
   quadLineFit1293->SetParError(0,0.08992619);
   quadLineFit1293->SetParLimits(0,0,0);
   quadLineFit1293->SetParameter(1,0.08527204);
   quadLineFit1293->SetParError(1,0.005231761);
   quadLineFit1293->SetParLimits(1,0,0);
   quadLineFit1293->Draw("same");
   
   Double_t -20.000000 ppm_fx1293[2] = {
   16,
   18.3};
   Double_t -20.000000 ppm_fy1293[2] = {
   -0.8993707,
   -0.7956698};
   Double_t -20.000000 ppm_fex1293[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1293[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1293,-20.000000 ppm_fy1293,-20.000000 ppm_fex1293,-20.000000 ppm_fey1293);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1293 = new TH1F("Graph_mI20dO000000sPppm1293","Graph",100,15.77,18.53);
   Graph_mI20dO000000sPppm1293->SetMinimum(-0.9199511);
   Graph_mI20dO000000sPppm1293->SetMaximum(-0.7750893);
   Graph_mI20dO000000sPppm1293->SetDirectory(0);
   Graph_mI20dO000000sPppm1293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1293->SetLineColor(ci);
   Graph_mI20dO000000sPppm1293->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1293->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1293->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1293->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1293->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1293->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1293->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1293);
   
   
   TF1 *quadLineFit1294 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1294->SetFillColor(19);
   quadLineFit1294->SetFillStyle(0);
   quadLineFit1294->SetLineColor(4);
   quadLineFit1294->SetLineWidth(2);
   quadLineFit1294->SetChisquare(5.007848e-20);
   quadLineFit1294->SetNDF(0);
   quadLineFit1294->GetXaxis()->SetLabelFont(42);
   quadLineFit1294->GetXaxis()->SetTitleOffset(1);
   quadLineFit1294->GetXaxis()->SetTitleFont(42);
   quadLineFit1294->GetYaxis()->SetLabelFont(42);
   quadLineFit1294->GetYaxis()->SetTitleFont(42);
   quadLineFit1294->SetParameter(0,-1.620768);
   quadLineFit1294->SetParError(0,0.08992619);
   quadLineFit1294->SetParLimits(0,0,0);
   quadLineFit1294->SetParameter(1,0.04508735);
   quadLineFit1294->SetParError(1,0.005231761);
   quadLineFit1294->SetParLimits(1,0,0);
   quadLineFit1294->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1294);
   gre->Draw("p ");
   
   TF1 *quadLineFit1295 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1295->SetFillColor(19);
   quadLineFit1295->SetFillStyle(0);
   quadLineFit1295->SetLineColor(4);
   quadLineFit1295->SetLineWidth(2);
   quadLineFit1295->SetChisquare(5.007848e-20);
   quadLineFit1295->SetNDF(0);
   quadLineFit1295->GetXaxis()->SetLabelFont(42);
   quadLineFit1295->GetXaxis()->SetTitleOffset(1);
   quadLineFit1295->GetXaxis()->SetTitleFont(42);
   quadLineFit1295->GetYaxis()->SetLabelFont(42);
   quadLineFit1295->GetYaxis()->SetTitleFont(42);
   quadLineFit1295->SetParameter(0,-1.620768);
   quadLineFit1295->SetParError(0,0.08992619);
   quadLineFit1295->SetParLimits(0,0,0);
   quadLineFit1295->SetParameter(1,0.04508735);
   quadLineFit1295->SetParError(1,0.005231761);
   quadLineFit1295->SetParLimits(1,0,0);
   quadLineFit1295->Draw("same");
   
   Double_t -10.000000 ppm_fx1295[2] = {
   16,
   18.3};
   Double_t -10.000000 ppm_fy1295[2] = {
   -0.1668533,
   -0.1361059};
   Double_t -10.000000 ppm_fex1295[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1295[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1295,-10.000000 ppm_fy1295,-10.000000 ppm_fex1295,-10.000000 ppm_fey1295);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1295 = new TH1F("Graph_mI10dO000000sPppm1295","Graph",100,15.77,18.53);
   Graph_mI10dO000000sPppm1295->SetMinimum(-0.1801384);
   Graph_mI10dO000000sPppm1295->SetMaximum(-0.1228207);
   Graph_mI10dO000000sPppm1295->SetDirectory(0);
   Graph_mI10dO000000sPppm1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1295->SetLineColor(ci);
   Graph_mI10dO000000sPppm1295->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1295->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1295->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1295->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1295->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1295->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1295->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1295);
   
   
   TF1 *quadLineFit1296 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1296->SetFillColor(19);
   quadLineFit1296->SetFillStyle(0);
   quadLineFit1296->SetLineColor(5);
   quadLineFit1296->SetLineWidth(2);
   quadLineFit1296->SetChisquare(7.686e-21);
   quadLineFit1296->SetNDF(0);
   quadLineFit1296->GetXaxis()->SetLabelFont(42);
   quadLineFit1296->GetXaxis()->SetTitleOffset(1);
   quadLineFit1296->GetXaxis()->SetTitleFont(42);
   quadLineFit1296->GetYaxis()->SetLabelFont(42);
   quadLineFit1296->GetYaxis()->SetTitleFont(42);
   quadLineFit1296->SetParameter(0,-0.3807484);
   quadLineFit1296->SetParError(0,0.08992619);
   quadLineFit1296->SetParLimits(0,0,0);
   quadLineFit1296->SetParameter(1,0.01336844);
   quadLineFit1296->SetParError(1,0.005231761);
   quadLineFit1296->SetParLimits(1,0,0);
   quadLineFit1296->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1296);
   gre->Draw("p ");
   
   TF1 *quadLineFit1297 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1297->SetFillColor(19);
   quadLineFit1297->SetFillStyle(0);
   quadLineFit1297->SetLineColor(5);
   quadLineFit1297->SetLineWidth(2);
   quadLineFit1297->SetChisquare(7.686e-21);
   quadLineFit1297->SetNDF(0);
   quadLineFit1297->GetXaxis()->SetLabelFont(42);
   quadLineFit1297->GetXaxis()->SetTitleOffset(1);
   quadLineFit1297->GetXaxis()->SetTitleFont(42);
   quadLineFit1297->GetYaxis()->SetLabelFont(42);
   quadLineFit1297->GetYaxis()->SetTitleFont(42);
   quadLineFit1297->SetParameter(0,-0.3807484);
   quadLineFit1297->SetParError(0,0.08992619);
   quadLineFit1297->SetParLimits(0,0,0);
   quadLineFit1297->SetParameter(1,0.01336844);
   quadLineFit1297->SetParError(1,0.005231761);
   quadLineFit1297->SetParLimits(1,0,0);
   quadLineFit1297->Draw("same");
   
   Double_t 0.000000 ppm_fx1297[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1297[2] = {
   0.6052631,
   0.5279015};
   Double_t 0.000000 ppm_fex1297[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1297[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,0.000000 ppm_fx1297,0.000000 ppm_fy1297,0.000000 ppm_fex1297,0.000000 ppm_fey1297);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1297 = new TH1F("Graph_0dO000000sPppm1297","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1297->SetMinimum(0.5099549);
   Graph_0dO000000sPppm1297->SetMaximum(0.6232096);
   Graph_0dO000000sPppm1297->SetDirectory(0);
   Graph_0dO000000sPppm1297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1297->SetLineColor(ci);
   Graph_0dO000000sPppm1297->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1297->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1297->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1297->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1297->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1297->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1297->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1297);
   
   
   TF1 *quadLineFit1298 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1298->SetFillColor(19);
   quadLineFit1298->SetFillStyle(0);
   quadLineFit1298->SetLineColor(6);
   quadLineFit1298->SetLineWidth(2);
   quadLineFit1298->SetChisquare(1.326985e-19);
   quadLineFit1298->SetNDF(0);
   quadLineFit1298->GetXaxis()->SetLabelFont(42);
   quadLineFit1298->GetXaxis()->SetTitleOffset(1);
   quadLineFit1298->GetXaxis()->SetTitleFont(42);
   quadLineFit1298->GetYaxis()->SetLabelFont(42);
   quadLineFit1298->GetYaxis()->SetTitleFont(42);
   quadLineFit1298->SetParameter(0,1.143431);
   quadLineFit1298->SetParError(0,0.08992619);
   quadLineFit1298->SetParLimits(0,0,0);
   quadLineFit1298->SetParameter(1,-0.03363547);
   quadLineFit1298->SetParError(1,0.005231761);
   quadLineFit1298->SetParLimits(1,0,0);
   quadLineFit1298->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1298);
   gre->Draw("p ");
   
   TF1 *quadLineFit1299 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1299->SetFillColor(19);
   quadLineFit1299->SetFillStyle(0);
   quadLineFit1299->SetLineColor(6);
   quadLineFit1299->SetLineWidth(2);
   quadLineFit1299->SetChisquare(1.326985e-19);
   quadLineFit1299->SetNDF(0);
   quadLineFit1299->GetXaxis()->SetLabelFont(42);
   quadLineFit1299->GetXaxis()->SetTitleOffset(1);
   quadLineFit1299->GetXaxis()->SetTitleFont(42);
   quadLineFit1299->GetYaxis()->SetLabelFont(42);
   quadLineFit1299->GetYaxis()->SetTitleFont(42);
   quadLineFit1299->SetParameter(0,1.143431);
   quadLineFit1299->SetParError(0,0.08992619);
   quadLineFit1299->SetParLimits(0,0,0);
   quadLineFit1299->SetParameter(1,-0.03363547);
   quadLineFit1299->SetParError(1,0.005231761);
   quadLineFit1299->SetParLimits(1,0,0);
   quadLineFit1299->Draw("same");
   
   Double_t 10.000000 ppm_fx1299[2] = {
   16,
   18.3};
   Double_t 10.000000 ppm_fy1299[2] = {
   1.361804,
   1.200246};
   Double_t 10.000000 ppm_fex1299[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1299[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,10.000000 ppm_fx1299,10.000000 ppm_fy1299,10.000000 ppm_fex1299,10.000000 ppm_fey1299);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1299 = new TH1F("Graph_10dO000000sPppm1299","Graph",100,15.77,18.53);
   Graph_10dO000000sPppm1299->SetMinimum(1.17388);
   Graph_10dO000000sPppm1299->SetMaximum(1.38817);
   Graph_10dO000000sPppm1299->SetDirectory(0);
   Graph_10dO000000sPppm1299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1299->SetLineColor(ci);
   Graph_10dO000000sPppm1299->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1299->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1299->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1299->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1299->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1299->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1299->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1299);
   
   
   TF1 *quadLineFit1300 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1300->SetFillColor(19);
   quadLineFit1300->SetFillStyle(0);
   quadLineFit1300->SetLineColor(7);
   quadLineFit1300->SetLineWidth(2);
   quadLineFit1300->SetChisquare(2.36789e-17);
   quadLineFit1300->SetNDF(0);
   quadLineFit1300->GetXaxis()->SetLabelFont(42);
   quadLineFit1300->GetXaxis()->SetTitleOffset(1);
   quadLineFit1300->GetXaxis()->SetTitleFont(42);
   quadLineFit1300->GetYaxis()->SetLabelFont(42);
   quadLineFit1300->GetYaxis()->SetTitleFont(42);
   quadLineFit1300->SetParameter(0,2.485685);
   quadLineFit1300->SetParError(0,0.08992619);
   quadLineFit1300->SetParLimits(0,0,0);
   quadLineFit1300->SetParameter(1,-0.07024257);
   quadLineFit1300->SetParError(1,0.005231761);
   quadLineFit1300->SetParLimits(1,0,0);
   quadLineFit1300->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1300);
   gre->Draw("p ");
   
   TF1 *quadLineFit1301 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1301->SetFillColor(19);
   quadLineFit1301->SetFillStyle(0);
   quadLineFit1301->SetLineColor(7);
   quadLineFit1301->SetLineWidth(2);
   quadLineFit1301->SetChisquare(2.36789e-17);
   quadLineFit1301->SetNDF(0);
   quadLineFit1301->GetXaxis()->SetLabelFont(42);
   quadLineFit1301->GetXaxis()->SetTitleOffset(1);
   quadLineFit1301->GetXaxis()->SetTitleFont(42);
   quadLineFit1301->GetYaxis()->SetLabelFont(42);
   quadLineFit1301->GetYaxis()->SetTitleFont(42);
   quadLineFit1301->SetParameter(0,2.485685);
   quadLineFit1301->SetParError(0,0.08992619);
   quadLineFit1301->SetParLimits(0,0,0);
   quadLineFit1301->SetParameter(1,-0.07024257);
   quadLineFit1301->SetParError(1,0.005231761);
   quadLineFit1301->SetParLimits(1,0,0);
   quadLineFit1301->Draw("same");
   
   Double_t 20.000000 ppm_fx1301[2] = {
   16,
   18.3};
   Double_t 20.000000 ppm_fy1301[2] = {
   2.100992,
   1.845327};
   Double_t 20.000000 ppm_fex1301[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1301[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,20.000000 ppm_fx1301,20.000000 ppm_fy1301,20.000000 ppm_fex1301,20.000000 ppm_fey1301);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1301 = new TH1F("Graph_20dO000000sPppm1301","Graph",100,15.77,18.53);
   Graph_20dO000000sPppm1301->SetMinimum(1.80955);
   Graph_20dO000000sPppm1301->SetMaximum(2.136769);
   Graph_20dO000000sPppm1301->SetDirectory(0);
   Graph_20dO000000sPppm1301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1301->SetLineColor(ci);
   Graph_20dO000000sPppm1301->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1301->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1301->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1301->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1301->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1301->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1301->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1301);
   
   
   TF1 *quadLineFit1302 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1302->SetFillColor(19);
   quadLineFit1302->SetFillStyle(0);
   quadLineFit1302->SetLineColor(8);
   quadLineFit1302->SetLineWidth(2);
   quadLineFit1302->SetChisquare(1.547247e-17);
   quadLineFit1302->SetNDF(0);
   quadLineFit1302->GetXaxis()->SetLabelFont(42);
   quadLineFit1302->GetXaxis()->SetTitleOffset(1);
   quadLineFit1302->GetXaxis()->SetTitleFont(42);
   quadLineFit1302->GetYaxis()->SetLabelFont(42);
   quadLineFit1302->GetYaxis()->SetTitleFont(42);
   quadLineFit1302->SetParameter(0,3.879536);
   quadLineFit1302->SetParError(0,0.08992618);
   quadLineFit1302->SetParLimits(0,0,0);
   quadLineFit1302->SetParameter(1,-0.111159);
   quadLineFit1302->SetParError(1,0.00523176);
   quadLineFit1302->SetParLimits(1,0,0);
   quadLineFit1302->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1302);
   gre->Draw("p ");
   
   TF1 *quadLineFit1303 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1303->SetFillColor(19);
   quadLineFit1303->SetFillStyle(0);
   quadLineFit1303->SetLineColor(8);
   quadLineFit1303->SetLineWidth(2);
   quadLineFit1303->SetChisquare(1.547247e-17);
   quadLineFit1303->SetNDF(0);
   quadLineFit1303->GetXaxis()->SetLabelFont(42);
   quadLineFit1303->GetXaxis()->SetTitleOffset(1);
   quadLineFit1303->GetXaxis()->SetTitleFont(42);
   quadLineFit1303->GetYaxis()->SetLabelFont(42);
   quadLineFit1303->GetYaxis()->SetTitleFont(42);
   quadLineFit1303->SetParameter(0,3.879536);
   quadLineFit1303->SetParError(0,0.08992618);
   quadLineFit1303->SetParLimits(0,0,0);
   quadLineFit1303->SetParameter(1,-0.111159);
   quadLineFit1303->SetParError(1,0.00523176);
   quadLineFit1303->SetParLimits(1,0,0);
   quadLineFit1303->Draw("same");
   
   Double_t 30.000000 ppm_fx1303[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1303[2] = {
   2.860247,
   2.510578};
   Double_t 30.000000 ppm_fex1303[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1303[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,30.000000 ppm_fx1303,30.000000 ppm_fy1303,30.000000 ppm_fex1303,30.000000 ppm_fey1303);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1303 = new TH1F("Graph_30dO000000sPppm1303","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1303->SetMinimum(2.465401);
   Graph_30dO000000sPppm1303->SetMaximum(2.905424);
   Graph_30dO000000sPppm1303->SetDirectory(0);
   Graph_30dO000000sPppm1303->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1303->SetLineColor(ci);
   Graph_30dO000000sPppm1303->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1303->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1303->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1303->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1303->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1303->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1303->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1303->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1303);
   
   
   TF1 *quadLineFit1304 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1304->SetFillColor(19);
   quadLineFit1304->SetFillStyle(0);
   quadLineFit1304->SetLineColor(9);
   quadLineFit1304->SetLineWidth(2);
   quadLineFit1304->SetChisquare(9.553525e-17);
   quadLineFit1304->SetNDF(0);
   quadLineFit1304->GetXaxis()->SetLabelFont(42);
   quadLineFit1304->GetXaxis()->SetTitleOffset(1);
   quadLineFit1304->GetXaxis()->SetTitleFont(42);
   quadLineFit1304->GetYaxis()->SetLabelFont(42);
   quadLineFit1304->GetYaxis()->SetTitleFont(42);
   quadLineFit1304->SetParameter(0,5.292722);
   quadLineFit1304->SetParError(0,0.08992619);
   quadLineFit1304->SetParLimits(0,0,0);
   quadLineFit1304->SetParameter(1,-0.1520297);
   quadLineFit1304->SetParError(1,0.005231761);
   quadLineFit1304->SetParLimits(1,0,0);
   quadLineFit1304->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1304);
   gre->Draw("p ");
   
   TF1 *quadLineFit1305 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1305->SetFillColor(19);
   quadLineFit1305->SetFillStyle(0);
   quadLineFit1305->SetLineColor(9);
   quadLineFit1305->SetLineWidth(2);
   quadLineFit1305->SetChisquare(9.553525e-17);
   quadLineFit1305->SetNDF(0);
   quadLineFit1305->GetXaxis()->SetLabelFont(42);
   quadLineFit1305->GetXaxis()->SetTitleOffset(1);
   quadLineFit1305->GetXaxis()->SetTitleFont(42);
   quadLineFit1305->GetYaxis()->SetLabelFont(42);
   quadLineFit1305->GetYaxis()->SetTitleFont(42);
   quadLineFit1305->SetParameter(0,5.292722);
   quadLineFit1305->SetParError(0,0.08992619);
   quadLineFit1305->SetParLimits(0,0,0);
   quadLineFit1305->SetParameter(1,-0.1520297);
   quadLineFit1305->SetParError(1,0.005231761);
   quadLineFit1305->SetParLimits(1,0,0);
   quadLineFit1305->Draw("same");
   
   Double_t 40.000000 ppm_fx1305[2] = {
   16,
   18.3};
   Double_t 40.000000 ppm_fy1305[2] = {
   3.626996,
   3.168543};
   Double_t 40.000000 ppm_fex1305[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1305[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,40.000000 ppm_fx1305,40.000000 ppm_fy1305,40.000000 ppm_fex1305,40.000000 ppm_fey1305);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1305 = new TH1F("Graph_40dO000000sPppm1305","Graph",100,15.77,18.53);
   Graph_40dO000000sPppm1305->SetMinimum(3.112487);
   Graph_40dO000000sPppm1305->SetMaximum(3.683052);
   Graph_40dO000000sPppm1305->SetDirectory(0);
   Graph_40dO000000sPppm1305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1305->SetLineColor(ci);
   Graph_40dO000000sPppm1305->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1305->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1305->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1305->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1305->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1305->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1305->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1305->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1305);
   
   
   TF1 *quadLineFit1306 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1306->SetFillColor(19);
   quadLineFit1306->SetFillStyle(0);
   quadLineFit1306->SetLineColor(10);
   quadLineFit1306->SetLineWidth(2);
   quadLineFit1306->SetChisquare(6.995156e-17);
   quadLineFit1306->SetNDF(0);
   quadLineFit1306->GetXaxis()->SetLabelFont(42);
   quadLineFit1306->GetXaxis()->SetTitleOffset(1);
   quadLineFit1306->GetXaxis()->SetTitleFont(42);
   quadLineFit1306->GetYaxis()->SetLabelFont(42);
   quadLineFit1306->GetYaxis()->SetTitleFont(42);
   quadLineFit1306->SetParameter(0,6.816237);
   quadLineFit1306->SetParError(0,0.08992619);
   quadLineFit1306->SetParLimits(0,0,0);
   quadLineFit1306->SetParameter(1,-0.1993275);
   quadLineFit1306->SetParError(1,0.005231761);
   quadLineFit1306->SetParLimits(1,0,0);
   quadLineFit1306->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1306);
   gre->Draw("p ");
   
   TF1 *quadLineFit1307 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1307->SetFillColor(19);
   quadLineFit1307->SetFillStyle(0);
   quadLineFit1307->SetLineColor(10);
   quadLineFit1307->SetLineWidth(2);
   quadLineFit1307->SetChisquare(6.995156e-17);
   quadLineFit1307->SetNDF(0);
   quadLineFit1307->GetXaxis()->SetLabelFont(42);
   quadLineFit1307->GetXaxis()->SetTitleOffset(1);
   quadLineFit1307->GetXaxis()->SetTitleFont(42);
   quadLineFit1307->GetYaxis()->SetLabelFont(42);
   quadLineFit1307->GetYaxis()->SetTitleFont(42);
   quadLineFit1307->SetParameter(0,6.816237);
   quadLineFit1307->SetParError(0,0.08992619);
   quadLineFit1307->SetParLimits(0,0,0);
   quadLineFit1307->SetParameter(1,-0.1993275);
   quadLineFit1307->SetParError(1,0.005231761);
   quadLineFit1307->SetParLimits(1,0,0);
   quadLineFit1307->Draw("same");
   
   Double_t 50.000000 ppm_fx1307[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1307[2] = {
   4.380359,
   3.820355};
   Double_t 50.000000 ppm_fex1307[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1307[2] = {
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(2,50.000000 ppm_fx1307,50.000000 ppm_fy1307,50.000000 ppm_fex1307,50.000000 ppm_fey1307);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1307 = new TH1F("Graph_50dO000000sPppm1307","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1307->SetMinimum(3.754144);
   Graph_50dO000000sPppm1307->SetMaximum(4.44657);
   Graph_50dO000000sPppm1307->SetDirectory(0);
   Graph_50dO000000sPppm1307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1307->SetLineColor(ci);
   Graph_50dO000000sPppm1307->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1307->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1307->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1307->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1307->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1307->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1307->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1307);
   
   
   TF1 *quadLineFit1308 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1308->SetFillColor(19);
   quadLineFit1308->SetFillStyle(0);
   quadLineFit1308->SetLineColor(11);
   quadLineFit1308->SetLineWidth(2);
   quadLineFit1308->SetChisquare(2.434954e-16);
   quadLineFit1308->SetNDF(0);
   quadLineFit1308->GetXaxis()->SetLabelFont(42);
   quadLineFit1308->GetXaxis()->SetTitleOffset(1);
   quadLineFit1308->GetXaxis()->SetTitleFont(42);
   quadLineFit1308->GetYaxis()->SetLabelFont(42);
   quadLineFit1308->GetYaxis()->SetTitleFont(42);
   quadLineFit1308->SetParameter(0,8.276038);
   quadLineFit1308->SetParError(0,0.08992619);
   quadLineFit1308->SetParLimits(0,0,0);
   quadLineFit1308->SetParameter(1,-0.24348);
   quadLineFit1308->SetParError(1,0.005231761);
   quadLineFit1308->SetParLimits(1,0,0);
   quadLineFit1308->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1308);
   gre->Draw("p ");
   
   TF1 *quadLineFit1309 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1309->SetFillColor(19);
   quadLineFit1309->SetFillStyle(0);
   quadLineFit1309->SetLineColor(11);
   quadLineFit1309->SetLineWidth(2);
   quadLineFit1309->SetChisquare(2.434954e-16);
   quadLineFit1309->SetNDF(0);
   quadLineFit1309->GetXaxis()->SetLabelFont(42);
   quadLineFit1309->GetXaxis()->SetTitleOffset(1);
   quadLineFit1309->GetXaxis()->SetTitleFont(42);
   quadLineFit1309->GetYaxis()->SetLabelFont(42);
   quadLineFit1309->GetYaxis()->SetTitleFont(42);
   quadLineFit1309->SetParameter(0,8.276038);
   quadLineFit1309->SetParError(0,0.08992619);
   quadLineFit1309->SetParLimits(0,0,0);
   quadLineFit1309->SetParameter(1,-0.24348);
   quadLineFit1309->SetParError(1,0.005231761);
   quadLineFit1309->SetParLimits(1,0,0);
   quadLineFit1309->Draw("same");
   
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
