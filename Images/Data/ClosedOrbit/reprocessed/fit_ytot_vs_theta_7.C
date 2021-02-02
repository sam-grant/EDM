void fit_ytot_vs_theta_7()
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
   
   Double_t ytot_vs_theta_fx1025[24] = {
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
   Double_t ytot_vs_theta_fy1025[24] = {
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
   Double_t ytot_vs_theta_fex1025[24] = {
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
   Double_t ytot_vs_theta_fey1025[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,ytot_vs_theta_fx1025,ytot_vs_theta_fy1025,ytot_vs_theta_fex1025,ytot_vs_theta_fey1025);
   gre->SetName("ytot_vs_theta");
   gre->SetTitle(";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->SetMinimum(-0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->SetMaximum(0.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->SetTitle("#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_ytot_vs_theta10041007101010131016101910221025);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 15.73 / 9");
   ptstats_LaTex = ptstats->AddText("p0       = 0.002202 #pm 0.003144 ");
   ptstats_LaTex = ptstats->AddText("p1       = -0.9839 #pm 0.4124 ");
   ptstats_LaTex = ptstats->AddText("p2       = 1.603 #pm 0.4204 ");
   ptstats_LaTex = ptstats->AddText("p3       = -2.902 #pm 7.775 ");
   ptstats_LaTex = ptstats->AddText("p4       = -8.095 #pm 7.717 ");
   ptstats_LaTex = ptstats->AddText("p5       = 1.563 #pm  40.3 ");
   ptstats_LaTex = ptstats->AddText("p6       = 120.4 #pm 40.23 ");
   ptstats_LaTex = ptstats->AddText("p7       = -86.27 #pm 128.9 ");
   ptstats_LaTex = ptstats->AddText("p8       = 293.1 #pm 127.7 ");
   ptstats_LaTex = ptstats->AddText("p9       = -188.4 #pm   315 ");
   ptstats_LaTex = ptstats->AddText("p10      = -39.63 #pm 314.2 ");
   ptstats_LaTex = ptstats->AddText("p11      = 535.5 #pm 650.5 ");
   ptstats_LaTex = ptstats->AddText("p12      = 307.5 #pm 656.6 ");
   ptstats_LaTex = ptstats->AddText("p13      = 26.28 #pm  1212 ");
   ptstats_LaTex = ptstats->AddText("p14      = 211.9 #pm  1211 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fVCOD_71027 = new TF1("*fVCOD_7",0.2574361,6.278822,15);
    //The original function : fVCOD_7 had originally been created by:
    //TF1 *fVCOD_7 = new TF1("fVCOD_7",fVCOD_7,0.2574361,6.278822,15, 1, TF1::EAddToList::kNo);
   fVCOD_71027->SetRange(0.2574361,6.278822);
   fVCOD_71027->SetName("fVCOD_7");
   fVCOD_71027->SetTitle("fVCOD_7");
   fVCOD_71027->SetSavedPoint(0,0.02901483);
   fVCOD_71027->SetSavedPoint(1,0.03751282);
   fVCOD_71027->SetSavedPoint(2,0.04349875);
   fVCOD_71027->SetSavedPoint(3,0.04714585);
   fVCOD_71027->SetSavedPoint(4,0.04874498);
   fVCOD_71027->SetSavedPoint(5,0.04863948);
   fVCOD_71027->SetSavedPoint(6,0.04716421);
   fVCOD_71027->SetSavedPoint(7,0.0445985);
   fVCOD_71027->SetSavedPoint(8,0.04114007);
   fVCOD_71027->SetSavedPoint(9,0.03690316);
   fVCOD_71027->SetSavedPoint(10,0.03193996);
   fVCOD_71027->SetSavedPoint(11,0.02628039);
   fVCOD_71027->SetSavedPoint(12,0.01998167);
   fVCOD_71027->SetSavedPoint(13,0.01317791);
   fVCOD_71027->SetSavedPoint(14,0.006118909);
   fVCOD_71027->SetSavedPoint(15,-0.0008103817);
   fVCOD_71027->SetSavedPoint(16,-0.007095852);
   fVCOD_71027->SetSavedPoint(17,-0.01212739);
   fVCOD_71027->SetSavedPoint(18,-0.0152566);
   fVCOD_71027->SetSavedPoint(19,-0.01587217);
   fVCOD_71027->SetSavedPoint(20,-0.01348281);
   fVCOD_71027->SetSavedPoint(21,-0.007795719);
   fVCOD_71027->SetSavedPoint(22,0.001221302);
   fVCOD_71027->SetSavedPoint(23,0.01330441);
   fVCOD_71027->SetSavedPoint(24,0.0278918);
   fVCOD_71027->SetSavedPoint(25,0.04415775);
   fVCOD_71027->SetSavedPoint(26,0.06108012);
   fVCOD_71027->SetSavedPoint(27,0.07753429);
   fVCOD_71027->SetSavedPoint(28,0.09240251);
   fVCOD_71027->SetSavedPoint(29,0.1046857);
   fVCOD_71027->SetSavedPoint(30,0.1136038);
   fVCOD_71027->SetSavedPoint(31,0.1186728);
   fVCOD_71027->SetSavedPoint(32,0.1197484);
   fVCOD_71027->SetSavedPoint(33,0.1170324);
   fVCOD_71027->SetSavedPoint(34,0.11104);
   fVCOD_71027->SetSavedPoint(35,0.1025341);
   fVCOD_71027->SetSavedPoint(36,0.09243399);
   fVCOD_71027->SetSavedPoint(37,0.08171084);
   fVCOD_71027->SetSavedPoint(38,0.07128182);
   fVCOD_71027->SetSavedPoint(39,0.06191613);
   fVCOD_71027->SetSavedPoint(40,0.05416288);
   fVCOD_71027->SetSavedPoint(41,0.04830816);
   fVCOD_71027->SetSavedPoint(42,0.04436484);
   fVCOD_71027->SetSavedPoint(43,0.04209423);
   fVCOD_71027->SetSavedPoint(44,0.04105505);
   fVCOD_71027->SetSavedPoint(45,0.04067225);
   fVCOD_71027->SetSavedPoint(46,0.04031641);
   fVCOD_71027->SetSavedPoint(47,0.03938364);
   fVCOD_71027->SetSavedPoint(48,0.03736699);
   fVCOD_71027->SetSavedPoint(49,0.03391172);
   fVCOD_71027->SetSavedPoint(50,0.0288495);
   fVCOD_71027->SetSavedPoint(51,0.02220945);
   fVCOD_71027->SetSavedPoint(52,0.01420644);
   fVCOD_71027->SetSavedPoint(53,0.005210101);
   fVCOD_71027->SetSavedPoint(54,-0.004300813);
   fVCOD_71027->SetSavedPoint(55,-0.01379241);
   fVCOD_71027->SetSavedPoint(56,-0.02273175);
   fVCOD_71027->SetSavedPoint(57,-0.03063889);
   fVCOD_71027->SetSavedPoint(58,-0.03713009);
   fVCOD_71027->SetSavedPoint(59,-0.04194824);
   fVCOD_71027->SetSavedPoint(60,-0.04497862);
   fVCOD_71027->SetSavedPoint(61,-0.04624944);
   fVCOD_71027->SetSavedPoint(62,-0.04591816);
   fVCOD_71027->SetSavedPoint(63,-0.04424579);
   fVCOD_71027->SetSavedPoint(64,-0.04156258);
   fVCOD_71027->SetSavedPoint(65,-0.03822889);
   fVCOD_71027->SetSavedPoint(66,-0.03459549);
   fVCOD_71027->SetSavedPoint(67,-0.03096762);
   fVCOD_71027->SetSavedPoint(68,-0.02757644);
   fVCOD_71027->SetSavedPoint(69,-0.02456112);
   fVCOD_71027->SetSavedPoint(70,-0.02196361);
   fVCOD_71027->SetSavedPoint(71,-0.01973668);
   fVCOD_71027->SetSavedPoint(72,-0.01776464);
   fVCOD_71027->SetSavedPoint(73,-0.01589437);
   fVCOD_71027->SetSavedPoint(74,-0.01397297);
   fVCOD_71027->SetSavedPoint(75,-0.01188721);
   fVCOD_71027->SetSavedPoint(76,-0.009599355);
   fVCOD_71027->SetSavedPoint(77,-0.007173884);
   fVCOD_71027->SetSavedPoint(78,-0.004790436);
   fVCOD_71027->SetSavedPoint(79,-0.002739585);
   fVCOD_71027->SetSavedPoint(80,-0.00140026);
   fVCOD_71027->SetSavedPoint(81,-0.001199892);
   fVCOD_71027->SetSavedPoint(82,-0.002560981);
   fVCOD_71027->SetSavedPoint(83,-0.005839974);
   fVCOD_71027->SetSavedPoint(84,-0.01126604);
   fVCOD_71027->SetSavedPoint(85,-0.01888806);
   fVCOD_71027->SetSavedPoint(86,-0.02853779);
   fVCOD_71027->SetSavedPoint(87,-0.03981572);
   fVCOD_71027->SetSavedPoint(88,-0.05210364);
   fVCOD_71027->SetSavedPoint(89,-0.06460459);
   fVCOD_71027->SetSavedPoint(90,-0.07640738);
   fVCOD_71027->SetSavedPoint(91,-0.08656943);
   fVCOD_71027->SetSavedPoint(92,-0.09420881);
   fVCOD_71027->SetSavedPoint(93,-0.0985948);
   fVCOD_71027->SetSavedPoint(94,-0.09922586);
   fVCOD_71027->SetSavedPoint(95,-0.09588528);
   fVCOD_71027->SetSavedPoint(96,-0.08866707);
   fVCOD_71027->SetSavedPoint(97,-0.07796865);
   fVCOD_71027->SetSavedPoint(98,-0.06445085);
   fVCOD_71027->SetSavedPoint(99,-0.04897008);
   fVCOD_71027->SetSavedPoint(100,-0.03249127);
   fVCOD_71027->SetSavedPoint(101,0.2574361);
   fVCOD_71027->SetSavedPoint(102,6.278822);
   fVCOD_71027->SetFillColor(19);
   fVCOD_71027->SetFillStyle(0);
   fVCOD_71027->SetLineColor(2);
   fVCOD_71027->SetLineWidth(2);
   fVCOD_71027->SetChisquare(15.72878);
   fVCOD_71027->SetNDF(9);
   fVCOD_71027->GetXaxis()->SetLabelFont(42);
   fVCOD_71027->GetXaxis()->SetTitleOffset(1);
   fVCOD_71027->GetXaxis()->SetTitleFont(42);
   fVCOD_71027->GetYaxis()->SetLabelFont(42);
   fVCOD_71027->GetYaxis()->SetTitleFont(42);
   fVCOD_71027->SetParameter(0,0.002201948);
   fVCOD_71027->SetParError(0,0.003143785);
   fVCOD_71027->SetParLimits(0,0,0);
   fVCOD_71027->SetParameter(1,-0.9838788);
   fVCOD_71027->SetParError(1,0.412418);
   fVCOD_71027->SetParLimits(1,0,0);
   fVCOD_71027->SetParameter(2,1.603066);
   fVCOD_71027->SetParError(2,0.4203666);
   fVCOD_71027->SetParLimits(2,0,0);
   fVCOD_71027->SetParameter(3,-2.901673);
   fVCOD_71027->SetParError(3,7.774979);
   fVCOD_71027->SetParLimits(3,0,0);
   fVCOD_71027->SetParameter(4,-8.095282);
   fVCOD_71027->SetParError(4,7.716764);
   fVCOD_71027->SetParLimits(4,0,0);
   fVCOD_71027->SetParameter(5,1.562819);
   fVCOD_71027->SetParError(5,40.30408);
   fVCOD_71027->SetParLimits(5,0,0);
   fVCOD_71027->SetParameter(6,120.4242);
   fVCOD_71027->SetParError(6,40.22997);
   fVCOD_71027->SetParLimits(6,0,0);
   fVCOD_71027->SetParameter(7,-86.27031);
   fVCOD_71027->SetParError(7,128.9422);
   fVCOD_71027->SetParLimits(7,0,0);
   fVCOD_71027->SetParameter(8,293.1036);
   fVCOD_71027->SetParError(8,127.6511);
   fVCOD_71027->SetParLimits(8,0,0);
   fVCOD_71027->SetParameter(9,-188.3602);
   fVCOD_71027->SetParError(9,314.9631);
   fVCOD_71027->SetParLimits(9,0,0);
   fVCOD_71027->SetParameter(10,-39.63305);
   fVCOD_71027->SetParError(10,314.1702);
   fVCOD_71027->SetParLimits(10,0,0);
   fVCOD_71027->SetParameter(11,535.4966);
   fVCOD_71027->SetParError(11,650.5033);
   fVCOD_71027->SetParLimits(11,0,0);
   fVCOD_71027->SetParameter(12,307.4988);
   fVCOD_71027->SetParError(12,656.5973);
   fVCOD_71027->SetParLimits(12,0,0);
   fVCOD_71027->SetParameter(13,26.27562);
   fVCOD_71027->SetParError(13,1211.537);
   fVCOD_71027->SetParLimits(13,0,0);
   fVCOD_71027->SetParameter(14,211.9359);
   fVCOD_71027->SetParError(14,1211.07);
   fVCOD_71027->SetParLimits(14,0,0);
   fVCOD_71027->SetParent(gre);
   gre->GetListOfFunctions()->Add(fVCOD_71027);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
