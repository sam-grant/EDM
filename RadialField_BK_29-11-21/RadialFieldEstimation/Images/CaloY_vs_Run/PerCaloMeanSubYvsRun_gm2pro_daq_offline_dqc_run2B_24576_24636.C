void PerCaloMeanSubYvsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 26 18:37:19 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(24559.71,-3.125,24662.57,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t meanSub_y_vs_run_1_fx1026[29] = {
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
   Double_t meanSub_y_vs_run_1_fy1026[29] = {
   -0.02932172,
   0.0320435,
   0.04965132,
   -0.02308769,
   0.003152954,
   0.03976739,
   -0.01652737,
   -0.02928386,
   0.0005534479,
   -0.03396958,
   0.01248905,
   -0.04003776,
   -0.06935859,
   -0.03035874,
   -0.003174078,
   -0.02555074,
   -0.04299731,
   -0.02307534,
   -0.03860886,
   -0.03504194,
   -0.004220759,
   0.005037609,
   -0.02387853,
   0.04490936,
   0.02460579,
   0.06592193,
   0.07179918,
   0.06182855,
   0.05673279};
   Double_t meanSub_y_vs_run_1_fex1026[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_1_fey1026[29] = {
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
   TGraphErrors *gre = new TGraphErrors(29,meanSub_y_vs_run_1_fx1026,meanSub_y_vs_run_1_fy1026,meanSub_y_vs_run_1_fex1026,meanSub_y_vs_run_1_fey1026);
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
   
   TH1F *Graph_meanSub_y_vs_run_11026 = new TH1F("Graph_meanSub_y_vs_run_11026","",100,24570,24642);
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
   
   Double_t meanSub_y_vs_run_2_fx1027[29] = {
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
   Double_t meanSub_y_vs_run_2_fy1027[29] = {
   0.06556092,
   0.02528414,
   0.004144807,
   -0.01534578,
   -0.01749192,
   0.02603736,
   -0.02176139,
   -0.05378502,
   -0.01344352,
   -0.05577968,
   -0.01713118,
   -0.03284464,
   -0.04496398,
   -0.09630501,
   -0.04285527,
   0.0002222145,
   -0.01933427,
   -0.08601453,
   -0.04285026,
   -0.03822126,
   -0.01452177,
   -0.001884154,
   0.01019736,
   0.1907075,
   0.01338061,
   0.0594016,
   0.06877997,
   0.06805027,
   0.08276689};
   Double_t meanSub_y_vs_run_2_fex1027[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_2_fey1027[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_2_fx1027,meanSub_y_vs_run_2_fy1027,meanSub_y_vs_run_2_fex1027,meanSub_y_vs_run_2_fey1027);
   gre->SetName("meanSub_y_vs_run_2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_21027 = new TH1F("Graph_meanSub_y_vs_run_21027","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_21027->SetMinimum(-0.1748282);
   Graph_meanSub_y_vs_run_21027->SetMaximum(0.4456301);
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
   
   Double_t meanSub_y_vs_run_3_fx1028[29] = {
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
   Double_t meanSub_y_vs_run_3_fy1028[29] = {
   0.1199095,
   0.03853339,
   0.04985098,
   -0.01699958,
   0.01949676,
   -0.0199898,
   -0.005147183,
   0.02613156,
   -0.02825578,
   -0.02413694,
   -0.01992892,
   -0.003619983,
   -0.02840971,
   -0.03250279,
   -0.009190647,
   -0.0578295,
   -0.0009256291,
   -0.02412735,
   -0.03310357,
   -0.03515801,
   -0.02098377,
   0.002932608,
   0.01802923,
   -0.1194158,
   -0.01071142,
   0.03500204,
   0.04472129,
   0.07030588,
   0.06552322};
   Double_t meanSub_y_vs_run_3_fex1028[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_3_fey1028[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_3_fx1028,meanSub_y_vs_run_3_fy1028,meanSub_y_vs_run_3_fex1028,meanSub_y_vs_run_3_fey1028);
   gre->SetName("meanSub_y_vs_run_3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_31028 = new TH1F("Graph_meanSub_y_vs_run_31028","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_31028->SetMinimum(-0.3762086);
   Graph_meanSub_y_vs_run_31028->SetMaximum(0.2269183);
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
   
   Double_t meanSub_y_vs_run_4_fx1029[29] = {
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
   Double_t meanSub_y_vs_run_4_fy1029[29] = {
   0.2075052,
   0.0466389,
   0.01019406,
   -0.0278977,
   0.008539158,
   0.01372506,
   0.002004624,
   -0.03802545,
   -0.04117195,
   -0.04454478,
   -0.0004565066,
   -0.04377189,
   -0.05352327,
   -0.002161301,
   -0.06319881,
   -0.05924856,
   -0.03808834,
   -0.09047871,
   -0.007401839,
   -0.03338211,
   -0.02056723,
   -0.01790421,
   -0.02896991,
   0.06474385,
   0.02512539,
   0.07968858,
   0.05771903,
   0.04538658,
   0.04952213};
   Double_t meanSub_y_vs_run_4_fex1029[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_4_fey1029[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_4_fx1029,meanSub_y_vs_run_4_fy1029,meanSub_y_vs_run_4_fex1029,meanSub_y_vs_run_4_fey1029);
   gre->SetName("meanSub_y_vs_run_4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_41029 = new TH1F("Graph_meanSub_y_vs_run_41029","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_41029->SetMinimum(-0.1825984);
   Graph_meanSub_y_vs_run_41029->SetMaximum(0.3120861);
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
   
   Double_t meanSub_y_vs_run_5_fx1030[29] = {
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
   Double_t meanSub_y_vs_run_5_fy1030[29] = {
   0.1232453,
   -0.008874876,
   0.06748421,
   0.03740676,
   -0.01357643,
   -0.01904037,
   -0.0261659,
   0.00203741,
   -0.05599117,
   -0.05739041,
   -0.0188407,
   -0.02055958,
   -0.03779799,
   -0.06557623,
   -0.03665323,
   -0.03978678,
   -0.06089649,
   -0.06917073,
   -0.06007027,
   -0.05559247,
   0.002895889,
   -0.02690408,
   0.01367555,
   0.1894274,
   0.04931361,
   0.01382999,
   0.04791239,
   0.05833605,
   0.06732312};
   Double_t meanSub_y_vs_run_5_fex1030[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_5_fey1030[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_5_fx1030,meanSub_y_vs_run_5_fy1030,meanSub_y_vs_run_5_fex1030,meanSub_y_vs_run_5_fey1030);
   gre->SetName("meanSub_y_vs_run_5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_51030 = new TH1F("Graph_meanSub_y_vs_run_51030","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_51030->SetMinimum(-0.142102);
   Graph_meanSub_y_vs_run_51030->SetMaximum(0.4467496);
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
   
   Double_t meanSub_y_vs_run_6_fx1031[29] = {
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
   Double_t meanSub_y_vs_run_6_fy1031[29] = {
   0.005633384,
   0.01168481,
   -0.00728175,
   0.0003213111,
   -0.00349944,
   -0.008959041,
   -0.0087437,
   0.01047574,
   0.01963552,
   -0.02198726,
   -0.02183898,
   -0.002293395,
   -0.05973318,
   -0.02923207,
   -0.07190712,
   -0.02814536,
   -0.01220954,
   -0.03275324,
   -0.06270854,
   -0.04228285,
   -0.005509333,
   -0.04756483,
   0.01748051,
   0.1906166,
   -0.0147091,
   0.04514172,
   0.05667715,
   0.06146629,
   0.06222568};
   Double_t meanSub_y_vs_run_6_fex1031[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_6_fey1031[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_6_fx1031,meanSub_y_vs_run_6_fy1031,meanSub_y_vs_run_6_fex1031,meanSub_y_vs_run_6_fey1031);
   gre->SetName("meanSub_y_vs_run_6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_61031 = new TH1F("Graph_meanSub_y_vs_run_61031","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_61031->SetMinimum(-0.1417013);
   Graph_meanSub_y_vs_run_61031->SetMaximum(0.4504693);
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
   
   Double_t meanSub_y_vs_run_7_fx1032[29] = {
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
   Double_t meanSub_y_vs_run_7_fy1032[29] = {
   0.1757934,
   0.04492452,
   0.0134778,
   0.002099244,
   -0.006530128,
   0.01643319,
   -0.006814216,
   -0.02808204,
   -0.04047685,
   -0.01779621,
   -0.01898673,
   6.586066e-05,
   -0.01523939,
   -0.07858904,
   -0.03743793,
   -0.0939232,
   -0.08221337,
   -0.03993164,
   -0.05270372,
   -0.05449961,
   0.01171972,
   0.002457303,
   -0.02109825,
   0.0794306,
   0.009672919,
   0.04232054,
   0.0250809,
   0.0977345,
   0.07311187};
   Double_t meanSub_y_vs_run_7_fex1032[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_7_fey1032[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_7_fx1032,meanSub_y_vs_run_7_fy1032,meanSub_y_vs_run_7_fex1032,meanSub_y_vs_run_7_fey1032);
   gre->SetName("meanSub_y_vs_run_7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_71032 = new TH1F("Graph_meanSub_y_vs_run_71032","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_71032->SetMinimum(-0.1685084);
   Graph_meanSub_y_vs_run_71032->SetMaximum(0.3273696);
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
   
   Double_t meanSub_y_vs_run_8_fx1033[29] = {
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
   Double_t meanSub_y_vs_run_8_fy1033[29] = {
   -0.02109519,
   -0.003484856,
   0.01392361,
   -0.007572497,
   0.01022584,
   0.01308919,
   0.006988223,
   0.006700273,
   -0.01958563,
   -0.002813556,
   -0.01345849,
   -0.03269155,
   -0.04559831,
   -0.01842383,
   -0.05023548,
   -0.01475387,
   -0.07853432,
   -0.04287393,
   -0.06979226,
   -0.03487307,
   -0.01694944,
   -0.001397513,
   -0.02025595,
   0.168365,
   -0.006848694,
   0.06068505,
   0.0489684,
   0.07600527,
   0.09628751};
   Double_t meanSub_y_vs_run_8_fex1033[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_8_fey1033[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_8_fx1033,meanSub_y_vs_run_8_fy1033,meanSub_y_vs_run_8_fex1033,meanSub_y_vs_run_8_fey1033);
   gre->SetName("meanSub_y_vs_run_8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_81033 = new TH1F("Graph_meanSub_y_vs_run_81033","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_81033->SetMinimum(-0.1455577);
   Graph_meanSub_y_vs_run_81033->SetMaximum(0.4209743);
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
   
   Double_t meanSub_y_vs_run_9_fx1034[29] = {
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
   Double_t meanSub_y_vs_run_9_fy1034[29] = {
   0.02249253,
   0.05654192,
   0.02156558,
   0.05272576,
   0.02020592,
   0.01102343,
   -0.02762687,
   -0.01272171,
   -0.02581916,
   -0.01115428,
   -0.01516638,
   -0.002710706,
   -0.04637316,
   -0.0009911832,
   -0.03541661,
   -0.1056731,
   -0.07207702,
   -0.07745634,
   -0.07526197,
   -0.03517977,
   -0.005255444,
   -0.006029357,
   0.02154868,
   0.1123863,
   -0.0005565082,
   0.03562579,
   0.07741582,
   0.05027316,
   0.07366476};
   Double_t meanSub_y_vs_run_9_fex1034[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_9_fey1034[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_9_fx1034,meanSub_y_vs_run_9_fy1034,meanSub_y_vs_run_9_fex1034,meanSub_y_vs_run_9_fey1034);
   gre->SetName("meanSub_y_vs_run_9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_91034 = new TH1F("Graph_meanSub_y_vs_run_91034","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_91034->SetMinimum(-0.1835087);
   Graph_meanSub_y_vs_run_91034->SetMaximum(0.3796076);
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
   
   Double_t meanSub_y_vs_run_10_fx1035[29] = {
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
   Double_t meanSub_y_vs_run_10_fy1035[29] = {
   0.0384018,
   0.0417128,
   0.02081535,
   0.08834802,
   -0.01543142,
   -0.02530592,
   -0.01018298,
   -0.02669993,
   -0.01959848,
   -0.0203633,
   -0.03108805,
   -0.04406694,
   -0.04180986,
   -0.03834542,
   -0.05462519,
   -0.07477809,
   -0.09130038,
   -0.05117212,
   -0.06719994,
   -0.04173204,
   -0.008961629,
   -0.04105848,
   -0.008966516,
   0.3308412,
   0.0003709003,
   0.04090118,
   0.02485484,
   0.04976173,
   0.07667889};
   Double_t meanSub_y_vs_run_10_fex1035[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_10_fey1035[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_10_fx1035,meanSub_y_vs_run_10_fy1035,meanSub_y_vs_run_10_fex1035,meanSub_y_vs_run_10_fey1035);
   gre->SetName("meanSub_y_vs_run_10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_101035 = new TH1F("Graph_meanSub_y_vs_run_101035","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_101035->SetMinimum(-0.1757641);
   Graph_meanSub_y_vs_run_101035->SetMaximum(0.6022555);
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
   
   Double_t meanSub_y_vs_run_11_fx1036[29] = {
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
   Double_t meanSub_y_vs_run_11_fy1036[29] = {
   0.1692629,
   0.0565845,
   0.02420553,
   0.008874614,
   0.01168103,
   0.006691792,
   -0.003435739,
   0.003604617,
   0.02973514,
   -0.02585104,
   -0.02522343,
   -0.0519064,
   -0.04625281,
   -0.03638901,
   -0.03432012,
   -0.07795068,
   -0.01971009,
   -0.04899212,
   -0.03134761,
   -0.01333761,
   -0.01136149,
   -0.04039774,
   -0.001401064,
   -0.1370924,
   0.03003148,
   0.04319521,
   0.08781979,
   0.06577603,
   0.06750673};
   Double_t meanSub_y_vs_run_11_fex1036[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_11_fey1036[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_11_fx1036,meanSub_y_vs_run_11_fy1036,meanSub_y_vs_run_11_fex1036,meanSub_y_vs_run_11_fey1036);
   gre->SetName("meanSub_y_vs_run_11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_111036 = new TH1F("Graph_meanSub_y_vs_run_111036","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_111036->SetMinimum(-0.3974261);
   Graph_meanSub_y_vs_run_111036->SetMaximum(0.2815418);
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
   
   Double_t meanSub_y_vs_run_12_fx1037[29] = {
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
   Double_t meanSub_y_vs_run_12_fy1037[29] = {
   0.09042428,
   0.01239401,
   -0.009867002,
   0.006881511,
   -0.02161741,
   0.009360793,
   0.02125545,
   -0.03133167,
   -0.0180634,
   -0.01450463,
   -0.01960282,
   0.008355291,
   -0.02477598,
   -0.04920979,
   -0.07495972,
   -0.06579044,
   -0.03661059,
   -0.05703248,
   -0.05532087,
   -0.01389348,
   -0.02373445,
   -0.007810156,
   -0.02895076,
   0.1424991,
   0.02952797,
   0.02392292,
   0.05320458,
   0.08654097,
   0.06870877};
   Double_t meanSub_y_vs_run_12_fex1037[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_12_fey1037[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_12_fx1037,meanSub_y_vs_run_12_fy1037,meanSub_y_vs_run_12_fex1037,meanSub_y_vs_run_12_fey1037);
   gre->SetName("meanSub_y_vs_run_12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_121037 = new TH1F("Graph_meanSub_y_vs_run_121037","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_121037->SetMinimum(-0.1382852);
   Graph_meanSub_y_vs_run_121037->SetMaximum(0.3863951);
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
   
   Double_t meanSub_y_vs_run_13_fx1038[29] = {
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
   Double_t meanSub_y_vs_run_13_fy1038[29] = {
   -0.03051611,
   0.05990339,
   0.00704288,
   0.01134195,
   0.02216798,
   0.02615901,
   -0.005862523,
   0.003618444,
   -0.02343395,
   0.003784199,
   0.00193043,
   0.006938874,
   -0.03510225,
   -0.05331599,
   -0.05060861,
   -0.04730873,
   -0.03881105,
   -0.05512804,
   -0.07560801,
   -0.04855155,
   -0.002762864,
   -0.01763315,
   0.007402437,
   0.08280839,
   0.04284779,
   0.03926274,
   0.069035,
   0.04057328,
   0.05982604};
   Double_t meanSub_y_vs_run_13_fex1038[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_13_fey1038[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_13_fx1038,meanSub_y_vs_run_13_fy1038,meanSub_y_vs_run_13_fex1038,meanSub_y_vs_run_13_fey1038);
   gre->SetName("meanSub_y_vs_run_13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_131038 = new TH1F("Graph_meanSub_y_vs_run_131038","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_131038->SetMinimum(-0.141586);
   Graph_meanSub_y_vs_run_131038->SetMaximum(0.3072027);
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
   
   Double_t meanSub_y_vs_run_14_fx1039[29] = {
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
   Double_t meanSub_y_vs_run_14_fy1039[29] = {
   0.02844428,
   0.03110809,
   0.03431299,
   0.04914456,
   0.02672376,
   0.008307422,
   -0.02132556,
   0.0005496275,
   -0.005988108,
   0.01285458,
   -0.006496664,
   -0.01216179,
   -0.01054919,
   -0.007068576,
   0.006404207,
   -0.04812612,
   -0.05826921,
   -0.01523508,
   -0.03568005,
   -0.05654678,
   0.03451866,
   -0.03635697,
   -0.01382278,
   -0.1372104,
   -0.02582999,
   0.0474047,
   0.05383685,
   0.0801459,
   0.07691165};
   Double_t meanSub_y_vs_run_14_fex1039[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_14_fey1039[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_14_fx1039,meanSub_y_vs_run_14_fy1039,meanSub_y_vs_run_14_fex1039,meanSub_y_vs_run_14_fey1039);
   gre->SetName("meanSub_y_vs_run_14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_141039 = new TH1F("Graph_meanSub_y_vs_run_141039","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_141039->SetMinimum(-0.3823402);
   Graph_meanSub_y_vs_run_141039->SetMaximum(0.1420301);
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
   
   Double_t meanSub_y_vs_run_15_fx1040[29] = {
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
   Double_t meanSub_y_vs_run_15_fy1040[29] = {
   0.06459228,
   0.01896183,
   0.02547468,
   -0.008066742,
   0.02043508,
   -0.007765168,
   0.03527393,
   -0.02267546,
   -0.01869425,
   0.0050579,
   -0.008098572,
   -0.01224861,
   0.005391004,
   -0.02747968,
   -0.03654608,
   -0.0290816,
   -0.03415337,
   -0.05906998,
   -0.004850875,
   -0.03899302,
   -0.002546908,
   0.0006264111,
   0.03334023,
   -0.2328518,
   0.06779752,
   0.05776251,
   0.06240611,
   0.09432753,
   0.05167509};
   Double_t meanSub_y_vs_run_15_fex1040[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_15_fey1040[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_15_fx1040,meanSub_y_vs_run_15_fy1040,meanSub_y_vs_run_15_fex1040,meanSub_y_vs_run_15_fey1040);
   gre->SetName("meanSub_y_vs_run_15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_151040 = new TH1F("Graph_meanSub_y_vs_run_151040","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_151040->SetMinimum(-0.491024);
   Graph_meanSub_y_vs_run_151040->SetMaximum(0.1753735);
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
   
   Double_t meanSub_y_vs_run_16_fx1041[29] = {
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
   Double_t meanSub_y_vs_run_16_fy1041[29] = {
   -0.0009870591,
   0.02516532,
   0.0399416,
   0.03655953,
   0.01660399,
   -0.01753003,
   -0.01158292,
   -0.02590949,
   0.02056551,
   0.003735228,
   -0.00413879,
   -0.01515643,
   -0.0367145,
   -0.01293611,
   -0.05908698,
   -0.07230133,
   -0.07831883,
   -0.07704918,
   -0.03471598,
   -0.007804544,
   0.01042685,
   0.006915301,
   0.001096846,
   -0.1202643,
   0.06776474,
   0.09625328,
   0.07584147,
   0.07864225,
   0.09498456};
   Double_t meanSub_y_vs_run_16_fex1041[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_16_fey1041[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_16_fx1041,meanSub_y_vs_run_16_fy1041,meanSub_y_vs_run_16_fex1041,meanSub_y_vs_run_16_fey1041);
   gre->SetName("meanSub_y_vs_run_16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_161041 = new TH1F("Graph_meanSub_y_vs_run_161041","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_161041->SetMinimum(-0.3691553);
   Graph_meanSub_y_vs_run_161041->SetMaximum(0.1593285);
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
   
   Double_t meanSub_y_vs_run_17_fx1042[29] = {
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
   Double_t meanSub_y_vs_run_17_fy1042[29] = {
   0.1371796,
   0.0327941,
   0.04035023,
   0.00162769,
   -0.01946876,
   -0.001274811,
   -0.001120626,
   -0.03789257,
   -0.02572114,
   -0.03923668,
   -0.05077791,
   -0.01697917,
   -0.02234567,
   -0.05642628,
   -0.01726874,
   -0.08333607,
   -0.07398875,
   -0.06606775,
   -0.08160802,
   -0.05014063,
   -0.02246038,
   -0.00658375,
   -0.006983037,
   0.1583492,
   0.05748565,
   0.0640849,
   0.04759677,
   0.07481961,
   0.06539301};
   Double_t meanSub_y_vs_run_17_fex1042[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_17_fey1042[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_17_fx1042,meanSub_y_vs_run_17_fy1042,meanSub_y_vs_run_17_fex1042,meanSub_y_vs_run_17_fey1042);
   gre->SetName("meanSub_y_vs_run_17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_171042 = new TH1F("Graph_meanSub_y_vs_run_171042","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_171042->SetMinimum(-0.1592877);
   Graph_meanSub_y_vs_run_171042->SetMaximum(0.4088011);
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
   
   Double_t meanSub_y_vs_run_18_fx1043[29] = {
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
   Double_t meanSub_y_vs_run_18_fy1043[29] = {
   0.09307241,
   0.05678341,
   0.02276007,
   0.01521528,
   -0.01025303,
   0.01834403,
   -0.01077237,
   -0.03557484,
   0.02720759,
   -0.02831411,
   -0.03496955,
   -0.02028851,
   -0.02531046,
   -0.04659237,
   -0.0384924,
   -0.03737011,
   -0.04541583,
   -0.03033367,
   -0.05095693,
   -0.04826894,
   -0.03141331,
   -0.004005876,
   0.02279051,
   -0.03810205,
   0.03164524,
   0.06860838,
   0.03723778,
   0.05421134,
   0.08855834};
   Double_t meanSub_y_vs_run_18_fex1043[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_18_fey1043[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_18_fx1043,meanSub_y_vs_run_18_fy1043,meanSub_y_vs_run_18_fex1043,meanSub_y_vs_run_18_fey1043);
   gre->SetName("meanSub_y_vs_run_18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_181043 = new TH1F("Graph_meanSub_y_vs_run_181043","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_181043->SetMinimum(-0.2768003);
   Graph_meanSub_y_vs_run_181043->SetMaximum(0.2005961);
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
   
   Double_t meanSub_y_vs_run_19_fx1044[29] = {
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
   Double_t meanSub_y_vs_run_19_fy1044[29] = {
   -0.01820928,
   -0.01234263,
   0.01702619,
   0.04564888,
   0.009698596,
   -0.003696122,
   0.01503154,
   -0.01885422,
   0.01537999,
   0.004415297,
   0.02178227,
   -0.01257809,
   -0.005563774,
   -0.01968541,
   -0.03605474,
   -0.06509572,
   -0.03762158,
   -0.04595255,
   -0.006071218,
   -0.03519343,
   0.01831748,
   -0.004116137,
   0.01259097,
   -0.04320373,
   0.02962019,
   0.03290575,
   0.03275801,
   0.05801913,
   0.05104433};
   Double_t meanSub_y_vs_run_19_fex1044[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_19_fey1044[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_19_fx1044,meanSub_y_vs_run_19_fy1044,meanSub_y_vs_run_19_fex1044,meanSub_y_vs_run_19_fey1044);
   gre->SetName("meanSub_y_vs_run_19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_191044 = new TH1F("Graph_meanSub_y_vs_run_191044","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_191044->SetMinimum(-0.2746101);
   Graph_meanSub_y_vs_run_191044->SetMaximum(0.1882027);
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
   
   Double_t meanSub_y_vs_run_20_fx1045[29] = {
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
   Double_t meanSub_y_vs_run_20_fy1045[29] = {
   0.01091264,
   0.04143325,
   0.02010732,
   -0.02094481,
   0.03708954,
   0.01359716,
   -0.005065364,
   -0.002055294,
   -0.004042971,
   0.01065206,
   -0.03654108,
   -0.04062753,
   -0.02340592,
   -0.005589129,
   -0.03637205,
   -0.1004207,
   -0.06144347,
   -0.04881193,
   -0.02895317,
   -0.07181912,
   0.008041518,
   0.01382311,
   0.006007434,
   0.1288924,
   -0.0167756,
   0.02671243,
   0.03579784,
   0.05814705,
   0.09165438};
   Double_t meanSub_y_vs_run_20_fex1045[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_20_fey1045[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_20_fx1045,meanSub_y_vs_run_20_fy1045,meanSub_y_vs_run_20_fex1045,meanSub_y_vs_run_20_fey1045);
   gre->SetName("meanSub_y_vs_run_20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_201045 = new TH1F("Graph_meanSub_y_vs_run_201045","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_201045->SetMinimum(-0.1751135);
   Graph_meanSub_y_vs_run_201045->SetMaximum(0.3783474);
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
   
   Double_t meanSub_y_vs_run_21_fx1046[29] = {
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
   Double_t meanSub_y_vs_run_21_fy1046[29] = {
   0.07198616,
   0.004261425,
   0.004422609,
   -0.005932424,
   -0.02302296,
   -0.003514325,
   -0.04099051,
   -0.04919109,
   -0.04819606,
   -0.002699811,
   -0.04467069,
   -0.0263089,
   -0.04075067,
   -0.01274684,
   -0.04009286,
   -0.02365186,
   -0.05085184,
   -0.04437939,
   -0.02885494,
   -0.02166913,
   -0.000707811,
   -0.03457482,
   -0.02132692,
   0.2732156,
   0.02693363,
   0.03699149,
   0.06377521,
   0.0407011,
   0.04184662};
   Double_t meanSub_y_vs_run_21_fex1046[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_21_fey1046[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_21_fx1046,meanSub_y_vs_run_21_fy1046,meanSub_y_vs_run_21_fex1046,meanSub_y_vs_run_21_fey1046);
   gre->SetName("meanSub_y_vs_run_21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_211046 = new TH1F("Graph_meanSub_y_vs_run_211046","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_211046->SetMinimum(-0.1261972);
   Graph_meanSub_y_vs_run_211046->SetMaximum(0.5381365);
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
   
   Double_t meanSub_y_vs_run_22_fx1047[29] = {
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
   Double_t meanSub_y_vs_run_22_fy1047[29] = {
   0.08224775,
   0.05316788,
   0.009484542,
   0.0221625,
   -0.0004648721,
   0.0008997316,
   -0.002512582,
   -0.03611949,
   -0.04236843,
   -0.03330119,
   -0.01736263,
   -0.01329936,
   -0.01874917,
   -0.06703171,
   -0.02205611,
   -0.05711881,
   -0.0657547,
   -0.03760685,
   -0.05010538,
   -0.01476012,
   0.003533284,
   0.02051183,
   0.02851921,
   -0.02339343,
   0.03835552,
   0.05394235,
   0.05936992,
   0.06086854,
   0.06894177};
   Double_t meanSub_y_vs_run_22_fex1047[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_22_fey1047[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_22_fx1047,meanSub_y_vs_run_22_fy1047,meanSub_y_vs_run_22_fex1047,meanSub_y_vs_run_22_fey1047);
   gre->SetName("meanSub_y_vs_run_22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_221047 = new TH1F("Graph_meanSub_y_vs_run_221047","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_221047->SetMinimum(-0.2691751);
   Graph_meanSub_y_vs_run_221047->SetMaximum(0.2223883);
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
   
   Double_t meanSub_y_vs_run_23_fx1048[29] = {
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
   Double_t meanSub_y_vs_run_23_fy1048[29] = {
   0.03627302,
   0.07473814,
   0.03167285,
   -0.003074867,
   0.01797186,
   0.01975721,
   0.004648499,
   0.02059079,
   0.005517927,
   0.003828464,
   0.002426213,
   -0.01076519,
   -0.05840125,
   -0.01413437,
   -0.04349135,
   -0.02081485,
   -0.03656872,
   -0.05504659,
   -0.03669057,
   -0.05273905,
   0.00700421,
   -0.0602784,
   -0.03177435,
   -0.08480744,
   0.02155495,
   0.05186009,
   0.07171806,
   0.05638777,
   0.08263695};
   Double_t meanSub_y_vs_run_23_fex1048[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_23_fey1048[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_23_fx1048,meanSub_y_vs_run_23_fy1048,meanSub_y_vs_run_23_fex1048,meanSub_y_vs_run_23_fey1048);
   gre->SetName("meanSub_y_vs_run_23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_231048 = new TH1F("Graph_meanSub_y_vs_run_231048","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_231048->SetMinimum(-0.3307513);
   Graph_meanSub_y_vs_run_231048->SetMaximum(0.1611365);
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
   
   Double_t meanSub_y_vs_run_24_fx1049[29] = {
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
   Double_t meanSub_y_vs_run_24_fy1049[29] = {
   -0.0386975,
   0.03693184,
   0.02933273,
   -0.03268023,
   0.04186078,
   0.01841721,
   0.01329806,
   -0.03285851,
   -0.02646216,
   -0.04315482,
   0.0007756919,
   -0.03801188,
   -0.0574503,
   -0.01557625,
   -0.05818557,
   -0.06125325,
   -0.07971033,
   -0.04243084,
   -0.05348895,
   -0.06676267,
   -0.03292884,
   -0.05684064,
   -0.01434687,
   0.399912,
   -0.0181292,
   0.04929379,
   0.07010355,
   0.06586046,
   0.04318269};
   Double_t meanSub_y_vs_run_24_fex1049[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t meanSub_y_vs_run_24_fey1049[29] = {
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
   gre = new TGraphErrors(29,meanSub_y_vs_run_24_fx1049,meanSub_y_vs_run_24_fy1049,meanSub_y_vs_run_24_fex1049,meanSub_y_vs_run_24_fey1049);
   gre->SetName("meanSub_y_vs_run_24");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9f710");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9f710");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_meanSub_y_vs_run_241049 = new TH1F("Graph_meanSub_y_vs_run_241049","Graph",100,24570,24642);
   Graph_meanSub_y_vs_run_241049->SetMinimum(-0.1689123);
   Graph_meanSub_y_vs_run_241049->SetMaximum(0.6704556);
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
