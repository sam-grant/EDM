void fit_ytot_vs_theta_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 20 18:34:14 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[24] = {
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
   Double_t Graph0_fy1007[24] = {
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
   Double_t Graph0_fex1007[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1007[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0100310041007 = new TH1F("Graph_Graph_Graph_Graph0100310041007","",100,0,6.880961);
   Graph_Graph_Graph_Graph0100310041007->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph0100310041007->SetMaximum(0.25);
   Graph_Graph_Graph_Graph0100310041007->SetDirectory(0);
   Graph_Graph_Graph_Graph0100310041007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph0100310041007->SetLineColor(ci);
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph0100310041007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0100310041007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100310041007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100310041007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100310041007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0100310041007);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 32.93 / 21");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002346 #pm 0.003129 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.8574 #pm 0.4099 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.612 #pm 0.4187 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_11009 = new TF1("*fVCOD_1",0.2574361,6.278822,3);
    //The original function : fVCOD_1 had originally been created by:
    //TF1 *fVCOD_1 = new TF1("fVCOD_1",fVCOD_1,0.2574361,6.278822,3, 1, TF1::EAddToList::kNo);
   fVCOD_11009->SetRange(0.2574361,6.278822);
   fVCOD_11009->SetName("fVCOD_1");
   fVCOD_11009->SetTitle("fVCOD_1");
   fVCOD_11009->SetSavedPoint(0,-0.005674622);
   fVCOD_11009->SetSavedPoint(1,-0.002601197);
   fVCOD_11009->SetSavedPoint(2,0.0005043793);
   fVCOD_11009->SetSavedPoint(3,0.00363085);
   fVCOD_11009->SetSavedPoint(4,0.006766883);
   fVCOD_11009->SetSavedPoint(5,0.009901112);
   fVCOD_11009->SetSavedPoint(6,0.01302218);
   fVCOD_11009->SetSavedPoint(7,0.01611876);
   fVCOD_11009->SetSavedPoint(8,0.01917964);
   fVCOD_11009->SetSavedPoint(9,0.02219373);
   fVCOD_11009->SetSavedPoint(10,0.0251501);
   fVCOD_11009->SetSavedPoint(11,0.02803803);
   fVCOD_11009->SetSavedPoint(12,0.03084706);
   fVCOD_11009->SetSavedPoint(13,0.033567);
   fVCOD_11009->SetSavedPoint(14,0.03618799);
   fVCOD_11009->SetSavedPoint(15,0.03870054);
   fVCOD_11009->SetSavedPoint(16,0.04109554);
   fVCOD_11009->SetSavedPoint(17,0.04336431);
   fVCOD_11009->SetSavedPoint(18,0.04549862);
   fVCOD_11009->SetSavedPoint(19,0.04749073);
   fVCOD_11009->SetSavedPoint(20,0.04933344);
   fVCOD_11009->SetSavedPoint(21,0.05102005);
   fVCOD_11009->SetSavedPoint(22,0.05254446);
   fVCOD_11009->SetSavedPoint(23,0.05390114);
   fVCOD_11009->SetSavedPoint(24,0.05508516);
   fVCOD_11009->SetSavedPoint(25,0.05609225);
   fVCOD_11009->SetSavedPoint(26,0.05691875);
   fVCOD_11009->SetSavedPoint(27,0.05756167);
   fVCOD_11009->SetSavedPoint(28,0.05801866);
   fVCOD_11009->SetSavedPoint(29,0.05828809);
   fVCOD_11009->SetSavedPoint(30,0.05836896);
   fVCOD_11009->SetSavedPoint(31,0.058261);
   fVCOD_11009->SetSavedPoint(32,0.05796458);
   fVCOD_11009->SetSavedPoint(33,0.05748078);
   fVCOD_11009->SetSavedPoint(34,0.05681137);
   fVCOD_11009->SetSavedPoint(35,0.05595875);
   fVCOD_11009->SetSavedPoint(36,0.05492603);
   fVCOD_11009->SetSavedPoint(37,0.05371695);
   fVCOD_11009->SetSavedPoint(38,0.05233589);
   fVCOD_11009->SetSavedPoint(39,0.05078785);
   fVCOD_11009->SetSavedPoint(40,0.04907845);
   fVCOD_11009->SetSavedPoint(41,0.04721388);
   fVCOD_11009->SetSavedPoint(42,0.0452009);
   fVCOD_11009->SetSavedPoint(43,0.04304681);
   fVCOD_11009->SetSavedPoint(44,0.04075941);
   fVCOD_11009->SetSavedPoint(45,0.038347);
   fVCOD_11009->SetSavedPoint(46,0.03581832);
   fVCOD_11009->SetSavedPoint(47,0.03318253);
   fVCOD_11009->SetSavedPoint(48,0.03044919);
   fVCOD_11009->SetSavedPoint(49,0.02762821);
   fVCOD_11009->SetSavedPoint(50,0.02472981);
   fVCOD_11009->SetSavedPoint(51,0.0217645);
   fVCOD_11009->SetSavedPoint(52,0.01874302);
   fVCOD_11009->SetSavedPoint(53,0.01567632);
   fVCOD_11009->SetSavedPoint(54,0.01257553);
   fVCOD_11009->SetSavedPoint(55,0.009451883);
   fVCOD_11009->SetSavedPoint(56,0.006316697);
   fVCOD_11009->SetSavedPoint(57,0.003181338);
   fVCOD_11009->SetSavedPoint(58,5.717058e-05);
   fVCOD_11009->SetSavedPoint(59,-0.003044481);
   fVCOD_11009->SetSavedPoint(60,-0.006112376);
   fVCOD_11009->SetSavedPoint(61,-0.009135392);
   fVCOD_11009->SetSavedPoint(62,-0.01210257);
   fVCOD_11009->SetSavedPoint(63,-0.01500317);
   fVCOD_11009->SetSavedPoint(64,-0.01782665);
   fVCOD_11009->SetSavedPoint(65,-0.0205628);
   fVCOD_11009->SetSavedPoint(66,-0.0232017);
   fVCOD_11009->SetSavedPoint(67,-0.02573378);
   fVCOD_11009->SetSavedPoint(68,-0.02814986);
   fVCOD_11009->SetSavedPoint(69,-0.03044118);
   fVCOD_11009->SetSavedPoint(70,-0.03259944);
   fVCOD_11009->SetSavedPoint(71,-0.03461682);
   fVCOD_11009->SetSavedPoint(72,-0.03648601);
   fVCOD_11009->SetSavedPoint(73,-0.03820022);
   fVCOD_11009->SetSavedPoint(74,-0.03975325);
   fVCOD_11009->SetSavedPoint(75,-0.04113947);
   fVCOD_11009->SetSavedPoint(76,-0.04235385);
   fVCOD_11009->SetSavedPoint(77,-0.04339199);
   fVCOD_11009->SetSavedPoint(78,-0.04425013);
   fVCOD_11009->SetSavedPoint(79,-0.04492516);
   fVCOD_11009->SetSavedPoint(80,-0.04541463);
   fVCOD_11009->SetSavedPoint(81,-0.04571676);
   fVCOD_11009->SetSavedPoint(82,-0.04583047);
   fVCOD_11009->SetSavedPoint(83,-0.04575534);
   fVCOD_11009->SetSavedPoint(84,-0.04549163);
   fVCOD_11009->SetSavedPoint(85,-0.04504032);
   fVCOD_11009->SetSavedPoint(86,-0.04440303);
   fVCOD_11009->SetSavedPoint(87,-0.04358207);
   fVCOD_11009->SetSavedPoint(88,-0.04258043);
   fVCOD_11009->SetSavedPoint(89,-0.04140172);
   fVCOD_11009->SetSavedPoint(90,-0.04005022);
   fVCOD_11009->SetSavedPoint(91,-0.03853084);
   fVCOD_11009->SetSavedPoint(92,-0.03684907);
   fVCOD_11009->SetSavedPoint(93,-0.03501102);
   fVCOD_11009->SetSavedPoint(94,-0.03302334);
   fVCOD_11009->SetSavedPoint(95,-0.03089324);
   fVCOD_11009->SetSavedPoint(96,-0.02862844);
   fVCOD_11009->SetSavedPoint(97,-0.02623716);
   fVCOD_11009->SetSavedPoint(98,-0.02372805);
   fVCOD_11009->SetSavedPoint(99,-0.02111022);
   fVCOD_11009->SetSavedPoint(100,-0.01839314);
   fVCOD_11009->SetSavedPoint(101,0.2574361);
   fVCOD_11009->SetSavedPoint(102,6.278822);
   fVCOD_11009->SetFillColor(19);
   fVCOD_11009->SetFillStyle(0);
   fVCOD_11009->SetLineColor(2);
   fVCOD_11009->SetLineWidth(2);
   fVCOD_11009->SetChisquare(32.9278);
   fVCOD_11009->SetNDF(21);
   fVCOD_11009->GetXaxis()->SetLabelFont(42);
   fVCOD_11009->GetXaxis()->SetTitleOffset(1);
   fVCOD_11009->GetXaxis()->SetTitleFont(42);
   fVCOD_11009->GetYaxis()->SetLabelFont(42);
   fVCOD_11009->GetYaxis()->SetTitleFont(42);
   fVCOD_11009->SetParameter(0,0.002345676);
   fVCOD_11009->SetParError(0,0.00312932);
   fVCOD_11009->SetParLimits(0,0,0);
   fVCOD_11009->SetParameter(1,-0.8573659);
   fVCOD_11009->SetParError(1,0.4098623);
   fVCOD_11009->SetParLimits(1,0,0);
   fVCOD_11009->SetParameter(2,1.612304);
   fVCOD_11009->SetParError(2,0.4186583);
   fVCOD_11009->SetParLimits(2,0,0);
   fVCOD_11009->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_11009);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
