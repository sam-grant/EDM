void ParabolaFits_Tracks_A_vs_p_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 15:31:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.04,3419.625,0.16);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1005[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackReco_fy1005[6] = {
   0.05762156,
   0.1014207,
   0.09950833,
   0.09757402,
   0.06482465,
   0.05074939};
   Double_t trackReco_fex1005[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1005[6] = {
   0.02391007,
   0.007703627,
   0.006058014,
   0.005444268,
   0.005631662,
   0.006565885};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1005,trackReco_fy1005,trackReco_fex1005,trackReco_fey1005);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1005 = new TH1F("Graph_trackReco1005","",100,0,3300);
   Graph_trackReco1005->SetMinimum(-0.02);
   Graph_trackReco1005->SetMaximum(0.14);
   Graph_trackReco1005->SetDirectory(0);
   Graph_trackReco1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1005->SetLineColor(ci);
   Graph_trackReco1005->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_trackReco1005->GetXaxis()->SetRange(0,92);
   Graph_trackReco1005->GetXaxis()->CenterTitle(true);
   Graph_trackReco1005->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1005->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1005->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1005->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1005->GetYaxis()->CenterTitle(true);
   Graph_trackReco1005->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1005->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1005->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1005->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1005->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1005->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1005);
   
   
   TF1 *ParabolaFunc1006 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1006->SetRange(500,2500);
   ParabolaFunc1006->SetName("ParabolaFunc");
   ParabolaFunc1006->SetTitle("ParabolaFunc");
   ParabolaFunc1006->SetSavedPoint(0,0.09401153);
   ParabolaFunc1006->SetSavedPoint(1,0.09461164);
   ParabolaFunc1006->SetSavedPoint(2,0.09519088);
   ParabolaFunc1006->SetSavedPoint(3,0.09574927);
   ParabolaFunc1006->SetSavedPoint(4,0.0962868);
   ParabolaFunc1006->SetSavedPoint(5,0.09680346);
   ParabolaFunc1006->SetSavedPoint(6,0.09729927);
   ParabolaFunc1006->SetSavedPoint(7,0.09777421);
   ParabolaFunc1006->SetSavedPoint(8,0.0982283);
   ParabolaFunc1006->SetSavedPoint(9,0.09866152);
   ParabolaFunc1006->SetSavedPoint(10,0.09907389);
   ParabolaFunc1006->SetSavedPoint(11,0.0994654);
   ParabolaFunc1006->SetSavedPoint(12,0.09983604);
   ParabolaFunc1006->SetSavedPoint(13,0.1001858);
   ParabolaFunc1006->SetSavedPoint(14,0.1005148);
   ParabolaFunc1006->SetSavedPoint(15,0.1008228);
   ParabolaFunc1006->SetSavedPoint(16,0.10111);
   ParabolaFunc1006->SetSavedPoint(17,0.1013764);
   ParabolaFunc1006->SetSavedPoint(18,0.1016218);
   ParabolaFunc1006->SetSavedPoint(19,0.1018465);
   ParabolaFunc1006->SetSavedPoint(20,0.1020502);
   ParabolaFunc1006->SetSavedPoint(21,0.1022331);
   ParabolaFunc1006->SetSavedPoint(22,0.1023952);
   ParabolaFunc1006->SetSavedPoint(23,0.1025364);
   ParabolaFunc1006->SetSavedPoint(24,0.1026567);
   ParabolaFunc1006->SetSavedPoint(25,0.1027562);
   ParabolaFunc1006->SetSavedPoint(26,0.1028348);
   ParabolaFunc1006->SetSavedPoint(27,0.1028925);
   ParabolaFunc1006->SetSavedPoint(28,0.1029294);
   ParabolaFunc1006->SetSavedPoint(29,0.1029454);
   ParabolaFunc1006->SetSavedPoint(30,0.1029406);
   ParabolaFunc1006->SetSavedPoint(31,0.1029149);
   ParabolaFunc1006->SetSavedPoint(32,0.1028683);
   ParabolaFunc1006->SetSavedPoint(33,0.1028009);
   ParabolaFunc1006->SetSavedPoint(34,0.1027126);
   ParabolaFunc1006->SetSavedPoint(35,0.1026035);
   ParabolaFunc1006->SetSavedPoint(36,0.1024735);
   ParabolaFunc1006->SetSavedPoint(37,0.1023226);
   ParabolaFunc1006->SetSavedPoint(38,0.1021509);
   ParabolaFunc1006->SetSavedPoint(39,0.1019583);
   ParabolaFunc1006->SetSavedPoint(40,0.1017449);
   ParabolaFunc1006->SetSavedPoint(41,0.1015106);
   ParabolaFunc1006->SetSavedPoint(42,0.1012555);
   ParabolaFunc1006->SetSavedPoint(43,0.1009794);
   ParabolaFunc1006->SetSavedPoint(44,0.1006826);
   ParabolaFunc1006->SetSavedPoint(45,0.1003648);
   ParabolaFunc1006->SetSavedPoint(46,0.1000262);
   ParabolaFunc1006->SetSavedPoint(47,0.09966676);
   ParabolaFunc1006->SetSavedPoint(48,0.09928644);
   ParabolaFunc1006->SetSavedPoint(49,0.09888526);
   ParabolaFunc1006->SetSavedPoint(50,0.09846323);
   ParabolaFunc1006->SetSavedPoint(51,0.09802033);
   ParabolaFunc1006->SetSavedPoint(52,0.09755657);
   ParabolaFunc1006->SetSavedPoint(53,0.09707195);
   ParabolaFunc1006->SetSavedPoint(54,0.09656647);
   ParabolaFunc1006->SetSavedPoint(55,0.09604013);
   ParabolaFunc1006->SetSavedPoint(56,0.09549293);
   ParabolaFunc1006->SetSavedPoint(57,0.09492487);
   ParabolaFunc1006->SetSavedPoint(58,0.09433595);
   ParabolaFunc1006->SetSavedPoint(59,0.09372618);
   ParabolaFunc1006->SetSavedPoint(60,0.09309554);
   ParabolaFunc1006->SetSavedPoint(61,0.09244404);
   ParabolaFunc1006->SetSavedPoint(62,0.09177168);
   ParabolaFunc1006->SetSavedPoint(63,0.09107846);
   ParabolaFunc1006->SetSavedPoint(64,0.09036438);
   ParabolaFunc1006->SetSavedPoint(65,0.08962944);
   ParabolaFunc1006->SetSavedPoint(66,0.08887364);
   ParabolaFunc1006->SetSavedPoint(67,0.08809698);
   ParabolaFunc1006->SetSavedPoint(68,0.08729946);
   ParabolaFunc1006->SetSavedPoint(69,0.08648108);
   ParabolaFunc1006->SetSavedPoint(70,0.08564184);
   ParabolaFunc1006->SetSavedPoint(71,0.08478174);
   ParabolaFunc1006->SetSavedPoint(72,0.08390078);
   ParabolaFunc1006->SetSavedPoint(73,0.08299896);
   ParabolaFunc1006->SetSavedPoint(74,0.08207627);
   ParabolaFunc1006->SetSavedPoint(75,0.08113273);
   ParabolaFunc1006->SetSavedPoint(76,0.08016833);
   ParabolaFunc1006->SetSavedPoint(77,0.07918307);
   ParabolaFunc1006->SetSavedPoint(78,0.07817695);
   ParabolaFunc1006->SetSavedPoint(79,0.07714997);
   ParabolaFunc1006->SetSavedPoint(80,0.07610213);
   ParabolaFunc1006->SetSavedPoint(81,0.07503343);
   ParabolaFunc1006->SetSavedPoint(82,0.07394387);
   ParabolaFunc1006->SetSavedPoint(83,0.07283344);
   ParabolaFunc1006->SetSavedPoint(84,0.07170216);
   ParabolaFunc1006->SetSavedPoint(85,0.07055002);
   ParabolaFunc1006->SetSavedPoint(86,0.06937702);
   ParabolaFunc1006->SetSavedPoint(87,0.06818316);
   ParabolaFunc1006->SetSavedPoint(88,0.06696843);
   ParabolaFunc1006->SetSavedPoint(89,0.06573285);
   ParabolaFunc1006->SetSavedPoint(90,0.06447641);
   ParabolaFunc1006->SetSavedPoint(91,0.06319911);
   ParabolaFunc1006->SetSavedPoint(92,0.06190095);
   ParabolaFunc1006->SetSavedPoint(93,0.06058192);
   ParabolaFunc1006->SetSavedPoint(94,0.05924204);
   ParabolaFunc1006->SetSavedPoint(95,0.0578813);
   ParabolaFunc1006->SetSavedPoint(96,0.0564997);
   ParabolaFunc1006->SetSavedPoint(97,0.05509723);
   ParabolaFunc1006->SetSavedPoint(98,0.05367391);
   ParabolaFunc1006->SetSavedPoint(99,0.05222973);
   ParabolaFunc1006->SetSavedPoint(100,0.05076468);
   ParabolaFunc1006->SetSavedPoint(101,500);
   ParabolaFunc1006->SetSavedPoint(102,2500);
   ParabolaFunc1006->SetFillColor(19);
   ParabolaFunc1006->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1006->SetLineColor(ci);
   ParabolaFunc1006->SetLineWidth(3);
   ParabolaFunc1006->SetChisquare(0.5954424);
   ParabolaFunc1006->SetNDF(1);
   ParabolaFunc1006->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1006->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1006->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1006->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1006->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1006->SetParameter(0,-2.607512e-08);
   ParabolaFunc1006->SetParError(0,1.827961e-08);
   ParabolaFunc1006->SetParLimits(0,0,0);
   ParabolaFunc1006->SetParameter(1,5.660193e-05);
   ParabolaFunc1006->SetParError(1,5.465171e-05);
   ParabolaFunc1006->SetParLimits(1,0,0);
   ParabolaFunc1006->SetParameter(2,0.07222935);
   ParabolaFunc1006->SetParError(2,0.03929045);
   ParabolaFunc1006->SetParLimits(2,0,0);
   ParabolaFunc1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1006);
   gre->Draw("ap");
   
   Double_t trackTruth_fx1007[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackTruth_fy1007[6] = {
   0.05727441,
   0.09813952,
   0.0989713,
   0.09655939,
   0.06958416,
   0.05593239};
   Double_t trackTruth_fex1007[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackTruth_fey1007[6] = {
   0.02363909,
   0.007635712,
   0.006000499,
   0.005378821,
   0.005501608,
   0.006391947};
   gre = new TGraphErrors(6,trackTruth_fx1007,trackTruth_fy1007,trackTruth_fex1007,trackTruth_fey1007);
   gre->SetName("trackTruth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1007 = new TH1F("Graph_trackTruth1007","Graph",100,0,3300);
   Graph_trackTruth1007->SetMinimum(0.02642133);
   Graph_trackTruth1007->SetMaximum(0.1129892);
   Graph_trackTruth1007->SetDirectory(0);
   Graph_trackTruth1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1007->SetLineColor(ci);
   Graph_trackTruth1007->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1007->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1007->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1007->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1007);
   
   
   TF1 *ParabolaFunc1008 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1008->SetRange(500,2500);
   ParabolaFunc1008->SetName("ParabolaFunc");
   ParabolaFunc1008->SetTitle("ParabolaFunc");
   ParabolaFunc1008->SetSavedPoint(0,0.08994363);
   ParabolaFunc1008->SetSavedPoint(1,0.090602);
   ParabolaFunc1008->SetSavedPoint(2,0.09124038);
   ParabolaFunc1008->SetSavedPoint(3,0.09185876);
   ParabolaFunc1008->SetSavedPoint(4,0.09245714);
   ParabolaFunc1008->SetSavedPoint(5,0.09303552);
   ParabolaFunc1008->SetSavedPoint(6,0.09359391);
   ParabolaFunc1008->SetSavedPoint(7,0.0941323);
   ParabolaFunc1008->SetSavedPoint(8,0.09465069);
   ParabolaFunc1008->SetSavedPoint(9,0.09514908);
   ParabolaFunc1008->SetSavedPoint(10,0.09562748);
   ParabolaFunc1008->SetSavedPoint(11,0.09608588);
   ParabolaFunc1008->SetSavedPoint(12,0.09652428);
   ParabolaFunc1008->SetSavedPoint(13,0.09694269);
   ParabolaFunc1008->SetSavedPoint(14,0.0973411);
   ParabolaFunc1008->SetSavedPoint(15,0.09771951);
   ParabolaFunc1008->SetSavedPoint(16,0.09807792);
   ParabolaFunc1008->SetSavedPoint(17,0.09841633);
   ParabolaFunc1008->SetSavedPoint(18,0.09873475);
   ParabolaFunc1008->SetSavedPoint(19,0.09903317);
   ParabolaFunc1008->SetSavedPoint(20,0.0993116);
   ParabolaFunc1008->SetSavedPoint(21,0.09957002);
   ParabolaFunc1008->SetSavedPoint(22,0.09980845);
   ParabolaFunc1008->SetSavedPoint(23,0.1000269);
   ParabolaFunc1008->SetSavedPoint(24,0.1002253);
   ParabolaFunc1008->SetSavedPoint(25,0.1004038);
   ParabolaFunc1008->SetSavedPoint(26,0.1005622);
   ParabolaFunc1008->SetSavedPoint(27,0.1007006);
   ParabolaFunc1008->SetSavedPoint(28,0.1008191);
   ParabolaFunc1008->SetSavedPoint(29,0.1009175);
   ParabolaFunc1008->SetSavedPoint(30,0.100996);
   ParabolaFunc1008->SetSavedPoint(31,0.1010544);
   ParabolaFunc1008->SetSavedPoint(32,0.1010929);
   ParabolaFunc1008->SetSavedPoint(33,0.1011113);
   ParabolaFunc1008->SetSavedPoint(34,0.1011098);
   ParabolaFunc1008->SetSavedPoint(35,0.1010883);
   ParabolaFunc1008->SetSavedPoint(36,0.1010467);
   ParabolaFunc1008->SetSavedPoint(37,0.1009852);
   ParabolaFunc1008->SetSavedPoint(38,0.1009037);
   ParabolaFunc1008->SetSavedPoint(39,0.1008021);
   ParabolaFunc1008->SetSavedPoint(40,0.1006806);
   ParabolaFunc1008->SetSavedPoint(41,0.1005391);
   ParabolaFunc1008->SetSavedPoint(42,0.1003776);
   ParabolaFunc1008->SetSavedPoint(43,0.1001961);
   ParabolaFunc1008->SetSavedPoint(44,0.09999456);
   ParabolaFunc1008->SetSavedPoint(45,0.09977305);
   ParabolaFunc1008->SetSavedPoint(46,0.09953154);
   ParabolaFunc1008->SetSavedPoint(47,0.09927003);
   ParabolaFunc1008->SetSavedPoint(48,0.09898853);
   ParabolaFunc1008->SetSavedPoint(49,0.09868703);
   ParabolaFunc1008->SetSavedPoint(50,0.09836553);
   ParabolaFunc1008->SetSavedPoint(51,0.09802404);
   ParabolaFunc1008->SetSavedPoint(52,0.09766255);
   ParabolaFunc1008->SetSavedPoint(53,0.09728106);
   ParabolaFunc1008->SetSavedPoint(54,0.09687957);
   ParabolaFunc1008->SetSavedPoint(55,0.09645809);
   ParabolaFunc1008->SetSavedPoint(56,0.09601661);
   ParabolaFunc1008->SetSavedPoint(57,0.09555513);
   ParabolaFunc1008->SetSavedPoint(58,0.09507365);
   ParabolaFunc1008->SetSavedPoint(59,0.09457218);
   ParabolaFunc1008->SetSavedPoint(60,0.09405071);
   ParabolaFunc1008->SetSavedPoint(61,0.09350924);
   ParabolaFunc1008->SetSavedPoint(62,0.09294778);
   ParabolaFunc1008->SetSavedPoint(63,0.09236631);
   ParabolaFunc1008->SetSavedPoint(64,0.09176485);
   ParabolaFunc1008->SetSavedPoint(65,0.0911434);
   ParabolaFunc1008->SetSavedPoint(66,0.09050194);
   ParabolaFunc1008->SetSavedPoint(67,0.08984049);
   ParabolaFunc1008->SetSavedPoint(68,0.08915904);
   ParabolaFunc1008->SetSavedPoint(69,0.08845759);
   ParabolaFunc1008->SetSavedPoint(70,0.08773615);
   ParabolaFunc1008->SetSavedPoint(71,0.08699471);
   ParabolaFunc1008->SetSavedPoint(72,0.08623327);
   ParabolaFunc1008->SetSavedPoint(73,0.08545183);
   ParabolaFunc1008->SetSavedPoint(74,0.0846504);
   ParabolaFunc1008->SetSavedPoint(75,0.08382897);
   ParabolaFunc1008->SetSavedPoint(76,0.08298754);
   ParabolaFunc1008->SetSavedPoint(77,0.08212611);
   ParabolaFunc1008->SetSavedPoint(78,0.08124469);
   ParabolaFunc1008->SetSavedPoint(79,0.08034327);
   ParabolaFunc1008->SetSavedPoint(80,0.07942185);
   ParabolaFunc1008->SetSavedPoint(81,0.07848044);
   ParabolaFunc1008->SetSavedPoint(82,0.07751903);
   ParabolaFunc1008->SetSavedPoint(83,0.07653762);
   ParabolaFunc1008->SetSavedPoint(84,0.07553621);
   ParabolaFunc1008->SetSavedPoint(85,0.0745148);
   ParabolaFunc1008->SetSavedPoint(86,0.0734734);
   ParabolaFunc1008->SetSavedPoint(87,0.072412);
   ParabolaFunc1008->SetSavedPoint(88,0.07133061);
   ParabolaFunc1008->SetSavedPoint(89,0.07022921);
   ParabolaFunc1008->SetSavedPoint(90,0.06910782);
   ParabolaFunc1008->SetSavedPoint(91,0.06796643);
   ParabolaFunc1008->SetSavedPoint(92,0.06680505);
   ParabolaFunc1008->SetSavedPoint(93,0.06562366);
   ParabolaFunc1008->SetSavedPoint(94,0.06442228);
   ParabolaFunc1008->SetSavedPoint(95,0.0632009);
   ParabolaFunc1008->SetSavedPoint(96,0.06195953);
   ParabolaFunc1008->SetSavedPoint(97,0.06069816);
   ParabolaFunc1008->SetSavedPoint(98,0.05941679);
   ParabolaFunc1008->SetSavedPoint(99,0.05811542);
   ParabolaFunc1008->SetSavedPoint(100,0.05679405);
   ParabolaFunc1008->SetSavedPoint(101,500);
   ParabolaFunc1008->SetSavedPoint(102,2500);
   ParabolaFunc1008->SetFillColor(19);
   ParabolaFunc1008->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   ParabolaFunc1008->SetLineColor(ci);
   ParabolaFunc1008->SetLineWidth(3);
   ParabolaFunc1008->SetChisquare(0.3389924);
   ParabolaFunc1008->SetNDF(1);
   ParabolaFunc1008->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1008->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1008->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1008->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1008->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1008->SetParameter(0,-2.499669e-08);
   ParabolaFunc1008->SetParError(0,1.843545e-08);
   ParabolaFunc1008->SetParLimits(0,0,0);
   ParabolaFunc1008->SetParameter(1,5.841529e-05);
   ParabolaFunc1008->SetParError(1,5.623158e-05);
   ParabolaFunc1008->SetParLimits(1,0,0);
   ParabolaFunc1008->SetParameter(2,0.06698515);
   ParabolaFunc1008->SetParError(2,0.04086243);
   ParabolaFunc1008->SetParLimits(2,0,0);
   ParabolaFunc1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1008);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackReco","#bf{Tracked reco decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","#bf{Tracked truth decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   leg = new TLegend(0.26,0.2,0.71,0.49,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ParabolaFunc","#splitline{a = (-3#pm1)#times10^{-8} MeV^{-2}}{#splitline{b = (7#pm4)#times10^{-5} MeV^{-1}}{d_{0} = 0.06#pm0.03}}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("ParabolaFunc","#splitline{a = (-2#pm1)#times10^{-8} MeV^{-2}}{#splitline{b = (4#pm4)#times10^{-5} MeV^{-1}}{d_{0} = 0.08#pm0.03}}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.32,0.53,0.56,0.56,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(22);
   TText *pt_LaTex = pt->AddText("#bf{d_{EDM}(p)=ap^{2}+bp+d_{0}}");
   pt->Draw();
   
   TF1 *ParabolaFunc1009 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1009->SetRange(500,2500);
   ParabolaFunc1009->SetName("ParabolaFunc");
   ParabolaFunc1009->SetTitle("ParabolaFunc");
   ParabolaFunc1009->SetSavedPoint(0,0.09401153);
   ParabolaFunc1009->SetSavedPoint(1,0.09461164);
   ParabolaFunc1009->SetSavedPoint(2,0.09519088);
   ParabolaFunc1009->SetSavedPoint(3,0.09574927);
   ParabolaFunc1009->SetSavedPoint(4,0.0962868);
   ParabolaFunc1009->SetSavedPoint(5,0.09680346);
   ParabolaFunc1009->SetSavedPoint(6,0.09729927);
   ParabolaFunc1009->SetSavedPoint(7,0.09777421);
   ParabolaFunc1009->SetSavedPoint(8,0.0982283);
   ParabolaFunc1009->SetSavedPoint(9,0.09866152);
   ParabolaFunc1009->SetSavedPoint(10,0.09907389);
   ParabolaFunc1009->SetSavedPoint(11,0.0994654);
   ParabolaFunc1009->SetSavedPoint(12,0.09983604);
   ParabolaFunc1009->SetSavedPoint(13,0.1001858);
   ParabolaFunc1009->SetSavedPoint(14,0.1005148);
   ParabolaFunc1009->SetSavedPoint(15,0.1008228);
   ParabolaFunc1009->SetSavedPoint(16,0.10111);
   ParabolaFunc1009->SetSavedPoint(17,0.1013764);
   ParabolaFunc1009->SetSavedPoint(18,0.1016218);
   ParabolaFunc1009->SetSavedPoint(19,0.1018465);
   ParabolaFunc1009->SetSavedPoint(20,0.1020502);
   ParabolaFunc1009->SetSavedPoint(21,0.1022331);
   ParabolaFunc1009->SetSavedPoint(22,0.1023952);
   ParabolaFunc1009->SetSavedPoint(23,0.1025364);
   ParabolaFunc1009->SetSavedPoint(24,0.1026567);
   ParabolaFunc1009->SetSavedPoint(25,0.1027562);
   ParabolaFunc1009->SetSavedPoint(26,0.1028348);
   ParabolaFunc1009->SetSavedPoint(27,0.1028925);
   ParabolaFunc1009->SetSavedPoint(28,0.1029294);
   ParabolaFunc1009->SetSavedPoint(29,0.1029454);
   ParabolaFunc1009->SetSavedPoint(30,0.1029406);
   ParabolaFunc1009->SetSavedPoint(31,0.1029149);
   ParabolaFunc1009->SetSavedPoint(32,0.1028683);
   ParabolaFunc1009->SetSavedPoint(33,0.1028009);
   ParabolaFunc1009->SetSavedPoint(34,0.1027126);
   ParabolaFunc1009->SetSavedPoint(35,0.1026035);
   ParabolaFunc1009->SetSavedPoint(36,0.1024735);
   ParabolaFunc1009->SetSavedPoint(37,0.1023226);
   ParabolaFunc1009->SetSavedPoint(38,0.1021509);
   ParabolaFunc1009->SetSavedPoint(39,0.1019583);
   ParabolaFunc1009->SetSavedPoint(40,0.1017449);
   ParabolaFunc1009->SetSavedPoint(41,0.1015106);
   ParabolaFunc1009->SetSavedPoint(42,0.1012555);
   ParabolaFunc1009->SetSavedPoint(43,0.1009794);
   ParabolaFunc1009->SetSavedPoint(44,0.1006826);
   ParabolaFunc1009->SetSavedPoint(45,0.1003648);
   ParabolaFunc1009->SetSavedPoint(46,0.1000262);
   ParabolaFunc1009->SetSavedPoint(47,0.09966676);
   ParabolaFunc1009->SetSavedPoint(48,0.09928644);
   ParabolaFunc1009->SetSavedPoint(49,0.09888526);
   ParabolaFunc1009->SetSavedPoint(50,0.09846323);
   ParabolaFunc1009->SetSavedPoint(51,0.09802033);
   ParabolaFunc1009->SetSavedPoint(52,0.09755657);
   ParabolaFunc1009->SetSavedPoint(53,0.09707195);
   ParabolaFunc1009->SetSavedPoint(54,0.09656647);
   ParabolaFunc1009->SetSavedPoint(55,0.09604013);
   ParabolaFunc1009->SetSavedPoint(56,0.09549293);
   ParabolaFunc1009->SetSavedPoint(57,0.09492487);
   ParabolaFunc1009->SetSavedPoint(58,0.09433595);
   ParabolaFunc1009->SetSavedPoint(59,0.09372618);
   ParabolaFunc1009->SetSavedPoint(60,0.09309554);
   ParabolaFunc1009->SetSavedPoint(61,0.09244404);
   ParabolaFunc1009->SetSavedPoint(62,0.09177168);
   ParabolaFunc1009->SetSavedPoint(63,0.09107846);
   ParabolaFunc1009->SetSavedPoint(64,0.09036438);
   ParabolaFunc1009->SetSavedPoint(65,0.08962944);
   ParabolaFunc1009->SetSavedPoint(66,0.08887364);
   ParabolaFunc1009->SetSavedPoint(67,0.08809698);
   ParabolaFunc1009->SetSavedPoint(68,0.08729946);
   ParabolaFunc1009->SetSavedPoint(69,0.08648108);
   ParabolaFunc1009->SetSavedPoint(70,0.08564184);
   ParabolaFunc1009->SetSavedPoint(71,0.08478174);
   ParabolaFunc1009->SetSavedPoint(72,0.08390078);
   ParabolaFunc1009->SetSavedPoint(73,0.08299896);
   ParabolaFunc1009->SetSavedPoint(74,0.08207627);
   ParabolaFunc1009->SetSavedPoint(75,0.08113273);
   ParabolaFunc1009->SetSavedPoint(76,0.08016833);
   ParabolaFunc1009->SetSavedPoint(77,0.07918307);
   ParabolaFunc1009->SetSavedPoint(78,0.07817695);
   ParabolaFunc1009->SetSavedPoint(79,0.07714997);
   ParabolaFunc1009->SetSavedPoint(80,0.07610213);
   ParabolaFunc1009->SetSavedPoint(81,0.07503343);
   ParabolaFunc1009->SetSavedPoint(82,0.07394387);
   ParabolaFunc1009->SetSavedPoint(83,0.07283344);
   ParabolaFunc1009->SetSavedPoint(84,0.07170216);
   ParabolaFunc1009->SetSavedPoint(85,0.07055002);
   ParabolaFunc1009->SetSavedPoint(86,0.06937702);
   ParabolaFunc1009->SetSavedPoint(87,0.06818316);
   ParabolaFunc1009->SetSavedPoint(88,0.06696843);
   ParabolaFunc1009->SetSavedPoint(89,0.06573285);
   ParabolaFunc1009->SetSavedPoint(90,0.06447641);
   ParabolaFunc1009->SetSavedPoint(91,0.06319911);
   ParabolaFunc1009->SetSavedPoint(92,0.06190095);
   ParabolaFunc1009->SetSavedPoint(93,0.06058192);
   ParabolaFunc1009->SetSavedPoint(94,0.05924204);
   ParabolaFunc1009->SetSavedPoint(95,0.0578813);
   ParabolaFunc1009->SetSavedPoint(96,0.0564997);
   ParabolaFunc1009->SetSavedPoint(97,0.05509723);
   ParabolaFunc1009->SetSavedPoint(98,0.05367391);
   ParabolaFunc1009->SetSavedPoint(99,0.05222973);
   ParabolaFunc1009->SetSavedPoint(100,0.05076468);
   ParabolaFunc1009->SetSavedPoint(101,500);
   ParabolaFunc1009->SetSavedPoint(102,2500);
   ParabolaFunc1009->SetFillColor(19);
   ParabolaFunc1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1009->SetLineColor(ci);
   ParabolaFunc1009->SetLineWidth(3);
   ParabolaFunc1009->SetChisquare(0.5954424);
   ParabolaFunc1009->SetNDF(1);
   ParabolaFunc1009->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1009->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1009->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1009->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1009->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1009->SetParameter(0,-2.607512e-08);
   ParabolaFunc1009->SetParError(0,1.827961e-08);
   ParabolaFunc1009->SetParLimits(0,0,0);
   ParabolaFunc1009->SetParameter(1,5.660193e-05);
   ParabolaFunc1009->SetParError(1,5.465171e-05);
   ParabolaFunc1009->SetParLimits(1,0,0);
   ParabolaFunc1009->SetParameter(2,0.07222935);
   ParabolaFunc1009->SetParError(2,0.03929045);
   ParabolaFunc1009->SetParLimits(2,0,0);
   ParabolaFunc1009->Draw("same");
   
   TF1 *ParabolaFunc1010 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1010->SetRange(500,2500);
   ParabolaFunc1010->SetName("ParabolaFunc");
   ParabolaFunc1010->SetTitle("ParabolaFunc");
   ParabolaFunc1010->SetSavedPoint(0,0.08994363);
   ParabolaFunc1010->SetSavedPoint(1,0.090602);
   ParabolaFunc1010->SetSavedPoint(2,0.09124038);
   ParabolaFunc1010->SetSavedPoint(3,0.09185876);
   ParabolaFunc1010->SetSavedPoint(4,0.09245714);
   ParabolaFunc1010->SetSavedPoint(5,0.09303552);
   ParabolaFunc1010->SetSavedPoint(6,0.09359391);
   ParabolaFunc1010->SetSavedPoint(7,0.0941323);
   ParabolaFunc1010->SetSavedPoint(8,0.09465069);
   ParabolaFunc1010->SetSavedPoint(9,0.09514908);
   ParabolaFunc1010->SetSavedPoint(10,0.09562748);
   ParabolaFunc1010->SetSavedPoint(11,0.09608588);
   ParabolaFunc1010->SetSavedPoint(12,0.09652428);
   ParabolaFunc1010->SetSavedPoint(13,0.09694269);
   ParabolaFunc1010->SetSavedPoint(14,0.0973411);
   ParabolaFunc1010->SetSavedPoint(15,0.09771951);
   ParabolaFunc1010->SetSavedPoint(16,0.09807792);
   ParabolaFunc1010->SetSavedPoint(17,0.09841633);
   ParabolaFunc1010->SetSavedPoint(18,0.09873475);
   ParabolaFunc1010->SetSavedPoint(19,0.09903317);
   ParabolaFunc1010->SetSavedPoint(20,0.0993116);
   ParabolaFunc1010->SetSavedPoint(21,0.09957002);
   ParabolaFunc1010->SetSavedPoint(22,0.09980845);
   ParabolaFunc1010->SetSavedPoint(23,0.1000269);
   ParabolaFunc1010->SetSavedPoint(24,0.1002253);
   ParabolaFunc1010->SetSavedPoint(25,0.1004038);
   ParabolaFunc1010->SetSavedPoint(26,0.1005622);
   ParabolaFunc1010->SetSavedPoint(27,0.1007006);
   ParabolaFunc1010->SetSavedPoint(28,0.1008191);
   ParabolaFunc1010->SetSavedPoint(29,0.1009175);
   ParabolaFunc1010->SetSavedPoint(30,0.100996);
   ParabolaFunc1010->SetSavedPoint(31,0.1010544);
   ParabolaFunc1010->SetSavedPoint(32,0.1010929);
   ParabolaFunc1010->SetSavedPoint(33,0.1011113);
   ParabolaFunc1010->SetSavedPoint(34,0.1011098);
   ParabolaFunc1010->SetSavedPoint(35,0.1010883);
   ParabolaFunc1010->SetSavedPoint(36,0.1010467);
   ParabolaFunc1010->SetSavedPoint(37,0.1009852);
   ParabolaFunc1010->SetSavedPoint(38,0.1009037);
   ParabolaFunc1010->SetSavedPoint(39,0.1008021);
   ParabolaFunc1010->SetSavedPoint(40,0.1006806);
   ParabolaFunc1010->SetSavedPoint(41,0.1005391);
   ParabolaFunc1010->SetSavedPoint(42,0.1003776);
   ParabolaFunc1010->SetSavedPoint(43,0.1001961);
   ParabolaFunc1010->SetSavedPoint(44,0.09999456);
   ParabolaFunc1010->SetSavedPoint(45,0.09977305);
   ParabolaFunc1010->SetSavedPoint(46,0.09953154);
   ParabolaFunc1010->SetSavedPoint(47,0.09927003);
   ParabolaFunc1010->SetSavedPoint(48,0.09898853);
   ParabolaFunc1010->SetSavedPoint(49,0.09868703);
   ParabolaFunc1010->SetSavedPoint(50,0.09836553);
   ParabolaFunc1010->SetSavedPoint(51,0.09802404);
   ParabolaFunc1010->SetSavedPoint(52,0.09766255);
   ParabolaFunc1010->SetSavedPoint(53,0.09728106);
   ParabolaFunc1010->SetSavedPoint(54,0.09687957);
   ParabolaFunc1010->SetSavedPoint(55,0.09645809);
   ParabolaFunc1010->SetSavedPoint(56,0.09601661);
   ParabolaFunc1010->SetSavedPoint(57,0.09555513);
   ParabolaFunc1010->SetSavedPoint(58,0.09507365);
   ParabolaFunc1010->SetSavedPoint(59,0.09457218);
   ParabolaFunc1010->SetSavedPoint(60,0.09405071);
   ParabolaFunc1010->SetSavedPoint(61,0.09350924);
   ParabolaFunc1010->SetSavedPoint(62,0.09294778);
   ParabolaFunc1010->SetSavedPoint(63,0.09236631);
   ParabolaFunc1010->SetSavedPoint(64,0.09176485);
   ParabolaFunc1010->SetSavedPoint(65,0.0911434);
   ParabolaFunc1010->SetSavedPoint(66,0.09050194);
   ParabolaFunc1010->SetSavedPoint(67,0.08984049);
   ParabolaFunc1010->SetSavedPoint(68,0.08915904);
   ParabolaFunc1010->SetSavedPoint(69,0.08845759);
   ParabolaFunc1010->SetSavedPoint(70,0.08773615);
   ParabolaFunc1010->SetSavedPoint(71,0.08699471);
   ParabolaFunc1010->SetSavedPoint(72,0.08623327);
   ParabolaFunc1010->SetSavedPoint(73,0.08545183);
   ParabolaFunc1010->SetSavedPoint(74,0.0846504);
   ParabolaFunc1010->SetSavedPoint(75,0.08382897);
   ParabolaFunc1010->SetSavedPoint(76,0.08298754);
   ParabolaFunc1010->SetSavedPoint(77,0.08212611);
   ParabolaFunc1010->SetSavedPoint(78,0.08124469);
   ParabolaFunc1010->SetSavedPoint(79,0.08034327);
   ParabolaFunc1010->SetSavedPoint(80,0.07942185);
   ParabolaFunc1010->SetSavedPoint(81,0.07848044);
   ParabolaFunc1010->SetSavedPoint(82,0.07751903);
   ParabolaFunc1010->SetSavedPoint(83,0.07653762);
   ParabolaFunc1010->SetSavedPoint(84,0.07553621);
   ParabolaFunc1010->SetSavedPoint(85,0.0745148);
   ParabolaFunc1010->SetSavedPoint(86,0.0734734);
   ParabolaFunc1010->SetSavedPoint(87,0.072412);
   ParabolaFunc1010->SetSavedPoint(88,0.07133061);
   ParabolaFunc1010->SetSavedPoint(89,0.07022921);
   ParabolaFunc1010->SetSavedPoint(90,0.06910782);
   ParabolaFunc1010->SetSavedPoint(91,0.06796643);
   ParabolaFunc1010->SetSavedPoint(92,0.06680505);
   ParabolaFunc1010->SetSavedPoint(93,0.06562366);
   ParabolaFunc1010->SetSavedPoint(94,0.06442228);
   ParabolaFunc1010->SetSavedPoint(95,0.0632009);
   ParabolaFunc1010->SetSavedPoint(96,0.06195953);
   ParabolaFunc1010->SetSavedPoint(97,0.06069816);
   ParabolaFunc1010->SetSavedPoint(98,0.05941679);
   ParabolaFunc1010->SetSavedPoint(99,0.05811542);
   ParabolaFunc1010->SetSavedPoint(100,0.05679405);
   ParabolaFunc1010->SetSavedPoint(101,500);
   ParabolaFunc1010->SetSavedPoint(102,2500);
   ParabolaFunc1010->SetFillColor(19);
   ParabolaFunc1010->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   ParabolaFunc1010->SetLineColor(ci);
   ParabolaFunc1010->SetLineWidth(3);
   ParabolaFunc1010->SetChisquare(0.3389924);
   ParabolaFunc1010->SetNDF(1);
   ParabolaFunc1010->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1010->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1010->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1010->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1010->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1010->SetParameter(0,-2.499669e-08);
   ParabolaFunc1010->SetParError(0,1.843545e-08);
   ParabolaFunc1010->SetParLimits(0,0,0);
   ParabolaFunc1010->SetParameter(1,5.841529e-05);
   ParabolaFunc1010->SetParError(1,5.623158e-05);
   ParabolaFunc1010->SetParLimits(1,0,0);
   ParabolaFunc1010->SetParameter(2,0.06698515);
   ParabolaFunc1010->SetParError(2,0.04086243);
   ParabolaFunc1010->SetParLimits(2,0,0);
   ParabolaFunc1010->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
