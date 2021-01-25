void fit_ytot_vs_theta_3()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 25 06:45:54 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t ytot_vs_theta_fx1013[24] = {
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
   Double_t ytot_vs_theta_fy1013[24] = {
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
   Double_t ytot_vs_theta_fex1013[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t ytot_vs_theta_fey1013[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1013,ytot_vs_theta_fy1013,ytot_vs_theta_fex1013,ytot_vs_theta_fey1013);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013 = new TH1F("Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013","",100,0,6.880961);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->SetDirectory(0);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->SetLineColor(ci);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_ytot_vs_theta1004100710101013);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 22.51 / 17");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002642 #pm 0.003133 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9768 #pm 0.4118 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.586 #pm 0.4193 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.564 #pm 7.754 ");
   ptstats_LaTex = ptstats->AddText("p4       = -7.811 #pm   7.7 ");
   ptstats_LaTex = ptstats->AddText("p5       = -4.244 #pm 40.18 ");
   ptstats_LaTex = ptstats->AddText("p6       = 120.2 #pm 40.08 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_31015 = new TF1("*fVCOD_3",0.2574361,6.278822,7);
    //The original function : fVCOD_3 had originally been created by:
    //TF1 *fVCOD_3 = new TF1("fVCOD_3",fVCOD_3,0.2574361,6.278822,7, 1, TF1::EAddToList::kNo);
   fVCOD_31015->SetRange(0.2574361,6.278822);
   fVCOD_31015->SetName("fVCOD_3");
   fVCOD_31015->SetTitle("fVCOD_3");
   fVCOD_31015->SetSavedPoint(0,0.006158688);
   fVCOD_31015->SetSavedPoint(1,0.01262719);
   fVCOD_31015->SetSavedPoint(2,0.01837199);
   fVCOD_31015->SetSavedPoint(3,0.02328222);
   fVCOD_31015->SetSavedPoint(4,0.027278);
   fVCOD_31015->SetSavedPoint(5,0.03031294);
   fVCOD_31015->SetSavedPoint(6,0.03237539);
   fVCOD_31015->SetSavedPoint(7,0.03348858);
   fVCOD_31015->SetSavedPoint(8,0.03370956);
   fVCOD_31015->SetSavedPoint(9,0.03312701);
   fVCOD_31015->SetSavedPoint(10,0.03185792);
   fVCOD_31015->SetSavedPoint(11,0.03004336);
   fVCOD_31015->SetSavedPoint(12,0.02784343);
   fVCOD_31015->SetSavedPoint(13,0.0254315);
   fVCOD_31015->SetSavedPoint(14,0.02298806);
   fVCOD_31015->SetSavedPoint(15,0.02069422);
   fVCOD_31015->SetSavedPoint(16,0.01872526);
   fVCOD_31015->SetSavedPoint(17,0.0172443);
   fVCOD_31015->SetSavedPoint(18,0.01639634);
   fVCOD_31015->SetSavedPoint(19,0.01630295);
   fVCOD_31015->SetSavedPoint(20,0.01705764);
   fVCOD_31015->SetSavedPoint(21,0.01872222);
   fVCOD_31015->SetSavedPoint(22,0.02132414);
   fVCOD_31015->SetSavedPoint(23,0.02485509);
   fVCOD_31015->SetSavedPoint(24,0.02927059);
   fVCOD_31015->SetSavedPoint(25,0.03449103);
   fVCOD_31015->SetSavedPoint(26,0.04040365);
   fVCOD_31015->SetSavedPoint(27,0.04686589);
   fVCOD_31015->SetSavedPoint(28,0.0537095);
   fVCOD_31015->SetSavedPoint(29,0.06074581);
   fVCOD_31015->SetSavedPoint(30,0.06777145);
   fVCOD_31015->SetSavedPoint(31,0.07457488);
   fVCOD_31015->SetSavedPoint(32,0.08094299);
   fVCOD_31015->SetSavedPoint(33,0.08666805);
   fVCOD_31015->SetSavedPoint(34,0.09155438);
   fVCOD_31015->SetSavedPoint(35,0.09542478);
   fVCOD_31015->SetSavedPoint(36,0.09812641);
   fVCOD_31015->SetSavedPoint(37,0.09953597);
   fVCOD_31015->SetSavedPoint(38,0.09956389);
   fVCOD_31015->SetSavedPoint(39,0.0981576);
   fVCOD_31015->SetSavedPoint(40,0.09530361);
   fVCOD_31015->SetSavedPoint(41,0.09102833);
   fVCOD_31015->SetSavedPoint(42,0.0853977);
   fVCOD_31015->SetSavedPoint(43,0.07851558);
   fVCOD_31015->SetSavedPoint(44,0.07052089);
   fVCOD_31015->SetSavedPoint(45,0.06158369);
   fVCOD_31015->SetSavedPoint(46,0.05190029);
   fVCOD_31015->SetSavedPoint(47,0.04168744);
   fVCOD_31015->SetSavedPoint(48,0.03117601);
   fVCOD_31015->SetSavedPoint(49,0.02060408);
   fVCOD_31015->SetSavedPoint(50,0.01020986);
   fVCOD_31015->SetSavedPoint(51,0.0002246375);
   fVCOD_31015->SetSavedPoint(52,-0.009134149);
   fVCOD_31015->SetSavedPoint(53,-0.01766933);
   fVCOD_31015->SetSavedPoint(54,-0.02520981);
   fVCOD_31015->SetSavedPoint(55,-0.03161558);
   fVCOD_31015->SetSavedPoint(56,-0.03678171);
   fVCOD_31015->SetSavedPoint(57,-0.04064127);
   fVCOD_31015->SetSavedPoint(58,-0.04316703);
   fVCOD_31015->SetSavedPoint(59,-0.04437192);
   fVCOD_31015->SetSavedPoint(60,-0.04430827);
   fVCOD_31015->SetSavedPoint(61,-0.04306573);
   fVCOD_31015->SetSavedPoint(62,-0.04076813);
   fVCOD_31015->SetSavedPoint(63,-0.0375692);
   fVCOD_31015->SetSavedPoint(64,-0.03364737);
   fVCOD_31015->SetSavedPoint(65,-0.02919989);
   fVCOD_31015->SetSavedPoint(66,-0.02443629);
   fVCOD_31015->SetSavedPoint(67,-0.01957156);
   fVCOD_31015->SetSavedPoint(68,-0.01481911);
   fVCOD_31015->SetSavedPoint(69,-0.01038395);
   fVCOD_31015->SetSavedPoint(70,-0.006456046);
   fVCOD_31015->SetSavedPoint(71,-0.003204265);
   fVCOD_31015->SetSavedPoint(72,-0.0007710321);
   fVCOD_31015->SetSavedPoint(73,0.0007321513);
   fVCOD_31015->SetSavedPoint(74,0.001228151);
   fVCOD_31015->SetSavedPoint(75,0.0006765187);
   fVCOD_31015->SetSavedPoint(76,-0.0009253907);
   fVCOD_31015->SetSavedPoint(77,-0.003542536);
   fVCOD_31015->SetSavedPoint(78,-0.007103529);
   fVCOD_31015->SetSavedPoint(79,-0.01150315);
   fVCOD_31015->SetSavedPoint(80,-0.01660595);
   fVCOD_31015->SetSavedPoint(81,-0.02225083);
   fVCOD_31015->SetSavedPoint(82,-0.02825643);
   fVCOD_31015->SetSavedPoint(83,-0.03442715);
   fVCOD_31015->SetSavedPoint(84,-0.04055964);
   fVCOD_31015->SetSavedPoint(85,-0.04644944);
   fVCOD_31015->SetSavedPoint(86,-0.05189777);
   fVCOD_31015->SetSavedPoint(87,-0.05671793);
   fVCOD_31015->SetSavedPoint(88,-0.06074143);
   fVCOD_31015->SetSavedPoint(89,-0.06382343);
   fVCOD_31015->SetSavedPoint(90,-0.06584737);
   fVCOD_31015->SetSavedPoint(91,-0.06672871);
   fVCOD_31015->SetSavedPoint(92,-0.06641756);
   fVCOD_31015->SetSavedPoint(93,-0.06490018);
   fVCOD_31015->SetSavedPoint(94,-0.06219933);
   fVCOD_31015->SetSavedPoint(95,-0.05837329);
   fVCOD_31015->SetSavedPoint(96,-0.05351391);
   fVCOD_31015->SetSavedPoint(97,-0.04774338);
   fVCOD_31015->SetSavedPoint(98,-0.04121013);
   fVCOD_31015->SetSavedPoint(99,-0.03408386);
   fVCOD_31015->SetSavedPoint(100,-0.02654984);
   fVCOD_31015->SetSavedPoint(101,0.2574361);
   fVCOD_31015->SetSavedPoint(102,6.278822);
   fVCOD_31015->SetFillColor(19);
   fVCOD_31015->SetFillStyle(0);
   fVCOD_31015->SetLineColor(2);
   fVCOD_31015->SetLineWidth(2);
   fVCOD_31015->SetChisquare(22.50818);
   fVCOD_31015->SetNDF(17);
   fVCOD_31015->GetXaxis()->SetLabelFont(42);
   fVCOD_31015->GetXaxis()->SetTitleOffset(1);
   fVCOD_31015->GetXaxis()->SetTitleFont(42);
   fVCOD_31015->GetYaxis()->SetLabelFont(42);
   fVCOD_31015->GetYaxis()->SetTitleFont(42);
   fVCOD_31015->SetParameter(0,0.002642251);
   fVCOD_31015->SetParError(0,0.003132802);
   fVCOD_31015->SetParLimits(0,0,0);
   fVCOD_31015->SetParameter(1,-0.9767909);
   fVCOD_31015->SetParError(1,0.4117753);
   fVCOD_31015->SetParLimits(1,0,0);
   fVCOD_31015->SetParameter(2,1.585536);
   fVCOD_31015->SetParError(2,0.4192506);
   fVCOD_31015->SetParLimits(2,0,0);
   fVCOD_31015->SetParameter(3,-2.564333);
   fVCOD_31015->SetParError(3,7.753962);
   fVCOD_31015->SetParLimits(3,0,0);
   fVCOD_31015->SetParameter(4,-7.810752);
   fVCOD_31015->SetParError(4,7.699553);
   fVCOD_31015->SetParLimits(4,0,0);
   fVCOD_31015->SetParameter(5,-4.244202);
   fVCOD_31015->SetParError(5,40.17725);
   fVCOD_31015->SetParLimits(5,0,0);
   fVCOD_31015->SetParameter(6,120.2222);
   fVCOD_31015->SetParError(6,40.08201);
   fVCOD_31015->SetParLimits(6,0,0);
   fVCOD_31015->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_31015);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
