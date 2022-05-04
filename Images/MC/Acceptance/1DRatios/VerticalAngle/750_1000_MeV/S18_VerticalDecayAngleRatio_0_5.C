void S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06606944,125,1.255319);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__609 = new TH1D("S18_ThetaY_0_5__609","",630,-1575,1575);
   S18_ThetaY_0_5__609->SetBinContent(306,0.00617284);
   S18_ThetaY_0_5__609->SetBinContent(307,0.04012346);
   S18_ThetaY_0_5__609->SetBinContent(308,0.2191358);
   S18_ThetaY_0_5__609->SetBinContent(309,0.6666667);
   S18_ThetaY_0_5__609->SetBinContent(310,0.9166667);
   S18_ThetaY_0_5__609->SetBinContent(311,0.9876543);
   S18_ThetaY_0_5__609->SetBinContent(312,1);
   S18_ThetaY_0_5__609->SetBinContent(313,0.9382716);
   S18_ThetaY_0_5__609->SetBinContent(314,0.9228395);
   S18_ThetaY_0_5__609->SetBinContent(315,0.9351852);
   S18_ThetaY_0_5__609->SetBinContent(316,0.962963);
   S18_ThetaY_0_5__609->SetBinContent(317,0.9845679);
   S18_ThetaY_0_5__609->SetBinContent(318,0.8950617);
   S18_ThetaY_0_5__609->SetBinContent(319,0.9197531);
   S18_ThetaY_0_5__609->SetBinContent(320,0.8888889);
   S18_ThetaY_0_5__609->SetBinContent(321,0.7685185);
   S18_ThetaY_0_5__609->SetBinContent(322,0.3055556);
   S18_ThetaY_0_5__609->SetBinContent(323,0.05864198);
   S18_ThetaY_0_5__609->SetBinContent(324,0.009259259);
   S18_ThetaY_0_5__609->SetBinError(306,0.004364857);
   S18_ThetaY_0_5__609->SetBinError(307,0.01112824);
   S18_ThetaY_0_5__609->SetBinError(308,0.02600664);
   S18_ThetaY_0_5__609->SetBinError(309,0.04536092);
   S18_ThetaY_0_5__609->SetBinError(310,0.05319039);
   S18_ThetaY_0_5__609->SetBinError(311,0.05521155);
   S18_ThetaY_0_5__609->SetBinError(312,0.05555556);
   S18_ThetaY_0_5__609->SetBinError(313,0.05381357);
   S18_ThetaY_0_5__609->SetBinError(314,0.05336919);
   S18_ThetaY_0_5__609->SetBinError(315,0.05372499);
   S18_ThetaY_0_5__609->SetBinError(316,0.05451704);
   S18_ThetaY_0_5__609->SetBinError(317,0.05512522);
   S18_ThetaY_0_5__609->SetBinError(318,0.05255983);
   S18_ThetaY_0_5__609->SetBinError(319,0.05327987);
   S18_ThetaY_0_5__609->SetBinError(320,0.05237828);
   S18_ThetaY_0_5__609->SetBinError(321,0.04870288);
   S18_ThetaY_0_5__609->SetBinError(322,0.03070949);
   S18_ThetaY_0_5__609->SetBinError(323,0.01345339);
   S18_ThetaY_0_5__609->SetBinError(324,0.005345836);
   S18_ThetaY_0_5__609->SetMinimum(0);
   S18_ThetaY_0_5__609->SetMaximum(1.12318);
   S18_ThetaY_0_5__609->SetEntries(4026);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__609->SetLineColor(ci);
   S18_ThetaY_0_5__609->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__609->SetMarkerColor(ci);
   S18_ThetaY_0_5__609->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__609->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__609->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__609->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__609->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__609->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__609->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__609->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__609->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__609->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__609->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__609->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__609->Draw("AE");
   
   TH1D *ThetaY_0_5__610 = new TH1D("ThetaY_0_5__610","",630,-1575,1575);
   ThetaY_0_5__610->SetBinContent(303,0.000451421);
   ThetaY_0_5__610->SetBinContent(304,0.05472453);
   ThetaY_0_5__610->SetBinContent(305,0.2430902);
   ThetaY_0_5__610->SetBinContent(306,0.5117677);
   ThetaY_0_5__610->SetBinContent(307,0.7083821);
   ThetaY_0_5__610->SetBinContent(308,0.8200472);
   ThetaY_0_5__610->SetBinContent(309,0.9259259);
   ThetaY_0_5__610->SetBinContent(310,0.9645635);
   ThetaY_0_5__610->SetBinContent(311,0.9977224);
   ThetaY_0_5__610->SetBinContent(312,1);
   ThetaY_0_5__610->SetBinContent(313,1.017236);
   ThetaY_0_5__610->SetBinContent(314,1.018898);
   ThetaY_0_5__610->SetBinContent(315,1.021073);
   ThetaY_0_5__610->SetBinContent(316,1.016108);
   ThetaY_0_5__610->SetBinContent(317,1.00673);
   ThetaY_0_5__610->SetBinContent(318,1.017482);
   ThetaY_0_5__610->SetBinContent(319,1.009275);
   ThetaY_0_5__610->SetBinContent(320,0.9970042);
   ThetaY_0_5__610->SetBinContent(321,0.9641531);
   ThetaY_0_5__610->SetBinContent(322,0.9052426);
   ThetaY_0_5__610->SetBinContent(323,0.8333641);
   ThetaY_0_5__610->SetBinContent(324,0.7053042);
   ThetaY_0_5__610->SetBinContent(325,0.5159947);
   ThetaY_0_5__610->SetBinContent(326,0.2400123);
   ThetaY_0_5__610->SetBinContent(327,0.05275469);
   ThetaY_0_5__610->SetBinContent(328,0.000451421);
   ThetaY_0_5__610->SetBinError(303,9.624327e-05);
   ThetaY_0_5__610->SetBinError(304,0.00105967);
   ThetaY_0_5__610->SetBinError(305,0.002233383);
   ThetaY_0_5__610->SetBinError(306,0.003240529);
   ThetaY_0_5__610->SetBinError(307,0.00381253);
   ThetaY_0_5__610->SetBinError(308,0.004102031);
   ThetaY_0_5__610->SetBinError(309,0.004358807);
   ThetaY_0_5__610->SetBinError(310,0.004448821);
   ThetaY_0_5__610->SetBinError(311,0.004524644);
   ThetaY_0_5__610->SetBinError(312,0.004529805);
   ThetaY_0_5__610->SetBinError(313,0.004568676);
   ThetaY_0_5__610->SetBinError(314,0.004572407);
   ThetaY_0_5__610->SetBinError(315,0.004577285);
   ThetaY_0_5__610->SetBinError(316,0.004566141);
   ThetaY_0_5__610->SetBinError(317,0.004545023);
   ThetaY_0_5__610->SetBinError(318,0.004569229);
   ThetaY_0_5__610->SetBinError(319,0.004550763);
   ThetaY_0_5__610->SetBinError(320,0.004523015);
   ThetaY_0_5__610->SetBinError(321,0.004447874);
   ThetaY_0_5__610->SetBinError(322,0.004309849);
   ThetaY_0_5__610->SetBinError(323,0.004135204);
   ThetaY_0_5__610->SetBinError(324,0.003804239);
   ThetaY_0_5__610->SetBinError(325,0.003253884);
   ThetaY_0_5__610->SetBinError(326,0.002219199);
   ThetaY_0_5__610->SetBinError(327,0.001040423);
   ThetaY_0_5__610->SetBinError(328,9.624327e-05);
   ThetaY_0_5__610->SetEntries(903925);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__610->SetLineColor(ci);
   ThetaY_0_5__610->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__610->SetMarkerColor(ci);
   ThetaY_0_5__610->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__610->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__610->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__610->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__610->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__610->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__610->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__610->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__610->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__610->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__610->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__610->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__610->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__610->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__610->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__610->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__610->Draw("AEsame");
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
   
   Double_t _fx3204[26] = {
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
   Double_t _fy3204[26] = {
   0,
   0,
   0,
   0.0120618,
   0.05664098,
   0.2672234,
   0.72,
   0.9503436,
   0.989909,
   1,
   0.9223735,
   0.905723,
   0.9158846,
   0.9476979,
   0.9779858,
   0.8796828,
   0.9113011,
   0.8915598,
   0.7970918,
   0.33754,
   0.07036777,
   0.01312804,
   0,
   0,
   0,
   0};
   Double_t _felx3204[26] = {
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
   Double_t _fely3204[26] = {
   0,
   0,
   0,
   0.007791,
   0.0155078,
   0.03166643,
   0.04906836,
   0.05528675,
   0.05548983,
   0.05571061,
   0.05303401,
   0.0525069,
   0.05274652,
   0.05379222,
   0.05490509,
   0.05177722,
   0.05291971,
   0.05266003,
   0.05061278,
   0.03390427,
   0.01600378,
   0.007144965,
   0,
   0,
   0,
   0};
   Double_t _fehx3204[26] = {
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
   Double_t _fehy3204[26] = {
   13.12896,
   0.103868,
   0.02337654,
   0.01591015,
   0.02047257,
   0.03566214,
   0.05253319,
   0.05860185,
   0.05869228,
   0.05890545,
   0.05617578,
   0.05564392,
   0.05587649,
   0.0569369,
   0.05807875,
   0.05491941,
   0.05608692,
   0.05586735,
   0.05393444,
   0.03749451,
   0.02013567,
   0.01277112,
   0.01101247,
   0.02367634,
   0.1077478,
   13.12896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3204,_fy3204,_felx3204,_fehx3204,_fely3204,_fehy3204);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3204 = new TH1F("Graph_Graph3204","",100,-100,100);
   Graph_Graph3204->SetMinimum(0);
   Graph_Graph3204->SetMaximum(1.5);
   Graph_Graph3204->SetDirectory(0);
   Graph_Graph3204->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3204->SetLineColor(ci);
   Graph_Graph3204->GetXaxis()->SetRange(1,100);
   Graph_Graph3204->GetXaxis()->CenterTitle(true);
   Graph_Graph3204->GetXaxis()->SetLabelFont(42);
   Graph_Graph3204->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3204->GetXaxis()->SetTitleFont(42);
   Graph_Graph3204->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3204->GetYaxis()->CenterTitle(true);
   Graph_Graph3204->GetYaxis()->SetLabelFont(42);
   Graph_Graph3204->GetYaxis()->SetTitleFont(42);
   Graph_Graph3204->GetZaxis()->SetLabelFont(42);
   Graph_Graph3204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3204->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3204);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.12318,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__611 = new TH2D("ThetaY_vs_Y_0_5__611","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__611->SetBinContent(7891,22);
   ThetaY_vs_Y_0_5__611->SetBinContent(7917,2667);
   ThetaY_vs_Y_0_5__611->SetBinContent(7943,11847);
   ThetaY_vs_Y_0_5__611->SetBinContent(7969,24941);
   ThetaY_vs_Y_0_5__611->SetBinContent(7995,34523);
   ThetaY_vs_Y_0_5__611->SetBinContent(8021,39965);
   ThetaY_vs_Y_0_5__611->SetBinContent(8047,45125);
   ThetaY_vs_Y_0_5__611->SetBinContent(8073,47008);
   ThetaY_vs_Y_0_5__611->SetBinContent(8099,48624);
   ThetaY_vs_Y_0_5__611->SetBinContent(8125,48735);
   ThetaY_vs_Y_0_5__611->SetBinContent(8151,49575);
   ThetaY_vs_Y_0_5__611->SetBinContent(8177,49656);
   ThetaY_vs_Y_0_5__611->SetBinContent(8203,49762);
   ThetaY_vs_Y_0_5__611->SetBinContent(8229,49520);
   ThetaY_vs_Y_0_5__611->SetBinContent(8255,49063);
   ThetaY_vs_Y_0_5__611->SetBinContent(8281,49587);
   ThetaY_vs_Y_0_5__611->SetBinContent(8307,49187);
   ThetaY_vs_Y_0_5__611->SetBinContent(8333,48589);
   ThetaY_vs_Y_0_5__611->SetBinContent(8359,46988);
   ThetaY_vs_Y_0_5__611->SetBinContent(8385,44117);
   ThetaY_vs_Y_0_5__611->SetBinContent(8411,40614);
   ThetaY_vs_Y_0_5__611->SetBinContent(8437,34373);
   ThetaY_vs_Y_0_5__611->SetBinContent(8463,25147);
   ThetaY_vs_Y_0_5__611->SetBinContent(8489,11697);
   ThetaY_vs_Y_0_5__611->SetBinContent(8515,2571);
   ThetaY_vs_Y_0_5__611->SetBinContent(8541,22);
   ThetaY_vs_Y_0_5__611->SetEntries(903925);
   ThetaY_vs_Y_0_5__611->SetContour(20);
   ThetaY_vs_Y_0_5__611->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__611->SetContourLevel(1,2488.1);
   ThetaY_vs_Y_0_5__611->SetContourLevel(2,4976.2);
   ThetaY_vs_Y_0_5__611->SetContourLevel(3,7464.3);
   ThetaY_vs_Y_0_5__611->SetContourLevel(4,9952.4);
   ThetaY_vs_Y_0_5__611->SetContourLevel(5,12440.5);
   ThetaY_vs_Y_0_5__611->SetContourLevel(6,14928.6);
   ThetaY_vs_Y_0_5__611->SetContourLevel(7,17416.7);
   ThetaY_vs_Y_0_5__611->SetContourLevel(8,19904.8);
   ThetaY_vs_Y_0_5__611->SetContourLevel(9,22392.9);
   ThetaY_vs_Y_0_5__611->SetContourLevel(10,24881);
   ThetaY_vs_Y_0_5__611->SetContourLevel(11,27369.1);
   ThetaY_vs_Y_0_5__611->SetContourLevel(12,29857.2);
   ThetaY_vs_Y_0_5__611->SetContourLevel(13,32345.3);
   ThetaY_vs_Y_0_5__611->SetContourLevel(14,34833.4);
   ThetaY_vs_Y_0_5__611->SetContourLevel(15,37321.5);
   ThetaY_vs_Y_0_5__611->SetContourLevel(16,39809.6);
   ThetaY_vs_Y_0_5__611->SetContourLevel(17,42297.7);
   ThetaY_vs_Y_0_5__611->SetContourLevel(18,44785.8);
   ThetaY_vs_Y_0_5__611->SetContourLevel(19,47273.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__611->SetLineColor(ci);
   ThetaY_vs_Y_0_5__611->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__611->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__611->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__611->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__611->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__611->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__611->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__611->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__611->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__611->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__611->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__611->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__611->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__611->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__611->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
