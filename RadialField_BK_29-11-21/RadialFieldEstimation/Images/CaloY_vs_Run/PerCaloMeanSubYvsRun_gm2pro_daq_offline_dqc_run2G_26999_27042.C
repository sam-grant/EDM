void PerCaloMeanSubYvsRun_gm2pro_daq_offline_dqc_run2G_26999_27042()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 26 18:37:43 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(26987.33,-3.125,27061.04,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t meanSub_y_vs_run_1_fx1026[10] = {
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
   Double_t meanSub_y_vs_run_1_fy1026[10] = {
   0.1595598,
   0.03550004,
   -0.01915367,
   0.009346092,
   -0.006168556,
   0.008300366,
   -0.0233165,
   -0.04998836,
   -0.04548963,
   -0.06858959};
   Double_t meanSub_y_vs_run_1_fex1026[10] = {
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
   Double_t meanSub_y_vs_run_1_fey1026[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,meanSub_y_vs_run_1_fx1026,meanSub_y_vs_run_1_fy1026,meanSub_y_vs_run_1_fex1026,meanSub_y_vs_run_1_fey1026);
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
   
   TH1F *Graph_meanSub_y_vs_run_11026 = new TH1F("Graph_meanSub_y_vs_run_11026","",100,26994.7,27046.3);
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
   
   Double_t meanSub_y_vs_run_2_fx1027[10] = {
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
   Double_t meanSub_y_vs_run_2_fy1027[10] = {
   0.2909293,
   0.01210101,
   -0.02696734,
   -0.03066905,
   0.01282817,
   -0.01884818,
   0.02458933,
   -0.04473832,
   -0.1043573,
   -0.1148676};
   Double_t meanSub_y_vs_run_2_fex1027[10] = {
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
   Double_t meanSub_y_vs_run_2_fey1027[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_2_fx1027,meanSub_y_vs_run_2_fy1027,meanSub_y_vs_run_2_fex1027,meanSub_y_vs_run_2_fey1027);
   gre->SetName("meanSub_y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_21027 = new TH1F("Graph_meanSub_y_vs_run_21027","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_21027->SetMinimum(-0.1993899);
   Graph_meanSub_y_vs_run_21027->SetMaximum(0.5091685);
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
   
   Double_t meanSub_y_vs_run_3_fx1028[10] = {
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
   Double_t meanSub_y_vs_run_3_fy1028[10] = {
   0.1327852,
   0.07608737,
   0.02887132,
   -0.03828301,
   -0.05812815,
   -0.06132498,
   0.03932019,
   -0.04467111,
   -0.007588149,
   -0.06706874};
   Double_t meanSub_y_vs_run_3_fex1028[10] = {
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
   Double_t meanSub_y_vs_run_3_fey1028[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_3_fx1028,meanSub_y_vs_run_3_fy1028,meanSub_y_vs_run_3_fex1028,meanSub_y_vs_run_3_fey1028);
   gre->SetName("meanSub_y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_31028 = new TH1F("Graph_meanSub_y_vs_run_31028","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_31028->SetMinimum(-0.141901);
   Graph_meanSub_y_vs_run_31028->SetMaximum(0.336585);
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
   
   Double_t meanSub_y_vs_run_4_fx1029[10] = {
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
   Double_t meanSub_y_vs_run_4_fy1029[10] = {
   -0.03124329,
   0.05930032,
   0.05338412,
   0.01138138,
   0.01561397,
   0.04466317,
   -0.0293135,
   -0.004786046,
   -0.01876497,
   -0.1002351};
   Double_t meanSub_y_vs_run_4_fex1029[10] = {
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
   Double_t meanSub_y_vs_run_4_fey1029[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_4_fx1029,meanSub_y_vs_run_4_fy1029,meanSub_y_vs_run_4_fex1029,meanSub_y_vs_run_4_fey1029);
   gre->SetName("meanSub_y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_41029 = new TH1F("Graph_meanSub_y_vs_run_41029","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_41029->SetMinimum(-0.2274405);
   Graph_meanSub_y_vs_run_41029->SetMaximum(0.164954);
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
   
   Double_t meanSub_y_vs_run_5_fx1030[10] = {
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
   Double_t meanSub_y_vs_run_5_fy1030[10] = {
   0.1670578,
   0.03283526,
   0.01327602,
   -0.01478122,
   -0.01064834,
   -0.05914579,
   -0.01016051,
   -0.008649185,
   -0.06775995,
   -0.04202412};
   Double_t meanSub_y_vs_run_5_fex1030[10] = {
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
   Double_t meanSub_y_vs_run_5_fey1030[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_5_fx1030,meanSub_y_vs_run_5_fy1030,meanSub_y_vs_run_5_fex1030,meanSub_y_vs_run_5_fey1030);
   gre->SetName("meanSub_y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_51030 = new TH1F("Graph_meanSub_y_vs_run_51030","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_51030->SetMinimum(-0.1325704);
   Graph_meanSub_y_vs_run_51030->SetMaximum(0.3664521);
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
   
   Double_t meanSub_y_vs_run_6_fx1031[10] = {
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
   Double_t meanSub_y_vs_run_6_fy1031[10] = {
   -0.01756451,
   0.03544099,
   0.01819758,
   -0.03111487,
   0.04395552,
   0.01698429,
   0.07827297,
   -0.09104068,
   -0.04283338,
   -0.01029793};
   Double_t meanSub_y_vs_run_6_fex1031[10] = {
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
   Double_t meanSub_y_vs_run_6_fey1031[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_6_fx1031,meanSub_y_vs_run_6_fy1031,meanSub_y_vs_run_6_fex1031,meanSub_y_vs_run_6_fey1031);
   gre->SetName("meanSub_y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_61031 = new TH1F("Graph_meanSub_y_vs_run_61031","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_61031->SetMinimum(-0.2116053);
   Graph_meanSub_y_vs_run_61031->SetMaximum(0.1764763);
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
   
   Double_t meanSub_y_vs_run_7_fx1032[10] = {
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
   Double_t meanSub_y_vs_run_7_fy1032[10] = {
   0.1691102,
   0.01362966,
   0.02417563,
   -0.03970989,
   -0.007474049,
   -0.03908331,
   0.03150065,
   -0.03028208,
   -0.04474082,
   -0.07712602};
   Double_t meanSub_y_vs_run_7_fex1032[10] = {
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
   Double_t meanSub_y_vs_run_7_fey1032[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_7_fx1032,meanSub_y_vs_run_7_fy1032,meanSub_y_vs_run_7_fex1032,meanSub_y_vs_run_7_fey1032);
   gre->SetName("meanSub_y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_71032 = new TH1F("Graph_meanSub_y_vs_run_71032","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_71032->SetMinimum(-0.1459447);
   Graph_meanSub_y_vs_run_71032->SetMaximum(0.3721376);
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
   
   Double_t meanSub_y_vs_run_8_fx1033[10] = {
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
   Double_t meanSub_y_vs_run_8_fy1033[10] = {
   0.3355829,
   0.007753526,
   -0.036212,
   -0.0732314,
   -0.04328543,
   0.001453834,
   -0.03115962,
   0.004903721,
   -0.1057297,
   -0.06007581};
   Double_t meanSub_y_vs_run_8_fex1033[10] = {
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
   Double_t meanSub_y_vs_run_8_fey1033[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_8_fx1033,meanSub_y_vs_run_8_fy1033,meanSub_y_vs_run_8_fex1033,meanSub_y_vs_run_8_fey1033);
   gre->SetName("meanSub_y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_81033 = new TH1F("Graph_meanSub_y_vs_run_81033","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_81033->SetMinimum(-0.1895095);
   Graph_meanSub_y_vs_run_81033->SetMaximum(0.5579143);
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
   
   Double_t meanSub_y_vs_run_9_fx1034[10] = {
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
   Double_t meanSub_y_vs_run_9_fy1034[10] = {
   -0.01406555,
   0.05522595,
   0.0558227,
   0.01303082,
   0.06063979,
   -0.03271787,
   0.02293485,
   -0.04709016,
   -0.06656325,
   -0.04721727};
   Double_t meanSub_y_vs_run_9_fex1034[10] = {
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
   Double_t meanSub_y_vs_run_9_fey1034[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_9_fx1034,meanSub_y_vs_run_9_fy1034,meanSub_y_vs_run_9_fex1034,meanSub_y_vs_run_9_fey1034);
   gre->SetName("meanSub_y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_91034 = new TH1F("Graph_meanSub_y_vs_run_91034","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_91034->SetMinimum(-0.2182388);
   Graph_meanSub_y_vs_run_91034->SetMaximum(0.1901077);
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
   
   Double_t meanSub_y_vs_run_10_fx1035[10] = {
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
   Double_t meanSub_y_vs_run_10_fy1035[10] = {
   0.09890122,
   0.02571728,
   0.01286611,
   -0.008294115,
   0.026439,
   -0.03001751,
   -0.04132671,
   0.0002265757,
   -0.05787279,
   -0.02663906};
   Double_t meanSub_y_vs_run_10_fex1035[10] = {
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
   Double_t meanSub_y_vs_run_10_fey1035[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_10_fx1035,meanSub_y_vs_run_10_fy1035,meanSub_y_vs_run_10_fex1035,meanSub_y_vs_run_10_fey1035);
   gre->SetName("meanSub_y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_101035 = new TH1F("Graph_meanSub_y_vs_run_101035","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_101035->SetMinimum(-0.1128884);
   Graph_meanSub_y_vs_run_101035->SetMaximum(0.2914129);
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
   
   Double_t meanSub_y_vs_run_11_fx1036[10] = {
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
   Double_t meanSub_y_vs_run_11_fy1036[10] = {
   0.2077438,
   0.02351672,
   -0.03009155,
   -0.03023266,
   -0.03591709,
   -0.0438354,
   -0.06279115,
   0.01550373,
   -0.008163157,
   -0.03573322};
   Double_t meanSub_y_vs_run_11_fex1036[10] = {
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
   Double_t meanSub_y_vs_run_11_fey1036[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_11_fx1036,meanSub_y_vs_run_11_fy1036,meanSub_y_vs_run_11_fex1036,meanSub_y_vs_run_11_fey1036);
   gre->SetName("meanSub_y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_111036 = new TH1F("Graph_meanSub_y_vs_run_111036","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_111036->SetMinimum(-0.1311542);
   Graph_meanSub_y_vs_run_111036->SetMaximum(0.4099035);
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
   
   Double_t meanSub_y_vs_run_12_fx1037[10] = {
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
   Double_t meanSub_y_vs_run_12_fy1037[10] = {
   -0.107954,
   0.02525931,
   0.04657917,
   -0.00918395,
   0.08560251,
   0.02278601,
   0.04610589,
   -0.03662248,
   -0.03186206,
   -0.04071042};
   Double_t meanSub_y_vs_run_12_fex1037[10] = {
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
   Double_t meanSub_y_vs_run_12_fey1037[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_12_fx1037,meanSub_y_vs_run_12_fy1037,meanSub_y_vs_run_12_fex1037,meanSub_y_vs_run_12_fey1037);
   gre->SetName("meanSub_y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_121037 = new TH1F("Graph_meanSub_y_vs_run_121037","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_121037->SetMinimum(-0.3017706);
   Graph_meanSub_y_vs_run_121037->SetMaximum(0.1664208);
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
   
   Double_t meanSub_y_vs_run_13_fx1038[10] = {
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
   Double_t meanSub_y_vs_run_13_fy1038[10] = {
   0.1368764,
   0.03216773,
   -0.02312147,
   0.0008179096,
   0.0169225,
   0.003631197,
   -0.02408052,
   0.005969284,
   -0.06244777,
   -0.08673526};
   Double_t meanSub_y_vs_run_13_fex1038[10] = {
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
   Double_t meanSub_y_vs_run_13_fey1038[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_13_fx1038,meanSub_y_vs_run_13_fy1038,meanSub_y_vs_run_13_fex1038,meanSub_y_vs_run_13_fey1038);
   gre->SetName("meanSub_y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_131038 = new TH1F("Graph_meanSub_y_vs_run_131038","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_131038->SetMinimum(-0.1490638);
   Graph_meanSub_y_vs_run_131038->SetMaximum(0.3206916);
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
   
   Double_t meanSub_y_vs_run_14_fx1039[10] = {
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
   Double_t meanSub_y_vs_run_14_fy1039[10] = {
   0.01149288,
   0.05348166,
   0.01518911,
   -0.0121385,
   0.04010494,
   -0.02170273,
   -0.005830272,
   -0.0438005,
   -0.003959411,
   -0.03283718};
   Double_t meanSub_y_vs_run_14_fex1039[10] = {
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
   Double_t meanSub_y_vs_run_14_fey1039[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_14_fx1039,meanSub_y_vs_run_14_fy1039,meanSub_y_vs_run_14_fex1039,meanSub_y_vs_run_14_fey1039);
   gre->SetName("meanSub_y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_141039 = new TH1F("Graph_meanSub_y_vs_run_141039","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_141039->SetMinimum(-0.1753962);
   Graph_meanSub_y_vs_run_141039->SetMaximum(0.198382);
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
   
   Double_t meanSub_y_vs_run_15_fx1040[10] = {
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
   Double_t meanSub_y_vs_run_15_fy1040[10] = {
   0.09034914,
   0.07883703,
   0.01023348,
   -0.008200324,
   -0.0129819,
   0.007795075,
   -0.03794368,
   0.06261788,
   -0.06470549,
   -0.1260012};
   Double_t meanSub_y_vs_run_15_fex1040[10] = {
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
   Double_t meanSub_y_vs_run_15_fey1040[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_15_fx1040,meanSub_y_vs_run_15_fy1040,meanSub_y_vs_run_15_fex1040,meanSub_y_vs_run_15_fey1040);
   gre->SetName("meanSub_y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_151040 = new TH1F("Graph_meanSub_y_vs_run_151040","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_151040->SetMinimum(-0.1905728);
   Graph_meanSub_y_vs_run_151040->SetMaximum(0.2856571);
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
   
   Double_t meanSub_y_vs_run_16_fx1041[10] = {
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
   Double_t meanSub_y_vs_run_16_fy1041[10] = {
   0.1925019,
   0.0461065,
   0.02912,
   -0.02002298,
   -0.06351096,
   -0.003703517,
   0.01339721,
   -0.02387952,
   -0.0697192,
   -0.1002894};
   Double_t meanSub_y_vs_run_16_fex1041[10] = {
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
   Double_t meanSub_y_vs_run_16_fey1041[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_16_fx1041,meanSub_y_vs_run_16_fy1041,meanSub_y_vs_run_16_fex1041,meanSub_y_vs_run_16_fey1041);
   gre->SetName("meanSub_y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_161041 = new TH1F("Graph_meanSub_y_vs_run_161041","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_161041->SetMinimum(-0.1735151);
   Graph_meanSub_y_vs_run_161041->SetMaximum(0.4000877);
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
   
   Double_t meanSub_y_vs_run_17_fx1042[10] = {
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
   Double_t meanSub_y_vs_run_17_fy1042[10] = {
   0.004985527,
   0.09193117,
   0.02842441,
   0.007564043,
   0.02309886,
   0.002676091,
   0.003579525,
   -0.04061169,
   -0.02984716,
   -0.09180078};
   Double_t meanSub_y_vs_run_17_fex1042[10] = {
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
   Double_t meanSub_y_vs_run_17_fey1042[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_17_fx1042,meanSub_y_vs_run_17_fy1042,meanSub_y_vs_run_17_fex1042,meanSub_y_vs_run_17_fey1042);
   gre->SetName("meanSub_y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_171042 = new TH1F("Graph_meanSub_y_vs_run_171042","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_171042->SetMinimum(-0.1846583);
   Graph_meanSub_y_vs_run_171042->SetMaximum(0.1946294);
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
   
   Double_t meanSub_y_vs_run_18_fx1043[10] = {
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
   Double_t meanSub_y_vs_run_18_fy1043[10] = {
   0.2682832,
   -0.003239037,
   0.03452926,
   -0.003882427,
   -0.02929464,
   -0.003559629,
   -0.0213662,
   -0.08877038,
   -0.07647398,
   -0.07622618};
   Double_t meanSub_y_vs_run_18_fex1043[10] = {
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
   Double_t meanSub_y_vs_run_18_fey1043[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_18_fx1043,meanSub_y_vs_run_18_fy1043,meanSub_y_vs_run_18_fex1043,meanSub_y_vs_run_18_fey1043);
   gre->SetName("meanSub_y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_181043 = new TH1F("Graph_meanSub_y_vs_run_181043","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_181043->SetMinimum(-0.1805198);
   Graph_meanSub_y_vs_run_181043->SetMaximum(0.4770408);
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
   
   Double_t meanSub_y_vs_run_19_fx1044[10] = {
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
   Double_t meanSub_y_vs_run_19_fy1044[10] = {
   0.06021002,
   0.0383131,
   0.008941722,
   -0.04219734,
   0.02709065,
   -0.009676747,
   -0.01411054,
   0.02384422,
   -0.0228141,
   -0.06960098};
   Double_t meanSub_y_vs_run_19_fex1044[10] = {
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
   Double_t meanSub_y_vs_run_19_fey1044[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_19_fx1044,meanSub_y_vs_run_19_fy1044,meanSub_y_vs_run_19_fex1044,meanSub_y_vs_run_19_fey1044);
   gre->SetName("meanSub_y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_191044 = new TH1F("Graph_meanSub_y_vs_run_191044","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_191044->SetMinimum(-0.123429);
   Graph_meanSub_y_vs_run_191044->SetMaximum(0.2379928);
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
   
   Double_t meanSub_y_vs_run_20_fx1045[10] = {
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
   Double_t meanSub_y_vs_run_20_fy1045[10] = {
   0.3364364,
   -0.03839779,
   -0.008361162,
   -0.01088019,
   0.01652496,
   -0.008685529,
   -0.05789848,
   -0.07417497,
   -0.07928694,
   -0.0752763};
   Double_t meanSub_y_vs_run_20_fex1045[10] = {
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
   Double_t meanSub_y_vs_run_20_fey1045[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_20_fx1045,meanSub_y_vs_run_20_fy1045,meanSub_y_vs_run_20_fex1045,meanSub_y_vs_run_20_fey1045);
   gre->SetName("meanSub_y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_201045 = new TH1F("Graph_meanSub_y_vs_run_201045","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_201045->SetMinimum(-0.1726266);
   Graph_meanSub_y_vs_run_201045->SetMaximum(0.5543806);
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
   
   Double_t meanSub_y_vs_run_21_fx1046[10] = {
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
   Double_t meanSub_y_vs_run_21_fy1046[10] = {
   0.3290889,
   0.01860227,
   -0.04584349,
   -0.0200482,
   -0.08707317,
   0.02068093,
   -0.0165176,
   -0.09765047,
   -0.02404939,
   -0.07718972};
   Double_t meanSub_y_vs_run_21_fex1046[10] = {
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
   Double_t meanSub_y_vs_run_21_fey1046[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_21_fx1046,meanSub_y_vs_run_21_fy1046,meanSub_y_vs_run_21_fex1046,meanSub_y_vs_run_21_fey1046);
   gre->SetName("meanSub_y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_211046 = new TH1F("Graph_meanSub_y_vs_run_211046","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_211046->SetMinimum(-0.199349);
   Graph_meanSub_y_vs_run_211046->SetMaximum(0.5536374);
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
   
   Double_t meanSub_y_vs_run_22_fx1047[10] = {
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
   Double_t meanSub_y_vs_run_22_fy1047[10] = {
   0.6997058,
   -0.0838811,
   -0.05131259,
   -0.05685747,
   -0.04808276,
   -0.08108882,
   -0.1112967,
   -0.02780061,
   -0.1402026,
   -0.09918318};
   Double_t meanSub_y_vs_run_22_fex1047[10] = {
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
   Double_t meanSub_y_vs_run_22_fey1047[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_22_fx1047,meanSub_y_vs_run_22_fy1047,meanSub_y_vs_run_22_fex1047,meanSub_y_vs_run_22_fey1047);
   gre->SetName("meanSub_y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_221047 = new TH1F("Graph_meanSub_y_vs_run_221047","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_221047->SetMinimum(-0.2648682);
   Graph_meanSub_y_vs_run_221047->SetMaximum(0.9616318);
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
   
   Double_t meanSub_y_vs_run_23_fx1048[10] = {
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
   Double_t meanSub_y_vs_run_23_fy1048[10] = {
   0.1993282,
   0.02920288,
   -0.05506567,
   -0.01574811,
   0.03500405,
   -0.03498137,
   -0.02629045,
   0.002026033,
   -0.06234209,
   -0.07113351};
   Double_t meanSub_y_vs_run_23_fex1048[10] = {
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
   Double_t meanSub_y_vs_run_23_fey1048[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_23_fx1048,meanSub_y_vs_run_23_fy1048,meanSub_y_vs_run_23_fex1048,meanSub_y_vs_run_23_fey1048);
   gre->SetName("meanSub_y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_231048 = new TH1F("Graph_meanSub_y_vs_run_231048","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_231048->SetMinimum(-0.1419896);
   Graph_meanSub_y_vs_run_231048->SetMaximum(0.4038211);
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
   
   Double_t meanSub_y_vs_run_24_fx1049[10] = {
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
   Double_t meanSub_y_vs_run_24_fy1049[10] = {
   0.1671461,
   0.004347492,
   -0.03326596,
   0.02716553,
   0.0665998,
   -0.05512001,
   -0.02360487,
   -0.0272249,
   -0.03579863,
   -0.09024458};
   Double_t meanSub_y_vs_run_24_fex1049[10] = {
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
   Double_t meanSub_y_vs_run_24_fey1049[10] = {
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
   gre = new TGraphErrors(10,meanSub_y_vs_run_24_fx1049,meanSub_y_vs_run_24_fy1049,meanSub_y_vs_run_24_fex1049,meanSub_y_vs_run_24_fey1049);
   gre->SetName("meanSub_y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_241049 = new TH1F("Graph_meanSub_y_vs_run_241049","Graph",100,26994.7,27046.3);
   Graph_meanSub_y_vs_run_241049->SetMinimum(-0.159067);
   Graph_meanSub_y_vs_run_241049->SetMaximum(0.3680137);
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
