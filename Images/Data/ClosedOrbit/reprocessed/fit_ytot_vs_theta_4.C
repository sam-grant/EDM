void fit_ytot_vs_theta_4()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 28 10:59:58 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t ytot_vs_theta_fx1016[24] = {
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
   Double_t ytot_vs_theta_fy1016[24] = {
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
   Double_t ytot_vs_theta_fex1016[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1016[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1016,ytot_vs_theta_fy1016,ytot_vs_theta_fex1016,ytot_vs_theta_fey1016);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016 = new TH1F("Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 17.03 / 15");
   ptstats_LaTex = ptstats->AddText("p0       = 0.00212 #pm 0.003141 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9771 #pm 0.4118 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.608 #pm 0.4194 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.815 #pm 7.757 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.357 #pm 7.705 ");
   ptstats_LaTex = ptstats->AddText("p5       = 1.781 #pm 40.27 ");
   ptstats_LaTex = ptstats->AddText("p6       = 121.7 #pm  40.1 ");
   ptstats_LaTex = ptstats->AddText("p7       = -83.62 #pm 128.9 ");
   ptstats_LaTex = ptstats->AddText("p8       = 285.8 #pm 127.2 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_41018 = new TF1("*fVCOD_4",0.2574361,6.278822,9);
    //The original function : fVCOD_4 had originally been created by:
    //TF1 *fVCOD_4 = new TF1("fVCOD_4",fVCOD_4,0.2574361,6.278822,9, 1, TF1::EAddToList::kNo);
   fVCOD_41018->SetRange(0.2574361,6.278822);
   fVCOD_41018->SetName("fVCOD_4");
   fVCOD_41018->SetTitle("fVCOD_4");
   fVCOD_41018->SetSavedPoint(0,0.02443253);
   fVCOD_41018->SetSavedPoint(1,0.03497792);
   fVCOD_41018->SetSavedPoint(2,0.0434393);
   fVCOD_41018->SetSavedPoint(3,0.04954289);
   fVCOD_41018->SetSavedPoint(4,0.05313346);
   fVCOD_41018->SetSavedPoint(5,0.05418126);
   fVCOD_41018->SetSavedPoint(6,0.0527827);
   fVCOD_41018->SetSavedPoint(7,0.04915445);
   fVCOD_41018->SetSavedPoint(8,0.04362147);
   fVCOD_41018->SetSavedPoint(9,0.03659961);
   fVCOD_41018->SetSavedPoint(10,0.02857368);
   fVCOD_41018->SetSavedPoint(11,0.02007212);
   fVCOD_41018->SetSavedPoint(12,0.01163982);
   fVCOD_41018->SetSavedPoint(13,0.003810237);
   fVCOD_41018->SetSavedPoint(14,-0.002921444);
   fVCOD_41018->SetSavedPoint(15,-0.00812292);
   fVCOD_41018->SetSavedPoint(16,-0.01144577);
   fVCOD_41018->SetSavedPoint(17,-0.01264183);
   fVCOD_41018->SetSavedPoint(18,-0.01157418);
   fVCOD_41018->SetSavedPoint(19,-0.008222169);
   fVCOD_41018->SetSavedPoint(20,-0.002680414);
   fVCOD_41018->SetSavedPoint(21,0.00484816);
   fVCOD_41018->SetSavedPoint(22,0.01406469);
   fVCOD_41018->SetSavedPoint(23,0.02459141);
   fVCOD_41018->SetSavedPoint(24,0.03599241);
   fVCOD_41018->SetSavedPoint(25,0.04779675);
   fVCOD_41018->SetSavedPoint(26,0.05952291);
   fVCOD_41018->SetSavedPoint(27,0.0707029);
   fVCOD_41018->SetSavedPoint(28,0.08090509);
   fVCOD_41018->SetSavedPoint(29,0.08975422);
   fVCOD_41018->SetSavedPoint(30,0.09694784);
   fVCOD_41018->SetSavedPoint(31,0.1022683);
   fVCOD_41018->SetSavedPoint(32,0.1055895);
   fVCOD_41018->SetSavedPoint(33,0.1068789);
   fVCOD_41018->SetSavedPoint(34,0.1061942);
   fVCOD_41018->SetSavedPoint(35,0.1036746);
   fVCOD_41018->SetSavedPoint(36,0.09952918);
   fVCOD_41018->SetSavedPoint(37,0.09402099);
   fVCOD_41018->SetSavedPoint(38,0.08744924);
   fVCOD_41018->SetSavedPoint(39,0.08013033);
   fVCOD_41018->SetSavedPoint(40,0.07237893);
   fVCOD_41018->SetSavedPoint(41,0.06449016);
   fVCOD_41018->SetSavedPoint(42,0.0567241);
   fVCOD_41018->SetSavedPoint(43,0.04929319);
   fVCOD_41018->SetSavedPoint(44,0.04235356);
   fVCOD_41018->SetSavedPoint(45,0.03600038);
   fVCOD_41018->SetSavedPoint(46,0.03026761);
   fVCOD_41018->SetSavedPoint(47,0.02513189);
   fVCOD_41018->SetSavedPoint(48,0.02052026);
   fVCOD_41018->SetSavedPoint(49,0.01632104);
   fVCOD_41018->SetSavedPoint(50,0.0123971);
   fVCOD_41018->SetSavedPoint(51,0.008600543);
   fVCOD_41018->SetSavedPoint(52,0.004787781);
   fVCOD_41018->SetSavedPoint(53,0.0008339079);
   fVCOD_41018->SetSavedPoint(54,-0.003354557);
   fVCOD_41018->SetSavedPoint(55,-0.00782949);
   fVCOD_41018->SetSavedPoint(56,-0.01259425);
   fVCOD_41018->SetSavedPoint(57,-0.01760051);
   fVCOD_41018->SetSavedPoint(58,-0.02274915);
   fVCOD_41018->SetSavedPoint(59,-0.02789508);
   fVCOD_41018->SetSavedPoint(60,-0.03285586);
   fVCOD_41018->SetSavedPoint(61,-0.03742348);
   fVCOD_41018->SetSavedPoint(62,-0.04137866);
   fVCOD_41018->SetSavedPoint(63,-0.04450662);
   fVCOD_41018->SetSavedPoint(64,-0.04661345);
   fVCOD_41018->SetSavedPoint(65,-0.04754189);
   fVCOD_41018->SetSavedPoint(66,-0.04718548);
   fVCOD_41018->SetSavedPoint(67,-0.04550013);
   fVCOD_41018->SetSavedPoint(68,-0.04251215);
   fVCOD_41018->SetSavedPoint(69,-0.03832226);
   fVCOD_41018->SetSavedPoint(70,-0.03310503);
   fVCOD_41018->SetSavedPoint(71,-0.0271037);
   fVCOD_41018->SetSavedPoint(72,-0.02062041);
   fVCOD_41018->SetSavedPoint(73,-0.01400247);
   fVCOD_41018->SetSavedPoint(74,-0.007625121);
   fVCOD_41018->SetSavedPoint(75,-0.001871833);
   fVCOD_41018->SetSavedPoint(76,0.002886788);
   fVCOD_41018->SetSavedPoint(77,0.00631434);
   fVCOD_41018->SetSavedPoint(78,0.008128949);
   fVCOD_41018->SetSavedPoint(79,0.008121349);
   fVCOD_41018->SetSavedPoint(80,0.006169649);
   fVCOD_41018->SetSavedPoint(81,0.00224979);
   fVCOD_41018->SetSavedPoint(82,-0.00355898);
   fVCOD_41018->SetSavedPoint(83,-0.01107411);
   fVCOD_41018->SetSavedPoint(84,-0.02001537);
   fVCOD_41018->SetSavedPoint(85,-0.03001589);
   fVCOD_41018->SetSavedPoint(86,-0.04063826);
   fVCOD_41018->SetSavedPoint(87,-0.05139477);
   fVCOD_41018->SetSavedPoint(88,-0.06177094);
   fVCOD_41018->SetSavedPoint(89,-0.07125107);
   fVCOD_41018->SetSavedPoint(90,-0.07934436);
   fVCOD_41018->SetSavedPoint(91,-0.08561048);
   fVCOD_41018->SetSavedPoint(92,-0.08968286);
   fVCOD_41018->SetSavedPoint(93,-0.09128873);
   fVCOD_41018->SetSavedPoint(94,-0.09026459);
   fVCOD_41018->SetSavedPoint(95,-0.08656627);
   fVCOD_41018->SetSavedPoint(96,-0.08027301);
   fVCOD_41018->SetSavedPoint(97,-0.07158522);
   fVCOD_41018->SetSavedPoint(98,-0.06081606);
   fVCOD_41018->SetSavedPoint(99,-0.048377);
   fVCOD_41018->SetSavedPoint(100,-0.03475842);
   fVCOD_41018->SetSavedPoint(101,0.2574361);
   fVCOD_41018->SetSavedPoint(102,6.278822);
   fVCOD_41018->SetFillColor(19);
   fVCOD_41018->SetFillStyle(0);
   fVCOD_41018->SetLineColor(2);
   fVCOD_41018->SetLineWidth(2);
   fVCOD_41018->SetChisquare(17.02725);
   fVCOD_41018->SetNDF(15);
   fVCOD_41018->GetXaxis()->SetLabelFont(42);
   fVCOD_41018->GetXaxis()->SetTitleOffset(1);
   fVCOD_41018->GetXaxis()->SetTitleFont(42);
   fVCOD_41018->GetYaxis()->SetLabelFont(42);
   fVCOD_41018->GetYaxis()->SetTitleFont(42);
   fVCOD_41018->SetParameter(0,0.002120336);
   fVCOD_41018->SetParError(0,0.003140866);
   fVCOD_41018->SetParLimits(0,0,0);
   fVCOD_41018->SetParameter(1,-0.9771459);
   fVCOD_41018->SetParError(1,0.4118388);
   fVCOD_41018->SetParLimits(1,0,0);
   fVCOD_41018->SetParameter(2,1.60811);
   fVCOD_41018->SetParError(2,0.4194447);
   fVCOD_41018->SetParLimits(2,0,0);
   fVCOD_41018->SetParameter(3,-2.815313);
   fVCOD_41018->SetParError(3,7.75652);
   fVCOD_41018->SetParLimits(3,0,0);
   fVCOD_41018->SetParameter(4,-8.357314);
   fVCOD_41018->SetParError(4,7.704775);
   fVCOD_41018->SetParLimits(4,0,0);
   fVCOD_41018->SetParameter(5,1.780971);
   fVCOD_41018->SetParError(5,40.26548);
   fVCOD_41018->SetParLimits(5,0,0);
   fVCOD_41018->SetParameter(6,121.7341);
   fVCOD_41018->SetParError(6,40.09867);
   fVCOD_41018->SetParLimits(6,0,0);
   fVCOD_41018->SetParameter(7,-83.623);
   fVCOD_41018->SetParError(7,128.8595);
   fVCOD_41018->SetParLimits(7,0,0);
   fVCOD_41018->SetParameter(8,285.8324);
   fVCOD_41018->SetParError(8,127.2269);
   fVCOD_41018->SetParLimits(8,0,0);
   fVCOD_41018->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_41018);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
