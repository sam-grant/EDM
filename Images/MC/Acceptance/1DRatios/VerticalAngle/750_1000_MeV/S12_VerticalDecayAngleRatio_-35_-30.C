void S12_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.06594297,125,1.252916);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__531 = new TH1D("S12_ThetaY_mI35_mI30__531","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__531->SetBinContent(313,0.07843137);
   S12_ThetaY_mI35_mI30__531->SetBinContent(314,0.4117647);
   S12_ThetaY_mI35_mI30__531->SetBinContent(315,0.8431373);
   S12_ThetaY_mI35_mI30__531->SetBinContent(316,1);
   S12_ThetaY_mI35_mI30__531->SetBinContent(317,0.8627451);
   S12_ThetaY_mI35_mI30__531->SetBinContent(318,0.6862745);
   S12_ThetaY_mI35_mI30__531->SetBinContent(319,0.9019608);
   S12_ThetaY_mI35_mI30__531->SetBinContent(320,0.627451);
   S12_ThetaY_mI35_mI30__531->SetBinContent(321,0.8823529);
   S12_ThetaY_mI35_mI30__531->SetBinContent(322,0.5294118);
   S12_ThetaY_mI35_mI30__531->SetBinContent(323,0.627451);
   S12_ThetaY_mI35_mI30__531->SetBinContent(324,0.627451);
   S12_ThetaY_mI35_mI30__531->SetBinContent(325,0.2352941);
   S12_ThetaY_mI35_mI30__531->SetBinContent(326,0.05882353);
   S12_ThetaY_mI35_mI30__531->SetBinContent(327,0.01960784);
   S12_ThetaY_mI35_mI30__531->SetBinError(313,0.03921569);
   S12_ThetaY_mI35_mI30__531->SetBinError(314,0.08985443);
   S12_ThetaY_mI35_mI30__531->SetBinError(315,0.1285772);
   S12_ThetaY_mI35_mI30__531->SetBinError(316,0.140028);
   S12_ThetaY_mI35_mI30__531->SetBinError(317,0.1300637);
   S12_ThetaY_mI35_mI30__531->SetBinError(318,0.1160016);
   S12_ThetaY_mI35_mI30__531->SetBinError(319,0.1329869);
   S12_ThetaY_mI35_mI30__531->SetBinError(320,0.1109187);
   S12_ThetaY_mI35_mI30__531->SetBinError(321,0.1315334);
   S12_ThetaY_mI35_mI30__531->SetBinError(322,0.1018853);
   S12_ThetaY_mI35_mI30__531->SetBinError(323,0.1109187);
   S12_ThetaY_mI35_mI30__531->SetBinError(324,0.1109187);
   S12_ThetaY_mI35_mI30__531->SetBinError(325,0.06792356);
   S12_ThetaY_mI35_mI30__531->SetBinError(326,0.03396178);
   S12_ThetaY_mI35_mI30__531->SetBinError(327,0.01960784);
   S12_ThetaY_mI35_mI30__531->SetMinimum(0);
   S12_ThetaY_mI35_mI30__531->SetMaximum(1.12103);
   S12_ThetaY_mI35_mI30__531->SetEntries(428);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__531->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__531->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__531->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__531->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__531->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__531->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__531->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__531->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__531->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__531->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__531->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__531->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__531->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__531->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__531->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__531->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__532 = new TH1D("ThetaY_mI35_mI30__532","",630,-1575,1575);
   ThetaY_mI35_mI30__532->SetBinContent(303,0.0010216);
   ThetaY_mI35_mI30__532->SetBinContent(304,0.05268535);
   ThetaY_mI35_mI30__532->SetBinContent(305,0.2332166);
   ThetaY_mI35_mI30__532->SetBinContent(306,0.5116754);
   ThetaY_mI35_mI30__532->SetBinContent(307,0.6968768);
   ThetaY_mI35_mI30__532->SetBinContent(308,0.8191769);
   ThetaY_mI35_mI30__532->SetBinContent(309,0.9162288);
   ThetaY_mI35_mI30__532->SetBinContent(310,0.951547);
   ThetaY_mI35_mI30__532->SetBinContent(311,0.9925569);
   ThetaY_mI35_mI30__532->SetBinContent(312,0.9983946);
   ThetaY_mI35_mI30__532->SetBinContent(313,1.012989);
   ThetaY_mI35_mI30__532->SetBinContent(314,1.019119);
   ThetaY_mI35_mI30__532->SetBinContent(315,0.9932866);
   ThetaY_mI35_mI30__532->SetBinContent(316,1);
   ThetaY_mI35_mI30__532->SetBinContent(317,0.9950379);
   ThetaY_mI35_mI30__532->SetBinContent(318,0.9986865);
   ThetaY_mI35_mI30__532->SetBinContent(319,1.007443);
   ThetaY_mI35_mI30__532->SetBinContent(320,0.9908056);
   ThetaY_mI35_mI30__532->SetBinContent(321,0.9562172);
   ThetaY_mI35_mI30__532->SetBinContent(322,0.8829539);
   ThetaY_mI35_mI30__532->SetBinContent(323,0.8172796);
   ThetaY_mI35_mI30__532->SetBinContent(324,0.6878284);
   ThetaY_mI35_mI30__532->SetBinContent(325,0.5112376);
   ThetaY_mI35_mI30__532->SetBinContent(326,0.2368651);
   ThetaY_mI35_mI30__532->SetBinContent(327,0.05341506);
   ThetaY_mI35_mI30__532->SetBinContent(328,0.0004378284);
   ThetaY_mI35_mI30__532->SetBinError(303,0.0003861283);
   ThetaY_mI35_mI30__532->SetBinError(304,0.002772913);
   ThetaY_mI35_mI30__532->SetBinError(305,0.005834062);
   ThetaY_mI35_mI30__532->SetBinError(306,0.008641489);
   ThetaY_mI35_mI30__532->SetBinError(307,0.01008485);
   ThetaY_mI35_mI30__532->SetBinError(308,0.01093403);
   ThetaY_mI35_mI30__532->SetBinError(309,0.01156361);
   ThetaY_mI35_mI30__532->SetBinError(310,0.01178437);
   ThetaY_mI35_mI30__532->SetBinError(311,0.01203564);
   ThetaY_mI35_mI30__532->SetBinError(312,0.01207098);
   ThetaY_mI35_mI30__532->SetBinError(313,0.01215888);
   ThetaY_mI35_mI30__532->SetBinError(314,0.01219561);
   ThetaY_mI35_mI30__532->SetBinError(315,0.01204006);
   ThetaY_mI35_mI30__532->SetBinError(316,0.01208068);
   ThetaY_mI35_mI30__532->SetBinError(317,0.01205067);
   ThetaY_mI35_mI30__532->SetBinError(318,0.01207274);
   ThetaY_mI35_mI30__532->SetBinError(319,0.01212555);
   ThetaY_mI35_mI30__532->SetBinError(320,0.01202501);
   ThetaY_mI35_mI30__532->SetBinError(321,0.01181326);
   ThetaY_mI35_mI30__532->SetBinError(322,0.01135169);
   ThetaY_mI35_mI30__532->SetBinError(323,0.01092136);
   ThetaY_mI35_mI30__532->SetBinError(324,0.01001916);
   ThetaY_mI35_mI30__532->SetBinError(325,0.008637791);
   ThetaY_mI35_mI30__532->SetBinError(326,0.00587952);
   ThetaY_mI35_mI30__532->SetBinError(327,0.00279205);
   ThetaY_mI35_mI30__532->SetBinError(328,0.0002527803);
   ThetaY_mI35_mI30__532->SetEntries(125645);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__532->SetLineColor(ci);
   ThetaY_mI35_mI30__532->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__532->SetMarkerColor(ci);
   ThetaY_mI35_mI30__532->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__532->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__532->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__532->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__532->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__532->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__532->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__532->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__532->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__532->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__532->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__532->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__532->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__532->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__532->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__532->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__532->Draw("AEsame");
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
   
   Double_t _fx3178[26] = {
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
   Double_t _fy3178[26] = {
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
   0.0774257,
   0.4040401,
   0.8488358,
   1,
   0.8670474,
   0.6871771,
   0.895297,
   0.6332735,
   0.9227537,
   0.5995916,
   0.7677311,
   0.9122203,
   0.4602442,
   0.2483419,
   0.3670845,
   0};
   Double_t _felx3178[26] = {
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
   Double_t _fely3178[26] = {
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
   0.03706323,
   0.08758694,
   0.1293385,
   0.140076,
   0.130624,
   0.1158837,
   0.131951,
   0.1116143,
   0.1375027,
   0.1149191,
   0.1353778,
   0.1609397,
   0.1311953,
   0.135248,
   0.3038272,
   0};
   Double_t _fehx3178[26] = {
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
   Double_t _fehy3178[26] = {
   40.41749,
   0.6869209,
   0.1548743,
   0.07056806,
   0.05181034,
   0.04407398,
   0.03940474,
   0.03794196,
   0.03637409,
   0.03616137,
   0.06125118,
   0.1090133,
   0.150748,
   0.1612439,
   0.1519816,
   0.1373132,
   0.1530177,
   0.1332821,
   0.1597205,
   0.1394037,
   0.1616781,
   0.1922307,
   0.1752991,
   0.2420098,
   0.8479317,
   113.8245};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3178,_fy3178,_felx3178,_fehx3178,_fely3178,_fehy3178);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3178 = new TH1F("Graph_Graph3178","",100,-100,100);
   Graph_Graph3178->SetMinimum(0);
   Graph_Graph3178->SetMaximum(1.5);
   Graph_Graph3178->SetDirectory(0);
   Graph_Graph3178->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3178->SetLineColor(ci);
   Graph_Graph3178->GetXaxis()->SetRange(1,100);
   Graph_Graph3178->GetXaxis()->CenterTitle(true);
   Graph_Graph3178->GetXaxis()->SetLabelFont(42);
   Graph_Graph3178->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3178->GetXaxis()->SetTitleFont(42);
   Graph_Graph3178->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3178->GetYaxis()->CenterTitle(true);
   Graph_Graph3178->GetYaxis()->SetLabelFont(42);
   Graph_Graph3178->GetYaxis()->SetTitleFont(42);
   Graph_Graph3178->GetZaxis()->SetLabelFont(42);
   Graph_Graph3178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3178->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3178);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.12103,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__533 = new TH2D("ThetaY_vs_Y_mI35_mI30__533","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(7884,7);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(7910,361);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(7936,1598);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(7962,3506);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(7988,4775);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8014,5613);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8040,6278);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8066,6520);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8092,6801);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8118,6841);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8144,6941);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8170,6983);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8196,6806);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8222,6852);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8248,6818);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8274,6843);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8300,6903);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8326,6789);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8352,6552);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8378,6050);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8404,5600);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8430,4713);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8456,3503);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8482,1623);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8508,366);
   ThetaY_vs_Y_mI35_mI30__533->SetBinContent(8534,3);
   ThetaY_vs_Y_mI35_mI30__533->SetEntries(125645);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__533->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__533->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__533->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__533->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__533->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__533->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__533->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__533->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__533->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__533->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__533->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__533->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__533->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__533->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__533->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__533->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
