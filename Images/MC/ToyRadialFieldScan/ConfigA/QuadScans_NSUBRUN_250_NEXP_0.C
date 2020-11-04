void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1145[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1145[4] = {
   -3.617985,
   -3.177236,
   -2.817609,
   -2.541875};
   Double_t -50.000000 ppm_fex1145[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1145[4] = {
   0.009322777,
   0.009322777,
   0.009322777,
   0.009322777};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1145,-50.000000 ppm_fy1145,-50.000000 ppm_fex1145,-50.000000 ppm_fey1145);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1145 = new TH1F("Graph_mI50dO000000sPppm1145","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1145->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1145->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1145->SetDirectory(0);
   Graph_mI50dO000000sPppm1145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1145->SetLineColor(ci);
   Graph_mI50dO000000sPppm1145->GetXaxis()->SetTitle("QHV [kV]");
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
   
   
   TF1 *quadLineFit1146 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1146->SetFillColor(19);
   quadLineFit1146->SetFillStyle(0);
   quadLineFit1146->SetLineWidth(2);
   quadLineFit1146->SetChisquare(78.32825);
   quadLineFit1146->SetNDF(2);
   quadLineFit1146->GetXaxis()->SetLabelFont(42);
   quadLineFit1146->GetXaxis()->SetTitleOffset(1);
   quadLineFit1146->GetXaxis()->SetTitleFont(42);
   quadLineFit1146->GetYaxis()->SetLabelFont(42);
   quadLineFit1146->GetYaxis()->SetTitleFont(42);
   quadLineFit1146->SetParameter(0,-6.088439);
   quadLineFit1146->SetParError(0,0.03574359);
   quadLineFit1146->SetParLimits(0,0,0);
   quadLineFit1146->SetParameter(1,0.1793978);
   quadLineFit1146->SetParError(1,0.002084608);
   quadLineFit1146->SetParLimits(1,0,0);
   quadLineFit1146->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1146);
   gre->Draw("ap");
   
   TF1 *quadLineFit1147 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1147->SetFillColor(19);
   quadLineFit1147->SetFillStyle(0);
   quadLineFit1147->SetLineWidth(2);
   quadLineFit1147->SetChisquare(78.32825);
   quadLineFit1147->SetNDF(2);
   quadLineFit1147->GetXaxis()->SetLabelFont(42);
   quadLineFit1147->GetXaxis()->SetTitleOffset(1);
   quadLineFit1147->GetXaxis()->SetTitleFont(42);
   quadLineFit1147->GetYaxis()->SetLabelFont(42);
   quadLineFit1147->GetYaxis()->SetTitleFont(42);
   quadLineFit1147->SetParameter(0,-6.088439);
   quadLineFit1147->SetParError(0,0.03574359);
   quadLineFit1147->SetParLimits(0,0,0);
   quadLineFit1147->SetParameter(1,0.1793978);
   quadLineFit1147->SetParError(1,0.002084608);
   quadLineFit1147->SetParLimits(1,0,0);
   quadLineFit1147->Draw("same");
   
   Double_t -30.000000 ppm_fx1147[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1147[4] = {
   -1.897086,
   -1.657998,
   -1.473479,
   -1.327077};
   Double_t -30.000000 ppm_fex1147[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1147[4] = {
   0.009322777,
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1147,-30.000000 ppm_fy1147,-30.000000 ppm_fex1147,-30.000000 ppm_fey1147);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1147 = new TH1F("Graph_mI30dO000000sPppm1147","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1147->SetMinimum(-1.965274);
   Graph_mI30dO000000sPppm1147->SetMaximum(-1.258889);
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
   
   
   TF1 *quadLineFit1148 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1148->SetFillColor(19);
   quadLineFit1148->SetFillStyle(0);
   quadLineFit1148->SetLineColor(2);
   quadLineFit1148->SetLineWidth(2);
   quadLineFit1148->SetChisquare(24.86619);
   quadLineFit1148->SetNDF(2);
   quadLineFit1148->GetXaxis()->SetLabelFont(42);
   quadLineFit1148->GetXaxis()->SetTitleOffset(1);
   quadLineFit1148->GetXaxis()->SetTitleFont(42);
   quadLineFit1148->GetYaxis()->SetLabelFont(42);
   quadLineFit1148->GetYaxis()->SetTitleFont(42);
   quadLineFit1148->SetParameter(0,-3.199275);
   quadLineFit1148->SetParError(0,0.03574402);
   quadLineFit1148->SetParLimits(0,0,0);
   quadLineFit1148->SetParameter(1,0.09472734);
   quadLineFit1148->SetParError(1,0.002084633);
   quadLineFit1148->SetParLimits(1,0,0);
   quadLineFit1148->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1148);
   gre->Draw("p ");
   
   TF1 *quadLineFit1149 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1149->SetFillColor(19);
   quadLineFit1149->SetFillStyle(0);
   quadLineFit1149->SetLineColor(2);
   quadLineFit1149->SetLineWidth(2);
   quadLineFit1149->SetChisquare(24.86619);
   quadLineFit1149->SetNDF(2);
   quadLineFit1149->GetXaxis()->SetLabelFont(42);
   quadLineFit1149->GetXaxis()->SetTitleOffset(1);
   quadLineFit1149->GetXaxis()->SetTitleFont(42);
   quadLineFit1149->GetYaxis()->SetLabelFont(42);
   quadLineFit1149->GetYaxis()->SetTitleFont(42);
   quadLineFit1149->SetParameter(0,-3.199275);
   quadLineFit1149->SetParError(0,0.03574402);
   quadLineFit1149->SetParLimits(0,0,0);
   quadLineFit1149->SetParameter(1,0.09472734);
   quadLineFit1149->SetParError(1,0.002084633);
   quadLineFit1149->SetParLimits(1,0,0);
   quadLineFit1149->Draw("same");
   
   Double_t -10.000000 ppm_fx1149[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1149[4] = {
   -0.1696437,
   -0.1415875,
   -0.1294679,
   -0.1102467};
   Double_t -10.000000 ppm_fex1149[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1149[4] = {
   0.009322777,
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1149,-10.000000 ppm_fy1149,-10.000000 ppm_fex1149,-10.000000 ppm_fey1149);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1149 = new TH1F("Graph_mI10dO000000sPppm1149","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1149->SetMinimum(-0.1867708);
   Graph_mI10dO000000sPppm1149->SetMaximum(-0.09311969);
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
   
   
   TF1 *quadLineFit1150 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1150->SetFillColor(19);
   quadLineFit1150->SetFillStyle(0);
   quadLineFit1150->SetLineColor(3);
   quadLineFit1150->SetLineWidth(2);
   quadLineFit1150->SetChisquare(0.5298615);
   quadLineFit1150->SetNDF(2);
   quadLineFit1150->GetXaxis()->SetLabelFont(42);
   quadLineFit1150->GetXaxis()->SetTitleOffset(1);
   quadLineFit1150->GetXaxis()->SetTitleFont(42);
   quadLineFit1150->GetYaxis()->SetLabelFont(42);
   quadLineFit1150->GetYaxis()->SetTitleFont(42);
   quadLineFit1150->SetParameter(0,-0.2995005);
   quadLineFit1150->SetParError(0,0.03574405);
   quadLineFit1150->SetParLimits(0,0,0);
   quadLineFit1150->SetParameter(1,0.009515533);
   quadLineFit1150->SetParError(1,0.002084635);
   quadLineFit1150->SetParLimits(1,0,0);
   quadLineFit1150->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1150);
   gre->Draw("p ");
   
   TF1 *quadLineFit1151 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1151->SetFillColor(19);
   quadLineFit1151->SetFillStyle(0);
   quadLineFit1151->SetLineColor(3);
   quadLineFit1151->SetLineWidth(2);
   quadLineFit1151->SetChisquare(0.5298615);
   quadLineFit1151->SetNDF(2);
   quadLineFit1151->GetXaxis()->SetLabelFont(42);
   quadLineFit1151->GetXaxis()->SetTitleOffset(1);
   quadLineFit1151->GetXaxis()->SetTitleFont(42);
   quadLineFit1151->GetYaxis()->SetLabelFont(42);
   quadLineFit1151->GetYaxis()->SetTitleFont(42);
   quadLineFit1151->SetParameter(0,-0.2995005);
   quadLineFit1151->SetParError(0,0.03574405);
   quadLineFit1151->SetParLimits(0,0,0);
   quadLineFit1151->SetParameter(1,0.009515533);
   quadLineFit1151->SetParError(1,0.002084635);
   quadLineFit1151->SetParLimits(1,0,0);
   quadLineFit1151->Draw("same");
   
   Double_t 10.000000 ppm_fx1151[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1151[4] = {
   1.561022,
   1.349504,
   1.199765,
   1.078033};
   Double_t 10.000000 ppm_fex1151[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1151[4] = {
   0.009322777,
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(4,10.000000 ppm_fx1151,10.000000 ppm_fy1151,10.000000 ppm_fex1151,10.000000 ppm_fey1151);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1151 = new TH1F("Graph_10dO000000sPppm1151","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1151->SetMinimum(1.018547);
   Graph_10dO000000sPppm1151->SetMaximum(1.620508);
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
   
   
   TF1 *quadLineFit1152 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1152->SetFillColor(19);
   quadLineFit1152->SetFillStyle(0);
   quadLineFit1152->SetLineColor(4);
   quadLineFit1152->SetLineWidth(2);
   quadLineFit1152->SetChisquare(23.84418);
   quadLineFit1152->SetNDF(2);
   quadLineFit1152->GetXaxis()->SetLabelFont(42);
   quadLineFit1152->GetXaxis()->SetTitleOffset(1);
   quadLineFit1152->GetXaxis()->SetTitleFont(42);
   quadLineFit1152->GetYaxis()->SetLabelFont(42);
   quadLineFit1152->GetYaxis()->SetTitleFont(42);
   quadLineFit1152->SetParameter(0,2.655982);
   quadLineFit1152->SetParError(0,0.03574376);
   quadLineFit1152->SetParLimits(0,0,0);
   quadLineFit1152->SetParameter(1,-0.07993533);
   quadLineFit1152->SetParError(1,0.002084618);
   quadLineFit1152->SetParLimits(1,0,0);
   quadLineFit1152->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1152);
   gre->Draw("p ");
   
   TF1 *quadLineFit1153 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1153->SetFillColor(19);
   quadLineFit1153->SetFillStyle(0);
   quadLineFit1153->SetLineColor(4);
   quadLineFit1153->SetLineWidth(2);
   quadLineFit1153->SetChisquare(23.84418);
   quadLineFit1153->SetNDF(2);
   quadLineFit1153->GetXaxis()->SetLabelFont(42);
   quadLineFit1153->GetXaxis()->SetTitleOffset(1);
   quadLineFit1153->GetXaxis()->SetTitleFont(42);
   quadLineFit1153->GetYaxis()->SetLabelFont(42);
   quadLineFit1153->GetYaxis()->SetTitleFont(42);
   quadLineFit1153->SetParameter(0,2.655982);
   quadLineFit1153->SetParError(0,0.03574376);
   quadLineFit1153->SetParLimits(0,0,0);
   quadLineFit1153->SetParameter(1,-0.07993533);
   quadLineFit1153->SetParError(1,0.002084618);
   quadLineFit1153->SetParLimits(1,0,0);
   quadLineFit1153->Draw("same");
   
   Double_t 30.000000 ppm_fx1153[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1153[4] = {
   3.276817,
   2.86667,
   2.535599,
   2.285045};
   Double_t 30.000000 ppm_fex1153[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1153[4] = {
   0.009322777,
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(4,30.000000 ppm_fx1153,30.000000 ppm_fy1153,30.000000 ppm_fex1153,30.000000 ppm_fey1153);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1153 = new TH1F("Graph_30dO000000sPppm1153","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1153->SetMinimum(2.174681);
   Graph_30dO000000sPppm1153->SetMaximum(3.387182);
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
   
   
   TF1 *quadLineFit1154 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1154->SetFillColor(19);
   quadLineFit1154->SetFillStyle(0);
   quadLineFit1154->SetLineColor(5);
   quadLineFit1154->SetLineWidth(2);
   quadLineFit1154->SetChisquare(73.26314);
   quadLineFit1154->SetNDF(2);
   quadLineFit1154->GetXaxis()->SetLabelFont(42);
   quadLineFit1154->GetXaxis()->SetTitleOffset(1);
   quadLineFit1154->GetXaxis()->SetTitleFont(42);
   quadLineFit1154->GetYaxis()->SetLabelFont(42);
   quadLineFit1154->GetYaxis()->SetTitleFont(42);
   quadLineFit1154->SetParameter(0,5.551461);
   quadLineFit1154->SetParError(0,0.03574349);
   quadLineFit1154->SetParLimits(0,0,0);
   quadLineFit1154->SetParameter(1,-0.1653193);
   quadLineFit1154->SetParError(1,0.002084602);
   quadLineFit1154->SetParLimits(1,0,0);
   quadLineFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1154);
   gre->Draw("p ");
   
   TF1 *quadLineFit1155 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1155->SetFillColor(19);
   quadLineFit1155->SetFillStyle(0);
   quadLineFit1155->SetLineColor(5);
   quadLineFit1155->SetLineWidth(2);
   quadLineFit1155->SetChisquare(73.26314);
   quadLineFit1155->SetNDF(2);
   quadLineFit1155->GetXaxis()->SetLabelFont(42);
   quadLineFit1155->GetXaxis()->SetTitleOffset(1);
   quadLineFit1155->GetXaxis()->SetTitleFont(42);
   quadLineFit1155->GetYaxis()->SetLabelFont(42);
   quadLineFit1155->GetYaxis()->SetTitleFont(42);
   quadLineFit1155->SetParameter(0,5.551461);
   quadLineFit1155->SetParError(0,0.03574349);
   quadLineFit1155->SetParLimits(0,0,0);
   quadLineFit1155->SetParameter(1,-0.1653193);
   quadLineFit1155->SetParError(1,0.002084602);
   quadLineFit1155->SetParLimits(1,0,0);
   quadLineFit1155->Draw("same");
   
   Double_t 50.000000 ppm_fx1155[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1155[4] = {
   5.001611,
   4.381445,
   3.870761,
   3.48982};
   Double_t 50.000000 ppm_fex1155[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1155[4] = {
   0.009322777,
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(4,50.000000 ppm_fx1155,50.000000 ppm_fy1155,50.000000 ppm_fex1155,50.000000 ppm_fey1155);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1155 = new TH1F("Graph_50dO000000sPppm1155","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1155->SetMinimum(3.327454);
   Graph_50dO000000sPppm1155->SetMaximum(5.163977);
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
   
   
   TF1 *quadLineFit1156 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1156->SetFillColor(19);
   quadLineFit1156->SetFillStyle(0);
   quadLineFit1156->SetLineColor(6);
   quadLineFit1156->SetLineWidth(2);
   quadLineFit1156->SetChisquare(164.8491);
   quadLineFit1156->SetNDF(2);
   quadLineFit1156->GetXaxis()->SetLabelFont(42);
   quadLineFit1156->GetXaxis()->SetTitleOffset(1);
   quadLineFit1156->GetXaxis()->SetTitleFont(42);
   quadLineFit1156->GetYaxis()->SetLabelFont(42);
   quadLineFit1156->GetYaxis()->SetTitleFont(42);
   quadLineFit1156->SetParameter(0,8.475057);
   quadLineFit1156->SetParError(0,0.03574528);
   quadLineFit1156->SetParLimits(0,0,0);
   quadLineFit1156->SetParameter(1,-0.2523028);
   quadLineFit1156->SetParError(1,0.002084708);
   quadLineFit1156->SetParLimits(1,0,0);
   quadLineFit1156->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1156);
   gre->Draw("p ");
   
   TF1 *quadLineFit1157 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1157->SetFillColor(19);
   quadLineFit1157->SetFillStyle(0);
   quadLineFit1157->SetLineColor(6);
   quadLineFit1157->SetLineWidth(2);
   quadLineFit1157->SetChisquare(164.8491);
   quadLineFit1157->SetNDF(2);
   quadLineFit1157->GetXaxis()->SetLabelFont(42);
   quadLineFit1157->GetXaxis()->SetTitleOffset(1);
   quadLineFit1157->GetXaxis()->SetTitleFont(42);
   quadLineFit1157->GetYaxis()->SetLabelFont(42);
   quadLineFit1157->GetYaxis()->SetTitleFont(42);
   quadLineFit1157->SetParameter(0,8.475057);
   quadLineFit1157->SetParError(0,0.03574528);
   quadLineFit1157->SetParLimits(0,0,0);
   quadLineFit1157->SetParameter(1,-0.2523028);
   quadLineFit1157->SetParError(1,0.002084708);
   quadLineFit1157->SetParLimits(1,0,0);
   quadLineFit1157->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
