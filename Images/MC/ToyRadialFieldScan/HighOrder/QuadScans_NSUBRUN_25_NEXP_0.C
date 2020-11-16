void QuadScans_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 12 08:03:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1001[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1001[4] = {
   -3.594924,
   -3.147783,
   -2.849122,
   -2.56262};
   Double_t -50.000000 ppm_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1001[4] = {
   0.02922466,
   0.02922466,
   0.02922466,
   0.02922466};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1001,-50.000000 ppm_fy1001,-50.000000 ppm_fex1001,-50.000000 ppm_fey1001);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1001 = new TH1F("Graph_mI50dO000000sPppm1001","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1001->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1001->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1001->SetDirectory(0);
   Graph_mI50dO000000sPppm1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1001->SetLineColor(ci);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1001->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1001->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1001->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1001->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1001);
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(8.64134);
   quadLineFit1002->SetNDF(2);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,-5.924849);
   quadLineFit1002->SetParError(0,0.1120501);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,0.1697787);
   quadLineFit1002->SetParError(1,0.006534898);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(8.64134);
   quadLineFit1003->SetNDF(2);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,-5.924849);
   quadLineFit1003->SetParError(0,0.1120501);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,0.1697787);
   quadLineFit1003->SetParError(1,0.006534898);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t -30.000000 ppm_fx1003[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1003[4] = {
   -1.874831,
   -1.680182,
   -1.500377,
   -1.345424};
   Double_t -30.000000 ppm_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1003[4] = {
   0.02922466,
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1003,-30.000000 ppm_fy1003,-30.000000 ppm_fex1003,-30.000000 ppm_fey1003);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1003 = new TH1F("Graph_mI30dO000000sPppm1003","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1003->SetMinimum(-1.962841);
   Graph_mI30dO000000sPppm1003->SetMaximum(-1.257414);
   Graph_mI30dO000000sPppm1003->SetDirectory(0);
   Graph_mI30dO000000sPppm1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1003->SetLineColor(ci);
   Graph_mI30dO000000sPppm1003->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1003->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1003->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1003->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1003->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1003->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1003->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(0.4670973);
   quadLineFit1004->SetNDF(2);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,-3.103026);
   quadLineFit1004->SetParError(0,0.1120478);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,0.0884013);
   quadLineFit1004->SetParError(1,0.006534762);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(0.4670973);
   quadLineFit1005->SetNDF(2);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,-3.103026);
   quadLineFit1005->SetParError(0,0.1120478);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,0.0884013);
   quadLineFit1005->SetParError(1,0.006534762);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t -10.000000 ppm_fx1005[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1005[4] = {
   -0.1482258,
   -0.1257155,
   -0.08442081,
   -0.1005133};
   Double_t -10.000000 ppm_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1005[4] = {
   0.02922466,
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1005,-10.000000 ppm_fy1005,-10.000000 ppm_fex1005,-10.000000 ppm_fey1005);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1005 = new TH1F("Graph_mI10dO000000sPppm1005","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1005->SetMinimum(-0.1896759);
   Graph_mI10dO000000sPppm1005->SetMaximum(-0.04297071);
   Graph_mI10dO000000sPppm1005->SetDirectory(0);
   Graph_mI10dO000000sPppm1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1005->SetLineColor(ci);
   Graph_mI10dO000000sPppm1005->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1005->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1005->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1005->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1005->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1005->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1005->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(3);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->SetChisquare(0.7758624);
   quadLineFit1006->SetNDF(2);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,-0.2714864);
   quadLineFit1006->SetParError(0,0.1120491);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,0.009221618);
   quadLineFit1006->SetParError(1,0.006534836);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(3);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->SetChisquare(0.7758624);
   quadLineFit1007->SetNDF(2);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,-0.2714864);
   quadLineFit1007->SetParError(0,0.1120491);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,0.009221618);
   quadLineFit1007->SetParError(1,0.006534836);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t 10.000000 ppm_fx1007[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1007[4] = {
   1.548462,
   1.364865,
   1.219732,
   1.100967};
   Double_t 10.000000 ppm_fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1007[4] = {
   0.02922466,
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(4,10.000000 ppm_fx1007,10.000000 ppm_fy1007,10.000000 ppm_fex1007,10.000000 ppm_fey1007);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1007 = new TH1F("Graph_10dO000000sPppm1007","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1007->SetMinimum(1.021148);
   Graph_10dO000000sPppm1007->SetMaximum(1.628281);
   Graph_10dO000000sPppm1007->SetDirectory(0);
   Graph_10dO000000sPppm1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1007->SetLineColor(ci);
   Graph_10dO000000sPppm1007->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1007->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1007->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1007->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1007->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1007->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1007->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(4);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->SetChisquare(1.238878);
   quadLineFit1008->SetNDF(2);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,2.57298);
   quadLineFit1008->SetParError(0,0.1120491);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,-0.07438082);
   quadLineFit1008->SetParError(1,0.006534834);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(1.238878);
   quadLineFit1009->SetNDF(2);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,2.57298);
   quadLineFit1009->SetParError(0,0.1120491);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,-0.07438082);
   quadLineFit1009->SetParError(1,0.006534834);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t 30.000000 ppm_fx1009[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1009[4] = {
   3.295852,
   2.818484,
   2.490515,
   2.254571};
   Double_t 30.000000 ppm_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1009[4] = {
   0.02922466,
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(4,30.000000 ppm_fx1009,30.000000 ppm_fy1009,30.000000 ppm_fex1009,30.000000 ppm_fey1009);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1009 = new TH1F("Graph_30dO000000sPppm1009","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1009->SetMinimum(2.115373);
   Graph_30dO000000sPppm1009->SetMaximum(3.43505);
   Graph_30dO000000sPppm1009->SetDirectory(0);
   Graph_30dO000000sPppm1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1009->SetLineColor(ci);
   Graph_30dO000000sPppm1009->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1009->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1009->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1009->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1009->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1009->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1009->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);
   quadLineFit1010->SetLineColor(5);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(17.25363);
   quadLineFit1010->SetNDF(2);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,5.648896);
   quadLineFit1010->SetParError(0,0.1120477);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,-0.1725906);
   quadLineFit1010->SetParError(1,0.006534756);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("p ");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);
   quadLineFit1011->SetLineColor(5);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(17.25363);
   quadLineFit1011->SetNDF(2);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,5.648896);
   quadLineFit1011->SetParError(0,0.1120477);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,-0.1725906);
   quadLineFit1011->SetParError(1,0.006534756);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t 50.000000 ppm_fx1011[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1011[4] = {
   4.946354,
   4.374925,
   3.871321,
   3.479475};
   Double_t 50.000000 ppm_fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1011[4] = {
   0.02922466,
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(4,50.000000 ppm_fx1011,50.000000 ppm_fy1011,50.000000 ppm_fex1011,50.000000 ppm_fey1011);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1011 = new TH1F("Graph_50dO000000sPppm1011","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1011->SetMinimum(3.297718);
   Graph_50dO000000sPppm1011->SetMaximum(5.128111);
   Graph_50dO000000sPppm1011->SetDirectory(0);
   Graph_50dO000000sPppm1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1011->SetLineColor(ci);
   Graph_50dO000000sPppm1011->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1011->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1011->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1011->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(6);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(9.55304);
   quadLineFit1012->SetNDF(2);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,8.336623);
   quadLineFit1012->SetParError(0,0.1120462);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,-0.245212);
   quadLineFit1012->SetParError(1,0.006534666);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(6);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(9.55304);
   quadLineFit1013->SetNDF(2);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,8.336623);
   quadLineFit1013->SetParError(0,0.1120462);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,-0.245212);
   quadLineFit1013->SetParError(1,0.006534666);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","App. #LTB_{r}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
