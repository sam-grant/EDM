void S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06575801,125,1.249402);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__792 = new TH1D("S18_ThetaY_20_25__792","",630,-1575,1575);
   S18_ThetaY_20_25__792->SetBinContent(306,0.01910828);
   S18_ThetaY_20_25__792->SetBinContent(307,0.2165605);
   S18_ThetaY_20_25__792->SetBinContent(308,0.477707);
   S18_ThetaY_20_25__792->SetBinContent(309,0.6242038);
   S18_ThetaY_20_25__792->SetBinContent(310,0.7898089);
   S18_ThetaY_20_25__792->SetBinContent(311,0.866242);
   S18_ThetaY_20_25__792->SetBinContent(312,0.8726115);
   S18_ThetaY_20_25__792->SetBinContent(313,0.910828);
   S18_ThetaY_20_25__792->SetBinContent(314,1);
   S18_ThetaY_20_25__792->SetBinContent(315,0.9044586);
   S18_ThetaY_20_25__792->SetBinContent(316,0.9171975);
   S18_ThetaY_20_25__792->SetBinContent(317,0.8089172);
   S18_ThetaY_20_25__792->SetBinContent(318,0.4585987);
   S18_ThetaY_20_25__792->SetBinContent(319,0.03184713);
   S18_ThetaY_20_25__792->SetBinError(306,0.01103217);
   S18_ThetaY_20_25__792->SetBinError(307,0.03713982);
   S18_ThetaY_20_25__792->SetBinError(308,0.05516085);
   S18_ThetaY_20_25__792->SetBinError(309,0.06305411);
   S18_ThetaY_20_25__792->SetBinError(310,0.07092693);
   S18_ThetaY_20_25__792->SetBinError(311,0.07427964);
   S18_ThetaY_20_25__792->SetBinError(312,0.07455223);
   S18_ThetaY_20_25__792->SetBinError(313,0.07616727);
   S18_ThetaY_20_25__792->SetBinError(314,0.07980869);
   S18_ThetaY_20_25__792->SetBinError(315,0.07590048);
   S18_ThetaY_20_25__792->SetBinError(316,0.07643312);
   S18_ThetaY_20_25__792->SetBinError(317,0.07177979);
   S18_ThetaY_20_25__792->SetBinError(318,0.05404638);
   S18_ThetaY_20_25__792->SetBinError(319,0.01424247);
   S18_ThetaY_20_25__792->SetMinimum(0);
   S18_ThetaY_20_25__792->SetMaximum(1.117886);
   S18_ThetaY_20_25__792->SetEntries(1397);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__792->SetLineColor(ci);
   S18_ThetaY_20_25__792->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__792->SetMarkerColor(ci);
   S18_ThetaY_20_25__792->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__792->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__792->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__792->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__792->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__792->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__792->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__792->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__792->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__792->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__792->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__792->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__792->Draw("AE");
   
   TH1D *ThetaY_20_25__793 = new TH1D("ThetaY_20_25__793","",630,-1575,1575);
   ThetaY_20_25__793->SetBinContent(305,4.839334e-05);
   ThetaY_20_25__793->SetBinContent(306,0.05032907);
   ThetaY_20_25__793->SetBinContent(307,0.296264);
   ThetaY_20_25__793->SetBinContent(308,0.5695412);
   ThetaY_20_25__793->SetBinContent(309,0.7439508);
   ThetaY_20_25__793->SetBinContent(310,0.8608208);
   ThetaY_20_25__793->SetBinContent(311,0.9365079);
   ThetaY_20_25__793->SetBinContent(312,0.9656407);
   ThetaY_20_25__793->SetBinContent(313,0.988676);
   ThetaY_20_25__793->SetBinContent(314,1);
   ThetaY_20_25__793->SetBinContent(315,1.01626);
   ThetaY_20_25__793->SetBinContent(316,1.004694);
   ThetaY_20_25__793->SetBinContent(317,0.9996612);
   ThetaY_20_25__793->SetBinContent(318,0.985724);
   ThetaY_20_25__793->SetBinContent(319,0.9627371);
   ThetaY_20_25__793->SetBinContent(320,0.9258614);
   ThetaY_20_25__793->SetBinContent(321,0.8625145);
   ThetaY_20_25__793->SetBinContent(322,0.7442412);
   ThetaY_20_25__793->SetBinContent(323,0.5674119);
   ThetaY_20_25__793->SetBinContent(324,0.3048297);
   ThetaY_20_25__793->SetBinContent(325,0.05284553);
   ThetaY_20_25__793->SetBinError(305,4.839334e-05);
   ThetaY_20_25__793->SetBinError(306,0.001560638);
   ThetaY_20_25__793->SetBinError(307,0.00378645);
   ThetaY_20_25__793->SetBinError(308,0.005249953);
   ThetaY_20_25__793->SetBinError(309,0.006000189);
   ThetaY_20_25__793->SetBinError(310,0.0064543);
   ThetaY_20_25__793->SetBinError(311,0.006732069);
   ThetaY_20_25__793->SetBinError(312,0.006835977);
   ThetaY_20_25__793->SetBinError(313,0.006917032);
   ThetaY_20_25__793->SetBinError(314,0.006956532);
   ThetaY_20_25__793->SetBinError(315,0.007012861);
   ThetaY_20_25__793->SetBinError(316,0.006972841);
   ThetaY_20_25__793->SetBinError(317,0.006955354);
   ThetaY_20_25__793->SetBinError(318,0.006906698);
   ThetaY_20_25__793->SetBinError(319,0.006825692);
   ThetaY_20_25__793->SetBinError(320,0.006693693);
   ThetaY_20_25__793->SetBinError(321,0.006460647);
   ThetaY_20_25__793->SetBinError(322,0.00600136);
   ThetaY_20_25__793->SetBinError(323,0.00524013);
   ThetaY_20_25__793->SetBinError(324,0.003840798);
   ThetaY_20_25__793->SetBinError(325,0.001599178);
   ThetaY_20_25__793->SetEntries(306624);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__793->SetLineColor(ci);
   ThetaY_20_25__793->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__793->SetMarkerColor(ci);
   ThetaY_20_25__793->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__793->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__793->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__793->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__793->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__793->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__793->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__793->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__793->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__793->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__793->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__793->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__793->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__793->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__793->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__793->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__793->Draw("AEsame");
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
   
   Double_t _fx3265[21] = {
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
   47.5};
   Double_t _fy3265[21] = {
   0,
   0.3796668,
   0.7309713,
   0.8387575,
   0.8390391,
   0.9175068,
   0.9249703,
   0.9036606,
   0.9212604,
   1,
   0.8899873,
   0.9129121,
   0.8091913,
   0.4652405,
   0.03307978,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3265[21] = {
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
   Double_t _fely3265[21] = {
   0,
   0.2068466,
   0.1250771,
   0.09693843,
   0.08487751,
   0.08256738,
   0.07949383,
   0.07737301,
   0.07721652,
   0.08002405,
   0.07484812,
   0.0762489,
   0.0719279,
   0.05479679,
   0.01428991,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3265[21] = {
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
   Double_t _fehy3265[21] = {
   697.966,
   0.370364,
   0.1485824,
   0.1088554,
   0.09393712,
   0.09035952,
   0.08664248,
   0.08430369,
   0.08398071,
   0.0867035,
   0.08142794,
   0.08290383,
   0.07862822,
   0.06166789,
   0.02238301,
   0.01266584,
   0.01359613,
   0.01575693,
   0.02066783,
   0.03847384,
   0.2220839};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3265,_fy3265,_felx3265,_fehx3265,_fely3265,_fehy3265);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3265 = new TH1F("Graph_Graph3265","",100,-100,100);
   Graph_Graph3265->SetMinimum(0);
   Graph_Graph3265->SetMaximum(1.5);
   Graph_Graph3265->SetDirectory(0);
   Graph_Graph3265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3265->SetLineColor(ci);
   Graph_Graph3265->GetXaxis()->SetRange(1,100);
   Graph_Graph3265->GetXaxis()->CenterTitle(true);
   Graph_Graph3265->GetXaxis()->SetLabelFont(42);
   Graph_Graph3265->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3265->GetXaxis()->SetTitleFont(42);
   Graph_Graph3265->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3265->GetYaxis()->CenterTitle(true);
   Graph_Graph3265->GetYaxis()->SetLabelFont(42);
   Graph_Graph3265->GetYaxis()->SetTitleFont(42);
   Graph_Graph3265->GetZaxis()->SetLabelFont(42);
   Graph_Graph3265->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3265->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3265);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.117886,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__794 = new TH2D("ThetaY_vs_Y_20_25__794","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__794->SetBinContent(7947,1);
   ThetaY_vs_Y_20_25__794->SetBinContent(7973,1040);
   ThetaY_vs_Y_20_25__794->SetBinContent(7999,6122);
   ThetaY_vs_Y_20_25__794->SetBinContent(8025,11769);
   ThetaY_vs_Y_20_25__794->SetBinContent(8051,15373);
   ThetaY_vs_Y_20_25__794->SetBinContent(8077,17788);
   ThetaY_vs_Y_20_25__794->SetBinContent(8103,19352);
   ThetaY_vs_Y_20_25__794->SetBinContent(8129,19954);
   ThetaY_vs_Y_20_25__794->SetBinContent(8155,20430);
   ThetaY_vs_Y_20_25__794->SetBinContent(8181,20664);
   ThetaY_vs_Y_20_25__794->SetBinContent(8207,21000);
   ThetaY_vs_Y_20_25__794->SetBinContent(8233,20761);
   ThetaY_vs_Y_20_25__794->SetBinContent(8259,20657);
   ThetaY_vs_Y_20_25__794->SetBinContent(8285,20369);
   ThetaY_vs_Y_20_25__794->SetBinContent(8311,19894);
   ThetaY_vs_Y_20_25__794->SetBinContent(8337,19132);
   ThetaY_vs_Y_20_25__794->SetBinContent(8363,17823);
   ThetaY_vs_Y_20_25__794->SetBinContent(8389,15379);
   ThetaY_vs_Y_20_25__794->SetBinContent(8415,11725);
   ThetaY_vs_Y_20_25__794->SetBinContent(8441,6299);
   ThetaY_vs_Y_20_25__794->SetBinContent(8467,1092);
   ThetaY_vs_Y_20_25__794->SetEntries(306624);
   ThetaY_vs_Y_20_25__794->SetContour(20);
   ThetaY_vs_Y_20_25__794->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__794->SetContourLevel(1,1050);
   ThetaY_vs_Y_20_25__794->SetContourLevel(2,2100);
   ThetaY_vs_Y_20_25__794->SetContourLevel(3,3150);
   ThetaY_vs_Y_20_25__794->SetContourLevel(4,4200);
   ThetaY_vs_Y_20_25__794->SetContourLevel(5,5250);
   ThetaY_vs_Y_20_25__794->SetContourLevel(6,6300);
   ThetaY_vs_Y_20_25__794->SetContourLevel(7,7350);
   ThetaY_vs_Y_20_25__794->SetContourLevel(8,8400);
   ThetaY_vs_Y_20_25__794->SetContourLevel(9,9450);
   ThetaY_vs_Y_20_25__794->SetContourLevel(10,10500);
   ThetaY_vs_Y_20_25__794->SetContourLevel(11,11550);
   ThetaY_vs_Y_20_25__794->SetContourLevel(12,12600);
   ThetaY_vs_Y_20_25__794->SetContourLevel(13,13650);
   ThetaY_vs_Y_20_25__794->SetContourLevel(14,14700);
   ThetaY_vs_Y_20_25__794->SetContourLevel(15,15750);
   ThetaY_vs_Y_20_25__794->SetContourLevel(16,16800);
   ThetaY_vs_Y_20_25__794->SetContourLevel(17,17850);
   ThetaY_vs_Y_20_25__794->SetContourLevel(18,18900);
   ThetaY_vs_Y_20_25__794->SetContourLevel(19,19950);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__794->SetLineColor(ci);
   ThetaY_vs_Y_20_25__794->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__794->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__794->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__794->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__794->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__794->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__794->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__794->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__794->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__794->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__794->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__794->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__794->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__794->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__794->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
