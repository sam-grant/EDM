void PerCaloYvsRun_gm2pro_daq_offline_dqc_run2H_27166_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 06:13:23 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(27153.51,68.75,27232.37,81.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t y_vs_run_1_fx1002[20] = {
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
   Double_t y_vs_run_1_fy1002[20] = {
   74.87285,
   74.91727,
   74.94084,
   74.91856,
   74.87402,
   74.91895,
   74.94204,
   74.92345,
   74.92857,
   75.07746,
   74.94579,
   74.96818,
   74.91288,
   74.94251,
   74.91598,
   74.96739,
   74.80381,
   74.92916,
   74.91251,
   74.9007};
   Double_t y_vs_run_1_fex1002[20] = {
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
   Double_t y_vs_run_1_fey1002[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,y_vs_run_1_fx1002,y_vs_run_1_fy1002,y_vs_run_1_fex1002,y_vs_run_1_fey1002);
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
   
   TH1F *Graph_y_vs_run_11002 = new TH1F("Graph_y_vs_run_11002","",100,27161.4,27216.6);
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
   
   Double_t y_vs_run_2_fx1003[20] = {
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
   Double_t y_vs_run_2_fy1003[20] = {
   74.53982,
   74.63133,
   74.64115,
   74.65209,
   74.67905,
   74.64448,
   74.68371,
   74.67829,
   74.63885,
   74.86177,
   74.69306,
   74.72422,
   74.6487,
   74.64007,
   74.63001,
   74.64508,
   74.61727,
   74.65113,
   74.67602,
   74.62136};
   Double_t y_vs_run_2_fex1003[20] = {
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
   Double_t y_vs_run_2_fey1003[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_2_fx1003,y_vs_run_2_fy1003,y_vs_run_2_fex1003,y_vs_run_2_fey1003);
   gre->SetName("y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_21003 = new TH1F("Graph_y_vs_run_21003","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_21003->SetMinimum(74.44062);
   Graph_y_vs_run_21003->SetMaximum(75.00026);
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
   
   Double_t y_vs_run_3_fx1004[20] = {
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
   Double_t y_vs_run_3_fy1004[20] = {
   75.99038,
   76.00103,
   75.9785,
   76.0051,
   76.04821,
   75.97282,
   75.99571,
   75.99087,
   76.04029,
   76.07236,
   76.02105,
   76.05861,
   76.03803,
   76.08145,
   76.01272,
   76.00151,
   76.02754,
   76.07534,
   76.04981,
   76.02812};
   Double_t y_vs_run_3_fex1004[20] = {
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
   Double_t y_vs_run_3_fey1004[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_3_fx1004,y_vs_run_3_fy1004,y_vs_run_3_fex1004,y_vs_run_3_fey1004);
   gre->SetName("y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_31004 = new TH1F("Graph_y_vs_run_31004","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_31004->SetMinimum(75.86693);
   Graph_y_vs_run_31004->SetMaximum(76.20218);
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
   
   Double_t y_vs_run_4_fx1005[20] = {
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
   Double_t y_vs_run_4_fy1005[20] = {
   75.04712,
   75.01097,
   74.98838,
   75.06361,
   75.03937,
   75.0866,
   75.04867,
   75.05531,
   75.05346,
   75.17564,
   75.04398,
   75.06,
   75.04004,
   75.0597,
   75.09745,
   75.05801,
   74.95124,
   75.17642,
   75.04427,
   75.04275};
   Double_t y_vs_run_4_fex1005[20] = {
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
   Double_t y_vs_run_4_fey1005[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_4_fx1005,y_vs_run_4_fy1005,y_vs_run_4_fex1005,y_vs_run_4_fey1005);
   gre->SetName("y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_41005 = new TH1F("Graph_y_vs_run_41005","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_41005->SetMinimum(74.77276);
   Graph_y_vs_run_41005->SetMaximum(75.32093);
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
   
   Double_t y_vs_run_5_fx1006[20] = {
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
   Double_t y_vs_run_5_fy1006[20] = {
   76.11092,
   76.09799,
   76.10321,
   76.15612,
   76.14883,
   76.16451,
   76.14428,
   76.17512,
   76.15877,
   76.08527,
   76.1676,
   76.13766,
   76.19302,
   76.15785,
   76.16741,
   76.17268,
   76.10025,
   76.0999,
   76.17373,
   76.14202};
   Double_t y_vs_run_5_fex1006[20] = {
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
   Double_t y_vs_run_5_fey1006[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_5_fx1006,y_vs_run_5_fy1006,y_vs_run_5_fex1006,y_vs_run_5_fey1006);
   gre->SetName("y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_51006 = new TH1F("Graph_y_vs_run_51006","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_51006->SetMinimum(75.94522);
   Graph_y_vs_run_51006->SetMaximum(76.25529);
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
   
   Double_t y_vs_run_6_fx1007[20] = {
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
   Double_t y_vs_run_6_fy1007[20] = {
   75.54937,
   75.58817,
   75.56145,
   75.55354,
   75.5751,
   75.5453,
   75.57567,
   75.59675,
   75.5791,
   75.62952,
   75.60535,
   75.60626,
   75.60848,
   75.596,
   75.55506,
   75.60916,
   75.65204,
   75.57552,
   75.57808,
   75.53867};
   Double_t y_vs_run_6_fex1007[20] = {
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
   Double_t y_vs_run_6_fey1007[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_6_fx1007,y_vs_run_6_fy1007,y_vs_run_6_fex1007,y_vs_run_6_fey1007);
   gre->SetName("y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_61007 = new TH1F("Graph_y_vs_run_61007","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_61007->SetMinimum(75.44659);
   Graph_y_vs_run_61007->SetMaximum(75.81528);
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
   
   Double_t y_vs_run_7_fx1008[20] = {
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
   Double_t y_vs_run_7_fy1008[20] = {
   76.28295,
   76.29605,
   76.31557,
   76.32133,
   76.34248,
   76.31084,
   76.31593,
   76.32699,
   76.33151,
   76.22366,
   76.3769,
   76.30978,
   76.29828,
   76.33052,
   76.29959,
   76.31726,
   76.1383,
   76.29726,
   76.30872,
   76.31527};
   Double_t y_vs_run_7_fex1008[20] = {
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
   Double_t y_vs_run_7_fey1008[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_7_fx1008,y_vs_run_7_fy1008,y_vs_run_7_fex1008,y_vs_run_7_fey1008);
   gre->SetName("y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_71008 = new TH1F("Graph_y_vs_run_71008","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_71008->SetMinimum(75.96837);
   Graph_y_vs_run_71008->SetMaximum(76.44025);
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
   
   Double_t y_vs_run_8_fx1009[20] = {
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
   Double_t y_vs_run_8_fy1009[20] = {
   75.368,
   75.42023,
   75.4184,
   75.42688,
   75.40488,
   75.43359,
   75.44746,
   75.39475,
   75.45736,
   75.47886,
   75.42029,
   75.46058,
   75.44595,
   75.45091,
   75.45845,
   75.43209,
   75.27079,
   75.61072,
   75.40859,
   75.43776};
   Double_t y_vs_run_8_fex1009[20] = {
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
   Double_t y_vs_run_8_fey1009[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_8_fx1009,y_vs_run_8_fy1009,y_vs_run_8_fex1009,y_vs_run_8_fey1009);
   gre->SetName("y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_81009 = new TH1F("Graph_y_vs_run_81009","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_81009->SetMinimum(75.0835);
   Graph_y_vs_run_81009->SetMaximum(75.76555);
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
   
   Double_t y_vs_run_9_fx1010[20] = {
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
   Double_t y_vs_run_9_fy1010[20] = {
   74.57847,
   74.70225,
   74.65661,
   74.69645,
   74.71623,
   74.68871,
   74.70159,
   74.69944,
   74.71598,
   74.82755,
   74.77014,
   74.72072,
   74.71808,
   74.74303,
   74.75429,
   74.73459,
   74.79038,
   74.84709,
   74.68114,
   74.72619};
   Double_t y_vs_run_9_fex1010[20] = {
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
   Double_t y_vs_run_9_fey1010[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_9_fx1010,y_vs_run_9_fy1010,y_vs_run_9_fex1010,y_vs_run_9_fey1010);
   gre->SetName("y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_91010 = new TH1F("Graph_y_vs_run_91010","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_91010->SetMinimum(74.49935);
   Graph_y_vs_run_91010->SetMaximum(74.9922);
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
   
   Double_t y_vs_run_10_fx1011[20] = {
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
   Double_t y_vs_run_10_fy1011[20] = {
   75.09788,
   75.09044,
   75.16056,
   75.09787,
   75.16178,
   75.18712,
   75.13506,
   75.12106,
   75.15515,
   75.19674,
   75.15324,
   75.15522,
   75.15001,
   75.19032,
   75.14607,
   75.09442,
   75.15558,
   75.03377,
   75.10753,
   75.1637};
   Double_t y_vs_run_10_fex1011[20] = {
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
   Double_t y_vs_run_10_fey1011[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_10_fx1011,y_vs_run_10_fy1011,y_vs_run_10_fex1011,y_vs_run_10_fey1011);
   gre->SetName("y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_101011 = new TH1F("Graph_y_vs_run_101011","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_101011->SetMinimum(74.9017);
   Graph_y_vs_run_101011->SetMaximum(75.32358);
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
   
   Double_t y_vs_run_11_fx1012[20] = {
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
   Double_t y_vs_run_11_fy1012[20] = {
   74.82369,
   74.82974,
   74.82835,
   74.86773,
   74.84385,
   74.87377,
   74.88589,
   74.87366,
   74.84156,
   75.03325,
   74.87547,
   74.86993,
   74.87286,
   74.84182,
   74.84387,
   74.89755,
   75.02845,
   74.82951,
   74.8574,
   74.84694};
   Double_t y_vs_run_11_fex1012[20] = {
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
   Double_t y_vs_run_11_fey1012[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_11_fx1012,y_vs_run_11_fy1012,y_vs_run_11_fex1012,y_vs_run_11_fey1012);
   gre->SetName("y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_111012 = new TH1F("Graph_y_vs_run_111012","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_111012->SetMinimum(74.69133);
   Graph_y_vs_run_111012->SetMaximum(75.19906);
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
   
   Double_t y_vs_run_12_fx1013[20] = {
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
   Double_t y_vs_run_12_fy1013[20] = {
   74.6351,
   74.64449,
   74.61847,
   74.63728,
   74.58417,
   74.5923,
   74.62445,
   74.62582,
   74.66934,
   74.5839,
   74.66968,
   74.63952,
   74.66932,
   74.62935,
   74.64131,
   74.59528,
   74.37668,
   74.73974,
   74.66226,
   74.65583};
   Double_t y_vs_run_12_fex1013[20] = {
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
   Double_t y_vs_run_12_fey1013[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_12_fx1013,y_vs_run_12_fy1013,y_vs_run_12_fex1013,y_vs_run_12_fey1013);
   gre->SetName("y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_121013 = new TH1F("Graph_y_vs_run_121013","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_121013->SetMinimum(74.19263);
   Graph_y_vs_run_121013->SetMaximum(74.89245);
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
   
   Double_t y_vs_run_13_fx1014[20] = {
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
   Double_t y_vs_run_13_fy1014[20] = {
   75.30325,
   75.32351,
   75.3655,
   75.36008,
   75.33429,
   75.34977,
   75.38673,
   75.34876,
   75.38268,
   75.31986,
   75.34035,
   75.41017,
   75.34187,
   75.35397,
   75.37692,
   75.342,
   75.47793,
   75.36676,
   75.3424,
   75.30783};
   Double_t y_vs_run_13_fex1014[20] = {
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
   Double_t y_vs_run_13_fey1014[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_13_fx1014,y_vs_run_13_fy1014,y_vs_run_13_fex1014,y_vs_run_13_fey1014);
   gre->SetName("y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_131014 = new TH1F("Graph_y_vs_run_131014","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_131014->SetMinimum(75.20043);
   Graph_y_vs_run_131014->SetMaximum(75.6316);
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
   
   Double_t y_vs_run_14_fx1015[20] = {
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
   Double_t y_vs_run_14_fy1015[20] = {
   74.87739,
   74.92764,
   74.9649,
   74.98249,
   74.91587,
   74.96436,
   75.00823,
   74.95429,
   74.96266,
   75.00314,
   74.96528,
   74.97357,
   74.95919,
   74.9489,
   74.95944,
   74.96016,
   74.9256,
   74.94707,
   74.96951,
   74.96021};
   Double_t y_vs_run_14_fex1015[20] = {
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
   Double_t y_vs_run_14_fey1015[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_14_fx1015,y_vs_run_14_fy1015,y_vs_run_14_fex1015,y_vs_run_14_fey1015);
   gre->SetName("y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_141015 = new TH1F("Graph_y_vs_run_141015","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_141015->SetMinimum(74.76889);
   Graph_y_vs_run_141015->SetMaximum(75.12239);
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
   
   Double_t y_vs_run_15_fx1016[20] = {
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
   Double_t y_vs_run_15_fy1016[20] = {
   75.72239,
   75.77326,
   75.79724,
   75.79827,
   75.78715,
   75.81326,
   75.7779,
   75.83342,
   75.79304,
   75.78064,
   75.84784,
   75.88502,
   75.82904,
   75.78196,
   75.79547,
   75.81505,
   75.86907,
   75.87098,
   75.83005,
   75.80994};
   Double_t y_vs_run_15_fex1016[20] = {
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
   Double_t y_vs_run_15_fey1016[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_15_fx1016,y_vs_run_15_fy1016,y_vs_run_15_fex1016,y_vs_run_15_fey1016);
   gre->SetName("y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_151016 = new TH1F("Graph_y_vs_run_151016","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_151016->SetMinimum(75.6566);
   Graph_y_vs_run_151016->SetMaximum(76.02731);
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
   
   Double_t y_vs_run_16_fx1017[20] = {
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
   Double_t y_vs_run_16_fy1017[20] = {
   74.91177,
   74.96034,
   74.99319,
   75.01378,
   75.03125,
   75.08441,
   75.00959,
   75.00839,
   75.01332,
   75.01488,
   74.99993,
   75.04661,
   75.00695,
   74.98277,
   75.00452,
   74.95036,
   74.9343,
   75.14744,
   75.0022,
   75.00259};
   Double_t y_vs_run_16_fex1017[20] = {
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
   Double_t y_vs_run_16_fey1017[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_16_fx1017,y_vs_run_16_fy1017,y_vs_run_16_fex1017,y_vs_run_16_fey1017);
   gre->SetName("y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_161017 = new TH1F("Graph_y_vs_run_161017","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_161017->SetMinimum(74.76031);
   Graph_y_vs_run_161017->SetMaximum(75.28896);
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
   
   Double_t y_vs_run_17_fx1018[20] = {
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
   Double_t y_vs_run_17_fy1018[20] = {
   75.75925,
   75.77144,
   75.8462,
   75.78655,
   75.82337,
   75.82408,
   75.8271,
   75.84678,
   75.8148,
   75.90155,
   75.87174,
   75.83009,
   75.85015,
   75.78757,
   75.83424,
   75.85939,
   75.77332,
   75.96932,
   75.79826,
   75.82499};
   Double_t y_vs_run_17_fex1018[20] = {
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
   Double_t y_vs_run_17_fey1018[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_17_fx1018,y_vs_run_17_fy1018,y_vs_run_17_fex1018,y_vs_run_17_fey1018);
   gre->SetName("y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_171018 = new TH1F("Graph_y_vs_run_171018","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_171018->SetMinimum(75.603);
   Graph_y_vs_run_171018->SetMaximum(76.10739);
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
   
   Double_t y_vs_run_18_fx1019[20] = {
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
   Double_t y_vs_run_18_fy1019[20] = {
   75.95502,
   75.96147,
   76.00307,
   75.93571,
   75.99267,
   75.96353,
   75.96151,
   75.99033,
   75.99987,
   75.8757,
   76.02948,
   76.03246,
   76.04584,
   76.0084,
   75.97584,
   75.97477,
   76.04682,
   76.02454,
   75.97095,
   76.02022};
   Double_t y_vs_run_18_fex1019[20] = {
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
   Double_t y_vs_run_18_fey1019[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_18_fx1019,y_vs_run_18_fy1019,y_vs_run_18_fex1019,y_vs_run_18_fey1019);
   gre->SetName("y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_181019 = new TH1F("Graph_y_vs_run_181019","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_181019->SetMinimum(75.74884);
   Graph_y_vs_run_181019->SetMaximum(76.20955);
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
   
   Double_t y_vs_run_19_fx1020[20] = {
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
   Double_t y_vs_run_19_fy1020[20] = {
   74.84317,
   74.81108,
   74.79218,
   74.85767,
   74.89626,
   74.8692,
   74.83333,
   74.85851,
   74.82584,
   74.90646,
   74.86121,
   74.85907,
   74.85817,
   74.85927,
   74.83491,
   74.8556,
   74.81552,
   74.98332,
   74.84794,
   74.85258};
   Double_t y_vs_run_19_fex1020[20] = {
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
   Double_t y_vs_run_19_fey1020[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_19_fx1020,y_vs_run_19_fy1020,y_vs_run_19_fex1020,y_vs_run_19_fey1020);
   gre->SetName("y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_191020 = new TH1F("Graph_y_vs_run_191020","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_191020->SetMinimum(74.65693);
   Graph_y_vs_run_191020->SetMaximum(75.11141);
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
   
   Double_t y_vs_run_20_fx1021[20] = {
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
   Double_t y_vs_run_20_fy1021[20] = {
   75.4096,
   75.41923,
   75.47058,
   75.44861,
   75.41388,
   75.46451,
   75.45058,
   75.44646,
   75.48667,
   75.54869,
   75.47588,
   75.47366,
   75.45612,
   75.45591,
   75.47749,
   75.45109,
   75.32468,
   75.54401,
   75.46619,
   75.48347};
   Double_t y_vs_run_20_fex1021[20] = {
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
   Double_t y_vs_run_20_fey1021[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_20_fx1021,y_vs_run_20_fy1021,y_vs_run_20_fex1021,y_vs_run_20_fey1021);
   gre->SetName("y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_201021 = new TH1F("Graph_y_vs_run_201021","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_201021->SetMinimum(75.15133);
   Graph_y_vs_run_201021->SetMaximum(75.68426);
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
   
   Double_t y_vs_run_21_fx1022[20] = {
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
   Double_t y_vs_run_21_fy1022[20] = {
   75.26433,
   75.29588,
   75.26905,
   75.25549,
   75.30007,
   75.32021,
   75.30644,
   75.28865,
   75.36222,
   75.33246,
   75.29765,
   75.31048,
   75.33627,
   75.32195,
   75.29986,
   75.30701,
   75.47274,
   75.36404,
   75.3352,
   75.30561};
   Double_t y_vs_run_21_fex1022[20] = {
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
   Double_t y_vs_run_21_fey1022[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_21_fx1022,y_vs_run_21_fy1022,y_vs_run_21_fex1022,y_vs_run_21_fey1022);
   gre->SetName("y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_211022 = new TH1F("Graph_y_vs_run_211022","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_211022->SetMinimum(75.19045);
   Graph_y_vs_run_211022->SetMaximum(75.6421);
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
   
   Double_t y_vs_run_22_fx1023[20] = {
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
   Double_t y_vs_run_22_fy1023[20] = {
   74.63929,
   74.66358,
   74.62729,
   74.65623,
   74.65604,
   74.72565,
   74.69597,
   74.63879,
   74.67964,
   74.65882,
   74.69656,
   74.7247,
   74.68935,
   74.7265,
   74.7343,
   74.68473,
   74.73432,
   74.56811,
   74.68361,
   74.70723};
   Double_t y_vs_run_22_fex1023[20] = {
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
   Double_t y_vs_run_22_fey1023[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_22_fx1023,y_vs_run_22_fy1023,y_vs_run_22_fex1023,y_vs_run_22_fey1023);
   gre->SetName("y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_221023 = new TH1F("Graph_y_vs_run_221023","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_221023->SetMinimum(74.42489);
   Graph_y_vs_run_221023->SetMaximum(74.91158);
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
   
   Double_t y_vs_run_23_fx1024[20] = {
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
   Double_t y_vs_run_23_fy1024[20] = {
   74.94712,
   75.02707,
   75.06814,
   75.00925,
   75.00421,
   75.05013,
   75.06355,
   75.07249,
   75.07338,
   75.06963,
   75.06718,
   75.05709,
   75.04163,
   75.01565,
   75.04759,
   75.05478,
   75.0509,
   75.02878,
   75.06096,
   75.03748};
   Double_t y_vs_run_23_fex1024[20] = {
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
   Double_t y_vs_run_23_fey1024[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_23_fx1024,y_vs_run_23_fy1024,y_vs_run_23_fex1024,y_vs_run_23_fey1024);
   gre->SetName("y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_231024 = new TH1F("Graph_y_vs_run_231024","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_231024->SetMinimum(74.88476);
   Graph_y_vs_run_231024->SetMaximum(75.207);
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
   
   Double_t y_vs_run_24_fx1025[20] = {
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
   Double_t y_vs_run_24_fy1025[20] = {
   75.46366,
   75.51435,
   75.52895,
   75.4966,
   75.48674,
   75.52849,
   75.52606,
   75.51269,
   75.53503,
   75.59411,
   75.53957,
   75.51358,
   75.54126,
   75.54607,
   75.52836,
   75.55292,
   75.39079,
   75.48578,
   75.51427,
   75.48878};
   Double_t y_vs_run_24_fex1025[20] = {
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
   Double_t y_vs_run_24_fey1025[20] = {
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
   gre = new TGraphErrors(20,y_vs_run_24_fx1025,y_vs_run_24_fy1025,y_vs_run_24_fex1025,y_vs_run_24_fey1025);
   gre->SetName("y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_241025 = new TH1F("Graph_y_vs_run_241025","Graph",100,27161.4,27216.6);
   Graph_y_vs_run_241025->SetMinimum(75.22244);
   Graph_y_vs_run_241025->SetMaximum(75.72556);
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
