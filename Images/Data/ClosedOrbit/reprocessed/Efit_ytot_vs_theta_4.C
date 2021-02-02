void Efit_ytot_vs_theta_4()
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
   
   Double_t ytot_vs_theta_fx1041[24] = {
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
   Double_t ytot_vs_theta_fy1041[24] = {
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
   Double_t ytot_vs_theta_fex1041[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1041[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1041,ytot_vs_theta_fy1041,ytot_vs_theta_fex1041,ytot_vs_theta_fey1041);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle("E-field");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041","E-field",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022102510281031103410371041);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 17.03 / 15");
   ptstats_LaTex = ptstats->AddText("p0       = 0.005667 #pm 0.008394 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9771 #pm 0.4118 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.608 #pm 0.4194 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.7038 #pm 1.939 ");
   ptstats_LaTex = ptstats->AddText("p4       = -2.089 #pm 1.926 ");
   ptstats_LaTex = ptstats->AddText("p5       = 0.1979 #pm 4.474 ");
   ptstats_LaTex = ptstats->AddText("p6       = 13.53 #pm 4.455 ");
   ptstats_LaTex = ptstats->AddText("p7       = -5.226 #pm 8.054 ");
   ptstats_LaTex = ptstats->AddText("p8       = 17.86 #pm 7.952 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_4_E1043 = new TF1("*fVCOD_4_E",0.2574361,6.278822,9);
    //The original function : fVCOD_4_E had originally been created by:
    //TF1 *fVCOD_4_E = new TF1("fVCOD_4_E",fVCOD_4_E,0.2574361,6.278822,9, 1, TF1::EAddToList::kNo);
   fVCOD_4_E1043->SetRange(0.2574361,6.278822);
   fVCOD_4_E1043->SetName("fVCOD_4_E");
   fVCOD_4_E1043->SetTitle("fVCOD_4_E");
   fVCOD_4_E1043->SetSavedPoint(0,0.02443253);
   fVCOD_4_E1043->SetSavedPoint(1,0.03497792);
   fVCOD_4_E1043->SetSavedPoint(2,0.0434393);
   fVCOD_4_E1043->SetSavedPoint(3,0.04954289);
   fVCOD_4_E1043->SetSavedPoint(4,0.05313346);
   fVCOD_4_E1043->SetSavedPoint(5,0.05418126);
   fVCOD_4_E1043->SetSavedPoint(6,0.0527827);
   fVCOD_4_E1043->SetSavedPoint(7,0.04915445);
   fVCOD_4_E1043->SetSavedPoint(8,0.04362147);
   fVCOD_4_E1043->SetSavedPoint(9,0.03659961);
   fVCOD_4_E1043->SetSavedPoint(10,0.02857368);
   fVCOD_4_E1043->SetSavedPoint(11,0.02007212);
   fVCOD_4_E1043->SetSavedPoint(12,0.01163982);
   fVCOD_4_E1043->SetSavedPoint(13,0.003810237);
   fVCOD_4_E1043->SetSavedPoint(14,-0.002921444);
   fVCOD_4_E1043->SetSavedPoint(15,-0.00812292);
   fVCOD_4_E1043->SetSavedPoint(16,-0.01144577);
   fVCOD_4_E1043->SetSavedPoint(17,-0.01264183);
   fVCOD_4_E1043->SetSavedPoint(18,-0.01157418);
   fVCOD_4_E1043->SetSavedPoint(19,-0.008222169);
   fVCOD_4_E1043->SetSavedPoint(20,-0.002680414);
   fVCOD_4_E1043->SetSavedPoint(21,0.00484816);
   fVCOD_4_E1043->SetSavedPoint(22,0.01406469);
   fVCOD_4_E1043->SetSavedPoint(23,0.02459141);
   fVCOD_4_E1043->SetSavedPoint(24,0.03599241);
   fVCOD_4_E1043->SetSavedPoint(25,0.04779675);
   fVCOD_4_E1043->SetSavedPoint(26,0.05952291);
   fVCOD_4_E1043->SetSavedPoint(27,0.0707029);
   fVCOD_4_E1043->SetSavedPoint(28,0.08090509);
   fVCOD_4_E1043->SetSavedPoint(29,0.08975422);
   fVCOD_4_E1043->SetSavedPoint(30,0.09694784);
   fVCOD_4_E1043->SetSavedPoint(31,0.1022683);
   fVCOD_4_E1043->SetSavedPoint(32,0.1055895);
   fVCOD_4_E1043->SetSavedPoint(33,0.1068789);
   fVCOD_4_E1043->SetSavedPoint(34,0.1061942);
   fVCOD_4_E1043->SetSavedPoint(35,0.1036746);
   fVCOD_4_E1043->SetSavedPoint(36,0.09952917);
   fVCOD_4_E1043->SetSavedPoint(37,0.09402099);
   fVCOD_4_E1043->SetSavedPoint(38,0.08744924);
   fVCOD_4_E1043->SetSavedPoint(39,0.08013033);
   fVCOD_4_E1043->SetSavedPoint(40,0.07237893);
   fVCOD_4_E1043->SetSavedPoint(41,0.06449016);
   fVCOD_4_E1043->SetSavedPoint(42,0.0567241);
   fVCOD_4_E1043->SetSavedPoint(43,0.04929319);
   fVCOD_4_E1043->SetSavedPoint(44,0.04235356);
   fVCOD_4_E1043->SetSavedPoint(45,0.03600038);
   fVCOD_4_E1043->SetSavedPoint(46,0.03026761);
   fVCOD_4_E1043->SetSavedPoint(47,0.02513189);
   fVCOD_4_E1043->SetSavedPoint(48,0.02052026);
   fVCOD_4_E1043->SetSavedPoint(49,0.01632104);
   fVCOD_4_E1043->SetSavedPoint(50,0.0123971);
   fVCOD_4_E1043->SetSavedPoint(51,0.008600543);
   fVCOD_4_E1043->SetSavedPoint(52,0.004787781);
   fVCOD_4_E1043->SetSavedPoint(53,0.0008339079);
   fVCOD_4_E1043->SetSavedPoint(54,-0.003354557);
   fVCOD_4_E1043->SetSavedPoint(55,-0.00782949);
   fVCOD_4_E1043->SetSavedPoint(56,-0.01259425);
   fVCOD_4_E1043->SetSavedPoint(57,-0.01760051);
   fVCOD_4_E1043->SetSavedPoint(58,-0.02274915);
   fVCOD_4_E1043->SetSavedPoint(59,-0.02789508);
   fVCOD_4_E1043->SetSavedPoint(60,-0.03285586);
   fVCOD_4_E1043->SetSavedPoint(61,-0.03742348);
   fVCOD_4_E1043->SetSavedPoint(62,-0.04137866);
   fVCOD_4_E1043->SetSavedPoint(63,-0.04450662);
   fVCOD_4_E1043->SetSavedPoint(64,-0.04661345);
   fVCOD_4_E1043->SetSavedPoint(65,-0.04754189);
   fVCOD_4_E1043->SetSavedPoint(66,-0.04718548);
   fVCOD_4_E1043->SetSavedPoint(67,-0.04550013);
   fVCOD_4_E1043->SetSavedPoint(68,-0.04251215);
   fVCOD_4_E1043->SetSavedPoint(69,-0.03832226);
   fVCOD_4_E1043->SetSavedPoint(70,-0.03310503);
   fVCOD_4_E1043->SetSavedPoint(71,-0.0271037);
   fVCOD_4_E1043->SetSavedPoint(72,-0.02062041);
   fVCOD_4_E1043->SetSavedPoint(73,-0.01400247);
   fVCOD_4_E1043->SetSavedPoint(74,-0.007625121);
   fVCOD_4_E1043->SetSavedPoint(75,-0.001871833);
   fVCOD_4_E1043->SetSavedPoint(76,0.002886788);
   fVCOD_4_E1043->SetSavedPoint(77,0.00631434);
   fVCOD_4_E1043->SetSavedPoint(78,0.008128949);
   fVCOD_4_E1043->SetSavedPoint(79,0.008121349);
   fVCOD_4_E1043->SetSavedPoint(80,0.006169649);
   fVCOD_4_E1043->SetSavedPoint(81,0.00224979);
   fVCOD_4_E1043->SetSavedPoint(82,-0.00355898);
   fVCOD_4_E1043->SetSavedPoint(83,-0.01107411);
   fVCOD_4_E1043->SetSavedPoint(84,-0.02001537);
   fVCOD_4_E1043->SetSavedPoint(85,-0.03001589);
   fVCOD_4_E1043->SetSavedPoint(86,-0.04063826);
   fVCOD_4_E1043->SetSavedPoint(87,-0.05139477);
   fVCOD_4_E1043->SetSavedPoint(88,-0.06177094);
   fVCOD_4_E1043->SetSavedPoint(89,-0.07125107);
   fVCOD_4_E1043->SetSavedPoint(90,-0.07934436);
   fVCOD_4_E1043->SetSavedPoint(91,-0.08561048);
   fVCOD_4_E1043->SetSavedPoint(92,-0.08968286);
   fVCOD_4_E1043->SetSavedPoint(93,-0.09128873);
   fVCOD_4_E1043->SetSavedPoint(94,-0.09026459);
   fVCOD_4_E1043->SetSavedPoint(95,-0.08656627);
   fVCOD_4_E1043->SetSavedPoint(96,-0.08027301);
   fVCOD_4_E1043->SetSavedPoint(97,-0.07158522);
   fVCOD_4_E1043->SetSavedPoint(98,-0.06081606);
   fVCOD_4_E1043->SetSavedPoint(99,-0.048377);
   fVCOD_4_E1043->SetSavedPoint(100,-0.03475842);
   fVCOD_4_E1043->SetSavedPoint(101,0.2574361);
   fVCOD_4_E1043->SetSavedPoint(102,6.278822);
   fVCOD_4_E1043->SetFillColor(19);
   fVCOD_4_E1043->SetFillStyle(0);
   fVCOD_4_E1043->SetLineColor(2);
   fVCOD_4_E1043->SetLineWidth(2);
   fVCOD_4_E1043->SetChisquare(17.02725);
   fVCOD_4_E1043->SetNDF(15);
   fVCOD_4_E1043->GetXaxis()->SetLabelFont(42);
   fVCOD_4_E1043->GetXaxis()->SetTitleOffset(1);
   fVCOD_4_E1043->GetXaxis()->SetTitleFont(42);
   fVCOD_4_E1043->GetYaxis()->SetLabelFont(42);
   fVCOD_4_E1043->GetYaxis()->SetTitleFont(42);
   fVCOD_4_E1043->SetParameter(0,0.005666759);
   fVCOD_4_E1043->SetParError(0,0.008394201);
   fVCOD_4_E1043->SetParLimits(0,0,0);
   fVCOD_4_E1043->SetParameter(1,-0.9771459);
   fVCOD_4_E1043->SetParError(1,0.4118388);
   fVCOD_4_E1043->SetParLimits(1,0,0);
   fVCOD_4_E1043->SetParameter(2,1.60811);
   fVCOD_4_E1043->SetParError(2,0.4194447);
   fVCOD_4_E1043->SetParLimits(2,0,0);
   fVCOD_4_E1043->SetParameter(3,-0.7038282);
   fVCOD_4_E1043->SetParError(3,1.93913);
   fVCOD_4_E1043->SetParLimits(3,0,0);
   fVCOD_4_E1043->SetParameter(4,-2.089329);
   fVCOD_4_E1043->SetParError(4,1.926194);
   fVCOD_4_E1043->SetParLimits(4,0,0);
   fVCOD_4_E1043->SetParameter(5,0.1978857);
   fVCOD_4_E1043->SetParError(5,4.473943);
   fVCOD_4_E1043->SetParLimits(5,0,0);
   fVCOD_4_E1043->SetParameter(6,13.52601);
   fVCOD_4_E1043->SetParError(6,4.455408);
   fVCOD_4_E1043->SetParLimits(6,0,0);
   fVCOD_4_E1043->SetParameter(7,-5.226438);
   fVCOD_4_E1043->SetParError(7,8.053717);
   fVCOD_4_E1043->SetParLimits(7,0,0);
   fVCOD_4_E1043->SetParameter(8,17.86453);
   fVCOD_4_E1043->SetParError(8,7.951683);
   fVCOD_4_E1043->SetParLimits(8,0,0);
   fVCOD_4_E1043->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_4_E1043);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4353518,0.94,0.5646482,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("E-field");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
