void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:40 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06555571,125,1.245558);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__396 = new TH1D("S12_ThetaY_25_30__396","",630,-1575,1575);
   S12_ThetaY_25_30__396->SetBinContent(301,0.02777778);
   S12_ThetaY_25_30__396->SetBinContent(302,0.08333333);
   S12_ThetaY_25_30__396->SetBinContent(303,0.1944444);
   S12_ThetaY_25_30__396->SetBinContent(304,0.5277778);
   S12_ThetaY_25_30__396->SetBinContent(305,0.5833333);
   S12_ThetaY_25_30__396->SetBinContent(306,0.4444444);
   S12_ThetaY_25_30__396->SetBinContent(307,0.75);
   S12_ThetaY_25_30__396->SetBinContent(308,0.8055556);
   S12_ThetaY_25_30__396->SetBinContent(309,0.9166667);
   S12_ThetaY_25_30__396->SetBinContent(310,0.6388889);
   S12_ThetaY_25_30__396->SetBinContent(311,0.8055556);
   S12_ThetaY_25_30__396->SetBinContent(312,0.6944444);
   S12_ThetaY_25_30__396->SetBinContent(313,1);
   S12_ThetaY_25_30__396->SetBinContent(314,0.6944444);
   S12_ThetaY_25_30__396->SetBinContent(315,0.7777778);
   S12_ThetaY_25_30__396->SetBinContent(316,0.7777778);
   S12_ThetaY_25_30__396->SetBinContent(317,0.8333333);
   S12_ThetaY_25_30__396->SetBinContent(318,0.3055556);
   S12_ThetaY_25_30__396->SetBinContent(319,0.02777778);
   S12_ThetaY_25_30__396->SetBinError(301,0.02777778);
   S12_ThetaY_25_30__396->SetBinError(302,0.04811252);
   S12_ThetaY_25_30__396->SetBinError(303,0.07349309);
   S12_ThetaY_25_30__396->SetBinError(304,0.1210805);
   S12_ThetaY_25_30__396->SetBinError(305,0.1272938);
   S12_ThetaY_25_30__396->SetBinError(306,0.1111111);
   S12_ThetaY_25_30__396->SetBinError(307,0.1443376);
   S12_ThetaY_25_30__396->SetBinError(308,0.1495879);
   S12_ThetaY_25_30__396->SetBinError(309,0.1595712);
   S12_ThetaY_25_30__396->SetBinError(310,0.1332175);
   S12_ThetaY_25_30__396->SetBinError(311,0.1495879);
   S12_ThetaY_25_30__396->SetBinError(312,0.1388889);
   S12_ThetaY_25_30__396->SetBinError(313,0.1666667);
   S12_ThetaY_25_30__396->SetBinError(314,0.1388889);
   S12_ThetaY_25_30__396->SetBinError(315,0.1469862);
   S12_ThetaY_25_30__396->SetBinError(316,0.1469862);
   S12_ThetaY_25_30__396->SetBinError(317,0.1521452);
   S12_ThetaY_25_30__396->SetBinError(318,0.09212847);
   S12_ThetaY_25_30__396->SetBinError(319,0.02777778);
   S12_ThetaY_25_30__396->SetMinimum(0);
   S12_ThetaY_25_30__396->SetMaximum(1.114447);
   S12_ThetaY_25_30__396->SetEntries(392);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__396->SetLineColor(ci);
   S12_ThetaY_25_30__396->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__396->SetMarkerColor(ci);
   S12_ThetaY_25_30__396->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__396->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__396->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__396->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__396->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__396->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__396->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__396->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__396->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__396->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__396->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__396->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__396->Draw("AE");
   
   TH1D *ThetaY_25_30__397 = new TH1D("ThetaY_25_30__397","",630,-1575,1575);
   ThetaY_25_30__397->SetBinContent(300,0.006361584);
   ThetaY_25_30__397->SetBinContent(301,0.06515494);
   ThetaY_25_30__397->SetBinContent(302,0.1899241);
   ThetaY_25_30__397->SetBinContent(303,0.3809768);
   ThetaY_25_30__397->SetBinContent(304,0.5998358);
   ThetaY_25_30__397->SetBinContent(305,0.7367125);
   ThetaY_25_30__397->SetBinContent(306,0.8407552);
   ThetaY_25_30__397->SetBinContent(307,0.9148369);
   ThetaY_25_30__397->SetBinContent(308,0.9743485);
   ThetaY_25_30__397->SetBinContent(309,1.007798);
   ThetaY_25_30__397->SetBinContent(310,0.9988713);
   ThetaY_25_30__397->SetBinContent(311,0.9870716);
   ThetaY_25_30__397->SetBinContent(312,0.9829674);
   ThetaY_25_30__397->SetBinContent(313,1);
   ThetaY_25_30__397->SetBinContent(314,0.9899446);
   ThetaY_25_30__397->SetBinContent(315,1.007798);
   ThetaY_25_30__397->SetBinContent(316,0.990355);
   ThetaY_25_30__397->SetBinContent(317,1.002668);
   ThetaY_25_30__397->SetBinContent(318,1.013134);
   ThetaY_25_30__397->SetBinContent(319,1.011492);
   ThetaY_25_30__397->SetBinContent(320,1.005849);
   ThetaY_25_30__397->SetBinContent(321,0.9888159);
   ThetaY_25_30__397->SetBinContent(322,0.9660373);
   ThetaY_25_30__397->SetBinContent(323,0.9481839);
   ThetaY_25_30__397->SetBinContent(324,0.9116561);
   ThetaY_25_30__397->SetBinContent(325,0.8391135);
   ThetaY_25_30__397->SetBinContent(326,0.7485122);
   ThetaY_25_30__397->SetBinContent(327,0.6040427);
   ThetaY_25_30__397->SetBinContent(328,0.3882619);
   ThetaY_25_30__397->SetBinContent(329,0.1915658);
   ThetaY_25_30__397->SetBinContent(330,0.06351324);
   ThetaY_25_30__397->SetBinContent(331,0.004925097);
   ThetaY_25_30__397->SetBinError(300,0.000807922);
   ThetaY_25_30__397->SetBinError(301,0.002585595);
   ThetaY_25_30__397->SetBinError(302,0.004414452);
   ThetaY_25_30__397->SetBinError(303,0.006252246);
   ThetaY_25_30__397->SetBinError(304,0.007845182);
   ThetaY_25_30__397->SetBinError(305,0.008694324);
   ThetaY_25_30__397->SetBinError(306,0.009287986);
   ThetaY_25_30__397->SetBinError(307,0.009688546);
   ThetaY_25_30__397->SetBinError(308,0.009998709);
   ThetaY_25_30__397->SetBinError(309,0.01016889);
   ThetaY_25_30__397->SetBinError(310,0.01012375);
   ThetaY_25_30__397->SetBinError(311,0.01006378);
   ThetaY_25_30__397->SetBinError(312,0.01004284);
   ThetaY_25_30__397->SetBinError(313,0.01012947);
   ThetaY_25_30__397->SetBinError(314,0.01007842);
   ThetaY_25_30__397->SetBinError(315,0.01016889);
   ThetaY_25_30__397->SetBinError(316,0.0100805);
   ThetaY_25_30__397->SetBinError(317,0.01014297);
   ThetaY_25_30__397->SetBinError(318,0.01019577);
   ThetaY_25_30__397->SetBinError(319,0.01018751);
   ThetaY_25_30__397->SetBinError(320,0.01015905);
   ThetaY_25_30__397->SetBinError(321,0.01007267);
   ThetaY_25_30__397->SetBinError(322,0.009955974);
   ThetaY_25_30__397->SetBinError(323,0.009863546);
   ThetaY_25_30__397->SetBinError(324,0.009671689);
   ThetaY_25_30__397->SetBinError(325,0.009278914);
   ThetaY_25_30__397->SetBinError(326,0.008763675);
   ThetaY_25_30__397->SetBinError(327,0.007872644);
   ThetaY_25_30__397->SetBinError(328,0.006311741);
   ThetaY_25_30__397->SetBinError(329,0.00443349);
   ThetaY_25_30__397->SetBinError(330,0.002552812);
   ThetaY_25_30__397->SetBinError(331,0.0007108766);
   ThetaY_25_30__397->SetEntries(227681);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__397->SetLineColor(ci);
   ThetaY_25_30__397->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__397->SetMarkerColor(ci);
   ThetaY_25_30__397->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__397->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__397->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__397->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__397->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__397->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__397->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__397->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__397->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__397->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__397->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__397->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__397->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__397->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__397->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__397->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__397->Draw("AEsame");
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
   
   Double_t _fx3133[32] = {
   -77.5,
   -72.5,
   -67.5,
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
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3133[32] = {
   0,
   0.4263342,
   0.4387718,
   0.5103839,
   0.8798704,
   0.7918059,
   0.5286253,
   0.8198183,
   0.8267633,
   0.9095737,
   0.6396108,
   0.8161065,
   0.7064776,
   1,
   0.7014983,
   0.7717595,
   0.7853525,
   0.8311161,
   0.3015945,
   0.02746219,
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
   Double_t _felx3133[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3133[32] = {
   0,
   0.3527892,
   0.238937,
   0.1883754,
   0.2003739,
   0.1716393,
   0.1308824,
   0.1570199,
   0.152861,
   0.1577868,
   0.1325415,
   0.1508878,
   0.1405203,
   0.1661868,
   0.1395287,
   0.1451721,
   0.1477326,
   0.1511139,
   0.08958042,
   0.02271843,
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
   Double_t _fehx3133[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3133[32] = {
   8.15934,
   0.9829162,
   0.4274884,
   0.2752974,
   0.2522241,
   0.2136245,
   0.1681558,
   0.1904382,
   0.1841415,
   0.1878778,
   0.163349,
   0.1817636,
   0.1717142,
   0.19642,
   0.170502,
   0.1754528,
   0.1785485,
   0.1814677,
   0.1211853,
   0.06316059,
   0.05084691,
   0.05172285,
   0.05294256,
   0.05393952,
   0.05610097,
   0.06095153,
   0.06833014,
   0.08467529,
   0.131746,
   0.2670869,
   0.806377,
   10.58514};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3133,_fy3133,_felx3133,_fehx3133,_fely3133,_fehy3133);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3133 = new TH1F("Graph_Graph3133","",100,-100,100);
   Graph_Graph3133->SetMinimum(0);
   Graph_Graph3133->SetMaximum(1.5);
   Graph_Graph3133->SetDirectory(0);
   Graph_Graph3133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3133->SetLineColor(ci);
   Graph_Graph3133->GetXaxis()->SetRange(1,100);
   Graph_Graph3133->GetXaxis()->CenterTitle(true);
   Graph_Graph3133->GetXaxis()->SetLabelFont(42);
   Graph_Graph3133->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3133->GetXaxis()->SetTitleFont(42);
   Graph_Graph3133->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3133->GetYaxis()->CenterTitle(true);
   Graph_Graph3133->GetYaxis()->SetLabelFont(42);
   Graph_Graph3133->GetYaxis()->SetTitleFont(42);
   Graph_Graph3133->GetZaxis()->SetLabelFont(42);
   Graph_Graph3133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3133->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3133);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.114447,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__398 = new TH2D("ThetaY_vs_Y_25_30__398","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__398->SetBinContent(7818,62);
   ThetaY_vs_Y_25_30__398->SetBinContent(7844,635);
   ThetaY_vs_Y_25_30__398->SetBinContent(7870,1851);
   ThetaY_vs_Y_25_30__398->SetBinContent(7896,3713);
   ThetaY_vs_Y_25_30__398->SetBinContent(7922,5846);
   ThetaY_vs_Y_25_30__398->SetBinContent(7948,7180);
   ThetaY_vs_Y_25_30__398->SetBinContent(7974,8194);
   ThetaY_vs_Y_25_30__398->SetBinContent(8000,8916);
   ThetaY_vs_Y_25_30__398->SetBinContent(8026,9496);
   ThetaY_vs_Y_25_30__398->SetBinContent(8052,9822);
   ThetaY_vs_Y_25_30__398->SetBinContent(8078,9735);
   ThetaY_vs_Y_25_30__398->SetBinContent(8104,9620);
   ThetaY_vs_Y_25_30__398->SetBinContent(8130,9580);
   ThetaY_vs_Y_25_30__398->SetBinContent(8156,9746);
   ThetaY_vs_Y_25_30__398->SetBinContent(8182,9648);
   ThetaY_vs_Y_25_30__398->SetBinContent(8208,9822);
   ThetaY_vs_Y_25_30__398->SetBinContent(8234,9652);
   ThetaY_vs_Y_25_30__398->SetBinContent(8260,9772);
   ThetaY_vs_Y_25_30__398->SetBinContent(8286,9874);
   ThetaY_vs_Y_25_30__398->SetBinContent(8312,9858);
   ThetaY_vs_Y_25_30__398->SetBinContent(8338,9803);
   ThetaY_vs_Y_25_30__398->SetBinContent(8364,9637);
   ThetaY_vs_Y_25_30__398->SetBinContent(8390,9415);
   ThetaY_vs_Y_25_30__398->SetBinContent(8416,9241);
   ThetaY_vs_Y_25_30__398->SetBinContent(8442,8885);
   ThetaY_vs_Y_25_30__398->SetBinContent(8468,8178);
   ThetaY_vs_Y_25_30__398->SetBinContent(8494,7295);
   ThetaY_vs_Y_25_30__398->SetBinContent(8520,5887);
   ThetaY_vs_Y_25_30__398->SetBinContent(8546,3784);
   ThetaY_vs_Y_25_30__398->SetBinContent(8572,1867);
   ThetaY_vs_Y_25_30__398->SetBinContent(8598,619);
   ThetaY_vs_Y_25_30__398->SetBinContent(8624,48);
   ThetaY_vs_Y_25_30__398->SetEntries(227681);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__398->SetLineColor(ci);
   ThetaY_vs_Y_25_30__398->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__398->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__398->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__398->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__398->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__398->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__398->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__398->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__398->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__398->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__398->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__398->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__398->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__398->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__398->Draw("COL");
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
