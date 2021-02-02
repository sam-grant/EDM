void fit_ytot_vs_theta_10()
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
   
   Double_t ytot_vs_theta_fx1034[24] = {
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
   Double_t ytot_vs_theta_fy1034[24] = {
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
   Double_t ytot_vs_theta_fex1034[24] = {
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
   Double_t ytot_vs_theta_fey1034[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1034,ytot_vs_theta_fy1034,ytot_vs_theta_fex1034,ytot_vs_theta_fey1034);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025102810311034);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.445 / 3");
   ptstats_LaTex = ptstats->AddText("p0       = 0.001929 #pm 0.003146 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9491 #pm 0.4127 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.637 #pm 0.4207 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.665 #pm 7.777 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.645 #pm 7.723 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.02349 #pm 40.35 ");
   ptstats_LaTex = ptstats->AddText("p6       = 120.3 #pm 40.24 ");
   ptstats_LaTex = ptstats->AddText("p7       = -97.63 #pm 129.1 ");
   ptstats_LaTex = ptstats->AddText("p8       = 287.6 #pm 127.9 ");
   ptstats_LaTex = ptstats->AddText("p9       =  -218 #pm 315.7 ");
   ptstats_LaTex = ptstats->AddText("p10      = -31.18 #pm 314.6 ");
   ptstats_LaTex = ptstats->AddText("p11      =   565 #pm 652.3 ");
   ptstats_LaTex = ptstats->AddText("p12      = 266.8 #pm 657.4 ");
   ptstats_LaTex = ptstats->AddText("p13      = 58.44 #pm  1215 ");
   ptstats_LaTex = ptstats->AddText("p14      = 215.3 #pm  1213 ");
   ptstats_LaTex = ptstats->AddText("p15      = -2666 #pm  2084 ");
   ptstats_LaTex = ptstats->AddText("p16      =  2987 #pm  2060 ");
   ptstats_LaTex = ptstats->AddText("p17      =  3376 #pm  3328 ");
   ptstats_LaTex = ptstats->AddText("p18      =  7738 #pm  3314 ");
   ptstats_LaTex = ptstats->AddText("p19      = -3501 #pm  5096 ");
   ptstats_LaTex = ptstats->AddText("p20      = -2309 #pm  5033 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_101036 = new TF1("*fVCOD_10",0.2574361,6.278822,21);
    //The original function : fVCOD_10 had originally been created by:
    //TF1 *fVCOD_10 = new TF1("fVCOD_10",fVCOD_10,0.2574361,6.278822,21, 1, TF1::EAddToList::kNo);
   fVCOD_101036->SetRange(0.2574361,6.278822);
   fVCOD_101036->SetName("fVCOD_10");
   fVCOD_101036->SetTitle("fVCOD_10");
   fVCOD_101036->SetSavedPoint(0,0.06570119);
   fVCOD_101036->SetSavedPoint(1,0.0628167);
   fVCOD_101036->SetSavedPoint(2,0.05067373);
   fVCOD_101036->SetSavedPoint(3,0.03434389);
   fVCOD_101036->SetSavedPoint(4,0.01956179);
   fVCOD_101036->SetSavedPoint(5,0.01116519);
   fVCOD_101036->SetSavedPoint(6,0.01177158);
   fVCOD_101036->SetSavedPoint(7,0.0210689);
   fVCOD_101036->SetSavedPoint(8,0.03593412);
   fVCOD_101036->SetSavedPoint(9,0.05135979);
   fVCOD_101036->SetSavedPoint(10,0.06193169);
   fVCOD_101036->SetSavedPoint(11,0.06343365);
   fVCOD_101036->SetSavedPoint(12,0.05411055);
   fVCOD_101036->SetSavedPoint(13,0.03521625);
   fVCOD_101036->SetSavedPoint(14,0.01068393);
   fVCOD_101036->SetSavedPoint(15,-0.0139806);
   fVCOD_101036->SetSavedPoint(16,-0.03324671);
   fVCOD_101036->SetSavedPoint(17,-0.04307867);
   fVCOD_101036->SetSavedPoint(18,-0.04196998);
   fVCOD_101036->SetSavedPoint(19,-0.03118952);
   fVCOD_101036->SetSavedPoint(20,-0.01418663);
   fVCOD_101036->SetSavedPoint(21,0.004632271);
   fVCOD_101036->SetSavedPoint(22,0.02134641);
   fVCOD_101036->SetSavedPoint(23,0.0337102);
   fVCOD_101036->SetSavedPoint(24,0.04170731);
   fVCOD_101036->SetSavedPoint(25,0.04730263);
   fVCOD_101036->SetSavedPoint(26,0.05349488);
   fVCOD_101036->SetSavedPoint(27,0.06300842);
   fVCOD_101036->SetSavedPoint(28,0.07708505);
   fVCOD_101036->SetSavedPoint(29,0.09480482);
   fVCOD_101036->SetSavedPoint(30,0.1131874);
   fVCOD_101036->SetSavedPoint(31,0.1280607);
   fVCOD_101036->SetSavedPoint(32,0.1354197);
   fVCOD_101036->SetSavedPoint(33,0.1328215);
   fVCOD_101036->SetSavedPoint(34,0.1203389);
   fVCOD_101036->SetSavedPoint(35,0.1007288);
   fVCOD_101036->SetSavedPoint(36,0.07872732);
   fVCOD_101036->SetSavedPoint(37,0.05967015);
   fVCOD_101036->SetSavedPoint(38,0.04787197);
   fVCOD_101036->SetSavedPoint(39,0.04528621);
   fVCOD_101036->SetSavedPoint(40,0.05089048);
   fVCOD_101036->SetSavedPoint(41,0.06101474);
   fVCOD_101036->SetSavedPoint(42,0.07052579);
   fVCOD_101036->SetSavedPoint(43,0.07450003);
   fVCOD_101036->SetSavedPoint(44,0.06984997);
   fVCOD_101036->SetSavedPoint(45,0.05637451);
   fVCOD_101036->SetSavedPoint(46,0.03688023);
   fVCOD_101036->SetSavedPoint(47,0.01631607);
   fVCOD_101036->SetSavedPoint(48,0.0001821182);
   fVCOD_101036->SetSavedPoint(49,-0.007287035);
   fVCOD_101036->SetSavedPoint(50,-0.00458145);
   fVCOD_101036->SetSavedPoint(51,0.006461998);
   fVCOD_101036->SetSavedPoint(52,0.02109608);
   fVCOD_101036->SetSavedPoint(53,0.03304793);
   fVCOD_101036->SetSavedPoint(54,0.03644005);
   fVCOD_101036->SetSavedPoint(55,0.02766047);
   fVCOD_101036->SetSavedPoint(56,0.006600769);
   fVCOD_101036->SetSavedPoint(57,-0.02313204);
   fVCOD_101036->SetSavedPoint(58,-0.05511452);
   fVCOD_101036->SetSavedPoint(59,-0.0818647);
   fVCOD_101036->SetSavedPoint(60,-0.09694662);
   fVCOD_101036->SetSavedPoint(61,-0.0968047);
   fVCOD_101036->SetSavedPoint(62,-0.08179148);
   fVCOD_101036->SetSavedPoint(63,-0.05609285);
   fVCOD_101036->SetSavedPoint(64,-0.02657837);
   fVCOD_101036->SetSavedPoint(65,-0.0009154675);
   fVCOD_101036->SetSavedPoint(66,0.01450893);
   fVCOD_101036->SetSavedPoint(67,0.01627353);
   fVCOD_101036->SetSavedPoint(68,0.004756094);
   fVCOD_101036->SetSavedPoint(69,-0.01608906);
   fVCOD_101036->SetSavedPoint(70,-0.03991151);
   fVCOD_101036->SetSavedPoint(71,-0.05974419);
   fVCOD_101036->SetSavedPoint(72,-0.06987476);
   fVCOD_101036->SetSavedPoint(73,-0.06730293);
   fVCOD_101036->SetSavedPoint(74,-0.05241765);
   fVCOD_101036->SetSavedPoint(75,-0.02875978);
   fVCOD_101036->SetSavedPoint(76,-0.001987235);
   fVCOD_101036->SetSavedPoint(77,0.02163848);
   fVCOD_101036->SetSavedPoint(78,0.03682443);
   fVCOD_101036->SetSavedPoint(79,0.04047484);
   fVCOD_101036->SetSavedPoint(80,0.03229434);
   fVCOD_101036->SetSavedPoint(81,0.01466478);
   fVCOD_101036->SetSavedPoint(82,-0.008116595);
   fVCOD_101036->SetSavedPoint(83,-0.03100213);
   fVCOD_101036->SetSavedPoint(84,-0.04945166);
   fVCOD_101036->SetSavedPoint(85,-0.06047882);
   fVCOD_101036->SetSavedPoint(86,-0.06325722);
   fVCOD_101036->SetSavedPoint(87,-0.05917644);
   fVCOD_101036->SetSavedPoint(88,-0.05136784);
   fVCOD_101036->SetSavedPoint(89,-0.04383413);
   fVCOD_101036->SetSavedPoint(90,-0.04039321);
   fVCOD_101036->SetSavedPoint(91,-0.04367755);
   fVCOD_101036->SetSavedPoint(92,-0.05441255);
   fVCOD_101036->SetSavedPoint(93,-0.0711379);
   fVCOD_101036->SetSavedPoint(94,-0.09044406);
   fVCOD_101036->SetSavedPoint(95,-0.1076883);
   fVCOD_101036->SetSavedPoint(96,-0.118047);
   fVCOD_101036->SetSavedPoint(97,-0.1176778);
   fVCOD_101036->SetSavedPoint(98,-0.1047212);
   fVCOD_101036->SetSavedPoint(99,-0.07989155);
   fVCOD_101036->SetSavedPoint(100,-0.04648242);
   fVCOD_101036->SetSavedPoint(101,0.2574361);
   fVCOD_101036->SetSavedPoint(102,6.278822);
   fVCOD_101036->SetFillColor(19);
   fVCOD_101036->SetFillStyle(0);
   fVCOD_101036->SetLineColor(2);
   fVCOD_101036->SetLineWidth(2);
   fVCOD_101036->SetChisquare(4.444772);
   fVCOD_101036->SetNDF(3);
   fVCOD_101036->GetXaxis()->SetLabelFont(42);
   fVCOD_101036->GetXaxis()->SetTitleOffset(1);
   fVCOD_101036->GetXaxis()->SetTitleFont(42);
   fVCOD_101036->GetYaxis()->SetLabelFont(42);
   fVCOD_101036->GetYaxis()->SetTitleFont(42);
   fVCOD_101036->SetParameter(0,0.001929029);
   fVCOD_101036->SetParError(0,0.003145685);
   fVCOD_101036->SetParLimits(0,0,0);
   fVCOD_101036->SetParameter(1,-0.9490705);
   fVCOD_101036->SetParError(1,0.4127156);
   fVCOD_101036->SetParLimits(1,0,0);
   fVCOD_101036->SetParameter(2,1.63709);
   fVCOD_101036->SetParError(2,0.42068);
   fVCOD_101036->SetParLimits(2,0,0);
   fVCOD_101036->SetParameter(3,-2.664868);
   fVCOD_101036->SetParError(3,7.776578);
   fVCOD_101036->SetParLimits(3,0,0);
   fVCOD_101036->SetParameter(4,-8.645483);
   fVCOD_101036->SetParError(4,7.723055);
   fVCOD_101036->SetParLimits(4,0,0);
   fVCOD_101036->SetParameter(5,-0.02348597);
   fVCOD_101036->SetParError(5,40.34737);
   fVCOD_101036->SetParLimits(5,0,0);
   fVCOD_101036->SetParameter(6,120.2834);
   fVCOD_101036->SetParError(6,40.24206);
   fVCOD_101036->SetParLimits(6,0,0);
   fVCOD_101036->SetParameter(7,-97.63498);
   fVCOD_101036->SetParError(7,129.1203);
   fVCOD_101036->SetParLimits(7,0,0);
   fVCOD_101036->SetParameter(8,287.6282);
   fVCOD_101036->SetParError(8,127.9175);
   fVCOD_101036->SetParLimits(8,0,0);
   fVCOD_101036->SetParameter(9,-217.9731);
   fVCOD_101036->SetParError(9,315.7144);
   fVCOD_101036->SetParLimits(9,0,0);
   fVCOD_101036->SetParameter(10,-31.17558);
   fVCOD_101036->SetParError(10,314.5804);
   fVCOD_101036->SetParLimits(10,0,0);
   fVCOD_101036->SetParameter(11,564.9592);
   fVCOD_101036->SetParError(11,652.3207);
   fVCOD_101036->SetParLimits(11,0,0);
   fVCOD_101036->SetParameter(12,266.8137);
   fVCOD_101036->SetParError(12,657.4442);
   fVCOD_101036->SetParLimits(12,0,0);
   fVCOD_101036->SetParameter(13,58.44094);
   fVCOD_101036->SetParError(13,1214.543);
   fVCOD_101036->SetParLimits(13,0,0);
   fVCOD_101036->SetParameter(14,215.3225);
   fVCOD_101036->SetParError(14,1212.861);
   fVCOD_101036->SetParLimits(14,0,0);
   fVCOD_101036->SetParameter(15,-2665.889);
   fVCOD_101036->SetParError(15,2084.361);
   fVCOD_101036->SetParLimits(15,0,0);
   fVCOD_101036->SetParameter(16,2986.901);
   fVCOD_101036->SetParError(16,2060.26);
   fVCOD_101036->SetParLimits(16,0,0);
   fVCOD_101036->SetParameter(17,3375.595);
   fVCOD_101036->SetParError(17,3328.233);
   fVCOD_101036->SetParLimits(17,0,0);
   fVCOD_101036->SetParameter(18,7738.11);
   fVCOD_101036->SetParError(18,3313.646);
   fVCOD_101036->SetParLimits(18,0,0);
   fVCOD_101036->SetParameter(19,-3501.198);
   fVCOD_101036->SetParError(19,5096.209);
   fVCOD_101036->SetParLimits(19,0,0);
   fVCOD_101036->SetParameter(20,-2309.479);
   fVCOD_101036->SetParError(20,5033.495);
   fVCOD_101036->SetParLimits(20,0,0);
   fVCOD_101036->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_101036);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
