void PerCaloYvsRun_gm2pro_daq_offline_dqc_run2G_26999_27042()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 06:13:20 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(26987.33,68.75,27061.04,81.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t y_vs_run_1_fx1002[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_1_fy1002[10] = {
   75.0337,
   74.90964,
   74.85499,
   74.88349,
   74.86797,
   74.88244,
   74.85082,
   74.82415,
   74.82865,
   74.80555};
   Double_t y_vs_run_1_fex1002[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_1_fey1002[10] = {
   0.1667115,
   0.02586959,
   0.02710505,
   0.02251094,
   0.04494859,
   0.03352574,
   0.02467744,
   0.03999895,
   0.02230802,
   0.02657617};
   TGraphErrors *gre = new TGraphErrors(10,y_vs_run_1_fx1002,y_vs_run_1_fy1002,y_vs_run_1_fex1002,y_vs_run_1_fey1002);
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
   
   TH1F *Graph_y_vs_run_11002 = new TH1F("Graph_y_vs_run_11002","",100,26994.7,27046.3);
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
   
   Double_t y_vs_run_2_fx1003[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_2_fy1003[10] = {
   74.89953,
   74.62071,
   74.58164,
   74.57794,
   74.62143,
   74.58976,
   74.63319,
   74.56387,
   74.50425,
   74.49374};
   Double_t y_vs_run_2_fex1003[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_2_fey1003[10] = {
   0.1591926,
   0.02481077,
   0.02596069,
   0.02157595,
   0.04310471,
   0.03211227,
   0.02360542,
   0.03837158,
   0.02136748,
   0.02547576};
   gre = new TGraphErrors(10,y_vs_run_2_fx1003,y_vs_run_2_fy1003,y_vs_run_2_fex1003,y_vs_run_2_fey1003);
   gre->SetName("y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_21003 = new TH1F("Graph_y_vs_run_21003","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_21003->SetMinimum(74.40922);
   Graph_y_vs_run_21003->SetMaximum(75.11777);
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
   
   Double_t y_vs_run_3_fx1004[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_3_fy1004[10] = {
   76.07699,
   76.02029,
   75.97308,
   75.90592,
   75.88608,
   75.88288,
   75.98353,
   75.89953,
   75.93662,
   75.87714};
   Double_t y_vs_run_3_fex1004[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_3_fey1004[10] = {
   0.1639259,
   0.02530631,
   0.02652511,
   0.0220605,
   0.04389897,
   0.03281871,
   0.02411501,
   0.03914665,
   0.02183839,
   0.026052};
   gre = new TGraphErrors(10,y_vs_run_3_fx1004,y_vs_run_3_fy1004,y_vs_run_3_fex1004,y_vs_run_3_fey1004);
   gre->SetName("y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_31004 = new TH1F("Graph_y_vs_run_31004","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_31004->SetMinimum(75.8023);
   Graph_y_vs_run_31004->SetMaximum(76.28079);
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
   
   Double_t y_vs_run_4_fx1005[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_4_fy1005[10] = {
   74.93047,
   75.02101,
   75.01509,
   74.97309,
   74.97732,
   75.00637,
   74.9324,
   74.95692,
   74.94294,
   74.86147};
   Double_t y_vs_run_4_fex1005[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_4_fey1005[10] = {
   0.1634977,
   0.02533463,
   0.02655072,
   0.02204058,
   0.04403984,
   0.03281767,
   0.02412883,
   0.03919669,
   0.0218432,
   0.02604941};
   gre = new TGraphErrors(10,y_vs_run_4_fx1005,y_vs_run_4_fy1005,y_vs_run_4_fex1005,y_vs_run_4_fey1005);
   gre->SetName("y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_41005 = new TH1F("Graph_y_vs_run_41005","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_41005->SetMinimum(74.73427);
   Graph_y_vs_run_41005->SetMaximum(75.12666);
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
   
   Double_t y_vs_run_5_fx1006[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_5_fy1006[10] = {
   76.24445,
   76.11022,
   76.09066,
   76.06261,
   76.06674,
   76.01824,
   76.06723,
   76.06874,
   76.00963,
   76.03536};
   Double_t y_vs_run_5_fex1006[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_5_fey1006[10] = {
   0.157809,
   0.0245858,
   0.02575896,
   0.02140229,
   0.04268834,
   0.03183944,
   0.02343555,
   0.03795347,
   0.02122016,
   0.02529097};
   gre = new TGraphErrors(10,y_vs_run_5_fx1006,y_vs_run_5_fy1006,y_vs_run_5_fex1006,y_vs_run_5_fey1006);
   gre->SetName("y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_51006 = new TH1F("Graph_y_vs_run_51006","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_51006->SetMinimum(75.94482);
   Graph_y_vs_run_51006->SetMaximum(76.44384);
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
   
   Double_t y_vs_run_6_fx1007[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_6_fy1007[10] = {
   75.46042,
   75.51342,
   75.49618,
   75.44687,
   75.52194,
   75.49497,
   75.55625,
   75.38694,
   75.43515,
   75.46768};
   Double_t y_vs_run_6_fex1007[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_6_fey1007[10] = {
   0.1617007,
   0.0250765,
   0.02622371,
   0.02180357,
   0.04348037,
   0.03241607,
   0.02386578,
   0.0387924,
   0.02161049,
   0.02576905};
   gre = new TGraphErrors(10,y_vs_run_6_fx1007,y_vs_run_6_fy1007,y_vs_run_6_fex1007,y_vs_run_6_fey1007);
   gre->SetName("y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_61007 = new TH1F("Graph_y_vs_run_61007","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_61007->SetMinimum(75.26638);
   Graph_y_vs_run_61007->SetMaximum(75.65446);
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
   
   Double_t y_vs_run_7_fx1008[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_7_fy1008[10] = {
   76.42461,
   76.26913,
   76.27968,
   76.21579,
   76.24803,
   76.21642,
   76.28701,
   76.22522,
   76.21076,
   76.17838};
   Double_t y_vs_run_7_fex1008[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_7_fey1008[10] = {
   0.1598539,
   0.02492558,
   0.02612939,
   0.02170718,
   0.04329383,
   0.03228569,
   0.02377794,
   0.03862911,
   0.02151627,
   0.02564513};
   gre = new TGraphErrors(10,y_vs_run_7_fx1008,y_vs_run_7_fy1008,y_vs_run_7_fex1008,y_vs_run_7_fey1008);
   gre->SetName("y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_71008 = new TH1F("Graph_y_vs_run_71008","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_71008->SetMinimum(76.10956);
   Graph_y_vs_run_71008->SetMaximum(76.62764);
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
   
   Double_t y_vs_run_8_fx1009[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_8_fy1009[10] = {
   75.69445,
   75.36662,
   75.32266,
   75.28564,
   75.31558,
   75.36032,
   75.32771,
   75.36377,
   75.25314,
   75.29879};
   Double_t y_vs_run_8_fex1009[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_8_fey1009[10] = {
   0.1600461,
   0.02486877,
   0.02608722,
   0.02166975,
   0.04322894,
   0.03225535,
   0.02372702,
   0.03854208,
   0.02149443,
   0.02565104};
   gre = new TGraphErrors(10,y_vs_run_8_fx1009,y_vs_run_8_fy1009,y_vs_run_8_fex1009,y_vs_run_8_fey1009);
   gre->SetName("y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_81009 = new TH1F("Graph_y_vs_run_81009","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_81009->SetMinimum(75.16936);
   Graph_y_vs_run_81009->SetMaximum(75.91678);
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
   
   Double_t y_vs_run_9_fx1010[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_9_fy1010[10] = {
   74.61026,
   74.67955,
   74.68015,
   74.63735,
   74.68496,
   74.5916,
   74.64726,
   74.57723,
   74.55776,
   74.57711};
   Double_t y_vs_run_9_fex1010[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_9_fey1010[10] = {
   0.1701444,
   0.02643966,
   0.02769665,
   0.02301767,
   0.04602031,
   0.03424288,
   0.02516748,
   0.0409146,
   0.02282783,
   0.02720934};
   gre = new TGraphErrors(10,y_vs_run_9_fx1010,y_vs_run_9_fy1010,y_vs_run_9_fex1010,y_vs_run_9_fey1010);
   gre->SetName("y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_91010 = new TH1F("Graph_y_vs_run_91010","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_91010->SetMinimum(74.40608);
   Graph_y_vs_run_91010->SetMaximum(74.81443);
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
   
   Double_t y_vs_run_10_fx1011[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_10_fy1011[10] = {
   75.15171,
   75.07852,
   75.06567,
   75.04451,
   75.07924,
   75.02279,
   75.01148,
   75.05303,
   74.99493,
   75.02617};
   Double_t y_vs_run_10_fex1011[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_10_fey1011[10] = {
   0.1588199,
   0.02474626,
   0.02590882,
   0.02150628,
   0.04279998,
   0.03201342,
   0.02358429,
   0.03824941,
   0.02132381,
   0.02540654};
   gre = new TGraphErrors(10,y_vs_run_10_fx1011,y_vs_run_10_fy1011,y_vs_run_10_fex1011,y_vs_run_10_fey1011);
   gre->SetName("y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_101011 = new TH1F("Graph_y_vs_run_101011","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_101011->SetMinimum(74.93992);
   Graph_y_vs_run_101011->SetMaximum(75.34422);
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
   
   Double_t y_vs_run_11_fx1012[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_11_fy1012[10] = {
   75.01192,
   74.82769,
   74.77408,
   74.77394,
   74.76826,
   74.76034,
   74.74139,
   74.81968,
   74.79601,
   74.76844};
   Double_t y_vs_run_11_fex1012[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_11_fey1012[10] = {
   0.1570716,
   0.02438562,
   0.02555396,
   0.02124683,
   0.04233699,
   0.031665,
   0.02327492,
   0.03771956,
   0.02105392,
   0.02508608};
   gre = new TGraphErrors(10,y_vs_run_11_fx1012,y_vs_run_11_fy1012,y_vs_run_11_fex1012,y_vs_run_11_fey1012);
   gre->SetName("y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_111012 = new TH1F("Graph_y_vs_run_111012","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_111012->SetMinimum(74.67302);
   Graph_y_vs_run_111012->SetMaximum(75.21408);
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
   
   Double_t y_vs_run_12_fx1013[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_12_fy1013[10] = {
   74.41989,
   74.5531,
   74.57442,
   74.51866,
   74.61345,
   74.55063,
   74.57395,
   74.49122,
   74.49598,
   74.48713};
   Double_t y_vs_run_12_fex1013[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_12_fey1013[10] = {
   0.1548007,
   0.02404711,
   0.02520101,
   0.02094725,
   0.04180236,
   0.03115536,
   0.02293468,
   0.03722686,
   0.02075686,
   0.02472965};
   gre = new TGraphErrors(10,y_vs_run_12_fx1013,y_vs_run_12_fy1013,y_vs_run_12_fex1013,y_vs_run_12_fey1013);
   gre->SetName("y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_121013 = new TH1F("Graph_y_vs_run_121013","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_121013->SetMinimum(74.22607);
   Graph_y_vs_run_121013->SetMaximum(74.69426);
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
   
   Double_t y_vs_run_13_fx1014[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_13_fy1014[10] = {
   75.45663,
   75.35193,
   75.29664,
   75.32058,
   75.33668,
   75.32339,
   75.29568,
   75.32573,
   75.25731,
   75.23302};
   Double_t y_vs_run_13_fex1014[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_13_fey1014[10] = {
   0.1446689,
   0.02254066,
   0.02361597,
   0.01963783,
   0.03925879,
   0.02925209,
   0.02150952,
   0.03490468,
   0.01944479,
   0.02318226};
   gre = new TGraphErrors(10,y_vs_run_13_fx1014,y_vs_run_13_fy1014,y_vs_run_13_fex1014,y_vs_run_13_fey1014);
   gre->SetName("y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_131014 = new TH1F("Graph_y_vs_run_131014","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_131014->SetMinimum(75.17069);
   Graph_y_vs_run_131014->SetMaximum(75.64045);
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
   
   Double_t y_vs_run_14_fx1015[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_14_fy1015[10] = {
   74.90132,
   74.94331,
   74.90502,
   74.87769,
   74.92994,
   74.86813,
   74.884,
   74.84603,
   74.88587,
   74.85699};
   Double_t y_vs_run_14_fex1015[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_14_fey1015[10] = {
   0.1557409,
   0.02423897,
   0.02536721,
   0.02110291,
   0.04207886,
   0.031414,
   0.02309065,
   0.03747135,
   0.02090871,
   0.02490142};
   gre = new TGraphErrors(10,y_vs_run_14_fx1015,y_vs_run_14_fy1015,y_vs_run_14_fex1015,y_vs_run_14_fey1015);
   gre->SetName("y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_141015 = new TH1F("Graph_y_vs_run_141015","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_141015->SetMinimum(74.71443);
   Graph_y_vs_run_141015->SetMaximum(75.08821);
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
   
   Double_t y_vs_run_15_fx1016[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_15_fy1016[10] = {
   75.83089,
   75.81938,
   75.75077,
   75.73234,
   75.72756,
   75.74834,
   75.7026,
   75.80316,
   75.67583,
   75.61454};
   Double_t y_vs_run_15_fex1016[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_15_fey1016[10] = {
   0.1556221,
   0.02419897,
   0.02533668,
   0.02108047,
   0.04209896,
   0.03135283,
   0.02307327,
   0.03743148,
   0.0208685,
   0.02488578};
   gre = new TGraphErrors(10,y_vs_run_15_fx1016,y_vs_run_15_fy1016,y_vs_run_15_fex1016,y_vs_run_15_fey1016);
   gre->SetName("y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_151016 = new TH1F("Graph_y_vs_run_151016","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_151016->SetMinimum(75.54997);
   Graph_y_vs_run_151016->SetMaximum(76.0262);
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
   
   Double_t y_vs_run_16_fx1017[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_16_fy1017[10] = {
   75.12571,
   74.97932,
   74.96233,
   74.91319,
   74.8697,
   74.92951,
   74.94661,
   74.90933,
   74.86349,
   74.83292};
   Double_t y_vs_run_16_fex1017[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_16_fey1017[10] = {
   0.1597856,
   0.02471756,
   0.0259156,
   0.02153793,
   0.04287535,
   0.03201832,
   0.02357808,
   0.03824956,
   0.02133356,
   0.02542542};
   gre = new TGraphErrors(10,y_vs_run_16_fx1017,y_vs_run_16_fy1017,y_vs_run_16_fex1017,y_vs_run_16_fey1017);
   gre->SetName("y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_161017 = new TH1F("Graph_y_vs_run_161017","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_161017->SetMinimum(74.7597);
   Graph_y_vs_run_161017->SetMaximum(75.3333);
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
   
   Double_t y_vs_run_17_fx1018[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_17_fy1018[10] = {
   75.74135,
   75.8283,
   75.76479,
   75.74393,
   75.75947,
   75.73904,
   75.73995,
   75.69576,
   75.70652,
   75.64457};
   Double_t y_vs_run_17_fex1018[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_17_fey1018[10] = {
   0.1580365,
   0.0245174,
   0.02570262,
   0.02133832,
   0.04254227,
   0.03179333,
   0.02337143,
   0.03796297,
   0.02114343,
   0.02523483};
   gre = new TGraphErrors(10,y_vs_run_17_fx1018,y_vs_run_17_fy1018,y_vs_run_17_fex1018,y_vs_run_17_fey1018);
   gre->SetName("y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_171018 = new TH1F("Graph_y_vs_run_171018","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_171018->SetMinimum(75.55171);
   Graph_y_vs_run_171018->SetMaximum(75.931);
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
   
   Double_t y_vs_run_18_fx1019[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_18_fy1019[10] = {
   76.19558,
   75.92406,
   75.96183,
   75.92341,
   75.898,
   75.92374,
   75.90593,
   75.83853,
   75.85082,
   75.85107};
   Double_t y_vs_run_18_fex1019[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_18_fey1019[10] = {
   0.1539608,
   0.02388318,
   0.02505255,
   0.02080842,
   0.0415719,
   0.03096061,
   0.02279376,
   0.03695272,
   0.02060744,
   0.02459364};
   gre = new TGraphErrors(10,y_vs_run_18_fx1019,y_vs_run_18_fy1019,y_vs_run_18_fex1019,y_vs_run_18_fey1019);
   gre->SetName("y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_181019 = new TH1F("Graph_y_vs_run_181019","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_181019->SetMinimum(75.74678);
   Graph_y_vs_run_181019->SetMaximum(76.40434);
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
   
   Double_t y_vs_run_19_fx1020[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_19_fy1020[10] = {
   74.88094,
   74.85904,
   74.82967,
   74.77853,
   74.84782,
   74.81105,
   74.80662,
   74.84457,
   74.79791,
   74.75113};
   Double_t y_vs_run_19_fex1020[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_19_fey1020[10] = {
   0.1476643,
   0.02302759,
   0.02414235,
   0.02007199,
   0.04007012,
   0.02985057,
   0.02195734,
   0.03559893,
   0.01986332,
   0.0237095};
   gre = new TGraphErrors(10,y_vs_run_19_fx1020,y_vs_run_19_fy1020,y_vs_run_19_fex1020,y_vs_run_19_fey1020);
   gre->SetName("y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_191020 = new TH1F("Graph_y_vs_run_191020","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_191020->SetMinimum(74.6973);
   Graph_y_vs_run_191020->SetMaximum(75.05872);
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
   
   Double_t y_vs_run_20_fx1021[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_20_fy1021[10] = {
   75.7472,
   75.37236,
   75.4024,
   75.39988,
   75.42729,
   75.40207,
   75.35286,
   75.33659,
   75.33147,
   75.33548};
   Double_t y_vs_run_20_fex1021[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_20_fey1021[10] = {
   0.1573603,
   0.02448739,
   0.02569794,
   0.02134964,
   0.04265145,
   0.03175807,
   0.02337135,
   0.03786773,
   0.02112328,
   0.02519822};
   gre = new TGraphErrors(10,y_vs_run_20_fx1021,y_vs_run_20_fy1021,y_vs_run_20_fex1021,y_vs_run_20_fey1021);
   gre->SetName("y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_201021 = new TH1F("Graph_y_vs_run_201021","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_201021->SetMinimum(75.23813);
   Graph_y_vs_run_201021->SetMaximum(75.96514);
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
   
   Double_t y_vs_run_21_fx1022[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_21_fy1022[10] = {
   75.57479,
   75.2643,
   75.19986,
   75.22565,
   75.15863,
   75.26638,
   75.22918,
   75.14805,
   75.22165,
   75.16851};
   Double_t y_vs_run_21_fex1022[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_21_fey1022[10] = {
   0.1617997,
   0.02515249,
   0.02639957,
   0.0219145,
   0.04380591,
   0.03266474,
   0.0240147,
   0.03894965,
   0.02172809,
   0.025926};
   gre = new TGraphErrors(10,y_vs_run_21_fx1022,y_vs_run_21_fy1022,y_vs_run_21_fex1022,y_vs_run_21_fey1022);
   gre->SetName("y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_211022 = new TH1F("Graph_y_vs_run_211022","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_211022->SetMinimum(75.04635);
   Graph_y_vs_run_211022->SetMaximum(75.79934);
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
   
   Double_t y_vs_run_22_fx1023[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_22_fy1023[10] = {
   75.4094,
   74.62581,
   74.65838,
   74.65283,
   74.66161,
   74.6286,
   74.59839,
   74.68189,
   74.56949,
   74.61051};
   Double_t y_vs_run_22_fex1023[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_22_fey1023[10] = {
   0.1597176,
   0.0260165,
   0.02727378,
   0.02265806,
   0.04515249,
   0.03373092,
   0.02480437,
   0.04028604,
   0.0224573,
   0.02677497};
   gre = new TGraphErrors(10,y_vs_run_22_fx1023,y_vs_run_22_fy1023,y_vs_run_22_fex1023,y_vs_run_22_fey1023);
   gre->SetName("y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_221023 = new TH1F("Graph_y_vs_run_221023","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_221023->SetMinimum(74.44482);
   Graph_y_vs_run_221023->SetMaximum(75.67132);
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
   
   Double_t y_vs_run_23_fx1024[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_23_fy1024[10] = {
   75.19014,
   75.02001,
   74.93574,
   74.97506,
   75.02581,
   74.95583,
   74.96452,
   74.99283,
   74.92847,
   74.91967};
   Double_t y_vs_run_23_fex1024[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_23_fey1024[10] = {
   0.1590087,
   0.02466319,
   0.02586769,
   0.02146636,
   0.04289929,
   0.03200227,
   0.02353075,
   0.03820378,
   0.02127254,
   0.02537187};
   gre = new TGraphErrors(10,y_vs_run_23_fx1024,y_vs_run_23_fy1024,y_vs_run_23_fex1024,y_vs_run_23_fey1024);
   gre->SetName("y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_231024 = new TH1F("Graph_y_vs_run_231024","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_231024->SetMinimum(74.84882);
   Graph_y_vs_run_231024->SetMaximum(75.39463);
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
   
   Double_t y_vs_run_24_fx1025[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t y_vs_run_24_fy1025[10] = {
   75.62849,
   75.46569,
   75.42807,
   75.48851,
   75.52794,
   75.40622,
   75.43773,
   75.43411,
   75.42554,
   75.3711};
   Double_t y_vs_run_24_fex1025[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t y_vs_run_24_fey1025[10] = {
   0.1569441,
   0.0242401,
   0.02541533,
   0.02110919,
   0.04214663,
   0.03142456,
   0.0231157,
   0.03746017,
   0.02089795,
   0.02489907};
   gre = new TGraphErrors(10,y_vs_run_24_fx1025,y_vs_run_24_fy1025,y_vs_run_24_fex1025,y_vs_run_24_fey1025);
   gre->SetName("y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_241025 = new TH1F("Graph_y_vs_run_241025","Graph",100,26994.7,27046.3);
   Graph_y_vs_run_241025->SetMinimum(75.30227);
   Graph_y_vs_run_241025->SetMaximum(75.82935);
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
