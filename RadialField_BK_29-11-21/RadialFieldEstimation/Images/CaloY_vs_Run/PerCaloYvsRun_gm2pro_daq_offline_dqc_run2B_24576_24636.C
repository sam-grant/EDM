void PerCaloYvsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 26 18:37:19 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(24559.71,68.75,24662.57,81.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t y_vs_run_1_fx1002[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_1_fy1002[29] = {
   74.59881,
   74.66017,
   74.67778,
   74.60504,
   74.63128,
   74.6679,
   74.6116,
   74.59885,
   74.62868,
   74.59416,
   74.64062,
   74.58809,
   74.55877,
   74.59777,
   74.62496,
   74.60258,
   74.58513,
   74.60505,
   74.58952,
   74.59309,
   74.62391,
   74.63317,
   74.60425,
   74.67304,
   74.65274,
   74.69405,
   74.69993,
   74.68996,
   74.68486};
   Double_t y_vs_run_1_fex1002[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_1_fey1002[29] = {
   0.05801702,
   0.02152454,
   0.02012955,
   0.02968492,
   0.01996638,
   0.02036781,
   0.01898231,
   0.01977708,
   0.01966585,
   0.01859816,
   0.02051224,
   0.01955666,
   0.02046721,
   0.02803499,
   0.02079241,
   0.02972782,
   0.02026289,
   0.01901412,
   0.01918337,
   0.01991848,
   0.02028234,
   0.02330171,
   0.02327947,
   0.2118113,
   0.02766314,
   0.01954894,
   0.01883866,
   0.01910765,
   0.01984101};
   TGraphErrors *gre = new TGraphErrors(29,y_vs_run_1_fx1002,y_vs_run_1_fy1002,y_vs_run_1_fex1002,y_vs_run_1_fey1002);
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
   
   TH1F *Graph_y_vs_run_11002 = new TH1F("Graph_y_vs_run_11002","",100,24570,24642);
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
   
   Double_t y_vs_run_2_fx1003[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_2_fy1003[29] = {
   74.48711,
   74.44684,
   74.4257,
   74.40621,
   74.40406,
   74.44759,
   74.39979,
   74.36777,
   74.40811,
   74.36577,
   74.40442,
   74.38871,
   74.37659,
   74.32525,
   74.3787,
   74.42177,
   74.40222,
   74.33554,
   74.3787,
   74.38333,
   74.40703,
   74.41967,
   74.43175,
   74.61226,
   74.43493,
   74.48095,
   74.49033,
   74.4896,
   74.50432};
   Double_t y_vs_run_2_fex1003[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_2_fey1003[29] = {
   0.05559082,
   0.0205699,
   0.01927171,
   0.02839076,
   0.01909208,
   0.01947642,
   0.0181594,
   0.01893983,
   0.01881238,
   0.01777536,
   0.0196291,
   0.01871556,
   0.01956968,
   0.02681836,
   0.01988569,
   0.02842412,
   0.01936959,
   0.01819122,
   0.0183364,
   0.01903243,
   0.01939485,
   0.02228428,
   0.02225271,
   0.2032177,
   0.02646222,
   0.01867244,
   0.0180008,
   0.0182585,
   0.01895576};
   gre = new TGraphErrors(29,y_vs_run_2_fx1003,y_vs_run_2_fy1003,y_vs_run_2_fex1003,y_vs_run_2_fey1003);
   gre->SetName("y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_21003 = new TH1F("Graph_y_vs_run_21003","Graph",100,24570,24642);
   Graph_y_vs_run_21003->SetMinimum(74.24672);
   Graph_y_vs_run_21003->SetMaximum(74.86718);
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
   
   Double_t y_vs_run_3_fx1004[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_3_fy1004[29] = {
   75.81506,
   75.73369,
   75.745,
   75.67815,
   75.71465,
   75.67516,
   75.69,
   75.72128,
   75.6669,
   75.67102,
   75.67522,
   75.69153,
   75.66674,
   75.66265,
   75.68596,
   75.63732,
   75.69423,
   75.67102,
   75.66205,
   75.65999,
   75.67417,
   75.69808,
   75.71318,
   75.57574,
   75.68444,
   75.73015,
   75.73987,
   75.76546,
   75.76068};
   Double_t y_vs_run_3_fex1004[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_3_fey1004[29] = {
   0.05674829,
   0.0210155,
   0.01964921,
   0.02899609,
   0.01948765,
   0.01984179,
   0.01851742,
   0.01932313,
   0.01918938,
   0.01815436,
   0.02002095,
   0.01909632,
   0.01998411,
   0.02741964,
   0.02028614,
   0.02903731,
   0.0197733,
   0.01855896,
   0.01871839,
   0.01944256,
   0.01978593,
   0.02273352,
   0.02271943,
   0.2065322,
   0.02701922,
   0.01906646,
   0.01836808,
   0.01865258,
   0.01932321};
   gre = new TGraphErrors(29,y_vs_run_3_fx1004,y_vs_run_3_fy1004,y_vs_run_3_fex1004,y_vs_run_3_fey1004);
   gre->SetName("y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_31004 = new TH1F("Graph_y_vs_run_31004","Graph",100,24570,24642);
   Graph_y_vs_run_31004->SetMinimum(75.31894);
   Graph_y_vs_run_31004->SetMaximum(75.92207);
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
   
   Double_t y_vs_run_4_fx1005[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_4_fy1005[29] = {
   75.02358,
   74.86271,
   74.82627,
   74.78818,
   74.82461,
   74.8298,
   74.81808,
   74.77805,
   74.7749,
   74.77153,
   74.81562,
   74.7723,
   74.76255,
   74.81391,
   74.75288,
   74.75683,
   74.77799,
   74.7256,
   74.80867,
   74.78269,
   74.79551,
   74.79817,
   74.7871,
   74.88082,
   74.8412,
   74.89576,
   74.87379,
   74.86146,
   74.8656};
   Double_t y_vs_run_4_fex1005[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_4_fey1005[29] = {
   0.05592178,
   0.02075344,
   0.01940446,
   0.02865271,
   0.01926128,
   0.01962306,
   0.01831124,
   0.0190962,
   0.01898373,
   0.01793394,
   0.01978164,
   0.0188682,
   0.01974188,
   0.02707493,
   0.0200846,
   0.02867506,
   0.01954403,
   0.01835795,
   0.01852886,
   0.01921758,
   0.01957092,
   0.02248504,
   0.0224474,
   0.2061185,
   0.02671647,
   0.01884911,
   0.01815256,
   0.01842778,
   0.01912706};
   gre = new TGraphErrors(29,y_vs_run_4_fx1005,y_vs_run_4_fy1005,y_vs_run_4_fex1005,y_vs_run_4_fey1005);
   gre->SetName("y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_41005 = new TH1F("Graph_y_vs_run_41005","Graph",100,24570,24642);
   Graph_y_vs_run_41005->SetMinimum(74.63348);
   Graph_y_vs_run_41005->SetMaximum(75.12816);
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
   
   Double_t y_vs_run_5_fx1006[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_5_fy1006[29] = {
   76.17189,
   76.03977,
   76.11613,
   76.08605,
   76.03507,
   76.0296,
   76.02248,
   76.05068,
   75.99265,
   75.99125,
   76.0298,
   76.02808,
   76.01085,
   75.98307,
   76.01199,
   76.00886,
   75.98775,
   75.97947,
   75.98857,
   75.99305,
   76.05154,
   76.02174,
   76.06232,
   76.23807,
   76.09796,
   76.06247,
   76.09656,
   76.10698,
   76.11597};
   Double_t y_vs_run_5_fex1006[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_5_fey1006[29] = {
   0.05675418,
   0.02103539,
   0.01969,
   0.02907904,
   0.01953832,
   0.0199078,
   0.01856451,
   0.01934409,
   0.01923185,
   0.0181794,
   0.02005923,
   0.01913347,
   0.0199989,
   0.02745481,
   0.02034001,
   0.02908056,
   0.01981573,
   0.0186127,
   0.01878319,
   0.01949165,
   0.01985345,
   0.02279557,
   0.02279974,
   0.2082512,
   0.02709525,
   0.01912203,
   0.01842371,
   0.01869199,
   0.0193889};
   gre = new TGraphErrors(29,y_vs_run_5_fx1006,y_vs_run_5_fy1006,y_vs_run_5_fex1006,y_vs_run_5_fey1006);
   gre->SetName("y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_51006 = new TH1F("Graph_y_vs_run_51006","Graph",100,24570,24642);
   Graph_y_vs_run_51006->SetMinimum(75.90654);
   Graph_y_vs_run_51006->SetMaximum(76.49539);
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
   
   Double_t y_vs_run_6_fx1007[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_6_fy1007[29] = {
   75.29611,
   75.30216,
   75.2832,
   75.2908,
   75.28698,
   75.28152,
   75.28174,
   75.30095,
   75.31011,
   75.26849,
   75.26864,
   75.28819,
   75.23075,
   75.26125,
   75.21857,
   75.26233,
   75.27827,
   75.25773,
   75.22777,
   75.2482,
   75.28497,
   75.24291,
   75.30796,
   75.4811,
   75.27577,
   75.33562,
   75.34716,
   75.35195,
   75.3527};
   Double_t y_vs_run_6_fex1007[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_6_fey1007[29] = {
   0.05701281,
   0.02114658,
   0.01979671,
   0.02918367,
   0.01964845,
   0.02001398,
   0.01866953,
   0.0194616,
   0.01933479,
   0.01827351,
   0.02015512,
   0.01925235,
   0.02011474,
   0.02756715,
   0.02044659,
   0.02925326,
   0.01992025,
   0.01870394,
   0.01887495,
   0.01957902,
   0.0199597,
   0.02292782,
   0.02290227,
   0.2105052,
   0.0272107,
   0.01923016,
   0.018516,
   0.01876479,
   0.01949936};
   gre = new TGraphErrors(29,y_vs_run_6_fx1007,y_vs_run_6_fy1007,y_vs_run_6_fex1007,y_vs_run_6_fey1007);
   gre->SetName("y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_61007 = new TH1F("Graph_y_vs_run_61007","Graph",100,24570,24642);
   Graph_y_vs_run_61007->SetMinimum(75.14878);
   Graph_y_vs_run_61007->SetMaximum(75.74095);
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
   
   Double_t y_vs_run_7_fx1008[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_7_fy1008[29] = {
   76.18974,
   76.05887,
   76.02742,
   76.01604,
   76.00741,
   76.03038,
   76.00713,
   75.98586,
   75.97347,
   75.99615,
   75.99496,
   76.01401,
   75.99871,
   75.93536,
   75.97651,
   75.92002,
   75.93173,
   75.97401,
   75.96124,
   75.95945,
   76.02566,
   76.0164,
   75.99285,
   76.09338,
   76.02362,
   76.05627,
   76.03903,
   76.11168,
   76.08706};
   Double_t y_vs_run_7_fex1008[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_7_fey1008[29] = {
   0.05682324,
   0.02107961,
   0.01972148,
   0.02907935,
   0.01956059,
   0.01995783,
   0.01859534,
   0.01939335,
   0.01926848,
   0.01822171,
   0.02008738,
   0.01916994,
   0.02003763,
   0.02748437,
   0.02037511,
   0.02911711,
   0.01984426,
   0.01862811,
   0.01880578,
   0.01950769,
   0.01988353,
   0.02282656,
   0.02281444,
   0.2066158,
   0.0270842,
   0.01915805,
   0.01846634,
   0.01870906,
   0.01942558};
   gre = new TGraphErrors(29,y_vs_run_7_fx1008,y_vs_run_7_fy1008,y_vs_run_7_fex1008,y_vs_run_7_fey1008);
   gre->SetName("y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_71008 = new TH1F("Graph_y_vs_run_71008","Graph",100,24570,24642);
   Graph_y_vs_run_71008->SetMinimum(75.84544);
   Graph_y_vs_run_71008->SetMaximum(76.34131);
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
   
   Double_t y_vs_run_8_fx1009[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_8_fy1009[29] = {
   75.09715,
   75.11476,
   75.13217,
   75.11067,
   75.12847,
   75.13134,
   75.12524,
   75.12495,
   75.09866,
   75.11543,
   75.10479,
   75.08556,
   75.07265,
   75.09982,
   75.06801,
   75.10349,
   75.03971,
   75.07537,
   75.04845,
   75.08337,
   75.1013,
   75.11685,
   75.09799,
   75.28661,
   75.1114,
   75.17893,
   75.16722,
   75.19425,
   75.21453};
   Double_t y_vs_run_8_fex1009[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_8_fey1009[29] = {
   0.05674116,
   0.02103948,
   0.01967182,
   0.02903187,
   0.0195048,
   0.01988814,
   0.0185522,
   0.01934072,
   0.01921318,
   0.01815642,
   0.02002864,
   0.01912871,
   0.0199941,
   0.02741938,
   0.02032573,
   0.02913365,
   0.01981236,
   0.01860227,
   0.01876047,
   0.01947188,
   0.01983225,
   0.02277929,
   0.0227527,
   0.2053983,
   0.02706021,
   0.01909339,
   0.01841283,
   0.01866985,
   0.01938523};
   gre = new TGraphErrors(29,y_vs_run_8_fx1009,y_vs_run_8_fy1009,y_vs_run_8_fex1009,y_vs_run_8_fey1009);
   gre->SetName("y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_81009 = new TH1F("Graph_y_vs_run_81009","Graph",100,24570,24642);
   Graph_y_vs_run_81009->SetMinimum(74.97269);
   Graph_y_vs_run_81009->SetMaximum(75.53922);
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
   
   Double_t y_vs_run_9_fx1010[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_9_fy1010[29] = {
   74.43631,
   74.47036,
   74.43539,
   74.46655,
   74.43403,
   74.42485,
   74.3862,
   74.4011,
   74.388,
   74.40267,
   74.39866,
   74.41111,
   74.36745,
   74.41283,
   74.37841,
   74.30815,
   74.34174,
   74.33637,
   74.33856,
   74.37864,
   74.40857,
   74.40779,
   74.43537,
   74.52621,
   74.41327,
   74.44945,
   74.49124,
   74.4641,
   74.48749};
   Double_t y_vs_run_9_fex1010[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_9_fey1010[29] = {
   0.0603812,
   0.02236033,
   0.02089856,
   0.03086707,
   0.02071685,
   0.02114402,
   0.01970097,
   0.02055355,
   0.02042141,
   0.01929991,
   0.02130389,
   0.0203207,
   0.02125128,
   0.02914487,
   0.02161754,
   0.03090919,
   0.021044,
   0.0197667,
   0.01992937,
   0.02071378,
   0.02106607,
   0.02421528,
   0.02420468,
   0.2202949,
   0.02872377,
   0.0203106,
   0.01956027,
   0.01985499,
   0.02060284};
   gre = new TGraphErrors(29,y_vs_run_9_fx1010,y_vs_run_9_fy1010,y_vs_run_9_fex1010,y_vs_run_9_fey1010);
   gre->SetName("y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_91010 = new TH1F("Graph_y_vs_run_91010","Graph",100,24570,24642);
   Graph_y_vs_run_91010->SetMinimum(74.23031);
   Graph_y_vs_run_91010->SetMaximum(74.79343);
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
   
   Double_t y_vs_run_10_fx1011[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_10_fy1011[29] = {
   74.86637,
   74.86968,
   74.84878,
   74.91631,
   74.81253,
   74.80266,
   74.81778,
   74.80126,
   74.80837,
   74.8076,
   74.79688,
   74.7839,
   74.78616,
   74.78962,
   74.77334,
   74.75319,
   74.73666,
   74.77679,
   74.76076,
   74.78623,
   74.819,
   74.78691,
   74.819,
   75.15881,
   74.82834,
   74.86887,
   74.85282,
   74.87773,
   74.90464};
   Double_t y_vs_run_10_fex1011[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_10_fey1011[29] = {
   0.0563318,
   0.02085004,
   0.0194793,
   0.0287664,
   0.01932015,
   0.01970415,
   0.01839063,
   0.01916677,
   0.01904978,
   0.01799538,
   0.01986508,
   0.01894483,
   0.01983635,
   0.02717972,
   0.02014837,
   0.02882749,
   0.01962878,
   0.01843753,
   0.01858927,
   0.01930108,
   0.01965877,
   0.02258563,
   0.02255833,
   0.2065793,
   0.02681286,
   0.01893484,
   0.01824789,
   0.01849659,
   0.01920891};
   gre = new TGraphErrors(29,y_vs_run_10_fx1011,y_vs_run_10_fy1011,y_vs_run_10_fex1011,y_vs_run_10_fey1011);
   gre->SetName("y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_101011 = new TH1F("Graph_y_vs_run_101011","Graph",100,24570,24642);
   Graph_y_vs_run_101011->SetMinimum(74.6522);
   Graph_y_vs_run_101011->SetMaximum(75.43022);
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
   
   Double_t y_vs_run_11_fx1012[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_11_fy1012[29] = {
   74.71368,
   74.601,
   74.56862,
   74.55329,
   74.55609,
   74.5511,
   74.54098,
   74.54802,
   74.57415,
   74.51856,
   74.51919,
   74.49251,
   74.49816,
   74.50802,
   74.51009,
   74.46646,
   74.5247,
   74.49542,
   74.51306,
   74.53107,
   74.53305,
   74.50401,
   74.54301,
   74.40732,
   74.57444,
   74.58761,
   74.63223,
   74.61019,
   74.61192};
   Double_t y_vs_run_11_fex1012[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_11_fey1012[29] = {
   0.0556982,
   0.02066517,
   0.01931705,
   0.0285037,
   0.01915075,
   0.01953694,
   0.01822164,
   0.01900272,
   0.01888676,
   0.01785899,
   0.01969957,
   0.01880503,
   0.01964238,
   0.0269198,
   0.01995059,
   0.0285283,
   0.01946839,
   0.01827812,
   0.0184433,
   0.0191504,
   0.01950609,
   0.02240342,
   0.02238139,
   0.203753,
   0.02660009,
   0.01879161,
   0.0181067,
   0.01835359,
   0.01905541};
   gre = new TGraphErrors(29,y_vs_run_11_fx1012,y_vs_run_11_fy1012,y_vs_run_11_fex1012,y_vs_run_11_fey1012);
   gre->SetName("y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_111012 = new TH1F("Graph_y_vs_run_111012","Graph",100,24570,24642);
   Graph_y_vs_run_111012->SetMinimum(74.14699);
   Graph_y_vs_run_111012->SetMaximum(74.82595);
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
   
   Double_t y_vs_run_12_fx1013[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_12_fy1013[29] = {
   74.45824,
   74.38021,
   74.35795,
   74.3747,
   74.3462,
   74.37717,
   74.38907,
   74.33648,
   74.34975,
   74.35331,
   74.34821,
   74.37617,
   74.34304,
   74.3186,
   74.29285,
   74.30202,
   74.3312,
   74.31078,
   74.31249,
   74.35392,
   74.34408,
   74.36,
   74.33886,
   74.51031,
   74.39734,
   74.39174,
   74.42102,
   74.45435,
   74.43652};
   Double_t y_vs_run_12_fex1013[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_12_fey1013[29] = {
   0.05488885,
   0.02028968,
   0.0189799,
   0.02797392,
   0.01883238,
   0.01920184,
   0.01790509,
   0.01866306,
   0.01855415,
   0.01754579,
   0.01934451,
   0.0184479,
   0.01929638,
   0.02644754,
   0.01960214,
   0.02805364,
   0.01910656,
   0.01795315,
   0.01812069,
   0.01881658,
   0.01915524,
   0.0219953,
   0.02199154,
   0.2001726,
   0.02611669,
   0.01846061,
   0.01779035,
   0.01803889,
   0.01873639};
   gre = new TGraphErrors(29,y_vs_run_12_fx1013,y_vs_run_12_fy1013,y_vs_run_12_fex1013,y_vs_run_12_fey1013);
   gre->SetName("y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_121013 = new TH1F("Graph_y_vs_run_121013","Graph",100,24570,24642);
   Graph_y_vs_run_121013->SetMinimum(74.22953);
   Graph_y_vs_run_121013->SetMaximum(74.75421);
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
   
   Double_t y_vs_run_13_fx1014[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_13_fy1014[29] = {
   75.04695,
   75.13737,
   75.08451,
   75.08881,
   75.09964,
   75.10363,
   75.07161,
   75.08109,
   75.05403,
   75.08125,
   75.0794,
   75.08441,
   75.04237,
   75.02415,
   75.02686,
   75.03016,
   75.03866,
   75.02234,
   75.00186,
   75.02892,
   75.07471,
   75.05983,
   75.08487,
   75.16028,
   75.12032,
   75.11673,
   75.1465,
   75.11804,
   75.13729};
   Double_t y_vs_run_13_fex1014[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_13_fey1014[29] = {
   0.05126722,
   0.01901798,
   0.0178,
   0.02629026,
   0.0176556,
   0.01798506,
   0.0167836,
   0.01750139,
   0.01741333,
   0.01644595,
   0.01814592,
   0.01730653,
   0.01811272,
   0.02479985,
   0.01838959,
   0.02627476,
   0.01793188,
   0.01683408,
   0.01698336,
   0.01762741,
   0.01796531,
   0.02062722,
   0.02063549,
   0.1869953,
   0.02449251,
   0.01731852,
   0.01668465,
   0.01690261,
   0.01756525};
   gre = new TGraphErrors(29,y_vs_run_13_fx1014,y_vs_run_13_fy1014,y_vs_run_13_fex1014,y_vs_run_13_fey1014);
   gre->SetName("y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_131014 = new TH1F("Graph_y_vs_run_131014","Graph",100,24570,24642);
   Graph_y_vs_run_131014->SetMinimum(74.93588);
   Graph_y_vs_run_131014->SetMaximum(75.38467);
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
   
   Double_t y_vs_run_14_fx1015[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_14_fy1015[29] = {
   74.67151,
   74.67418,
   74.67738,
   74.69221,
   74.66979,
   74.65138,
   74.62174,
   74.64362,
   74.63708,
   74.65592,
   74.63657,
   74.63091,
   74.63252,
   74.636,
   74.64947,
   74.59494,
   74.5848,
   74.62783,
   74.60739,
   74.58652,
   74.67759,
   74.60671,
   74.62925,
   74.50586,
   74.61724,
   74.69047,
   74.69691,
   74.72322,
   74.71998};
   Double_t y_vs_run_14_fex1015[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_14_fey1015[29] = {
   0.05518966,
   0.02045559,
   0.01914065,
   0.02822158,
   0.01896724,
   0.01935878,
   0.01803823,
   0.0188179,
   0.01870096,
   0.01768501,
   0.01951745,
   0.01861873,
   0.01945264,
   0.02668136,
   0.01978699,
   0.02826183,
   0.01925763,
   0.01809828,
   0.01826989,
   0.01895511,
   0.01930474,
   0.02218548,
   0.02218274,
   0.2014323,
   0.02633941,
   0.01858814,
   0.01793152,
   0.01818668,
   0.01886547};
   gre = new TGraphErrors(29,y_vs_run_14_fx1015,y_vs_run_14_fy1015,y_vs_run_14_fex1015,y_vs_run_14_fey1015);
   gre->SetName("y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_141015 = new TH1F("Graph_y_vs_run_141015","Graph",100,24570,24642);
   Graph_y_vs_run_141015->SetMinimum(74.26073);
   Graph_y_vs_run_141015->SetMaximum(74.7851);
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
   
   Double_t y_vs_run_15_fx1016[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_15_fy1016[29] = {
   75.55448,
   75.50885,
   75.51537,
   75.48183,
   75.51033,
   75.48213,
   75.52517,
   75.46722,
   75.4712,
   75.49495,
   75.48179,
   75.47764,
   75.49528,
   75.46241,
   75.45335,
   75.46081,
   75.45574,
   75.43082,
   75.48504,
   75.4509,
   75.48734,
   75.49052,
   75.52323,
   75.25704,
   75.55769,
   75.54765,
   75.5523,
   75.58422,
   75.54157};
   Double_t y_vs_run_15_fex1016[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_15_fey1016[29] = {
   0.0552481,
   0.02048413,
   0.01916191,
   0.02825118,
   0.01899934,
   0.01936212,
   0.01805614,
   0.01882022,
   0.01873408,
   0.01769065,
   0.01952764,
   0.01862443,
   0.0194797,
   0.02666544,
   0.01976951,
   0.02829066,
   0.01927395,
   0.01809627,
   0.0182763,
   0.01897176,
   0.01932518,
   0.02220239,
   0.02217239,
   0.2026391,
   0.0263697,
   0.01861521,
   0.01794733,
   0.01820358,
   0.01888062};
   gre = new TGraphErrors(29,y_vs_run_15_fx1016,y_vs_run_15_fy1016,y_vs_run_15_fex1016,y_vs_run_15_fey1016);
   gre->SetName("y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_151016 = new TH1F("Graph_y_vs_run_151016","Graph",100,24570,24642);
   Graph_y_vs_run_151016->SetMinimum(74.99887);
   Graph_y_vs_run_151016->SetMaximum(75.66527);
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
   
   Double_t y_vs_run_16_fx1017[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_16_fy1017[29] = {
   74.66392,
   74.69008,
   74.70485,
   74.70147,
   74.68151,
   74.64738,
   74.65333,
   74.639,
   74.68548,
   74.66865,
   74.66077,
   74.64975,
   74.6282,
   74.65197,
   74.60582,
   74.59261,
   74.58659,
   74.58786,
   74.63019,
   74.65711,
   74.67534,
   74.67183,
   74.66601,
   74.54465,
   74.73268,
   74.76116,
   74.74075,
   74.74355,
   74.7599};
   Double_t y_vs_run_16_fex1017[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_16_fey1017[29] = {
   0.05658169,
   0.02093032,
   0.01959781,
   0.02887586,
   0.01941789,
   0.01979474,
   0.0184644,
   0.01924454,
   0.0191458,
   0.01809737,
   0.01994856,
   0.01904465,
   0.01991847,
   0.02727922,
   0.02022228,
   0.02894137,
   0.0197215,
   0.01851273,
   0.01867939,
   0.0193884,
   0.01976568,
   0.02269318,
   0.0226654,
   0.2048506,
   0.02695396,
   0.01903489,
   0.01833782,
   0.01858842,
   0.01929642};
   gre = new TGraphErrors(29,y_vs_run_16_fx1017,y_vs_run_16_fy1017,y_vs_run_16_fex1017,y_vs_run_16_fey1017);
   gre->SetName("y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_161017 = new TH1F("Graph_y_vs_run_161017","Graph",100,24570,24642);
   Graph_y_vs_run_161017->SetMinimum(74.29576);
   Graph_y_vs_run_161017->SetMaximum(74.82424);
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
   
   Double_t y_vs_run_17_fx1018[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_17_fy1018[29] = {
   75.66661,
   75.56222,
   75.56978,
   75.53105,
   75.50996,
   75.52815,
   75.52831,
   75.49153,
   75.50371,
   75.49019,
   75.47865,
   75.51245,
   75.50708,
   75.473,
   75.51216,
   75.44609,
   75.45544,
   75.46336,
   75.44782,
   75.47929,
   75.50697,
   75.52284,
   75.52244,
   75.68778,
   75.58691,
   75.59351,
   75.57702,
   75.60425,
   75.59482};
   Double_t y_vs_run_17_fex1018[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_17_fey1018[29] = {
   0.05594422,
   0.02068398,
   0.01936564,
   0.02858578,
   0.01920999,
   0.01958031,
   0.01825681,
   0.01905419,
   0.01893118,
   0.01788201,
   0.01972067,
   0.01883948,
   0.0196814,
   0.02700117,
   0.02000321,
   0.02861091,
   0.01951077,
   0.0183197,
   0.01847749,
   0.01919626,
   0.01955094,
   0.02245272,
   0.02241538,
   0.2031112,
   0.02667251,
   0.01882064,
   0.018125,
   0.01839488,
   0.01907764};
   gre = new TGraphErrors(29,y_vs_run_17_fx1018,y_vs_run_17_fy1018,y_vs_run_17_fex1018,y_vs_run_17_fey1018);
   gre->SetName("y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_171018 = new TH1F("Graph_y_vs_run_171018","Graph",100,24570,24642);
   Graph_y_vs_run_171018->SetMinimum(75.37014);
   Graph_y_vs_run_171018->SetMaximum(75.93823);
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
   
   Double_t y_vs_run_18_fx1019[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_18_fy1019[29] = {
   75.88856,
   75.85227,
   75.81825,
   75.8107,
   75.78523,
   75.81383,
   75.78471,
   75.75991,
   75.82269,
   75.76717,
   75.76052,
   75.7752,
   75.77017,
   75.74889,
   75.75699,
   75.75811,
   75.75007,
   75.76515,
   75.74453,
   75.74722,
   75.76407,
   75.79148,
   75.81828,
   75.75738,
   75.82713,
   75.86409,
   75.83272,
   75.8497,
   75.88404};
   Double_t y_vs_run_18_fex1019[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_18_fey1019[29] = {
   0.05464055,
   0.02015528,
   0.01887156,
   0.02783418,
   0.01869831,
   0.01906675,
   0.01779808,
   0.01855463,
   0.01845137,
   0.01743223,
   0.01924373,
   0.01834429,
   0.0191826,
   0.02628797,
   0.01950269,
   0.02786484,
   0.0190014,
   0.01783345,
   0.01800178,
   0.01867413,
   0.0190431,
   0.02187418,
   0.02186771,
   0.1989152,
   0.02595289,
   0.01832939,
   0.01767179,
   0.01791741,
   0.01859787};
   gre = new TGraphErrors(29,y_vs_run_18_fx1019,y_vs_run_18_fy1019,y_vs_run_18_fex1019,y_vs_run_18_fey1019);
   gre->SetName("y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_181019 = new TH1F("Graph_y_vs_run_181019","Graph",100,24570,24642);
   Graph_y_vs_run_181019->SetMinimum(75.51868);
   Graph_y_vs_run_181019->SetMaximum(75.99608);
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
   
   Double_t y_vs_run_19_fx1020[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_19_fy1020[29] = {
   74.63866,
   74.64453,
   74.6739,
   74.70252,
   74.66657,
   74.65318,
   74.6719,
   74.63802,
   74.67225,
   74.66129,
   74.67865,
   74.64429,
   74.65131,
   74.63719,
   74.62082,
   74.59178,
   74.61925,
   74.61092,
   74.6508,
   74.62168,
   74.67519,
   74.65276,
   74.66946,
   74.61367,
   74.68649,
   74.68978,
   74.68963,
   74.71489,
   74.70792};
   Double_t y_vs_run_19_fex1020[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_19_fey1020[29] = {
   0.05250988,
   0.01941852,
   0.01815525,
   0.02679862,
   0.01799514,
   0.01836483,
   0.0171264,
   0.0178726,
   0.01775849,
   0.01679888,
   0.01852219,
   0.01766299,
   0.01847652,
   0.02533085,
   0.01876,
   0.02679748,
   0.01826706,
   0.01717655,
   0.01733833,
   0.01798962,
   0.01831913,
   0.02104949,
   0.02106206,
   0.1928387,
   0.02499993,
   0.01766373,
   0.01702746,
   0.01726193,
   0.01790062};
   gre = new TGraphErrors(29,y_vs_run_19_fx1020,y_vs_run_19_fy1020,y_vs_run_19_fex1020,y_vs_run_19_fey1020);
   gre->SetName("y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_191020 = new TH1F("Graph_y_vs_run_191020","Graph",100,24570,24642);
   Graph_y_vs_run_191020->SetMinimum(74.38226);
   Graph_y_vs_run_191020->SetMaximum(74.84507);
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
   
   Double_t y_vs_run_20_fx1021[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_20_fy1021[29] = {
   75.16956,
   75.20008,
   75.17876,
   75.13771,
   75.19574,
   75.17225,
   75.15359,
   75.1566,
   75.15461,
   75.1693,
   75.12211,
   75.11802,
   75.13524,
   75.15306,
   75.12228,
   75.05823,
   75.09721,
   75.10984,
   75.1297,
   75.08683,
   75.16669,
   75.17247,
   75.16466,
   75.28754,
   75.14188,
   75.18536,
   75.19445,
   75.2168,
   75.25031};
   Double_t y_vs_run_20_fex1021[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_20_fey1021[29] = {
   0.05577393,
   0.02068268,
   0.0193418,
   0.02855161,
   0.01917693,
   0.01953783,
   0.01822822,
   0.01899675,
   0.01890384,
   0.01785661,
   0.01971538,
   0.01880646,
   0.0196762,
   0.02694851,
   0.01994629,
   0.02857103,
   0.01944737,
   0.01828206,
   0.018437,
   0.01912785,
   0.01950232,
   0.02237921,
   0.02238486,
   0.2033333,
   0.02661157,
   0.01879625,
   0.01810961,
   0.01835303,
   0.01906211};
   gre = new TGraphErrors(29,y_vs_run_20_fx1021,y_vs_run_20_fy1021,y_vs_run_20_fex1021,y_vs_run_20_fey1021);
   gre->SetName("y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_201021 = new TH1F("Graph_y_vs_run_201021","Graph",100,24570,24642);
   Graph_y_vs_run_201021->SetMinimum(74.98354);
   Graph_y_vs_run_201021->SetMaximum(75.537);
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
   
   Double_t y_vs_run_21_fx1022[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_21_fy1022[29] = {
   75.07583,
   75.0081,
   75.00826,
   74.99791,
   74.98082,
   75.00033,
   74.96285,
   74.95465,
   74.95565,
   75.00114,
   74.95917,
   74.97753,
   74.96309,
   74.9911,
   74.96375,
   74.98019,
   74.95299,
   74.95946,
   74.97499,
   74.98217,
   75.00313,
   74.96927,
   74.98252,
   75.27706,
   75.03078,
   75.04083,
   75.06762,
   75.04454,
   75.04569};
   Double_t y_vs_run_21_fex1022[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_21_fey1022[29] = {
   0.05736941,
   0.02122877,
   0.01983761,
   0.02926012,
   0.01968931,
   0.02005497,
   0.01870792,
   0.01951054,
   0.01939406,
   0.01832987,
   0.02021611,
   0.01929229,
   0.02019852,
   0.02765253,
   0.02050257,
   0.02932635,
   0.01998423,
   0.01874776,
   0.0189236,
   0.0196596,
   0.01999418,
   0.02297748,
   0.02296994,
   0.2095598,
   0.02731514,
   0.01927291,
   0.01857988,
   0.01883415,
   0.01955151};
   gre = new TGraphErrors(29,y_vs_run_21_fx1022,y_vs_run_21_fy1022,y_vs_run_21_fex1022,y_vs_run_21_fey1022);
   gre->SetName("y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_211022 = new TH1F("Graph_y_vs_run_211022","Graph",100,24570,24642);
   Graph_y_vs_run_211022->SetMinimum(74.87764);
   Graph_y_vs_run_211022->SetMaximum(75.54198);
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
   
   Double_t y_vs_run_22_fx1023[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_22_fy1023[29] = {
   75.092,
   75.06292,
   75.01924,
   75.03192,
   75.00929,
   75.01066,
   75.00724,
   74.97364,
   74.96739,
   74.97646,
   74.99239,
   74.99646,
   74.99101,
   74.94272,
   74.9877,
   74.95264,
   74.944,
   74.97215,
   74.95965,
   74.995,
   75.01329,
   75.03027,
   75.03828,
   74.98636,
   75.04811,
   75.0637,
   75.06913,
   75.07063,
   75.0787};
   Double_t y_vs_run_22_fex1023[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_22_fey1023[29] = {
   0.05657667,
   0.02097609,
   0.01964156,
   0.02894152,
   0.01947093,
   0.01984563,
   0.01852149,
   0.01930612,
   0.01920838,
   0.01813746,
   0.02001147,
   0.01908557,
   0.01997126,
   0.02737016,
   0.02030522,
   0.02905185,
   0.01976672,
   0.01856356,
   0.0187259,
   0.01942473,
   0.01980358,
   0.02274369,
   0.02273079,
   0.2048181,
   0.02698504,
   0.01905812,
   0.01838257,
   0.01864938,
   0.01934901};
   gre = new TGraphErrors(29,y_vs_run_22_fx1023,y_vs_run_22_fy1023,y_vs_run_22_fex1023,y_vs_run_22_fey1023);
   gre->SetName("y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_221023 = new TH1F("Graph_y_vs_run_221023","Graph",100,24570,24642);
   Graph_y_vs_run_221023->SetMinimum(74.74058);
   Graph_y_vs_run_221023->SetMaximum(75.23214);
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
   
   Double_t y_vs_run_23_fx1024[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_23_fy1024[29] = {
   74.79837,
   74.83683,
   74.79377,
   74.75902,
   74.78007,
   74.78185,
   74.76674,
   74.78269,
   74.76761,
   74.76592,
   74.76452,
   74.75133,
   74.70369,
   74.74796,
   74.7186,
   74.74128,
   74.72553,
   74.70705,
   74.7254,
   74.70936,
   74.7691,
   74.70182,
   74.73032,
   74.67729,
   74.78365,
   74.81396,
   74.83381,
   74.81848,
   74.84473};
   Double_t y_vs_run_23_fex1024[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_23_fey1024[29] = {
   0.05614319,
   0.02080186,
   0.01947904,
   0.028712,
   0.01930513,
   0.01967953,
   0.01835405,
   0.01914229,
   0.01904081,
   0.01798266,
   0.01982498,
   0.01892528,
   0.01977675,
   0.0271163,
   0.02009141,
   0.02877301,
   0.01959139,
   0.01838539,
   0.01856317,
   0.01926317,
   0.01960257,
   0.02252724,
   0.02251072,
   0.2049532,
   0.02671763,
   0.01886992,
   0.01820329,
   0.01847083,
   0.01917015};
   gre = new TGraphErrors(29,y_vs_run_23_fx1024,y_vs_run_23_fy1024,y_vs_run_23_fex1024,y_vs_run_23_fey1024);
   gre->SetName("y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_231024 = new TH1F("Graph_y_vs_run_231024","Graph",100,24570,24642);
   Graph_y_vs_run_231024->SetMinimum(74.43134);
   Graph_y_vs_run_231024->SetMaximum(74.92323);
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
   
   Double_t y_vs_run_24_fx1025[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t y_vs_run_24_fy1025[29] = {
   75.22766,
   75.30329,
   75.29569,
   75.23368,
   75.30822,
   75.28478,
   75.27966,
   75.2335,
   75.2399,
   75.22321,
   75.26714,
   75.22835,
   75.20891,
   75.25078,
   75.20818,
   75.20511,
   75.18665,
   75.22393,
   75.21287,
   75.1996,
   75.23343,
   75.20952,
   75.25201,
   75.66627,
   75.24823,
   75.31565,
   75.33646,
   75.33222,
   75.30954};
   Double_t y_vs_run_24_fex1025[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t y_vs_run_24_fey1025[29] = {
   0.05507884,
   0.0204529,
   0.01915313,
   0.02823956,
   0.01898447,
   0.01936857,
   0.01805518,
   0.0188247,
   0.0187328,
   0.01769194,
   0.01951569,
   0.01860719,
   0.01946662,
   0.02669297,
   0.01977507,
   0.02828844,
   0.01925467,
   0.01809241,
   0.01824943,
   0.01896179,
   0.01929426,
   0.02217017,
   0.02215078,
   0.2005963,
   0.02632838,
   0.01859218,
   0.01793856,
   0.01816818,
   0.01885796};
   gre = new TGraphErrors(29,y_vs_run_24_fx1025,y_vs_run_24_fy1025,y_vs_run_24_fex1025,y_vs_run_24_fey1025);
   gre->SetName("y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_y_vs_run_241025 = new TH1F("Graph_y_vs_run_241025","Graph",100,24570,24642);
   Graph_y_vs_run_241025->SetMinimum(75.09745);
   Graph_y_vs_run_241025->SetMaximum(75.93682);
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
