void fit_ytot_vs_theta_11()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 28 10:59:59 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t ytot_vs_theta_fx1037[24] = {
   0.5192355,
   0.7810348,
   1.042834,
   1.304634,
   1.566433,
   1.828232,
   2.090032,
   2.351831,
   2.613631,
   2.87543,
   3.137229,
   3.399029,
   3.660828,
   3.922627,
   4.184427,
   4.446226,
   4.708026,
   4.969825,
   5.231624,
   5.493424,
   5.755223,
   6.017023,
   6.278822,
   0.2574361};
   Double_t ytot_vs_theta_fy1037[24] = {
   0.006562985,
   0.06206024,
   0.0127903,
   -0.02058143,
   -0.003870004,
   0.07405092,
   0.102477,
   0.1174621,
   0.03883636,
   0.07325296,
   0.009276232,
   0.01217671,
   0.004751873,
   -0.1194191,
   0.02645731,
   -0.06019055,
   -0.02371367,
   0.01542529,
   -0.002887453,
   -0.07978954,
   -0.03078049,
   -0.1239876,
   -0.0446683,
   0.06959394};
   Double_t ytot_vs_theta_fex1037[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1037[24] = {
   0.03941483,
   0.04179225,
   0.04482726,
   0.04455844,
   0.0422236,
   0.04241968,
   0.04387671,
   0.04244206,
   0.04391941,
   0.0424273,
   0.04196058,
   0.03878665,
   0.03447418,
   0.03987117,
   0.03831296,
   0.04269219,
   0.04242621,
   0.03828801,
   0.03690439,
   0.04168359,
   0.04255553,
   0.04166702,
   0.04035714,
   0.03898679};
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1037,ytot_vs_theta_fy1037,ytot_vs_theta_fex1037,ytot_vs_theta_fey1037);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028103110341037);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 0.1388 / 1");
   ptstats_LaTex = ptstats->AddText("p0       = 0.001806 #pm 0.003146 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9377 #pm 0.4128 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.647 #pm 0.4207 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.706 #pm 7.777 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.798 #pm 7.727 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.9366 #pm 40.35 ");
   ptstats_LaTex = ptstats->AddText("p6       = 121.1 #pm 40.25 ");
   ptstats_LaTex = ptstats->AddText("p7       = -88.04 #pm 129.2 ");
   ptstats_LaTex = ptstats->AddText("p8       = 287.6 #pm 127.9 ");
   ptstats_LaTex = ptstats->AddText("p9       = -217.2 #pm 315.7 ");
   ptstats_LaTex = ptstats->AddText("p10      = -36.77 #pm 314.6 ");
   ptstats_LaTex = ptstats->AddText("p11      = 518.8 #pm 652.8 ");
   ptstats_LaTex = ptstats->AddText("p12      = 251.6 #pm 657.5 ");
   ptstats_LaTex = ptstats->AddText("p13      = -80.47 #pm  1216 ");
   ptstats_LaTex = ptstats->AddText("p14      = 225.8 #pm  1214 ");
   ptstats_LaTex = ptstats->AddText("p15      = -2545 #pm  2085 ");
   ptstats_LaTex = ptstats->AddText("p16      =  3051 #pm  2061 ");
   ptstats_LaTex = ptstats->AddText("p17      =  3550 #pm  3329 ");
   ptstats_LaTex = ptstats->AddText("p18      =  7500 #pm  3323 ");
   ptstats_LaTex = ptstats->AddText("p19      = -3138 #pm  5099 ");
   ptstats_LaTex = ptstats->AddText("p20      = -2215 #pm  5041 ");
   ptstats_LaTex = ptstats->AddText("p21      = -355.9 #pm  7366 ");
   ptstats_LaTex = ptstats->AddText("p22      = 1.55e+04 #pm  7477 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_111039 = new TF1("*fVCOD_11",0.2574361,6.278822,23);
    //The original function : fVCOD_11 had originally been created by:
    //TF1 *fVCOD_11 = new TF1("fVCOD_11",fVCOD_11,0.2574361,6.278822,23, 1, TF1::EAddToList::kNo);
   fVCOD_111039->SetRange(0.2574361,6.278822);
   fVCOD_111039->SetName("fVCOD_11");
   fVCOD_111039->SetTitle("fVCOD_11");
   fVCOD_111039->SetSavedPoint(0,0.07241093);
   fVCOD_111039->SetSavedPoint(1,0.05363164);
   fVCOD_111039->SetSavedPoint(2,0.02945796);
   fVCOD_111039->SetSavedPoint(3,0.01018031);
   fVCOD_111039->SetSavedPoint(4,0.002913068);
   fVCOD_111039->SetSavedPoint(5,0.009414858);
   fVCOD_111039->SetSavedPoint(6,0.02603329);
   fVCOD_111039->SetSavedPoint(7,0.04562615);
   fVCOD_111039->SetSavedPoint(8,0.0605681);
   fVCOD_111039->SetSavedPoint(9,0.06560416);
   fVCOD_111039->SetSavedPoint(10,0.05947428);
   fVCOD_111039->SetSavedPoint(11,0.04481334);
   fVCOD_111039->SetSavedPoint(12,0.02656584);
   fVCOD_111039->SetSavedPoint(13,0.009734081);
   fVCOD_111039->SetSavedPoint(14,-0.002527329);
   fVCOD_111039->SetSavedPoint(15,-0.009706023);
   fVCOD_111039->SetSavedPoint(16,-0.01340715);
   fVCOD_111039->SetSavedPoint(17,-0.0159067);
   fVCOD_111039->SetSavedPoint(18,-0.0185673);
   fVCOD_111039->SetSavedPoint(19,-0.02090955);
   fVCOD_111039->SetSavedPoint(20,-0.0207749);
   fVCOD_111039->SetSavedPoint(21,-0.01547045);
   fVCOD_111039->SetSavedPoint(22,-0.003307125);
   fVCOD_111039->SetSavedPoint(23,0.01524874);
   fVCOD_111039->SetSavedPoint(24,0.03740877);
   fVCOD_111039->SetSavedPoint(25,0.05901105);
   fVCOD_111039->SetSavedPoint(26,0.07617627);
   fVCOD_111039->SetSavedPoint(27,0.08690908);
   fVCOD_111039->SetSavedPoint(28,0.09187902);
   fVCOD_111039->SetSavedPoint(29,0.09397434);
   fVCOD_111039->SetSavedPoint(30,0.09678688);
   fVCOD_111039->SetSavedPoint(31,0.1027012);
   fVCOD_111039->SetSavedPoint(32,0.1114855);
   fVCOD_111039->SetSavedPoint(33,0.1200978);
   fVCOD_111039->SetSavedPoint(34,0.1238977);
   fVCOD_111039->SetSavedPoint(35,0.1188057);
   fVCOD_111039->SetSavedPoint(36,0.1034802);
   fVCOD_111039->SetSavedPoint(37,0.08049262);
   fVCOD_111039->SetSavedPoint(38,0.05586024);
   fVCOD_111039->SetSavedPoint(39,0.03697409);
   fVCOD_111039->SetSavedPoint(40,0.02968351);
   fVCOD_111039->SetSavedPoint(41,0.03572829);
   fVCOD_111039->SetSavedPoint(42,0.05165511);
   fVCOD_111039->SetSavedPoint(43,0.0698038);
   fVCOD_111039->SetSavedPoint(44,0.08111141);
   fVCOD_111039->SetSavedPoint(45,0.07869871);
   fVCOD_111039->SetSavedPoint(46,0.0608092);
   fVCOD_111039->SetSavedPoint(47,0.03185101);
   fVCOD_111039->SetSavedPoint(48,0.001000554);
   fVCOD_111039->SetSavedPoint(49,-0.02120554);
   fVCOD_111039->SetSavedPoint(50,-0.02702455);
   fVCOD_111039->SetSavedPoint(51,-0.01477978);
   fVCOD_111039->SetSavedPoint(52,0.01009631);
   fVCOD_111039->SetSavedPoint(53,0.03676297);
   fVCOD_111039->SetSavedPoint(54,0.05286466);
   fVCOD_111039->SetSavedPoint(55,0.04918621);
   fVCOD_111039->SetSavedPoint(56,0.02329991);
   fVCOD_111039->SetSavedPoint(57,-0.01921782);
   fVCOD_111039->SetSavedPoint(58,-0.06651528);
   fVCOD_111039->SetSavedPoint(59,-0.1045372);
   fVCOD_111039->SetSavedPoint(60,-0.121944);
   fVCOD_111039->SetSavedPoint(61,-0.1140623);
   fVCOD_111039->SetSavedPoint(62,-0.08442512);
   fVCOD_111039->SetSavedPoint(63,-0.04338028);
   fVCOD_111039->SetSavedPoint(64,-0.004343695);
   fVCOD_111039->SetSavedPoint(65,0.02086651);
   fVCOD_111039->SetSavedPoint(66,0.0258941);
   fVCOD_111039->SetSavedPoint(67,0.01155931);
   fVCOD_111039->SetSavedPoint(68,-0.01505568);
   fVCOD_111039->SetSavedPoint(69,-0.04362527);
   fVCOD_111039->SetSavedPoint(70,-0.06443104);
   fVCOD_111039->SetSavedPoint(71,-0.07156196);
   fVCOD_111039->SetSavedPoint(72,-0.0643586);
   fVCOD_111039->SetSavedPoint(73,-0.04677334);
   fVCOD_111039->SetSavedPoint(74,-0.0251615);
   fVCOD_111039->SetSavedPoint(75,-0.005579986);
   fVCOD_111039->SetSavedPoint(76,0.008257935);
   fVCOD_111039->SetSavedPoint(77,0.01563594);
   fVCOD_111039->SetSavedPoint(78,0.01804744);
   fVCOD_111039->SetSavedPoint(79,0.01756693);
   fVCOD_111039->SetSavedPoint(80,0.01530485);
   fVCOD_111039->SetSavedPoint(81,0.01074669);
   fVCOD_111039->SetSavedPoint(82,0.002281022);
   fVCOD_111039->SetSavedPoint(83,-0.01140621);
   fVCOD_111039->SetSavedPoint(84,-0.02985454);
   fVCOD_111039->SetSavedPoint(85,-0.0501294);
   fVCOD_111039->SetSavedPoint(86,-0.06741267);
   fVCOD_111039->SetSavedPoint(87,-0.07677677);
   fVCOD_111039->SetSavedPoint(88,-0.07542759);
   fVCOD_111039->SetSavedPoint(89,-0.06438988);
   fVCOD_111039->SetSavedPoint(90,-0.04875361);
   fVCOD_111039->SetSavedPoint(91,-0.03616312);
   fVCOD_111039->SetSavedPoint(92,-0.03398465);
   fVCOD_111039->SetSavedPoint(93,-0.04621022);
   fVCOD_111039->SetSavedPoint(94,-0.07136785);
   fVCOD_111039->SetSavedPoint(95,-0.1023941);
   fVCOD_111039->SetSavedPoint(96,-0.1286908);
   fVCOD_111039->SetSavedPoint(97,-0.1397184);
   fVCOD_111039->SetSavedPoint(98,-0.1288307);
   fVCOD_111039->SetSavedPoint(99,-0.0958961);
   fVCOD_111039->SetSavedPoint(100,-0.04766941);
   fVCOD_111039->SetSavedPoint(101,0.2574361);
   fVCOD_111039->SetSavedPoint(102,6.278822);
   fVCOD_111039->SetFillColor(19);
   fVCOD_111039->SetFillStyle(0);
   fVCOD_111039->SetLineColor(2);
   fVCOD_111039->SetLineWidth(2);
   fVCOD_111039->SetChisquare(0.1387697);
   fVCOD_111039->SetNDF(1);
   fVCOD_111039->GetXaxis()->SetLabelFont(42);
   fVCOD_111039->GetXaxis()->SetTitleOffset(1);
   fVCOD_111039->GetXaxis()->SetTitleFont(42);
   fVCOD_111039->GetYaxis()->SetLabelFont(42);
   fVCOD_111039->GetYaxis()->SetTitleFont(42);
   fVCOD_111039->SetParameter(0,0.001806466);
   fVCOD_111039->SetParError(0,0.003146249);
   fVCOD_111039->SetParLimits(0,0,0);
   fVCOD_111039->SetParameter(1,-0.9376822);
   fVCOD_111039->SetParError(1,0.4127547);
   fVCOD_111039->SetParLimits(1,0,0);
   fVCOD_111039->SetParameter(2,1.647419);
   fVCOD_111039->SetParError(2,0.4207389);
   fVCOD_111039->SetParLimits(2,0,0);
   fVCOD_111039->SetParameter(3,-2.705864);
   fVCOD_111039->SetParError(3,7.776605);
   fVCOD_111039->SetParLimits(3,0,0);
   fVCOD_111039->SetParameter(4,-8.79759);
   fVCOD_111039->SetParError(4,7.726508);
   fVCOD_111039->SetParLimits(4,0,0);
   fVCOD_111039->SetParameter(5,-0.93657);
   fVCOD_111039->SetParError(5,40.35263);
   fVCOD_111039->SetParLimits(5,0,0);
   fVCOD_111039->SetParameter(6,121.1434);
   fVCOD_111039->SetParError(6,40.24877);
   fVCOD_111039->SetParLimits(6,0,0);
   fVCOD_111039->SetParameter(7,-88.0355);
   fVCOD_111039->SetParError(7,129.204);
   fVCOD_111039->SetParLimits(7,0,0);
   fVCOD_111039->SetParameter(8,287.6042);
   fVCOD_111039->SetParError(8,127.9182);
   fVCOD_111039->SetParLimits(8,0,0);
   fVCOD_111039->SetParameter(9,-217.1545);
   fVCOD_111039->SetParError(9,315.7383);
   fVCOD_111039->SetParLimits(9,0,0);
   fVCOD_111039->SetParameter(10,-36.76872);
   fVCOD_111039->SetParError(10,314.6066);
   fVCOD_111039->SetParLimits(10,0,0);
   fVCOD_111039->SetParameter(11,518.7858);
   fVCOD_111039->SetParError(11,652.8374);
   fVCOD_111039->SetParLimits(11,0,0);
   fVCOD_111039->SetParameter(12,251.5962);
   fVCOD_111039->SetParError(12,657.4878);
   fVCOD_111039->SetParLimits(12,0,0);
   fVCOD_111039->SetParameter(13,-80.47041);
   fVCOD_111039->SetParError(13,1216.41);
   fVCOD_111039->SetParLimits(13,0,0);
   fVCOD_111039->SetParameter(14,225.7805);
   fVCOD_111039->SetParError(14,1213.967);
   fVCOD_111039->SetParLimits(14,0,0);
   fVCOD_111039->SetParameter(15,-2544.588);
   fVCOD_111039->SetParError(15,2085.409);
   fVCOD_111039->SetParLimits(15,0,0);
   fVCOD_111039->SetParameter(16,3051.456);
   fVCOD_111039->SetParError(16,2060.59);
   fVCOD_111039->SetParLimits(16,0,0);
   fVCOD_111039->SetParameter(17,3549.627);
   fVCOD_111039->SetParError(17,3329.389);
   fVCOD_111039->SetParLimits(17,0,0);
   fVCOD_111039->SetParameter(18,7500.263);
   fVCOD_111039->SetParError(18,3323.39);
   fVCOD_111039->SetParLimits(18,0,0);
   fVCOD_111039->SetParameter(19,-3137.612);
   fVCOD_111039->SetParError(19,5099.248);
   fVCOD_111039->SetParLimits(19,0,0);
   fVCOD_111039->SetParameter(20,-2215.409);
   fVCOD_111039->SetParError(20,5041.133);
   fVCOD_111039->SetParLimits(20,0,0);
   fVCOD_111039->SetParameter(21,-355.9464);
   fVCOD_111039->SetParError(21,7365.702);
   fVCOD_111039->SetParLimits(21,0,0);
   fVCOD_111039->SetParameter(22,15498.11);
   fVCOD_111039->SetParError(22,7476.628);
   fVCOD_111039->SetParLimits(22,0,0);
   fVCOD_111039->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_111039);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
