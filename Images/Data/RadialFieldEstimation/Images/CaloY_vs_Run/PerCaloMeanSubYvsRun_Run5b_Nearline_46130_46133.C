void PerCaloMeanSubYvsRun_Run5b_Nearline_46130_46133()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 14:30:18 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(46129.19,-3.125,46134.33,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t meanSub_y_vs_run_1_fx1026[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_1_fy1026[4] = {
   0.06077606,
   0.0004092635,
   0.01366097,
   -0.07484629};
   Double_t meanSub_y_vs_run_1_fex1026[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_1_fey1026[4] = {
   0.08560356,
   0.04355112,
   0.04194952,
   0.2555856};
   TGraphErrors *gre = new TGraphErrors(4,meanSub_y_vs_run_1_fx1026,meanSub_y_vs_run_1_fy1026,meanSub_y_vs_run_1_fex1026,meanSub_y_vs_run_1_fey1026);
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
   
   TH1F *Graph_meanSub_y_vs_run_11026 = new TH1F("Graph_meanSub_y_vs_run_11026","",100,46129.7,46133.3);
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
   
   Double_t meanSub_y_vs_run_2_fx1027[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_2_fy1027[4] = {
   -0.03156882,
   -0.007465325,
   -0.01985048,
   0.05888463};
   Double_t meanSub_y_vs_run_2_fex1027[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_2_fey1027[4] = {
   0.08785233,
   0.04463787,
   0.04297163,
   0.2603686};
   gre = new TGraphErrors(4,meanSub_y_vs_run_2_fx1027,meanSub_y_vs_run_2_fy1027,meanSub_y_vs_run_2_fex1027,meanSub_y_vs_run_2_fey1027);
   gre->SetName("meanSub_y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_21027 = new TH1F("Graph_meanSub_y_vs_run_21027","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_21027->SetMinimum(-0.2535577);
   Graph_meanSub_y_vs_run_21027->SetMaximum(0.3713269);
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
   
   Double_t meanSub_y_vs_run_3_fx1028[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_3_fy1028[4] = {
   -0.0123006,
   -0.1122888,
   -0.07096247,
   0.1955518};
   Double_t meanSub_y_vs_run_3_fex1028[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_3_fey1028[4] = {
   0.08850002,
   0.04493346,
   0.04336503,
   0.2630641};
   gre = new TGraphErrors(4,meanSub_y_vs_run_3_fx1028,meanSub_y_vs_run_3_fy1028,meanSub_y_vs_run_3_fex1028,meanSub_y_vs_run_3_fey1028);
   gre->SetName("meanSub_y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_31028 = new TH1F("Graph_meanSub_y_vs_run_31028","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_31028->SetMinimum(-0.2188061);
   Graph_meanSub_y_vs_run_31028->SetMaximum(0.5201998);
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
   
   Double_t meanSub_y_vs_run_4_fx1029[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_4_fy1029[4] = {
   0.06634685,
   -0.02549463,
   0.04832144,
   -0.08917366};
   Double_t meanSub_y_vs_run_4_fex1029[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_4_fey1029[4] = {
   0.08636602,
   0.04402182,
   0.0423798,
   0.2561847};
   gre = new TGraphErrors(4,meanSub_y_vs_run_4_fx1029,meanSub_y_vs_run_4_fy1029,meanSub_y_vs_run_4_fex1029,meanSub_y_vs_run_4_fey1029);
   gre->SetName("meanSub_y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_41029 = new TH1F("Graph_meanSub_y_vs_run_41029","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_41029->SetMinimum(-0.3965953);
   Graph_meanSub_y_vs_run_41029->SetMaximum(0.218248);
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
   
   Double_t meanSub_y_vs_run_5_fx1030[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_5_fy1030[4] = {
   0.1644533,
   0.06988827,
   0.100109,
   -0.3344505};
   Double_t meanSub_y_vs_run_5_fex1030[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_5_fey1030[4] = {
   0.08774335,
   0.04481357,
   0.04312382,
   0.260226};
   gre = new TGraphErrors(4,meanSub_y_vs_run_5_fx1030,meanSub_y_vs_run_5_fy1030,meanSub_y_vs_run_5_fex1030,meanSub_y_vs_run_5_fey1030);
   gre->SetName("meanSub_y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_51030 = new TH1F("Graph_meanSub_y_vs_run_51030","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_51030->SetMinimum(-0.6793639);
   Graph_meanSub_y_vs_run_51030->SetMaximum(0.3368839);
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
   
   Double_t meanSub_y_vs_run_6_fx1031[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_6_fy1031[4] = {
   -0.03461069,
   -0.0933075,
   -0.1607917,
   0.2887099};
   Double_t meanSub_y_vs_run_6_fex1031[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_6_fey1031[4] = {
   0.08662053,
   0.04426784,
   0.04254425,
   0.2564926};
   gre = new TGraphErrors(4,meanSub_y_vs_run_6_fx1031,meanSub_y_vs_run_6_fy1031,meanSub_y_vs_run_6_fex1031,meanSub_y_vs_run_6_fey1031);
   gre->SetName("meanSub_y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_61031 = new TH1F("Graph_meanSub_y_vs_run_61031","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_61031->SetMinimum(-0.2781899);
   Graph_meanSub_y_vs_run_61031->SetMaximum(0.6200564);
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
   
   Double_t meanSub_y_vs_run_7_fx1032[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_7_fy1032[4] = {
   -0.05372258,
   0.02876079,
   0.07472773,
   -0.04976594};
   Double_t meanSub_y_vs_run_7_fex1032[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_7_fey1032[4] = {
   0.08720163,
   0.0443847,
   0.0428195,
   0.2595095};
   gre = new TGraphErrors(4,meanSub_y_vs_run_7_fx1032,meanSub_y_vs_run_7_fy1032,meanSub_y_vs_run_7_fex1032,meanSub_y_vs_run_7_fey1032);
   gre->SetName("meanSub_y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_71032 = new TH1F("Graph_meanSub_y_vs_run_71032","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_71032->SetMinimum(-0.3611773);
   Graph_meanSub_y_vs_run_71032->SetMaximum(0.2616454);
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
   
   Double_t meanSub_y_vs_run_8_fx1033[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_8_fy1033[4] = {
   0.04188159,
   0.1763686,
   0.09971613,
   -0.3179663};
   Double_t meanSub_y_vs_run_8_fex1033[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_8_fey1033[4] = {
   0.08734437,
   0.0443991,
   0.04272928,
   0.2590865};
   gre = new TGraphErrors(4,meanSub_y_vs_run_8_fx1033,meanSub_y_vs_run_8_fy1033,meanSub_y_vs_run_8_fex1033,meanSub_y_vs_run_8_fey1033);
   gre->SetName("meanSub_y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_81033 = new TH1F("Graph_meanSub_y_vs_run_81033","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_81033->SetMinimum(-0.6568349);
   Graph_meanSub_y_vs_run_81033->SetMaximum(0.3005497);
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
   
   Double_t meanSub_y_vs_run_9_fx1034[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_9_fy1034[4] = {
   0.02256345,
   -0.1116152,
   -0.1277375,
   0.2167893};
   Double_t meanSub_y_vs_run_9_fex1034[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_9_fey1034[4] = {
   0.08689777,
   0.04449385,
   0.04284417,
   0.2588825};
   gre = new TGraphErrors(4,meanSub_y_vs_run_9_fx1034,meanSub_y_vs_run_9_fy1034,meanSub_y_vs_run_9_fex1034,meanSub_y_vs_run_9_fey1034);
   gre->SetName("meanSub_y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_91034 = new TH1F("Graph_meanSub_y_vs_run_91034","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_91034->SetMinimum(-0.2352071);
   Graph_meanSub_y_vs_run_91034->SetMaximum(0.5402972);
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
   
   Double_t meanSub_y_vs_run_10_fx1035[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_10_fy1035[4] = {
   -0.1399589,
   -0.118235,
   -0.00324645,
   0.2614403};
   Double_t meanSub_y_vs_run_10_fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_10_fey1035[4] = {
   0.08579614,
   0.04383738,
   0.04223078,
   0.2605384};
   gre = new TGraphErrors(4,meanSub_y_vs_run_10_fx1035,meanSub_y_vs_run_10_fy1035,meanSub_y_vs_run_10_fex1035,meanSub_y_vs_run_10_fey1035);
   gre->SetName("meanSub_y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_101035 = new TH1F("Graph_meanSub_y_vs_run_101035","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_101035->SetMinimum(-0.3005284);
   Graph_meanSub_y_vs_run_101035->SetMaximum(0.5967521);
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
   
   Double_t meanSub_y_vs_run_11_fx1036[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_11_fy1036[4] = {
   -0.09520585,
   0.1271664,
   0.0199324,
   -0.05189297};
   Double_t meanSub_y_vs_run_11_fex1036[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_11_fey1036[4] = {
   0.08703824,
   0.04425773,
   0.04264731,
   0.2571838};
   gre = new TGraphErrors(4,meanSub_y_vs_run_11_fx1036,meanSub_y_vs_run_11_fy1036,meanSub_y_vs_run_11_fex1036,meanSub_y_vs_run_11_fey1036);
   gre->SetName("meanSub_y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_111036 = new TH1F("Graph_meanSub_y_vs_run_111036","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_111036->SetMinimum(-0.3605136);
   Graph_meanSub_y_vs_run_111036->SetMaximum(0.2567276);
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
   
   Double_t meanSub_y_vs_run_12_fx1037[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_12_fy1037[4] = {
   -0.09045118,
   -0.008865062,
   0.008088452,
   0.09122779};
   Double_t meanSub_y_vs_run_12_fex1037[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_12_fey1037[4] = {
   0.08296864,
   0.04213247,
   0.04064751,
   0.2468148};
   gre = new TGraphErrors(4,meanSub_y_vs_run_12_fx1037,meanSub_y_vs_run_12_fy1037,meanSub_y_vs_run_12_fex1037,meanSub_y_vs_run_12_fey1037);
   gre->SetName("meanSub_y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_121037 = new TH1F("Graph_meanSub_y_vs_run_121037","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_121037->SetMinimum(-0.2245661);
   Graph_meanSub_y_vs_run_121037->SetMaximum(0.3891888);
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
   
   Double_t meanSub_y_vs_run_13_fx1038[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_13_fy1038[4] = {
   -0.09843916,
   0.07555323,
   0.1651103,
   -0.1422244};
   Double_t meanSub_y_vs_run_13_fex1038[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_13_fey1038[4] = {
   0.0786637,
   0.03954909,
   0.03819594,
   0.2312144};
   gre = new TGraphErrors(4,meanSub_y_vs_run_13_fx1038,meanSub_y_vs_run_13_fy1038,meanSub_y_vs_run_13_fex1038,meanSub_y_vs_run_13_fey1038);
   gre->SetName("meanSub_y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_131038 = new TH1F("Graph_meanSub_y_vs_run_131038","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_131038->SetMinimum(-0.4311132);
   Graph_meanSub_y_vs_run_131038->SetMaximum(0.2609807);
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
   
   Double_t meanSub_y_vs_run_14_fx1039[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_14_fy1039[4] = {
   -0.03583388,
   -0.03961152,
   -0.06323168,
   0.1386771};
   Double_t meanSub_y_vs_run_14_fex1039[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_14_fey1039[4] = {
   0.08396658,
   0.04293095,
   0.04138084,
   0.2519707};
   gre = new TGraphErrors(4,meanSub_y_vs_run_14_fx1039,meanSub_y_vs_run_14_fy1039,meanSub_y_vs_run_14_fex1039,meanSub_y_vs_run_14_fey1039);
   gre->SetName("meanSub_y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_141039 = new TH1F("Graph_meanSub_y_vs_run_141039","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_141039->SetMinimum(-0.1708453);
   Graph_meanSub_y_vs_run_141039->SetMaximum(0.4416927);
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
   
   Double_t meanSub_y_vs_run_15_fx1040[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_15_fy1040[4] = {
   0.04188181,
   0.0007556113,
   -0.05425607,
   0.01161865};
   Double_t meanSub_y_vs_run_15_fex1040[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_15_fey1040[4] = {
   0.08478922,
   0.04322056,
   0.04164142,
   0.2526904};
   gre = new TGraphErrors(4,meanSub_y_vs_run_15_fx1040,meanSub_y_vs_run_15_fy1040,meanSub_y_vs_run_15_fex1040,meanSub_y_vs_run_15_fey1040);
   gre->SetName("meanSub_y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_151040 = new TH1F("Graph_meanSub_y_vs_run_151040","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_151040->SetMinimum(-0.2916099);
   Graph_meanSub_y_vs_run_151040->SetMaximum(0.3148472);
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
   
   Double_t meanSub_y_vs_run_16_fx1041[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_16_fy1041[4] = {
   -0.05547181,
   0.0671428,
   -0.03289681,
   0.02122582};
   Double_t meanSub_y_vs_run_16_fex1041[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_16_fey1041[4] = {
   0.0867452,
   0.04439556,
   0.04267081,
   0.2589889};
   gre = new TGraphErrors(4,meanSub_y_vs_run_16_fx1041,meanSub_y_vs_run_16_fy1041,meanSub_y_vs_run_16_fex1041,meanSub_y_vs_run_16_fey1041);
   gre->SetName("meanSub_y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_161041 = new TH1F("Graph_meanSub_y_vs_run_161041","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_161041->SetMinimum(-0.2895608);
   Graph_meanSub_y_vs_run_161041->SetMaximum(0.3320125);
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
   
   Double_t meanSub_y_vs_run_17_fx1042[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_17_fy1042[4] = {
   0.1364698,
   0.1437781,
   0.04342432,
   -0.3236722};
   Double_t meanSub_y_vs_run_17_fex1042[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_17_fey1042[4] = {
   0.08645237,
   0.04392875,
   0.04229131,
   0.2561806};
   gre = new TGraphErrors(4,meanSub_y_vs_run_17_fx1042,meanSub_y_vs_run_17_fy1042,meanSub_y_vs_run_17_fex1042,meanSub_y_vs_run_17_fey1042);
   gre->SetName("meanSub_y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_171042 = new TH1F("Graph_meanSub_y_vs_run_171042","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_171042->SetMinimum(-0.6601302);
   Graph_meanSub_y_vs_run_171042->SetMaximum(0.3031996);
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
   
   Double_t meanSub_y_vs_run_18_fx1043[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_18_fy1043[4] = {
   0.04279548,
   0.114468,
   0.09050049,
   -0.2477639};
   Double_t meanSub_y_vs_run_18_fex1043[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_18_fey1043[4] = {
   0.08353216,
   0.04250202,
   0.04095571,
   0.2475859};
   gre = new TGraphErrors(4,meanSub_y_vs_run_18_fx1043,meanSub_y_vs_run_18_fy1043,meanSub_y_vs_run_18_fex1043,meanSub_y_vs_run_18_fey1043);
   gre->SetName("meanSub_y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_181043 = new TH1F("Graph_meanSub_y_vs_run_181043","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_181043->SetMinimum(-0.5605819);
   Graph_meanSub_y_vs_run_181043->SetMaximum(0.222202);
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
   
   Double_t meanSub_y_vs_run_19_fx1044[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_19_fy1044[4] = {
   -0.02523367,
   0.0501308,
   0.03681453,
   -0.06171166};
   Double_t meanSub_y_vs_run_19_fex1044[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_19_fey1044[4] = {
   0.08238157,
   0.04150715,
   0.03997023,
   0.2411091};
   gre = new TGraphErrors(4,meanSub_y_vs_run_19_fx1044,meanSub_y_vs_run_19_fy1044,meanSub_y_vs_run_19_fex1044,meanSub_y_vs_run_19_fey1044);
   gre->SetName("meanSub_y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_191044 = new TH1F("Graph_meanSub_y_vs_run_191044","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_191044->SetMinimum(-0.3510426);
   Graph_meanSub_y_vs_run_191044->SetMaximum(0.2276192);
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
   
   Double_t meanSub_y_vs_run_20_fx1045[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_20_fy1045[4] = {
   0.005704391,
   -0.1328853,
   -0.120059,
   0.2472399};
   Double_t meanSub_y_vs_run_20_fex1045[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_20_fey1045[4] = {
   0.08550499,
   0.04360762,
   0.04216111,
   0.254583};
   gre = new TGraphErrors(4,meanSub_y_vs_run_20_fx1045,meanSub_y_vs_run_20_fy1045,meanSub_y_vs_run_20_fex1045,meanSub_y_vs_run_20_fey1045);
   gre->SetName("meanSub_y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_201045 = new TH1F("Graph_meanSub_y_vs_run_201045","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_201045->SetMinimum(-0.2443246);
   Graph_meanSub_y_vs_run_201045->SetMaximum(0.5696546);
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
   
   Double_t meanSub_y_vs_run_21_fx1046[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_21_fy1046[4] = {
   -0.06813612,
   0.02178146,
   -0.1155325,
   0.1618872};
   Double_t meanSub_y_vs_run_21_fex1046[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_21_fey1046[4] = {
   0.08739233,
   0.04462437,
   0.04293585,
   0.261588};
   gre = new TGraphErrors(4,meanSub_y_vs_run_21_fx1046,meanSub_y_vs_run_21_fy1046,meanSub_y_vs_run_21_fex1046,meanSub_y_vs_run_21_fey1046);
   gre->SetName("meanSub_y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_211046 = new TH1F("Graph_meanSub_y_vs_run_211046","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_211046->SetMinimum(-0.2166627);
   Graph_meanSub_y_vs_run_211046->SetMaximum(0.4816696);
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
   
   Double_t meanSub_y_vs_run_22_fx1047[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_22_fy1047[4] = {
   0.0641959,
   0.01571129,
   0.1285964,
   -0.2085036};
   Double_t meanSub_y_vs_run_22_fex1047[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_22_fey1047[4] = {
   0.0871116,
   0.04439967,
   0.04283855,
   0.2592592};
   gre = new TGraphErrors(4,meanSub_y_vs_run_22_fx1047,meanSub_y_vs_run_22_fy1047,meanSub_y_vs_run_22_fex1047,meanSub_y_vs_run_22_fey1047);
   gre->SetName("meanSub_y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_221047 = new TH1F("Graph_meanSub_y_vs_run_221047","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_221047->SetMinimum(-0.5316826);
   Graph_meanSub_y_vs_run_221047->SetMaximum(0.2353547);
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
   
   Double_t meanSub_y_vs_run_23_fx1048[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_23_fy1048[4] = {
   0.07456608,
   0.008189471,
   0.07945695,
   -0.1622125};
   Double_t meanSub_y_vs_run_23_fex1048[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_23_fey1048[4] = {
   0.08637053,
   0.04400442,
   0.04250358,
   0.2570242};
   gre = new TGraphErrors(4,meanSub_y_vs_run_23_fx1048,meanSub_y_vs_run_23_fy1048,meanSub_y_vs_run_23_fex1048,meanSub_y_vs_run_23_fey1048);
   gre->SetName("meanSub_y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_231048 = new TH1F("Graph_meanSub_y_vs_run_231048","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_231048->SetMinimum(-0.4772541);
   Graph_meanSub_y_vs_run_231048->SetMaximum(0.2189539);
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
   
   Double_t meanSub_y_vs_run_24_fx1049[4] = {
   46130,
   46131,
   46132,
   46133};
   Double_t meanSub_y_vs_run_24_fy1049[4] = {
   0.006371418,
   -0.07909832,
   -0.07216666,
   0.1448936};
   Double_t meanSub_y_vs_run_24_fex1049[4] = {
   0,
   0,
   0,
   0};
   Double_t meanSub_y_vs_run_24_fey1049[4] = {
   0.08550858,
   0.04338638,
   0.0417972,
   0.2524475};
   gre = new TGraphErrors(4,meanSub_y_vs_run_24_fx1049,meanSub_y_vs_run_24_fy1049,meanSub_y_vs_run_24_fex1049,meanSub_y_vs_run_24_fey1049);
   gre->SetName("meanSub_y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_241049 = new TH1F("Graph_meanSub_y_vs_run_241049","Graph",100,46129.7,46133.3);
   Graph_meanSub_y_vs_run_241049->SetMinimum(-0.1744673);
   Graph_meanSub_y_vs_run_241049->SetMaximum(0.4493236);
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
