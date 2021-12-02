void PerCaloYvsRun_Run5_Nearline_46235_46249()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 16 10:39:53 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(46231.2,68.75,46255.2,81.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t y_vs_run_1_fx1002[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_1_fy1002[8] = {
   74.30876,
   74.26,
   74.22086,
   74.24042,
   74.202,
   74.31913,
   74.26639,
   74.29576};
   Double_t y_vs_run_1_fex1002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_1_fey1002[8] = {
   0.04919568,
   0.04946779,
   0.04796027,
   0.05572287,
   0.06076008,
   0.05531022,
   0.05110453,
   0.06555398};
   TGraphErrors *gre = new TGraphErrors(8,y_vs_run_1_fx1002,y_vs_run_1_fy1002,y_vs_run_1_fex1002,y_vs_run_1_fey1002);
   gre->SetName("y_vs_run_1");
   gre->SetTitle(";Run number;#LTy_{Calo}#GT [mm]");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#352a86");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#352a86");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_11002 = new TH1F("Graph_y_vs_run_11002","",100,46233.6,46250.4);
   Graph_y_vs_run_11002->SetMinimum(70);
   Graph_y_vs_run_11002->SetMaximum(80);
   Graph_y_vs_run_11002->SetDirectory(0);
   Graph_y_vs_run_11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_11002->SetLineColor(ci);
   Graph_y_vs_run_11002->GetXaxis()->SetTitle("Run number");
   Graph_y_vs_run_11002->GetXaxis()->CenterTitle(true);
   Graph_y_vs_run_11002->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_11002->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_11002->GetXaxis()->SetTitleOffset(1.1);
   Graph_y_vs_run_11002->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_11002->GetYaxis()->SetTitle("#LTy_{Calo}#GT [mm]");
   Graph_y_vs_run_11002->GetYaxis()->CenterTitle(true);
   Graph_y_vs_run_11002->GetYaxis()->SetNdivisions(4000510);
   Graph_y_vs_run_11002->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_11002->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_11002->GetYaxis()->SetTitleOffset(1.1);
   Graph_y_vs_run_11002->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_11002->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_11002->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_11002->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_11002);
   
   gre->Draw("ap plc pmc");
   
   Double_t y_vs_run_2_fx1003[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_2_fy1003[8] = {
   74.00911,
   74.01206,
   74.04274,
   74.05289,
   74.0325,
   74.14728,
   74.058,
   73.9654};
   Double_t y_vs_run_2_fex1003[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_2_fey1003[8] = {
   0.05022367,
   0.05063906,
   0.04893812,
   0.05681034,
   0.06201524,
   0.05672072,
   0.05211537,
   0.06680447};
   gre = new TGraphErrors(8,y_vs_run_2_fx1003,y_vs_run_2_fy1003,y_vs_run_2_fex1003,y_vs_run_2_fey1003);
   gre->SetName("y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_21003 = new TH1F("Graph_y_vs_run_21003","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_21003->SetMinimum(73.86806);
   Graph_y_vs_run_21003->SetMaximum(74.23454);
   Graph_y_vs_run_21003->SetDirectory(0);
   Graph_y_vs_run_21003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_21003->SetLineColor(ci);
   Graph_y_vs_run_21003->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_21003->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_21003->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_21003->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_21003->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_21003->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_21003->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_21003->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_21003->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_21003->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_21003->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_21003->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_21003);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_3_fx1004[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_3_fy1004[8] = {
   75.06271,
   75.18425,
   75.19413,
   75.21667,
   75.20844,
   75.24328,
   75.24313,
   75.23864};
   Double_t y_vs_run_3_fex1004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_3_fey1004[8] = {
   0.05071738,
   0.05112318,
   0.04937496,
   0.05714739,
   0.0627366,
   0.05714776,
   0.05275751,
   0.06732333};
   gre = new TGraphErrors(8,y_vs_run_3_fx1004,y_vs_run_3_fy1004,y_vs_run_3_fex1004,y_vs_run_3_fey1004);
   gre->SetName("y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_31004 = new TH1F("Graph_y_vs_run_31004","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_31004->SetMinimum(74.9826);
   Graph_y_vs_run_31004->SetMaximum(75.33536);
   Graph_y_vs_run_31004->SetDirectory(0);
   Graph_y_vs_run_31004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_31004->SetLineColor(ci);
   Graph_y_vs_run_31004->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_31004->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_31004->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_31004->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_31004->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_31004->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_31004->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_31004->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_31004->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_31004->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_31004->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_31004->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_31004);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_4_fx1005[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_4_fy1005[8] = {
   74.27394,
   74.2617,
   74.25369,
   74.27979,
   74.26627,
   74.39259,
   74.27677,
   74.30787};
   Double_t y_vs_run_4_fex1005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_4_fey1005[8] = {
   0.04943594,
   0.05006699,
   0.04827637,
   0.05611655,
   0.0611662,
   0.05583344,
   0.05150457,
   0.06583132};
   gre = new TGraphErrors(8,y_vs_run_4_fx1005,y_vs_run_4_fy1005,y_vs_run_4_fex1005,y_vs_run_4_fey1005);
   gre->SetName("y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_41005 = new TH1F("Graph_y_vs_run_41005","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_41005->SetMinimum(74.18077);
   Graph_y_vs_run_41005->SetMaximum(74.47276);
   Graph_y_vs_run_41005->SetDirectory(0);
   Graph_y_vs_run_41005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_41005->SetLineColor(ci);
   Graph_y_vs_run_41005->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_41005->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_41005->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_41005->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_41005->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_41005->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_41005->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_41005->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_41005->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_41005->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_41005->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_41005->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_41005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_41005);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_5_fx1006[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_5_fy1006[8] = {
   75.05326,
   75.05631,
   75.14924,
   75.02098,
   75.16275,
   75.08297,
   75.1461,
   75.10361};
   Double_t y_vs_run_5_fex1006[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_5_fey1006[8] = {
   0.0502872,
   0.05084604,
   0.04924468,
   0.05726883,
   0.06219481,
   0.05679386,
   0.05246443,
   0.06714143};
   gre = new TGraphErrors(8,y_vs_run_5_fx1006,y_vs_run_5_fy1006,y_vs_run_5_fex1006,y_vs_run_5_fey1006);
   gre->SetName("y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_51006 = new TH1F("Graph_y_vs_run_51006","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_51006->SetMinimum(74.93759);
   Graph_y_vs_run_51006->SetMaximum(75.25107);
   Graph_y_vs_run_51006->SetDirectory(0);
   Graph_y_vs_run_51006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_51006->SetLineColor(ci);
   Graph_y_vs_run_51006->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_51006->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_51006->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_51006->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_51006->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_51006->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_51006->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_51006->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_51006->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_51006->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_51006->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_51006->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_51006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_51006);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_6_fx1007[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_6_fy1007[8] = {
   74.79715,
   74.82747,
   74.72302,
   74.74001,
   74.76092,
   74.72024,
   74.80665,
   74.81045};
   Double_t y_vs_run_6_fex1007[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_6_fey1007[8] = {
   0.04985313,
   0.05017128,
   0.0485759,
   0.05640506,
   0.06149344,
   0.05603632,
   0.05166203,
   0.06634199};
   gre = new TGraphErrors(8,y_vs_run_6_fx1007,y_vs_run_6_fy1007,y_vs_run_6_fex1007,y_vs_run_6_fey1007);
   gre->SetName("y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_61007 = new TH1F("Graph_y_vs_run_61007","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_61007->SetMinimum(74.64286);
   Graph_y_vs_run_61007->SetMaximum(74.89899);
   Graph_y_vs_run_61007->SetDirectory(0);
   Graph_y_vs_run_61007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_61007->SetLineColor(ci);
   Graph_y_vs_run_61007->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_61007->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_61007->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_61007->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_61007->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_61007->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_61007->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_61007->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_61007->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_61007->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_61007->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_61007->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_61007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_61007);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_7_fx1008[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_7_fy1008[8] = {
   75.23046,
   75.24778,
   75.23505,
   75.17027,
   75.1683,
   75.36204,
   75.31477,
   75.27619};
   Double_t y_vs_run_7_fex1008[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_7_fey1008[8] = {
   0.0499496,
   0.0502867,
   0.04885651,
   0.05653564,
   0.06173579,
   0.05638833,
   0.05194979,
   0.06661347};
   gre = new TGraphErrors(8,y_vs_run_7_fx1008,y_vs_run_7_fy1008,y_vs_run_7_fex1008,y_vs_run_7_fey1008);
   gre->SetName("y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_71008 = new TH1F("Graph_y_vs_run_71008","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_71008->SetMinimum(75.07538);
   Graph_y_vs_run_71008->SetMaximum(75.44961);
   Graph_y_vs_run_71008->SetDirectory(0);
   Graph_y_vs_run_71008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_71008->SetLineColor(ci);
   Graph_y_vs_run_71008->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_71008->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_71008->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_71008->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_71008->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_71008->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_71008->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_71008->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_71008->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_71008->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_71008->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_71008->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_71008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_71008);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_8_fx1009[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_8_fy1009[8] = {
   74.5412,
   74.59892,
   74.48976,
   74.52933,
   74.49533,
   74.57464,
   74.62969,
   74.55299};
   Double_t y_vs_run_8_fex1009[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_8_fey1009[8] = {
   0.04993019,
   0.05033799,
   0.04864305,
   0.0564015,
   0.06167113,
   0.0562745,
   0.05174822,
   0.06642488};
   gre = new TGraphErrors(8,y_vs_run_8_fx1009,y_vs_run_8_fy1009,y_vs_run_8_fex1009,y_vs_run_8_fey1009);
   gre->SetName("y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_81009 = new TH1F("Graph_y_vs_run_81009","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_81009->SetMinimum(74.40888);
   Graph_y_vs_run_81009->SetMaximum(74.70621);
   Graph_y_vs_run_81009->SetDirectory(0);
   Graph_y_vs_run_81009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_81009->SetLineColor(ci);
   Graph_y_vs_run_81009->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_81009->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_81009->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_81009->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_81009->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_81009->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_81009->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_81009->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_81009->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_81009->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_81009->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_81009->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_81009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_81009);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_9_fx1010[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_9_fy1010[8] = {
   73.95002,
   73.90797,
   73.87462,
   73.88234,
   73.89392,
   73.98361,
   73.89648,
   73.93818};
   Double_t y_vs_run_9_fex1010[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_9_fey1010[8] = {
   0.04988931,
   0.05028945,
   0.04875694,
   0.0564868,
   0.06160254,
   0.05618527,
   0.05190215,
   0.06663739};
   gre = new TGraphErrors(8,y_vs_run_9_fx1010,y_vs_run_9_fy1010,y_vs_run_9_fex1010,y_vs_run_9_fey1010);
   gre->SetName("y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_91010 = new TH1F("Graph_y_vs_run_91010","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_91010->SetMinimum(73.80446);
   Graph_y_vs_run_91010->SetMaximum(74.06119);
   Graph_y_vs_run_91010->SetDirectory(0);
   Graph_y_vs_run_91010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_91010->SetLineColor(ci);
   Graph_y_vs_run_91010->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_91010->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_91010->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_91010->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_91010->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_91010->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_91010->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_91010->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_91010->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_91010->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_91010->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_91010->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_91010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_91010);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_10_fx1011[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_10_fy1011[8] = {
   74.25363,
   74.38361,
   74.29182,
   74.44663,
   74.3264,
   74.35839,
   74.28507,
   74.33637};
   Double_t y_vs_run_10_fex1011[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_10_fey1011[8] = {
   0.04923223,
   0.04956216,
   0.04799275,
   0.05563591,
   0.06071347,
   0.05544728,
   0.05121687,
   0.06574583};
   gre = new TGraphErrors(8,y_vs_run_10_fx1011,y_vs_run_10_fy1011,y_vs_run_10_fex1011,y_vs_run_10_fey1011);
   gre->SetName("y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_101011 = new TH1F("Graph_y_vs_run_101011","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_101011->SetMinimum(74.17461);
   Graph_y_vs_run_101011->SetMaximum(74.53205);
   Graph_y_vs_run_101011->SetDirectory(0);
   Graph_y_vs_run_101011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_101011->SetLineColor(ci);
   Graph_y_vs_run_101011->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_101011->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_101011->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_101011->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_101011->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_101011->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_101011->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_101011->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_101011->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_101011->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_101011->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_101011->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_101011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_101011);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_11_fx1012[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_11_fy1012[8] = {
   74.07975,
   74.16097,
   74.04619,
   74.07407,
   74.11936,
   74.15561,
   74.09617,
   74.07701};
   Double_t y_vs_run_11_fex1012[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_11_fey1012[8] = {
   0.04985177,
   0.05044955,
   0.04864461,
   0.05669945,
   0.06171487,
   0.05618874,
   0.0519246,
   0.06649833};
   gre = new TGraphErrors(8,y_vs_run_11_fx1012,y_vs_run_11_fy1012,y_vs_run_11_fex1012,y_vs_run_11_fey1012);
   gre->SetName("y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_111012 = new TH1F("Graph_y_vs_run_111012","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_111012->SetMinimum(73.97612);
   Graph_y_vs_run_111012->SetMaximum(74.23323);
   Graph_y_vs_run_111012->SetDirectory(0);
   Graph_y_vs_run_111012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_111012->SetLineColor(ci);
   Graph_y_vs_run_111012->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_111012->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_111012->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_111012->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_111012->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_111012->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_111012->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_111012->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_111012->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_111012->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_111012->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_111012->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_111012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_111012);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_12_fx1013[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_12_fy1013[8] = {
   73.86602,
   73.8847,
   73.8857,
   73.99196,
   74.02107,
   73.93951,
   73.93342,
   73.93932};
   Double_t y_vs_run_12_fex1013[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_12_fey1013[8] = {
   0.04753127,
   0.04805775,
   0.04640763,
   0.05384836,
   0.05878311,
   0.05354287,
   0.04942085,
   0.06347991};
   gre = new TGraphErrors(8,y_vs_run_12_fx1013,y_vs_run_12_fy1013,y_vs_run_12_fex1013,y_vs_run_12_fey1013);
   gre->SetName("y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_121013 = new TH1F("Graph_y_vs_run_121013","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_121013->SetMinimum(73.79236);
   Graph_y_vs_run_121013->SetMaximum(74.10599);
   Graph_y_vs_run_121013->SetDirectory(0);
   Graph_y_vs_run_121013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_121013->SetLineColor(ci);
   Graph_y_vs_run_121013->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_121013->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_121013->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_121013->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_121013->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_121013->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_121013->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_121013->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_121013->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_121013->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_121013->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_121013->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_121013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_121013);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_13_fx1014[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_13_fy1014[8] = {
   74.48766,
   74.58868,
   74.57606,
   74.51304,
   74.5484,
   74.66858,
   74.52845,
   74.60195};
   Double_t y_vs_run_13_fex1014[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_13_fey1014[8] = {
   0.04490302,
   0.0453422,
   0.0439301,
   0.05081337,
   0.05542325,
   0.05073268,
   0.04664912,
   0.05976471};
   gre = new TGraphErrors(8,y_vs_run_13_fx1014,y_vs_run_13_fy1014,y_vs_run_13_fex1014,y_vs_run_13_fey1014);
   gre->SetName("y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_131014 = new TH1F("Graph_y_vs_run_131014","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_131014->SetMinimum(74.4151);
   Graph_y_vs_run_131014->SetMaximum(74.74697);
   Graph_y_vs_run_131014->SetDirectory(0);
   Graph_y_vs_run_131014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_131014->SetLineColor(ci);
   Graph_y_vs_run_131014->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_131014->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_131014->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_131014->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_131014->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_131014->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_131014->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_131014->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_131014->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_131014->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_131014->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_131014->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_131014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_131014);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_14_fx1015[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_14_fy1015[8] = {
   74.17444,
   74.21569,
   74.15976,
   74.23841,
   74.17303,
   74.20697,
   74.23063,
   74.34357};
   Double_t y_vs_run_14_fex1015[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_14_fey1015[8] = {
   0.04815913,
   0.04863706,
   0.04703727,
   0.05472361,
   0.05949327,
   0.05439132,
   0.05012683,
   0.06416151};
   gre = new TGraphErrors(8,y_vs_run_14_fx1015,y_vs_run_14_fy1015,y_vs_run_14_fex1015,y_vs_run_14_fey1015);
   gre->SetName("y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_141015 = new TH1F("Graph_y_vs_run_141015","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_141015->SetMinimum(74.08322);
   Graph_y_vs_run_141015->SetMaximum(74.43723);
   Graph_y_vs_run_141015->SetDirectory(0);
   Graph_y_vs_run_141015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_141015->SetLineColor(ci);
   Graph_y_vs_run_141015->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_141015->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_141015->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_141015->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_141015->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_141015->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_141015->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_141015->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_141015->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_141015->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_141015->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_141015->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_141015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_141015);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_15_fx1016[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_15_fy1016[8] = {
   75.0375,
   75.04808,
   74.96964,
   74.99805,
   74.97054,
   75.04774,
   74.97454,
   75.12761};
   Double_t y_vs_run_15_fex1016[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_15_fey1016[8] = {
   0.04875458,
   0.04930427,
   0.04760359,
   0.05525731,
   0.06017855,
   0.05485217,
   0.05059406,
   0.06488924};
   gre = new TGraphErrors(8,y_vs_run_15_fx1016,y_vs_run_15_fy1016,y_vs_run_15_fex1016,y_vs_run_15_fey1016);
   gre->SetName("y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_151016 = new TH1F("Graph_y_vs_run_151016","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_151016->SetMinimum(74.88215);
   Graph_y_vs_run_151016->SetMaximum(75.22072);
   Graph_y_vs_run_151016->SetDirectory(0);
   Graph_y_vs_run_151016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_151016->SetLineColor(ci);
   Graph_y_vs_run_151016->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_151016->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_151016->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_151016->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_151016->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_151016->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_151016->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_151016->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_151016->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_151016->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_151016->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_151016->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_151016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_151016);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_16_fx1017[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_16_fy1017[8] = {
   74.19153,
   74.18874,
   74.14725,
   74.11344,
   74.23758,
   74.21703,
   74.07924,
   74.16745};
   Double_t y_vs_run_16_fex1017[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_16_fey1017[8] = {
   0.0499338,
   0.05036548,
   0.04866246,
   0.05661728,
   0.06164113,
   0.05624483,
   0.05171279,
   0.06663709};
   gre = new TGraphErrors(8,y_vs_run_16_fx1017,y_vs_run_16_fy1017,y_vs_run_16_fex1017,y_vs_run_16_fey1017);
   gre->SetName("y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_161017 = new TH1F("Graph_y_vs_run_161017","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_161017->SetMinimum(74.00036);
   Graph_y_vs_run_161017->SetMaximum(74.32639);
   Graph_y_vs_run_161017->SetDirectory(0);
   Graph_y_vs_run_161017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_161017->SetLineColor(ci);
   Graph_y_vs_run_161017->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_161017->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_161017->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_161017->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_161017->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_161017->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_161017->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_161017->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_161017->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_161017->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_161017->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_161017->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_161017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_161017);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_17_fx1018[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_17_fy1018[8] = {
   75.20309,
   75.07534,
   75.06221,
   75.09236,
   75.1192,
   75.1527,
   75.13328,
   75.23271};
   Double_t y_vs_run_17_fex1018[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_17_fey1018[8] = {
   0.04956923,
   0.04996267,
   0.04829503,
   0.05584029,
   0.06116016,
   0.05582001,
   0.05146267,
   0.0661033};
   gre = new TGraphErrors(8,y_vs_run_17_fx1018,y_vs_run_17_fy1018,y_vs_run_17_fex1018,y_vs_run_17_fey1018);
   gre->SetName("y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_171018 = new TH1F("Graph_y_vs_run_171018","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_171018->SetMinimum(74.98542);
   Graph_y_vs_run_171018->SetMaximum(75.32731);
   Graph_y_vs_run_171018->SetDirectory(0);
   Graph_y_vs_run_171018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_171018->SetLineColor(ci);
   Graph_y_vs_run_171018->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_171018->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_171018->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_171018->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_171018->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_171018->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_171018->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_171018->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_171018->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_171018->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_171018->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_171018->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_171018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_171018);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_18_fx1019[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_18_fy1019[8] = {
   75.14471,
   75.13336,
   75.17654,
   75.17627,
   75.19894,
   75.19841,
   75.19938,
   75.27646};
   Double_t y_vs_run_18_fex1019[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_18_fey1019[8] = {
   0.04794041,
   0.04824077,
   0.04659575,
   0.05420019,
   0.05922287,
   0.05398771,
   0.04968126,
   0.06369906};
   gre = new TGraphErrors(8,y_vs_run_18_fx1019,y_vs_run_18_fy1019,y_vs_run_18_fex1019,y_vs_run_18_fey1019);
   gre->SetName("y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_181019 = new TH1F("Graph_y_vs_run_181019","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_181019->SetMinimum(75.05962);
   Graph_y_vs_run_181019->SetMaximum(75.36566);
   Graph_y_vs_run_181019->SetDirectory(0);
   Graph_y_vs_run_181019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_181019->SetLineColor(ci);
   Graph_y_vs_run_181019->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_181019->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_181019->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_181019->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_181019->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_181019->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_181019->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_181019->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_181019->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_181019->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_181019->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_181019->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_181019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_181019);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_19_fx1020[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_19_fy1020[8] = {
   74.01442,
   73.93699,
   74.00585,
   73.97794,
   73.94893,
   74.00492,
   74.08261,
   74.06318};
   Double_t y_vs_run_19_fex1020[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_19_fey1020[8] = {
   0.04724399,
   0.04772496,
   0.04611364,
   0.05341818,
   0.05820483,
   0.05322926,
   0.04904458,
   0.06292519};
   gre = new TGraphErrors(8,y_vs_run_19_fx1020,y_vs_run_19_fy1020,y_vs_run_19_fex1020,y_vs_run_19_fey1020);
   gre->SetName("y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_191020 = new TH1F("Graph_y_vs_run_191020","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_191020->SetMinimum(73.86503);
   Graph_y_vs_run_191020->SetMaximum(74.15589);
   Graph_y_vs_run_191020->SetDirectory(0);
   Graph_y_vs_run_191020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_191020->SetLineColor(ci);
   Graph_y_vs_run_191020->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_191020->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_191020->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_191020->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_191020->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_191020->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_191020->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_191020->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_191020->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_191020->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_191020->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_191020->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_191020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_191020);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_20_fx1021[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_20_fy1021[8] = {
   74.57684,
   74.62396,
   74.62365,
   74.62335,
   74.65756,
   74.58574,
   74.62235,
   74.67726};
   Double_t y_vs_run_20_fex1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_20_fey1021[8] = {
   0.04903944,
   0.0495721,
   0.04805645,
   0.05570104,
   0.06064582,
   0.05545654,
   0.05109069,
   0.06549122};
   gre = new TGraphErrors(8,y_vs_run_20_fx1021,y_vs_run_20_fy1021,y_vs_run_20_fex1021,y_vs_run_20_fey1021);
   gre->SetName("y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_201021 = new TH1F("Graph_y_vs_run_201021","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_201021->SetMinimum(74.50631);
   Graph_y_vs_run_201021->SetMaximum(74.76425);
   Graph_y_vs_run_201021->SetDirectory(0);
   Graph_y_vs_run_201021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_201021->SetLineColor(ci);
   Graph_y_vs_run_201021->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_201021->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_201021->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_201021->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_201021->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_201021->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_201021->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_201021->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_201021->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_201021->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_201021->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_201021->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_201021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_201021);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_21_fx1022[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_21_fy1022[8] = {
   74.43395,
   74.56432,
   74.4759,
   74.57489,
   74.60154,
   74.613,
   74.53058,
   74.67201};
   Double_t y_vs_run_21_fex1022[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_21_fey1022[8] = {
   0.05025449,
   0.05061749,
   0.04892324,
   0.05703217,
   0.06198006,
   0.05658085,
   0.05216207,
   0.0668525};
   gre = new TGraphErrors(8,y_vs_run_21_fx1022,y_vs_run_21_fy1022,y_vs_run_21_fex1022,y_vs_run_21_fey1022);
   gre->SetName("y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_211022 = new TH1F("Graph_y_vs_run_211022","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_211022->SetMinimum(74.34818);
   Graph_y_vs_run_211022->SetMaximum(74.77438);
   Graph_y_vs_run_211022->SetDirectory(0);
   Graph_y_vs_run_211022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_211022->SetLineColor(ci);
   Graph_y_vs_run_211022->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_211022->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_211022->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_211022->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_211022->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_211022->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_211022->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_211022->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_211022->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_211022->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_211022->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_211022->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_211022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_211022);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_22_fx1023[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_22_fy1023[8] = {
   74.43128,
   74.4015,
   74.5515,
   74.4544,
   74.46386,
   74.50032,
   74.46297,
   74.39545};
   Double_t y_vs_run_22_fex1023[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_22_fey1023[8] = {
   0.05025081,
   0.05047682,
   0.04885777,
   0.05670764,
   0.06184641,
   0.05629326,
   0.05187819,
   0.06666475};
   gre = new TGraphErrors(8,y_vs_run_22_fx1023,y_vs_run_22_fy1023,y_vs_run_22_fex1023,y_vs_run_22_fey1023);
   gre->SetName("y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_221023 = new TH1F("Graph_y_vs_run_221023","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_221023->SetMinimum(74.30162);
   Graph_y_vs_run_221023->SetMaximum(74.62752);
   Graph_y_vs_run_221023->SetDirectory(0);
   Graph_y_vs_run_221023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_221023->SetLineColor(ci);
   Graph_y_vs_run_221023->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_221023->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_221023->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_221023->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_221023->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_221023->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_221023->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_221023->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_221023->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_221023->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_221023->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_221023->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_221023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_221023);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_23_fx1024[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_23_fy1024[8] = {
   74.2058,
   74.23358,
   74.20177,
   74.2232,
   74.31431,
   74.26826,
   74.21938,
   74.28827};
   Double_t y_vs_run_23_fex1024[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_23_fey1024[8] = {
   0.04968,
   0.0501065,
   0.04834487,
   0.05619014,
   0.06127081,
   0.05576326,
   0.051692,
   0.06624709};
   gre = new TGraphErrors(8,y_vs_run_23_fx1024,y_vs_run_23_fy1024,y_vs_run_23_fex1024,y_vs_run_23_fey1024);
   gre->SetName("y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_231024 = new TH1F("Graph_y_vs_run_231024","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_231024->SetMinimum(74.13121);
   Graph_y_vs_run_231024->SetMaximum(74.39779);
   Graph_y_vs_run_231024->SetDirectory(0);
   Graph_y_vs_run_231024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_231024->SetLineColor(ci);
   Graph_y_vs_run_231024->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_231024->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_231024->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_231024->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_231024->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_231024->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_231024->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_231024->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_231024->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_231024->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_231024->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_231024->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_231024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_231024);
   
   gre->Draw("p plc pmc ");
   
   Double_t y_vs_run_24_fx1025[8] = {
   46235,
   46236,
   46240,
   46241,
   46242,
   46243,
   46246,
   46249};
   Double_t y_vs_run_24_fy1025[8] = {
   74.54735,
   74.57839,
   74.58433,
   74.63523,
   74.6143,
   74.65157,
   74.678,
   74.65595};
   Double_t y_vs_run_24_fex1025[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_24_fey1025[8] = {
   0.04910118,
   0.04947426,
   0.04779228,
   0.05553078,
   0.06053726,
   0.05513694,
   0.050967,
   0.06526803};
   gre = new TGraphErrors(8,y_vs_run_24_fx1025,y_vs_run_24_fy1025,y_vs_run_24_fex1025,y_vs_run_24_fey1025);
   gre->SetName("y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_241025 = new TH1F("Graph_y_vs_run_241025","Graph",100,46233.6,46250.4);
   Graph_y_vs_run_241025->SetMinimum(74.47517);
   Graph_y_vs_run_241025->SetMaximum(74.75204);
   Graph_y_vs_run_241025->SetDirectory(0);
   Graph_y_vs_run_241025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_y_vs_run_241025->SetLineColor(ci);
   Graph_y_vs_run_241025->GetXaxis()->SetLabelFont(42);
   Graph_y_vs_run_241025->GetXaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_241025->GetXaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_241025->GetXaxis()->SetTitleFont(42);
   Graph_y_vs_run_241025->GetYaxis()->SetLabelFont(42);
   Graph_y_vs_run_241025->GetYaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_241025->GetYaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_241025->GetYaxis()->SetTitleOffset(0);
   Graph_y_vs_run_241025->GetYaxis()->SetTitleFont(42);
   Graph_y_vs_run_241025->GetZaxis()->SetLabelFont(42);
   Graph_y_vs_run_241025->GetZaxis()->SetLabelSize(0.035);
   Graph_y_vs_run_241025->GetZaxis()->SetTitleSize(0.035);
   Graph_y_vs_run_241025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_y_vs_run_241025);
   
   gre->Draw("p plc pmc ");
   
   TLegend *leg = new TLegend(0.81,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("y_vs_run_1","Calo 1","lpf");
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
   entry=leg->AddEntry("y_vs_run_2","Calo 2","lpf");
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
   entry=leg->AddEntry("y_vs_run_3","Calo 3","lpf");
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
   entry=leg->AddEntry("y_vs_run_4","Calo 4","lpf");
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
   entry=leg->AddEntry("y_vs_run_5","Calo 5","lpf");
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
   entry=leg->AddEntry("y_vs_run_6","Calo 6","lpf");
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
   entry=leg->AddEntry("y_vs_run_7","Calo 7","lpf");
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
   entry=leg->AddEntry("y_vs_run_8","Calo 8","lpf");
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
   entry=leg->AddEntry("y_vs_run_9","Calo 9","lpf");
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
   entry=leg->AddEntry("y_vs_run_10","Calo 10","lpf");
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
   entry=leg->AddEntry("y_vs_run_11","Calo 11","lpf");
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
   entry=leg->AddEntry("y_vs_run_12","Calo 12","lpf");
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
   entry=leg->AddEntry("y_vs_run_13","Calo 13","lpf");
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
   entry=leg->AddEntry("y_vs_run_14","Calo 14","lpf");
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
   entry=leg->AddEntry("y_vs_run_15","Calo 15","lpf");
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
   entry=leg->AddEntry("y_vs_run_16","Calo 16","lpf");
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
   entry=leg->AddEntry("y_vs_run_17","Calo 17","lpf");
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
   entry=leg->AddEntry("y_vs_run_18","Calo 18","lpf");
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
   entry=leg->AddEntry("y_vs_run_19","Calo 19","lpf");
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
   entry=leg->AddEntry("y_vs_run_20","Calo 20","lpf");
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
   entry=leg->AddEntry("y_vs_run_21","Calo 21","lpf");
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
   entry=leg->AddEntry("y_vs_run_22","Calo 22","lpf");
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
   entry=leg->AddEntry("y_vs_run_23","Calo 23","lpf");
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
   entry=leg->AddEntry("y_vs_run_24","Calo 24","lpf");
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
