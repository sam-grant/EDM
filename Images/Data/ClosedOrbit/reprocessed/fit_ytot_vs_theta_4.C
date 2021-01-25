void fit_ytot_vs_theta_4()
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
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 45.34 / 15");
   ptstats_LaTex = ptstats->AddText("p0       = 0.001695 #pm 0.003122 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.25 #pm 0.3162 ");
   ptstats_LaTex = ptstats->AddText("p2       =  0.25 #pm 0.06224 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.25 #pm 0.491 ");
   ptstats_LaTex = ptstats->AddText("p4       = -0.25 #pm 0.2808 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.25 #pm 0.2873 ");
   ptstats_LaTex = ptstats->AddText("p6       =  0.25 #pm 0.3095 ");
   ptstats_LaTex = ptstats->AddText("p7       = -0.25 #pm 0.3038 ");
   ptstats_LaTex = ptstats->AddText("p8       =  0.25 #pm 0.4953 ");
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
   fVCOD_41018->SetSavedPoint(0,-0.001067482);
   fVCOD_41018->SetSavedPoint(1,-0.0005214267);
   fVCOD_41018->SetSavedPoint(2,4.743439e-05);
   fVCOD_41018->SetSavedPoint(3,0.0006362277);
   fVCOD_41018->SetSavedPoint(4,0.001242023);
   fVCOD_41018->SetSavedPoint(5,0.001861877);
   fVCOD_41018->SetSavedPoint(6,0.002492873);
   fVCOD_41018->SetSavedPoint(7,0.003132148);
   fVCOD_41018->SetSavedPoint(8,0.003776921);
   fVCOD_41018->SetSavedPoint(9,0.004424511);
   fVCOD_41018->SetSavedPoint(10,0.005072337);
   fVCOD_41018->SetSavedPoint(11,0.005717931);
   fVCOD_41018->SetSavedPoint(12,0.00635892);
   fVCOD_41018->SetSavedPoint(13,0.006993026);
   fVCOD_41018->SetSavedPoint(14,0.007618043);
   fVCOD_41018->SetSavedPoint(15,0.008231821);
   fVCOD_41018->SetSavedPoint(16,0.008832251);
   fVCOD_41018->SetSavedPoint(17,0.009417242);
   fVCOD_41018->SetSavedPoint(18,0.009984711);
   fVCOD_41018->SetSavedPoint(19,0.01053257);
   fVCOD_41018->SetSavedPoint(20,0.01105871);
   fVCOD_41018->SetSavedPoint(21,0.01156102);
   fVCOD_41018->SetSavedPoint(22,0.01203737);
   fVCOD_41018->SetSavedPoint(23,0.01248566);
   fVCOD_41018->SetSavedPoint(24,0.01290378);
   fVCOD_41018->SetSavedPoint(25,0.01328968);
   fVCOD_41018->SetSavedPoint(26,0.01364139);
   fVCOD_41018->SetSavedPoint(27,0.01395705);
   fVCOD_41018->SetSavedPoint(28,0.01423491);
   fVCOD_41018->SetSavedPoint(29,0.01447341);
   fVCOD_41018->SetSavedPoint(30,0.01467119);
   fVCOD_41018->SetSavedPoint(31,0.01482713);
   fVCOD_41018->SetSavedPoint(32,0.01494033);
   fVCOD_41018->SetSavedPoint(33,0.01501021);
   fVCOD_41018->SetSavedPoint(34,0.01503644);
   fVCOD_41018->SetSavedPoint(35,0.015019);
   fVCOD_41018->SetSavedPoint(36,0.01495816);
   fVCOD_41018->SetSavedPoint(37,0.01485449);
   fVCOD_41018->SetSavedPoint(38,0.01470883);
   fVCOD_41018->SetSavedPoint(39,0.01452227);
   fVCOD_41018->SetSavedPoint(40,0.01429615);
   fVCOD_41018->SetSavedPoint(41,0.01403202);
   fVCOD_41018->SetSavedPoint(42,0.01373162);
   fVCOD_41018->SetSavedPoint(43,0.01339683);
   fVCOD_41018->SetSavedPoint(44,0.01302968);
   fVCOD_41018->SetSavedPoint(45,0.01263229);
   fVCOD_41018->SetSavedPoint(46,0.01220688);
   fVCOD_41018->SetSavedPoint(47,0.0117557);
   fVCOD_41018->SetSavedPoint(48,0.01128107);
   fVCOD_41018->SetSavedPoint(49,0.01078531);
   fVCOD_41018->SetSavedPoint(50,0.01027077);
   fVCOD_41018->SetSavedPoint(51,0.009739789);
   fVCOD_41018->SetSavedPoint(52,0.009194722);
   fVCOD_41018->SetSavedPoint(53,0.008637901);
   fVCOD_41018->SetSavedPoint(54,0.008071646);
   fVCOD_41018->SetSavedPoint(55,0.007498259);
   fVCOD_41018->SetSavedPoint(56,0.006920017);
   fVCOD_41018->SetSavedPoint(57,0.006339163);
   fVCOD_41018->SetSavedPoint(58,0.005757899);
   fVCOD_41018->SetSavedPoint(59,0.005178373);
   fVCOD_41018->SetSavedPoint(60,0.004602667);
   fVCOD_41018->SetSavedPoint(61,0.00403278);
   fVCOD_41018->SetSavedPoint(62,0.003470615);
   fVCOD_41018->SetSavedPoint(63,0.002917959);
   fVCOD_41018->SetSavedPoint(64,0.002376468);
   fVCOD_41018->SetSavedPoint(65,0.001847651);
   fVCOD_41018->SetSavedPoint(66,0.001332858);
   fVCOD_41018->SetSavedPoint(67,0.0008332731);
   fVCOD_41018->SetSavedPoint(68,0.0003499039);
   fVCOD_41018->SetSavedPoint(69,-0.0001164121);
   fVCOD_41018->SetSavedPoint(70,-0.0005650038);
   fVCOD_41018->SetSavedPoint(71,-0.0009953532);
   fVCOD_41018->SetSavedPoint(72,-0.001407077);
   fVCOD_41018->SetSavedPoint(73,-0.001799903);
   fVCOD_41018->SetSavedPoint(74,-0.002173637);
   fVCOD_41018->SetSavedPoint(75,-0.002528137);
   fVCOD_41018->SetSavedPoint(76,-0.002863269);
   fVCOD_41018->SetSavedPoint(77,-0.003178875);
   fVCOD_41018->SetSavedPoint(78,-0.003474735);
   fVCOD_41018->SetSavedPoint(79,-0.003750534);
   fVCOD_41018->SetSavedPoint(80,-0.004005831);
   fVCOD_41018->SetSavedPoint(81,-0.004240038);
   fVCOD_41018->SetSavedPoint(82,-0.004452398);
   fVCOD_41018->SetSavedPoint(83,-0.004641985);
   fVCOD_41018->SetSavedPoint(84,-0.004807698);
   fVCOD_41018->SetSavedPoint(85,-0.004948277);
   fVCOD_41018->SetSavedPoint(86,-0.005062321);
   fVCOD_41018->SetSavedPoint(87,-0.005148321);
   fVCOD_41018->SetSavedPoint(88,-0.005204694);
   fVCOD_41018->SetSavedPoint(89,-0.005229833);
   fVCOD_41018->SetSavedPoint(90,-0.005222154);
   fVCOD_41018->SetSavedPoint(91,-0.005180149);
   fVCOD_41018->SetSavedPoint(92,-0.005102444);
   fVCOD_41018->SetSavedPoint(93,-0.004987851);
   fVCOD_41018->SetSavedPoint(94,-0.004835415);
   fVCOD_41018->SetSavedPoint(95,-0.004644464);
   fVCOD_41018->SetSavedPoint(96,-0.004414641);
   fVCOD_41018->SetSavedPoint(97,-0.004145935);
   fVCOD_41018->SetSavedPoint(98,-0.0038387);
   fVCOD_41018->SetSavedPoint(99,-0.003493662);
   fVCOD_41018->SetSavedPoint(100,-0.003111913);
   fVCOD_41018->SetSavedPoint(101,0.2574361);
   fVCOD_41018->SetSavedPoint(102,6.278822);
   fVCOD_41018->SetFillColor(19);
   fVCOD_41018->SetFillStyle(0);
   fVCOD_41018->SetLineColor(2);
   fVCOD_41018->SetLineWidth(2);
   fVCOD_41018->SetChisquare(45.34055);
   fVCOD_41018->SetNDF(15);
   fVCOD_41018->GetXaxis()->SetLabelFont(42);
   fVCOD_41018->GetXaxis()->SetTitleOffset(1);
   fVCOD_41018->GetXaxis()->SetTitleFont(42);
   fVCOD_41018->GetYaxis()->SetLabelFont(42);
   fVCOD_41018->GetYaxis()->SetTitleFont(42);
   fVCOD_41018->SetParameter(0,0.001695107);
   fVCOD_41018->SetParError(0,0.003121988);
   fVCOD_41018->SetParLimits(0,-0.25,0.25);
   fVCOD_41018->SetParameter(1,-0.25);
   fVCOD_41018->SetParError(1,0.3161558);
   fVCOD_41018->SetParLimits(1,-0.25,0.25);
   fVCOD_41018->SetParameter(2,0.25);
   fVCOD_41018->SetParError(2,0.06224157);
   fVCOD_41018->SetParLimits(2,-0.25,0.25);
   fVCOD_41018->SetParameter(3,-0.25);
   fVCOD_41018->SetParError(3,0.4910103);
   fVCOD_41018->SetParLimits(3,-0.25,0.25);
   fVCOD_41018->SetParameter(4,-0.25);
   fVCOD_41018->SetParError(4,0.2808322);
   fVCOD_41018->SetParLimits(4,-0.25,0.25);
   fVCOD_41018->SetParameter(5,-0.2499591);
   fVCOD_41018->SetParError(5,0.2872656);
   fVCOD_41018->SetParLimits(5,-0.25,0.25);
   fVCOD_41018->SetParameter(6,0.25);
   fVCOD_41018->SetParError(6,0.3095455);
   fVCOD_41018->SetParLimits(6,-0.25,0.25);
   fVCOD_41018->SetParameter(7,-0.2499996);
   fVCOD_41018->SetParError(7,0.3037947);
   fVCOD_41018->SetParLimits(7,-0.25,0.25);
   fVCOD_41018->SetParameter(8,0.25);
   fVCOD_41018->SetParError(8,0.4952641);
   fVCOD_41018->SetParLimits(8,-0.25,0.25);
   fVCOD_41018->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_41018);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
