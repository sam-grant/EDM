void QuadScans()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:29:23 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04581371,70,0.08035061,80);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph0_fy1001[4] = {
   77.58543,
   77.24747,
   76.96306,
   76.80587};
   Double_t Graph0_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[4] = {
   0.01318635,
   0.01268397,
   0.01212545,
   0.01225522};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0.0492674,0.07344323);
   Graph_Graph01001->SetMinimum(71);
   Graph_Graph01001->SetMaximum(79);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(0.7120059);
   quadLineFit1002->SetNDF(2);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,74.80609);
   quadLineFit1002->SetParError(0,0.05040453);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,38.94739);
   quadLineFit1002->SetParError(1,0.837395);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(0.7120059);
   quadLineFit1003->SetNDF(2);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,74.80609);
   quadLineFit1003->SetParError(0,0.05040453);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,38.94739);
   quadLineFit1003->SetParError(1,0.837395);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t Graph1_fx1003[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph1_fy1003[4] = {
   76.35108,
   76.13956,
   75.98884,
   75.91636};
   Double_t Graph1_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1003[4] = {
   0.01313844,
   0.01125804,
   0.01188426,
   0.01181116};
   gre = new TGraphErrors(4,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,0.0492674,0.07344323);
   Graph_Graph11003->SetMinimum(75.85858);
   Graph_Graph11003->SetMaximum(76.41018);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(2.564709);
   quadLineFit1004->SetNDF(2);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,74.79282);
   quadLineFit1004->SetParError(0,0.04716793);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,21.68935);
   quadLineFit1004->SetParError(1,0.7835351);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(2.564709);
   quadLineFit1005->SetNDF(2);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,74.79282);
   quadLineFit1005->SetParError(0,0.04716793);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,21.68935);
   quadLineFit1005->SetParError(1,0.7835351);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t Graph2_fx1005[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t Graph2_fy1005[3] = {
   75.15796,
   75.0552,
   75.00336};
   Double_t Graph2_fex1005[3] = {
   0,
   0,
   0};
   Double_t Graph2_fey1005[3] = {
   0.01307321,
   0.01192798,
   0.01168544};
   gre = new TGraphErrors(3,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,0.0492674,0.07344323);
   Graph_Graph21005->SetMinimum(74.97374);
   Graph_Graph21005->SetMaximum(75.18897);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21005->SetLineColor(ci);
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(3);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->SetChisquare(5.281025);
   quadLineFit1006->SetNDF(1);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,74.61412);
   quadLineFit1006->SetParError(0,0.05310729);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,7.408325);
   quadLineFit1006->SetParError(1,0.8626627);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(3);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->SetChisquare(5.281025);
   quadLineFit1007->SetNDF(1);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,74.61412);
   quadLineFit1007->SetParError(0,0.05310729);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,7.408325);
   quadLineFit1007->SetParError(1,0.8626627);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t Graph3_fx1007[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph3_fy1007[4] = {
   73.95424,
   74.06051,
   74.04461,
   74.14382};
   Double_t Graph3_fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1007[4] = {
   0.0134169,
   0.01242639,
   0.01167433,
   0.01180172};
   gre = new TGraphErrors(4,Graph3_fx1007,Graph3_fy1007,Graph3_fex1007,Graph3_fey1007);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31007 = new TH1F("Graph_Graph31007","Graph",100,0.0492674,0.07344323);
   Graph_Graph31007->SetMinimum(73.91935);
   Graph_Graph31007->SetMaximum(74.17711);
   Graph_Graph31007->SetDirectory(0);
   Graph_Graph31007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31007->SetLineColor(ci);
   Graph_Graph31007->GetXaxis()->SetLabelFont(42);
   Graph_Graph31007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetXaxis()->SetTitleFont(42);
   Graph_Graph31007->GetYaxis()->SetLabelFont(42);
   Graph_Graph31007->GetYaxis()->SetTitleFont(42);
   Graph_Graph31007->GetZaxis()->SetLabelFont(42);
   Graph_Graph31007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(4);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->SetChisquare(22.51239);
   quadLineFit1008->SetNDF(2);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,74.5287);
   quadLineFit1008->SetParError(0,0.04976121);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,-7.948894);
   quadLineFit1008->SetParError(1,0.831122);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(22.51239);
   quadLineFit1009->SetNDF(2);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,74.5287);
   quadLineFit1009->SetParError(0,0.04976121);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,-7.948894);
   quadLineFit1009->SetParError(1,0.831122);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t Graph4_fx1009[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph4_fy1009[4] = {
   72.76476,
   72.95215,
   73.14082,
   73.25735};
   Double_t Graph4_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1009[4] = {
   0.01342478,
   0.01255356,
   0.01212539,
   0.01213645};
   gre = new TGraphErrors(4,Graph4_fx1009,Graph4_fy1009,Graph4_fex1009,Graph4_fey1009);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41009 = new TH1F("Graph_Graph41009","Graph",100,0.0492674,0.07344323);
   Graph_Graph41009->SetMinimum(72.69952);
   Graph_Graph41009->SetMaximum(73.3213);
   Graph_Graph41009->SetDirectory(0);
   Graph_Graph41009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41009->SetLineColor(ci);
   Graph_Graph41009->GetXaxis()->SetLabelFont(42);
   Graph_Graph41009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41009->GetXaxis()->SetTitleFont(42);
   Graph_Graph41009->GetYaxis()->SetLabelFont(42);
   Graph_Graph41009->GetYaxis()->SetTitleFont(42);
   Graph_Graph41009->GetZaxis()->SetLabelFont(42);
   Graph_Graph41009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1010->SetLineColor(ci);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(3.979277);
   quadLineFit1010->SetNDF(2);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,74.51032);
   quadLineFit1010->SetParError(0,0.0505679);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,-24.61838);
   quadLineFit1010->SetParError(1,0.8418898);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("p ");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1011->SetLineColor(ci);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(3.979277);
   quadLineFit1011->SetNDF(2);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,74.51032);
   quadLineFit1011->SetParError(0,0.0505679);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,-24.61838);
   quadLineFit1011->SetParError(1,0.8418898);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t Graph5_fx1011[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph5_fy1011[3] = {
   71.91741,
   72.203,
   72.33542};
   Double_t Graph5_fex1011[3] = {
   0,
   0,
   0};
   Double_t Graph5_fey1011[3] = {
   0.0121433,
   0.01229377,
   0.01190349};
   gre = new TGraphErrors(3,Graph5_fx1011,Graph5_fy1011,Graph5_fex1011,Graph5_fey1011);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph51011 = new TH1F("Graph_Graph51011","Graph",100,0.05016026,0.06362179);
   Graph_Graph51011->SetMinimum(71.86106);
   Graph_Graph51011->SetMaximum(72.39153);
   Graph_Graph51011->SetDirectory(0);
   Graph_Graph51011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph51011->SetLineColor(ci);
   Graph_Graph51011->GetXaxis()->SetLabelFont(42);
   Graph_Graph51011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph51011->GetXaxis()->SetTitleFont(42);
   Graph_Graph51011->GetYaxis()->SetLabelFont(42);
   Graph_Graph51011->GetYaxis()->SetTitleFont(42);
   Graph_Graph51011->GetZaxis()->SetLabelFont(42);
   Graph_Graph51011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph51011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(6);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(3.171674);
   quadLineFit1012->SetNDF(1);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,74.27377);
   quadLineFit1012->SetParError(0,0.08502055);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,-37.59553);
   quadLineFit1012->SetParError(1,1.502794);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(6);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(3.171674);
   quadLineFit1013->SetNDF(1);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,74.27377);
   quadLineFit1013->SetParError(0,0.08502055);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,-37.59553);
   quadLineFit1013->SetParError(1,1.502794);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
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
   entry=leg->AddEntry("Graph5","  #minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
