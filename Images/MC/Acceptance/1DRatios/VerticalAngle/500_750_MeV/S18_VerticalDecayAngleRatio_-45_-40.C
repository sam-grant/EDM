void S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1107169,125,2.103622);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI45_mI40__411 = new TH1D("S18_ThetaY_mI45_mI40__411","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__411->SetBinContent(316,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(317,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(318,1.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(319,1.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(320,1);
   S18_ThetaY_mI45_mI40__411->SetBinContent(321,1.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(322,0.75);
   S18_ThetaY_mI45_mI40__411->SetBinContent(323,0.5);
   S18_ThetaY_mI45_mI40__411->SetBinContent(324,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(325,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(326,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinContent(327,1);
   S18_ThetaY_mI45_mI40__411->SetBinError(316,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinError(317,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinError(318,0.559017);
   S18_ThetaY_mI45_mI40__411->SetBinError(319,0.559017);
   S18_ThetaY_mI45_mI40__411->SetBinError(320,0.5);
   S18_ThetaY_mI45_mI40__411->SetBinError(321,0.559017);
   S18_ThetaY_mI45_mI40__411->SetBinError(322,0.4330127);
   S18_ThetaY_mI45_mI40__411->SetBinError(323,0.3535534);
   S18_ThetaY_mI45_mI40__411->SetBinError(324,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinError(325,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinError(326,0.25);
   S18_ThetaY_mI45_mI40__411->SetBinError(327,0.5);
   S18_ThetaY_mI45_mI40__411->SetMinimum(0);
   S18_ThetaY_mI45_mI40__411->SetMaximum(1.882188);
   S18_ThetaY_mI45_mI40__411->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__411->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__411->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__411->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__411->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__411->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__411->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__411->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__411->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__411->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__411->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__411->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__411->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__411->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__411->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__411->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__411->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__412 = new TH1D("ThetaY_mI45_mI40__412","",630,-1575,1575);
   ThetaY_mI45_mI40__412->SetBinContent(300,0.005610098);
   ThetaY_mI45_mI40__412->SetBinContent(301,0.1037868);
   ThetaY_mI45_mI40__412->SetBinContent(302,0.2903226);
   ThetaY_mI45_mI40__412->SetBinContent(303,0.6605891);
   ThetaY_mI45_mI40__412->SetBinContent(304,1.004208);
   ThetaY_mI45_mI40__412->SetBinContent(305,1.246844);
   ThetaY_mI45_mI40__412->SetBinContent(306,1.375877);
   ThetaY_mI45_mI40__412->SetBinContent(307,1.568022);
   ThetaY_mI45_mI40__412->SetBinContent(308,1.58345);
   ThetaY_mI45_mI40__412->SetBinContent(309,1.650771);
   ThetaY_mI45_mI40__412->SetBinContent(310,1.636746);
   ThetaY_mI45_mI40__412->SetBinContent(311,1.647966);
   ThetaY_mI45_mI40__412->SetBinContent(312,1.626928);
   ThetaY_mI45_mI40__412->SetBinContent(313,1.69986);
   ThetaY_mI45_mI40__412->SetBinContent(314,1.71108);
   ThetaY_mI45_mI40__412->SetBinContent(315,1.612903);
   ThetaY_mI45_mI40__412->SetBinContent(316,1.643759);
   ThetaY_mI45_mI40__412->SetBinContent(317,1.597475);
   ThetaY_mI45_mI40__412->SetBinContent(318,1.691445);
   ThetaY_mI45_mI40__412->SetBinContent(319,1.683029);
   ThetaY_mI45_mI40__412->SetBinContent(320,1.685835);
   ThetaY_mI45_mI40__412->SetBinContent(321,1.629734);
   ThetaY_mI45_mI40__412->SetBinContent(322,1.653576);
   ThetaY_mI45_mI40__412->SetBinContent(323,1.545582);
   ThetaY_mI45_mI40__412->SetBinContent(324,1.481066);
   ThetaY_mI45_mI40__412->SetBinContent(325,1.371669);
   ThetaY_mI45_mI40__412->SetBinContent(326,1.241234);
   ThetaY_mI45_mI40__412->SetBinContent(327,1);
   ThetaY_mI45_mI40__412->SetBinContent(328,0.6058906);
   ThetaY_mI45_mI40__412->SetBinContent(329,0.2931276);
   ThetaY_mI45_mI40__412->SetBinContent(330,0.1234222);
   ThetaY_mI45_mI40__412->SetBinContent(331,0.007012623);
   ThetaY_mI45_mI40__412->SetBinError(300,0.002805049);
   ThetaY_mI45_mI40__412->SetBinError(301,0.01206497);
   ThetaY_mI45_mI40__412->SetBinError(302,0.02017881);
   ThetaY_mI45_mI40__412->SetBinError(303,0.03043834);
   ThetaY_mI45_mI40__412->SetBinError(304,0.037529);
   ThetaY_mI45_mI40__412->SetBinError(305,0.04181782);
   ThetaY_mI45_mI40__412->SetBinError(306,0.04392836);
   ThetaY_mI45_mI40__412->SetBinError(307,0.04689552);
   ThetaY_mI45_mI40__412->SetBinError(308,0.04712566);
   ThetaY_mI45_mI40__412->SetBinError(309,0.04811702);
   ThetaY_mI45_mI40__412->SetBinError(310,0.04791218);
   ThetaY_mI45_mI40__412->SetBinError(311,0.04807612);
   ThetaY_mI45_mI40__412->SetBinError(312,0.04776826);
   ThetaY_mI45_mI40__412->SetBinError(313,0.0488272);
   ThetaY_mI45_mI40__412->SetBinError(314,0.04898808);
   ThetaY_mI45_mI40__412->SetBinError(315,0.04756192);
   ThetaY_mI45_mI40__412->SetBinError(316,0.04801471);
   ThetaY_mI45_mI40__412->SetBinError(317,0.0473339);
   ThetaY_mI45_mI40__412->SetBinError(318,0.04870619);
   ThetaY_mI45_mI40__412->SetBinError(319,0.04858488);
   ThetaY_mI45_mI40__412->SetBinError(320,0.04862535);
   ThetaY_mI45_mI40__412->SetBinError(321,0.04780943);
   ThetaY_mI45_mI40__412->SetBinError(322,0.04815788);
   ThetaY_mI45_mI40__412->SetBinError(323,0.04655875);
   ThetaY_mI45_mI40__412->SetBinError(324,0.04557665);
   ThetaY_mI45_mI40__412->SetBinError(325,0.04386114);
   ThetaY_mI45_mI40__412->SetBinError(326,0.04172363);
   ThetaY_mI45_mI40__412->SetBinError(327,0.03745029);
   ThetaY_mI45_mI40__412->SetBinError(328,0.02915093);
   ThetaY_mI45_mI40__412->SetBinError(329,0.02027606);
   ThetaY_mI45_mI40__412->SetBinError(330,0.01315685);
   ThetaY_mI45_mI40__412->SetBinError(331,0.00313614);
   ThetaY_mI45_mI40__412->SetEntries(27578);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__412->SetLineColor(ci);
   ThetaY_mI45_mI40__412->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__412->SetMarkerColor(ci);
   ThetaY_mI45_mI40__412->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__412->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__412->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__412->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__412->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__412->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__412->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__412->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__412->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__412->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__412->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__412->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__412->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__412->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__412->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__412->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__412->Draw("AEsame");
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
   
   Double_t _fx3138[32] = {
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
   Double_t _fy3138[32] = {
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
   0.1520904,
   0.1564969,
   0.7390133,
   0.7427083,
   0.593178,
   0.7669966,
   0.4535623,
   0.3235027,
   0.1687973,
   0.1822597,
   0.2014124,
   1,
   0,
   0,
   0,
   0};
   Double_t _felx3138[32] = {
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
   Double_t _fely3138[32] = {
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
   0.1258367,
   0.1294832,
   0.3197571,
   0.3213586,
   0.2842604,
   0.3318864,
   0.247075,
   0.2090717,
   0.1396622,
   0.150803,
   0.1666536,
   0.4796477,
   0,
   0,
   0,
   0};
   Double_t _fehx3138[32] = {
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
   Double_t _fehy3138[32] = {
   104.1833,
   4.490247,
   1.592395,
   0.6980983,
   0.4589167,
   0.3695187,
   0.334832,
   0.2937678,
   0.2909033,
   0.2790305,
   0.2814234,
   0.2795058,
   0.283123,
   0.2709666,
   0.2691884,
   0.2855869,
   0.3502286,
   0.3603904,
   0.5016761,
   0.5041932,
   0.4704167,
   0.5207407,
   0.4423008,
   0.4275757,
   0.3887607,
   0.4198185,
   0.4640172,
   0.7946614,
   0.7612554,
   1.577089,
   3.768396,
   79.34572};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3138,_fy3138,_felx3138,_fehx3138,_fely3138,_fehy3138);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3138 = new TH1F("Graph_Graph3138","",100,-100,100);
   Graph_Graph3138->SetMinimum(0);
   Graph_Graph3138->SetMaximum(1.5);
   Graph_Graph3138->SetDirectory(0);
   Graph_Graph3138->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3138->SetLineColor(ci);
   Graph_Graph3138->GetXaxis()->SetRange(1,100);
   Graph_Graph3138->GetXaxis()->CenterTitle(true);
   Graph_Graph3138->GetXaxis()->SetLabelFont(42);
   Graph_Graph3138->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3138->GetXaxis()->SetTitleFont(42);
   Graph_Graph3138->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3138->GetYaxis()->CenterTitle(true);
   Graph_Graph3138->GetYaxis()->SetLabelFont(42);
   Graph_Graph3138->GetYaxis()->SetTitleFont(42);
   Graph_Graph3138->GetZaxis()->SetLabelFont(42);
   Graph_Graph3138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3138->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3138);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.882188,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__413 = new TH2D("ThetaY_vs_Y_mI45_mI40__413","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7804,4);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7830,74);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7856,207);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7882,471);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7908,716);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7934,889);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7960,981);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(7986,1118);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8012,1129);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8038,1177);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8064,1167);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8090,1175);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8116,1160);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8142,1212);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8168,1220);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8194,1150);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8220,1172);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8246,1139);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8272,1206);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8298,1200);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8324,1202);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8350,1162);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8376,1179);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8402,1102);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8428,1056);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8454,978);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8480,885);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8506,713);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8532,432);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8558,209);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8584,88);
   ThetaY_vs_Y_mI45_mI40__413->SetBinContent(8610,5);
   ThetaY_vs_Y_mI45_mI40__413->SetEntries(27578);
   ThetaY_vs_Y_mI45_mI40__413->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(1,61);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(2,122);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(3,183);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(4,244);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(5,305);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(6,366);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(7,427);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(8,488);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(9,549);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(10,610);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(11,671);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(12,732);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(13,793);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(14,854);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(15,915);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(16,976);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(17,1037);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(18,1098);
   ThetaY_vs_Y_mI45_mI40__413->SetContourLevel(19,1159);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__413->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__413->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__413->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__413->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__413->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__413->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__413->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__413->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__413->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__413->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__413->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__413->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__413->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__413->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__413->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__413->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-45_-40","Reco vertices","lpf");
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
