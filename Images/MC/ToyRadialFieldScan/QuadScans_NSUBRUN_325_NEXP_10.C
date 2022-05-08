void QuadScans_NSUBRUN_325_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.220274,0.0663141,7.498928);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1193[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1193[3] = {
   -3.158683,
   -2.806381,
   -2.588334};
   Double_t -50.000000 ppm_fex1193[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1193[3] = {
   0.008187287,
   0.008187287,
   0.008187287};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1193,-50.000000 ppm_fy1193,-50.000000 ppm_fex1193,-50.000000 ppm_fey1193);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1193 = new TH1F("Graph_mI50dO000000sPppm1193","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1193->SetMinimum(-3.948354);
   Graph_mI50dO000000sPppm1193->SetMaximum(6.227008);
   Graph_mI50dO000000sPppm1193->SetDirectory(0);
   Graph_mI50dO000000sPppm1193->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1193->SetLineColor(ci);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1193->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1193->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1193->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1193->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1193);
   
   
   TF1 *quadLineFit1194 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1194->SetFillColor(19);
   quadLineFit1194->SetFillStyle(0);
   quadLineFit1194->SetLineWidth(2);
   quadLineFit1194->SetChisquare(0.005801709);
   quadLineFit1194->SetNDF(1);
   quadLineFit1194->GetXaxis()->SetLabelFont(42);
   quadLineFit1194->GetXaxis()->SetTitleOffset(1);
   quadLineFit1194->GetXaxis()->SetTitleFont(42);
   quadLineFit1194->GetYaxis()->SetLabelFont(42);
   quadLineFit1194->GetYaxis()->SetTitleFont(42);
   quadLineFit1194->SetParameter(0,0.01811659);
   quadLineFit1194->SetParError(0,0.05791032);
   quadLineFit1194->SetParLimits(0,0,0);
   quadLineFit1194->SetParameter(1,-50.83187);
   quadLineFit1194->SetParError(1,1.022521);
   quadLineFit1194->SetParLimits(1,0,0);
   quadLineFit1194->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1194);
   gre->Draw("ap");
   
   TF1 *quadLineFit1195 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1195->SetFillColor(19);
   quadLineFit1195->SetFillStyle(0);
   quadLineFit1195->SetLineWidth(2);
   quadLineFit1195->SetChisquare(0.005801709);
   quadLineFit1195->SetNDF(1);
   quadLineFit1195->GetXaxis()->SetLabelFont(42);
   quadLineFit1195->GetXaxis()->SetTitleOffset(1);
   quadLineFit1195->GetXaxis()->SetTitleFont(42);
   quadLineFit1195->GetYaxis()->SetLabelFont(42);
   quadLineFit1195->GetYaxis()->SetTitleFont(42);
   quadLineFit1195->SetParameter(0,0.01811659);
   quadLineFit1195->SetParError(0,0.05791032);
   quadLineFit1195->SetParLimits(0,0,0);
   quadLineFit1195->SetParameter(1,-50.83187);
   quadLineFit1195->SetParError(1,1.022521);
   quadLineFit1195->SetParLimits(1,0,0);
   quadLineFit1195->Draw("same");
   
   Double_t -30.000000 ppm_fx1195[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1195[4] = {
   -1.904987,
   -1.674233,
   -1.461196,
   -1.351548};
   Double_t -30.000000 ppm_fex1195[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1195[4] = {
   0.008187287,
   0.008187287,
   0.008187287,
   0.008187287};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1195,-30.000000 ppm_fy1195,-30.000000 ppm_fex1195,-30.000000 ppm_fey1195);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1195 = new TH1F("Graph_mI30dO000000sPppm1195","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1195->SetMinimum(-1.970156);
   Graph_mI30dO000000sPppm1195->SetMaximum(-1.28638);
   Graph_mI30dO000000sPppm1195->SetDirectory(0);
   Graph_mI30dO000000sPppm1195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1195->SetLineColor(ci);
   Graph_mI30dO000000sPppm1195->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1195->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1195->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1195->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1195->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1195->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1195->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1195);
   
   
   TF1 *quadLineFit1196 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1196->SetFillColor(19);
   quadLineFit1196->SetFillStyle(0);
   quadLineFit1196->SetLineColor(2);
   quadLineFit1196->SetLineWidth(2);
   quadLineFit1196->SetChisquare(3.560286);
   quadLineFit1196->SetNDF(2);
   quadLineFit1196->GetXaxis()->SetLabelFont(42);
   quadLineFit1196->GetXaxis()->SetTitleOffset(1);
   quadLineFit1196->GetXaxis()->SetTitleFont(42);
   quadLineFit1196->GetYaxis()->SetLabelFont(42);
   quadLineFit1196->GetYaxis()->SetTitleFont(42);
   quadLineFit1196->SetParameter(0,0.07349205);
   quadLineFit1196->SetParError(0,0.0325843);
   quadLineFit1196->SetParLimits(0,0,0);
   quadLineFit1196->SetParameter(1,-27.7694);
   quadLineFit1196->SetParError(1,0.5370532);
   quadLineFit1196->SetParLimits(1,0,0);
   quadLineFit1196->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1196);
   gre->Draw("p ");
   
   TF1 *quadLineFit1197 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1197->SetFillColor(19);
   quadLineFit1197->SetFillStyle(0);
   quadLineFit1197->SetLineColor(2);
   quadLineFit1197->SetLineWidth(2);
   quadLineFit1197->SetChisquare(3.560286);
   quadLineFit1197->SetNDF(2);
   quadLineFit1197->GetXaxis()->SetLabelFont(42);
   quadLineFit1197->GetXaxis()->SetTitleOffset(1);
   quadLineFit1197->GetXaxis()->SetTitleFont(42);
   quadLineFit1197->GetYaxis()->SetLabelFont(42);
   quadLineFit1197->GetYaxis()->SetTitleFont(42);
   quadLineFit1197->SetParameter(0,0.07349205);
   quadLineFit1197->SetParError(0,0.0325843);
   quadLineFit1197->SetParLimits(0,0,0);
   quadLineFit1197->SetParameter(1,-27.7694);
   quadLineFit1197->SetParError(1,0.5370532);
   quadLineFit1197->SetParLimits(1,0,0);
   quadLineFit1197->Draw("same");
   
   Double_t -10.000000 ppm_fx1197[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1197[4] = {
   -0.1709257,
   -0.1387446,
   -0.1329186,
   -0.1292935};
   Double_t -10.000000 ppm_fex1197[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1197[4] = {
   0.008187287,
   0.008187287,
   0.008187287,
   0.008187287};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1197,-10.000000 ppm_fy1197,-10.000000 ppm_fex1197,-10.000000 ppm_fey1197);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1197 = new TH1F("Graph_mI10dO000000sPppm1197","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1197->SetMinimum(-0.1849136);
   Graph_mI10dO000000sPppm1197->SetMaximum(-0.1153055);
   Graph_mI10dO000000sPppm1197->SetDirectory(0);
   Graph_mI10dO000000sPppm1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1197->SetLineColor(ci);
   Graph_mI10dO000000sPppm1197->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1197->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1197->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1197->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1197->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1197->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1197->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1197);
   
   
   TF1 *quadLineFit1198 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1198->SetFillColor(19);
   quadLineFit1198->SetFillStyle(0);
   quadLineFit1198->SetLineColor(3);
   quadLineFit1198->SetLineWidth(2);
   quadLineFit1198->SetChisquare(1.875739);
   quadLineFit1198->SetNDF(2);
   quadLineFit1198->GetXaxis()->SetLabelFont(42);
   quadLineFit1198->GetXaxis()->SetTitleOffset(1);
   quadLineFit1198->GetXaxis()->SetTitleFont(42);
   quadLineFit1198->GetYaxis()->SetLabelFont(42);
   quadLineFit1198->GetYaxis()->SetTitleFont(42);
   quadLineFit1198->SetParameter(0,-0.0205444);
   quadLineFit1198->SetParError(0,0.03257989);
   quadLineFit1198->SetParLimits(0,0,0);
   quadLineFit1198->SetParameter(1,-2.033943);
   quadLineFit1198->SetParError(1,0.5369804);
   quadLineFit1198->SetParLimits(1,0,0);
   quadLineFit1198->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1198);
   gre->Draw("p ");
   
   TF1 *quadLineFit1199 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1199->SetFillColor(19);
   quadLineFit1199->SetFillStyle(0);
   quadLineFit1199->SetLineColor(3);
   quadLineFit1199->SetLineWidth(2);
   quadLineFit1199->SetChisquare(1.875739);
   quadLineFit1199->SetNDF(2);
   quadLineFit1199->GetXaxis()->SetLabelFont(42);
   quadLineFit1199->GetXaxis()->SetTitleOffset(1);
   quadLineFit1199->GetXaxis()->SetTitleFont(42);
   quadLineFit1199->GetYaxis()->SetLabelFont(42);
   quadLineFit1199->GetYaxis()->SetTitleFont(42);
   quadLineFit1199->SetParameter(0,-0.0205444);
   quadLineFit1199->SetParError(0,0.03257989);
   quadLineFit1199->SetParLimits(0,0,0);
   quadLineFit1199->SetParameter(1,-2.033943);
   quadLineFit1199->SetParError(1,0.5369804);
   quadLineFit1199->SetParLimits(1,0,0);
   quadLineFit1199->Draw("same");
   
   Double_t 10.000000 ppm_fx1199[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1199[3] = {
   1.549599,
   1.361837,
   1.12628};
   Double_t 10.000000 ppm_fex1199[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1199[3] = {
   0.008187287,
   0.008187287,
   0.008187287};
   gre = new TGraphErrors(3,10.000000 ppm_fx1199,10.000000 ppm_fy1199,10.000000 ppm_fex1199,10.000000 ppm_fey1199);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1199 = new TH1F("Graph_10dO000000sPppm1199","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1199->SetMinimum(1.074123);
   Graph_10dO000000sPppm1199->SetMaximum(1.601756);
   Graph_10dO000000sPppm1199->SetDirectory(0);
   Graph_10dO000000sPppm1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1199->SetLineColor(ci);
   Graph_10dO000000sPppm1199->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1199->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1199->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1199->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1199->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1199->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1199->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1199);
   
   
   TF1 *quadLineFit1200 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1200->SetFillColor(19);
   quadLineFit1200->SetFillStyle(0);
   quadLineFit1200->SetLineColor(4);
   quadLineFit1200->SetLineWidth(2);
   quadLineFit1200->SetChisquare(0.0002364724);
   quadLineFit1200->SetNDF(1);
   quadLineFit1200->GetXaxis()->SetLabelFont(42);
   quadLineFit1200->GetXaxis()->SetTitleOffset(1);
   quadLineFit1200->GetXaxis()->SetTitleFont(42);
   quadLineFit1200->GetYaxis()->SetLabelFont(42);
   quadLineFit1200->GetYaxis()->SetTitleFont(42);
   quadLineFit1200->SetParameter(0,0.04872371);
   quadLineFit1200->SetParError(0,0.03571934);
   quadLineFit1200->SetParLimits(0,0,0);
   quadLineFit1200->SetParameter(1,21.01146);
   quadLineFit1200->SetParError(1,0.5734853);
   quadLineFit1200->SetParLimits(1,0,0);
   quadLineFit1200->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1200);
   gre->Draw("p ");
   
   TF1 *quadLineFit1201 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1201->SetFillColor(19);
   quadLineFit1201->SetFillStyle(0);
   quadLineFit1201->SetLineColor(4);
   quadLineFit1201->SetLineWidth(2);
   quadLineFit1201->SetChisquare(0.0002364724);
   quadLineFit1201->SetNDF(1);
   quadLineFit1201->GetXaxis()->SetLabelFont(42);
   quadLineFit1201->GetXaxis()->SetTitleOffset(1);
   quadLineFit1201->GetXaxis()->SetTitleFont(42);
   quadLineFit1201->GetYaxis()->SetLabelFont(42);
   quadLineFit1201->GetYaxis()->SetTitleFont(42);
   quadLineFit1201->SetParameter(0,0.04872371);
   quadLineFit1201->SetParError(0,0.03571934);
   quadLineFit1201->SetParLimits(0,0,0);
   quadLineFit1201->SetParameter(1,21.01146);
   quadLineFit1201->SetParError(1,0.5734853);
   quadLineFit1201->SetParLimits(1,0,0);
   quadLineFit1201->Draw("same");
   
   Double_t 30.000000 ppm_fx1201[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1201[4] = {
   3.281064,
   2.862431,
   2.554162,
   2.342691};
   Double_t 30.000000 ppm_fex1201[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1201[4] = {
   0.008187287,
   0.008187287,
   0.008187287,
   0.008187287};
   gre = new TGraphErrors(4,30.000000 ppm_fx1201,30.000000 ppm_fy1201,30.000000 ppm_fex1201,30.000000 ppm_fey1201);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1201 = new TH1F("Graph_30dO000000sPppm1201","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1201->SetMinimum(2.239029);
   Graph_30dO000000sPppm1201->SetMaximum(3.384726);
   Graph_30dO000000sPppm1201->SetDirectory(0);
   Graph_30dO000000sPppm1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1201->SetLineColor(ci);
   Graph_30dO000000sPppm1201->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1201->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1201->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1201->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1201->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1201->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1201->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1201);
   
   
   TF1 *quadLineFit1202 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1202->SetFillColor(19);
   quadLineFit1202->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1202->SetLineColor(ci);
   quadLineFit1202->SetLineWidth(2);
   quadLineFit1202->SetChisquare(1.805337);
   quadLineFit1202->SetNDF(2);
   quadLineFit1202->GetXaxis()->SetLabelFont(42);
   quadLineFit1202->GetXaxis()->SetTitleOffset(1);
   quadLineFit1202->GetXaxis()->SetTitleFont(42);
   quadLineFit1202->GetYaxis()->SetLabelFont(42);
   quadLineFit1202->GetYaxis()->SetTitleFont(42);
   quadLineFit1202->SetParameter(0,-0.02691718);
   quadLineFit1202->SetParError(0,0.03257621);
   quadLineFit1202->SetParLimits(0,0,0);
   quadLineFit1202->SetParameter(1,46.30225);
   quadLineFit1202->SetParError(1,0.5369189);
   quadLineFit1202->SetParLimits(1,0,0);
   quadLineFit1202->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1202);
   gre->Draw("p ");
   
   TF1 *quadLineFit1203 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1203->SetFillColor(19);
   quadLineFit1203->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1203->SetLineColor(ci);
   quadLineFit1203->SetLineWidth(2);
   quadLineFit1203->SetChisquare(1.805337);
   quadLineFit1203->SetNDF(2);
   quadLineFit1203->GetXaxis()->SetLabelFont(42);
   quadLineFit1203->GetXaxis()->SetTitleOffset(1);
   quadLineFit1203->GetXaxis()->SetTitleFont(42);
   quadLineFit1203->GetYaxis()->SetLabelFont(42);
   quadLineFit1203->GetYaxis()->SetTitleFont(42);
   quadLineFit1203->SetParameter(0,-0.02691718);
   quadLineFit1203->SetParError(0,0.03257621);
   quadLineFit1203->SetParLimits(0,0,0);
   quadLineFit1203->SetParameter(1,46.30225);
   quadLineFit1203->SetParError(1,0.5369189);
   quadLineFit1203->SetParLimits(1,0,0);
   quadLineFit1203->Draw("same");
   
   Double_t 50.000000 ppm_fx1203[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1203[4] = {
   4.981606,
   4.364711,
   3.878063,
   3.57664};
   Double_t 50.000000 ppm_fex1203[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1203[4] = {
   0.008187287,
   0.008187287,
   0.008187287,
   0.008187287};
   gre = new TGraphErrors(4,50.000000 ppm_fx1203,50.000000 ppm_fy1203,50.000000 ppm_fex1203,50.000000 ppm_fey1203);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1203 = new TH1F("Graph_50dO000000sPppm1203","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1203->SetMinimum(3.426318);
   Graph_50dO000000sPppm1203->SetMaximum(5.131927);
   Graph_50dO000000sPppm1203->SetDirectory(0);
   Graph_50dO000000sPppm1203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1203->SetLineColor(ci);
   Graph_50dO000000sPppm1203->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1203->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1203->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1203->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1203);
   
   
   TF1 *quadLineFit1204 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1204->SetFillColor(19);
   quadLineFit1204->SetFillStyle(0);
   quadLineFit1204->SetLineColor(6);
   quadLineFit1204->SetLineWidth(2);
   quadLineFit1204->SetChisquare(0.3541094);
   quadLineFit1204->SetNDF(2);
   quadLineFit1204->GetXaxis()->SetLabelFont(42);
   quadLineFit1204->GetXaxis()->SetTitleOffset(1);
   quadLineFit1204->GetXaxis()->SetTitleFont(42);
   quadLineFit1204->GetYaxis()->SetLabelFont(42);
   quadLineFit1204->GetYaxis()->SetTitleFont(42);
   quadLineFit1204->SetParameter(0,0.003290612);
   quadLineFit1204->SetParError(0,0.03257965);
   quadLineFit1204->SetParLimits(0,0,0);
   quadLineFit1204->SetParameter(1,69.72681);
   quadLineFit1204->SetParError(1,0.5369765);
   quadLineFit1204->SetParLimits(1,0,0);
   quadLineFit1204->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1204);
   gre->Draw("p ");
   
   TF1 *quadLineFit1205 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1205->SetFillColor(19);
   quadLineFit1205->SetFillStyle(0);
   quadLineFit1205->SetLineColor(6);
   quadLineFit1205->SetLineWidth(2);
   quadLineFit1205->SetChisquare(0.3541094);
   quadLineFit1205->SetNDF(2);
   quadLineFit1205->GetXaxis()->SetLabelFont(42);
   quadLineFit1205->GetXaxis()->SetTitleOffset(1);
   quadLineFit1205->GetXaxis()->SetTitleFont(42);
   quadLineFit1205->GetYaxis()->SetLabelFont(42);
   quadLineFit1205->GetYaxis()->SetTitleFont(42);
   quadLineFit1205->SetParameter(0,0.003290612);
   quadLineFit1205->SetParError(0,0.03257965);
   quadLineFit1205->SetParLimits(0,0,0);
   quadLineFit1205->SetParameter(1,69.72681);
   quadLineFit1205->SetParError(1,0.5369765);
   quadLineFit1205->SetParLimits(1,0,0);
   quadLineFit1205->Draw("same");
   
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
