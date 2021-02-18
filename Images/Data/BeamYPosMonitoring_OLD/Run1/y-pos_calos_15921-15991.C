void y-pos_calos_15921-15991()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 11 11:42:54 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15902,72.8125,16022,79.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph0_fy1002[40] = {
   75.43218,
   75.3972,
   75.47341,
   75.45479,
   75.49313,
   75.46832,
   75.42721,
   75.39762,
   75.45716,
   75.46253,
   75.52594,
   75.46325,
   75.52316,
   75.43088,
   75.52845,
   75.55875,
   75.4911,
   75.55039,
   75.54317,
   75.59676,
   75.58964,
   75.56509,
   75.62987,
   75.60127,
   75.6418,
   75.68484,
   75.6359,
   75.5941,
   75.58675,
   75.56956,
   75.64915,
   75.7015,
   75.70413,
   75.67908,
   75.73116,
   75.77944,
   75.64576,
   75.72037,
   75.65653,
   75.68883};
   Double_t Graph0_fex1002[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1002[40] = {
   0.03608537,
   0.03035312,
   0.03076753,
   0.03046902,
   0.03032289,
   0.0303833,
   0.03158205,
   0.03473747,
   0.03365824,
   0.0362864,
   0.03038485,
   0.03177149,
   0.06016246,
   0.04148974,
   0.03617374,
   0.02976578,
   0.03086301,
   0.03323551,
   0.03042399,
   0.04563621,
   0.03202327,
   0.03133104,
   0.03215571,
   0.0304677,
   0.03026502,
   0.05624805,
   0.02914067,
   0.03255656,
   0.09749681,
   0.05707513,
   0.02991095,
   0.03032265,
   0.03046269,
   0.03000712,
   0.02960118,
   0.03051504,
   0.02921331,
   0.03066884,
   0.02957519,
   0.05717497};
   TGraphErrors *gre = new TGraphErrors(40,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTy_{Calo}#GT [mm]");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#352a86");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#352a86");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","",100,15914,15998);
   Graph_Graph01002->SetMinimum(73.5);
   Graph_Graph01002->SetMaximum(79);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("Run number");
   Graph_Graph01002->GetXaxis()->CenterTitle(true);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("#LTy_{Calo}#GT [mm]");
   Graph_Graph01002->GetYaxis()->CenterTitle(true);
   Graph_Graph01002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("ap plc pmc");
   
   Double_t Graph1_fx1003[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph1_fy1003[40] = {
   74.17493,
   74.18298,
   74.26288,
   74.20054,
   74.20897,
   74.26761,
   74.22918,
   74.19699,
   74.23145,
   74.22704,
   74.33356,
   74.27701,
   74.23953,
   74.31221,
   74.32268,
   74.29145,
   74.35203,
   74.31777,
   74.31917,
   74.26473,
   74.34008,
   74.3948,
   74.31226,
   74.34695,
   74.29762,
   74.42236,
   74.35352,
   74.4021,
   74.47458,
   74.47976,
   74.40052,
   74.47859,
   74.46225,
   74.49568,
   74.58425,
   74.53058,
   74.44615,
   74.48308,
   74.43364,
   74.50353};
   Double_t Graph1_fex1003[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1003[40] = {
   0.04830072,
   0.04063643,
   0.04120998,
   0.04079538,
   0.04060183,
   0.04065606,
   0.0422993,
   0.0464683,
   0.04488579,
   0.04859733,
   0.0407411,
   0.04244834,
   0.08043831,
   0.05550901,
   0.04845154,
   0.03986978,
   0.04130536,
   0.04453483,
   0.04074832,
   0.06129752,
   0.04284942,
   0.04202357,
   0.04312811,
   0.04085797,
   0.04055412,
   0.07525704,
   0.03905191,
   0.04361159,
   0.1305347,
   0.07679857,
   0.04021146,
   0.0406222,
   0.04082817,
   0.04019895,
   0.03972988,
   0.04094721,
   0.03926808,
   0.04115752,
   0.0397395,
   0.07711031};
   gre = new TGraphErrors(40,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#273ba5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,15914,15998);
   Graph_Graph11003->SetMinimum(74.07689);
   Graph_Graph11003->SetMaximum(74.67371);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph2_fx1004[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph2_fy1004[40] = {
   76.57846,
   76.58749,
   76.59833,
   76.59442,
   76.58442,
   76.61641,
   76.63878,
   76.60857,
   76.66158,
   76.59885,
   76.65188,
   76.66667,
   76.61631,
   76.62035,
   76.63446,
   76.66866,
   76.66744,
   76.69371,
   76.6954,
   76.78019,
   76.70014,
   76.78232,
   76.79575,
   76.67958,
   76.78919,
   76.81429,
   76.73773,
   76.70314,
   76.80634,
   76.81408,
   76.80168,
   76.89817,
   76.93408,
   76.94159,
   76.85873,
   76.9407,
   76.90664,
   76.89706,
   76.87068,
   76.80146};
   Double_t Graph2_fex1004[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1004[40] = {
   0.04081669,
   0.0343178,
   0.03481381,
   0.0344243,
   0.03433718,
   0.03432472,
   0.03574177,
   0.03932189,
   0.0380055,
   0.04098455,
   0.03430592,
   0.03589519,
   0.06826948,
   0.04690189,
   0.04086568,
   0.03359833,
   0.03488523,
   0.03757774,
   0.03440239,
   0.05177895,
   0.03616306,
   0.03543875,
   0.03629553,
   0.03446209,
   0.03423893,
   0.0636842,
   0.03298187,
   0.03669852,
   0.1101325,
   0.06459626,
   0.03378272,
   0.0342172,
   0.03443402,
   0.03389226,
   0.03344986,
   0.03446172,
   0.03299423,
   0.03457457,
   0.03334776,
   0.06464021};
   gre = new TGraphErrors(40,Graph2_fx1004,Graph2_fy1004,Graph2_fex1004,Graph2_fey1004);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21004 = new TH1F("Graph_Graph21004","Graph",100,15914,15998);
   Graph_Graph21004->SetMinimum(76.49386);
   Graph_Graph21004->SetMaximum(77.01927);
   Graph_Graph21004->SetDirectory(0);
   Graph_Graph21004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21004->SetLineColor(ci);
   Graph_Graph21004->GetXaxis()->SetLabelFont(42);
   Graph_Graph21004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21004->GetXaxis()->SetTitleFont(42);
   Graph_Graph21004->GetYaxis()->SetLabelFont(42);
   Graph_Graph21004->GetYaxis()->SetTitleFont(42);
   Graph_Graph21004->GetZaxis()->SetLabelFont(42);
   Graph_Graph21004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21004);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph3_fx1005[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph3_fy1005[40] = {
   75.56667,
   75.5313,
   75.59525,
   75.60375,
   75.54152,
   75.57039,
   75.62853,
   75.60474,
   75.64679,
   75.59,
   75.64032,
   75.65894,
   75.76261,
   75.58823,
   75.56129,
   75.65396,
   75.6257,
   75.73776,
   75.65582,
   75.66602,
   75.79674,
   75.75962,
   75.79583,
   75.78392,
   75.70164,
   75.60319,
   75.7423,
   75.70046,
   75.87851,
   75.72878,
   75.76931,
   75.8131,
   75.87361,
   75.8263,
   75.87613,
   75.98051,
   75.85668,
   75.8305,
   75.8591,
   75.89244};
   Double_t Graph3_fex1005[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1005[40] = {
   0.04087964,
   0.03442472,
   0.03489965,
   0.0345754,
   0.03437912,
   0.0343913,
   0.0357438,
   0.03931965,
   0.03812452,
   0.04114224,
   0.03435876,
   0.03595043,
   0.06824496,
   0.04692559,
   0.04101345,
   0.03377847,
   0.03495808,
   0.0376961,
   0.0345346,
   0.05179552,
   0.036327,
   0.03559365,
   0.03647411,
   0.03453465,
   0.03443282,
   0.06378672,
   0.03303233,
   0.03686057,
   0.1098777,
   0.06473791,
   0.0339276,
   0.03432515,
   0.03454921,
   0.03401108,
   0.03355104,
   0.03459877,
   0.03314077,
   0.03470432,
   0.03348567,
   0.0648513};
   gre = new TGraphErrors(40,Graph3_fx1005,Graph3_fy1005,Graph3_fex1005,Graph3_fey1005);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0f5edc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31005 = new TH1F("Graph_Graph31005","Graph",100,15914,15998);
   Graph_Graph31005->SetMinimum(75.44505);
   Graph_Graph31005->SetMaximum(76.06693);
   Graph_Graph31005->SetDirectory(0);
   Graph_Graph31005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31005->SetLineColor(ci);
   Graph_Graph31005->GetXaxis()->SetLabelFont(42);
   Graph_Graph31005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31005->GetXaxis()->SetTitleFont(42);
   Graph_Graph31005->GetYaxis()->SetLabelFont(42);
   Graph_Graph31005->GetYaxis()->SetTitleFont(42);
   Graph_Graph31005->GetZaxis()->SetLabelFont(42);
   Graph_Graph31005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31005);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph4_fx1006[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph4_fy1006[40] = {
   78.06662,
   78.08165,
   78.096,
   78.14608,
   78.08908,
   78.06878,
   78.14046,
   78.12697,
   78.07341,
   78.09954,
   78.12973,
   78.10679,
   78.10876,
   78.13264,
   78.13919,
   78.16179,
   78.12027,
   78.16887,
   78.18007,
   78.19017,
   78.27744,
   78.24879,
   78.17679,
   78.29134,
   78.26676,
   78.29345,
   78.27227,
   78.25655,
   78.21846,
   78.43313,
   78.32276,
   78.41592,
   78.4923,
   78.41835,
   78.43843,
   78.46145,
   78.40901,
   78.3887,
   78.4296,
   78.3254};
   Double_t Graph4_fex1006[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph4_fey1006[40] = {
   0.04459641,
   0.03756811,
   0.0380515,
   0.03770303,
   0.0375582,
   0.03746086,
   0.03902904,
   0.04292554,
   0.04160504,
   0.04494544,
   0.03747817,
   0.03920557,
   0.07463728,
   0.05117894,
   0.04471849,
   0.03676954,
   0.03816096,
   0.04111144,
   0.03763815,
   0.05654096,
   0.03963677,
   0.03876437,
   0.03972615,
   0.03762333,
   0.03745971,
   0.06951313,
   0.0359644,
   0.04012846,
   0.1197172,
   0.0703303,
   0.0369304,
   0.03732677,
   0.03752322,
   0.0370875,
   0.03653782,
   0.03769017,
   0.03603566,
   0.03773219,
   0.03634557,
   0.07052609};
   gre = new TGraphErrors(40,Graph4_fx1006,Graph4_fy1006,Graph4_fex1006,Graph4_fey1006);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41006 = new TH1F("Graph_Graph41006","Graph",100,15914,15998);
   Graph_Graph41006->SetMinimum(77.97125);
   Graph_Graph41006->SetMaximum(78.5806);
   Graph_Graph41006->SetDirectory(0);
   Graph_Graph41006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41006->SetLineColor(ci);
   Graph_Graph41006->GetXaxis()->SetLabelFont(42);
   Graph_Graph41006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41006->GetXaxis()->SetTitleFont(42);
   Graph_Graph41006->GetYaxis()->SetLabelFont(42);
   Graph_Graph41006->GetYaxis()->SetTitleFont(42);
   Graph_Graph41006->GetZaxis()->SetLabelFont(42);
   Graph_Graph41006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41006);
   
   gre->Draw("p ");
   
   Double_t Graph5_fx1007[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph5_fy1007[40] = {
   76.56668,
   76.59253,
   76.5601,
   76.62356,
   76.63933,
   76.63934,
   76.62611,
   76.64309,
   76.69508,
   76.60386,
   76.68297,
   76.6176,
   76.7749,
   76.62188,
   76.75979,
   76.66253,
   76.6979,
   76.68474,
   76.73941,
   76.78258,
   76.76639,
   76.74033,
   76.72004,
   76.82802,
   76.71262,
   76.72308,
   76.78749,
   76.86529,
   76.84766,
   76.74532,
   76.82885,
   76.95911,
   76.91281,
   76.93547,
   76.84712,
   76.92949,
   76.86412,
   76.85507,
   76.88685,
   76.7667};
   Double_t Graph5_fex1007[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph5_fey1007[40] = {
   0.04073214,
   0.03431995,
   0.03474802,
   0.03444647,
   0.03430208,
   0.03427524,
   0.03565972,
   0.03925522,
   0.03800328,
   0.04103213,
   0.0343112,
   0.03588396,
   0.0678824,
   0.04677373,
   0.04084716,
   0.03360598,
   0.03486447,
   0.03767712,
   0.03439073,
   0.05163364,
   0.0361962,
   0.03544127,
   0.03632736,
   0.03445836,
   0.03428809,
   0.06338995,
   0.03296303,
   0.03681253,
   0.1096003,
   0.06447706,
   0.03382968,
   0.03419241,
   0.03432551,
   0.03390447,
   0.03341709,
   0.0345022,
   0.03293169,
   0.03452091,
   0.03332621,
   0.06486712};
   gre = new TGraphErrors(40,Graph5_fx1007,Graph5_fy1007,Graph5_fex1007,Graph5_fey1007);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#116ada");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph51007 = new TH1F("Graph_Graph51007","Graph",100,15914,15998);
   Graph_Graph51007->SetMinimum(76.47855);
   Graph_Graph51007->SetMaximum(77.0401);
   Graph_Graph51007->SetDirectory(0);
   Graph_Graph51007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph51007->SetLineColor(ci);
   Graph_Graph51007->GetXaxis()->SetLabelFont(42);
   Graph_Graph51007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph51007->GetXaxis()->SetTitleFont(42);
   Graph_Graph51007->GetYaxis()->SetLabelFont(42);
   Graph_Graph51007->GetYaxis()->SetTitleFont(42);
   Graph_Graph51007->GetZaxis()->SetLabelFont(42);
   Graph_Graph51007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph51007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51007);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph6_fx1008[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph6_fy1008[40] = {
   77.12064,
   77.13118,
   77.20014,
   77.14631,
   77.19685,
   77.09874,
   77.18758,
   77.26122,
   77.18391,
   77.18611,
   77.20549,
   77.13369,
   77.24964,
   77.29853,
   77.19568,
   77.26148,
   77.19888,
   77.29806,
   77.28719,
   77.34596,
   77.35925,
   77.30044,
   77.36946,
   77.28591,
   77.26538,
   77.28263,
   77.35273,
   77.26567,
   77.50705,
   77.367,
   77.32563,
   77.44366,
   77.41842,
   77.42091,
   77.42059,
   77.46557,
   77.49541,
   77.41647,
   77.39294,
   77.5116};
   Double_t Graph6_fex1008[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph6_fey1008[40] = {
   0.03968307,
   0.03348756,
   0.03386109,
   0.0336092,
   0.03346551,
   0.03344053,
   0.03478926,
   0.03830463,
   0.03702192,
   0.04009176,
   0.03349879,
   0.0350116,
   0.06652077,
   0.0455938,
   0.03981118,
   0.0327691,
   0.03403349,
   0.03667234,
   0.03351727,
   0.05038863,
   0.03529967,
   0.03458644,
   0.03540504,
   0.0335851,
   0.03338856,
   0.06204918,
   0.03214481,
   0.03589056,
   0.1069514,
   0.06284485,
   0.0330186,
   0.03336236,
   0.03351391,
   0.03309385,
   0.03265599,
   0.03365757,
   0.03217878,
   0.03377903,
   0.03255639,
   0.06304883};
   gre = new TGraphErrors(40,Graph6_fx1008,Graph6_fy1008,Graph6_fex1008,Graph6_fey1008);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1277d7");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph61008 = new TH1F("Graph_Graph61008","Graph",100,15914,15998);
   Graph_Graph61008->SetMinimum(77.01043);
   Graph_Graph61008->SetMaximum(77.66887);
   Graph_Graph61008->SetDirectory(0);
   Graph_Graph61008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph61008->SetLineColor(ci);
   Graph_Graph61008->GetXaxis()->SetLabelFont(42);
   Graph_Graph61008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph61008->GetXaxis()->SetTitleFont(42);
   Graph_Graph61008->GetYaxis()->SetLabelFont(42);
   Graph_Graph61008->GetYaxis()->SetTitleFont(42);
   Graph_Graph61008->GetZaxis()->SetLabelFont(42);
   Graph_Graph61008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph61008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph61008);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph7_fx1009[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph7_fy1009[40] = {
   76.17218,
   76.2316,
   76.27201,
   76.20129,
   76.22948,
   76.27361,
   76.20961,
   76.23407,
   76.31147,
   76.28391,
   76.30012,
   76.26185,
   76.35212,
   76.30619,
   76.32383,
   76.32298,
   76.23487,
   76.2978,
   76.41084,
   76.34799,
   76.3615,
   76.37906,
   76.42017,
   76.48588,
   76.37023,
   76.32671,
   76.3752,
   76.44135,
   76.42029,
   76.40355,
   76.44627,
   76.47337,
   76.48472,
   76.49114,
   76.54533,
   76.57431,
   76.47421,
   76.46665,
   76.49584,
   76.56021};
   Double_t Graph7_fex1009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph7_fey1009[40] = {
   0.04099462,
   0.03449609,
   0.03498512,
   0.03459848,
   0.03450781,
   0.03449009,
   0.03585878,
   0.03944679,
   0.03818739,
   0.04132381,
   0.03446751,
   0.03610255,
   0.06839866,
   0.04699909,
   0.04106551,
   0.03376872,
   0.035014,
   0.0378346,
   0.03455741,
   0.05182194,
   0.03635096,
   0.0356474,
   0.03650041,
   0.03457935,
   0.03443739,
   0.06386513,
   0.03309071,
   0.03692921,
   0.1101032,
   0.06483784,
   0.03390803,
   0.03434242,
   0.03440313,
   0.03402526,
   0.0335054,
   0.03452644,
   0.03312956,
   0.03468157,
   0.03345849,
   0.06510165};
   gre = new TGraphErrors(40,Graph7_fx1009,Graph7_fy1009,Graph7_fex1009,Graph7_fey1009);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#1283d4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph71009 = new TH1F("Graph_Graph71009","Graph",100,15914,15998);
   Graph_Graph71009->SetMinimum(76.08178);
   Graph_Graph71009->SetMaximum(76.67472);
   Graph_Graph71009->SetDirectory(0);
   Graph_Graph71009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph71009->SetLineColor(ci);
   Graph_Graph71009->GetXaxis()->SetLabelFont(42);
   Graph_Graph71009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph71009->GetXaxis()->SetTitleFont(42);
   Graph_Graph71009->GetYaxis()->SetLabelFont(42);
   Graph_Graph71009->GetYaxis()->SetTitleFont(42);
   Graph_Graph71009->GetZaxis()->SetLabelFont(42);
   Graph_Graph71009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph71009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph71009);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph8_fx1010[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph8_fy1010[40] = {
   74.50255,
   74.54477,
   74.5079,
   74.55002,
   74.50712,
   74.59746,
   74.60778,
   74.57933,
   74.54184,
   74.58448,
   74.53099,
   74.5465,
   74.59817,
   74.58268,
   74.62994,
   74.53927,
   74.6308,
   74.58359,
   74.66932,
   74.77744,
   74.72648,
   74.63249,
   74.6853,
   74.66585,
   74.6352,
   74.71754,
   74.7144,
   74.70215,
   74.76299,
   74.76417,
   74.74226,
   74.78188,
   74.88766,
   74.87749,
   74.87219,
   74.86485,
   74.77281,
   74.81282,
   74.78465,
   74.7926};
   Double_t Graph8_fex1010[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph8_fey1010[40] = {
   0.0432315,
   0.03641418,
   0.03688546,
   0.03657043,
   0.03638657,
   0.03631138,
   0.03781856,
   0.04157186,
   0.04019374,
   0.04357666,
   0.03637122,
   0.03804839,
   0.0718984,
   0.04966994,
   0.04331837,
   0.03562231,
   0.03699203,
   0.03983755,
   0.03647903,
   0.05477347,
   0.03838913,
   0.03768194,
   0.03854613,
   0.03648074,
   0.03633844,
   0.06736116,
   0.03491395,
   0.03890897,
   0.1157808,
   0.0683198,
   0.03586616,
   0.03622856,
   0.03639448,
   0.03591363,
   0.03539899,
   0.03650558,
   0.03492452,
   0.03659733,
   0.03535965,
   0.06851067};
   gre = new TGraphErrors(40,Graph8_fx1010,Graph8_fy1010,Graph8_fex1010,Graph8_fey1010);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph81010 = new TH1F("Graph_Graph81010","Graph",100,15914,15998);
   Graph_Graph81010->SetMinimum(74.41285);
   Graph_Graph81010->SetMaximum(74.97052);
   Graph_Graph81010->SetDirectory(0);
   Graph_Graph81010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph81010->SetLineColor(ci);
   Graph_Graph81010->GetXaxis()->SetLabelFont(42);
   Graph_Graph81010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph81010->GetXaxis()->SetTitleFont(42);
   Graph_Graph81010->GetYaxis()->SetLabelFont(42);
   Graph_Graph81010->GetYaxis()->SetTitleFont(42);
   Graph_Graph81010->GetZaxis()->SetLabelFont(42);
   Graph_Graph81010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph81010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph81010);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph9_fx1011[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph9_fy1011[40] = {
   75.55834,
   75.58906,
   75.58162,
   75.54967,
   75.57987,
   75.56842,
   75.61305,
   75.56611,
   75.57968,
   75.64138,
   75.62499,
   75.667,
   75.61429,
   75.67489,
   75.70307,
   75.69297,
   75.6251,
   75.62391,
   75.75095,
   75.75132,
   75.80769,
   75.76839,
   75.7523,
   75.67861,
   75.81154,
   75.74238,
   75.78101,
   75.74115,
   75.89408,
   75.88282,
   75.81205,
   75.87418,
   75.89507,
   75.79979,
   75.91139,
   75.94937,
   75.85267,
   75.87107,
   75.85625,
   75.86003};
   Double_t Graph9_fex1011[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph9_fey1011[40] = {
   0.03982664,
   0.03353598,
   0.03398097,
   0.03361353,
   0.03350611,
   0.03352587,
   0.03489357,
   0.03840259,
   0.03716911,
   0.04014731,
   0.03352333,
   0.03504216,
   0.0663185,
   0.04565729,
   0.03994353,
   0.03283918,
   0.03406208,
   0.03678756,
   0.03358134,
   0.05038371,
   0.0353291,
   0.03466193,
   0.03545123,
   0.03360304,
   0.03347432,
   0.06208976,
   0.03215955,
   0.03590264,
   0.1074453,
   0.06306672,
   0.03301233,
   0.03338846,
   0.0335308,
   0.03308359,
   0.03262471,
   0.03366585,
   0.03220636,
   0.03380747,
   0.03256733,
   0.0632031};
   gre = new TGraphErrors(40,Graph9_fx1011,Graph9_fy1011,Graph9_fex1011,Graph9_fey1011);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#089bcc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph91011 = new TH1F("Graph_Graph91011","Graph",100,15914,15998);
   Graph_Graph91011->SetMinimum(75.46751);
   Graph_Graph91011->SetMaximum(76.05008);
   Graph_Graph91011->SetDirectory(0);
   Graph_Graph91011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph91011->SetLineColor(ci);
   Graph_Graph91011->GetXaxis()->SetLabelFont(42);
   Graph_Graph91011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph91011->GetXaxis()->SetTitleFont(42);
   Graph_Graph91011->GetYaxis()->SetLabelFont(42);
   Graph_Graph91011->GetYaxis()->SetTitleFont(42);
   Graph_Graph91011->GetZaxis()->SetLabelFont(42);
   Graph_Graph91011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph91011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph91011);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph10_fx1012[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph10_fy1012[40] = {
   74.62763,
   74.58737,
   74.62602,
   74.66126,
   74.69498,
   74.61943,
   74.67117,
   74.65304,
   74.70514,
   74.73332,
   74.69044,
   74.62312,
   74.69627,
   74.67614,
   74.75976,
   74.70281,
   74.74221,
   74.75642,
   74.72794,
   74.72378,
   74.7965,
   74.76866,
   74.81226,
   74.73446,
   74.84838,
   74.82186,
   74.77556,
   74.85276,
   74.77163,
   74.89203,
   74.83287,
   74.93529,
   74.91827,
   74.93052,
   74.99365,
   74.97589,
   74.84504,
   74.94742,
   74.95785,
   74.97931};
   Double_t Graph10_fex1012[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph10_fey1012[40] = {
   0.03732959,
   0.03144368,
   0.03182179,
   0.03153281,
   0.0313597,
   0.03139865,
   0.03269709,
   0.03598524,
   0.03482836,
   0.03757786,
   0.03141203,
   0.03288799,
   0.06244554,
   0.04292298,
   0.03742511,
   0.03079375,
   0.03197067,
   0.03438551,
   0.03149063,
   0.04727793,
   0.03309101,
   0.03245047,
   0.0332635,
   0.03150832,
   0.03138501,
   0.05812946,
   0.03017231,
   0.03358965,
   0.1009611,
   0.05895139,
   0.03094137,
   0.03129726,
   0.03143572,
   0.0309673,
   0.03055702,
   0.03152326,
   0.03014398,
   0.03164106,
   0.03053078,
   0.05923404};
   gre = new TGraphErrors(40,Graph10_fx1012,Graph10_fy1012,Graph10_fex1012,Graph10_fey1012);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph101012 = new TH1F("Graph_Graph101012","Graph",100,15914,15998);
   Graph_Graph101012->SetMinimum(74.50767);
   Graph_Graph101012->SetMaximum(75.0868);
   Graph_Graph101012->SetDirectory(0);
   Graph_Graph101012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph101012->SetLineColor(ci);
   Graph_Graph101012->GetXaxis()->SetLabelFont(42);
   Graph_Graph101012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph101012->GetXaxis()->SetTitleFont(42);
   Graph_Graph101012->GetYaxis()->SetLabelFont(42);
   Graph_Graph101012->GetYaxis()->SetTitleFont(42);
   Graph_Graph101012->GetZaxis()->SetLabelFont(42);
   Graph_Graph101012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph101012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph101012);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph11_fx1013[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph11_fy1013[40] = {
   74.58418,
   74.60502,
   74.59319,
   74.58213,
   74.63505,
   74.64197,
   74.64801,
   74.57072,
   74.57987,
   74.63027,
   74.62271,
   74.56843,
   74.5042,
   74.63249,
   74.62141,
   74.6806,
   74.63522,
   74.60136,
   74.68432,
   74.66848,
   74.66265,
   74.68756,
   74.78036,
   74.71667,
   74.76164,
   74.77195,
   74.74252,
   74.76835,
   74.87608,
   74.79312,
   74.74313,
   74.85384,
   74.85671,
   74.78382,
   74.84929,
   74.83807,
   74.78375,
   74.81505,
   74.77565,
   74.87389};
   Double_t Graph11_fex1013[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph11_fey1013[40] = {
   0.03618618,
   0.03050913,
   0.0308858,
   0.03062825,
   0.03048642,
   0.03044757,
   0.03176164,
   0.03485326,
   0.03378498,
   0.03657467,
   0.03050198,
   0.03192703,
   0.06044994,
   0.0417411,
   0.0363533,
   0.02989857,
   0.03100698,
   0.03342849,
   0.03056701,
   0.04590496,
   0.03221791,
   0.03153145,
   0.03228523,
   0.03059226,
   0.03049802,
   0.05649633,
   0.02934033,
   0.03272291,
   0.0969999,
   0.05735794,
   0.03008189,
   0.03039664,
   0.03057719,
   0.03009804,
   0.02969071,
   0.03065849,
   0.0293072,
   0.03071409,
   0.02968152,
   0.0575156};
   gre = new TGraphErrors(40,Graph11_fx1013,Graph11_fy1013,Graph11_fex1013,Graph11_fey1013);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#18acb8");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph111013 = new TH1F("Graph_Graph111013","Graph",100,15914,15998);
   Graph_Graph111013->SetMinimum(74.39082);
   Graph_Graph111013->SetMaximum(75.02601);
   Graph_Graph111013->SetDirectory(0);
   Graph_Graph111013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph111013->SetLineColor(ci);
   Graph_Graph111013->GetXaxis()->SetLabelFont(42);
   Graph_Graph111013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph111013->GetXaxis()->SetTitleFont(42);
   Graph_Graph111013->GetYaxis()->SetLabelFont(42);
   Graph_Graph111013->GetYaxis()->SetTitleFont(42);
   Graph_Graph111013->GetZaxis()->SetLabelFont(42);
   Graph_Graph111013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph111013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph111013);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph12_fx1014[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph12_fy1014[40] = {
   75.53667,
   75.53422,
   75.55968,
   75.53428,
   75.58608,
   75.53585,
   75.52551,
   75.51347,
   75.60291,
   75.5791,
   75.54055,
   75.58539,
   75.59453,
   75.60762,
   75.58216,
   75.57683,
   75.6539,
   75.63752,
   75.65463,
   75.71201,
   75.62707,
   75.68253,
   75.6417,
   75.62109,
   75.6678,
   75.6673,
   75.64386,
   75.67503,
   75.62751,
   75.7008,
   75.6933,
   75.75784,
   75.74854,
   75.68632,
   75.77336,
   75.79637,
   75.78543,
   75.68104,
   75.7684,
   75.71708};
   Double_t Graph12_fex1014[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph12_fey1014[40] = {
   0.0331773,
   0.02789163,
   0.0282887,
   0.02805753,
   0.02790603,
   0.02790626,
   0.02905655,
   0.03198982,
   0.03089609,
   0.03338332,
   0.02794555,
   0.02918424,
   0.05540142,
   0.0381565,
   0.03330823,
   0.02736664,
   0.02839381,
   0.03058225,
   0.02797842,
   0.04199217,
   0.0294788,
   0.02885239,
   0.02955923,
   0.02803161,
   0.02789643,
   0.05178981,
   0.02681386,
   0.02989198,
   0.08926002,
   0.05230492,
   0.02749611,
   0.02780191,
   0.02793894,
   0.02757013,
   0.0271755,
   0.02802092,
   0.02680999,
   0.02808061,
   0.02709308,
   0.05243999};
   gre = new TGraphErrors(40,Graph12_fx1014,Graph12_fy1014,Graph12_fex1014,Graph12_fey1014);
   gre->SetName("Graph12");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#26b3aa");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph121014 = new TH1F("Graph_Graph121014","Graph",100,15914,15998);
   Graph_Graph121014->SetMinimum(75.44719);
   Graph_Graph121014->SetMaximum(75.85868);
   Graph_Graph121014->SetDirectory(0);
   Graph_Graph121014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph121014->SetLineColor(ci);
   Graph_Graph121014->GetXaxis()->SetLabelFont(42);
   Graph_Graph121014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph121014->GetXaxis()->SetTitleFont(42);
   Graph_Graph121014->GetYaxis()->SetLabelFont(42);
   Graph_Graph121014->GetYaxis()->SetTitleFont(42);
   Graph_Graph121014->GetZaxis()->SetLabelFont(42);
   Graph_Graph121014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph121014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph121014);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph13_fx1015[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph13_fy1015[40] = {
   74.99628,
   74.98876,
   75.02667,
   75.00404,
   75.02973,
   75.0621,
   75.00151,
   75.04371,
   75.0802,
   75.03321,
   75.02944,
   74.99098,
   75.09981,
   75.05595,
   75.13752,
   75.10038,
   75.04177,
   75.0743,
   75.15261,
   75.11833,
   75.12221,
   75.1695,
   75.21937,
   75.11119,
   75.1905,
   75.11007,
   75.13226,
   75.17393,
   75.33886,
   75.4177,
   75.14142,
   75.29315,
   75.35869,
   75.26582,
   75.33384,
   75.30663,
   75.27108,
   75.28772,
   75.2308,
   75.28455};
   Double_t Graph13_fex1015[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph13_fey1015[40] = {
   0.03778344,
   0.03177519,
   0.03218907,
   0.03193622,
   0.03179058,
   0.03180782,
   0.03309019,
   0.03636917,
   0.03522041,
   0.03809231,
   0.03184103,
   0.03325823,
   0.06304187,
   0.04344249,
   0.03793773,
   0.03115336,
   0.03234375,
   0.03486829,
   0.03188353,
   0.04780614,
   0.03358367,
   0.03287134,
   0.03369434,
   0.03197345,
   0.03182482,
   0.05886062,
   0.0305458,
   0.03406638,
   0.1015555,
   0.05966647,
   0.03134007,
   0.03174412,
   0.03185121,
   0.03139159,
   0.03091164,
   0.03186744,
   0.03052487,
   0.03199747,
   0.03091872,
   0.05994307};
   gre = new TGraphErrors(40,Graph13_fx1015,Graph13_fy1015,Graph13_fex1015,Graph13_fey1015);
   gre->SetName("Graph13");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#3bb89c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph131015 = new TH1F("Graph_Graph131015","Graph",100,15914,15998);
   Graph_Graph131015->SetMinimum(74.90495);
   Graph_Graph131015->SetMaximum(75.52941);
   Graph_Graph131015->SetDirectory(0);
   Graph_Graph131015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph131015->SetLineColor(ci);
   Graph_Graph131015->GetXaxis()->SetLabelFont(42);
   Graph_Graph131015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph131015->GetXaxis()->SetTitleFont(42);
   Graph_Graph131015->GetYaxis()->SetLabelFont(42);
   Graph_Graph131015->GetYaxis()->SetTitleFont(42);
   Graph_Graph131015->GetZaxis()->SetLabelFont(42);
   Graph_Graph131015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph131015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph131015);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph14_fx1016[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph14_fy1016[40] = {
   75.67173,
   75.69432,
   75.66824,
   75.68004,
   75.61328,
   75.68769,
   75.72716,
   75.71453,
   75.71242,
   75.6888,
   75.71913,
   75.67546,
   75.79111,
   75.81344,
   75.73218,
   75.70972,
   75.77438,
   75.71803,
   75.77443,
   75.82275,
   75.77534,
   75.87439,
   75.81593,
   75.87678,
   75.82348,
   75.81285,
   75.83653,
   75.85757,
   75.83484,
   75.88287,
   75.90757,
   75.9769,
   75.95159,
   75.90745,
   75.96259,
   75.94206,
   75.9716,
   75.93285,
   76.0076,
   76.03559};
   Double_t Graph14_fex1016[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph14_fey1016[40] = {
   0.03931432,
   0.03304584,
   0.03352712,
   0.03318141,
   0.03304574,
   0.03306867,
   0.03439031,
   0.03787873,
   0.0366831,
   0.03962511,
   0.03306901,
   0.03464928,
   0.06566689,
   0.04523443,
   0.03945755,
   0.03239409,
   0.0336002,
   0.03622418,
   0.03319716,
   0.04978202,
   0.03484512,
   0.03421055,
   0.03497374,
   0.03314265,
   0.03301348,
   0.06113454,
   0.03176094,
   0.03543431,
   0.1058244,
   0.06192941,
   0.03252398,
   0.03293258,
   0.03304931,
   0.03256542,
   0.03213188,
   0.03313049,
   0.03173385,
   0.03324119,
   0.03210794,
   0.06215326};
   gre = new TGraphErrors(40,Graph14_fx1016,Graph14_fy1016,Graph14_fex1016,Graph14_fey1016);
   gre->SetName("Graph14");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#5abb8d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph141016 = new TH1F("Graph_Graph141016","Graph",100,15914,15998);
   Graph_Graph141016->SetMinimum(75.52848);
   Graph_Graph141016->SetMaximum(76.1495);
   Graph_Graph141016->SetDirectory(0);
   Graph_Graph141016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph141016->SetLineColor(ci);
   Graph_Graph141016->GetXaxis()->SetLabelFont(42);
   Graph_Graph141016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph141016->GetXaxis()->SetTitleFont(42);
   Graph_Graph141016->GetYaxis()->SetLabelFont(42);
   Graph_Graph141016->GetYaxis()->SetTitleFont(42);
   Graph_Graph141016->GetZaxis()->SetLabelFont(42);
   Graph_Graph141016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph141016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph141016);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph15_fx1017[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph15_fy1017[40] = {
   74.44167,
   74.55154,
   74.47588,
   74.55877,
   74.52147,
   74.56424,
   74.52078,
   74.46314,
   74.58109,
   74.53272,
   74.59004,
   74.56698,
   74.56395,
   74.53739,
   74.60471,
   74.57296,
   74.54599,
   74.55107,
   74.66102,
   74.70631,
   74.72047,
   74.67343,
   74.72028,
   74.69915,
   74.64012,
   74.68145,
   74.71791,
   74.69665,
   74.64682,
   74.75728,
   74.8342,
   74.8801,
   74.7914,
   74.83476,
   74.83318,
   74.89335,
   74.81119,
   74.77514,
   74.80331,
   74.76992};
   Double_t Graph15_fex1017[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph15_fey1017[40] = {
   0.04082426,
   0.03441485,
   0.03481806,
   0.03448505,
   0.03432905,
   0.03440162,
   0.03581006,
   0.03932973,
   0.03816902,
   0.04112637,
   0.03442611,
   0.03597535,
   0.06827451,
   0.04689548,
   0.04098407,
   0.03368488,
   0.03493358,
   0.03769632,
   0.0344315,
   0.0517592,
   0.03623246,
   0.03557949,
   0.03635737,
   0.0345054,
   0.03438414,
   0.06363299,
   0.03299432,
   0.03678798,
   0.1095091,
   0.06439598,
   0.03380897,
   0.03418598,
   0.03430484,
   0.03382092,
   0.03335405,
   0.03440963,
   0.03297099,
   0.0344914,
   0.03327959,
   0.06453941};
   gre = new TGraphErrors(40,Graph15_fx1017,Graph15_fy1017,Graph15_fex1017,Graph15_fey1017);
   gre->SetName("Graph15");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#79bd7d");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph151017 = new TH1F("Graph_Graph151017","Graph",100,15914,15998);
   Graph_Graph151017->SetMinimum(74.34815);
   Graph_Graph151017->SetMaximum(74.98045);
   Graph_Graph151017->SetDirectory(0);
   Graph_Graph151017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph151017->SetLineColor(ci);
   Graph_Graph151017->GetXaxis()->SetLabelFont(42);
   Graph_Graph151017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph151017->GetXaxis()->SetTitleFont(42);
   Graph_Graph151017->GetYaxis()->SetLabelFont(42);
   Graph_Graph151017->GetYaxis()->SetTitleFont(42);
   Graph_Graph151017->GetZaxis()->SetLabelFont(42);
   Graph_Graph151017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph151017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph151017);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph16_fx1018[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph16_fy1018[40] = {
   75.14473,
   75.15675,
   75.20658,
   75.22201,
   75.22242,
   75.1962,
   75.2613,
   75.17078,
   75.1696,
   75.20887,
   75.24577,
   75.26957,
   75.18632,
   75.2663,
   75.2175,
   75.2683,
   75.27446,
   75.27725,
   75.23955,
   75.38186,
   75.32292,
   75.25824,
   75.36016,
   75.37257,
   75.30494,
   75.33709,
   75.39385,
   75.30862,
   75.287,
   75.40356,
   75.38699,
   75.48532,
   75.48993,
   75.48271,
   75.51393,
   75.49808,
   75.42251,
   75.5,
   75.49167,
   75.56551};
   Double_t Graph16_fex1018[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph16_fey1018[40] = {
   0.03897839,
   0.03285919,
   0.03331408,
   0.03298233,
   0.03281866,
   0.03287232,
   0.03419122,
   0.03767213,
   0.03641319,
   0.03936159,
   0.03288629,
   0.03436388,
   0.06529753,
   0.04487866,
   0.03913527,
   0.03213691,
   0.03333605,
   0.03593194,
   0.03290559,
   0.04944268,
   0.03464761,
   0.03394816,
   0.03478235,
   0.03295232,
   0.03278073,
   0.06086738,
   0.03157292,
   0.03522518,
   0.1047028,
   0.06134683,
   0.0322255,
   0.03261924,
   0.03272505,
   0.03234572,
   0.03182699,
   0.03288972,
   0.03142456,
   0.03299257,
   0.03181955,
   0.06182685};
   gre = new TGraphErrors(40,Graph16_fx1018,Graph16_fy1018,Graph16_fex1018,Graph16_fey1018);
   gre->SetName("Graph16");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#94be71");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph161018 = new TH1F("Graph_Graph161018","Graph",100,15914,15998);
   Graph_Graph161018->SetMinimum(75.05359);
   Graph_Graph161018->SetMaximum(75.67949);
   Graph_Graph161018->SetDirectory(0);
   Graph_Graph161018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph161018->SetLineColor(ci);
   Graph_Graph161018->GetXaxis()->SetLabelFont(42);
   Graph_Graph161018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph161018->GetXaxis()->SetTitleFont(42);
   Graph_Graph161018->GetYaxis()->SetLabelFont(42);
   Graph_Graph161018->GetYaxis()->SetTitleFont(42);
   Graph_Graph161018->GetZaxis()->SetLabelFont(42);
   Graph_Graph161018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph161018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph161018);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph17_fx1019[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph17_fy1019[40] = {
   76.04267,
   75.98447,
   76.00636,
   76.02168,
   76.00374,
   75.97496,
   76.06461,
   76.04091,
   76.07368,
   76.08969,
   76.07318,
   76.02763,
   76.04363,
   76.0705,
   76.101,
   76.10802,
   76.12926,
   76.10637,
   76.15904,
   76.22005,
   76.16619,
   76.10686,
   76.20642,
   76.14433,
   76.177,
   76.15372,
   76.18133,
   76.23629,
   76.38644,
   76.3214,
   76.22902,
   76.29492,
   76.23183,
   76.26388,
   76.29035,
   76.28808,
   76.27259,
   76.27341,
   76.19706,
   76.23813};
   Double_t Graph17_fex1019[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph17_fey1019[40] = {
   0.03590107,
   0.03025762,
   0.03069917,
   0.03036938,
   0.03024319,
   0.03024996,
   0.03146398,
   0.03466022,
   0.03357243,
   0.03627428,
   0.03029867,
   0.0316879,
   0.06010791,
   0.04135954,
   0.0360781,
   0.02965761,
   0.03074261,
   0.0331863,
   0.03029161,
   0.04555721,
   0.03191845,
   0.03133744,
   0.03204091,
   0.03038136,
   0.03021932,
   0.05604544,
   0.02906051,
   0.03242268,
   0.09684682,
   0.05691332,
   0.02984035,
   0.03011235,
   0.03027731,
   0.0299054,
   0.02947807,
   0.03038303,
   0.02907983,
   0.03050274,
   0.02945406,
   0.05710356};
   gre = new TGraphErrors(40,Graph17_fx1019,Graph17_fy1019,Graph17_fex1019,Graph17_fey1019);
   gre->SetName("Graph17");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#aebc67");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph171019 = new TH1F("Graph_Graph171019","Graph",100,15914,15998);
   Graph_Graph171019->SetMinimum(75.89085);
   Graph_Graph171019->SetMaximum(76.53715);
   Graph_Graph171019->SetDirectory(0);
   Graph_Graph171019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph171019->SetLineColor(ci);
   Graph_Graph171019->GetXaxis()->SetLabelFont(42);
   Graph_Graph171019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph171019->GetXaxis()->SetTitleFont(42);
   Graph_Graph171019->GetYaxis()->SetLabelFont(42);
   Graph_Graph171019->GetYaxis()->SetTitleFont(42);
   Graph_Graph171019->GetZaxis()->SetLabelFont(42);
   Graph_Graph171019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph171019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph171019);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph18_fx1020[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph18_fy1020[40] = {
   74.46461,
   74.45398,
   74.45289,
   74.43105,
   74.50729,
   74.44092,
   74.42647,
   74.50824,
   74.45575,
   74.46942,
   74.47631,
   74.48135,
   74.46239,
   74.44875,
   74.49168,
   74.5662,
   74.48842,
   74.52412,
   74.49027,
   74.59191,
   74.52389,
   74.53549,
   74.55857,
   74.53632,
   74.53112,
   74.49068,
   74.53184,
   74.57968,
   74.57796,
   74.53341,
   74.48123,
   74.69091,
   74.62098,
   74.68928,
   74.6435,
   74.69564,
   74.61838,
   74.62947,
   74.66324,
   74.68051};
   Double_t Graph18_fex1020[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph18_fey1020[40] = {
   0.03375285,
   0.02844805,
   0.02881548,
   0.02850078,
   0.02838248,
   0.02842567,
   0.02954457,
   0.03256351,
   0.03150558,
   0.03401007,
   0.0285055,
   0.0297865,
   0.05664159,
   0.03881283,
   0.03386213,
   0.02785154,
   0.028923,
   0.03112958,
   0.02844547,
   0.04282122,
   0.03002078,
   0.0294302,
   0.03009213,
   0.02854461,
   0.02843188,
   0.05279557,
   0.02730609,
   0.03051661,
   0.09049566,
   0.05328992,
   0.02801182,
   0.02834305,
   0.02843467,
   0.02809545,
   0.02768376,
   0.02857275,
   0.02730166,
   0.02868839,
   0.02764646,
   0.05363938};
   gre = new TGraphErrors(40,Graph18_fx1020,Graph18_fy1020,Graph18_fex1020,Graph18_fey1020);
   gre->SetName("Graph18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph181020 = new TH1F("Graph_Graph181020","Graph",100,15914,15998);
   Graph_Graph181020->SetMinimum(74.3632);
   Graph_Graph181020->SetMaximum(74.76788);
   Graph_Graph181020->SetDirectory(0);
   Graph_Graph181020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph181020->SetLineColor(ci);
   Graph_Graph181020->GetXaxis()->SetLabelFont(42);
   Graph_Graph181020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph181020->GetXaxis()->SetTitleFont(42);
   Graph_Graph181020->GetYaxis()->SetLabelFont(42);
   Graph_Graph181020->GetYaxis()->SetTitleFont(42);
   Graph_Graph181020->GetZaxis()->SetLabelFont(42);
   Graph_Graph181020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph181020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph181020);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph19_fx1021[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph19_fy1021[40] = {
   75.80181,
   75.7341,
   75.80035,
   75.78871,
   75.8173,
   75.82659,
   75.83397,
   75.84517,
   75.77711,
   75.78563,
   75.84959,
   75.81,
   75.87814,
   75.87466,
   75.80346,
   75.88488,
   75.86718,
   75.93295,
   75.90423,
   75.94722,
   75.94202,
   75.93237,
   75.96897,
   75.97177,
   75.96539,
   75.98899,
   75.95429,
   76.00221,
   76.07596,
   76.05732,
   75.98809,
   76.05683,
   76.06785,
   76.07836,
   76.13004,
   76.19582,
   76.07918,
   76.02896,
   76.05259,
   76.11385};
   Double_t Graph19_fex1021[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph19_fey1021[40] = {
   0.03876877,
   0.03265469,
   0.03308358,
   0.03277601,
   0.03262759,
   0.03265216,
   0.03401047,
   0.03741654,
   0.03619889,
   0.03907384,
   0.03270631,
   0.0342495,
   0.06494018,
   0.04464979,
   0.03893577,
   0.03202978,
   0.03313936,
   0.03566184,
   0.03268153,
   0.04910894,
   0.03445482,
   0.03375267,
   0.0346198,
   0.03279454,
   0.03261866,
   0.06040287,
   0.03140322,
   0.03498788,
   0.1043599,
   0.06138347,
   0.03212319,
   0.03250746,
   0.03262325,
   0.03220498,
   0.03176153,
   0.03279435,
   0.03140417,
   0.03291537,
   0.03174975,
   0.06165261};
   gre = new TGraphErrors(40,Graph19_fx1021,Graph19_fy1021,Graph19_fex1021,Graph19_fey1021);
   gre->SetName("Graph19");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#dabd50");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph191021 = new TH1F("Graph_Graph191021","Graph",100,15914,15998);
   Graph_Graph191021->SetMinimum(75.64873);
   Graph_Graph191021->SetMaximum(76.28133);
   Graph_Graph191021->SetDirectory(0);
   Graph_Graph191021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph191021->SetLineColor(ci);
   Graph_Graph191021->GetXaxis()->SetLabelFont(42);
   Graph_Graph191021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph191021->GetXaxis()->SetTitleFont(42);
   Graph_Graph191021->GetYaxis()->SetLabelFont(42);
   Graph_Graph191021->GetYaxis()->SetTitleFont(42);
   Graph_Graph191021->GetZaxis()->SetLabelFont(42);
   Graph_Graph191021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph191021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph191021);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph20_fx1022[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph20_fy1022[40] = {
   75.60755,
   75.51926,
   75.63854,
   75.56508,
   75.5814,
   75.60174,
   75.59348,
   75.54809,
   75.65424,
   75.58145,
   75.63589,
   75.5797,
   75.61168,
   75.63677,
   75.65992,
   75.60678,
   75.63864,
   75.69083,
   75.73155,
   75.63808,
   75.7454,
   75.78723,
   75.7129,
   75.67053,
   75.71551,
   75.66659,
   75.74835,
   75.7519,
   75.76074,
   75.73746,
   75.7842,
   75.88038,
   75.92813,
   75.92293,
   75.93782,
   75.93329,
   75.87197,
   75.87735,
   75.85301,
   76.04444};
   Double_t Graph20_fex1022[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph20_fey1022[40] = {
   0.04141062,
   0.03484954,
   0.03527221,
   0.03505576,
   0.03486184,
   0.03485675,
   0.03631459,
   0.03996467,
   0.03861727,
   0.04177554,
   0.03498093,
   0.03656294,
   0.06912388,
   0.04766615,
   0.04161836,
   0.03421934,
   0.03548109,
   0.03822248,
   0.03496458,
   0.05241849,
   0.03672322,
   0.03607937,
   0.03695479,
   0.0350839,
   0.03485781,
   0.064834,
   0.03362953,
   0.03745666,
   0.1114285,
   0.06592245,
   0.03444634,
   0.03482449,
   0.03496539,
   0.03451779,
   0.03404464,
   0.03517336,
   0.03365264,
   0.03535551,
   0.03401697,
   0.06609423};
   gre = new TGraphErrors(40,Graph20_fx1022,Graph20_fy1022,Graph20_fex1022,Graph20_fey1022);
   gre->SetName("Graph20");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#eac243");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph201022 = new TH1F("Graph_Graph201022","Graph",100,15914,15998);
   Graph_Graph201022->SetMinimum(75.4218);
   Graph_Graph201022->SetMaximum(76.17315);
   Graph_Graph201022->SetDirectory(0);
   Graph_Graph201022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph201022->SetLineColor(ci);
   Graph_Graph201022->GetXaxis()->SetLabelFont(42);
   Graph_Graph201022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph201022->GetXaxis()->SetTitleFont(42);
   Graph_Graph201022->GetYaxis()->SetLabelFont(42);
   Graph_Graph201022->GetYaxis()->SetTitleFont(42);
   Graph_Graph201022->GetZaxis()->SetLabelFont(42);
   Graph_Graph201022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph201022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph201022);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph21_fx1023[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph21_fy1023[40] = {
   76.5203,
   76.59714,
   76.50446,
   76.56091,
   76.55432,
   76.49777,
   76.57679,
   76.60023,
   76.56865,
   76.62363,
   76.57176,
   76.57946,
   76.72531,
   76.54305,
   76.57523,
   76.60172,
   76.66542,
   76.61334,
   76.68844,
   76.77597,
   76.68315,
   76.7037,
   76.72351,
   76.69255,
   76.70506,
   76.62828,
   76.70273,
   76.69745,
   76.8234,
   76.66505,
   76.83364,
   76.82792,
   76.83791,
   76.78056,
   76.83394,
   76.81134,
   76.87358,
   76.82484,
   76.75436,
   76.86746};
   Double_t Graph21_fex1023[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph21_fey1023[40] = {
   0.0427828,
   0.03606545,
   0.03657301,
   0.0362287,
   0.03598217,
   0.03606747,
   0.03756217,
   0.04129224,
   0.03990763,
   0.04315846,
   0.03597582,
   0.03769122,
   0.0715369,
   0.04924286,
   0.04293097,
   0.03532972,
   0.03661931,
   0.03953596,
   0.03616174,
   0.05434468,
   0.03809211,
   0.03731023,
   0.03816789,
   0.03621091,
   0.03605846,
   0.0668785,
   0.0346703,
   0.0385691,
   0.1151929,
   0.06772752,
   0.03554235,
   0.03595453,
   0.03612083,
   0.03559697,
   0.03513113,
   0.03623228,
   0.03468237,
   0.03637239,
   0.03508388,
   0.06819666};
   gre = new TGraphErrors(40,Graph21_fx1023,Graph21_fy1023,Graph21_fex1023,Graph21_fey1023);
   gre->SetName("Graph21");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#f9c735");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph211023 = new TH1F("Graph_Graph211023","Graph",100,15914,15998);
   Graph_Graph211023->SetMinimum(76.41401);
   Graph_Graph211023->SetMaximum(76.98628);
   Graph_Graph211023->SetDirectory(0);
   Graph_Graph211023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph211023->SetLineColor(ci);
   Graph_Graph211023->GetXaxis()->SetLabelFont(42);
   Graph_Graph211023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph211023->GetXaxis()->SetTitleFont(42);
   Graph_Graph211023->GetYaxis()->SetLabelFont(42);
   Graph_Graph211023->GetYaxis()->SetTitleFont(42);
   Graph_Graph211023->GetZaxis()->SetLabelFont(42);
   Graph_Graph211023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph211023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph211023);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph22_fx1024[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph22_fy1024[40] = {
   74.76004,
   74.68996,
   74.75223,
   74.75118,
   74.72916,
   74.73522,
   74.7591,
   74.79021,
   74.76018,
   74.74997,
   74.78175,
   74.77068,
   74.87659,
   74.77765,
   74.79565,
   74.7825,
   74.75886,
   74.83378,
   74.87955,
   74.86194,
   74.8622,
   74.86626,
   74.83656,
   74.88458,
   74.89153,
   74.81932,
   74.89328,
   74.91326,
   75.05803,
   74.9634,
   74.96992,
   75.06867,
   74.99253,
   74.97438,
   75.04063,
   75.06144,
   74.96729,
   75.01236,
   75.01765,
   74.92614};
   Double_t Graph22_fex1024[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph22_fey1024[40] = {
   0.03841166,
   0.03237636,
   0.03280211,
   0.03254481,
   0.03233911,
   0.03239038,
   0.0336999,
   0.03707968,
   0.03595251,
   0.03879353,
   0.03241009,
   0.03388791,
   0.06424565,
   0.04420561,
   0.03863382,
   0.0317479,
   0.03298594,
   0.03547497,
   0.03242422,
   0.04871758,
   0.03412213,
   0.03342237,
   0.03433468,
   0.03254096,
   0.03236279,
   0.06014902,
   0.03116602,
   0.03478772,
   0.1042592,
   0.06113266,
   0.03203898,
   0.03237489,
   0.03251918,
   0.03203794,
   0.03163792,
   0.03264072,
   0.03125851,
   0.03278483,
   0.03157787,
   0.06125985};
   gre = new TGraphErrors(40,Graph22_fx1024,Graph22_fy1024,Graph22_fex1024,Graph22_fey1024);
   gre->SetName("Graph22");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fcd529");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph221024 = new TH1F("Graph_Graph221024","Graph",100,15914,15998);
   Graph_Graph221024->SetMinimum(74.60711);
   Graph_Graph221024->SetMaximum(75.21276);
   Graph_Graph221024->SetDirectory(0);
   Graph_Graph221024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph221024->SetLineColor(ci);
   Graph_Graph221024->GetXaxis()->SetLabelFont(42);
   Graph_Graph221024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph221024->GetXaxis()->SetTitleFont(42);
   Graph_Graph221024->GetYaxis()->SetLabelFont(42);
   Graph_Graph221024->GetYaxis()->SetTitleFont(42);
   Graph_Graph221024->GetZaxis()->SetLabelFont(42);
   Graph_Graph221024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph221024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph221024);
   
   gre->Draw("p plc pmc ");
   
   Double_t Graph23_fx1025[40] = {
   15921,
   15922,
   15924,
   15925,
   15928,
   15929,
   15930,
   15932,
   15933,
   15935,
   15938,
   15939,
   15940,
   15941,
   15942,
   15943,
   15944,
   15945,
   15948,
   15952,
   15953,
   15955,
   15957,
   15959,
   15960,
   15961,
   15963,
   15967,
   15970,
   15973,
   15974,
   15975,
   15977,
   15981,
   15982,
   15985,
   15986,
   15987,
   15988,
   15991};
   Double_t Graph23_fy1025[40] = {
   75.95273,
   75.95685,
   75.91621,
   75.94268,
   75.95232,
   75.97279,
   75.96658,
   75.9228,
   75.97055,
   75.92278,
   76.00713,
   75.93785,
   75.84683,
   76.01463,
   75.9724,
   75.96455,
   76.00076,
   76.01881,
   76.07351,
   76.05651,
   76.09439,
   76.06641,
   76.0911,
   76.06716,
   76.11685,
   76.04936,
   76.09491,
   76.11224,
   76.0709,
   76.08204,
   76.06235,
   76.19645,
   76.16097,
   76.13544,
   76.22697,
   76.26042,
   76.19498,
   76.15024,
   76.11341,
   76.17143};
   Double_t Graph23_fex1025[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph23_fey1025[40] = {
   0.0397164,
   0.03341373,
   0.03389122,
   0.03359859,
   0.03341107,
   0.03345894,
   0.03483651,
   0.03825653,
   0.03704738,
   0.03996348,
   0.03343352,
   0.03499691,
   0.06629529,
   0.04560893,
   0.03986204,
   0.03276124,
   0.03393481,
   0.03665864,
   0.03339931,
   0.0502346,
   0.03527251,
   0.03461334,
   0.03537597,
   0.03353252,
   0.03336144,
   0.06181822,
   0.03212973,
   0.03583612,
   0.1068727,
   0.06284041,
   0.03294515,
   0.03328852,
   0.03346308,
   0.03294291,
   0.0325238,
   0.03360183,
   0.03209472,
   0.0336725,
   0.03248982,
   0.06294551};
   gre = new TGraphErrors(40,Graph23_fx1025,Graph23_fy1025,Graph23_fex1025,Graph23_fey1025);
   gre->SetName("Graph23");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#fae61c");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph231025 = new TH1F("Graph_Graph231025","Graph",100,15914,15998);
   Graph_Graph231025->SetMinimum(75.72918);
   Graph_Graph231025->SetMaximum(76.34537);
   Graph_Graph231025->SetDirectory(0);
   Graph_Graph231025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph231025->SetLineColor(ci);
   Graph_Graph231025->GetXaxis()->SetLabelFont(42);
   Graph_Graph231025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph231025->GetXaxis()->SetTitleFont(42);
   Graph_Graph231025->GetYaxis()->SetLabelFont(42);
   Graph_Graph231025->GetYaxis()->SetTitleFont(42);
   Graph_Graph231025->GetZaxis()->SetLabelFont(42);
   Graph_Graph231025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph231025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph231025);
   
   gre->Draw("p plc pmc ");
   
   TLegend *leg = new TLegend(0.81,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Calo 1","lpf");
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
   entry=leg->AddEntry("Graph1","Calo 2","lpf");
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
   entry=leg->AddEntry("Graph2","Calo 3","lpf");
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
   entry=leg->AddEntry("Graph3","Calo 4","lpf");
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
   entry=leg->AddEntry("Graph4","Calo 5","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Calo 6","lpf");
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
   entry=leg->AddEntry("Graph6","Calo 7","lpf");
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
   entry=leg->AddEntry("Graph7","Calo 8","lpf");
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
   entry=leg->AddEntry("Graph8","Calo 9","lpf");
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
   entry=leg->AddEntry("Graph9","Calo 10","lpf");
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
   entry=leg->AddEntry("Graph10","Calo 11","lpf");
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
   entry=leg->AddEntry("Graph11","Calo 12","lpf");
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
   entry=leg->AddEntry("Graph12","Calo 13","lpf");
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
   entry=leg->AddEntry("Graph13","Calo 14","lpf");
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
   entry=leg->AddEntry("Graph14","Calo 15","lpf");
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
   entry=leg->AddEntry("Graph15","Calo 16","lpf");
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
   entry=leg->AddEntry("Graph16","Calo 17","lpf");
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
   entry=leg->AddEntry("Graph17","Calo 18","lpf");
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
   entry=leg->AddEntry("Graph18","Calo 19","lpf");
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
   entry=leg->AddEntry("Graph19","Calo 20","lpf");
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
   entry=leg->AddEntry("Graph20","Calo 21","lpf");
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
   entry=leg->AddEntry("Graph21","Calo 22","lpf");
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
   entry=leg->AddEntry("Graph22","Calo 23","lpf");
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
   entry=leg->AddEntry("Graph23","Calo 24","lpf");
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
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
