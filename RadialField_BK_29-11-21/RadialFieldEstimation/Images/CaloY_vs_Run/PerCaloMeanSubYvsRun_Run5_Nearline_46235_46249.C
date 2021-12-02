void PerCaloMeanSubYvsRun_Run5_Nearline_46235_46249()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 16 10:39:53 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(46231.2,-3.125,46255.2,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t meanSub_y_vs_run_1_fx1026[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_1_fy1026[8] = {
   0.04459106,
   -0.004165596,
   -0.04330304,
   -0.02374536,
   -0.06216815,
   0.05496574,
   0.002225865,
   0.03159949};
   Double_t meanSub_y_vs_run_1_fex1026[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_1_fey1026[8] = {
   0.04919568,
   0.04946779,
   0.04796027,
   0.05572287,
   0.06076008,
   0.05531022,
   0.05110453,
   0.06555398};
   TGraphErrors *gre = new TGraphErrors(8,meanSub_y_vs_run_1_fx1026,meanSub_y_vs_run_1_fy1026,meanSub_y_vs_run_1_fex1026,meanSub_y_vs_run_1_fey1026);
   gre->SetName("meanSub_y_vs_run_1");
   gre->SetTitle(";Run number;Mean subtracted #LTy_{Calo}#GT [mm]");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#352a86");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#352a86");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_11026 = new TH1F("Graph_meanSub_y_vs_run_11026","",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_11026->SetMinimum(-2.5);
   Graph_meanSub_y_vs_run_11026->SetMaximum(2.5);
   Graph_meanSub_y_vs_run_11026->SetDirectory(0);
   Graph_meanSub_y_vs_run_11026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_11026->SetLineColor(ci);
   Graph_meanSub_y_vs_run_11026->GetXaxis()->SetTitle("Run number");
   Graph_meanSub_y_vs_run_11026->GetXaxis()->CenterTitle(true);
   Graph_meanSub_y_vs_run_11026->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_11026->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_11026->GetXaxis()->SetTitleOffset(1.1);
   Graph_meanSub_y_vs_run_11026->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_11026->GetYaxis()->SetTitle("Mean subtracted #LTy_{Calo}#GT [mm]");
   Graph_meanSub_y_vs_run_11026->GetYaxis()->CenterTitle(true);
   Graph_meanSub_y_vs_run_11026->GetYaxis()->SetNdivisions(4000510);
   Graph_meanSub_y_vs_run_11026->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_11026->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_11026->GetYaxis()->SetTitleOffset(1.1);
   Graph_meanSub_y_vs_run_11026->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_11026->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_11026->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_11026->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_11026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_11026);
   
   gre->Draw("ap plc pmc");
   
   Double_t meanSub_y_vs_run_2_fx1027[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_2_fy1027[8] = {
   -0.03088362,
   -0.02793825,
   0.002740191,
   0.01289027,
   -0.007496537,
   0.1072832,
   0.01800233,
   -0.07459756};
   Double_t meanSub_y_vs_run_2_fex1027[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_2_fey1027[8] = {
   0.05022367,
   0.05063906,
   0.04893812,
   0.05681034,
   0.06201524,
   0.05672072,
   0.05211537,
   0.06680447};
   gre = new TGraphErrors(8,meanSub_y_vs_run_2_fx1027,meanSub_y_vs_run_2_fy1027,meanSub_y_vs_run_2_fex1027,meanSub_y_vs_run_2_fey1027);
   gre->SetName("meanSub_y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_21027 = new TH1F("Graph_meanSub_y_vs_run_21027","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_21027->SetMinimum(-0.1719426);
   Graph_meanSub_y_vs_run_21027->SetMaximum(0.1945445);
   Graph_meanSub_y_vs_run_21027->SetDirectory(0);
   Graph_meanSub_y_vs_run_21027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_21027->SetLineColor(ci);
   Graph_meanSub_y_vs_run_21027->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_21027->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_21027->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_21027->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_21027->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_21027->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_21027->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_21027->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_21027->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_21027->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_21027->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_21027->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_21027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_21027);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_3_fx1028[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_3_fy1028[8] = {
   -0.1361947,
   -0.01465504,
   -0.004778296,
   0.01776696,
   0.00953065,
   0.04437713,
   0.04422014,
   0.03973312};
   Double_t meanSub_y_vs_run_3_fex1028[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_3_fey1028[8] = {
   0.05071738,
   0.05112318,
   0.04937496,
   0.05714739,
   0.0627366,
   0.05714776,
   0.05275751,
   0.06732333};
   gre = new TGraphErrors(8,meanSub_y_vs_run_3_fx1028,meanSub_y_vs_run_3_fy1028,meanSub_y_vs_run_3_fex1028,meanSub_y_vs_run_3_fey1028);
   gre->SetName("meanSub_y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_31028 = new TH1F("Graph_meanSub_y_vs_run_31028","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_31028->SetMinimum(-0.2163089);
   Graph_meanSub_y_vs_run_31028->SetMaximum(0.1364533);
   Graph_meanSub_y_vs_run_31028->SetDirectory(0);
   Graph_meanSub_y_vs_run_31028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_31028->SetLineColor(ci);
   Graph_meanSub_y_vs_run_31028->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_31028->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_31028->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_31028->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_31028->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_31028->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_31028->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_31028->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_31028->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_31028->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_31028->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_31028->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_31028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_31028);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_4_fx1029[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_4_fy1029[8] = {
   -0.01513971,
   -0.02737593,
   -0.03538508,
   -0.009289771,
   -0.02281041,
   0.1035136,
   -0.01230376,
   0.01879105};
   Double_t meanSub_y_vs_run_4_fex1029[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_4_fey1029[8] = {
   0.04943594,
   0.05006699,
   0.04827637,
   0.05611655,
   0.0611662,
   0.05583344,
   0.05150457,
   0.06583132};
   gre = new TGraphErrors(8,meanSub_y_vs_run_4_fx1029,meanSub_y_vs_run_4_fy1029,meanSub_y_vs_run_4_fex1029,meanSub_y_vs_run_4_fey1029);
   gre->SetName("meanSub_y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_41029 = new TH1F("Graph_meanSub_y_vs_run_41029","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_41029->SetMinimum(-0.108309);
   Graph_meanSub_y_vs_run_41029->SetMaximum(0.1836794);
   Graph_meanSub_y_vs_run_41029->SetDirectory(0);
   Graph_meanSub_y_vs_run_41029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_41029->SetLineColor(ci);
   Graph_meanSub_y_vs_run_41029->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_41029->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_41029->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_41029->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_41029->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_41029->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_41029->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_41029->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_41029->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_41029->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_41029->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_41029->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_41029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_41029);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_5_fx1030[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_5_fy1030[8] = {
   -0.04364707,
   -0.04059661,
   0.05233833,
   -0.07592317,
   0.06584941,
   -0.01393018,
   0.0491992,
   0.006710104};
   Double_t meanSub_y_vs_run_5_fex1030[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_5_fey1030[8] = {
   0.0502872,
   0.05084604,
   0.04924468,
   0.05726883,
   0.06219481,
   0.05679386,
   0.05246443,
   0.06714143};
   gre = new TGraphErrors(8,meanSub_y_vs_run_5_fx1030,meanSub_y_vs_run_5_fy1030,meanSub_y_vs_run_5_fex1030,meanSub_y_vs_run_5_fey1030);
   gre->SetName("meanSub_y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_51030 = new TH1F("Graph_meanSub_y_vs_run_51030","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_51030->SetMinimum(-0.1593156);
   Graph_meanSub_y_vs_run_51030->SetMaximum(0.1541678);
   Graph_meanSub_y_vs_run_51030->SetDirectory(0);
   Graph_meanSub_y_vs_run_51030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_51030->SetLineColor(ci);
   Graph_meanSub_y_vs_run_51030->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_51030->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_51030->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_51030->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_51030->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_51030->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_51030->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_51030->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_51030->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_51030->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_51030->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_51030->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_51030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_51030);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_6_fx1031[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_6_fy1031[8] = {
   0.02391259,
   0.05423218,
   -0.05021637,
   -0.03323264,
   -0.01231488,
   -0.05299829,
   0.0334074,
   0.03721001};
   Double_t meanSub_y_vs_run_6_fex1031[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_6_fey1031[8] = {
   0.04985313,
   0.05017128,
   0.0485759,
   0.05640506,
   0.06149344,
   0.05603632,
   0.05166203,
   0.06634199};
   gre = new TGraphErrors(8,meanSub_y_vs_run_6_fx1031,meanSub_y_vs_run_6_fy1031,meanSub_y_vs_run_6_fex1031,meanSub_y_vs_run_6_fey1031);
   gre->SetName("meanSub_y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_61031 = new TH1F("Graph_meanSub_y_vs_run_61031","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_61031->SetMinimum(-0.1303784);
   Graph_meanSub_y_vs_run_61031->SetMaximum(0.1257473);
   Graph_meanSub_y_vs_run_61031->SetDirectory(0);
   Graph_meanSub_y_vs_run_61031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_61031->SetLineColor(ci);
   Graph_meanSub_y_vs_run_61031->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_61031->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_61031->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_61031->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_61031->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_61031->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_61031->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_61031->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_61031->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_61031->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_61031->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_61031->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_61031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_61031);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_7_fx1032[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_7_fy1032[8] = {
   -0.02014863,
   -0.002830718,
   -0.01556059,
   -0.08034106,
   -0.08230139,
   0.1114309,
   0.06416698,
   0.02558451};
   Double_t meanSub_y_vs_run_7_fex1032[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_7_fey1032[8] = {
   0.0499496,
   0.0502867,
   0.04885651,
   0.05653564,
   0.06173579,
   0.05638833,
   0.05194979,
   0.06661347};
   gre = new TGraphErrors(8,meanSub_y_vs_run_7_fx1032,meanSub_y_vs_run_7_fy1032,meanSub_y_vs_run_7_fex1032,meanSub_y_vs_run_7_fey1032);
   gre->SetName("meanSub_y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_71032 = new TH1F("Graph_meanSub_y_vs_run_71032","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_71032->SetMinimum(-0.1752228);
   Graph_meanSub_y_vs_run_71032->SetMaximum(0.1990049);
   Graph_meanSub_y_vs_run_71032->SetDirectory(0);
   Graph_meanSub_y_vs_run_71032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_71032->SetLineColor(ci);
   Graph_meanSub_y_vs_run_71032->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_71032->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_71032->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_71032->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_71032->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_71032->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_71032->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_71032->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_71032->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_71032->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_71032->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_71032->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_71032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_71032);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_8_fx1033[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_8_fy1033[8] = {
   -0.01028362,
   0.04744281,
   -0.06172213,
   -0.02215148,
   -0.05615503,
   0.02315551,
   0.07820489,
   0.001509048};
   Double_t meanSub_y_vs_run_8_fex1033[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_8_fey1033[8] = {
   0.04993019,
   0.05033799,
   0.04864305,
   0.0564015,
   0.06167113,
   0.0562745,
   0.05174822,
   0.06642488};
   gre = new TGraphErrors(8,meanSub_y_vs_run_8_fx1033,meanSub_y_vs_run_8_fy1033,meanSub_y_vs_run_8_fex1033,meanSub_y_vs_run_8_fey1033);
   gre->SetName("meanSub_y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_81033 = new TH1F("Graph_meanSub_y_vs_run_81033","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_81033->SetMinimum(-0.1426041);
   Graph_meanSub_y_vs_run_81033->SetMaximum(0.154731);
   Graph_meanSub_y_vs_run_81033->SetDirectory(0);
   Graph_meanSub_y_vs_run_81033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_81033->SetLineColor(ci);
   Graph_meanSub_y_vs_run_81033->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_81033->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_81033->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_81033->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_81033->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_81033->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_81033->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_81033->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_81033->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_81033->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_81033->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_81033->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_81033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_81033);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_9_fx1034[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_9_fy1034[8] = {
   0.03412741,
   -0.007916591,
   -0.04127322,
   -0.03355107,
   -0.02197492,
   0.0677174,
   -0.01941536,
   0.02228636};
   Double_t meanSub_y_vs_run_9_fex1034[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_9_fey1034[8] = {
   0.04988931,
   0.05028945,
   0.04875694,
   0.0564868,
   0.06160254,
   0.05618527,
   0.05190215,
   0.06663739};
   gre = new TGraphErrors(8,meanSub_y_vs_run_9_fx1034,meanSub_y_vs_run_9_fy1034,meanSub_y_vs_run_9_fex1034,meanSub_y_vs_run_9_fey1034);
   gre->SetName("meanSub_y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_91034 = new TH1F("Graph_meanSub_y_vs_run_91034","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_91034->SetMinimum(-0.1114319);
   Graph_meanSub_y_vs_run_91034->SetMaximum(0.1452967);
   Graph_meanSub_y_vs_run_91034->SetDirectory(0);
   Graph_meanSub_y_vs_run_91034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_91034->SetLineColor(ci);
   Graph_meanSub_y_vs_run_91034->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_91034->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_91034->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_91034->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_91034->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_91034->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_91034->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_91034->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_91034->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_91034->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_91034->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_91034->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_91034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_91034);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_10_fx1035[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_10_fy1035[8] = {
   -0.08160789,
   0.04837051,
   -0.04342185,
   0.1113865,
   -0.008843566,
   0.02315288,
   -0.05016754,
   0.001130964};
   Double_t meanSub_y_vs_run_10_fex1035[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_10_fey1035[8] = {
   0.04923223,
   0.04956216,
   0.04799275,
   0.05563591,
   0.06071347,
   0.05544728,
   0.05121687,
   0.06574583};
   gre = new TGraphErrors(8,meanSub_y_vs_run_10_fx1035,meanSub_y_vs_run_10_fy1035,meanSub_y_vs_run_10_fex1035,meanSub_y_vs_run_10_fey1035);
   gre->SetName("meanSub_y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_101035 = new TH1F("Graph_meanSub_y_vs_run_101035","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_101035->SetMinimum(-0.1606264);
   Graph_meanSub_y_vs_run_101035->SetMaximum(0.1968086);
   Graph_meanSub_y_vs_run_101035->SetDirectory(0);
   Graph_meanSub_y_vs_run_101035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_101035->SetLineColor(ci);
   Graph_meanSub_y_vs_run_101035->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_101035->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_101035->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_101035->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_101035->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_101035->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_101035->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_101035->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_101035->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_101035->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_101035->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_101035->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_101035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_101035);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_11_fx1036[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_11_fy1036[8] = {
   -0.02139475,
   0.0598327,
   -0.05495036,
   -0.0270733,
   0.01821547,
   0.05447265,
   -0.00497109,
   -0.0241313};
   Double_t meanSub_y_vs_run_11_fex1036[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_11_fey1036[8] = {
   0.04985177,
   0.05044955,
   0.04864461,
   0.05669945,
   0.06171487,
   0.05618874,
   0.0519246,
   0.06649833};
   gre = new TGraphErrors(8,meanSub_y_vs_run_11_fx1036,meanSub_y_vs_run_11_fy1036,meanSub_y_vs_run_11_fex1036,meanSub_y_vs_run_11_fey1036);
   gre->SetName("meanSub_y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_111036 = new TH1F("Graph_meanSub_y_vs_run_111036","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_111036->SetMinimum(-0.1250206);
   Graph_meanSub_y_vs_run_111036->SetMaximum(0.132087);
   Graph_meanSub_y_vs_run_111036->SetDirectory(0);
   Graph_meanSub_y_vs_run_111036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_111036->SetLineColor(ci);
   Graph_meanSub_y_vs_run_111036->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_111036->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_111036->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_111036->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_111036->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_111036->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_111036->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_111036->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_111036->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_111036->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_111036->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_111036->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_111036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_111036);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_12_fx1037[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_12_fy1037[8] = {
   -0.06669075,
   -0.04800926,
   -0.04701377,
   0.05924795,
   0.08835216,
   0.006798777,
   0.0007083713,
   0.006606515};
   Double_t meanSub_y_vs_run_12_fex1037[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_12_fey1037[8] = {
   0.04753127,
   0.04805775,
   0.04640763,
   0.05384836,
   0.05878311,
   0.05354287,
   0.04942085,
   0.06347991};
   gre = new TGraphErrors(8,meanSub_y_vs_run_12_fx1037,meanSub_y_vs_run_12_fy1037,meanSub_y_vs_run_12_fex1037,meanSub_y_vs_run_12_fey1037);
   gre->SetName("meanSub_y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_121037 = new TH1F("Graph_meanSub_y_vs_run_121037","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_121037->SetMinimum(-0.1403578);
   Graph_meanSub_y_vs_run_121037->SetMaximum(0.173271);
   Graph_meanSub_y_vs_run_121037->SetDirectory(0);
   Graph_meanSub_y_vs_run_121037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_121037->SetLineColor(ci);
   Graph_meanSub_y_vs_run_121037->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_121037->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_121037->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_121037->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_121037->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_121037->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_121037->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_121037->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_121037->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_121037->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_121037->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_121037->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_121037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_121037);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_13_fx1038[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_13_fy1038[8] = {
   -0.07644611,
   0.02457925,
   0.01195611,
   -0.05105943,
   -0.01570425,
   0.104476,
   -0.0356487,
   0.03784716};
   Double_t meanSub_y_vs_run_13_fex1038[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_13_fey1038[8] = {
   0.04490302,
   0.0453422,
   0.0439301,
   0.05081337,
   0.05542325,
   0.05073268,
   0.04664912,
   0.05976471};
   gre = new TGraphErrors(8,meanSub_y_vs_run_13_fx1038,meanSub_y_vs_run_13_fy1038,meanSub_y_vs_run_13_fex1038,meanSub_y_vs_run_13_fey1038);
   gre->SetName("meanSub_y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_131038 = new TH1F("Graph_meanSub_y_vs_run_131038","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_131038->SetMinimum(-0.1490049);
   Graph_meanSub_y_vs_run_131038->SetMaximum(0.1828644);
   Graph_meanSub_y_vs_run_131038->SetDirectory(0);
   Graph_meanSub_y_vs_run_131038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_131038->SetLineColor(ci);
   Graph_meanSub_y_vs_run_131038->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_131038->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_131038->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_131038->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_131038->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_131038->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_131038->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_131038->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_131038->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_131038->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_131038->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_131038->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_131038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_131038);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_14_fx1039[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_14_fy1039[8] = {
   -0.04337526,
   -0.002120912,
   -0.05805417,
   0.02059436,
   -0.04477808,
   -0.01084078,
   0.01281791,
   0.1257569};
   Double_t meanSub_y_vs_run_14_fex1039[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_14_fey1039[8] = {
   0.04815913,
   0.04863706,
   0.04703727,
   0.05472361,
   0.05949327,
   0.05439132,
   0.05012683,
   0.06416151};
   gre = new TGraphErrors(8,meanSub_y_vs_run_14_fx1039,meanSub_y_vs_run_14_fy1039,meanSub_y_vs_run_14_fex1039,meanSub_y_vs_run_14_fey1039);
   gre->SetName("meanSub_y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_141039 = new TH1F("Graph_meanSub_y_vs_run_141039","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_141039->SetMinimum(-0.1345924);
   Graph_meanSub_y_vs_run_141039->SetMaximum(0.2194194);
   Graph_meanSub_y_vs_run_141039->SetDirectory(0);
   Graph_meanSub_y_vs_run_141039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_141039->SetLineColor(ci);
   Graph_meanSub_y_vs_run_141039->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_141039->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_141039->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_141039->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_141039->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_141039->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_141039->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_141039->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_141039->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_141039->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_141039->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_141039->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_141039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_141039);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_15_fx1040[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_15_fy1040[8] = {
   0.01578661,
   0.02636932,
   -0.05207682,
   -0.02366689,
   -0.05116933,
   0.02602701,
   -0.04717004,
   0.1059002};
   Double_t meanSub_y_vs_run_15_fex1040[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_15_fey1040[8] = {
   0.04875458,
   0.04930427,
   0.04760359,
   0.05525731,
   0.06017855,
   0.05485217,
   0.05059406,
   0.06488924};
   gre = new TGraphErrors(8,meanSub_y_vs_run_15_fx1040,meanSub_y_vs_run_15_fy1040,meanSub_y_vs_run_15_fex1040,meanSub_y_vs_run_15_fey1040);
   gre->SetName("meanSub_y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_151040 = new TH1F("Graph_meanSub_y_vs_run_151040","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_151040->SetMinimum(-0.1395616);
   Graph_meanSub_y_vs_run_151040->SetMaximum(0.1990031);
   Graph_meanSub_y_vs_run_151040->SetDirectory(0);
   Graph_meanSub_y_vs_run_151040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_151040->SetLineColor(ci);
   Graph_meanSub_y_vs_run_151040->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_151040->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_151040->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_151040->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_151040->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_151040->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_151040->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_151040->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_151040->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_151040->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_151040->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_151040->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_151040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_151040);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_16_fx1041[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_16_fy1041[8] = {
   0.02374938,
   0.0209587,
   -0.02053662,
   -0.05434528,
   0.06980065,
   0.0492503,
   -0.08854032,
   -0.0003368066};
   Double_t meanSub_y_vs_run_16_fex1041[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_16_fey1041[8] = {
   0.0499338,
   0.05036548,
   0.04866246,
   0.05661728,
   0.06164113,
   0.05624483,
   0.05171279,
   0.06663709};
   gre = new TGraphErrors(8,meanSub_y_vs_run_16_fx1041,meanSub_y_vs_run_16_fy1041,meanSub_y_vs_run_16_fex1041,meanSub_y_vs_run_16_fey1041);
   gre->SetName("meanSub_y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_161041 = new TH1F("Graph_meanSub_y_vs_run_161041","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_161041->SetMinimum(-0.1674226);
   Graph_meanSub_y_vs_run_161041->SetMaximum(0.1586113);
   Graph_meanSub_y_vs_run_161041->SetDirectory(0);
   Graph_meanSub_y_vs_run_161041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_161041->SetLineColor(ci);
   Graph_meanSub_y_vs_run_161041->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_161041->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_161041->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_161041->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_161041->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_161041->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_161041->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_161041->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_161041->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_161041->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_161041->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_161041->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_161041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_161041);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_17_fx1042[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_17_fy1042[8] = {
   0.06923182,
   -0.05852671,
   -0.07165527,
   -0.04150194,
   -0.01466217,
   0.01884282,
   -0.0005793736,
   0.09885082};
   Double_t meanSub_y_vs_run_17_fex1042[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_17_fey1042[8] = {
   0.04956923,
   0.04996267,
   0.04829503,
   0.05584029,
   0.06116016,
   0.05582001,
   0.05146267,
   0.0661033};
   gre = new TGraphErrors(8,meanSub_y_vs_run_17_fx1042,meanSub_y_vs_run_17_fy1042,meanSub_y_vs_run_17_fex1042,meanSub_y_vs_run_17_fey1042);
   gre->SetName("meanSub_y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_171042 = new TH1F("Graph_meanSub_y_vs_run_171042","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_171042->SetMinimum(-0.1484407);
   Graph_meanSub_y_vs_run_171042->SetMaximum(0.1934446);
   Graph_meanSub_y_vs_run_171042->SetDirectory(0);
   Graph_meanSub_y_vs_run_171042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_171042->SetLineColor(ci);
   Graph_meanSub_y_vs_run_171042->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_171042->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_171042->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_171042->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_171042->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_171042->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_171042->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_171042->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_171042->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_171042->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_171042->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_171042->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_171042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_171042);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_18_fx1043[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_18_fy1043[8] = {
   -0.04329743,
   -0.05464685,
   -0.0114698,
   -0.01173609,
   0.01093444,
   0.01039752,
   0.01137055,
   0.08844767};
   Double_t meanSub_y_vs_run_18_fex1043[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_18_fey1043[8] = {
   0.04794041,
   0.04824077,
   0.04659575,
   0.05420019,
   0.05922287,
   0.05398771,
   0.04968126,
   0.06369906};
   gre = new TGraphErrors(8,meanSub_y_vs_run_18_fx1043,meanSub_y_vs_run_18_fy1043,meanSub_y_vs_run_18_fex1043,meanSub_y_vs_run_18_fey1043);
   gre->SetName("meanSub_y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_181043 = new TH1F("Graph_meanSub_y_vs_run_181043","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_181043->SetMinimum(-0.1283911);
   Graph_meanSub_y_vs_run_181043->SetMaximum(0.1776502);
   Graph_meanSub_y_vs_run_181043->SetDirectory(0);
   Graph_meanSub_y_vs_run_181043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_181043->SetLineColor(ci);
   Graph_meanSub_y_vs_run_181043->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_181043->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_181043->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_181043->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_181043->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_181043->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_181043->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_181043->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_181043->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_181043->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_181043->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_181043->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_181043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_181043);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_19_fx1044[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_19_fy1044[8] = {
   0.01006215,
   -0.06736405,
   0.001498807,
   -0.02641221,
   -0.05542526,
   0.0005674014,
   0.07825171,
   0.05882145};
   Double_t meanSub_y_vs_run_19_fex1044[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_19_fey1044[8] = {
   0.04724399,
   0.04772496,
   0.04611364,
   0.05341818,
   0.05820483,
   0.05322926,
   0.04904458,
   0.06292519};
   gre = new TGraphErrors(8,meanSub_y_vs_run_19_fx1044,meanSub_y_vs_run_19_fy1044,meanSub_y_vs_run_19_fex1044,meanSub_y_vs_run_19_fey1044);
   gre->SetName("meanSub_y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_191044 = new TH1F("Graph_meanSub_y_vs_run_191044","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_191044->SetMinimum(-0.1393275);
   Graph_meanSub_y_vs_run_191044->SetMaximum(0.1515348);
   Graph_meanSub_y_vs_run_191044->SetDirectory(0);
   Graph_meanSub_y_vs_run_191044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_191044->SetLineColor(ci);
   Graph_meanSub_y_vs_run_191044->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_191044->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_191044->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_191044->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_191044->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_191044->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_191044->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_191044->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_191044->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_191044->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_191044->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_191044->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_191044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_191044);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_20_fx1045[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_20_fy1045[8] = {
   -0.04699634,
   0.0001190944,
   -0.00019129,
   -0.000492626,
   0.03372067,
   -0.03809509,
   -0.00148554,
   0.05342112};
   Double_t meanSub_y_vs_run_20_fex1045[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_20_fey1045[8] = {
   0.04903944,
   0.0495721,
   0.04805645,
   0.05570104,
   0.06064582,
   0.05545654,
   0.05109069,
   0.06549122};
   gre = new TGraphErrors(8,meanSub_y_vs_run_20_fx1045,meanSub_y_vs_run_20_fy1045,meanSub_y_vs_run_20_fex1045,meanSub_y_vs_run_20_fey1045);
   gre->SetName("meanSub_y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_201045 = new TH1F("Graph_meanSub_y_vs_run_201045","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_201045->SetMinimum(-0.1175306);
   Graph_meanSub_y_vs_run_201045->SetMaximum(0.1404071);
   Graph_meanSub_y_vs_run_201045->SetDirectory(0);
   Graph_meanSub_y_vs_run_201045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_201045->SetLineColor(ci);
   Graph_meanSub_y_vs_run_201045->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_201045->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_201045->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_201045->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_201045->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_201045->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_201045->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_201045->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_201045->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_201045->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_201045->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_201045->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_201045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_201045);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_21_fx1046[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_21_fy1046[8] = {
   -0.1243229,
   0.006047519,
   -0.08237581,
   0.0166128,
   0.04326723,
   0.05473058,
   -0.02769689,
   0.1137375};
   Double_t meanSub_y_vs_run_21_fex1046[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_21_fey1046[8] = {
   0.05025449,
   0.05061749,
   0.04892324,
   0.05703217,
   0.06198006,
   0.05658085,
   0.05216207,
   0.0668525};
   gre = new TGraphErrors(8,meanSub_y_vs_run_21_fx1046,meanSub_y_vs_run_21_fy1046,meanSub_y_vs_run_21_fex1046,meanSub_y_vs_run_21_fey1046);
   gre->SetName("meanSub_y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_211046 = new TH1F("Graph_meanSub_y_vs_run_211046","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_211046->SetMinimum(-0.2100941);
   Graph_meanSub_y_vs_run_211046->SetMaximum(0.2161067);
   Graph_meanSub_y_vs_run_211046->SetDirectory(0);
   Graph_meanSub_y_vs_run_211046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_211046->SetLineColor(ci);
   Graph_meanSub_y_vs_run_211046->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_211046->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_211046->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_211046->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_211046->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_211046->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_211046->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_211046->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_211046->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_211046->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_211046->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_211046->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_211046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_211046);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_22_fx1047[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_22_fy1047[8] = {
   -0.02638147,
   -0.05616017,
   0.09384497,
   -0.003257159,
   0.006198671,
   0.04265833,
   0.005309647,
   -0.06221281};
   Double_t meanSub_y_vs_run_22_fex1047[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_22_fey1047[8] = {
   0.05025081,
   0.05047682,
   0.04885777,
   0.05670764,
   0.06184641,
   0.05629326,
   0.05187819,
   0.06666475};
   gre = new TGraphErrors(8,meanSub_y_vs_run_22_fx1047,meanSub_y_vs_run_22_fy1047,meanSub_y_vs_run_22_fex1047,meanSub_y_vs_run_22_fey1047);
   gre->SetName("meanSub_y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_221047 = new TH1F("Graph_meanSub_y_vs_run_221047","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_221047->SetMinimum(-0.1560356);
   Graph_meanSub_y_vs_run_221047->SetMaximum(0.1698608);
   Graph_meanSub_y_vs_run_221047->SetDirectory(0);
   Graph_meanSub_y_vs_run_221047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_221047->SetLineColor(ci);
   Graph_meanSub_y_vs_run_221047->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_221047->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_221047->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_221047->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_221047->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_221047->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_221047->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_221047->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_221047->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_221047->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_221047->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_221047->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_221047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_221047);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_23_fx1048[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_23_fy1048[8] = {
   -0.03852227,
   -0.01073575,
   -0.04255336,
   -0.02112297,
   0.06998692,
   0.02393542,
   -0.0249374,
   0.04394941};
   Double_t meanSub_y_vs_run_23_fex1048[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_23_fey1048[8] = {
   0.04968,
   0.0501065,
   0.04834487,
   0.05619014,
   0.06127081,
   0.05576326,
   0.051692,
   0.06624709};
   gre = new TGraphErrors(8,meanSub_y_vs_run_23_fx1048,meanSub_y_vs_run_23_fy1048,meanSub_y_vs_run_23_fex1048,meanSub_y_vs_run_23_fey1048);
   gre->SetName("meanSub_y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_231048 = new TH1F("Graph_meanSub_y_vs_run_231048","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_231048->SetMinimum(-0.1131138);
   Graph_meanSub_y_vs_run_231048->SetMaximum(0.1534733);
   Graph_meanSub_y_vs_run_231048->SetDirectory(0);
   Graph_meanSub_y_vs_run_231048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_231048->SetLineColor(ci);
   Graph_meanSub_y_vs_run_231048->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_231048->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_231048->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_231048->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_231048->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_231048->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_231048->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_231048->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_231048->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_231048->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_231048->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_231048->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_231048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_231048);
   
   gre->Draw("p plc pmc ");
   
   Double_t meanSub_y_vs_run_24_fx1049[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t meanSub_y_vs_run_24_fy1049[8] = {
   -0.070791,
   -0.03974975,
   -0.03380683,
   0.01708747,
   -0.003841357,
   0.03342682,
   0.05986051,
   0.03781414};
   Double_t meanSub_y_vs_run_24_fex1049[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_24_fey1049[8] = {
   0.04910118,
   0.04947426,
   0.04779228,
   0.05553078,
   0.06053726,
   0.05513694,
   0.050967,
   0.06526803};
   gre = new TGraphErrors(8,meanSub_y_vs_run_24_fx1049,meanSub_y_vs_run_24_fy1049,meanSub_y_vs_run_24_fex1049,meanSub_y_vs_run_24_fey1049);
   gre->SetName("meanSub_y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_241049 = new TH1F("Graph_meanSub_y_vs_run_241049","Graph",100,46233.6,46250.4);
   Graph_meanSub_y_vs_run_241049->SetMinimum(-0.1429642);
   Graph_meanSub_y_vs_run_241049->SetMaximum(0.1338995);
   Graph_meanSub_y_vs_run_241049->SetDirectory(0);
   Graph_meanSub_y_vs_run_241049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_meanSub_y_vs_run_241049->SetLineColor(ci);
   Graph_meanSub_y_vs_run_241049->GetXaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_241049->GetXaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_241049->GetXaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_241049->GetXaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_241049->GetYaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_241049->GetYaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_241049->GetYaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_241049->GetYaxis()->SetTitleOffset(0);
   Graph_meanSub_y_vs_run_241049->GetYaxis()->SetTitleFont(42);
   Graph_meanSub_y_vs_run_241049->GetZaxis()->SetLabelFont(42);
   Graph_meanSub_y_vs_run_241049->GetZaxis()->SetLabelSize(0.035);
   Graph_meanSub_y_vs_run_241049->GetZaxis()->SetTitleSize(0.035);
   Graph_meanSub_y_vs_run_241049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_meanSub_y_vs_run_241049);
   
   gre->Draw("p plc pmc ");
   
   TLegend *leg = new TLegend(0.81,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("meanSub_y_vs_run_1","Calo 1","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#352a86");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#352a86");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_2","Calo 2","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#273ba5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_3","Calo 3","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1a4dc4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_4","Calo 4","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0f5edc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_5","Calo 5","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#116ada");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_6","Calo 6","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1277d7");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_7","Calo 7","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1283d4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_8","Calo 8","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0d8fd0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_9","Calo 9","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#089bcc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_10","Calo 10","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0aa6c5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_11","Calo 11","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#18acb8");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_12","Calo 12","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#26b3aa");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_13","Calo 13","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3bb89c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_14","Calo 14","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#5abb8d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_15","Calo 15","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#79bd7d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_16","Calo 16","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#94be71");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_17","Calo 17","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#aebc67");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_18","Calo 18","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#c7bb5c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_19","Calo 19","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#dabd50");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_20","Calo 20","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#eac243");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_21","Calo 21","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f9c735");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_22","Calo 22","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#fcd529");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_23","Calo 23","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#fae61c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("meanSub_y_vs_run_24","Calo 24","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f9f710");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
