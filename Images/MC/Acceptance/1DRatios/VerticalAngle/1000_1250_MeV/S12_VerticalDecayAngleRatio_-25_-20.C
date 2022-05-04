void S12_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07590302,125,1.442157);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__708 = new TH1D("S12_ThetaY_mI25_mI20__708","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__708->SetBinContent(312,0.1007194);
   S12_ThetaY_mI25_mI20__708->SetBinContent(313,0.6258993);
   S12_ThetaY_mI25_mI20__708->SetBinContent(314,1.043165);
   S12_ThetaY_mI25_mI20__708->SetBinContent(315,1.143885);
   S12_ThetaY_mI25_mI20__708->SetBinContent(316,0.942446);
   S12_ThetaY_mI25_mI20__708->SetBinContent(317,1.021583);
   S12_ThetaY_mI25_mI20__708->SetBinContent(318,1.035971);
   S12_ThetaY_mI25_mI20__708->SetBinContent(319,1.079137);
   S12_ThetaY_mI25_mI20__708->SetBinContent(320,0.8776978);
   S12_ThetaY_mI25_mI20__708->SetBinContent(321,1);
   S12_ThetaY_mI25_mI20__708->SetBinContent(322,0.7697842);
   S12_ThetaY_mI25_mI20__708->SetBinContent(323,0.5179856);
   S12_ThetaY_mI25_mI20__708->SetBinContent(324,0.1942446);
   S12_ThetaY_mI25_mI20__708->SetBinContent(325,0.03597122);
   S12_ThetaY_mI25_mI20__708->SetBinError(312,0.0269184);
   S12_ThetaY_mI25_mI20__708->SetBinError(313,0.06710345);
   S12_ThetaY_mI25_mI20__708->SetBinError(314,0.08663018);
   S12_ThetaY_mI25_mI20__708->SetBinError(315,0.09071597);
   S12_ThetaY_mI25_mI20__708->SetBinError(316,0.08234189);
   S12_ThetaY_mI25_mI20__708->SetBinError(317,0.08572932);
   S12_ThetaY_mI25_mI20__708->SetBinError(318,0.08633094);
   S12_ThetaY_mI25_mI20__708->SetBinError(319,0.08811114);
   S12_ThetaY_mI25_mI20__708->SetBinError(320,0.07946303);
   S12_ThetaY_mI25_mI20__708->SetBinError(321,0.08481889);
   S12_ThetaY_mI25_mI20__708->SetBinError(322,0.07441784);
   S12_ThetaY_mI25_mI20__708->SetBinError(323,0.06104519);
   S12_ThetaY_mI25_mI20__708->SetBinError(324,0.03738239);
   S12_ThetaY_mI25_mI20__708->SetBinError(325,0.01608682);
   S12_ThetaY_mI25_mI20__708->SetMinimum(0);
   S12_ThetaY_mI25_mI20__708->SetMaximum(1.290351);
   S12_ThetaY_mI25_mI20__708->SetEntries(1444);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__708->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__708->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__708->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__708->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__708->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__708->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__708->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__708->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__708->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__708->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__708->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__708->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__708->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__708->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__708->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__708->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__709 = new TH1D("ThetaY_mI25_mI20__709","",630,-1575,1575);
   ThetaY_mI25_mI20__709->SetBinContent(305,5.629363e-05);
   ThetaY_mI25_mI20__709->SetBinContent(306,0.06017789);
   ThetaY_mI25_mI20__709->SetBinContent(307,0.3472754);
   ThetaY_mI25_mI20__709->SetBinContent(308,0.6814907);
   ThetaY_mI25_mI20__709->SetBinContent(309,0.869624);
   ThetaY_mI25_mI20__709->SetBinContent(310,1.001182);
   ThetaY_mI25_mI20__709->SetBinContent(311,1.080275);
   ThetaY_mI25_mI20__709->SetBinContent(312,1.128856);
   ThetaY_mI25_mI20__709->SetBinContent(313,1.151711);
   ThetaY_mI25_mI20__709->SetBinContent(314,1.160212);
   ThetaY_mI25_mI20__709->SetBinContent(315,1.170345);
   ThetaY_mI25_mI20__709->SetBinContent(316,1.173047);
   ThetaY_mI25_mI20__709->SetBinContent(317,1.162295);
   ThetaY_mI25_mI20__709->SetBinContent(318,1.172259);
   ThetaY_mI25_mI20__709->SetBinContent(319,1.111574);
   ThetaY_mI25_mI20__709->SetBinContent(320,1.078586);
   ThetaY_mI25_mI20__709->SetBinContent(321,1);
   ThetaY_mI25_mI20__709->SetBinContent(322,0.8624184);
   ThetaY_mI25_mI20__709->SetBinContent(323,0.6709075);
   ThetaY_mI25_mI20__709->SetBinContent(324,0.3534677);
   ThetaY_mI25_mI20__709->SetBinContent(325,0.05933348);
   ThetaY_mI25_mI20__709->SetBinContent(326,0.0001125873);
   ThetaY_mI25_mI20__709->SetBinError(305,5.629363e-05);
   ThetaY_mI25_mI20__709->SetBinError(306,0.001840552);
   ThetaY_mI25_mI20__709->SetBinError(307,0.004421469);
   ThetaY_mI25_mI20__709->SetBinError(308,0.006193834);
   ThetaY_mI25_mI20__709->SetBinError(309,0.006996734);
   ThetaY_mI25_mI20__709->SetBinError(310,0.007507341);
   ThetaY_mI25_mI20__709->SetBinError(311,0.007798242);
   ThetaY_mI25_mI20__709->SetBinError(312,0.007971663);
   ThetaY_mI25_mI20__709->SetBinError(313,0.008051957);
   ThetaY_mI25_mI20__709->SetBinError(314,0.008081616);
   ThetaY_mI25_mI20__709->SetBinError(315,0.008116831);
   ThetaY_mI25_mI20__709->SetBinError(316,0.008126195);
   ThetaY_mI25_mI20__709->SetBinError(317,0.008088867);
   ThetaY_mI25_mI20__709->SetBinError(318,0.008123465);
   ThetaY_mI25_mI20__709->SetBinError(319,0.007910407);
   ThetaY_mI25_mI20__709->SetBinError(320,0.007792144);
   ThetaY_mI25_mI20__709->SetBinError(321,0.007502908);
   ThetaY_mI25_mI20__709->SetBinError(322,0.006967687);
   ThetaY_mI25_mI20__709->SetBinError(323,0.006145552);
   ThetaY_mI25_mI20__709->SetBinError(324,0.004460715);
   ThetaY_mI25_mI20__709->SetBinError(325,0.001827593);
   ThetaY_mI25_mI20__709->SetBinError(326,7.961121e-05);
   ThetaY_mI25_mI20__709->SetEntries(307232);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__709->SetLineColor(ci);
   ThetaY_mI25_mI20__709->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__709->SetMarkerColor(ci);
   ThetaY_mI25_mI20__709->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__709->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__709->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__709->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__709->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__709->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__709->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__709->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__709->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__709->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__709->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__709->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__709->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__709->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__709->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__709->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__709->Draw("AEsame");
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
   
   Double_t _fx3237[22] = {
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
   Double_t _fy3237[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.08922255,
   0.5434515,
   0.8991165,
   0.9773916,
   0.8034174,
   0.8789362,
   0.8837396,
   0.9708186,
   0.8137487,
   1,
   0.8925879,
   0.7720672,
   0.5495399,
   0.606255,
   0};
   Double_t _felx3237[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3237[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02356563,
   0.05827407,
   0.07484153,
   0.07772435,
   0.07032361,
   0.07392294,
   0.07381157,
   0.07947681,
   0.07380426,
   0.08504526,
   0.08645231,
   0.0910473,
   0.1053178,
   0.2623799,
   0};
   Double_t _fehx3237[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3237[22] = {
   677.7125,
   0.2202831,
   0.03814476,
   0.01943646,
   0.01523135,
   0.01322981,
   0.01226114,
   0.03079866,
   0.064888,
   0.08135049,
   0.08416942,
   0.07676968,
   0.08042188,
   0.08025369,
   0.08627008,
   0.08082633,
   0.09261015,
   0.09526685,
   0.1024826,
   0.1277541,
   0.4117593,
   193.049};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3237,_fy3237,_felx3237,_fehx3237,_fely3237,_fehy3237);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3237 = new TH1F("Graph_Graph3237","",100,-100,100);
   Graph_Graph3237->SetMinimum(0);
   Graph_Graph3237->SetMaximum(1.5);
   Graph_Graph3237->SetDirectory(0);
   Graph_Graph3237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3237->SetLineColor(ci);
   Graph_Graph3237->GetXaxis()->SetRange(1,100);
   Graph_Graph3237->GetXaxis()->CenterTitle(true);
   Graph_Graph3237->GetXaxis()->SetLabelFont(42);
   Graph_Graph3237->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3237->GetXaxis()->SetTitleFont(42);
   Graph_Graph3237->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3237->GetYaxis()->CenterTitle(true);
   Graph_Graph3237->GetYaxis()->SetLabelFont(42);
   Graph_Graph3237->GetYaxis()->SetTitleFont(42);
   Graph_Graph3237->GetZaxis()->SetLabelFont(42);
   Graph_Graph3237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3237->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3237);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.290351,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__710 = new TH2D("ThetaY_vs_Y_mI25_mI20__710","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(7938,1);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(7964,1069);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(7990,6169);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8016,12106);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8042,15448);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8068,17785);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8094,19190);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8120,20053);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8146,20459);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8172,20610);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8198,20790);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8224,20838);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8250,20647);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8276,20824);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8302,19746);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8328,19160);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8354,17764);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8380,15320);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8406,11918);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8432,6279);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8458,1054);
   ThetaY_vs_Y_mI25_mI20__710->SetBinContent(8484,2);
   ThetaY_vs_Y_mI25_mI20__710->SetEntries(307232);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__710->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__710->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__710->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__710->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__710->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__710->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__710->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__710->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__710->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__710->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__710->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__710->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__710->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__710->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__710->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__710->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
