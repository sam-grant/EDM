void PerCaloYvsRun_Run5b_Nearline_46130_46133()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 14:30:17 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(46129.19,68.75,46134.33,81.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t y_vs_run_1_fx1002[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_1_fy1002[4] = {
   73.55505,
   73.49468,
   73.50794,
   73.41943};
   Double_t y_vs_run_1_fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_1_fey1002[4] = {
   0.08560356,
   0.04355112,
   0.04194952,
   0.2555856};
   TGraphErrors *gre = new TGraphErrors(4,y_vs_run_1_fx1002,y_vs_run_1_fy1002,y_vs_run_1_fex1002,y_vs_run_1_fey1002);
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
   
   TH1F *Graph_y_vs_run_11002 = new TH1F("Graph_y_vs_run_11002","",100,46129.7,46133.3);
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
   
   Double_t y_vs_run_2_fx1003[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_2_fy1003[4] = {
   73.17889,
   73.20299,
   73.19061,
   73.26934};
   Double_t y_vs_run_2_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_2_fey1003[4] = {
   0.08785233,
   0.04463787,
   0.04297163,
   0.2603686};
   gre = new TGraphErrors(4,y_vs_run_2_fx1003,y_vs_run_2_fy1003,y_vs_run_2_fex1003,y_vs_run_2_fey1003);
   gre->SetName("y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_21003 = new TH1F("Graph_y_vs_run_21003","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_21003->SetMinimum(72.9569);
   Graph_y_vs_run_21003->SetMaximum(73.58179);
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
   
   Double_t y_vs_run_3_fx1004[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_3_fy1004[4] = {
   74.43528,
   74.33529,
   74.37661,
   74.64313};
   Double_t y_vs_run_3_fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_3_fey1004[4] = {
   0.08850002,
   0.04493346,
   0.04336503,
   0.2630641};
   gre = new TGraphErrors(4,y_vs_run_3_fx1004,y_vs_run_3_fy1004,y_vs_run_3_fex1004,y_vs_run_3_fey1004);
   gre->SetName("y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_31004 = new TH1F("Graph_y_vs_run_31004","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_31004->SetMinimum(74.22877);
   Graph_y_vs_run_31004->SetMaximum(74.96778);
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
   
   Double_t y_vs_run_4_fx1005[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_4_fy1005[4] = {
   73.51478,
   73.42294,
   73.49675,
   73.35926};
   Double_t y_vs_run_4_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_4_fey1005[4] = {
   0.08636602,
   0.04402182,
   0.0423798,
   0.2561847};
   gre = new TGraphErrors(4,y_vs_run_4_fx1005,y_vs_run_4_fy1005,y_vs_run_4_fex1005,y_vs_run_4_fey1005);
   gre->SetName("y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_41005 = new TH1F("Graph_y_vs_run_41005","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_41005->SetMinimum(73.05184);
   Graph_y_vs_run_41005->SetMaximum(73.66668);
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
   
   Double_t y_vs_run_5_fx1006[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_5_fy1006[4] = {
   74.30653,
   74.21197,
   74.24219,
   73.80763};
   Double_t y_vs_run_5_fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_5_fey1006[4] = {
   0.08774335,
   0.04481357,
   0.04312382,
   0.260226};
   gre = new TGraphErrors(4,y_vs_run_5_fx1006,y_vs_run_5_fy1006,y_vs_run_5_fex1006,y_vs_run_5_fey1006);
   gre->SetName("y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_51006 = new TH1F("Graph_y_vs_run_51006","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_51006->SetMinimum(73.46271);
   Graph_y_vs_run_51006->SetMaximum(74.47896);
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
   
   Double_t y_vs_run_6_fx1007[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_6_fy1007[4] = {
   74.05372,
   73.99502,
   73.92754,
   74.37704};
   Double_t y_vs_run_6_fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_6_fey1007[4] = {
   0.08662053,
   0.04426784,
   0.04254425,
   0.2564926};
   gre = new TGraphErrors(4,y_vs_run_6_fx1007,y_vs_run_6_fy1007,y_vs_run_6_fex1007,y_vs_run_6_fey1007);
   gre->SetName("y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_61007 = new TH1F("Graph_y_vs_run_61007","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_61007->SetMinimum(73.81014);
   Graph_y_vs_run_61007->SetMaximum(74.70839);
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
   
   Double_t y_vs_run_7_fx1008[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_7_fy1008[4] = {
   74.34098,
   74.42346,
   74.46943,
   74.34494};
   Double_t y_vs_run_7_fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_7_fey1008[4] = {
   0.08720163,
   0.0443847,
   0.0428195,
   0.2595095};
   gre = new TGraphErrors(4,y_vs_run_7_fx1008,y_vs_run_7_fy1008,y_vs_run_7_fex1008,y_vs_run_7_fey1008);
   gre->SetName("y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_71008 = new TH1F("Graph_y_vs_run_71008","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_71008->SetMinimum(74.03353);
   Graph_y_vs_run_71008->SetMaximum(74.65635);
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
   
   Double_t y_vs_run_8_fx1009[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_8_fy1009[4] = {
   73.63215,
   73.76664,
   73.68998,
   73.2723};
   Double_t y_vs_run_8_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_8_fey1009[4] = {
   0.08734437,
   0.0443991,
   0.04272928,
   0.2590865};
   gre = new TGraphErrors(4,y_vs_run_8_fx1009,y_vs_run_8_fy1009,y_vs_run_8_fex1009,y_vs_run_8_fey1009);
   gre->SetName("y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_81009 = new TH1F("Graph_y_vs_run_81009","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_81009->SetMinimum(72.93343);
   Graph_y_vs_run_81009->SetMaximum(73.89082);
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
   
   Double_t y_vs_run_9_fx1010[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_9_fy1010[4] = {
   73.1776,
   73.04342,
   73.0273,
   73.37183};
   Double_t y_vs_run_9_fex1010[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_9_fey1010[4] = {
   0.08689777,
   0.04449385,
   0.04284417,
   0.2588825};
   gre = new TGraphErrors(4,y_vs_run_9_fx1010,y_vs_run_9_fy1010,y_vs_run_9_fex1010,y_vs_run_9_fey1010);
   gre->SetName("y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_91010 = new TH1F("Graph_y_vs_run_91010","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_91010->SetMinimum(72.91983);
   Graph_y_vs_run_91010->SetMaximum(73.69534);
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
   
   Double_t y_vs_run_10_fx1011[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_10_fy1011[4] = {
   73.40881,
   73.43053,
   73.54552,
   73.81021};
   Double_t y_vs_run_10_fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_10_fey1011[4] = {
   0.08579614,
   0.04383738,
   0.04223078,
   0.2605384};
   gre = new TGraphErrors(4,y_vs_run_10_fx1011,y_vs_run_10_fy1011,y_vs_run_10_fex1011,y_vs_run_10_fey1011);
   gre->SetName("y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_101011 = new TH1F("Graph_y_vs_run_101011","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_101011->SetMinimum(73.24824);
   Graph_y_vs_run_101011->SetMaximum(74.14552);
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
   
   Double_t y_vs_run_11_fx1012[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_11_fy1012[4] = {
   73.15618,
   73.37855,
   73.27132,
   73.19949};
   Double_t y_vs_run_11_fex1012[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_11_fey1012[4] = {
   0.08703824,
   0.04425773,
   0.04264731,
   0.2571838};
   gre = new TGraphErrors(4,y_vs_run_11_fx1012,y_vs_run_11_fy1012,y_vs_run_11_fex1012,y_vs_run_11_fey1012);
   gre->SetName("y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_111012 = new TH1F("Graph_y_vs_run_111012","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_111012->SetMinimum(72.89087);
   Graph_y_vs_run_111012->SetMaximum(73.50811);
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
   
   Double_t y_vs_run_12_fx1013[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_12_fy1013[4] = {
   73.02358,
   73.10517,
   73.12212,
   73.20526};
   Double_t y_vs_run_12_fex1013[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_12_fey1013[4] = {
   0.08296864,
   0.04213247,
   0.04064751,
   0.2468148};
   gre = new TGraphErrors(4,y_vs_run_12_fx1013,y_vs_run_12_fy1013,y_vs_run_12_fex1013,y_vs_run_12_fey1013);
   gre->SetName("y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_121013 = new TH1F("Graph_y_vs_run_121013","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_121013->SetMinimum(72.88946);
   Graph_y_vs_run_121013->SetMaximum(73.50322);
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
   
   Double_t y_vs_run_13_fx1014[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_13_fy1014[4] = {
   73.80687,
   73.98086,
   74.07042,
   73.76308};
   Double_t y_vs_run_13_fex1014[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_13_fey1014[4] = {
   0.0786637,
   0.03954909,
   0.03819594,
   0.2312144};
   gre = new TGraphErrors(4,y_vs_run_13_fx1014,y_vs_run_13_fy1014,y_vs_run_13_fex1014,y_vs_run_13_fey1014);
   gre->SetName("y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_131014 = new TH1F("Graph_y_vs_run_131014","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_131014->SetMinimum(73.47419);
   Graph_y_vs_run_131014->SetMaximum(74.16629);
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
   
   Double_t y_vs_run_14_fx1015[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_14_fy1015[4] = {
   73.39514,
   73.39137,
   73.36775,
   73.56966};
   Double_t y_vs_run_14_fex1015[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_14_fey1015[4] = {
   0.08396658,
   0.04293095,
   0.04138084,
   0.2519707};
   gre = new TGraphErrors(4,y_vs_run_14_fx1015,y_vs_run_14_fy1015,y_vs_run_14_fex1015,y_vs_run_14_fey1015);
   gre->SetName("y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_141015 = new TH1F("Graph_y_vs_run_141015","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_141015->SetMinimum(73.26013);
   Graph_y_vs_run_141015->SetMaximum(73.87267);
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
   
   Double_t y_vs_run_15_fx1016[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_15_fy1016[4] = {
   74.24642,
   74.20529,
   74.15028,
   74.21615};
   Double_t y_vs_run_15_fex1016[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_15_fey1016[4] = {
   0.08478922,
   0.04322056,
   0.04164142,
   0.2526904};
   gre = new TGraphErrors(4,y_vs_run_15_fx1016,y_vs_run_15_fy1016,y_vs_run_15_fex1016,y_vs_run_15_fey1016);
   gre->SetName("y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_151016 = new TH1F("Graph_y_vs_run_151016","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_151016->SetMinimum(73.91292);
   Graph_y_vs_run_151016->SetMaximum(74.51938);
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
   
   Double_t y_vs_run_16_fx1017[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_16_fy1017[4] = {
   73.28703,
   73.40964,
   73.3096,
   73.36373};
   Double_t y_vs_run_16_fex1017[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_16_fey1017[4] = {
   0.0867452,
   0.04439556,
   0.04267081,
   0.2589889};
   gre = new TGraphErrors(4,y_vs_run_16_fx1017,y_vs_run_16_fy1017,y_vs_run_16_fex1017,y_vs_run_16_fey1017);
   gre->SetName("y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_161017 = new TH1F("Graph_y_vs_run_161017","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_161017->SetMinimum(73.05294);
   Graph_y_vs_run_161017->SetMaximum(73.67451);
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
   
   Double_t y_vs_run_17_fx1018[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_17_fy1018[4] = {
   74.35778,
   74.36509,
   74.26474,
   73.89764};
   Double_t y_vs_run_17_fex1018[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_17_fey1018[4] = {
   0.08645237,
   0.04392875,
   0.04229131,
   0.2561806};
   gre = new TGraphErrors(4,y_vs_run_17_fx1018,y_vs_run_17_fy1018,y_vs_run_17_fex1018,y_vs_run_17_fey1018);
   gre->SetName("y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_171018 = new TH1F("Graph_y_vs_run_171018","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_171018->SetMinimum(73.56118);
   Graph_y_vs_run_171018->SetMaximum(74.52451);
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
   
   Double_t y_vs_run_18_fx1019[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_18_fy1019[4] = {
   74.28387,
   74.35555,
   74.33158,
   73.99331};
   Double_t y_vs_run_18_fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_18_fey1019[4] = {
   0.08353216,
   0.04250202,
   0.04095571,
   0.2475859};
   gre = new TGraphErrors(4,y_vs_run_18_fx1019,y_vs_run_18_fy1019,y_vs_run_18_fex1019,y_vs_run_18_fey1019);
   gre->SetName("y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_181019 = new TH1F("Graph_y_vs_run_181019","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_181019->SetMinimum(73.6805);
   Graph_y_vs_run_181019->SetMaximum(74.46328);
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
   
   Double_t y_vs_run_19_fx1020[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_19_fy1020[4] = {
   73.40362,
   73.47899,
   73.46567,
   73.36714};
   Double_t y_vs_run_19_fex1020[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_19_fey1020[4] = {
   0.08238157,
   0.04150715,
   0.03997023,
   0.2411091};
   gre = new TGraphErrors(4,y_vs_run_19_fx1020,y_vs_run_19_fy1020,y_vs_run_19_fex1020,y_vs_run_19_fey1020);
   gre->SetName("y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_191020 = new TH1F("Graph_y_vs_run_191020","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_191020->SetMinimum(73.07781);
   Graph_y_vs_run_191020->SetMaximum(73.65648);
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
   
   Double_t y_vs_run_20_fx1021[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_20_fy1021[4] = {
   73.89809,
   73.7595,
   73.77232,
   74.13962};
   Double_t y_vs_run_20_fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_20_fey1021[4] = {
   0.08550499,
   0.04360762,
   0.04216111,
   0.254583};
   gre = new TGraphErrors(4,y_vs_run_20_fx1021,y_vs_run_20_fy1021,y_vs_run_20_fex1021,y_vs_run_20_fey1021);
   gre->SetName("y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_201021 = new TH1F("Graph_y_vs_run_201021","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_201021->SetMinimum(73.64806);
   Graph_y_vs_run_201021->SetMaximum(74.46204);
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
   
   Double_t y_vs_run_21_fx1022[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_21_fy1022[4] = {
   73.71029,
   73.80021,
   73.66289,
   73.94031};
   Double_t y_vs_run_21_fex1022[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_21_fey1022[4] = {
   0.08739233,
   0.04462437,
   0.04293585,
   0.261588};
   gre = new TGraphErrors(4,y_vs_run_21_fx1022,y_vs_run_21_fy1022,y_vs_run_21_fex1022,y_vs_run_21_fey1022);
   gre->SetName("y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_211022 = new TH1F("Graph_y_vs_run_211022","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_211022->SetMinimum(73.56176);
   Graph_y_vs_run_211022->SetMaximum(74.2601);
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
   
   Double_t y_vs_run_22_fx1023[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_22_fy1023[4] = {
   73.64667,
   73.59818,
   73.71107,
   73.37397};
   Double_t y_vs_run_22_fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_22_fey1023[4] = {
   0.0871116,
   0.04439967,
   0.04283855,
   0.2592592};
   gre = new TGraphErrors(4,y_vs_run_22_fx1023,y_vs_run_22_fy1023,y_vs_run_22_fex1023,y_vs_run_22_fey1023);
   gre->SetName("y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_221023 = new TH1F("Graph_y_vs_run_221023","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_221023->SetMinimum(73.05079);
   Graph_y_vs_run_221023->SetMaximum(73.81782);
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
   
   Double_t y_vs_run_23_fx1024[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_23_fy1024[4] = {
   73.39727,
   73.3309,
   73.40216,
   73.16049};
   Double_t y_vs_run_23_fex1024[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_23_fey1024[4] = {
   0.08637053,
   0.04400442,
   0.04250358,
   0.2570242};
   gre = new TGraphErrors(4,y_vs_run_23_fx1024,y_vs_run_23_fy1024,y_vs_run_23_fex1024,y_vs_run_23_fey1024);
   gre->SetName("y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_231024 = new TH1F("Graph_y_vs_run_231024","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_231024->SetMinimum(72.84545);
   Graph_y_vs_run_231024->SetMaximum(73.54166);
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
   
   Double_t y_vs_run_24_fx1025[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t y_vs_run_24_fy1025[4] = {
   73.95115,
   73.86568,
   73.87262,
   74.08968};
   Double_t y_vs_run_24_fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t y_vs_run_24_fey1025[4] = {
   0.08550858,
   0.04338638,
   0.0417972,
   0.2524475};
   gre = new TGraphErrors(4,y_vs_run_24_fx1025,y_vs_run_24_fy1025,y_vs_run_24_fex1025,y_vs_run_24_fey1025);
   gre->SetName("y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_241025 = new TH1F("Graph_y_vs_run_241025","Graph",100,46129.7,46133.3);
   Graph_y_vs_run_241025->SetMinimum(73.77032);
   Graph_y_vs_run_241025->SetMaximum(74.39411);
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
