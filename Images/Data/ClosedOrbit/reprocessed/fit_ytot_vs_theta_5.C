void fit_ytot_vs_theta_5()
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
   
   Double_t ytot_vs_theta_fx1019[24] = {
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
   Double_t ytot_vs_theta_fy1019[24] = {
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
   Double_t ytot_vs_theta_fex1019[24] = {
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
   Double_t ytot_vs_theta_fey1019[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1019,ytot_vs_theta_fy1019,ytot_vs_theta_fex1019,ytot_vs_theta_fey1019);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 16.64 / 13");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002169 #pm 0.003142 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9786 #pm 0.4123 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.594 #pm 0.4201 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.811 #pm  7.76 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.403 #pm 7.705 ");
   ptstats_LaTex = ptstats->AddText("p5       = 2.048 #pm 40.27 ");
   ptstats_LaTex = ptstats->AddText("p6       = 121.1 #pm 40.13 ");
   ptstats_LaTex = ptstats->AddText("p7       = -83.82 #pm 128.9 ");
   ptstats_LaTex = ptstats->AddText("p8       = 290.8 #pm 127.5 ");
   ptstats_LaTex = ptstats->AddText("p9       = -193.6 #pm 314.6 ");
   ptstats_LaTex = ptstats->AddText("p10      = -23.51 #pm 313.5 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_51021 = new TF1("*fVCOD_5",0.2574361,6.278822,11);
    //The original function : fVCOD_5 had originally been created by:
    //TF1 *fVCOD_5 = new TF1("fVCOD_5",fVCOD_5,0.2574361,6.278822,11, 1, TF1::EAddToList::kNo);
   fVCOD_51021->SetRange(0.2574361,6.278822);
   fVCOD_51021->SetName("fVCOD_5");
   fVCOD_51021->SetTitle("fVCOD_5");
   fVCOD_51021->SetSavedPoint(0,0.02181327);
   fVCOD_51021->SetSavedPoint(1,0.03448231);
   fVCOD_51021->SetSavedPoint(2,0.04511506);
   fVCOD_51021->SetSavedPoint(3,0.05323915);
   fVCOD_51021->SetSavedPoint(4,0.05851378);
   fVCOD_51021->SetSavedPoint(5,0.06075353);
   fVCOD_51021->SetSavedPoint(6,0.059943);
   fVCOD_51021->SetSavedPoint(7,0.05624119);
   fVCOD_51021->SetSavedPoint(8,0.04997489);
   fVCOD_51021->SetSavedPoint(9,0.04162126);
   fVCOD_51021->SetSavedPoint(10,0.03178056);
   fVCOD_51021->SetSavedPoint(11,0.02114069);
   fVCOD_51021->SetSavedPoint(12,0.01043578);
   fVCOD_51021->SetSavedPoint(13,0.0004014677);
   fVCOD_51021->SetSavedPoint(14,-0.008270032);
   fVCOD_51021->SetSavedPoint(15,-0.01497216);
   fVCOD_51021->SetSavedPoint(16,-0.01922068);
   fVCOD_51021->SetSavedPoint(17,-0.02068228);
   fVCOD_51021->SetSavedPoint(18,-0.01919328);
   fVCOD_51021->SetSavedPoint(19,-0.01476722);
   fVCOD_51021->SetSavedPoint(20,-0.007590907);
   fVCOD_51021->SetSavedPoint(21,0.001990618);
   fVCOD_51021->SetSavedPoint(22,0.01349901);
   fVCOD_51021->SetSavedPoint(23,0.02635557);
   fVCOD_51021->SetSavedPoint(24,0.03991982);
   fVCOD_51021->SetSavedPoint(25,0.05353082);
   fVCOD_51021->SetSavedPoint(26,0.06654845);
   fVCOD_51021->SetSavedPoint(27,0.07839167);
   fVCOD_51021->SetSavedPoint(28,0.08857135);
   fVCOD_51021->SetSavedPoint(29,0.0967154);
   fVCOD_51021->SetSavedPoint(30,0.1025849);
   fVCOD_51021->SetSavedPoint(31,0.1060803);
   fVCOD_51021->SetSavedPoint(32,0.1072379);
   fVCOD_51021->SetSavedPoint(33,0.1062171);
   fVCOD_51021->SetSavedPoint(34,0.1032802);
   fVCOD_51021->SetSavedPoint(35,0.09876536);
   fVCOD_51021->SetSavedPoint(36,0.09305749);
   fVCOD_51021->SetSavedPoint(37,0.08655654);
   fVCOD_51021->SetSavedPoint(38,0.07964782);
   fVCOD_51021->SetSavedPoint(39,0.07267546);
   fVCOD_51021->SetSavedPoint(40,0.06592119);
   fVCOD_51021->SetSavedPoint(41,0.05958971);
   fVCOD_51021->SetSavedPoint(42,0.05380134);
   fVCOD_51021->SetSavedPoint(43,0.04859217);
   fVCOD_51021->SetSavedPoint(44,0.04392117);
   fVCOD_51021->SetSavedPoint(45,0.03968328);
   fVCOD_51021->SetSavedPoint(46,0.03572703);
   fVCOD_51021->SetSavedPoint(47,0.03187491);
   fVCOD_51021->SetSavedPoint(48,0.02794483);
   fVCOD_51021->SetSavedPoint(49,0.0237705);
   fVCOD_51021->SetSavedPoint(50,0.0192194);
   fVCOD_51021->SetSavedPoint(51,0.01420678);
   fVCOD_51021->SetSavedPoint(52,0.008704775);
   fVCOD_51021->SetSavedPoint(53,0.002746158);
   fVCOD_51021->SetSavedPoint(54,-0.003577304);
   fVCOD_51021->SetSavedPoint(55,-0.0101215);
   fVCOD_51021->SetSavedPoint(56,-0.01670078);
   fVCOD_51021->SetSavedPoint(57,-0.02310189);
   fVCOD_51021->SetSavedPoint(58,-0.02909963);
   fVCOD_51021->SetSavedPoint(59,-0.03447298);
   fVCOD_51021->SetSavedPoint(60,-0.03902046);
   fVCOD_51021->SetSavedPoint(61,-0.04257347);
   fVCOD_51021->SetSavedPoint(62,-0.04500677);
   fVCOD_51021->SetSavedPoint(63,-0.04624567);
   fVCOD_51021->SetSavedPoint(64,-0.04626954);
   fVCOD_51021->SetSavedPoint(65,-0.04511174);
   fVCOD_51021->SetSavedPoint(66,-0.04285646);
   fVCOD_51021->SetSavedPoint(67,-0.03963288);
   fVCOD_51021->SetSavedPoint(68,-0.03560755);
   fVCOD_51021->SetSavedPoint(69,-0.03097562);
   fVCOD_51021->SetSavedPoint(70,-0.02595172);
   fVCOD_51021->SetSavedPoint(71,-0.02076115);
   fVCOD_51021->SetSavedPoint(72,-0.01563183);
   fVCOD_51021->SetSavedPoint(73,-0.01078725);
   fVCOD_51021->SetSavedPoint(74,-0.006440534);
   fVCOD_51021->SetSavedPoint(75,-0.002789464);
   fVCOD_51021->SetSavedPoint(76,-1.228528e-05);
   fVCOD_51021->SetSavedPoint(77,0.001736155);
   fVCOD_51021->SetSavedPoint(78,0.002328192);
   fVCOD_51021->SetSavedPoint(79,0.001667386);
   fVCOD_51021->SetSavedPoint(80,-0.0003070415);
   fVCOD_51021->SetSavedPoint(81,-0.003615364);
   fVCOD_51021->SetSavedPoint(82,-0.008232325);
   fVCOD_51021->SetSavedPoint(83,-0.01408234);
   fVCOD_51021->SetSavedPoint(84,-0.02103549);
   fVCOD_51021->SetSavedPoint(85,-0.02890505);
   fVCOD_51021->SetSavedPoint(86,-0.03744728);
   fVCOD_51021->SetSavedPoint(87,-0.04636418);
   fVCOD_51021->SetSavedPoint(88,-0.05530981);
   fVCOD_51021->SetSavedPoint(89,-0.06390047);
   fVCOD_51021->SetSavedPoint(90,-0.07172896);
   fVCOD_51021->SetSavedPoint(91,-0.07838227);
   fVCOD_51021->SetSavedPoint(92,-0.08346248);
   fVCOD_51021->SetSavedPoint(93,-0.08660934);
   fVCOD_51021->SetSavedPoint(94,-0.08752361);
   fVCOD_51021->SetSavedPoint(95,-0.08598924);
   fVCOD_51021->SetSavedPoint(96,-0.08189291);
   fVCOD_51021->SetSavedPoint(97,-0.07523914);
   fVCOD_51021->SetSavedPoint(98,-0.06615946);
   fVCOD_51021->SetSavedPoint(99,-0.05491454);
   fVCOD_51021->SetSavedPoint(100,-0.04188828);
   fVCOD_51021->SetSavedPoint(101,0.2574361);
   fVCOD_51021->SetSavedPoint(102,6.278822);
   fVCOD_51021->SetFillColor(19);
   fVCOD_51021->SetFillStyle(0);
   fVCOD_51021->SetLineColor(2);
   fVCOD_51021->SetLineWidth(2);
   fVCOD_51021->SetChisquare(16.64372);
   fVCOD_51021->SetNDF(13);
   fVCOD_51021->GetXaxis()->SetLabelFont(42);
   fVCOD_51021->GetXaxis()->SetTitleOffset(1);
   fVCOD_51021->GetXaxis()->SetTitleFont(42);
   fVCOD_51021->GetYaxis()->SetLabelFont(42);
   fVCOD_51021->GetYaxis()->SetTitleFont(42);
   fVCOD_51021->SetParameter(0,0.002168783);
   fVCOD_51021->SetParError(0,0.003142467);
   fVCOD_51021->SetParLimits(0,0,0);
   fVCOD_51021->SetParameter(1,-0.9785598);
   fVCOD_51021->SetParError(1,0.4122812);
   fVCOD_51021->SetParLimits(1,0,0);
   fVCOD_51021->SetParameter(2,1.5941);
   fVCOD_51021->SetParError(2,0.4200596);
   fVCOD_51021->SetParLimits(2,0,0);
   fVCOD_51021->SetParameter(3,-2.810601);
   fVCOD_51021->SetParError(3,7.759976);
   fVCOD_51021->SetParLimits(3,0,0);
   fVCOD_51021->SetParameter(4,-8.40307);
   fVCOD_51021->SetParError(4,7.705174);
   fVCOD_51021->SetParLimits(4,0,0);
   fVCOD_51021->SetParameter(5,2.04815);
   fVCOD_51021->SetParError(5,40.27459);
   fVCOD_51021->SetParLimits(5,0,0);
   fVCOD_51021->SetParameter(6,121.138);
   fVCOD_51021->SetParError(6,40.13497);
   fVCOD_51021->SetParLimits(6,0,0);
   fVCOD_51021->SetParameter(7,-83.81832);
   fVCOD_51021->SetParError(7,128.9147);
   fVCOD_51021->SetParLimits(7,0,0);
   fVCOD_51021->SetParameter(8,290.7704);
   fVCOD_51021->SetParError(8,127.4915);
   fVCOD_51021->SetParLimits(8,0,0);
   fVCOD_51021->SetParameter(9,-193.6366);
   fVCOD_51021->SetParError(9,314.5501);
   fVCOD_51021->SetParLimits(9,0,0);
   fVCOD_51021->SetParameter(10,-23.51207);
   fVCOD_51021->SetParError(10,313.5089);
   fVCOD_51021->SetParLimits(10,0,0);
   fVCOD_51021->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_51021);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
