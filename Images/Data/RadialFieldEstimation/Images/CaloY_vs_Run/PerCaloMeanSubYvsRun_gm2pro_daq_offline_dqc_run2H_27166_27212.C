void PerCaloMeanSubYvsRun_gm2pro_daq_offline_dqc_run2H_27166_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 26 18:37:48 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(27153.51,-3.125,27232.37,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t meanSub_y_vs_run_1_fx1026[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_1_fy1026[20] = {
   -0.05279729,
   -0.008374355,
   0.0151888,
   -0.007086183,
   -0.05162606,
   -0.006692736,
   0.01639559,
   -0.0021927,
   0.002921748,
   0.1518111,
   0.02014506,
   0.04253427,
   -0.01276952,
   0.01685936,
   -0.009662505,
   0.04174361,
   -0.1218321,
   0.003512819,
   -0.01313527,
   -0.02494362};
   Double_t meanSub_y_vs_run_1_fex1026[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_1_fey1026[20] = {
   0.03714381,
   0.02107173,
   0.02315968,
   0.02223241,
   0.02405154,
   0.02362474,
   0.02169613,
   0.02152615,
   0.02515911,
   0.09586517,
   0.02488474,
   0.03081526,
   0.02284348,
   0.02124885,
   0.02122188,
   0.02957502,
   0.1356951,
   0.1012496,
   0.02095757,
   0.02188771};
   TGraphErrors *gre = new TGraphErrors(20,meanSub_y_vs_run_1_fx1026,meanSub_y_vs_run_1_fy1026,meanSub_y_vs_run_1_fex1026,meanSub_y_vs_run_1_fey1026);
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
   
   TH1F *Graph_meanSub_y_vs_run_11026 = new TH1F("Graph_meanSub_y_vs_run_11026","",100,27161.4,27216.6);
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
   
   Double_t meanSub_y_vs_run_2_fx1027[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_2_fy1027[20] = {
   -0.1200482,
   -0.02854634,
   -0.01872169,
   -0.007786583,
   0.01918268,
   -0.01539438,
   0.02383355,
   0.01842045,
   -0.02102519,
   0.2019023,
   0.03319116,
   0.06434358,
   -0.01117117,
   -0.01980595,
   -0.02986596,
   -0.01479624,
   -0.04260494,
   -0.008744987,
   0.01615012,
   -0.03851224};
   Double_t meanSub_y_vs_run_2_fex1027[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_2_fey1027[20] = {
   0.03557932,
   0.02019388,
   0.022185,
   0.02131801,
   0.02301588,
   0.02268291,
   0.02081334,
   0.02061311,
   0.02412287,
   0.09185226,
   0.02384653,
   0.02960784,
   0.02191883,
   0.0203815,
   0.02034475,
   0.02833973,
   0.1300072,
   0.09669324,
   0.02007706,
   0.02100316};
   gre = new TGraphErrors(20,meanSub_y_vs_run_2_fx1027,meanSub_y_vs_run_2_fy1027,meanSub_y_vs_run_2_fex1027,meanSub_y_vs_run_2_fey1027);
   gre->SetName("meanSub_y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_21027 = new TH1F("Graph_meanSub_y_vs_run_21027","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_21027->SetMinimum(-0.2192489);
   Graph_meanSub_y_vs_run_21027->SetMaximum(0.3403913);
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
   
   Double_t meanSub_y_vs_run_3_fx1028[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_3_fy1028[20] = {
   -0.03409014,
   -0.02344402,
   -0.04597584,
   -0.01937111,
   0.0237382,
   -0.05165055,
   -0.02876103,
   -0.03360479,
   0.01581498,
   0.04788684,
   -0.003425054,
   0.03413749,
   0.01355846,
   0.05697894,
   -0.01175031,
   -0.02296655,
   0.003069302,
   0.0508693,
   0.02533989,
   0.003645979};
   Double_t meanSub_y_vs_run_3_fex1028[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_3_fey1028[20] = {
   0.03630411,
   0.02065474,
   0.02267157,
   0.02178264,
   0.0235329,
   0.02316094,
   0.02124889,
   0.02106118,
   0.02463085,
   0.09398264,
   0.02431567,
   0.03018436,
   0.02237039,
   0.02080497,
   0.02078502,
   0.02900011,
   0.1326761,
   0.09890196,
   0.02050206,
   0.02144198};
   gre = new TGraphErrors(20,meanSub_y_vs_run_3_fx1028,meanSub_y_vs_run_3_fy1028,meanSub_y_vs_run_3_fex1028,meanSub_y_vs_run_3_fey1028);
   gre->SetName("meanSub_y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_31028 = new TH1F("Graph_meanSub_y_vs_run_31028","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_31028->SetMinimum(-0.1575446);
   Graph_meanSub_y_vs_run_31028->SetMaximum(0.1777091);
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
   
   Double_t meanSub_y_vs_run_4_fx1029[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_4_fy1029[20] = {
   -0.0100263,
   -0.04617583,
   -0.06876785,
   0.006457193,
   -0.0177782,
   0.02944712,
   -0.008480549,
   -0.001835508,
   -0.003687784,
   0.1184901,
   -0.01317261,
   0.002845798,
   -0.01711309,
   0.002548728,
   0.04030514,
   0.0008565498,
   -0.1059057,
   0.1192685,
   -0.01287624,
   -0.01439943};
   Double_t meanSub_y_vs_run_4_fex1029[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_4_fey1029[20] = {
   0.03638069,
   0.02064421,
   0.02268839,
   0.02177662,
   0.02353452,
   0.02319326,
   0.02126321,
   0.02109003,
   0.02463911,
   0.09327381,
   0.0243817,
   0.03018961,
   0.02240979,
   0.02079949,
   0.02077541,
   0.02899198,
   0.1328052,
   0.09883481,
   0.0205328,
   0.02143941};
   gre = new TGraphErrors(20,meanSub_y_vs_run_4_fx1029,meanSub_y_vs_run_4_fy1029,meanSub_y_vs_run_4_fex1029,meanSub_y_vs_run_4_fey1029);
   gre->SetName("meanSub_y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_41029 = new TH1F("Graph_meanSub_y_vs_run_41029","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_41029->SetMinimum(-0.2843923);
   Graph_meanSub_y_vs_run_41029->SetMaximum(0.2637847);
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
   
   Double_t meanSub_y_vs_run_5_fx1030[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_5_fy1030[20] = {
   -0.03193489,
   -0.04486669,
   -0.039647,
   0.01326585,
   0.005976483,
   0.02165144,
   0.001419345,
   0.032265,
   0.01590895,
   -0.05758291,
   0.02474026,
   -0.00519413,
   0.05016587,
   0.01499006,
   0.02455454,
   0.02981918,
   -0.04260578,
   -0.04296174,
   0.03087365,
   -0.0008374818};
   Double_t meanSub_y_vs_run_5_fex1030[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_5_fey1030[20] = {
   0.03531745,
   0.0200898,
   0.02206655,
   0.02118066,
   0.02288091,
   0.02253281,
   0.02065849,
   0.02050367,
   0.02395869,
   0.09104272,
   0.02368443,
   0.02936614,
   0.0217722,
   0.02026062,
   0.02023132,
   0.02824192,
   0.129195,
   0.09622983,
   0.01998446,
   0.02087622};
   gre = new TGraphErrors(20,meanSub_y_vs_run_5_fx1030,meanSub_y_vs_run_5_fy1030,meanSub_y_vs_run_5_fex1030,meanSub_y_vs_run_5_fey1030);
   gre->SetName("meanSub_y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_51030 = new TH1F("Graph_meanSub_y_vs_run_51030","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_51030->SetMinimum(-0.1976398);
   Graph_meanSub_y_vs_run_51030->SetMaximum(0.1124282);
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
   
   Double_t meanSub_y_vs_run_6_fx1031[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_6_fy1031[20] = {
   -0.03455802,
   0.004235109,
   -0.02247616,
   -0.03039034,
   -0.008828239,
   -0.03863448,
   -0.008258078,
   0.01282024,
   -0.004825961,
   0.04558515,
   0.02141681,
   0.02233363,
   0.02455133,
   0.01207344,
   -0.02886634,
   0.02523337,
   0.06811197,
   -0.00841462,
   -0.005850001,
   -0.0452588};
   Double_t meanSub_y_vs_run_6_fex1031[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_6_fey1031[20] = {
   0.03600378,
   0.02046225,
   0.02247096,
   0.02156643,
   0.02329986,
   0.02293873,
   0.02106901,
   0.02089741,
   0.02440484,
   0.09288535,
   0.02412341,
   0.02993019,
   0.02218455,
   0.02061602,
   0.02061097,
   0.02873772,
   0.1325118,
   0.09820187,
   0.02033863,
   0.02126569};
   gre = new TGraphErrors(20,meanSub_y_vs_run_6_fx1031,meanSub_y_vs_run_6_fy1031,meanSub_y_vs_run_6_fex1031,meanSub_y_vs_run_6_fey1031);
   gre->SetName("meanSub_y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_61031 = new TH1F("Graph_meanSub_y_vs_run_61031","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_61031->SetMinimum(-0.1373405);
   Graph_meanSub_y_vs_run_61031->SetMaximum(0.2313478);
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
   
   Double_t meanSub_y_vs_run_7_fx1032[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_7_fy1032[20] = {
   -0.02000701,
   -0.006909247,
   0.01260928,
   0.01837384,
   0.03952381,
   0.007882511,
   0.01296653,
   0.02402679,
   0.02855262,
   -0.07930081,
   0.07394171,
   0.006820939,
   -0.004681774,
   0.02755765,
   -0.003364924,
   0.01430203,
   -0.1646616,
   -0.005703541,
   0.005761297,
   0.01230991};
   Double_t meanSub_y_vs_run_7_fex1032[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_7_fey1032[20] = {
   0.03585159,
   0.02036162,
   0.02238306,
   0.02146652,
   0.0231889,
   0.02286302,
   0.02099991,
   0.02080331,
   0.02433946,
   0.09232506,
   0.02402448,
   0.02983754,
   0.02211139,
   0.02054344,
   0.02050991,
   0.02862624,
   0.1306091,
   0.09749385,
   0.02026674,
   0.02116814};
   gre = new TGraphErrors(20,meanSub_y_vs_run_7_fx1032,meanSub_y_vs_run_7_fy1032,meanSub_y_vs_run_7_fex1032,meanSub_y_vs_run_7_fey1032);
   gre->SetName("meanSub_y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_71032 = new TH1F("Graph_meanSub_y_vs_run_71032","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_71032->SetMinimum(-0.3345944);
   Graph_meanSub_y_vs_run_71032->SetMaximum(0.1372899);
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
   
   Double_t meanSub_y_vs_run_8_fx1033[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_8_fy1033[20] = {
   -0.06432501,
   -0.01209328,
   -0.01392617,
   -0.00544273,
   -0.02745081,
   0.001262198,
   0.01512801,
   -0.03757576,
   0.02502782,
   0.04652927,
   -0.01203568,
   0.0282549,
   0.01362369,
   0.01858656,
   0.02612412,
   -0.0002404068,
   -0.1615336,
   0.1783943,
   -0.0237401,
   0.005432733};
   Double_t meanSub_y_vs_run_8_fex1033[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_8_fey1033[20] = {
   0.03586757,
   0.02036379,
   0.02237173,
   0.02146497,
   0.02321102,
   0.02285515,
   0.02095612,
   0.02078584,
   0.02430463,
   0.09184048,
   0.02400082,
   0.02975842,
   0.02209822,
   0.02053917,
   0.02051599,
   0.02863284,
   0.1304571,
   0.09799132,
   0.02026589,
   0.02118623};
   gre = new TGraphErrors(20,meanSub_y_vs_run_8_fx1033,meanSub_y_vs_run_8_fy1033,meanSub_y_vs_run_8_fex1033,meanSub_y_vs_run_8_fey1033);
   gre->SetName("meanSub_y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_81033 = new TH1F("Graph_meanSub_y_vs_run_81033","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_81033->SetMinimum(-0.3488284);
   Graph_meanSub_y_vs_run_81033->SetMaximum(0.3332232);
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
   
   Double_t meanSub_y_vs_run_9_fx1034[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_9_fy1034[20] = {
   -0.1449796,
   -0.02119465,
   -0.06683723,
   -0.02699748,
   -0.007217645,
   -0.03473498,
   -0.02185352,
   -0.02401117,
   -0.007466782,
   0.1041003,
   0.04669142,
   -0.002726814,
   -0.005371007,
   0.01958696,
   0.03084706,
   0.01114723,
   0.06693579,
   0.1236474,
   -0.04231048,
   0.002745142};
   Double_t meanSub_y_vs_run_9_fex1034[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_9_fey1034[20] = {
   0.0380455,
   0.02159754,
   0.02372276,
   0.02277216,
   0.02459594,
   0.02424268,
   0.02222512,
   0.02204615,
   0.02577762,
   0.09803094,
   0.02545893,
   0.03160649,
   0.02346867,
   0.02180601,
   0.0217945,
   0.03038181,
   0.1392813,
   0.1040388,
   0.02150443,
   0.02248821};
   gre = new TGraphErrors(20,meanSub_y_vs_run_9_fx1034,meanSub_y_vs_run_9_fy1034,meanSub_y_vs_run_9_fex1034,meanSub_y_vs_run_9_fey1034);
   gre->SetName("meanSub_y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_91034 = new TH1F("Graph_meanSub_y_vs_run_91034","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_91034->SetMinimum(-0.2240962);
   Graph_meanSub_y_vs_run_91034->SetMaximum(0.2687574);
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
   
   Double_t meanSub_y_vs_run_10_fx1035[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_10_fy1035[20] = {
   -0.03980008,
   -0.04723367,
   0.0228806,
   -0.03980171,
   0.0241016,
   0.0494402,
   -0.002615783,
   -0.0166131,
   0.01746905,
   0.05906119,
   0.01556446,
   0.01754498,
   0.01233701,
   0.05264595,
   0.008395446,
   -0.04325699,
   0.01790476,
   -0.1039012,
   -0.0301508,
   0.02602803};
   Double_t meanSub_y_vs_run_10_fex1035[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_10_fey1035[20] = {
   0.03553401,
   0.02020507,
   0.02218669,
   0.02129777,
   0.02304994,
   0.02271336,
   0.02079732,
   0.02062263,
   0.02412691,
   0.09168507,
   0.02380984,
   0.02955621,
   0.02192858,
   0.02038194,
   0.02035838,
   0.02844311,
   0.1301476,
   0.09691416,
   0.02010278,
   0.02100516};
   gre = new TGraphErrors(20,meanSub_y_vs_run_10_fx1035,meanSub_y_vs_run_10_fy1035,meanSub_y_vs_run_10_fex1035,meanSub_y_vs_run_10_fey1035);
   gre->SetName("meanSub_y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_101035 = new TH1F("Graph_meanSub_y_vs_run_101035","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_101035->SetMinimum(-0.2359715);
   Graph_meanSub_y_vs_run_101035->SetMaximum(0.1859024);
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
   
   Double_t meanSub_y_vs_run_11_fx1036[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_11_fy1036[20] = {
   -0.0495714,
   -0.04352868,
   -0.04491153,
   -0.005531205,
   -0.02941619,
   0.0005092111,
   0.01262597,
   0.0003961875,
   -0.03170795,
   0.1599878,
   0.00220436,
   -0.003340427,
   -0.0004020833,
   -0.03144773,
   -0.02939283,
   0.02428554,
   0.15518,
   -0.04375568,
   -0.01586216,
   -0.02632123};
   Double_t meanSub_y_vs_run_11_fex1036[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_11_fey1036[20] = {
   0.03513048,
   0.0199584,
   0.02194276,
   0.02105726,
   0.02276106,
   0.0224,
   0.02055211,
   0.020386,
   0.02384086,
   0.09028851,
   0.02352274,
   0.02921161,
   0.02163394,
   0.020126,
   0.02009439,
   0.02803092,
   0.1283007,
   0.09586579,
   0.01985117,
   0.02075781};
   gre = new TGraphErrors(20,meanSub_y_vs_run_11_fx1036,meanSub_y_vs_run_11_fy1036,meanSub_y_vs_run_11_fex1036,meanSub_y_vs_run_11_fey1036);
   gre->SetName("meanSub_y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_111036 = new TH1F("Graph_meanSub_y_vs_run_111036","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_111036->SetMinimum(-0.1819317);
   Graph_meanSub_y_vs_run_111036->SetMaximum(0.325791);
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
   
   Double_t meanSub_y_vs_run_12_fx1037[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_12_fy1037[20] = {
   0.01038739,
   0.01977333,
   -0.006243076,
   0.01256959,
   -0.04054973,
   -0.03241148,
   -0.0002643038,
   0.001106016,
   0.04462663,
   -0.04081414,
   0.04496663,
   0.01480133,
   0.04460809,
   0.004636422,
   0.01659693,
   -0.02943667,
   -0.2480317,
   0.1150261,
   0.03754002,
   0.03111258};
   Double_t meanSub_y_vs_run_12_fex1037[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_12_fey1037[20] = {
   0.03462769,
   0.01966341,
   0.02160835,
   0.02073954,
   0.02244542,
   0.02208122,
   0.02024428,
   0.02010159,
   0.0234858,
   0.08902517,
   0.02320309,
   0.02876646,
   0.02132995,
   0.01982567,
   0.01981405,
   0.02764903,
   0.1257349,
   0.09439375,
   0.01954464,
   0.02045884};
   gre = new TGraphErrors(20,meanSub_y_vs_run_12_fx1037,meanSub_y_vs_run_12_fy1037,meanSub_y_vs_run_12_fex1037,meanSub_y_vs_run_12_fey1037);
   gre->SetName("meanSub_y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_121037 = new TH1F("Graph_meanSub_y_vs_run_121037","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_121037->SetMinimum(-0.4320852);
   Graph_meanSub_y_vs_run_121037->SetMaximum(0.2677385);
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
   
   Double_t meanSub_y_vs_run_13_fx1038[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_13_fy1038[20] = {
   -0.05348478,
   -0.03321831,
   0.008765849,
   0.003351487,
   -0.02243763,
   -0.006964176,
   0.03000362,
   -0.007969464,
   0.02594591,
   -0.03686802,
   -0.01638525,
   0.05343473,
   -0.01486026,
   -0.002761907,
   0.02018453,
   -0.01472908,
   0.1211993,
   0.01002709,
   -0.01433329,
   -0.04890031};
   Double_t meanSub_y_vs_run_13_fex1038[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_13_fey1038[20] = {
   0.03250958,
   0.01841797,
   0.02022955,
   0.01941971,
   0.02100088,
   0.02068126,
   0.01898117,
   0.01881852,
   0.02201514,
   0.08350277,
   0.02173423,
   0.02695171,
   0.0200123,
   0.01856697,
   0.01853789,
   0.02589539,
   0.1177427,
   0.0885186,
   0.01831945,
   0.01914353};
   gre = new TGraphErrors(20,meanSub_y_vs_run_13_fx1038,meanSub_y_vs_run_13_fy1038,meanSub_y_vs_run_13_fex1038,meanSub_y_vs_run_13_fey1038);
   gre->SetName("meanSub_y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_131038 = new TH1F("Graph_meanSub_y_vs_run_131038","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_131038->SetMinimum(-0.1563021);
   Graph_meanSub_y_vs_run_131038->SetMaximum(0.2748732);
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
   
   Double_t meanSub_y_vs_run_14_fx1039[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_14_fy1039[20] = {
   -0.07910584,
   -0.02885501,
   0.008404394,
   0.0259982,
   -0.04062344,
   0.007864266,
   0.05173708,
   -0.002202513,
   0.006165673,
   0.04664342,
   0.008782584,
   0.01707787,
   0.002689604,
   -0.007598865,
   0.002945449,
   0.003664533,
   -0.03089161,
   -0.009423804,
   0.01301098,
   0.003717046};
   Double_t meanSub_y_vs_run_14_fex1039[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_14_fey1039[20] = {
   0.03490022,
   0.01978777,
   0.02175737,
   0.02087383,
   0.0225802,
   0.02221988,
   0.02039859,
   0.02023123,
   0.02363469,
   0.08978938,
   0.02336879,
   0.0290067,
   0.021497,
   0.01997822,
   0.01994278,
   0.02782813,
   0.1272601,
   0.09519423,
   0.01970244,
   0.02059499};
   gre = new TGraphErrors(20,meanSub_y_vs_run_14_fx1039,meanSub_y_vs_run_14_fy1039,meanSub_y_vs_run_14_fex1039,meanSub_y_vs_run_14_fey1039);
   gre->SetName("meanSub_y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_141039 = new TH1F("Graph_meanSub_y_vs_run_141039","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_141039->SetMinimum(-0.1876102);
   Graph_meanSub_y_vs_run_141039->SetMaximum(0.1658912);
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
   
   Double_t meanSub_y_vs_run_15_fx1040[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_15_fy1040[20] = {
   -0.08815824,
   -0.03728902,
   -0.01331415,
   -0.01227962,
   -0.02340127,
   0.002711338,
   -0.03265122,
   0.02286958,
   -0.01751073,
   -0.02990684,
   0.03728883,
   0.07446631,
   0.01849476,
   -0.02858489,
   -0.01507593,
   0.004500761,
   0.05851766,
   0.06042925,
   0.01949954,
   -0.0006061145};
   Double_t meanSub_y_vs_run_15_fex1040[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_15_fey1040[20] = {
   0.03489863,
   0.01976403,
   0.02173822,
   0.02085593,
   0.02255946,
   0.02222854,
   0.02036953,
   0.02020101,
   0.02360545,
   0.08949864,
   0.02334441,
   0.02889826,
   0.02146663,
   0.01994812,
   0.01992221,
   0.0278042,
   0.1273459,
   0.09531588,
   0.01968144,
   0.02056035};
   gre = new TGraphErrors(20,meanSub_y_vs_run_15_fx1040,meanSub_y_vs_run_15_fy1040,meanSub_y_vs_run_15_fex1040,meanSub_y_vs_run_15_fey1040);
   gre->SetName("meanSub_y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_151040 = new TH1F("Graph_meanSub_y_vs_run_151040","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_151040->SetMinimum(-0.1539489);
   Graph_meanSub_y_vs_run_151040->SetMaximum(0.2167556);
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
   
   Double_t meanSub_y_vs_run_16_fx1041[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_16_fy1041[20] = {
   -0.09415609,
   -0.04558673,
   -0.01273625,
   0.007846498,
   0.02532434,
   0.07847526,
   0.0036631,
   0.002459054,
   0.007385947,
   0.008950259,
   -0.005999101,
   0.04068484,
   0.001017703,
   -0.02315993,
   -0.001407065,
   -0.05557108,
   -0.07162793,
   0.1415083,
   -0.003733074,
   -0.003337995};
   Double_t meanSub_y_vs_run_16_fex1041[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_16_fey1041[20] = {
   0.03560984,
   0.02021634,
   0.02222357,
   0.02129952,
   0.0230618,
   0.02270057,
   0.02082669,
   0.02063627,
   0.02415181,
   0.09159428,
   0.02386892,
   0.0295998,
   0.0219193,
   0.02038889,
   0.02036738,
   0.02839084,
   0.1299346,
   0.09746341,
   0.02010198,
   0.02101164};
   gre = new TGraphErrors(20,meanSub_y_vs_run_16_fx1041,meanSub_y_vs_run_16_fy1041,meanSub_y_vs_run_16_fex1041,meanSub_y_vs_run_16_fey1041);
   gre->SetName("meanSub_y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_161041 = new TH1F("Graph_meanSub_y_vs_run_161041","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_161041->SetMinimum(-0.2456159);
   Graph_meanSub_y_vs_run_161041->SetMaximum(0.2830251);
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
   
   Double_t meanSub_y_vs_run_17_fx1042[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_17_fy1042[20] = {
   -0.0707545,
   -0.0585734,
   0.01618966,
   -0.0434581,
   -0.006642308,
   -0.00592528,
   -0.002903973,
   0.01677125,
   -0.01521336,
   0.07153919,
   0.04173154,
   7.800866e-05,
   0.02013687,
   -0.04244334,
   0.004231096,
   0.02937694,
   -0.05668455,
   0.1393096,
   -0.03175016,
   -0.005015177};
   Double_t meanSub_y_vs_run_17_fex1042[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_17_fey1042[20] = {
   0.03530537,
   0.0200456,
   0.02201018,
   0.02114038,
   0.02282947,
   0.02248572,
   0.02063226,
   0.02047412,
   0.0239098,
   0.09071861,
   0.0236607,
   0.02929667,
   0.02173956,
   0.02020662,
   0.02019247,
   0.02817032,
   0.1282887,
   0.09604038,
   0.019926,
   0.02084261};
   gre = new TGraphErrors(20,meanSub_y_vs_run_17_fx1042,meanSub_y_vs_run_17_fy1042,meanSub_y_vs_run_17_fex1042,meanSub_y_vs_run_17_fey1042);
   gre->SetName("meanSub_y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_171042 = new TH1F("Graph_meanSub_y_vs_run_171042","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_171042->SetMinimum(-0.2270056);
   Graph_meanSub_y_vs_run_171042->SetMaximum(0.2773823);
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
   
   Double_t meanSub_y_vs_run_18_fx1043[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_18_fy1043[20] = {
   -0.03338587,
   -0.02693767,
   0.01465675,
   -0.05270218,
   0.004255942,
   -0.02487599,
   -0.02690096,
   0.001916264,
   0.01145671,
   -0.1127105,
   0.04107342,
   0.04405269,
   0.05743519,
   0.0199875,
   -0.01257133,
   -0.0136392,
   0.05840525,
   0.03612894,
   -0.0174584,
   0.03181345};
   Double_t meanSub_y_vs_run_18_fex1043[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_18_fey1043[20] = {
   0.0344601,
   0.01952904,
   0.0214574,
   0.02060385,
   0.0222625,
   0.02191319,
   0.02013123,
   0.01994802,
   0.02332492,
   0.08846976,
   0.02304616,
   0.02858078,
   0.02120716,
   0.01968799,
   0.01965232,
   0.02741452,
   0.1243392,
   0.09350505,
   0.01941062,
   0.02029101};
   gre = new TGraphErrors(20,meanSub_y_vs_run_18_fx1043,meanSub_y_vs_run_18_fy1043,meanSub_y_vs_run_18_fex1043,meanSub_y_vs_run_18_fey1043);
   gre->SetName("meanSub_y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_181043 = new TH1F("Graph_meanSub_y_vs_run_181043","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_181043->SetMinimum(-0.2395727);
   Graph_meanSub_y_vs_run_181043->SetMaximum(0.2211369);
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
   
   Double_t meanSub_y_vs_run_19_fx1044[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_19_fy1044[20] = {
   -0.01289966,
   -0.0449841,
   -0.06388037,
   0.001604824,
   0.04019966,
   0.01313755,
   -0.02273696,
   0.002447742,
   -0.03022479,
   0.05039611,
   0.005142515,
   0.003009149,
   0.002106225,
   0.003200719,
   -0.02115592,
   -0.0004674832,
   -0.04054336,
   0.1272584,
   -0.008129327,
   -0.003480949};
   Double_t meanSub_y_vs_run_19_fex1044[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_19_fey1044[20] = {
   0.03311966,
   0.01879996,
   0.02066546,
   0.01983649,
   0.0214564,
   0.02110748,
   0.0193499,
   0.01920818,
   0.02245527,
   0.08516564,
   0.02218061,
   0.02750384,
   0.02042184,
   0.0189652,
   0.01894124,
   0.02639316,
   0.1207166,
   0.09021122,
   0.01869208,
   0.0195542};
   gre = new TGraphErrors(20,meanSub_y_vs_run_19_fx1044,meanSub_y_vs_run_19_fy1044,meanSub_y_vs_run_19_fex1044,meanSub_y_vs_run_19_fey1044);
   gre->SetName("meanSub_y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_191044 = new TH1F("Graph_meanSub_y_vs_run_191044","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_191044->SetMinimum(-0.1991329);
   Graph_meanSub_y_vs_run_191044->SetMaximum(0.2553426);
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
   
   Double_t meanSub_y_vs_run_20_fx1045[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_20_fy1045[20] = {
   -0.04876595,
   -0.03913753,
   0.01221903,
   -0.009757328,
   -0.0444818,
   0.006140705,
   -0.007787664,
   -0.01190661,
   0.02830137,
   0.09032637,
   0.01751523,
   0.01529171,
   -0.002249387,
   -0.002450397,
   0.01912539,
   -0.007273506,
   -0.1336847,
   0.08564913,
   0.00782146,
   0.02510447};
   Double_t meanSub_y_vs_run_20_fex1045[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_20_fey1045[20] = {
   0.03524011,
   0.02000828,
   0.02200497,
   0.02111895,
   0.02284405,
   0.02247177,
   0.0206133,
   0.02046415,
   0.02387546,
   0.09088857,
   0.0235953,
   0.02927026,
   0.02172194,
   0.02018916,
   0.02015874,
   0.0281388,
   0.1289375,
   0.09583564,
   0.01989599,
   0.02079313};
   gre = new TGraphErrors(20,meanSub_y_vs_run_20_fx1045,meanSub_y_vs_run_20_fy1045,meanSub_y_vs_run_20_fex1045,meanSub_y_vs_run_20_fey1045);
   gre->SetName("meanSub_y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_201045 = new TH1F("Graph_meanSub_y_vs_run_201045","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_201045->SetMinimum(-0.3070329);
   Graph_meanSub_y_vs_run_201045->SetMaximum(0.2258955);
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
   
   Double_t meanSub_y_vs_run_21_fx1046[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_21_fy1046[20] = {
   -0.052952,
   -0.02140357,
   -0.04822659,
   -0.06178692,
   -0.01720978,
   0.002928023,
   -0.01083706,
   -0.02862906,
   0.0449356,
   0.01517687,
   -0.01963503,
   -0.006800348,
   0.01898873,
   0.004673151,
   -0.01741767,
   -0.0102672,
   0.1554591,
   0.04675525,
   0.01791691,
   -0.01166844};
   Double_t meanSub_y_vs_run_21_fex1046[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_21_fey1046[20] = {
   0.03624406,
   0.02056504,
   0.02261559,
   0.02168622,
   0.02345462,
   0.02309979,
   0.0211677,
   0.02101201,
   0.02455953,
   0.09336233,
   0.02426557,
   0.0301197,
   0.02232558,
   0.02074895,
   0.0207214,
   0.02893426,
   0.1317215,
   0.09885175,
   0.0204571,
   0.02137835};
   gre = new TGraphErrors(20,meanSub_y_vs_run_21_fx1046,meanSub_y_vs_run_21_fy1046,meanSub_y_vs_run_21_fex1046,meanSub_y_vs_run_21_fey1046);
   gre->SetName("meanSub_y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_211046 = new TH1F("Graph_meanSub_y_vs_run_211046","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_211046->SetMinimum(-0.1268337);
   Graph_meanSub_y_vs_run_211046->SetMaximum(0.3248183);
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
   
   Double_t meanSub_y_vs_run_22_fx1047[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_22_fy1047[20] = {
   -0.04024417,
   -0.01595467,
   -0.05224793,
   -0.02330063,
   -0.02349094,
   0.0461176,
   0.01642991,
   -0.04074415,
   9.980729e-05,
   -0.02071486,
   0.01702408,
   0.04516055,
   0.009813825,
   0.04696512,
   0.05476829,
   0.005195862,
   0.05478498,
   -0.1114259,
   0.004071164,
   0.02769202};
   Double_t meanSub_y_vs_run_22_fex1047[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_22_fey1047[20] = {
   0.03742006,
   0.02126929,
   0.02334577,
   0.0224194,
   0.0242231,
   0.02387303,
   0.02187807,
   0.02170689,
   0.02539789,
   0.09672586,
   0.02505898,
   0.03105322,
   0.02306395,
   0.02144552,
   0.02141216,
   0.02992078,
   0.1366999,
   0.1026614,
   0.02114968,
   0.02211183};
   gre = new TGraphErrors(20,meanSub_y_vs_run_22_fx1047,meanSub_y_vs_run_22_fy1047,meanSub_y_vs_run_22_fex1047,meanSub_y_vs_run_22_fey1047);
   gre->SetName("meanSub_y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_221047 = new TH1F("Graph_meanSub_y_vs_run_221047","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_221047->SetMinimum(-0.2546444);
   Graph_meanSub_y_vs_run_221047->SetMaximum(0.232042);
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
   
   Double_t meanSub_y_vs_run_23_fx1048[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_23_fy1048[20] = {
   -0.09523089,
   -0.01528253,
   0.02578538,
   -0.03309624,
   -0.03814247,
   0.007780105,
   0.02119686,
   0.03014338,
   0.0310288,
   0.02727851,
   0.02482895,
   0.01474062,
   -0.0007212554,
   -0.02669876,
   0.005241701,
   0.01243166,
   0.008548234,
   -0.01356554,
   0.01860661,
   -0.004873129};
   Double_t meanSub_y_vs_run_23_fex1048[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_23_fey1048[20] = {
   0.03550268,
   0.02011922,
   0.02213419,
   0.02121909,
   0.02296816,
   0.02261288,
   0.02074641,
   0.02054791,
   0.02404363,
   0.09109131,
   0.02375573,
   0.02940796,
   0.0218613,
   0.02031405,
   0.02028026,
   0.0282802,
   0.1292445,
   0.09695236,
   0.02002783,
   0.02090829};
   gre = new TGraphErrors(20,meanSub_y_vs_run_23_fx1048,meanSub_y_vs_run_23_fy1048,meanSub_y_vs_run_23_fex1048,meanSub_y_vs_run_23_fey1048);
   gre->SetName("meanSub_y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_231048 = new TH1F("Graph_meanSub_y_vs_run_231048","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_231048->SetMinimum(-0.1575862);
   Graph_meanSub_y_vs_run_231048->SetMaximum(0.1646454);
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
   
   Double_t meanSub_y_vs_run_24_fx1049[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t meanSub_y_vs_run_24_fy1049[20] = {
   -0.05074583,
   -5.540256e-05,
   0.01455135,
   -0.01780464,
   -0.02765876,
   0.01408509,
   0.01166124,
   -0.001715206,
   0.02063062,
   0.07971127,
   0.02516853,
   -0.0008282113,
   0.02685575,
   0.03166668,
   0.01395367,
   0.03851229,
   -0.123611,
   -0.028622,
   -0.0001366005,
   -0.02561889};
   Double_t meanSub_y_vs_run_24_fex1049[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_24_fey1049[20] = {
   0.03486255,
   0.01977046,
   0.02173411,
   0.0208659,
   0.02259449,
   0.02220473,
   0.0203647,
   0.02019969,
   0.02363807,
   0.0895216,
   0.02333493,
   0.02893852,
   0.02146784,
   0.0199673,
   0.01992839,
   0.02779738,
   0.1264232,
   0.09488913,
   0.01966757,
   0.02055486};
   gre = new TGraphErrors(20,meanSub_y_vs_run_24_fx1049,meanSub_y_vs_run_24_fy1049,meanSub_y_vs_run_24_fex1049,meanSub_y_vs_run_24_fey1049);
   gre->SetName("meanSub_y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_241049 = new TH1F("Graph_meanSub_y_vs_run_241049","Graph",100,27161.4,27216.6);
   Graph_meanSub_y_vs_run_241049->SetMinimum(-0.2919609);
   Graph_meanSub_y_vs_run_241049->SetMaximum(0.2111596);
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
