void S12S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.09587125,125,1.821554);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__645 = new TH1D("S12S18_ThetaY_mI35_mI30__645","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(313,0.07352941);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(314,0.5735294);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(315,1.279412);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(316,1.426471);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(317,1.205882);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(318,1.147059);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(319,1.264706);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(320,1.132353);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(321,1.029412);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(322,0.9558824);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(323,1.132353);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(324,1);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(325,0.4852941);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(326,0.2205882);
   S12S18_ThetaY_mI35_mI30__645->SetBinContent(327,0.04411765);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(313,0.03288335);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(314,0.09183821);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(315,0.1371673);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(316,0.1448361);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(317,0.1331674);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(318,0.1298788);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(319,0.1363767);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(320,0.1290436);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(321,0.1230382);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(322,0.1185626);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(323,0.1290436);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(324,0.1212678);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(325,0.08447886);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(326,0.05695564);
   S12S18_ThetaY_mI35_mI30__645->SetBinError(327,0.02547134);
   S12S18_ThetaY_mI35_mI30__645->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__645->SetMaximum(1.629811);
   S12S18_ThetaY_mI35_mI30__645->SetEntries(882);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__645->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__645->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__645->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__645->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__645->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__645->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__645->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__645->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__645->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__645->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__645->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__645->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__645->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__645->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__645->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__645->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__646 = new TH1D("ThetaY_mI35_mI30__646","",630,-1575,1575);
   ThetaY_mI35_mI30__646->SetBinContent(303,0.001485254);
   ThetaY_mI35_mI30__646->SetBinContent(304,0.07659665);
   ThetaY_mI35_mI30__646->SetBinContent(305,0.3390622);
   ThetaY_mI35_mI30__646->SetBinContent(306,0.7438999);
   ThetaY_mI35_mI30__646->SetBinContent(307,1.013155);
   ThetaY_mI35_mI30__646->SetBinContent(308,1.190961);
   ThetaY_mI35_mI30__646->SetBinContent(309,1.33206);
   ThetaY_mI35_mI30__646->SetBinContent(310,1.383408);
   ThetaY_mI35_mI30__646->SetBinContent(311,1.44303);
   ThetaY_mI35_mI30__646->SetBinContent(312,1.451517);
   ThetaY_mI35_mI30__646->SetBinContent(313,1.472735);
   ThetaY_mI35_mI30__646->SetBinContent(314,1.481647);
   ThetaY_mI35_mI30__646->SetBinContent(315,1.444091);
   ThetaY_mI35_mI30__646->SetBinContent(316,1.453851);
   ThetaY_mI35_mI30__646->SetBinContent(317,1.446637);
   ThetaY_mI35_mI30__646->SetBinContent(318,1.451941);
   ThetaY_mI35_mI30__646->SetBinContent(319,1.464672);
   ThetaY_mI35_mI30__646->SetBinContent(320,1.440484);
   ThetaY_mI35_mI30__646->SetBinContent(321,1.390197);
   ThetaY_mI35_mI30__646->SetBinContent(322,1.283683);
   ThetaY_mI35_mI30__646->SetBinContent(323,1.188203);
   ThetaY_mI35_mI30__646->SetBinContent(324,1);
   ThetaY_mI35_mI30__646->SetBinContent(325,0.7432633);
   ThetaY_mI35_mI30__646->SetBinContent(326,0.3443666);
   ThetaY_mI35_mI30__646->SetBinContent(327,0.07765754);
   ThetaY_mI35_mI30__646->SetBinContent(328,0.0006365372);
   ThetaY_mI35_mI30__646->SetBinError(303,0.0005613731);
   ThetaY_mI35_mI30__646->SetBinError(304,0.004031403);
   ThetaY_mI35_mI30__646->SetBinError(305,0.008481857);
   ThetaY_mI35_mI30__646->SetBinError(306,0.01256344);
   ThetaY_mI35_mI30__646->SetBinError(307,0.01466187);
   ThetaY_mI35_mI30__646->SetBinError(308,0.01589645);
   ThetaY_mI35_mI30__646->SetBinError(309,0.01681176);
   ThetaY_mI35_mI30__646->SetBinError(310,0.01713272);
   ThetaY_mI35_mI30__646->SetBinError(311,0.01749802);
   ThetaY_mI35_mI30__646->SetBinError(312,0.0175494);
   ThetaY_mI35_mI30__646->SetBinError(313,0.0176772);
   ThetaY_mI35_mI30__646->SetBinError(314,0.01773061);
   ThetaY_mI35_mI30__646->SetBinError(315,0.01750445);
   ThetaY_mI35_mI30__646->SetBinError(316,0.01756351);
   ThetaY_mI35_mI30__646->SetBinError(317,0.01751988);
   ThetaY_mI35_mI30__646->SetBinError(318,0.01755197);
   ThetaY_mI35_mI30__646->SetBinError(319,0.01762875);
   ThetaY_mI35_mI30__646->SetBinError(320,0.01748258);
   ThetaY_mI35_mI30__646->SetBinError(321,0.01717471);
   ThetaY_mI35_mI30__646->SetBinError(322,0.01650366);
   ThetaY_mI35_mI30__646->SetBinError(323,0.01587803);
   ThetaY_mI35_mI30__646->SetBinError(324,0.01456637);
   ThetaY_mI35_mI30__646->SetBinError(325,0.01255806);
   ThetaY_mI35_mI30__646->SetBinError(326,0.008547947);
   ThetaY_mI35_mI30__646->SetBinError(327,0.004059225);
   ThetaY_mI35_mI30__646->SetBinError(328,0.0003675049);
   ThetaY_mI35_mI30__646->SetEntries(125645);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__646->SetLineColor(ci);
   ThetaY_mI35_mI30__646->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__646->SetMarkerColor(ci);
   ThetaY_mI35_mI30__646->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__646->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__646->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__646->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__646->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__646->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__646->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__646->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__646->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__646->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__646->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__646->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__646->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__646->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__646->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__646->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__646->Draw("AEsame");
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
   
   Double_t _fx3216[26] = {
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
   Double_t _fy3216[26] = {
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
   0.04992712,
   0.3870892,
   0.8859635,
   0.9811669,
   0.8335763,
   0.7900173,
   0.8634737,
   0.7860921,
   0.7404789,
   0.7446403,
   0.9529963,
   1,
   0.6529235,
   0.6405621,
   0.5681051,
   0};
   Double_t _felx3216[26] = {
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
   Double_t _fely3216[26] = {
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
   0.02157188,
   0.06188483,
   0.09539959,
   0.1001448,
   0.09240926,
   0.08976062,
   0.09349992,
   0.08988766,
   0.0887561,
   0.09260923,
   0.1091007,
   0.121826,
   0.1135965,
   0.1642381,
   0.31011,
   0};
   Double_t _fehx3216[26] = {
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
   Double_t _fehy3216[26] = {
   20.85022,
   0.3543628,
   0.07989523,
   0.03640404,
   0.02672747,
   0.0227365,
   0.02032777,
   0.01957317,
   0.01876435,
   0.01865461,
   0.03379582,
   0.07267893,
   0.1062859,
   0.1109443,
   0.1032844,
   0.1006032,
   0.1042327,
   0.1008197,
   0.1001059,
   0.1049286,
   0.12239,
   0.1376853,
   0.1353561,
   0.2130594,
   0.5570848,
   58.71881};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3216,_fy3216,_felx3216,_fehx3216,_fely3216,_fehy3216);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3216 = new TH1F("Graph_Graph3216","",100,-100,100);
   Graph_Graph3216->SetMinimum(0);
   Graph_Graph3216->SetMaximum(1.5);
   Graph_Graph3216->SetDirectory(0);
   Graph_Graph3216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3216->SetLineColor(ci);
   Graph_Graph3216->GetXaxis()->SetRange(1,100);
   Graph_Graph3216->GetXaxis()->CenterTitle(true);
   Graph_Graph3216->GetXaxis()->SetLabelFont(42);
   Graph_Graph3216->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3216->GetXaxis()->SetTitleFont(42);
   Graph_Graph3216->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3216->GetYaxis()->CenterTitle(true);
   Graph_Graph3216->GetYaxis()->SetLabelFont(42);
   Graph_Graph3216->GetYaxis()->SetTitleFont(42);
   Graph_Graph3216->GetZaxis()->SetLabelFont(42);
   Graph_Graph3216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3216->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3216);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.629811,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__647 = new TH2D("ThetaY_vs_Y_mI35_mI30__647","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(7884,7);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(7910,361);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(7936,1598);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(7962,3506);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(7988,4775);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8014,5613);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8040,6278);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8066,6520);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8092,6801);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8118,6841);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8144,6941);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8170,6983);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8196,6806);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8222,6852);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8248,6818);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8274,6843);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8300,6903);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8326,6789);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8352,6552);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8378,6050);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8404,5600);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8430,4713);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8456,3503);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8482,1623);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8508,366);
   ThetaY_vs_Y_mI35_mI30__647->SetBinContent(8534,3);
   ThetaY_vs_Y_mI35_mI30__647->SetEntries(125645);
   ThetaY_vs_Y_mI35_mI30__647->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(1,349.15);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(2,698.3);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(3,1047.45);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(4,1396.6);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(5,1745.75);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(6,2094.9);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(7,2444.05);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(8,2793.2);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(9,3142.35);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(10,3491.5);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(11,3840.65);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(12,4189.8);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(13,4538.95);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(14,4888.1);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(15,5237.25);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(16,5586.4);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(17,5935.55);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(18,6284.7);
   ThetaY_vs_Y_mI35_mI30__647->SetContourLevel(19,6633.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__647->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__647->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__647->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__647->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__647->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__647->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__647->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__647->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__647->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__647->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__647->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__647->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__647->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__647->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__647->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__647->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
