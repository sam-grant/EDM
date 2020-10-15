void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1053[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1053[2] = {
   -3.14101,
   -2.795951};
   Double_t -50.000000 ppm_fex1053[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1053[2] = {
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1053,-50.000000 ppm_fy1053,-50.000000 ppm_fex1053,-50.000000 ppm_fey1053);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1053 = new TH1F("Graph_mI50dO000000sPppm1053","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1053->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1053->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1053->SetDirectory(0);
   Graph_mI50dO000000sPppm1053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1053->SetLineColor(ci);
   Graph_mI50dO000000sPppm1053->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1053->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1053->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1053->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1053->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1053->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1053->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1053->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1053->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1053->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1053->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1053->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1053->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1053->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1053->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1053);
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(2.606236e-17);
   quadLineFit1054->SetNDF(0);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,-5.54142);
   quadLineFit1054->SetParError(0,0.1792603);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,0.1500256);
   quadLineFit1054->SetParError(1,0.01042908);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("ap");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(2.606236e-17);
   quadLineFit1055->SetNDF(0);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,-5.54142);
   quadLineFit1055->SetParError(0,0.1792603);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,0.1500256);
   quadLineFit1055->SetParError(1,0.01042908);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t -40.000000 ppm_fx1055[2] = {
   16,
   18.3};
   Double_t -40.000000 ppm_fy1055[2] = {
   -2.428824,
   -2.116074};
   Double_t -40.000000 ppm_fex1055[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1055[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1055,-40.000000 ppm_fy1055,-40.000000 ppm_fex1055,-40.000000 ppm_fey1055);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1055 = new TH1F("Graph_mI40dO000000sPppm1055","Graph",100,15.77,18.53);
   Graph_mI40dO000000sPppm1055->SetMinimum(-2.480453);
   Graph_mI40dO000000sPppm1055->SetMaximum(-2.064446);
   Graph_mI40dO000000sPppm1055->SetDirectory(0);
   Graph_mI40dO000000sPppm1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1055->SetLineColor(ci);
   Graph_mI40dO000000sPppm1055->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1055->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1055->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1055->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1055->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1055->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1055->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1055);
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(2);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(1.004194e-19);
   quadLineFit1056->SetNDF(0);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,-4.604476);
   quadLineFit1056->SetParError(0,0.1792603);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,0.1359782);
   quadLineFit1056->SetParError(1,0.01042908);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(2);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(1.004194e-19);
   quadLineFit1057->SetNDF(0);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,-4.604476);
   quadLineFit1057->SetParError(0,0.1792603);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,0.1359782);
   quadLineFit1057->SetParError(1,0.01042908);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
   Double_t -30.000000 ppm_fx1057[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1057[2] = {
   -1.631083,
   -1.460355};
   Double_t -30.000000 ppm_fex1057[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1057[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1057,-30.000000 ppm_fy1057,-30.000000 ppm_fex1057,-30.000000 ppm_fey1057);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1057 = new TH1F("Graph_mI30dO000000sPppm1057","Graph",100,15.77,18.53);
   Graph_mI30dO000000sPppm1057->SetMinimum(-1.66851);
   Graph_mI30dO000000sPppm1057->SetMaximum(-1.422929);
   Graph_mI30dO000000sPppm1057->SetDirectory(0);
   Graph_mI30dO000000sPppm1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1057->SetLineColor(ci);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1057->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1057->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1057);
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);
   quadLineFit1058->SetLineColor(3);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(4.363802e-18);
   quadLineFit1058->SetNDF(0);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,-2.818759);
   quadLineFit1058->SetParError(0,0.1792603);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,0.07422975);
   quadLineFit1058->SetParError(1,0.01042908);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("p ");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);
   quadLineFit1059->SetLineColor(3);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(4.363802e-18);
   quadLineFit1059->SetNDF(0);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,-2.818759);
   quadLineFit1059->SetParError(0,0.1792603);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,0.07422975);
   quadLineFit1059->SetParError(1,0.01042908);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
   Double_t -20.000000 ppm_fx1059[2] = {
   16,
   18.3};
   Double_t -20.000000 ppm_fy1059[2] = {
   -0.9015507,
   -0.7758279};
   Double_t -20.000000 ppm_fex1059[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1059[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1059,-20.000000 ppm_fy1059,-20.000000 ppm_fex1059,-20.000000 ppm_fey1059);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1059 = new TH1F("Graph_mI20dO000000sPppm1059","Graph",100,15.77,18.53);
   Graph_mI20dO000000sPppm1059->SetMinimum(-0.9344765);
   Graph_mI20dO000000sPppm1059->SetMaximum(-0.7429021);
   Graph_mI20dO000000sPppm1059->SetDirectory(0);
   Graph_mI20dO000000sPppm1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1059->SetLineColor(ci);
   Graph_mI20dO000000sPppm1059->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1059->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1059->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1059->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1059->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1059->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1059->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1059);
   
   
   TF1 *quadLineFit1060 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1060->SetFillColor(19);
   quadLineFit1060->SetFillStyle(0);
   quadLineFit1060->SetLineColor(4);
   quadLineFit1060->SetLineWidth(2);
   quadLineFit1060->SetChisquare(1.340723e-20);
   quadLineFit1060->SetNDF(0);
   quadLineFit1060->GetXaxis()->SetLabelFont(42);
   quadLineFit1060->GetXaxis()->SetTitleOffset(1);
   quadLineFit1060->GetXaxis()->SetTitleFont(42);
   quadLineFit1060->GetYaxis()->SetLabelFont(42);
   quadLineFit1060->GetYaxis()->SetTitleFont(42);
   quadLineFit1060->SetParameter(0,-1.776144);
   quadLineFit1060->SetParError(0,0.1792603);
   quadLineFit1060->SetParLimits(0,0,0);
   quadLineFit1060->SetParameter(1,0.05466207);
   quadLineFit1060->SetParError(1,0.01042908);
   quadLineFit1060->SetParLimits(1,0,0);
   quadLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1060);
   gre->Draw("p ");
   
   TF1 *quadLineFit1061 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1061->SetFillColor(19);
   quadLineFit1061->SetFillStyle(0);
   quadLineFit1061->SetLineColor(4);
   quadLineFit1061->SetLineWidth(2);
   quadLineFit1061->SetChisquare(1.340723e-20);
   quadLineFit1061->SetNDF(0);
   quadLineFit1061->GetXaxis()->SetLabelFont(42);
   quadLineFit1061->GetXaxis()->SetTitleOffset(1);
   quadLineFit1061->GetXaxis()->SetTitleFont(42);
   quadLineFit1061->GetYaxis()->SetLabelFont(42);
   quadLineFit1061->GetYaxis()->SetTitleFont(42);
   quadLineFit1061->SetParameter(0,-1.776144);
   quadLineFit1061->SetParError(0,0.1792603);
   quadLineFit1061->SetParLimits(0,0,0);
   quadLineFit1061->SetParameter(1,0.05466207);
   quadLineFit1061->SetParError(1,0.01042908);
   quadLineFit1061->SetParLimits(1,0,0);
   quadLineFit1061->Draw("same");
   
   Double_t -10.000000 ppm_fx1061[2] = {
   16,
   18.3};
   Double_t -10.000000 ppm_fy1061[2] = {
   -0.163335,
   -0.115295};
   Double_t -10.000000 ppm_fex1061[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1061[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1061,-10.000000 ppm_fy1061,-10.000000 ppm_fex1061,-10.000000 ppm_fey1061);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1061 = new TH1F("Graph_mI10dO000000sPppm1061","Graph",100,15.77,18.53);
   Graph_mI10dO000000sPppm1061->SetMinimum(-0.1884925);
   Graph_mI10dO000000sPppm1061->SetMaximum(-0.09013743);
   Graph_mI10dO000000sPppm1061->SetDirectory(0);
   Graph_mI10dO000000sPppm1061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1061->SetLineColor(ci);
   Graph_mI10dO000000sPppm1061->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1061->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1061->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1061->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1061->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1061->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1061->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1061);
   
   
   TF1 *quadLineFit1062 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1062->SetFillColor(19);
   quadLineFit1062->SetFillStyle(0);
   quadLineFit1062->SetLineColor(5);
   quadLineFit1062->SetLineWidth(2);
   quadLineFit1062->SetChisquare(4.97212e-21);
   quadLineFit1062->SetNDF(0);
   quadLineFit1062->GetXaxis()->SetLabelFont(42);
   quadLineFit1062->GetXaxis()->SetTitleOffset(1);
   quadLineFit1062->GetXaxis()->SetTitleFont(42);
   quadLineFit1062->GetYaxis()->SetLabelFont(42);
   quadLineFit1062->GetYaxis()->SetTitleFont(42);
   quadLineFit1062->SetParameter(0,-0.4975263);
   quadLineFit1062->SetParError(0,0.1792603);
   quadLineFit1062->SetParLimits(0,0,0);
   quadLineFit1062->SetParameter(1,0.02088696);
   quadLineFit1062->SetParError(1,0.01042908);
   quadLineFit1062->SetParLimits(1,0,0);
   quadLineFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1062);
   gre->Draw("p ");
   
   TF1 *quadLineFit1063 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1063->SetFillColor(19);
   quadLineFit1063->SetFillStyle(0);
   quadLineFit1063->SetLineColor(5);
   quadLineFit1063->SetLineWidth(2);
   quadLineFit1063->SetChisquare(4.97212e-21);
   quadLineFit1063->SetNDF(0);
   quadLineFit1063->GetXaxis()->SetLabelFont(42);
   quadLineFit1063->GetXaxis()->SetTitleOffset(1);
   quadLineFit1063->GetXaxis()->SetTitleFont(42);
   quadLineFit1063->GetYaxis()->SetLabelFont(42);
   quadLineFit1063->GetYaxis()->SetTitleFont(42);
   quadLineFit1063->SetParameter(0,-0.4975263);
   quadLineFit1063->SetParError(0,0.1792603);
   quadLineFit1063->SetParLimits(0,0,0);
   quadLineFit1063->SetParameter(1,0.02088696);
   quadLineFit1063->SetParError(1,0.01042908);
   quadLineFit1063->SetParLimits(1,0,0);
   quadLineFit1063->Draw("same");
   
   Double_t 0.000000 ppm_fx1063[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1063[2] = {
   0.5880657,
   0.5370291};
   Double_t 0.000000 ppm_fex1063[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1063[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,0.000000 ppm_fx1063,0.000000 ppm_fy1063,0.000000 ppm_fex1063,0.000000 ppm_fey1063);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1063 = new TH1F("Graph_0dO000000sPppm1063","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1063->SetMinimum(0.5115719);
   Graph_0dO000000sPppm1063->SetMaximum(0.6135229);
   Graph_0dO000000sPppm1063->SetDirectory(0);
   Graph_0dO000000sPppm1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1063->SetLineColor(ci);
   Graph_0dO000000sPppm1063->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1063->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1063->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1063->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1063->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1063->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1063->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1063);
   
   
   TF1 *quadLineFit1064 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1064->SetFillColor(19);
   quadLineFit1064->SetFillStyle(0);
   quadLineFit1064->SetLineColor(6);
   quadLineFit1064->SetLineWidth(2);
   quadLineFit1064->SetChisquare(3.177468e-20);
   quadLineFit1064->SetNDF(0);
   quadLineFit1064->GetXaxis()->SetLabelFont(42);
   quadLineFit1064->GetXaxis()->SetTitleOffset(1);
   quadLineFit1064->GetXaxis()->SetTitleFont(42);
   quadLineFit1064->GetYaxis()->SetLabelFont(42);
   quadLineFit1064->GetYaxis()->SetTitleFont(42);
   quadLineFit1064->SetParameter(0,0.943103);
   quadLineFit1064->SetParError(0,0.1792603);
   quadLineFit1064->SetParLimits(0,0,0);
   quadLineFit1064->SetParameter(1,-0.02218983);
   quadLineFit1064->SetParError(1,0.01042908);
   quadLineFit1064->SetParLimits(1,0,0);
   quadLineFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1064);
   gre->Draw("p ");
   
   TF1 *quadLineFit1065 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1065->SetFillColor(19);
   quadLineFit1065->SetFillStyle(0);
   quadLineFit1065->SetLineColor(6);
   quadLineFit1065->SetLineWidth(2);
   quadLineFit1065->SetChisquare(3.177468e-20);
   quadLineFit1065->SetNDF(0);
   quadLineFit1065->GetXaxis()->SetLabelFont(42);
   quadLineFit1065->GetXaxis()->SetTitleOffset(1);
   quadLineFit1065->GetXaxis()->SetTitleFont(42);
   quadLineFit1065->GetYaxis()->SetLabelFont(42);
   quadLineFit1065->GetYaxis()->SetTitleFont(42);
   quadLineFit1065->SetParameter(0,0.943103);
   quadLineFit1065->SetParError(0,0.1792603);
   quadLineFit1065->SetParLimits(0,0,0);
   quadLineFit1065->SetParameter(1,-0.02218983);
   quadLineFit1065->SetParError(1,0.01042908);
   quadLineFit1065->SetParLimits(1,0,0);
   quadLineFit1065->Draw("same");
   
   Double_t 10.000000 ppm_fx1065[2] = {
   16,
   18.3};
   Double_t 10.000000 ppm_fy1065[2] = {
   1.343187,
   1.18184};
   Double_t 10.000000 ppm_fex1065[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1065[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,10.000000 ppm_fx1065,10.000000 ppm_fy1065,10.000000 ppm_fex1065,10.000000 ppm_fey1065);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1065 = new TH1F("Graph_10dO000000sPppm1065","Graph",100,15.77,18.53);
   Graph_10dO000000sPppm1065->SetMinimum(1.145352);
   Graph_10dO000000sPppm1065->SetMaximum(1.379675);
   Graph_10dO000000sPppm1065->SetDirectory(0);
   Graph_10dO000000sPppm1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1065->SetLineColor(ci);
   Graph_10dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineColor(7);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(4.126761e-19);
   quadLineFit1066->SetNDF(0);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,2.465597);
   quadLineFit1066->SetParError(0,0.1792603);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,-0.07015065);
   quadLineFit1066->SetParError(1,0.01042908);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("p ");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineColor(7);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(4.126761e-19);
   quadLineFit1067->SetNDF(0);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,2.465597);
   quadLineFit1067->SetParError(0,0.1792603);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,-0.07015065);
   quadLineFit1067->SetParError(1,0.01042908);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t 20.000000 ppm_fx1067[2] = {
   16,
   18.3};
   Double_t 20.000000 ppm_fy1067[2] = {
   2.128197,
   1.836532};
   Double_t 20.000000 ppm_fex1067[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1067[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,20.000000 ppm_fx1067,20.000000 ppm_fy1067,20.000000 ppm_fex1067,20.000000 ppm_fey1067);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1067 = new TH1F("Graph_20dO000000sPppm1067","Graph",100,15.77,18.53);
   Graph_20dO000000sPppm1067->SetMinimum(1.787012);
   Graph_20dO000000sPppm1067->SetMaximum(2.177717);
   Graph_20dO000000sPppm1067->SetDirectory(0);
   Graph_20dO000000sPppm1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1067->SetLineColor(ci);
   Graph_20dO000000sPppm1067->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1067->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1067->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1067->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1067->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1067->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1067->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1067);
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(8);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(1.017562e-17);
   quadLineFit1068->SetNDF(0);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,4.157167);
   quadLineFit1068->SetParError(0,0.1792603);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,-0.1268106);
   quadLineFit1068->SetParError(1,0.01042908);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(8);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(1.017562e-17);
   quadLineFit1069->SetNDF(0);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,4.157167);
   quadLineFit1069->SetParError(0,0.1792603);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,-0.1268106);
   quadLineFit1069->SetParError(1,0.01042908);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
   Double_t 30.000000 ppm_fx1069[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1069[2] = {
   2.86752,
   2.476296};
   Double_t 30.000000 ppm_fex1069[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1069[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,30.000000 ppm_fx1069,30.000000 ppm_fy1069,30.000000 ppm_fex1069,30.000000 ppm_fey1069);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1069 = new TH1F("Graph_30dO000000sPppm1069","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1069->SetMinimum(2.41682);
   Graph_30dO000000sPppm1069->SetMaximum(2.926996);
   Graph_30dO000000sPppm1069->SetDirectory(0);
   Graph_30dO000000sPppm1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1069->SetLineColor(ci);
   Graph_30dO000000sPppm1069->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1069->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1069->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1069->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1069->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1069->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1069->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1069);
   
   
   TF1 *quadLineFit1070 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1070->SetFillColor(19);
   quadLineFit1070->SetFillStyle(0);
   quadLineFit1070->SetLineColor(9);
   quadLineFit1070->SetLineWidth(2);
   quadLineFit1070->SetChisquare(6.584301e-17);
   quadLineFit1070->SetNDF(0);
   quadLineFit1070->GetXaxis()->SetLabelFont(42);
   quadLineFit1070->GetXaxis()->SetTitleOffset(1);
   quadLineFit1070->GetXaxis()->SetTitleFont(42);
   quadLineFit1070->GetYaxis()->SetLabelFont(42);
   quadLineFit1070->GetYaxis()->SetTitleFont(42);
   quadLineFit1070->SetParameter(0,5.58908);
   quadLineFit1070->SetParError(0,0.1792603);
   quadLineFit1070->SetParLimits(0,0,0);
   quadLineFit1070->SetParameter(1,-0.1700975);
   quadLineFit1070->SetParError(1,0.01042908);
   quadLineFit1070->SetParLimits(1,0,0);
   quadLineFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1070);
   gre->Draw("p ");
   
   TF1 *quadLineFit1071 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1071->SetFillColor(19);
   quadLineFit1071->SetFillStyle(0);
   quadLineFit1071->SetLineColor(9);
   quadLineFit1071->SetLineWidth(2);
   quadLineFit1071->SetChisquare(6.584301e-17);
   quadLineFit1071->SetNDF(0);
   quadLineFit1071->GetXaxis()->SetLabelFont(42);
   quadLineFit1071->GetXaxis()->SetTitleOffset(1);
   quadLineFit1071->GetXaxis()->SetTitleFont(42);
   quadLineFit1071->GetYaxis()->SetLabelFont(42);
   quadLineFit1071->GetYaxis()->SetTitleFont(42);
   quadLineFit1071->SetParameter(0,5.58908);
   quadLineFit1071->SetParError(0,0.1792603);
   quadLineFit1071->SetParLimits(0,0,0);
   quadLineFit1071->SetParameter(1,-0.1700975);
   quadLineFit1071->SetParError(1,0.01042908);
   quadLineFit1071->SetParLimits(1,0,0);
   quadLineFit1071->Draw("same");
   
   Double_t 40.000000 ppm_fx1071[2] = {
   16,
   18.3};
   Double_t 40.000000 ppm_fy1071[2] = {
   3.626352,
   3.146012};
   Double_t 40.000000 ppm_fex1071[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1071[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,40.000000 ppm_fx1071,40.000000 ppm_fy1071,40.000000 ppm_fex1071,40.000000 ppm_fey1071);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1071 = new TH1F("Graph_40dO000000sPppm1071","Graph",100,15.77,18.53);
   Graph_40dO000000sPppm1071->SetMinimum(3.077624);
   Graph_40dO000000sPppm1071->SetMaximum(3.694739);
   Graph_40dO000000sPppm1071->SetDirectory(0);
   Graph_40dO000000sPppm1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1071->SetLineColor(ci);
   Graph_40dO000000sPppm1071->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1071->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1071->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1071->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1071->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1071->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1071->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1071);
   
   
   TF1 *quadLineFit1072 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1072->SetFillColor(19);
   quadLineFit1072->SetFillStyle(0);
   quadLineFit1072->SetLineColor(10);
   quadLineFit1072->SetLineWidth(2);
   quadLineFit1072->SetChisquare(1.05161e-18);
   quadLineFit1072->SetNDF(0);
   quadLineFit1072->GetXaxis()->SetLabelFont(42);
   quadLineFit1072->GetXaxis()->SetTitleOffset(1);
   quadLineFit1072->GetXaxis()->SetTitleFont(42);
   quadLineFit1072->GetYaxis()->SetLabelFont(42);
   quadLineFit1072->GetYaxis()->SetTitleFont(42);
   quadLineFit1072->SetParameter(0,6.967847);
   quadLineFit1072->SetParError(0,0.1792603);
   quadLineFit1072->SetParLimits(0,0,0);
   quadLineFit1072->SetParameter(1,-0.2088434);
   quadLineFit1072->SetParError(1,0.01042908);
   quadLineFit1072->SetParLimits(1,0,0);
   quadLineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1072);
   gre->Draw("p ");
   
   TF1 *quadLineFit1073 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1073->SetFillColor(19);
   quadLineFit1073->SetFillStyle(0);
   quadLineFit1073->SetLineColor(10);
   quadLineFit1073->SetLineWidth(2);
   quadLineFit1073->SetChisquare(1.05161e-18);
   quadLineFit1073->SetNDF(0);
   quadLineFit1073->GetXaxis()->SetLabelFont(42);
   quadLineFit1073->GetXaxis()->SetTitleOffset(1);
   quadLineFit1073->GetXaxis()->SetTitleFont(42);
   quadLineFit1073->GetYaxis()->SetLabelFont(42);
   quadLineFit1073->GetYaxis()->SetTitleFont(42);
   quadLineFit1073->SetParameter(0,6.967847);
   quadLineFit1073->SetParError(0,0.1792603);
   quadLineFit1073->SetParLimits(0,0,0);
   quadLineFit1073->SetParameter(1,-0.2088434);
   quadLineFit1073->SetParError(1,0.01042908);
   quadLineFit1073->SetParLimits(1,0,0);
   quadLineFit1073->Draw("same");
   
   Double_t 50.000000 ppm_fx1073[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1073[2] = {
   4.365279,
   3.80775};
   Double_t 50.000000 ppm_fex1073[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1073[2] = {
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(2,50.000000 ppm_fx1073,50.000000 ppm_fy1073,50.000000 ppm_fex1073,50.000000 ppm_fey1073);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1073 = new TH1F("Graph_50dO000000sPppm1073","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1073->SetMinimum(3.731644);
   Graph_50dO000000sPppm1073->SetMaximum(4.441385);
   Graph_50dO000000sPppm1073->SetDirectory(0);
   Graph_50dO000000sPppm1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1073->SetLineColor(ci);
   Graph_50dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1073->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineColor(11);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(7.788532e-20);
   quadLineFit1074->SetNDF(0);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,8.243738);
   quadLineFit1074->SetParError(0,0.1792603);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,-0.2424037);
   quadLineFit1074->SetParError(1,0.01042908);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("p ");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineColor(11);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(7.788532e-20);
   quadLineFit1075->SetNDF(0);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,8.243738);
   quadLineFit1075->SetParError(0,0.1792603);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,-0.2424037);
   quadLineFit1075->SetParError(1,0.01042908);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
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
