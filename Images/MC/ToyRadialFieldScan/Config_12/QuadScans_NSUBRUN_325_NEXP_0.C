void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1169[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1169[3] = {
   -3.166722,
   -2.797371,
   -2.527577};
   Double_t -50.000000 ppm_fex1169[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1169[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1169,-50.000000 ppm_fy1169,-50.000000 ppm_fex1169,-50.000000 ppm_fey1169);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1169 = new TH1F("Graph_mI50dO000000sPppm1169","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1169->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1169->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1169->SetDirectory(0);
   Graph_mI50dO000000sPppm1169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1169->SetLineColor(ci);
   Graph_mI50dO000000sPppm1169->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1169->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1169->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1169->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1169->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1169->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1169->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1169->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1169->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1169->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1169->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1169->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1169->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1169->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1169);
   
   
   TF1 *quadLineFit1170 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1170->SetFillColor(19);
   quadLineFit1170->SetFillStyle(0);
   quadLineFit1170->SetLineWidth(2);
   quadLineFit1170->SetChisquare(24.71914);
   quadLineFit1170->SetNDF(1);
   quadLineFit1170->GetXaxis()->SetLabelFont(42);
   quadLineFit1170->GetXaxis()->SetTitleOffset(1);
   quadLineFit1170->GetXaxis()->SetTitleFont(42);
   quadLineFit1170->GetYaxis()->SetLabelFont(42);
   quadLineFit1170->GetYaxis()->SetTitleFont(42);
   quadLineFit1170->SetParameter(0,-5.706711);
   quadLineFit1170->SetParError(0,0.05223677);
   quadLineFit1170->SetParLimits(0,0,0);
   quadLineFit1170->SetParameter(1,0.1597864);
   quadLineFit1170->SetParError(1,0.002890173);
   quadLineFit1170->SetParLimits(1,0,0);
   quadLineFit1170->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1170);
   gre->Draw("ap");
   
   TF1 *quadLineFit1171 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1171->SetFillColor(19);
   quadLineFit1171->SetFillStyle(0);
   quadLineFit1171->SetLineWidth(2);
   quadLineFit1171->SetChisquare(24.71914);
   quadLineFit1171->SetNDF(1);
   quadLineFit1171->GetXaxis()->SetLabelFont(42);
   quadLineFit1171->GetXaxis()->SetTitleOffset(1);
   quadLineFit1171->GetXaxis()->SetTitleFont(42);
   quadLineFit1171->GetYaxis()->SetLabelFont(42);
   quadLineFit1171->GetYaxis()->SetTitleFont(42);
   quadLineFit1171->SetParameter(0,-5.706711);
   quadLineFit1171->SetParError(0,0.05223677);
   quadLineFit1171->SetParLimits(0,0,0);
   quadLineFit1171->SetParameter(1,0.1597864);
   quadLineFit1171->SetParError(1,0.002890173);
   quadLineFit1171->SetParLimits(1,0,0);
   quadLineFit1171->Draw("same");
   
   Double_t -25.000000 ppm_fx1171[3] = {
   16,
   18,
   20};
   Double_t -25.000000 ppm_fy1171[3] = {
   -1.287783,
   -1.1383,
   -1.027672};
   Double_t -25.000000 ppm_fex1171[3] = {
   0,
   0,
   0};
   Double_t -25.000000 ppm_fey1171[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,-25.000000 ppm_fx1171,-25.000000 ppm_fy1171,-25.000000 ppm_fex1171,-25.000000 ppm_fey1171);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1171 = new TH1F("Graph_mI25dO000000sPppm1171","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1171->SetMinimum(-1.323604);
   Graph_mI25dO000000sPppm1171->SetMaximum(-0.991851);
   Graph_mI25dO000000sPppm1171->SetDirectory(0);
   Graph_mI25dO000000sPppm1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1171->SetLineColor(ci);
   Graph_mI25dO000000sPppm1171->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1171->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1171->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1171->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1171->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1171->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1171->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1171);
   
   
   TF1 *quadLineFit1172 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1172->SetFillColor(19);
   quadLineFit1172->SetFillStyle(0);
   quadLineFit1172->SetLineColor(2);
   quadLineFit1172->SetLineWidth(2);
   quadLineFit1172->SetChisquare(3.764913);
   quadLineFit1172->SetNDF(1);
   quadLineFit1172->GetXaxis()->SetLabelFont(42);
   quadLineFit1172->GetXaxis()->SetTitleOffset(1);
   quadLineFit1172->GetXaxis()->SetTitleFont(42);
   quadLineFit1172->GetYaxis()->SetLabelFont(42);
   quadLineFit1172->GetYaxis()->SetTitleFont(42);
   quadLineFit1172->SetParameter(0,-2.32175);
   quadLineFit1172->SetParError(0,0.05224017);
   quadLineFit1172->SetParLimits(0,0,0);
   quadLineFit1172->SetParameter(1,0.0650277);
   quadLineFit1172->SetParError(1,0.002890362);
   quadLineFit1172->SetParLimits(1,0,0);
   quadLineFit1172->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1172);
   gre->Draw("p ");
   
   TF1 *quadLineFit1173 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1173->SetFillColor(19);
   quadLineFit1173->SetFillStyle(0);
   quadLineFit1173->SetLineColor(2);
   quadLineFit1173->SetLineWidth(2);
   quadLineFit1173->SetChisquare(3.764913);
   quadLineFit1173->SetNDF(1);
   quadLineFit1173->GetXaxis()->SetLabelFont(42);
   quadLineFit1173->GetXaxis()->SetTitleOffset(1);
   quadLineFit1173->GetXaxis()->SetTitleFont(42);
   quadLineFit1173->GetYaxis()->SetLabelFont(42);
   quadLineFit1173->GetYaxis()->SetTitleFont(42);
   quadLineFit1173->SetParameter(0,-2.32175);
   quadLineFit1173->SetParError(0,0.05224017);
   quadLineFit1173->SetParLimits(0,0,0);
   quadLineFit1173->SetParameter(1,0.0650277);
   quadLineFit1173->SetParError(1,0.002890362);
   quadLineFit1173->SetParLimits(1,0,0);
   quadLineFit1173->Draw("same");
   
   Double_t 0.000000 ppm_fx1173[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1173[3] = {
   0.5984714,
   0.5432056,
   0.4806518};
   Double_t 0.000000 ppm_fex1173[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1173[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,0.000000 ppm_fx1173,0.000000 ppm_fy1173,0.000000 ppm_fex1173,0.000000 ppm_fey1173);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1173 = new TH1F("Graph_0dO000000sPppm1173","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1173->SetMinimum(0.45906);
   Graph_0dO000000sPppm1173->SetMaximum(0.6200632);
   Graph_0dO000000sPppm1173->SetDirectory(0);
   Graph_0dO000000sPppm1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1173->SetLineColor(ci);
   Graph_0dO000000sPppm1173->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1173->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1173->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1173->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1173->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1173->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1173->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1173);
   
   
   TF1 *quadLineFit1174 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1174->SetFillColor(19);
   quadLineFit1174->SetFillStyle(0);
   quadLineFit1174->SetLineColor(3);
   quadLineFit1174->SetLineWidth(2);
   quadLineFit1174->SetChisquare(0.1324651);
   quadLineFit1174->SetNDF(1);
   quadLineFit1174->GetXaxis()->SetLabelFont(42);
   quadLineFit1174->GetXaxis()->SetTitleOffset(1);
   quadLineFit1174->GetXaxis()->SetTitleFont(42);
   quadLineFit1174->GetYaxis()->SetLabelFont(42);
   quadLineFit1174->GetYaxis()->SetTitleFont(42);
   quadLineFit1174->SetParameter(0,1.070964);
   quadLineFit1174->SetParError(0,0.05223958);
   quadLineFit1174->SetParLimits(0,0,0);
   quadLineFit1174->SetParameter(1,-0.02945489);
   quadLineFit1174->SetParError(1,0.00289033);
   quadLineFit1174->SetParLimits(1,0,0);
   quadLineFit1174->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1174);
   gre->Draw("p ");
   
   TF1 *quadLineFit1175 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1175->SetFillColor(19);
   quadLineFit1175->SetFillStyle(0);
   quadLineFit1175->SetLineColor(3);
   quadLineFit1175->SetLineWidth(2);
   quadLineFit1175->SetChisquare(0.1324651);
   quadLineFit1175->SetNDF(1);
   quadLineFit1175->GetXaxis()->SetLabelFont(42);
   quadLineFit1175->GetXaxis()->SetTitleOffset(1);
   quadLineFit1175->GetXaxis()->SetTitleFont(42);
   quadLineFit1175->GetYaxis()->SetLabelFont(42);
   quadLineFit1175->GetYaxis()->SetTitleFont(42);
   quadLineFit1175->SetParameter(0,1.070964);
   quadLineFit1175->SetParError(0,0.05223958);
   quadLineFit1175->SetParLimits(0,0,0);
   quadLineFit1175->SetParameter(1,-0.02945489);
   quadLineFit1175->SetParError(1,0.00289033);
   quadLineFit1175->SetParLimits(1,0,0);
   quadLineFit1175->Draw("same");
   
   Double_t 25.000000 ppm_fx1175[3] = {
   16,
   18,
   20};
   Double_t 25.000000 ppm_fy1175[3] = {
   2.478967,
   2.213704,
   1.98663};
   Double_t 25.000000 ppm_fex1175[3] = {
   0,
   0,
   0};
   Double_t 25.000000 ppm_fey1175[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,25.000000 ppm_fx1175,25.000000 ppm_fy1175,25.000000 ppm_fex1175,25.000000 ppm_fey1175);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1175 = new TH1F("Graph_25dO000000sPppm1175","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1175->SetMinimum(1.927586);
   Graph_25dO000000sPppm1175->SetMaximum(2.53801);
   Graph_25dO000000sPppm1175->SetDirectory(0);
   Graph_25dO000000sPppm1175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1175->SetLineColor(ci);
   Graph_25dO000000sPppm1175->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1175->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1175->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1175->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1175->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1175->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1175->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1175);
   
   
   TF1 *quadLineFit1176 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1176->SetFillColor(19);
   quadLineFit1176->SetFillStyle(0);
   quadLineFit1176->SetLineColor(4);
   quadLineFit1176->SetLineWidth(2);
   quadLineFit1176->SetChisquare(3.637305);
   quadLineFit1176->SetNDF(1);
   quadLineFit1176->GetXaxis()->SetLabelFont(42);
   quadLineFit1176->GetXaxis()->SetTitleOffset(1);
   quadLineFit1176->GetXaxis()->SetTitleFont(42);
   quadLineFit1176->GetYaxis()->SetLabelFont(42);
   quadLineFit1176->GetYaxis()->SetTitleFont(42);
   quadLineFit1176->SetParameter(0,4.441949);
   quadLineFit1176->SetParError(0,0.05223754);
   quadLineFit1176->SetParLimits(0,0,0);
   quadLineFit1176->SetParameter(1,-0.1230842);
   quadLineFit1176->SetParError(1,0.002890216);
   quadLineFit1176->SetParLimits(1,0,0);
   quadLineFit1176->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1176);
   gre->Draw("p ");
   
   TF1 *quadLineFit1177 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1177->SetFillColor(19);
   quadLineFit1177->SetFillStyle(0);
   quadLineFit1177->SetLineColor(4);
   quadLineFit1177->SetLineWidth(2);
   quadLineFit1177->SetChisquare(3.637305);
   quadLineFit1177->SetNDF(1);
   quadLineFit1177->GetXaxis()->SetLabelFont(42);
   quadLineFit1177->GetXaxis()->SetTitleOffset(1);
   quadLineFit1177->GetXaxis()->SetTitleFont(42);
   quadLineFit1177->GetYaxis()->SetLabelFont(42);
   quadLineFit1177->GetYaxis()->SetTitleFont(42);
   quadLineFit1177->SetParameter(0,4.441949);
   quadLineFit1177->SetParError(0,0.05223754);
   quadLineFit1177->SetParLimits(0,0,0);
   quadLineFit1177->SetParameter(1,-0.1230842);
   quadLineFit1177->SetParError(1,0.002890216);
   quadLineFit1177->SetParLimits(1,0,0);
   quadLineFit1177->Draw("same");
   
   Double_t 50.000000 ppm_fx1177[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1177[3] = {
   4.347594,
   3.875514,
   3.49316};
   Double_t 50.000000 ppm_fex1177[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1177[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,50.000000 ppm_fx1177,50.000000 ppm_fy1177,50.000000 ppm_fex1177,50.000000 ppm_fey1177);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1177 = new TH1F("Graph_50dO000000sPppm1177","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1177->SetMinimum(3.397906);
   Graph_50dO000000sPppm1177->SetMaximum(4.442847);
   Graph_50dO000000sPppm1177->SetDirectory(0);
   Graph_50dO000000sPppm1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1177->SetLineColor(ci);
   Graph_50dO000000sPppm1177->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1177->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1177->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1177->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1177->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1177->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1177->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1177);
   
   
   TF1 *quadLineFit1178 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1178->SetFillColor(19);
   quadLineFit1178->SetFillStyle(0);
   quadLineFit1178->SetLineColor(5);
   quadLineFit1178->SetLineWidth(2);
   quadLineFit1178->SetChisquare(20.07774);
   quadLineFit1178->SetNDF(1);
   quadLineFit1178->GetXaxis()->SetLabelFont(42);
   quadLineFit1178->GetXaxis()->SetTitleOffset(1);
   quadLineFit1178->GetXaxis()->SetTitleFont(42);
   quadLineFit1178->GetYaxis()->SetLabelFont(42);
   quadLineFit1178->GetYaxis()->SetTitleFont(42);
   quadLineFit1178->SetParameter(0,7.750376);
   quadLineFit1178->SetParError(0,0.05223468);
   quadLineFit1178->SetParLimits(0,0,0);
   quadLineFit1178->SetParameter(1,-0.2136085);
   quadLineFit1178->SetParError(1,0.002890058);
   quadLineFit1178->SetParLimits(1,0,0);
   quadLineFit1178->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1178);
   gre->Draw("p ");
   
   TF1 *quadLineFit1179 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1179->SetFillColor(19);
   quadLineFit1179->SetFillStyle(0);
   quadLineFit1179->SetLineColor(5);
   quadLineFit1179->SetLineWidth(2);
   quadLineFit1179->SetChisquare(20.07774);
   quadLineFit1179->SetNDF(1);
   quadLineFit1179->GetXaxis()->SetLabelFont(42);
   quadLineFit1179->GetXaxis()->SetTitleOffset(1);
   quadLineFit1179->GetXaxis()->SetTitleFont(42);
   quadLineFit1179->GetYaxis()->SetLabelFont(42);
   quadLineFit1179->GetYaxis()->SetTitleFont(42);
   quadLineFit1179->SetParameter(0,7.750376);
   quadLineFit1179->SetParError(0,0.05223468);
   quadLineFit1179->SetParLimits(0,0,0);
   quadLineFit1179->SetParameter(1,-0.2136085);
   quadLineFit1179->SetParError(1,0.002890058);
   quadLineFit1179->SetParLimits(1,0,0);
   quadLineFit1179->Draw("same");
   
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
