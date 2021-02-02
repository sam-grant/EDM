void fit_ytot_vs_theta_6()
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
   
   Double_t ytot_vs_theta_fx1022[24] = {
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
   Double_t ytot_vs_theta_fy1022[24] = {
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
   Double_t ytot_vs_theta_fex1022[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1022[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1022,ytot_vs_theta_fy1022,ytot_vs_theta_fex1022,ytot_vs_theta_fey1022);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013101610191022);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 15.76 / 11");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002188 #pm 0.003143 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9846 #pm 0.4124 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.604 #pm 0.4204 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.855 #pm 7.769 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.079 #pm 7.716 ");
   ptstats_LaTex = ptstats->AddText("p5       = 1.803 #pm 40.28 ");
   ptstats_LaTex = ptstats->AddText("p6       = 120.3 #pm 40.15 ");
   ptstats_LaTex = ptstats->AddText("p7       = -86.2 #pm 128.9 ");
   ptstats_LaTex = ptstats->AddText("p8       = 293.3 #pm 127.6 ");
   ptstats_LaTex = ptstats->AddText("p9       = -186.8 #pm 314.7 ");
   ptstats_LaTex = ptstats->AddText("p10      = -39.23 #pm 314.1 ");
   ptstats_LaTex = ptstats->AddText("p11      = 528.5 #pm 649.3 ");
   ptstats_LaTex = ptstats->AddText("p12      =   308 #pm 656.3 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_61024 = new TF1("*fVCOD_6",0.2574361,6.278822,13);
    //The original function : fVCOD_6 had originally been created by:
    //TF1 *fVCOD_6 = new TF1("fVCOD_6",fVCOD_6,0.2574361,6.278822,13, 1, TF1::EAddToList::kNo);
   fVCOD_61024->SetRange(0.2574361,6.278822);
   fVCOD_61024->SetName("fVCOD_6");
   fVCOD_61024->SetTitle("fVCOD_6");
   fVCOD_61024->SetSavedPoint(0,0.02716166);
   fVCOD_61024->SetSavedPoint(1,0.03614177);
   fVCOD_61024->SetSavedPoint(2,0.04286052);
   fVCOD_61024->SetSavedPoint(3,0.04736076);
   fVCOD_61024->SetSavedPoint(4,0.04978114);
   fVCOD_61024->SetSavedPoint(5,0.05031763);
   fVCOD_61024->SetSavedPoint(6,0.04918856);
   fVCOD_61024->SetSavedPoint(7,0.04660813);
   fVCOD_61024->SetSavedPoint(8,0.04277202);
   fVCOD_61024->SetSavedPoint(9,0.0378562);
   fVCOD_61024->SetSavedPoint(10,0.03202789);
   fVCOD_61024->SetSavedPoint(11,0.02546539);
   fVCOD_61024->SetSavedPoint(12,0.01838201);
   fVCOD_61024->SetSavedPoint(13,0.0110484);
   fVCOD_61024->SetSavedPoint(14,0.0038075);
   fVCOD_61024->SetSavedPoint(15,-0.002922399);
   fVCOD_61024->SetSavedPoint(16,-0.008659665);
   fVCOD_61024->SetSavedPoint(17,-0.01288708);
   fVCOD_61024->SetSavedPoint(18,-0.01509363);
   fVCOD_61024->SetSavedPoint(19,-0.01482615);
   fVCOD_61024->SetSavedPoint(20,-0.01174496);
   fVCOD_61024->SetSavedPoint(21,-0.005676021);
   fVCOD_61024->SetSavedPoint(22,0.003347545);
   fVCOD_61024->SetSavedPoint(23,0.01506137);
   fVCOD_61024->SetSavedPoint(24,0.02896805);
   fVCOD_61024->SetSavedPoint(25,0.04436008);
   fVCOD_61024->SetSavedPoint(26,0.06036688);
   fVCOD_61024->SetSavedPoint(27,0.07602251);
   fVCOD_61024->SetSavedPoint(28,0.09034756);
   fVCOD_61024->SetSavedPoint(29,0.102437);
   fVCOD_61024->SetSavedPoint(30,0.1115444);
   fVCOD_61024->SetSavedPoint(31,0.117153);
   fVCOD_61024->SetSavedPoint(32,0.1190253);
   fVCOD_61024->SetSavedPoint(33,0.1172257);
   fVCOD_61024->SetSavedPoint(34,0.1121115);
   fVCOD_61024->SetSavedPoint(35,0.1042948);
   fVCOD_61024->SetSavedPoint(36,0.09457685);
   fVCOD_61024->SetSavedPoint(37,0.08386437);
   fVCOD_61024->SetSavedPoint(38,0.0730743);
   fVCOD_61024->SetSavedPoint(39,0.06303976);
   fVCOD_61024->SetSavedPoint(40,0.0544266);
   fVCOD_61024->SetSavedPoint(41,0.04767009);
   fVCOD_61024->SetSavedPoint(42,0.04293871);
   fVCOD_61024->SetSavedPoint(43,0.04012881);
   fVCOD_61024->SetSavedPoint(44,0.03889029);
   fVCOD_61024->SetSavedPoint(45,0.03867987);
   fVCOD_61024->SetSavedPoint(46,0.03883532);
   fVCOD_61024->SetSavedPoint(47,0.03866146);
   fVCOD_61024->SetSavedPoint(48,0.03751781);
   fVCOD_61024->SetSavedPoint(49,0.03489742);
   fVCOD_61024->SetSavedPoint(50,0.03048774);
   fVCOD_61024->SetSavedPoint(51,0.02420673);
   fVCOD_61024->SetSavedPoint(52,0.01621043);
   fVCOD_61024->SetSavedPoint(53,0.006871867);
   fVCOD_61024->SetSavedPoint(54,-0.003265577);
   fVCOD_61024->SetSavedPoint(55,-0.01355393);
   fVCOD_61024->SetSavedPoint(56,-0.02331708);
   fVCOD_61024->SetSavedPoint(57,-0.03192829);
   fVCOD_61024->SetSavedPoint(58,-0.03887927);
   fVCOD_61024->SetSavedPoint(59,-0.04383255);
   fVCOD_61024->SetSavedPoint(60,-0.04665133);
   fVCOD_61024->SetSavedPoint(61,-0.04740367);
   fVCOD_61024->SetSavedPoint(62,-0.04634156);
   fVCOD_61024->SetSavedPoint(63,-0.04385843);
   fVCOD_61024->SetSavedPoint(64,-0.0404312);
   fVCOD_61024->SetSavedPoint(65,-0.0365551);
   fVCOD_61024->SetSavedPoint(66,-0.03268014);
   fVCOD_61024->SetSavedPoint(67,-0.02915744);
   fVCOD_61024->SetSavedPoint(68,-0.02620258);
   fVCOD_61024->SetSavedPoint(69,-0.02388041);
   fVCOD_61024->SetSavedPoint(70,-0.02211281);
   fVCOD_61024->SetSavedPoint(71,-0.02070796);
   fVCOD_61024->SetSavedPoint(72,-0.01940661);
   fVCOD_61024->SetSavedPoint(73,-0.01793841);
   fVCOD_61024->SetSavedPoint(74,-0.01608036);
   fVCOD_61024->SetSavedPoint(75,-0.01370867);
   fVCOD_61024->SetSavedPoint(76,-0.01083658);
   fVCOD_61024->SetSavedPoint(77,-0.007632188);
   fVCOD_61024->SetSavedPoint(78,-0.004413173);
   fVCOD_61024->SetSavedPoint(79,-0.001618298);
   fVCOD_61024->SetSavedPoint(80,0.0002413072);
   fVCOD_61024->SetSavedPoint(81,0.0006453606);
   fVCOD_61024->SetSavedPoint(82,-0.0008656534);
   fVCOD_61024->SetSavedPoint(83,-0.004622685);
   fVCOD_61024->SetSavedPoint(84,-0.0107712);
   fVCOD_61024->SetSavedPoint(85,-0.01923275);
   fVCOD_61024->SetSavedPoint(86,-0.0296904);
   fVCOD_61024->SetSavedPoint(87,-0.04160072);
   fVCOD_61024->SetSavedPoint(88,-0.05423163);
   fVCOD_61024->SetSavedPoint(89,-0.06672252);
   fVCOD_61024->SetSavedPoint(90,-0.0781601);
   fVCOD_61024->SetSavedPoint(91,-0.0876618);
   fVCOD_61024->SetSavedPoint(92,-0.09445751);
   fVCOD_61024->SetSavedPoint(93,-0.09796069);
   fVCOD_61024->SetSavedPoint(94,-0.09782123);
   fVCOD_61024->SetSavedPoint(95,-0.09395456);
   fVCOD_61024->SetSavedPoint(96,-0.08654447);
   fVCOD_61024->SetSavedPoint(97,-0.07602);
   fVCOD_61024->SetSavedPoint(98,-0.06300983);
   fVCOD_61024->SetSavedPoint(99,-0.04828007);
   fVCOD_61024->SetSavedPoint(100,-0.03266291);
   fVCOD_61024->SetSavedPoint(101,0.2574361);
   fVCOD_61024->SetSavedPoint(102,6.278822);
   fVCOD_61024->SetFillColor(19);
   fVCOD_61024->SetFillStyle(0);
   fVCOD_61024->SetLineColor(2);
   fVCOD_61024->SetLineWidth(2);
   fVCOD_61024->SetChisquare(15.75993);
   fVCOD_61024->SetNDF(11);
   fVCOD_61024->GetXaxis()->SetLabelFont(42);
   fVCOD_61024->GetXaxis()->SetTitleOffset(1);
   fVCOD_61024->GetXaxis()->SetTitleFont(42);
   fVCOD_61024->GetYaxis()->SetLabelFont(42);
   fVCOD_61024->GetYaxis()->SetTitleFont(42);
   fVCOD_61024->SetParameter(0,0.002187524);
   fVCOD_61024->SetParError(0,0.00314257);
   fVCOD_61024->SetParLimits(0,0,0);
   fVCOD_61024->SetParameter(1,-0.9846089);
   fVCOD_61024->SetParError(1,0.412365);
   fVCOD_61024->SetParLimits(1,0,0);
   fVCOD_61024->SetParameter(2,1.603688);
   fVCOD_61024->SetParError(2,0.4203507);
   fVCOD_61024->SetParLimits(2,0,0);
   fVCOD_61024->SetParameter(3,-2.855048);
   fVCOD_61024->SetParError(3,7.769464);
   fVCOD_61024->SetParLimits(3,0,0);
   fVCOD_61024->SetParameter(4,-8.079369);
   fVCOD_61024->SetParError(4,7.71624);
   fVCOD_61024->SetParLimits(4,0,0);
   fVCOD_61024->SetParameter(5,1.803248);
   fVCOD_61024->SetParError(5,40.27577);
   fVCOD_61024->SetParLimits(5,0,0);
   fVCOD_61024->SetParameter(6,120.338);
   fVCOD_61024->SetParError(6,40.14948);
   fVCOD_61024->SetParLimits(6,0,0);
   fVCOD_61024->SetParameter(7,-86.19748);
   fVCOD_61024->SetParError(7,128.9397);
   fVCOD_61024->SetParLimits(7,0,0);
   fVCOD_61024->SetParameter(8,293.268);
   fVCOD_61024->SetParError(8,127.6141);
   fVCOD_61024->SetParLimits(8,0,0);
   fVCOD_61024->SetParameter(9,-186.7936);
   fVCOD_61024->SetParError(9,314.7256);
   fVCOD_61024->SetParLimits(9,0,0);
   fVCOD_61024->SetParameter(10,-39.23103);
   fVCOD_61024->SetParError(10,314.0794);
   fVCOD_61024->SetParLimits(10,0,0);
   fVCOD_61024->SetParameter(11,528.5459);
   fVCOD_61024->SetParError(11,649.2946);
   fVCOD_61024->SetParLimits(11,0,0);
   fVCOD_61024->SetParameter(12,307.9802);
   fVCOD_61024->SetParError(12,656.2698);
   fVCOD_61024->SetParLimits(12,0,0);
   fVCOD_61024->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_61024);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
