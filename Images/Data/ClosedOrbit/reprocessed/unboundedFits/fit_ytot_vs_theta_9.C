void fit_ytot_vs_theta_9()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 25 05:55:08 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t ytot_vs_theta_fx1031[24] = {
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
   Double_t ytot_vs_theta_fy1031[24] = {
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
   Double_t ytot_vs_theta_fex1031[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1031[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1031,ytot_vs_theta_fy1031,ytot_vs_theta_fex1031,ytot_vs_theta_fey1031);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.099 / 5");
   ptstats_LaTex = ptstats->AddText("p0       = 0.001964 #pm 0.003145 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9549 #pm 0.4125 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.637 #pm 0.4207 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.639 #pm 7.777 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.593 #pm 7.722 ");
   ptstats_LaTex = ptstats->AddText("p5       = 0.5767 #pm 40.33 ");
   ptstats_LaTex = ptstats->AddText("p6       =   120 #pm 40.24 ");
   ptstats_LaTex = ptstats->AddText("p7       = -97.77 #pm 129.1 ");
   ptstats_LaTex = ptstats->AddText("p8       = 286.1 #pm 127.9 ");
   ptstats_LaTex = ptstats->AddText("p9       = -221.6 #pm 315.7 ");
   ptstats_LaTex = ptstats->AddText("p10      = -26.21 #pm 314.4 ");
   ptstats_LaTex = ptstats->AddText("p11      = 557.8 #pm 651.3 ");
   ptstats_LaTex = ptstats->AddText("p12      = 285.3 #pm 656.8 ");
   ptstats_LaTex = ptstats->AddText("p13      = 50.06 #pm  1214 ");
   ptstats_LaTex = ptstats->AddText("p14      = 195.2 #pm  1212 ");
   ptstats_LaTex = ptstats->AddText("p15      = -2717 #pm  2083 ");
   ptstats_LaTex = ptstats->AddText("p16      =  2990 #pm  2059 ");
   ptstats_LaTex = ptstats->AddText("p17      =  3436 #pm  3321 ");
   ptstats_LaTex = ptstats->AddText("p18      =  7707 #pm  3312 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_91033 = new TF1("*fVCOD_9",0.2574361,6.278822,19);
    //The original function : fVCOD_9 had originally been created by:
    //TF1 *fVCOD_9 = new TF1("fVCOD_9",fVCOD_9,0.2574361,6.278822,19, 1, TF1::EAddToList::kNo);
   fVCOD_91033->SetRange(0.2574361,6.278822);
   fVCOD_91033->SetName("fVCOD_9");
   fVCOD_91033->SetTitle("fVCOD_9");
   fVCOD_91033->SetSavedPoint(0,0.06185434);
   fVCOD_91033->SetSavedPoint(1,0.05478369);
   fVCOD_91033->SetSavedPoint(2,0.04137944);
   fVCOD_91033->SetSavedPoint(3,0.02717493);
   fVCOD_91033->SetSavedPoint(4,0.01715826);
   fVCOD_91033->SetSavedPoint(5,0.01447278);
   fVCOD_91033->SetSavedPoint(6,0.01969044);
   fVCOD_91033->SetSavedPoint(7,0.03082604);
   fVCOD_91033->SetSavedPoint(8,0.04405127);
   fVCOD_91033->SetSavedPoint(9,0.05487798);
   fVCOD_91033->SetSavedPoint(10,0.05946224);
   fVCOD_91033->SetSavedPoint(11,0.05566457);
   fVCOD_91033->SetSavedPoint(12,0.04358748);
   fVCOD_91033->SetSavedPoint(13,0.02547145);
   fVCOD_91033->SetSavedPoint(14,0.005015551);
   fVCOD_91033->SetSavedPoint(15,-0.01365299);
   fVCOD_91033->SetSavedPoint(16,-0.02705012);
   fVCOD_91033->SetSavedPoint(17,-0.03314399);
   fVCOD_91033->SetSavedPoint(18,-0.03169274);
   fVCOD_91033->SetSavedPoint(19,-0.02405169);
   fVCOD_91033->SetSavedPoint(20,-0.01255072);
   fVCOD_91033->SetSavedPoint(21,0.0003360645);
   fVCOD_91033->SetSavedPoint(22,0.01275698);
   fVCOD_91033->SetSavedPoint(23,0.02394986);
   fVCOD_91033->SetSavedPoint(24,0.03428025);
   fVCOD_91033->SetSavedPoint(25,0.04486423);
   fVCOD_91033->SetSavedPoint(26,0.05692315);
   fVCOD_91033->SetSavedPoint(27,0.07110226);
   fVCOD_91033->SetSavedPoint(28,0.08699378);
   fVCOD_91033->SetSavedPoint(29,0.1030366);
   fVCOD_91033->SetSavedPoint(30,0.1168419);
   fVCOD_91033->SetSavedPoint(31,0.1258522);
   fVCOD_91033->SetSavedPoint(32,0.1281318);
   fVCOD_91033->SetSavedPoint(33,0.1230346);
   fVCOD_91033->SetSavedPoint(34,0.1115259);
   fVCOD_91033->SetSavedPoint(35,0.09603748);
   fVCOD_91033->SetSavedPoint(36,0.07987598);
   fVCOD_91033->SetSavedPoint(37,0.06634477);
   fVCOD_91033->SetSavedPoint(38,0.05783466);
   fVCOD_91033->SetSavedPoint(39,0.0551567);
   fVCOD_91033->SetSavedPoint(40,0.05732583);
   fVCOD_91033->SetSavedPoint(41,0.06187363);
   fVCOD_91033->SetSavedPoint(42,0.0656099);
   fVCOD_91033->SetSavedPoint(43,0.06561453);
   fVCOD_91033->SetSavedPoint(44,0.06016404);
   fVCOD_91033->SetSavedPoint(45,0.04930857);
   fVCOD_91033->SetSavedPoint(46,0.03491146);
   fVCOD_91033->SetSavedPoint(47,0.02012101);
   fVCOD_91033->SetSavedPoint(48,0.008415308);
   fVCOD_91033->SetSavedPoint(49,0.002496012);
   fVCOD_91033->SetSavedPoint(50,0.00336396);
   fVCOD_91033->SetSavedPoint(51,0.009868957);
   fVCOD_91033->SetSavedPoint(52,0.01889632);
   fVCOD_91033->SetSavedPoint(53,0.02616959);
   fVCOD_91033->SetSavedPoint(54,0.027464);
   fVCOD_91033->SetSavedPoint(55,0.01989375);
   fVCOD_91033->SetSavedPoint(56,0.002897298);
   fVCOD_91033->SetSavedPoint(57,-0.0213848);
   fVCOD_91033->SetSavedPoint(58,-0.04848411);
   fVCOD_91033->SetSavedPoint(59,-0.07266495);
   fVCOD_91033->SetSavedPoint(60,-0.08840675);
   fVCOD_91033->SetSavedPoint(61,-0.09191155);
   fVCOD_91033->SetSavedPoint(62,-0.08221687);
   fVCOD_91033->SetSavedPoint(63,-0.06158752);
   fVCOD_91033->SetSavedPoint(64,-0.03504974);
   fVCOD_91033->SetSavedPoint(65,-0.009163855);
   fVCOD_91033->SetSavedPoint(66,0.009654308);
   fVCOD_91033->SetSavedPoint(67,0.01682002);
   fVCOD_91033->SetSavedPoint(68,0.01081686);
   fVCOD_91033->SetSavedPoint(69,-0.006360959);
   fVCOD_91033->SetSavedPoint(70,-0.029697);
   fVCOD_91033->SetSavedPoint(71,-0.05245702);
   fVCOD_91033->SetSavedPoint(72,-0.0679707);
   fVCOD_91033->SetSavedPoint(73,-0.07141764);
   fVCOD_91033->SetSavedPoint(74,-0.06113743);
   fVCOD_91033->SetSavedPoint(75,-0.03910768);
   fVCOD_91033->SetSavedPoint(76,-0.01045594);
   fVCOD_91033->SetSavedPoint(77,0.01786801);
   fVCOD_91033->SetSavedPoint(78,0.03890541);
   fVCOD_91033->SetSavedPoint(79,0.04750088);
   fVCOD_91033->SetSavedPoint(80,0.04162755);
   fVCOD_91033->SetSavedPoint(81,0.0228705);
   fVCOD_91033->SetSavedPoint(82,-0.004056609);
   fVCOD_91033->SetSavedPoint(83,-0.03262444);
   fVCOD_91033->SetSavedPoint(84,-0.05626791);
   fVCOD_91033->SetSavedPoint(85,-0.07014561);
   fVCOD_91033->SetSavedPoint(86,-0.07239946);
   fVCOD_91033->SetSavedPoint(87,-0.06457486);
   fVCOD_91033->SetSavedPoint(88,-0.05109341);
   fVCOD_91033->SetSavedPoint(89,-0.03793051);
   fVCOD_91033->SetSavedPoint(90,-0.03086723);
   fVCOD_91033->SetSavedPoint(91,-0.03380083);
   fVCOD_91033->SetSavedPoint(92,-0.04757923);
   fVCOD_91033->SetSavedPoint(93,-0.06967951);
   fVCOD_91033->SetSavedPoint(94,-0.09481753);
   fVCOD_91033->SetSavedPoint(95,-0.1163215);
   fVCOD_91033->SetSavedPoint(96,-0.1278957);
   fVCOD_91033->SetSavedPoint(97,-0.1252966);
   fVCOD_91033->SetSavedPoint(98,-0.1074726);
   fVCOD_91033->SetSavedPoint(99,-0.07686673);
   fVCOD_91033->SetSavedPoint(100,-0.0388111);
   fVCOD_91033->SetSavedPoint(101,0.2574361);
   fVCOD_91033->SetSavedPoint(102,6.278822);
   fVCOD_91033->SetFillColor(19);
   fVCOD_91033->SetFillStyle(0);
   fVCOD_91033->SetLineColor(2);
   fVCOD_91033->SetLineWidth(2);
   fVCOD_91033->SetChisquare(5.098793);
   fVCOD_91033->SetNDF(5);
   fVCOD_91033->GetXaxis()->SetLabelFont(42);
   fVCOD_91033->GetXaxis()->SetTitleOffset(1);
   fVCOD_91033->GetXaxis()->SetTitleFont(42);
   fVCOD_91033->GetYaxis()->SetLabelFont(42);
   fVCOD_91033->GetYaxis()->SetTitleFont(42);
   fVCOD_91033->SetParameter(0,0.001964103);
   fVCOD_91033->SetParError(0,0.003145134);
   fVCOD_91033->SetParLimits(0,0,0);
   fVCOD_91033->SetParameter(1,-0.9548693);
   fVCOD_91033->SetParError(1,0.412536);
   fVCOD_91033->SetParLimits(1,0,0);
   fVCOD_91033->SetParameter(2,1.636502);
   fVCOD_91033->SetParError(2,0.4206682);
   fVCOD_91033->SetParLimits(2,0,0);
   fVCOD_91033->SetParameter(3,-2.638822);
   fVCOD_91033->SetParError(3,7.776514);
   fVCOD_91033->SetParLimits(3,0,0);
   fVCOD_91033->SetParameter(4,-8.593398);
   fVCOD_91033->SetParError(4,7.72153);
   fVCOD_91033->SetParLimits(4,0,0);
   fVCOD_91033->SetParameter(5,0.576653);
   fVCOD_91033->SetParError(5,40.32526);
   fVCOD_91033->SetParLimits(5,0,0);
   fVCOD_91033->SetParameter(6,119.9943);
   fVCOD_91033->SetParError(6,40.24036);
   fVCOD_91033->SetParLimits(6,0,0);
   fVCOD_91033->SetParameter(7,-97.77235);
   fVCOD_91033->SetParError(7,129.1152);
   fVCOD_91033->SetParLimits(7,0,0);
   fVCOD_91033->SetParameter(8,286.0953);
   fVCOD_91033->SetParError(8,127.8955);
   fVCOD_91033->SetParLimits(8,0,0);
   fVCOD_91033->SetParameter(9,-221.594);
   fVCOD_91033->SetParError(9,315.6669);
   fVCOD_91033->SetParLimits(9,0,0);
   fVCOD_91033->SetParameter(10,-26.21166);
   fVCOD_91033->SetParError(10,314.3896);
   fVCOD_91033->SetParLimits(10,0,0);
   fVCOD_91033->SetParameter(11,557.7632);
   fVCOD_91033->SetParError(11,651.2802);
   fVCOD_91033->SetParLimits(11,0,0);
   fVCOD_91033->SetParameter(12,285.2729);
   fVCOD_91033->SetParError(12,656.7954);
   fVCOD_91033->SetParLimits(12,0,0);
   fVCOD_91033->SetParameter(13,50.0619);
   fVCOD_91033->SetParError(13,1214.486);
   fVCOD_91033->SetParLimits(13,0,0);
   fVCOD_91033->SetParameter(14,195.218);
   fVCOD_91033->SetParError(14,1212.396);
   fVCOD_91033->SetParLimits(14,0,0);
   fVCOD_91033->SetParameter(15,-2716.998);
   fVCOD_91033->SetParError(15,2083.19);
   fVCOD_91033->SetParLimits(15,0,0);
   fVCOD_91033->SetParameter(16,2989.673);
   fVCOD_91033->SetParError(16,2059.371);
   fVCOD_91033->SetParLimits(16,0,0);
   fVCOD_91033->SetParameter(17,3436.14);
   fVCOD_91033->SetParError(17,3321.206);
   fVCOD_91033->SetParLimits(17,0,0);
   fVCOD_91033->SetParameter(18,7707.245);
   fVCOD_91033->SetParError(18,3311.811);
   fVCOD_91033->SetParLimits(18,0,0);
   fVCOD_91033->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_91033);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
