void S12_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__720 = new TH1D("S12_ThetaY_mI5_0__720","",630,-1575,1575);
   S12_ThetaY_mI5_0__720->SetBinContent(308,0.004444444);
   S12_ThetaY_mI5_0__720->SetBinContent(309,0.05555556);
   S12_ThetaY_mI5_0__720->SetBinContent(310,0.4333333);
   S12_ThetaY_mI5_0__720->SetBinContent(311,0.7466667);
   S12_ThetaY_mI5_0__720->SetBinContent(312,0.8422222);
   S12_ThetaY_mI5_0__720->SetBinContent(313,0.8688889);
   S12_ThetaY_mI5_0__720->SetBinContent(314,0.9244444);
   S12_ThetaY_mI5_0__720->SetBinContent(315,1);
   S12_ThetaY_mI5_0__720->SetBinContent(316,0.8488889);
   S12_ThetaY_mI5_0__720->SetBinContent(317,0.8933333);
   S12_ThetaY_mI5_0__720->SetBinContent(318,0.8622222);
   S12_ThetaY_mI5_0__720->SetBinContent(319,0.8844444);
   S12_ThetaY_mI5_0__720->SetBinContent(320,0.7688889);
   S12_ThetaY_mI5_0__720->SetBinContent(321,0.5511111);
   S12_ThetaY_mI5_0__720->SetBinContent(322,0.1711111);
   S12_ThetaY_mI5_0__720->SetBinContent(323,0.02);
   S12_ThetaY_mI5_0__720->SetBinError(308,0.003142697);
   S12_ThetaY_mI5_0__720->SetBinError(309,0.01111111);
   S12_ThetaY_mI5_0__720->SetBinError(310,0.03103164);
   S12_ThetaY_mI5_0__720->SetBinError(311,0.04073401);
   S12_ThetaY_mI5_0__720->SetBinError(312,0.04326205);
   S12_ThetaY_mI5_0__720->SetBinError(313,0.0439416);
   S12_ThetaY_mI5_0__720->SetBinError(314,0.04532462);
   S12_ThetaY_mI5_0__720->SetBinError(315,0.04714045);
   S12_ThetaY_mI5_0__720->SetBinError(316,0.04343293);
   S12_ThetaY_mI5_0__720->SetBinError(317,0.04455542);
   S12_ThetaY_mI5_0__720->SetBinError(318,0.0437727);
   S12_ThetaY_mI5_0__720->SetBinError(319,0.04433319);
   S12_ThetaY_mI5_0__720->SetBinError(320,0.04133572);
   S12_ThetaY_mI5_0__720->SetBinError(321,0.03499559);
   S12_ThetaY_mI5_0__720->SetBinError(322,0.01949992);
   S12_ThetaY_mI5_0__720->SetBinError(323,0.006666667);
   S12_ThetaY_mI5_0__720->SetMinimum(0);
   S12_ThetaY_mI5_0__720->SetMaximum(1.1);
   S12_ThetaY_mI5_0__720->SetEntries(4444);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__720->SetLineColor(ci);
   S12_ThetaY_mI5_0__720->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__720->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__720->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__720->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__720->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__720->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__720->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__720->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__720->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__720->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__720->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__720->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__720->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__720->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__720->Draw("AE");
   
   TH1D *ThetaY_mI5_0__721 = new TH1D("ThetaY_mI5_0__721","",630,-1575,1575);
   ThetaY_mI5_0__721->SetBinContent(305,3.57162e-05);
   ThetaY_mI5_0__721->SetBinContent(306,0.04968123);
   ThetaY_mI5_0__721->SetBinContent(307,0.2973731);
   ThetaY_mI5_0__721->SetBinContent(308,0.5719414);
   ThetaY_mI5_0__721->SetBinContent(309,0.7421469);
   ThetaY_mI5_0__721->SetBinContent(310,0.8492955);
   ThetaY_mI5_0__721->SetBinContent(311,0.9178349);
   ThetaY_mI5_0__721->SetBinContent(312,0.9544261);
   ThetaY_mI5_0__721->SetBinContent(313,0.9850349);
   ThetaY_mI5_0__721->SetBinContent(314,0.9920174);
   ThetaY_mI5_0__721->SetBinContent(315,1);
   ThetaY_mI5_0__721->SetBinContent(316,0.9993035);
   ThetaY_mI5_0__721->SetBinContent(317,0.9949819);
   ThetaY_mI5_0__721->SetBinContent(318,0.9805168);
   ThetaY_mI5_0__721->SetBinContent(319,0.9568013);
   ThetaY_mI5_0__721->SetBinContent(320,0.9192278);
   ThetaY_mI5_0__721->SetBinContent(321,0.8490098);
   ThetaY_mI5_0__721->SetBinContent(322,0.735093);
   ThetaY_mI5_0__721->SetBinContent(323,0.5768166);
   ThetaY_mI5_0__721->SetBinContent(324,0.2939979);
   ThetaY_mI5_0__721->SetBinContent(325,0.05030627);
   ThetaY_mI5_0__721->SetBinContent(326,7.14324e-05);
   ThetaY_mI5_0__721->SetBinError(305,2.525517e-05);
   ThetaY_mI5_0__721->SetBinError(306,0.0009419195);
   ThetaY_mI5_0__721->SetBinError(307,0.002304456);
   ThetaY_mI5_0__721->SetBinError(308,0.003195901);
   ThetaY_mI5_0__721->SetBinError(309,0.003640513);
   ThetaY_mI5_0__721->SetBinError(310,0.003894458);
   ThetaY_mI5_0__721->SetBinError(311,0.004048554);
   ThetaY_mI5_0__721->SetBinError(312,0.004128467);
   ThetaY_mI5_0__721->SetBinError(313,0.004194145);
   ThetaY_mI5_0__721->SetBinError(314,0.004208984);
   ThetaY_mI5_0__721->SetBinError(315,0.004225884);
   ThetaY_mI5_0__721->SetBinError(316,0.004224413);
   ThetaY_mI5_0__721->SetBinError(317,0.004215268);
   ThetaY_mI5_0__721->SetBinError(318,0.004184515);
   ThetaY_mI5_0__721->SetBinError(319,0.0041336);
   ThetaY_mI5_0__721->SetBinError(320,0.004051625);
   ThetaY_mI5_0__721->SetBinError(321,0.003893803);
   ThetaY_mI5_0__721->SetBinError(322,0.00362317);
   ThetaY_mI5_0__721->SetBinError(323,0.003209494);
   ThetaY_mI5_0__721->SetBinError(324,0.002291341);
   ThetaY_mI5_0__721->SetBinError(325,0.0009478261);
   ThetaY_mI5_0__721->SetBinError(326,3.57162e-05);
   ThetaY_mI5_0__721->SetEntries(824047);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__721->SetLineColor(ci);
   ThetaY_mI5_0__721->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__721->SetMarkerColor(ci);
   ThetaY_mI5_0__721->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__721->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__721->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__721->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__721->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__721->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__721->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__721->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__721->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__721->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__721->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__721->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__721->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__721->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__721->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__721->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__721->Draw("AEsame");
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
   
   Double_t _fx3241[22] = {
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
   Double_t _fy3241[22] = {
   0,
   0,
   0,
   0.007770804,
   0.0748579,
   0.5102268,
   0.8135087,
   0.8824384,
   0.8820894,
   0.9318833,
   1,
   0.8494805,
   0.8978388,
   0.8793549,
   0.9243763,
   0.8364509,
   0.6491222,
   0.2327748,
   0.03467307,
   0,
   0,
   0};
   Double_t _felx3241[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3241[22] = {
   0,
   0,
   0,
   0.005019318,
   0.01487508,
   0.03658116,
   0.0445028,
   0.04546778,
   0.04474748,
   0.04584127,
   0.0473115,
   0.04359185,
   0.04492231,
   0.04478025,
   0.04648663,
   0.04509654,
   0.04129839,
   0.02649386,
   0.01134129,
   0,
   0,
   0};
   Double_t _fehx3241[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3241[22] = {
   187.9723,
   0.08237544,
   0.01375843,
   0.01024989,
   0.01817207,
   0.03930367,
   0.04700747,
   0.04787402,
   0.04707802,
   0.04815461,
   0.04960553,
   0.04588915,
   0.04722906,
   0.0471217,
   0.04888627,
   0.04759691,
   0.04401426,
   0.02969639,
   0.01583803,
   0.01391639,
   0.08135162,
   72.73122};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3241,_fy3241,_felx3241,_fehx3241,_fely3241,_fehy3241);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3241 = new TH1F("Graph_Graph3241","",100,-100,100);
   Graph_Graph3241->SetMinimum(0);
   Graph_Graph3241->SetMaximum(1.5);
   Graph_Graph3241->SetDirectory(0);
   Graph_Graph3241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3241->SetLineColor(ci);
   Graph_Graph3241->GetXaxis()->SetRange(1,100);
   Graph_Graph3241->GetXaxis()->CenterTitle(true);
   Graph_Graph3241->GetXaxis()->SetLabelFont(42);
   Graph_Graph3241->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3241->GetXaxis()->SetTitleFont(42);
   Graph_Graph3241->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3241->GetYaxis()->CenterTitle(true);
   Graph_Graph3241->GetYaxis()->SetLabelFont(42);
   Graph_Graph3241->GetYaxis()->SetTitleFont(42);
   Graph_Graph3241->GetZaxis()->SetLabelFont(42);
   Graph_Graph3241->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3241->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3241);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__722 = new TH2D("ThetaY_vs_Y_mI5_0__722","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(7942,2);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(7968,2782);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(7994,16652);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8020,32027);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8046,41558);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8072,47558);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8098,51396);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8124,53445);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8150,55159);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8176,55550);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8202,55997);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8228,55958);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8254,55716);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8280,54906);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8306,53578);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8332,51474);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8358,47542);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8384,41163);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8410,32300);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8436,16463);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8462,2817);
   ThetaY_vs_Y_mI5_0__722->SetBinContent(8488,4);
   ThetaY_vs_Y_mI5_0__722->SetEntries(824047);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__722->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__722->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__722->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__722->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__722->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__722->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__722->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__722->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__722->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__722->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__722->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__722->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__722->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__722->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__722->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__722->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
