void fit_ytot_vs_theta_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 28 10:59:57 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t ytot_vs_theta_fx1010[24] = {
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
   Double_t ytot_vs_theta_fy1010[24] = {
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
   Double_t ytot_vs_theta_fex1010[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1010[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1010,ytot_vs_theta_fy1010,ytot_vs_theta_fex1010,ytot_vs_theta_fey1010);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_ytot_vs_theta100410071010 = new TH1F("Graph_Graph_Graph_ytot_vs_theta100410071010","",100,0,6.880961);
   Graph_Graph_Graph_ytot_vs_theta100410071010->SetMinimum(-0.25);
   Graph_Graph_Graph_ytot_vs_theta100410071010->SetMaximum(0.25);
   Graph_Graph_Graph_ytot_vs_theta100410071010->SetDirectory(0);
   Graph_Graph_Graph_ytot_vs_theta100410071010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_ytot_vs_theta100410071010->SetLineColor(ci);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_ytot_vs_theta100410071010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_ytot_vs_theta100410071010);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 31.52 / 19");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002505 #pm 0.003132 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.8851 #pm 0.4106 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.619 #pm 0.4189 ");
   ptstats_LaTex = ptstats->AddText("p3       = -3.318 #pm 7.749 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.328 #pm 7.683 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_21012 = new TF1("*fVCOD_2",0.2574361,6.278822,5);
    //The original function : fVCOD_2 had originally been created by:
    //TF1 *fVCOD_2 = new TF1("fVCOD_2",fVCOD_2,0.2574361,6.278822,5, 1, TF1::EAddToList::kNo);
   fVCOD_21012->SetRange(0.2574361,6.278822);
   fVCOD_21012->SetName("fVCOD_2");
   fVCOD_21012->SetTitle("fVCOD_2");
   fVCOD_21012->SetSavedPoint(0,-0.01668688);
   fVCOD_21012->SetSavedPoint(1,-0.01454666);
   fVCOD_21012->SetSavedPoint(2,-0.01220262);
   fVCOD_21012->SetSavedPoint(3,-0.009654707);
   fVCOD_21012->SetSavedPoint(4,-0.006905556);
   fVCOD_21012->SetSavedPoint(5,-0.003960592);
   fVCOD_21012->SetSavedPoint(6,-0.0008280741);
   fVCOD_21012->SetSavedPoint(7,0.002480904);
   fVCOD_21012->SetSavedPoint(8,0.005952448);
   fVCOD_21012->SetSavedPoint(9,0.00956994);
   fVCOD_21012->SetSavedPoint(10,0.01331416);
   fVCOD_21012->SetSavedPoint(11,0.01716343);
   fVCOD_21012->SetSavedPoint(12,0.02109385);
   fVCOD_21012->SetSavedPoint(13,0.02507946);
   fVCOD_21012->SetSavedPoint(14,0.02909259);
   fVCOD_21012->SetSavedPoint(15,0.03310407);
   fVCOD_21012->SetSavedPoint(16,0.0370836);
   fVCOD_21012->SetSavedPoint(17,0.04100008);
   fVCOD_21012->SetSavedPoint(18,0.04482193);
   fVCOD_21012->SetSavedPoint(19,0.04851751);
   fVCOD_21012->SetSavedPoint(20,0.05205545);
   fVCOD_21012->SetSavedPoint(21,0.05540505);
   fVCOD_21012->SetSavedPoint(22,0.05853662);
   fVCOD_21012->SetSavedPoint(23,0.06142188);
   fVCOD_21012->SetSavedPoint(24,0.06403428);
   fVCOD_21012->SetSavedPoint(25,0.06634934);
   fVCOD_21012->SetSavedPoint(26,0.06834496);
   fVCOD_21012->SetSavedPoint(27,0.07000168);
   fVCOD_21012->SetSavedPoint(28,0.07130295);
   fVCOD_21012->SetSavedPoint(29,0.07223533);
   fVCOD_21012->SetSavedPoint(30,0.07278868);
   fVCOD_21012->SetSavedPoint(31,0.07295626);
   fVCOD_21012->SetSavedPoint(32,0.07273487);
   fVCOD_21012->SetSavedPoint(33,0.07212486);
   fVCOD_21012->SetSavedPoint(34,0.07113015);
   fVCOD_21012->SetSavedPoint(35,0.06975821);
   fVCOD_21012->SetSavedPoint(36,0.06801993);
   fVCOD_21012->SetSavedPoint(37,0.06592954);
   fVCOD_21012->SetSavedPoint(38,0.06350444);
   fVCOD_21012->SetSavedPoint(39,0.06076495);
   fVCOD_21012->SetSavedPoint(40,0.05773413);
   fVCOD_21012->SetSavedPoint(41,0.05443746);
   fVCOD_21012->SetSavedPoint(42,0.05090256);
   fVCOD_21012->SetSavedPoint(43,0.04715886);
   fVCOD_21012->SetSavedPoint(44,0.04323724);
   fVCOD_21012->SetSavedPoint(45,0.0391697);
   fVCOD_21012->SetSavedPoint(46,0.03498894);
   fVCOD_21012->SetSavedPoint(47,0.03072802);
   fVCOD_21012->SetSavedPoint(48,0.02641995);
   fVCOD_21012->SetSavedPoint(49,0.02209735);
   fVCOD_21012->SetSavedPoint(50,0.01779207);
   fVCOD_21012->SetSavedPoint(51,0.01353482);
   fVCOD_21012->SetSavedPoint(52,0.009354862);
   fVCOD_21012->SetSavedPoint(53,0.00527971);
   fVCOD_21012->SetSavedPoint(54,0.001334831);
   fVCOD_21012->SetSavedPoint(55,-0.002456589);
   fVCOD_21012->SetSavedPoint(56,-0.006073864);
   fVCOD_21012->SetSavedPoint(57,-0.00949898);
   fVCOD_21012->SetSavedPoint(58,-0.01271673);
   fVCOD_21012->SetSavedPoint(59,-0.01571482);
   fVCOD_21012->SetSavedPoint(60,-0.01848391);
   fVCOD_21012->SetSavedPoint(61,-0.02101763);
   fVCOD_21012->SetSavedPoint(62,-0.02331254);
   fVCOD_21012->SetSavedPoint(63,-0.02536809);
   fVCOD_21012->SetSavedPoint(64,-0.02718648);
   fVCOD_21012->SetSavedPoint(65,-0.02877252);
   fVCOD_21012->SetSavedPoint(66,-0.03013345);
   fVCOD_21012->SetSavedPoint(67,-0.03127872);
   fVCOD_21012->SetSavedPoint(68,-0.03221977);
   fVCOD_21012->SetSavedPoint(69,-0.03296972);
   fVCOD_21012->SetSavedPoint(70,-0.03354312);
   fVCOD_21012->SetSavedPoint(71,-0.03395563);
   fVCOD_21012->SetSavedPoint(72,-0.03422372);
   fVCOD_21012->SetSavedPoint(73,-0.03436434);
   fVCOD_21012->SetSavedPoint(74,-0.03439459);
   fVCOD_21012->SetSavedPoint(75,-0.03433142);
   fVCOD_21012->SetSavedPoint(76,-0.03419132);
   fVCOD_21012->SetSavedPoint(77,-0.03399);
   fVCOD_21012->SetSavedPoint(78,-0.03374214);
   fVCOD_21012->SetSavedPoint(79,-0.03346115);
   fVCOD_21012->SetSavedPoint(80,-0.03315889);
   fVCOD_21012->SetSavedPoint(81,-0.0328455);
   fVCOD_21012->SetSavedPoint(82,-0.03252924);
   fVCOD_21012->SetSavedPoint(83,-0.03221634);
   fVCOD_21012->SetSavedPoint(84,-0.0319109);
   fVCOD_21012->SetSavedPoint(85,-0.03161486);
   fVCOD_21012->SetSavedPoint(86,-0.03132795);
   fVCOD_21012->SetSavedPoint(87,-0.03104773);
   fVCOD_21012->SetSavedPoint(88,-0.03076964);
   fVCOD_21012->SetSavedPoint(89,-0.0304871);
   fVCOD_21012->SetSavedPoint(90,-0.03019164);
   fVCOD_21012->SetSavedPoint(91,-0.02987307);
   fVCOD_21012->SetSavedPoint(92,-0.0295197);
   fVCOD_21012->SetSavedPoint(93,-0.02911853);
   fVCOD_21012->SetSavedPoint(94,-0.02865553);
   fVCOD_21012->SetSavedPoint(95,-0.02811591);
   fVCOD_21012->SetSavedPoint(96,-0.02748441);
   fVCOD_21012->SetSavedPoint(97,-0.02674562);
   fVCOD_21012->SetSavedPoint(98,-0.02588425);
   fVCOD_21012->SetSavedPoint(99,-0.0248855);
   fVCOD_21012->SetSavedPoint(100,-0.02373534);
   fVCOD_21012->SetSavedPoint(101,0.2574361);
   fVCOD_21012->SetSavedPoint(102,6.278822);
   fVCOD_21012->SetFillColor(19);
   fVCOD_21012->SetFillStyle(0);
   fVCOD_21012->SetLineColor(2);
   fVCOD_21012->SetLineWidth(2);
   fVCOD_21012->SetChisquare(31.51835);
   fVCOD_21012->SetNDF(19);
   fVCOD_21012->GetXaxis()->SetLabelFont(42);
   fVCOD_21012->GetXaxis()->SetTitleOffset(1);
   fVCOD_21012->GetXaxis()->SetTitleFont(42);
   fVCOD_21012->GetYaxis()->SetLabelFont(42);
   fVCOD_21012->GetYaxis()->SetTitleFont(42);
   fVCOD_21012->SetParameter(0,0.002505279);
   fVCOD_21012->SetParError(0,0.003132463);
   fVCOD_21012->SetParLimits(0,0,0);
   fVCOD_21012->SetParameter(1,-0.8850663);
   fVCOD_21012->SetParError(1,0.4105934);
   fVCOD_21012->SetParLimits(1,0,0);
   fVCOD_21012->SetParameter(2,1.618571);
   fVCOD_21012->SetParError(2,0.418945);
   fVCOD_21012->SetParLimits(2,0,0);
   fVCOD_21012->SetParameter(3,-3.317708);
   fVCOD_21012->SetParError(3,7.749374);
   fVCOD_21012->SetParLimits(3,0,0);
   fVCOD_21012->SetParameter(4,-8.327727);
   fVCOD_21012->SetParError(4,7.683183);
   fVCOD_21012->SetParLimits(4,0,0);
   fVCOD_21012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_21012);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
