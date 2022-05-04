void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2700386,125,5.130733);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__567 = new TH1D("S12_ThetaY_25_30__567","",630,-1575,1575);
   S12_ThetaY_25_30__567->SetBinContent(304,0.1363636);
   S12_ThetaY_25_30__567->SetBinContent(305,1);
   S12_ThetaY_25_30__567->SetBinContent(306,1.272727);
   S12_ThetaY_25_30__567->SetBinContent(307,1.636364);
   S12_ThetaY_25_30__567->SetBinContent(308,3.318182);
   S12_ThetaY_25_30__567->SetBinContent(309,3.409091);
   S12_ThetaY_25_30__567->SetBinContent(310,3.318182);
   S12_ThetaY_25_30__567->SetBinContent(311,3.090909);
   S12_ThetaY_25_30__567->SetBinContent(312,3.5);
   S12_ThetaY_25_30__567->SetBinContent(313,2.818182);
   S12_ThetaY_25_30__567->SetBinContent(314,3.363636);
   S12_ThetaY_25_30__567->SetBinContent(315,3.681818);
   S12_ThetaY_25_30__567->SetBinContent(316,3.318182);
   S12_ThetaY_25_30__567->SetBinContent(317,3.681818);
   S12_ThetaY_25_30__567->SetBinContent(318,0.8636364);
   S12_ThetaY_25_30__567->SetBinError(304,0.07872958);
   S12_ThetaY_25_30__567->SetBinError(305,0.2132007);
   S12_ThetaY_25_30__567->SetBinError(306,0.2405228);
   S12_ThetaY_25_30__567->SetBinError(307,0.2727273);
   S12_ThetaY_25_30__567->SetBinError(308,0.3883638);
   S12_ThetaY_25_30__567->SetBinError(309,0.3936479);
   S12_ThetaY_25_30__567->SetBinError(310,0.3883638);
   S12_ThetaY_25_30__567->SetBinError(311,0.3748278);
   S12_ThetaY_25_30__567->SetBinError(312,0.398862);
   S12_ThetaY_25_30__567->SetBinError(313,0.3579094);
   S12_ThetaY_25_30__567->SetBinError(314,0.3910148);
   S12_ThetaY_25_30__567->SetBinError(315,0.4090909);
   S12_ThetaY_25_30__567->SetBinError(316,0.3883638);
   S12_ThetaY_25_30__567->SetBinError(317,0.4090909);
   S12_ThetaY_25_30__567->SetBinError(318,0.1981318);
   S12_ThetaY_25_30__567->SetMinimum(0);
   S12_ThetaY_25_30__567->SetMaximum(4.590656);
   S12_ThetaY_25_30__567->SetEntries(845);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__567->SetLineColor(ci);
   S12_ThetaY_25_30__567->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__567->SetMarkerColor(ci);
   S12_ThetaY_25_30__567->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__567->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__567->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__567->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__567->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__567->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__567->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__567->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__567->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__567->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__567->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__567->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__567->Draw("AE");
   
   TH1D *ThetaY_25_30__568 = new TH1D("ThetaY_25_30__568","",630,-1575,1575);
   ThetaY_25_30__568->SetBinContent(303,0.002496434);
   ThetaY_25_30__568->SetBinContent(304,0.2022111);
   ThetaY_25_30__568->SetBinContent(305,1);
   ThetaY_25_30__568->SetBinContent(306,2.10806);
   ThetaY_25_30__568->SetBinContent(307,2.895863);
   ThetaY_25_30__568->SetBinContent(308,3.381598);
   ThetaY_25_30__568->SetBinContent(309,3.647646);
   ThetaY_25_30__568->SetBinContent(310,3.986448);
   ThetaY_25_30__568->SetBinContent(311,4.115193);
   ThetaY_25_30__568->SetBinContent(312,4.111626);
   ThetaY_25_30__568->SetBinContent(313,4.139444);
   ThetaY_25_30__568->SetBinContent(314,4.164765);
   ThetaY_25_30__568->SetBinContent(315,4.146576);
   ThetaY_25_30__568->SetBinContent(316,4.173324);
   ThetaY_25_30__568->SetBinContent(317,4.170471);
   ThetaY_25_30__568->SetBinContent(318,4.163338);
   ThetaY_25_30__568->SetBinContent(319,4.007133);
   ThetaY_25_30__568->SetBinContent(320,4.059914);
   ThetaY_25_30__568->SetBinContent(321,3.893723);
   ThetaY_25_30__568->SetBinContent(322,3.726819);
   ThetaY_25_30__568->SetBinContent(323,3.386234);
   ThetaY_25_30__568->SetBinContent(324,2.89087);
   ThetaY_25_30__568->SetBinContent(325,2.130171);
   ThetaY_25_30__568->SetBinContent(326,1.001783);
   ThetaY_25_30__568->SetBinContent(327,0.2157632);
   ThetaY_25_30__568->SetBinContent(328,0.0032097);
   ThetaY_25_30__568->SetBinError(303,0.0009435632);
   ThetaY_25_30__568->SetBinError(304,0.008492069);
   ThetaY_25_30__568->SetBinError(305,0.01888474);
   ThetaY_25_30__568->SetBinError(306,0.02741905);
   ThetaY_25_30__568->SetBinError(307,0.03213661);
   ThetaY_25_30__568->SetBinError(308,0.03472738);
   ThetaY_25_30__568->SetBinError(309,0.03606761);
   ThetaY_25_30__568->SetBinError(310,0.03770544);
   ThetaY_25_30__568->SetBinError(311,0.03830946);
   ThetaY_25_30__568->SetBinError(312,0.03829286);
   ThetaY_25_30__568->SetBinError(313,0.03842218);
   ThetaY_25_30__568->SetBinError(314,0.03853951);
   ThetaY_25_30__568->SetBinError(315,0.03845527);
   ThetaY_25_30__568->SetBinError(316,0.0385791);
   ThetaY_25_30__568->SetBinError(317,0.03856591);
   ThetaY_25_30__568->SetBinError(318,0.03853291);
   ThetaY_25_30__568->SetBinError(319,0.03780314);
   ThetaY_25_30__568->SetBinError(320,0.03805129);
   ThetaY_25_30__568->SetBinError(321,0.03726435);
   ThetaY_25_30__568->SetBinError(322,0.03645693);
   ThetaY_25_30__568->SetBinError(323,0.03475117);
   ThetaY_25_30__568->SetBinError(324,0.03210889);
   ThetaY_25_30__568->SetBinError(325,0.02756248);
   ThetaY_25_30__568->SetBinError(326,0.01890157);
   ThetaY_25_30__568->SetBinError(327,0.008772021);
   ThetaY_25_30__568->SetBinError(328,0.0010699);
   ThetaY_25_30__568->SetEntries(212332);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__568->SetLineColor(ci);
   ThetaY_25_30__568->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__568->SetMarkerColor(ci);
   ThetaY_25_30__568->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__568->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__568->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__568->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__568->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__568->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__568->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__568->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__568->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__568->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__568->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__568->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__568->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__568->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__568->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__568->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__568->Draw("AEsame");
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
   
   Double_t _fx3190[26] = {
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
   Double_t _fy3190[26] = {
   0,
   0.6743627,
   1,
   0.6037434,
   0.5650694,
   0.9812468,
   0.9346002,
   0.8323655,
   0.7510971,
   0.8512447,
   0.6808117,
   0.8076414,
   0.8879176,
   0.7950933,
   0.8828304,
   0.2074384,
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
   Double_t _felx3190[26] = {
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
   Double_t _fely3190[26] = {
   0,
   0.3677233,
   0.2123614,
   0.1136706,
   0.09394077,
   0.115017,
   0.1080662,
   0.09751002,
   0.0911229,
   0.09711587,
   0.08645576,
   0.09396623,
   0.09879169,
   0.0931303,
   0.09822375,
   0.04720385,
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
   Double_t _fehx3190[26] = {
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
   Double_t _fehy3190[26] = {
   38.34225,
   0.6593977,
   0.2631753,
   0.1374141,
   0.1110399,
   0.1293729,
   0.1213594,
   0.1096716,
   0.1029194,
   0.1088916,
   0.09820794,
   0.1056001,
   0.1104559,
   0.1047434,
   0.1098206,
   0.05940254,
   0.02088517,
   0.02061363,
   0.02149353,
   0.0224562,
   0.02471504,
   0.02895056,
   0.0392906,
   0.08356123,
   0.3884363,
   28.92996};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3190,_fy3190,_felx3190,_fehx3190,_fely3190,_fehy3190);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3190 = new TH1F("Graph_Graph3190","",100,-100,100);
   Graph_Graph3190->SetMinimum(0);
   Graph_Graph3190->SetMaximum(1.5);
   Graph_Graph3190->SetDirectory(0);
   Graph_Graph3190->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3190->SetLineColor(ci);
   Graph_Graph3190->GetXaxis()->SetRange(1,100);
   Graph_Graph3190->GetXaxis()->CenterTitle(true);
   Graph_Graph3190->GetXaxis()->SetLabelFont(42);
   Graph_Graph3190->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3190->GetXaxis()->SetTitleFont(42);
   Graph_Graph3190->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3190->GetYaxis()->CenterTitle(true);
   Graph_Graph3190->GetYaxis()->SetLabelFont(42);
   Graph_Graph3190->GetYaxis()->SetTitleFont(42);
   Graph_Graph3190->GetZaxis()->SetLabelFont(42);
   Graph_Graph3190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3190->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3190);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,4.590656,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__569 = new TH2D("ThetaY_vs_Y_25_30__569","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__569->SetBinContent(7896,7);
   ThetaY_vs_Y_25_30__569->SetBinContent(7922,567);
   ThetaY_vs_Y_25_30__569->SetBinContent(7948,2804);
   ThetaY_vs_Y_25_30__569->SetBinContent(7974,5911);
   ThetaY_vs_Y_25_30__569->SetBinContent(8000,8120);
   ThetaY_vs_Y_25_30__569->SetBinContent(8026,9482);
   ThetaY_vs_Y_25_30__569->SetBinContent(8052,10228);
   ThetaY_vs_Y_25_30__569->SetBinContent(8078,11178);
   ThetaY_vs_Y_25_30__569->SetBinContent(8104,11539);
   ThetaY_vs_Y_25_30__569->SetBinContent(8130,11529);
   ThetaY_vs_Y_25_30__569->SetBinContent(8156,11607);
   ThetaY_vs_Y_25_30__569->SetBinContent(8182,11678);
   ThetaY_vs_Y_25_30__569->SetBinContent(8208,11627);
   ThetaY_vs_Y_25_30__569->SetBinContent(8234,11702);
   ThetaY_vs_Y_25_30__569->SetBinContent(8260,11694);
   ThetaY_vs_Y_25_30__569->SetBinContent(8286,11674);
   ThetaY_vs_Y_25_30__569->SetBinContent(8312,11236);
   ThetaY_vs_Y_25_30__569->SetBinContent(8338,11384);
   ThetaY_vs_Y_25_30__569->SetBinContent(8364,10918);
   ThetaY_vs_Y_25_30__569->SetBinContent(8390,10450);
   ThetaY_vs_Y_25_30__569->SetBinContent(8416,9495);
   ThetaY_vs_Y_25_30__569->SetBinContent(8442,8106);
   ThetaY_vs_Y_25_30__569->SetBinContent(8468,5973);
   ThetaY_vs_Y_25_30__569->SetBinContent(8494,2809);
   ThetaY_vs_Y_25_30__569->SetBinContent(8520,605);
   ThetaY_vs_Y_25_30__569->SetBinContent(8546,9);
   ThetaY_vs_Y_25_30__569->SetEntries(212332);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__569->SetLineColor(ci);
   ThetaY_vs_Y_25_30__569->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__569->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__569->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__569->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__569->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__569->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__569->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__569->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__569->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__569->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__569->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__569->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__569->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__569->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__569->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
