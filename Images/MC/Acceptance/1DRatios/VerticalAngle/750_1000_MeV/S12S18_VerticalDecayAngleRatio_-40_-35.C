void S12S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(0,0,1,1);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-125,-0.06651221,125,1.263732);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__642 = new TH1D("S12S18_ThetaY_mI40_mI35__642","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(314,0.05172414);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(315,0.3793103);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(316,1);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(317,0.7758621);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(318,0.7241379);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(319,0.5517241);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(320,0.8965517);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(321,0.8103448);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(322,0.7068966);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(323,0.637931);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(324,0.4827586);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(325,0.2931034);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(326,0.1034483);
   S12S18_ThetaY_mI40_mI35__642->SetBinContent(327,0.03448276);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(314,0.02986294);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(315,0.08086924);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(316,0.1313064);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(317,0.1156587);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(318,0.1117369);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(319,0.09753197);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(320,0.1243294);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(321,0.1182009);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(322,0.1103987);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(323,0.1048752);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(324,0.0912328);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(325,0.07108803);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(326,0.04223258);
   S12S18_ThetaY_mI40_mI35__642->SetBinError(327,0.02438299);
   S12S18_ThetaY_mI40_mI35__642->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__642->SetMaximum(1.130708);
   S12S18_ThetaY_mI40_mI35__642->SetEntries(432);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__642->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__642->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__642->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__642->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__642->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__642->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__642->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__642->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__642->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__642->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__642->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__642->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__642->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__642->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__642->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__642->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__643 = new TH1D("ThetaY_mI40_mI35__643","",630,-1575,1575);
   ThetaY_mI40_mI35__643->SetBinContent(303,0.0005527916);
   ThetaY_mI40_mI35__643->SetBinContent(304,0.05500276);
   ThetaY_mI40_mI35__643->SetBinContent(305,0.2459923);
   ThetaY_mI40_mI35__643->SetBinContent(306,0.5127142);
   ThetaY_mI40_mI35__643->SetBinContent(307,0.7092316);
   ThetaY_mI40_mI35__643->SetBinContent(308,0.8427308);
   ThetaY_mI40_mI35__643->SetBinContent(309,0.8888889);
   ThetaY_mI40_mI35__643->SetBinContent(310,0.9668325);
   ThetaY_mI40_mI35__643->SetBinContent(311,1.000276);
   ThetaY_mI40_mI35__643->SetBinContent(312,1.001935);
   ThetaY_mI40_mI35__643->SetBinContent(313,1.013543);
   ThetaY_mI40_mI35__643->SetBinContent(314,1.021559);
   ThetaY_mI40_mI35__643->SetBinContent(315,0.9997236);
   ThetaY_mI40_mI35__643->SetBinContent(316,1);
   ThetaY_mI40_mI35__643->SetBinContent(317,1.011332);
   ThetaY_mI40_mI35__643->SetBinContent(318,1.027916);
   ThetaY_mI40_mI35__643->SetBinContent(319,1.024046);
   ThetaY_mI40_mI35__643->SetBinContent(320,0.9878386);
   ThetaY_mI40_mI35__643->SetBinContent(321,0.9776119);
   ThetaY_mI40_mI35__643->SetBinContent(322,0.9262023);
   ThetaY_mI40_mI35__643->SetBinContent(323,0.8349917);
   ThetaY_mI40_mI35__643->SetBinContent(324,0.7200111);
   ThetaY_mI40_mI35__643->SetBinContent(325,0.5320619);
   ThetaY_mI40_mI35__643->SetBinContent(326,0.2482034);
   ThetaY_mI40_mI35__643->SetBinContent(327,0.05472637);
   ThetaY_mI40_mI35__643->SetBinContent(328,0.0005527916);
   ThetaY_mI40_mI35__643->SetBinError(303,0.0003908827);
   ThetaY_mI40_mI35__643->SetBinError(304,0.003899043);
   ThetaY_mI40_mI35__643->SetBinError(305,0.008245679);
   ThetaY_mI40_mI35__643->SetBinError(306,0.01190429);
   ThetaY_mI40_mI35__643->SetBinError(307,0.01400102);
   ThetaY_mI40_mI35__643->SetBinError(308,0.01526195);
   ThetaY_mI40_mI35__643->SetBinError(309,0.01567435);
   ThetaY_mI40_mI35__643->SetBinError(310,0.01634712);
   ThetaY_mI40_mI35__643->SetBinError(311,0.01662745);
   ThetaY_mI40_mI35__643->SetBinError(312,0.01664123);
   ThetaY_mI40_mI35__643->SetBinError(313,0.01673736);
   ThetaY_mI40_mI35__643->SetBinError(314,0.01680341);
   ThetaY_mI40_mI35__643->SetBinError(315,0.01662286);
   ThetaY_mI40_mI35__643->SetBinError(316,0.01662516);
   ThetaY_mI40_mI35__643->SetBinError(317,0.01671909);
   ThetaY_mI40_mI35__643->SetBinError(318,0.01685561);
   ThetaY_mI40_mI35__643->SetBinError(319,0.01682386);
   ThetaY_mI40_mI35__643->SetBinError(320,0.01652375);
   ThetaY_mI40_mI35__643->SetBinError(321,0.016438);
   ThetaY_mI40_mI35__643->SetBinError(322,0.01599995);
   ThetaY_mI40_mI35__643->SetBinError(323,0.01519171);
   ThetaY_mI40_mI35__643->SetBinError(324,0.01410702);
   ThetaY_mI40_mI35__643->SetBinError(325,0.01212682);
   ThetaY_mI40_mI35__643->SetBinError(326,0.008282656);
   ThetaY_mI40_mI35__643->SetBinError(327,0.003889234);
   ThetaY_mI40_mI35__643->SetBinError(328,0.0003908827);
   ThetaY_mI40_mI35__643->SetEntries(67311);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__643->SetLineColor(ci);
   ThetaY_mI40_mI35__643->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__643->SetMarkerColor(ci);
   ThetaY_mI40_mI35__643->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__643->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__643->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__643->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__643->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__643->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__643->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__643->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__643->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__643->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__643->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__643->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__643->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__643->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__643->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__643->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__643->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-125,-0.6923077,125,1.615385);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3215[26] = {
   -62.5,
   -57.5,
   -52.5,
   -47.5,
   -42.5,
   -37.5,
   -32.5,
   -27.5,
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3215[26] = {
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
   0.05063256,
   0.3794152,
   1,
   0.7671683,
   0.7044719,
   0.5387687,
   0.9075893,
   0.8289023,
   0.7632204,
   0.7639968,
   0.6704878,
   0.5508822,
   0.4167883,
   0.630094,
   0};
   Double_t _felx3215[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3215[26] = {
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
   0.02756422,
   0.08050564,
   0.1319545,
   0.1146196,
   0.1088635,
   0.09513754,
   0.1263463,
   0.1212575,
   0.1194139,
   0.1257736,
   0.1266013,
   0.1328336,
   0.1657933,
   0.4082655,
   0};
   Double_t _fehx3215[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3215[26] = {
   94.22847,
   0.5797715,
   0.1291691,
   0.06193998,
   0.04477119,
   0.03767673,
   0.03571969,
   0.0328393,
   0.03174105,
   0.0316885,
   0.03132547,
   0.04929117,
   0.09974237,
   0.1506743,
   0.1332097,
   0.1271781,
   0.1136599,
   0.1453326,
   0.1404813,
   0.1397806,
   0.1484548,
   0.1531653,
   0.1695972,
   0.2502649,
   0.8408078,
   94.22847};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3215,_fy3215,_felx3215,_fehx3215,_fely3215,_fehy3215);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3215 = new TH1F("Graph_Graph3215","",100,-100,100);
   Graph_Graph3215->SetMinimum(0);
   Graph_Graph3215->SetMaximum(1.5);
   Graph_Graph3215->SetDirectory(0);
   Graph_Graph3215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3215->SetLineColor(ci);
   Graph_Graph3215->GetXaxis()->SetRange(1,100);
   Graph_Graph3215->GetXaxis()->CenterTitle(true);
   Graph_Graph3215->GetXaxis()->SetLabelFont(42);
   Graph_Graph3215->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3215->GetXaxis()->SetTitleFont(42);
   Graph_Graph3215->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3215->GetYaxis()->CenterTitle(true);
   Graph_Graph3215->GetYaxis()->SetLabelFont(42);
   Graph_Graph3215->GetYaxis()->SetTitleFont(42);
   Graph_Graph3215->GetZaxis()->SetLabelFont(42);
   Graph_Graph3215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3215->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3215);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-100,0.7,100,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1,100,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1.3,100,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-100,100,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.130708,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Normalised entries");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-100,100,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("#theta_{y} [mrad]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.5,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Ratio");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   p1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0.69,0.69,0.99,0.99);
   p2->Draw();
   p2->cd();
   p2->Range(0,0,1,1);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetFrameBorderMode(0);
   
   TH2D *ThetaY_vs_Y_mI40_mI35__644 = new TH2D("ThetaY_vs_Y_mI40_mI35__644","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(7883,2);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(7909,199);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(7935,890);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(7961,1855);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(7987,2566);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8013,3049);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8039,3216);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8065,3498);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8091,3619);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8117,3625);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8143,3667);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8169,3696);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8195,3617);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8221,3618);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8247,3659);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8273,3719);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8299,3705);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8325,3574);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8351,3537);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8377,3351);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8403,3021);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8429,2605);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8455,1925);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8481,898);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8507,198);
   ThetaY_vs_Y_mI40_mI35__644->SetBinContent(8533,2);
   ThetaY_vs_Y_mI40_mI35__644->SetEntries(67311);
   ThetaY_vs_Y_mI40_mI35__644->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(1,185.95);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(2,371.9);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(3,557.85);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(4,743.8);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(5,929.75);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(6,1115.7);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(7,1301.65);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(8,1487.6);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(9,1673.55);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(10,1859.5);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(11,2045.45);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(12,2231.4);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(13,2417.35);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(14,2603.3);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(15,2789.25);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(16,2975.2);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(17,3161.15);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(18,3347.1);
   ThetaY_vs_Y_mI40_mI35__644->SetContourLevel(19,3533.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__644->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__644->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__644->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__644->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__644->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__644->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__644->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__644->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__644->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__644->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__644->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__644->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__644->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__644->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__644->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__644->Draw("COL");
   p2->Modified();
   c->cd();
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-40_-35","Reco vertices","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
