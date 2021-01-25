void fit_ytot_vs_theta_8()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 25 05:55:08 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.7913105,-0.3125,7.121794,0.3125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t ytot_vs_theta_fx1028[24] = {
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
   Double_t ytot_vs_theta_fy1028[24] = {
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
   Double_t ytot_vs_theta_fex1028[24] = {
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
   Double_t ytot_vs_theta_fey1028[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1028,ytot_vs_theta_fy1028,ytot_vs_theta_fex1028,ytot_vs_theta_fey1028);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta100410071010101310161019102210251028);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 11.62 / 7");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002154 #pm 0.003144 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9772 #pm 0.4124 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.624 #pm 0.4206 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.751 #pm 7.776 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.199 #pm 7.717 ");
   ptstats_LaTex = ptstats->AddText("p5       = 0.4646 #pm 40.32 ");
   ptstats_LaTex = ptstats->AddText("p6       = 119.2 #pm 40.24 ");
   ptstats_LaTex = ptstats->AddText("p7       = -95.58 #pm 129.1 ");
   ptstats_LaTex = ptstats->AddText("p8       = 287.8 #pm 127.8 ");
   ptstats_LaTex = ptstats->AddText("p9       = -178.5 #pm   315 ");
   ptstats_LaTex = ptstats->AddText("p10      = -42.3 #pm 314.2 ");
   ptstats_LaTex = ptstats->AddText("p11      =   517 #pm   651 ");
   ptstats_LaTex = ptstats->AddText("p12      =   278 #pm 656.8 ");
   ptstats_LaTex = ptstats->AddText("p13      = 138.9 #pm  1214 ");
   ptstats_LaTex = ptstats->AddText("p14      = 264.7 #pm  1212 ");
   ptstats_LaTex = ptstats->AddText("p15      = -2851 #pm  2082 ");
   ptstats_LaTex = ptstats->AddText("p16      =  3091 #pm  2055 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_81030 = new TF1("*fVCOD_8",0.2574361,6.278822,17);
    //The original function : fVCOD_8 had originally been created by:
    //TF1 *fVCOD_8 = new TF1("fVCOD_8",fVCOD_8,0.2574361,6.278822,17, 1, TF1::EAddToList::kNo);
   fVCOD_81030->SetRange(0.2574361,6.278822);
   fVCOD_81030->SetName("fVCOD_8");
   fVCOD_81030->SetTitle("fVCOD_8");
   fVCOD_81030->SetSavedPoint(0,0.05100341);
   fVCOD_81030->SetSavedPoint(1,0.05934591);
   fVCOD_81030->SetSavedPoint(2,0.05999327);
   fVCOD_81030->SetSavedPoint(3,0.05434863);
   fVCOD_81030->SetSavedPoint(4,0.04485205);
   fVCOD_81030->SetSavedPoint(5,0.03442527);
   fVCOD_81030->SetSavedPoint(6,0.02582077);
   fVCOD_81030->SetSavedPoint(7,0.02101921);
   fVCOD_81030->SetSavedPoint(8,0.02080932);
   fVCOD_81030->SetSavedPoint(9,0.02464403);
   fVCOD_81030->SetSavedPoint(10,0.03080498);
   fVCOD_81030->SetSavedPoint(11,0.03683906);
   fVCOD_81030->SetSavedPoint(12,0.04016891);
   fVCOD_81030->SetSavedPoint(13,0.03874036);
   fVCOD_81030->SetSavedPoint(14,0.03156039);
   fVCOD_81030->SetSavedPoint(15,0.019003);
   fVCOD_81030->SetSavedPoint(16,0.002811289);
   fVCOD_81030->SetSavedPoint(17,-0.01420863);
   fVCOD_81030->SetSavedPoint(18,-0.02873831);
   fVCOD_81030->SetSavedPoint(19,-0.03762393);
   fVCOD_81030->SetSavedPoint(20,-0.03853348);
   fVCOD_81030->SetSavedPoint(21,-0.03045191);
   fVCOD_81030->SetSavedPoint(22,-0.01390763);
   fVCOD_81030->SetSavedPoint(23,0.009117599);
   fVCOD_81030->SetSavedPoint(24,0.03557413);
   fVCOD_81030->SetSavedPoint(25,0.06194056);
   fVCOD_81030->SetSavedPoint(26,0.08490081);
   fVCOD_81030->SetSavedPoint(27,0.1019572);
   fVCOD_81030->SetSavedPoint(28,0.1118513);
   fVCOD_81030->SetSavedPoint(29,0.114708);
   fVCOD_81030->SetSavedPoint(30,0.111883);
   fVCOD_81030->SetSavedPoint(31,0.1055568);
   fVCOD_81030->SetSavedPoint(32,0.09817681);
   fVCOD_81030->SetSavedPoint(33,0.09187707);
   fVCOD_81030->SetSavedPoint(34,0.08800852);
   fVCOD_81030->SetSavedPoint(35,0.08688338);
   fVCOD_81030->SetSavedPoint(36,0.0877846);
   fVCOD_81030->SetSavedPoint(37,0.08922925);
   fVCOD_81030->SetSavedPoint(38,0.0894153);
   fVCOD_81030->SetSavedPoint(39,0.08673919);
   fVCOD_81030->SetSavedPoint(40,0.08025661);
   fVCOD_81030->SetSavedPoint(41,0.06997356);
   fVCOD_81030->SetSavedPoint(42,0.05689616);
   fVCOD_81030->SetSavedPoint(43,0.04282542);
   fVCOD_81030->SetSavedPoint(44,0.02994457);
   fVCOD_81030->SetSavedPoint(45,0.02029608);
   fVCOD_81030->SetSavedPoint(46,0.01527346);
   fVCOD_81030->SetSavedPoint(47,0.01525019);
   fVCOD_81030->SetSavedPoint(48,0.01943836);
   fVCOD_81030->SetSavedPoint(49,0.02601631);
   fVCOD_81030->SetSavedPoint(50,0.03250279);
   fVCOD_81030->SetSavedPoint(51,0.03629723);
   fVCOD_81030->SetSavedPoint(52,0.03526587);
   fVCOD_81030->SetSavedPoint(53,0.02824097);
   fVCOD_81030->SetSavedPoint(54,0.01531797);
   fVCOD_81030->SetSavedPoint(55,-0.002120289);
   fVCOD_81030->SetSavedPoint(56,-0.02166258);
   fVCOD_81030->SetSavedPoint(57,-0.04035784);
   fVCOD_81030->SetSavedPoint(58,-0.05532797);
   fVCOD_81030->SetSavedPoint(59,-0.06437052);
   fVCOD_81030->SetSavedPoint(60,-0.06641861);
   fVCOD_81030->SetSavedPoint(61,-0.0617565);
   fVCOD_81030->SetSavedPoint(62,-0.05194326);
   fVCOD_81030->SetSavedPoint(63,-0.03946194);
   fVCOD_81030->SetSavedPoint(64,-0.02717251);
   fVCOD_81030->SetSavedPoint(65,-0.01769012);
   fVCOD_81030->SetSavedPoint(66,-0.01282651);
   fVCOD_81030->SetSavedPoint(67,-0.01321745);
   fVCOD_81030->SetSavedPoint(68,-0.01821707);
   fVCOD_81030->SetSavedPoint(69,-0.02607952);
   fVCOD_81030->SetSavedPoint(70,-0.0343843);
   fVCOD_81030->SetSavedPoint(71,-0.04060744);
   fVCOD_81030->SetSavedPoint(72,-0.04270877);
   fVCOD_81030->SetSavedPoint(73,-0.03960351);
   fVCOD_81030->SetSavedPoint(74,-0.03141365);
   fVCOD_81030->SetSavedPoint(75,-0.01944535);
   fVCOD_81030->SetSavedPoint(76,-0.005901053);
   fVCOD_81030->SetSavedPoint(77,0.006605159);
   fVCOD_81030->SetSavedPoint(78,0.01561698);
   fVCOD_81030->SetSavedPoint(79,0.0193602);
   fVCOD_81030->SetSavedPoint(80,0.01710424);
   fVCOD_81030->SetSavedPoint(81,0.009282459);
   fVCOD_81030->SetSavedPoint(82,-0.002651336);
   fVCOD_81030->SetSavedPoint(83,-0.0165909);
   fVCOD_81030->SetSavedPoint(84,-0.03027995);
   fVCOD_81030->SetSavedPoint(85,-0.04182851);
   fVCOD_81030->SetSavedPoint(86,-0.05012108);
   fVCOD_81030->SetSavedPoint(87,-0.05502131);
   fVCOD_81030->SetSavedPoint(88,-0.05732699);
   fVCOD_81030->SetSavedPoint(89,-0.05848897);
   fVCOD_81030->SetSavedPoint(90,-0.06016401);
   fVCOD_81030->SetSavedPoint(91,-0.06371222);
   fVCOD_81030->SetSavedPoint(92,-0.06976326);
   fVCOD_81030->SetSavedPoint(93,-0.07796092);
   fVCOD_81030->SetSavedPoint(94,-0.08695403);
   fVCOD_81030->SetSavedPoint(95,-0.09464413);
   fVCOD_81030->SetSavedPoint(96,-0.098639);
   fVCOD_81030->SetSavedPoint(97,-0.09681109);
   fVCOD_81030->SetSavedPoint(98,-0.08783257);
   fVCOD_81030->SetSavedPoint(99,-0.07156051);
   fVCOD_81030->SetSavedPoint(100,-0.04917727);
   fVCOD_81030->SetSavedPoint(101,0.2574361);
   fVCOD_81030->SetSavedPoint(102,6.278822);
   fVCOD_81030->SetFillColor(19);
   fVCOD_81030->SetFillStyle(0);
   fVCOD_81030->SetLineColor(2);
   fVCOD_81030->SetLineWidth(2);
   fVCOD_81030->SetChisquare(11.61554);
   fVCOD_81030->SetNDF(7);
   fVCOD_81030->GetXaxis()->SetLabelFont(42);
   fVCOD_81030->GetXaxis()->SetTitleOffset(1);
   fVCOD_81030->GetXaxis()->SetTitleFont(42);
   fVCOD_81030->GetYaxis()->SetLabelFont(42);
   fVCOD_81030->GetYaxis()->SetTitleFont(42);
   fVCOD_81030->SetParameter(0,0.00215375);
   fVCOD_81030->SetParError(0,0.003144226);
   fVCOD_81030->SetParLimits(0,0,0);
   fVCOD_81030->SetParameter(1,-0.9772414);
   fVCOD_81030->SetParError(1,0.4124333);
   fVCOD_81030->SetParLimits(1,0,0);
   fVCOD_81030->SetParameter(2,1.623777);
   fVCOD_81030->SetParError(2,0.4206317);
   fVCOD_81030->SetParLimits(2,0,0);
   fVCOD_81030->SetParameter(3,-2.750939);
   fVCOD_81030->SetParError(3,7.776357);
   fVCOD_81030->SetParLimits(3,0,0);
   fVCOD_81030->SetParameter(4,-8.199072);
   fVCOD_81030->SetParError(4,7.71704);
   fVCOD_81030->SetParLimits(4,0,0);
   fVCOD_81030->SetParameter(5,0.4645563);
   fVCOD_81030->SetParError(5,40.32405);
   fVCOD_81030->SetParLimits(5,0,0);
   fVCOD_81030->SetParameter(6,119.1679);
   fVCOD_81030->SetParError(6,40.23731);
   fVCOD_81030->SetParLimits(6,0,0);
   fVCOD_81030->SetParameter(7,-95.5824);
   fVCOD_81030->SetParError(7,129.1052);
   fVCOD_81030->SetParLimits(7,0,0);
   fVCOD_81030->SetParameter(8,287.7843);
   fVCOD_81030->SetParError(8,127.8196);
   fVCOD_81030->SetParLimits(8,0,0);
   fVCOD_81030->SetParameter(9,-178.5399);
   fVCOD_81030->SetParError(9,315.0498);
   fVCOD_81030->SetParLimits(9,0,0);
   fVCOD_81030->SetParameter(10,-42.30433);
   fVCOD_81030->SetParError(10,314.1737);
   fVCOD_81030->SetParLimits(10,0,0);
   fVCOD_81030->SetParameter(11,516.9731);
   fVCOD_81030->SetParError(11,651.0457);
   fVCOD_81030->SetParLimits(11,0,0);
   fVCOD_81030->SetParameter(12,278.0152);
   fVCOD_81030->SetParError(12,656.7734);
   fVCOD_81030->SetParLimits(12,0,0);
   fVCOD_81030->SetParameter(13,138.8883);
   fVCOD_81030->SetParError(13,1213.978);
   fVCOD_81030->SetParLimits(13,0,0);
   fVCOD_81030->SetParameter(14,264.7473);
   fVCOD_81030->SetParError(14,1211.565);
   fVCOD_81030->SetParLimits(14,0,0);
   fVCOD_81030->SetParameter(15,-2850.504);
   fVCOD_81030->SetParError(15,2082.344);
   fVCOD_81030->SetParLimits(15,0,0);
   fVCOD_81030->SetParameter(16,3090.627);
   fVCOD_81030->SetParError(16,2055.238);
   fVCOD_81030->SetParLimits(16,0,0);
   fVCOD_81030->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_81030);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
