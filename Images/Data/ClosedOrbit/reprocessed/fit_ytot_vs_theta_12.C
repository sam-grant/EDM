void fit_ytot_vs_theta_12()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 20 16:48:25 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[24] = {
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
   Double_t Graph0_fy1040[24] = {
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
   Double_t Graph0_fex1040[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1040[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph010031004100710101013101610191022102510281031103410371040);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.525e-07 / 0");
   ptstats_LaTex = ptstats->AddText("p0       = 0.001798 #pm 0.003143 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9372 #pm 0.4123 ");
   ptstats_LaTex = ptstats->AddText("p2       =  1.65 #pm 0.4204 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.695 #pm 7.769 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.85 #pm  7.72 ");
   ptstats_LaTex = ptstats->AddText("p5       = -1.004 #pm 40.31 ");
   ptstats_LaTex = ptstats->AddText("p6       = 121.5 #pm 40.22 ");
   ptstats_LaTex = ptstats->AddText("p7       = -87.37 #pm 129.1 ");
   ptstats_LaTex = ptstats->AddText("p8       = 287.4 #pm 127.8 ");
   ptstats_LaTex = ptstats->AddText("p9       = -217.7 #pm 315.4 ");
   ptstats_LaTex = ptstats->AddText("p10      = -39.98 #pm 314.4 ");
   ptstats_LaTex = ptstats->AddText("p11      = 519.4 #pm 652.1 ");
   ptstats_LaTex = ptstats->AddText("p12      = 249.6 #pm 656.8 ");
   ptstats_LaTex = ptstats->AddText("p13      = -89.38 #pm  1215 ");
   ptstats_LaTex = ptstats->AddText("p14      = 236.6 #pm  1213 ");
   ptstats_LaTex = ptstats->AddText("p15      = -2535 #pm  2083 ");
   ptstats_LaTex = ptstats->AddText("p16      =  3102 #pm  2063 ");
   ptstats_LaTex = ptstats->AddText("p17      =  3545 #pm  3326 ");
   ptstats_LaTex = ptstats->AddText("p18      =  7485 #pm  3320 ");
   ptstats_LaTex = ptstats->AddText("p19      = -3185 #pm  5096 ");
   ptstats_LaTex = ptstats->AddText("p20      = -2155 #pm  5038 ");
   ptstats_LaTex = ptstats->AddText("p21      = 586.5 #pm 1.135e+05 ");
   ptstats_LaTex = ptstats->AddText("p22      = 1.522e+04 #pm 1.407e+04 ");
   ptstats_LaTex = ptstats->AddText("p23      = -1350 #pm 1.617e+05 ");
   ptstats_LaTex = ptstats->AddText("p24      = -5.293e+04 #pm 1.42e+05 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_121042 = new TF1("*fVCOD_12",0,6.283185,25);
    //The original function : fVCOD_12 had originally been created by:
    //TF1 *fVCOD_12 = new TF1("fVCOD_12",fVCOD_12,0,6.283185,25, 1, TF1::EAddToList::kNo);
   fVCOD_121042->SetRange(0,6.283185);
   fVCOD_121042->SetName("fVCOD_12");
   fVCOD_121042->SetTitle("fVCOD_12");
   fVCOD_121042->SetSavedPoint(0,-0.04400986);
   fVCOD_121042->SetSavedPoint(1,-0.03103824);
   fVCOD_121042->SetSavedPoint(2,-0.006655561);
   fVCOD_121042->SetSavedPoint(3,0.029153);
   fVCOD_121042->SetSavedPoint(4,0.06645955);
   fVCOD_121042->SetSavedPoint(5,0.0899955);
   fVCOD_121042->SetSavedPoint(6,0.08787448);
   fVCOD_121042->SetSavedPoint(7,0.05942692);
   fVCOD_121042->SetSavedPoint(8,0.01736024);
   fVCOD_121042->SetSavedPoint(9,-0.01752683);
   fVCOD_121042->SetSavedPoint(10,-0.02667741);
   fVCOD_121042->SetSavedPoint(11,-0.003757348);
   fVCOD_121042->SetSavedPoint(12,0.04122075);
   fVCOD_121042->SetSavedPoint(13,0.08618979);
   fVCOD_121042->SetSavedPoint(14,0.1078328);
   fVCOD_121042->SetSavedPoint(15,0.09342049);
   fVCOD_121042->SetSavedPoint(16,0.04748581);
   fVCOD_121042->SetSavedPoint(17,-0.01026015);
   fVCOD_121042->SetSavedPoint(18,-0.05479483);
   fVCOD_121042->SetSavedPoint(19,-0.06833228);
   fVCOD_121042->SetSavedPoint(20,-0.04899999);
   fVCOD_121042->SetSavedPoint(21,-0.01111642);
   fVCOD_121042->SetSavedPoint(22,0.02300919);
   fVCOD_121042->SetSavedPoint(23,0.03532568);
   fVCOD_121042->SetSavedPoint(24,0.02175746);
   fVCOD_121042->SetSavedPoint(25,-0.005816847);
   fVCOD_121042->SetSavedPoint(26,-0.02635841);
   fVCOD_121042->SetSavedPoint(27,-0.02152659);
   fVCOD_121042->SetSavedPoint(28,0.01386202);
   fVCOD_121042->SetSavedPoint(29,0.06850477);
   fVCOD_121042->SetSavedPoint(30,0.1202978);
   fVCOD_121042->SetSavedPoint(31,0.1480145);
   fVCOD_121042->SetSavedPoint(32,0.1426522);
   fVCOD_121042->SetSavedPoint(33,0.1122305);
   fVCOD_121042->SetSavedPoint(34,0.07732669);
   fVCOD_121042->SetSavedPoint(35,0.059678);
   fVCOD_121042->SetSavedPoint(36,0.0700267);
   fVCOD_121042->SetSavedPoint(37,0.1019209);
   fVCOD_121042->SetSavedPoint(38,0.1350472);
   fVCOD_121042->SetSavedPoint(39,0.1464977);
   fVCOD_121042->SetSavedPoint(40,0.1239463);
   fVCOD_121042->SetSavedPoint(41,0.073462);
   fVCOD_121042->SetSavedPoint(42,0.01739427);
   fVCOD_121042->SetSavedPoint(43,-0.01694394);
   fVCOD_121042->SetSavedPoint(44,-0.01199221);
   fVCOD_121042->SetSavedPoint(45,0.0298381);
   fVCOD_121042->SetSavedPoint(46,0.08622018);
   fVCOD_121042->SetSavedPoint(47,0.1257022);
   fVCOD_121042->SetSavedPoint(48,0.123933);
   fVCOD_121042->SetSavedPoint(49,0.07690383);
   fVCOD_121042->SetSavedPoint(50,0.004059463);
   fVCOD_121042->SetSavedPoint(51,-0.06076189);
   fVCOD_121042->SetSavedPoint(52,-0.08625557);
   fVCOD_121042->SetSavedPoint(53,-0.05988897);
   fVCOD_121042->SetSavedPoint(54,0.004976983);
   fVCOD_121042->SetSavedPoint(55,0.07498301);
   fVCOD_121042->SetSavedPoint(56,0.1129441);
   fVCOD_121042->SetSavedPoint(57,0.09624475);
   fVCOD_121042->SetSavedPoint(58,0.02818544);
   fVCOD_121042->SetSavedPoint(59,-0.06344746);
   fVCOD_121042->SetSavedPoint(60,-0.1398353);
   fVCOD_121042->SetSavedPoint(61,-0.1697802);
   fVCOD_121042->SetSavedPoint(62,-0.1442024);
   fVCOD_121042->SetSavedPoint(63,-0.0794077);
   fVCOD_121042->SetSavedPoint(64,-0.007892551);
   fVCOD_121042->SetSavedPoint(65,0.0382137);
   fVCOD_121042->SetSavedPoint(66,0.04243763);
   fVCOD_121042->SetSavedPoint(67,0.01037448);
   fVCOD_121042->SetSavedPoint(68,-0.03546927);
   fVCOD_121042->SetSavedPoint(69,-0.0689828);
   fVCOD_121042->SetSavedPoint(70,-0.07442332);
   fVCOD_121042->SetSavedPoint(71,-0.05363128);
   fVCOD_121042->SetSavedPoint(72,-0.02307331);
   fVCOD_121042->SetSavedPoint(73,-0.002967598);
   fVCOD_121042->SetSavedPoint(74,-0.0049705);
   fVCOD_121042->SetSavedPoint(75,-0.02543603);
   fVCOD_121042->SetSavedPoint(76,-0.04791928);
   fVCOD_121042->SetSavedPoint(77,-0.05330962);
   fVCOD_121042->SetSavedPoint(78,-0.03169951);
   fVCOD_121042->SetSavedPoint(79,0.01083944);
   fVCOD_121042->SetSavedPoint(80,0.05452341);
   fVCOD_121042->SetSavedPoint(81,0.07606153);
   fVCOD_121042->SetSavedPoint(82,0.06126789);
   fVCOD_121042->SetSavedPoint(83,0.01317994);
   fVCOD_121042->SetSavedPoint(84,-0.04880368);
   fVCOD_121042->SetSavedPoint(85,-0.09840401);
   fVCOD_121042->SetSavedPoint(86,-0.1155741);
   fVCOD_121042->SetSavedPoint(87,-0.09635351);
   fVCOD_121042->SetSavedPoint(88,-0.05438717);
   fVCOD_121042->SetSavedPoint(89,-0.01351106);
   fVCOD_121042->SetSavedPoint(90,0.004493664);
   fVCOD_121042->SetSavedPoint(91,-0.009508268);
   fVCOD_121042->SetSavedPoint(92,-0.04842424);
   fVCOD_121042->SetSavedPoint(93,-0.09378239);
   fVCOD_121042->SetSavedPoint(94,-0.1259148);
   fVCOD_121042->SetSavedPoint(95,-0.1337364);
   fVCOD_121042->SetSavedPoint(96,-0.1189713);
   fVCOD_121042->SetSavedPoint(97,-0.09304249);
   fVCOD_121042->SetSavedPoint(98,-0.06901518);
   fVCOD_121042->SetSavedPoint(99,-0.05361486);
   fVCOD_121042->SetSavedPoint(100,-0.04400986);
   fVCOD_121042->SetSavedPoint(101,0);
   fVCOD_121042->SetSavedPoint(102,6.283185);
   fVCOD_121042->SetFillColor(19);
   fVCOD_121042->SetFillStyle(0);
   fVCOD_121042->SetLineColor(2);
   fVCOD_121042->SetLineWidth(2);
   fVCOD_121042->SetChisquare(2.524688e-07);
   fVCOD_121042->SetNDF(0);
   fVCOD_121042->GetXaxis()->SetLabelFont(42);
   fVCOD_121042->GetXaxis()->SetTitleOffset(1);
   fVCOD_121042->GetXaxis()->SetTitleFont(42);
   fVCOD_121042->GetYaxis()->SetLabelFont(42);
   fVCOD_121042->GetYaxis()->SetTitleFont(42);
   fVCOD_121042->SetParameter(0,0.001798083);
   fVCOD_121042->SetParError(0,0.003143015);
   fVCOD_121042->SetParLimits(0,0,0);
   fVCOD_121042->SetParameter(1,-0.9371869);
   fVCOD_121042->SetParError(1,0.4123231);
   fVCOD_121042->SetParLimits(1,0,0);
   fVCOD_121042->SetParameter(2,1.650192);
   fVCOD_121042->SetParError(2,0.4203641);
   fVCOD_121042->SetParLimits(2,0,0);
   fVCOD_121042->SetParameter(3,-2.694916);
   fVCOD_121042->SetParError(3,7.768518);
   fVCOD_121042->SetParLimits(3,0,0);
   fVCOD_121042->SetParameter(4,-8.849899);
   fVCOD_121042->SetParError(4,7.719553);
   fVCOD_121042->SetParLimits(4,0,0);
   fVCOD_121042->SetParameter(5,-1.003887);
   fVCOD_121042->SetParError(5,40.31058);
   fVCOD_121042->SetParLimits(5,0,0);
   fVCOD_121042->SetParameter(6,121.4723);
   fVCOD_121042->SetParError(6,40.21624);
   fVCOD_121042->SetParLimits(6,0,0);
   fVCOD_121042->SetParameter(7,-87.36667);
   fVCOD_121042->SetParError(7,129.0823);
   fVCOD_121042->SetParLimits(7,0,0);
   fVCOD_121042->SetParameter(8,287.4373);
   fVCOD_121042->SetParError(8,127.783);
   fVCOD_121042->SetParLimits(8,0,0);
   fVCOD_121042->SetParameter(9,-217.7011);
   fVCOD_121042->SetParError(9,315.4081);
   fVCOD_121042->SetParLimits(9,0,0);
   fVCOD_121042->SetParameter(10,-39.98148);
   fVCOD_121042->SetParError(10,314.3915);
   fVCOD_121042->SetParLimits(10,0,0);
   fVCOD_121042->SetParameter(11,519.4138);
   fVCOD_121042->SetParError(11,652.1433);
   fVCOD_121042->SetParLimits(11,0,0);
   fVCOD_121042->SetParameter(12,249.5976);
   fVCOD_121042->SetParError(12,656.8264);
   fVCOD_121042->SetParLimits(12,0,0);
   fVCOD_121042->SetParameter(13,-89.37631);
   fVCOD_121042->SetParError(13,1215.37);
   fVCOD_121042->SetParLimits(13,0,0);
   fVCOD_121042->SetParameter(14,236.6163);
   fVCOD_121042->SetParError(14,1213.054);
   fVCOD_121042->SetParLimits(14,0,0);
   fVCOD_121042->SetParameter(15,-2535.095);
   fVCOD_121042->SetParError(15,2083.398);
   fVCOD_121042->SetParLimits(15,0,0);
   fVCOD_121042->SetParameter(16,3102.379);
   fVCOD_121042->SetParError(16,2063.083);
   fVCOD_121042->SetParLimits(16,0,0);
   fVCOD_121042->SetParameter(17,3545.326);
   fVCOD_121042->SetParError(17,3325.912);
   fVCOD_121042->SetParLimits(17,0,0);
   fVCOD_121042->SetParameter(18,7484.777);
   fVCOD_121042->SetParError(18,3320.146);
   fVCOD_121042->SetParLimits(18,0,0);
   fVCOD_121042->SetParameter(19,-3185.454);
   fVCOD_121042->SetParError(19,5095.579);
   fVCOD_121042->SetParLimits(19,0,0);
   fVCOD_121042->SetParameter(20,-2154.767);
   fVCOD_121042->SetParError(20,5038.391);
   fVCOD_121042->SetParLimits(20,0,0);
   fVCOD_121042->SetParameter(21,586.5009);
   fVCOD_121042->SetParError(21,113518.8);
   fVCOD_121042->SetParLimits(21,0,0);
   fVCOD_121042->SetParameter(22,15222.2);
   fVCOD_121042->SetParError(22,14067.54);
   fVCOD_121042->SetParLimits(22,0,0);
   fVCOD_121042->SetParameter(23,-1349.868);
   fVCOD_121042->SetParError(23,161696.8);
   fVCOD_121042->SetParLimits(23,0,0);
   fVCOD_121042->SetParameter(24,-52933.72);
   fVCOD_121042->SetParError(24,142041.9);
   fVCOD_121042->SetParLimits(24,0,0);
   fVCOD_121042->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_121042);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
