void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1073[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -30.000000 ppm_fy1073[3] = {
   -1.897049,
   -1.662531,
   -1.470198};
   Double_t -30.000000 ppm_fex1073[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1073[3] = {
   0.01118368,
   0.01118368,
   0.01118368};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1073,-30.000000 ppm_fy1073,-30.000000 ppm_fex1073,-30.000000 ppm_fey1073);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1073 = new TH1F("Graph_mI30dO000000sPppm1073","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1073->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1073->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1073->SetDirectory(0);
   Graph_mI30dO000000sPppm1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1073->SetLineColor(ci);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1073->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1073->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(0.1654209);
   quadLineFit1074->SetNDF(1);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,0.02007419);
   quadLineFit1074->SetParError(0,0.06310289);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,-26.86241);
   quadLineFit1074->SetParError(1,0.9938301);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("ap");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(0.1654209);
   quadLineFit1075->SetNDF(1);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,0.02007419);
   quadLineFit1075->SetParError(0,0.06310289);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,-26.86241);
   quadLineFit1075->SetParError(1,0.9938301);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t -10.000000 ppm_fx1075[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -10.000000 ppm_fy1075[3] = {
   -0.1842253,
   -0.1372008,
   -0.1455204};
   Double_t -10.000000 ppm_fex1075[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1075[3] = {
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1075,-10.000000 ppm_fy1075,-10.000000 ppm_fex1075,-10.000000 ppm_fey1075);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1075 = new TH1F("Graph_mI10dO000000sPppm1075","Graph",100,0.05396825,0.07301587);
   Graph_mI10dO000000sPppm1075->SetMinimum(-0.2023482);
   Graph_mI10dO000000sPppm1075->SetMaximum(-0.1190779);
   Graph_mI10dO000000sPppm1075->SetDirectory(0);
   Graph_mI10dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1075->SetLineColor(ci);
   Graph_mI10dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(2);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(3.381503);
   quadLineFit1076->SetNDF(1);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,0.006694846);
   quadLineFit1076->SetParError(0,0.0631028);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,-2.5703);
   quadLineFit1076->SetParError(1,0.9938287);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(2);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(3.381503);
   quadLineFit1077->SetNDF(1);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,0.006694846);
   quadLineFit1077->SetParError(0,0.0631028);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,-2.5703);
   quadLineFit1077->SetParError(1,0.9938287);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
   Double_t 10.000000 ppm_fx1077[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 10.000000 ppm_fy1077[3] = {
   1.535729,
   1.363964,
   1.206809};
   Double_t 10.000000 ppm_fex1077[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1077[3] = {
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(3,10.000000 ppm_fx1077,10.000000 ppm_fy1077,10.000000 ppm_fex1077,10.000000 ppm_fey1077);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_10dO000000sPppm1077 = new TH1F("Graph_10dO000000sPppm1077","Graph",100,0.05396825,0.07301587);
   Graph_10dO000000sPppm1077->SetMinimum(1.160497);
   Graph_10dO000000sPppm1077->SetMaximum(1.582041);
   Graph_10dO000000sPppm1077->SetDirectory(0);
   Graph_10dO000000sPppm1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1077->SetLineColor(ci);
   Graph_10dO000000sPppm1077->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1077->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1077->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1077->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1077->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1077->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1077->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1077);
   
   
   TF1 *quadLineFit1078 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1078->SetFillColor(19);
   quadLineFit1078->SetFillStyle(0);
   quadLineFit1078->SetLineColor(3);
   quadLineFit1078->SetLineWidth(2);
   quadLineFit1078->SetChisquare(0.9311875);
   quadLineFit1078->SetNDF(1);
   quadLineFit1078->GetXaxis()->SetLabelFont(42);
   quadLineFit1078->GetXaxis()->SetTitleOffset(1);
   quadLineFit1078->GetXaxis()->SetTitleFont(42);
   quadLineFit1078->GetYaxis()->SetLabelFont(42);
   quadLineFit1078->GetYaxis()->SetTitleFont(42);
   quadLineFit1078->SetParameter(0,0.06437946);
   quadLineFit1078->SetParError(0,0.06308884);
   quadLineFit1078->SetParLimits(0,0,0);
   quadLineFit1078->SetParameter(1,20.65272);
   quadLineFit1078->SetParError(1,0.9936079);
   quadLineFit1078->SetParLimits(1,0,0);
   quadLineFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1078);
   gre->Draw("p ");
   
   TF1 *quadLineFit1079 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1079->SetFillColor(19);
   quadLineFit1079->SetFillStyle(0);
   quadLineFit1079->SetLineColor(3);
   quadLineFit1079->SetLineWidth(2);
   quadLineFit1079->SetChisquare(0.9311875);
   quadLineFit1079->SetNDF(1);
   quadLineFit1079->GetXaxis()->SetLabelFont(42);
   quadLineFit1079->GetXaxis()->SetTitleOffset(1);
   quadLineFit1079->GetXaxis()->SetTitleFont(42);
   quadLineFit1079->GetYaxis()->SetLabelFont(42);
   quadLineFit1079->GetYaxis()->SetTitleFont(42);
   quadLineFit1079->SetParameter(0,0.06437946);
   quadLineFit1079->SetParError(0,0.06308884);
   quadLineFit1079->SetParLimits(0,0,0);
   quadLineFit1079->SetParameter(1,20.65272);
   quadLineFit1079->SetParError(1,0.9936079);
   quadLineFit1079->SetParLimits(1,0,0);
   quadLineFit1079->Draw("same");
   
   Double_t 30.000000 ppm_fx1079[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 30.000000 ppm_fy1079[3] = {
   3.271781,
   2.869523,
   2.547744};
   Double_t 30.000000 ppm_fex1079[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1079[3] = {
   0.01118368,
   0.01118368,
   0.01118368};
   gre = new TGraphErrors(3,30.000000 ppm_fx1079,30.000000 ppm_fy1079,30.000000 ppm_fex1079,30.000000 ppm_fey1079);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_30dO000000sPppm1079 = new TH1F("Graph_30dO000000sPppm1079","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1079->SetMinimum(2.46192);
   Graph_30dO000000sPppm1079->SetMaximum(3.357605);
   Graph_30dO000000sPppm1079->SetDirectory(0);
   Graph_30dO000000sPppm1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1079->SetLineColor(ci);
   Graph_30dO000000sPppm1079->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1079->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1079->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1079->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1079->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1079->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1079->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1079);
   
   
   TF1 *quadLineFit1080 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1080->SetFillColor(19);
   quadLineFit1080->SetFillStyle(0);
   quadLineFit1080->SetLineColor(4);
   quadLineFit1080->SetLineWidth(2);
   quadLineFit1080->SetChisquare(0.1332644);
   quadLineFit1080->SetNDF(1);
   quadLineFit1080->GetXaxis()->SetLabelFont(42);
   quadLineFit1080->GetXaxis()->SetTitleOffset(1);
   quadLineFit1080->GetXaxis()->SetTitleFont(42);
   quadLineFit1080->GetYaxis()->SetLabelFont(42);
   quadLineFit1080->GetYaxis()->SetTitleFont(42);
   quadLineFit1080->SetParameter(0,0.01694228);
   quadLineFit1080->SetParError(0,0.06310325);
   quadLineFit1080->SetParLimits(0,0,0);
   quadLineFit1080->SetParameter(1,45.5881);
   quadLineFit1080->SetParError(1,0.9938358);
   quadLineFit1080->SetParLimits(1,0,0);
   quadLineFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1080);
   gre->Draw("p ");
   
   TF1 *quadLineFit1081 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1081->SetFillColor(19);
   quadLineFit1081->SetFillStyle(0);
   quadLineFit1081->SetLineColor(4);
   quadLineFit1081->SetLineWidth(2);
   quadLineFit1081->SetChisquare(0.1332644);
   quadLineFit1081->SetNDF(1);
   quadLineFit1081->GetXaxis()->SetLabelFont(42);
   quadLineFit1081->GetXaxis()->SetTitleOffset(1);
   quadLineFit1081->GetXaxis()->SetTitleFont(42);
   quadLineFit1081->GetYaxis()->SetLabelFont(42);
   quadLineFit1081->GetYaxis()->SetTitleFont(42);
   quadLineFit1081->SetParameter(0,0.01694228);
   quadLineFit1081->SetParError(0,0.06310325);
   quadLineFit1081->SetParLimits(0,0,0);
   quadLineFit1081->SetParameter(1,45.5881);
   quadLineFit1081->SetParError(1,0.9938358);
   quadLineFit1081->SetParLimits(1,0,0);
   quadLineFit1081->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
