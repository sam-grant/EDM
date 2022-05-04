void S18_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.06748663,125,1.282246);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__768 = new TH1D("S18_ThetaY_mI20_mI15__768","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__768->SetBinContent(311,0.02212389);
   S18_ThetaY_mI20_mI15__768->SetBinContent(312,0.3230088);
   S18_ThetaY_mI20_mI15__768->SetBinContent(313,0.8938053);
   S18_ThetaY_mI20_mI15__768->SetBinContent(314,0.9380531);
   S18_ThetaY_mI20_mI15__768->SetBinContent(315,0.7920354);
   S18_ThetaY_mI20_mI15__768->SetBinContent(316,1.026549);
   S18_ThetaY_mI20_mI15__768->SetBinContent(317,0.9646018);
   S18_ThetaY_mI20_mI15__768->SetBinContent(318,0.9292035);
   S18_ThetaY_mI20_mI15__768->SetBinContent(319,1);
   S18_ThetaY_mI20_mI15__768->SetBinContent(320,0.8318584);
   S18_ThetaY_mI20_mI15__768->SetBinContent(321,0.8716814);
   S18_ThetaY_mI20_mI15__768->SetBinContent(322,0.6371681);
   S18_ThetaY_mI20_mI15__768->SetBinContent(323,0.420354);
   S18_ThetaY_mI20_mI15__768->SetBinContent(324,0.1106195);
   S18_ThetaY_mI20_mI15__768->SetBinContent(325,0.008849558);
   S18_ThetaY_mI20_mI15__768->SetBinError(311,0.009894106);
   S18_ThetaY_mI20_mI15__768->SetBinError(312,0.03780533);
   S18_ThetaY_mI20_mI15__768->SetBinError(313,0.06288792);
   S18_ThetaY_mI20_mI15__768->SetBinError(314,0.06442575);
   S18_ThetaY_mI20_mI15__768->SetBinError(315,0.05919951);
   S18_ThetaY_mI20_mI15__768->SetBinError(316,0.06739622);
   S18_ThetaY_mI20_mI15__768->SetBinError(317,0.06533108);
   S18_ThetaY_mI20_mI15__768->SetBinError(318,0.06412114);
   S18_ThetaY_mI20_mI15__768->SetBinError(319,0.06651901);
   S18_ThetaY_mI20_mI15__768->SetBinError(320,0.06066951);
   S18_ThetaY_mI20_mI15__768->SetBinError(321,0.06210473);
   S18_ThetaY_mI20_mI15__768->SetBinError(322,0.05309735);
   S18_ThetaY_mI20_mI15__768->SetBinError(323,0.04312741);
   S18_ThetaY_mI20_mI15__768->SetBinError(324,0.02212389);
   S18_ThetaY_mI20_mI15__768->SetBinError(325,0.006257582);
   S18_ThetaY_mI20_mI15__768->SetMinimum(0);
   S18_ThetaY_mI20_mI15__768->SetMaximum(1.147273);
   S18_ThetaY_mI20_mI15__768->SetEntries(2208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__768->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__768->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__768->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__768->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__768->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__768->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__768->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__768->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__768->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__768->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__768->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__768->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__768->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__768->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__768->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__768->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__769 = new TH1D("ThetaY_mI20_mI15__769","",630,-1575,1575);
   ThetaY_mI20_mI15__769->SetBinContent(305,0.00013493);
   ThetaY_mI20_mI15__769->SetBinContent(306,0.05248777);
   ThetaY_mI20_mI15__769->SetBinContent(307,0.3129701);
   ThetaY_mI20_mI15__769->SetBinContent(308,0.5967617);
   ThetaY_mI20_mI15__769->SetBinContent(309,0.7752066);
   ThetaY_mI20_mI15__769->SetBinContent(310,0.8771462);
   ThetaY_mI20_mI15__769->SetBinContent(311,0.9577669);
   ThetaY_mI20_mI15__769->SetBinContent(312,0.9964244);
   ThetaY_mI20_mI15__769->SetBinContent(313,1.021926);
   ThetaY_mI20_mI15__769->SetBinContent(314,1.029111);
   ThetaY_mI20_mI15__769->SetBinContent(315,1.030258);
   ThetaY_mI20_mI15__769->SetBinContent(316,1.042975);
   ThetaY_mI20_mI15__769->SetBinContent(317,1.033564);
   ThetaY_mI20_mI15__769->SetBinContent(318,1.031304);
   ThetaY_mI20_mI15__769->SetBinContent(319,1);
   ThetaY_mI20_mI15__769->SetBinContent(320,0.9557767);
   ThetaY_mI20_mI15__769->SetBinContent(321,0.8746163);
   ThetaY_mI20_mI15__769->SetBinContent(322,0.7579018);
   ThetaY_mI20_mI15__769->SetBinContent(323,0.5972677);
   ThetaY_mI20_mI15__769->SetBinContent(324,0.3130713);
   ThetaY_mI20_mI15__769->SetBinContent(325,0.05383707);
   ThetaY_mI20_mI15__769->SetBinContent(326,0.0001011975);
   ThetaY_mI20_mI15__769->SetBinError(305,6.7465e-05);
   ThetaY_mI20_mI15__769->SetBinError(306,0.001330618);
   ThetaY_mI20_mI15__769->SetBinError(307,0.003249195);
   ThetaY_mI20_mI15__769->SetBinError(308,0.004486676);
   ThetaY_mI20_mI15__769->SetBinError(309,0.005113674);
   ThetaY_mI20_mI15__769->SetBinError(310,0.005439516);
   ThetaY_mI20_mI15__769->SetBinError(311,0.005684002);
   ThetaY_mI20_mI15__769->SetBinError(312,0.005797576);
   ThetaY_mI20_mI15__769->SetBinError(313,0.005871297);
   ThetaY_mI20_mI15__769->SetBinError(314,0.005891901);
   ThetaY_mI20_mI15__769->SetBinError(315,0.005895183);
   ThetaY_mI20_mI15__769->SetBinError(316,0.005931455);
   ThetaY_mI20_mI15__769->SetBinError(317,0.005904633);
   ThetaY_mI20_mI15__769->SetBinError(318,0.005898174);
   ThetaY_mI20_mI15__769->SetBinError(319,0.005807969);
   ThetaY_mI20_mI15__769->SetBinError(320,0.005678093);
   ThetaY_mI20_mI15__769->SetBinError(321,0.005431666);
   ThetaY_mI20_mI15__769->SetBinError(322,0.005056276);
   ThetaY_mI20_mI15__769->SetBinError(323,0.004488578);
   ThetaY_mI20_mI15__769->SetBinError(324,0.00324972);
   ThetaY_mI20_mI15__769->SetBinError(325,0.001347612);
   ThetaY_mI20_mI15__769->SetBinError(326,5.842641e-05);
   ThetaY_mI20_mI15__769->SetEntries(453883);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__769->SetLineColor(ci);
   ThetaY_mI20_mI15__769->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__769->SetMarkerColor(ci);
   ThetaY_mI20_mI15__769->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__769->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__769->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__769->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__769->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__769->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__769->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__769->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__769->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__769->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__769->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__769->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__769->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__769->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__769->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__769->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__769->Draw("AEsame");
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
   
   Double_t _fx3257[22] = {
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
   52.5};
   Double_t _fy3257[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02309946,
   0.324168,
   0.8746281,
   0.9115178,
   0.7687738,
   0.9842503,
   0.9332774,
   0.9009989,
   1,
   0.8703481,
   0.9966444,
   0.8407001,
   0.703795,
   0.3533363,
   0.1643766,
   0};
   Double_t _felx3257[22] = {
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
   Double_t _fely3257[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.009978268,
   0.03790001,
   0.06169133,
   0.06276988,
   0.05757422,
   0.06481342,
   0.06338433,
   0.06233733,
   0.06672159,
   0.06362915,
   0.07121537,
   0.0701993,
   0.07227169,
   0.07028239,
   0.1062138,
   0};
   Double_t _fehx3257[22] = {
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
   Double_t _fehy3257[22] = {
   76.66756,
   0.1552921,
   0.02603099,
   0.01365124,
   0.01050873,
   0.009287393,
   0.01562896,
   0.04261447,
   0.06620629,
   0.06725096,
   0.0620584,
   0.06923096,
   0.0678448,
   0.06680921,
   0.07133154,
   0.06846253,
   0.07649839,
   0.07632429,
   0.08010811,
   0.08588529,
   0.2171164,
   111.1301};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3257,_fy3257,_felx3257,_fehx3257,_fely3257,_fehy3257);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3257 = new TH1F("Graph_Graph3257","",100,-100,100);
   Graph_Graph3257->SetMinimum(0);
   Graph_Graph3257->SetMaximum(1.5);
   Graph_Graph3257->SetDirectory(0);
   Graph_Graph3257->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3257->SetLineColor(ci);
   Graph_Graph3257->GetXaxis()->SetRange(1,100);
   Graph_Graph3257->GetXaxis()->CenterTitle(true);
   Graph_Graph3257->GetXaxis()->SetLabelFont(42);
   Graph_Graph3257->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3257->GetXaxis()->SetTitleFont(42);
   Graph_Graph3257->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3257->GetYaxis()->CenterTitle(true);
   Graph_Graph3257->GetYaxis()->SetLabelFont(42);
   Graph_Graph3257->GetYaxis()->SetTitleFont(42);
   Graph_Graph3257->GetZaxis()->SetLabelFont(42);
   Graph_Graph3257->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3257->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3257);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.147273,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__770 = new TH2D("ThetaY_vs_Y_mI20_mI15__770","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(7939,4);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(7965,1556);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(7991,9278);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8017,17691);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8043,22981);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8069,26003);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8095,28393);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8121,29539);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8147,30295);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8173,30508);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8199,30542);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8225,30919);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8251,30640);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8277,30573);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8303,29645);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8329,28334);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8355,25928);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8381,22468);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8407,17706);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8433,9281);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8459,1596);
   ThetaY_vs_Y_mI20_mI15__770->SetBinContent(8485,3);
   ThetaY_vs_Y_mI20_mI15__770->SetEntries(453883);
   ThetaY_vs_Y_mI20_mI15__770->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(1,1545.95);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(2,3091.9);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(3,4637.85);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(4,6183.8);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(5,7729.75);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(6,9275.7);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(7,10821.65);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(8,12367.6);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(9,13913.55);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(10,15459.5);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(11,17005.45);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(12,18551.4);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(13,20097.35);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(14,21643.3);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(15,23189.25);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(16,24735.2);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(17,26281.15);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(18,27827.1);
   ThetaY_vs_Y_mI20_mI15__770->SetContourLevel(19,29373.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__770->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__770->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__770->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__770->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__770->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__770->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__770->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__770->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__770->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__770->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__770->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__770->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__770->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__770->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__770->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__770->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
