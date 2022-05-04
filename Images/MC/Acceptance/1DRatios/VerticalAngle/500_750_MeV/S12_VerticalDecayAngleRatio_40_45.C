void S12_VerticalDecayAngleRatio_40_45()
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
   upper_pad->Range(-125,-0.1703968,125,3.23754);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__405 = new TH1D("S12_ThetaY_40_45__405","",630,-1575,1575);
   S12_ThetaY_40_45__405->SetBinContent(303,1);
   S12_ThetaY_40_45__405->SetBinContent(304,0.5);
   S12_ThetaY_40_45__405->SetBinContent(305,1.5);
   S12_ThetaY_40_45__405->SetBinContent(306,1);
   S12_ThetaY_40_45__405->SetBinContent(307,1);
   S12_ThetaY_40_45__405->SetBinContent(308,0.5);
   S12_ThetaY_40_45__405->SetBinContent(309,1);
   S12_ThetaY_40_45__405->SetBinContent(310,2.5);
   S12_ThetaY_40_45__405->SetBinContent(311,1.5);
   S12_ThetaY_40_45__405->SetBinContent(312,0.5);
   S12_ThetaY_40_45__405->SetBinContent(313,2.5);
   S12_ThetaY_40_45__405->SetBinContent(314,1);
   S12_ThetaY_40_45__405->SetBinContent(315,0.5);
   S12_ThetaY_40_45__405->SetBinError(303,0.7071068);
   S12_ThetaY_40_45__405->SetBinError(304,0.5);
   S12_ThetaY_40_45__405->SetBinError(305,0.8660254);
   S12_ThetaY_40_45__405->SetBinError(306,0.7071068);
   S12_ThetaY_40_45__405->SetBinError(307,0.7071068);
   S12_ThetaY_40_45__405->SetBinError(308,0.5);
   S12_ThetaY_40_45__405->SetBinError(309,0.7071068);
   S12_ThetaY_40_45__405->SetBinError(310,1.118034);
   S12_ThetaY_40_45__405->SetBinError(311,0.8660254);
   S12_ThetaY_40_45__405->SetBinError(312,0.5);
   S12_ThetaY_40_45__405->SetBinError(313,1.118034);
   S12_ThetaY_40_45__405->SetBinError(314,0.7071068);
   S12_ThetaY_40_45__405->SetBinError(315,0.5);
   S12_ThetaY_40_45__405->SetMinimum(0);
   S12_ThetaY_40_45__405->SetMaximum(2.896746);
   S12_ThetaY_40_45__405->SetEntries(30);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__405->SetLineColor(ci);
   S12_ThetaY_40_45__405->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__405->SetMarkerColor(ci);
   S12_ThetaY_40_45__405->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__405->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__405->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__405->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__405->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__405->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__405->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__405->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__405->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__405->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__405->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__405->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__405->Draw("AE");
   
   TH1D *ThetaY_40_45__406 = new TH1D("ThetaY_40_45__406","",630,-1575,1575);
   ThetaY_40_45__406->SetBinContent(300,0.01084599);
   ThetaY_40_45__406->SetBinContent(301,0.143167);
   ThetaY_40_45__406->SetBinContent(302,0.4577007);
   ThetaY_40_45__406->SetBinContent(303,1);
   ThetaY_40_45__406->SetBinContent(304,1.56833);
   ThetaY_40_45__406->SetBinContent(305,2.019523);
   ThetaY_40_45__406->SetBinContent(306,2.058568);
   ThetaY_40_45__406->SetBinContent(307,2.197397);
   ThetaY_40_45__406->SetBinContent(308,2.444685);
   ThetaY_40_45__406->SetBinContent(309,2.436009);
   ThetaY_40_45__406->SetBinContent(310,2.570499);
   ThetaY_40_45__406->SetBinContent(311,2.611714);
   ThetaY_40_45__406->SetBinContent(312,2.347072);
   ThetaY_40_45__406->SetBinContent(313,2.559653);
   ThetaY_40_45__406->SetBinContent(314,2.524946);
   ThetaY_40_45__406->SetBinContent(315,2.503254);
   ThetaY_40_45__406->SetBinContent(316,2.546638);
   ThetaY_40_45__406->SetBinContent(317,2.527115);
   ThetaY_40_45__406->SetBinContent(318,2.616052);
   ThetaY_40_45__406->SetBinContent(319,2.633406);
   ThetaY_40_45__406->SetBinContent(320,2.616052);
   ThetaY_40_45__406->SetBinContent(321,2.533623);
   ThetaY_40_45__406->SetBinContent(322,2.600868);
   ThetaY_40_45__406->SetBinContent(323,2.362256);
   ThetaY_40_45__406->SetBinContent(324,2.318872);
   ThetaY_40_45__406->SetBinContent(325,2.121475);
   ThetaY_40_45__406->SetBinContent(326,1.89154);
   ThetaY_40_45__406->SetBinContent(327,1.453362);
   ThetaY_40_45__406->SetBinContent(328,1);
   ThetaY_40_45__406->SetBinContent(329,0.4490239);
   ThetaY_40_45__406->SetBinContent(330,0.1605206);
   ThetaY_40_45__406->SetBinContent(331,0.02169197);
   ThetaY_40_45__406->SetBinError(300,0.004850473);
   ThetaY_40_45__406->SetBinError(301,0.01762264);
   ThetaY_40_45__406->SetBinError(302,0.03150941);
   ThetaY_40_45__406->SetBinError(303,0.04657464);
   ThetaY_40_45__406->SetBinError(304,0.05832681);
   ThetaY_40_45__406->SetBinError(305,0.06618719);
   ThetaY_40_45__406->SetBinError(306,0.06682396);
   ThetaY_40_45__406->SetBinError(307,0.06904048);
   ThetaY_40_45__406->SetBinError(308,0.07282174);
   ThetaY_40_45__406->SetBinError(309,0.07269239);
   ThetaY_40_45__406->SetBinError(310,0.07467208);
   ThetaY_40_45__406->SetBinError(311,0.07526834);
   ThetaY_40_45__406->SetBinError(312,0.07135308);
   ThetaY_40_45__406->SetBinError(313,0.07451438);
   ThetaY_40_45__406->SetBinError(314,0.07400747);
   ThetaY_40_45__406->SetBinError(315,0.07368888);
   ThetaY_40_45__406->SetBinError(316,0.07432469);
   ThetaY_40_45__406->SetBinError(317,0.07403925);
   ThetaY_40_45__406->SetBinError(318,0.07533083);
   ThetaY_40_45__406->SetBinError(319,0.07558027);
   ThetaY_40_45__406->SetBinError(320,0.07533083);
   ThetaY_40_45__406->SetBinError(321,0.07413452);
   ThetaY_40_45__406->SetBinError(322,0.07511189);
   ThetaY_40_45__406->SetBinError(323,0.07158351);
   ThetaY_40_45__406->SetBinError(324,0.07092314);
   ThetaY_40_45__406->SetBinError(325,0.06783729);
   ThetaY_40_45__406->SetBinError(326,0.06405563);
   ThetaY_40_45__406->SetBinError(327,0.05614828);
   ThetaY_40_45__406->SetBinError(328,0.04657464);
   ThetaY_40_45__406->SetBinError(329,0.03120932);
   ThetaY_40_45__406->SetBinError(330,0.01866014);
   ThetaY_40_45__406->SetBinError(331,0.006859604);
   ThetaY_40_45__406->SetEntries(27340);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__406->SetLineColor(ci);
   ThetaY_40_45__406->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__406->SetMarkerColor(ci);
   ThetaY_40_45__406->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__406->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__406->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__406->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__406->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__406->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__406->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__406->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__406->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__406->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__406->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__406->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__406->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__406->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__406->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__406->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__406->Draw("AEsame");
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
   
   Double_t _fx3136[32] = {
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
   Double_t _fy3136[32] = {
   0,
   0,
   0,
   1,
   0.3188105,
   0.7427497,
   0.4857745,
   0.4550839,
   0.2045253,
   0.4105076,
   0.9725738,
   0.5743355,
   0.2130314,
   0.9766949,
   0.3960481,
   0.19974,
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
   0};
   Double_t _felx3136[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3136[32] = {
   0,
   0,
   0,
   0.6467851,
   0.2638043,
   0.4047082,
   0.3139727,
   0.2941241,
   0.1692214,
   0.265298,
   0.4208271,
   0.3128593,
   0.1762605,
   0.4226134,
   0.2559483,
   0.1652615,
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
   0};
   Double_t _fehx3136[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3136[32] = {
   102.6041,
   6.520143,
   2.019963,
   1.325572,
   0.7347874,
   0.7247913,
   0.6422689,
   0.6015984,
   0.4710002,
   0.5425492,
   0.6602682,
   0.5600461,
   0.4906187,
   0.6630759,
   0.5234008,
   0.4599645,
   0.3617448,
   0.3645416,
   0.3521389,
   0.3498167,
   0.3521389,
   0.3636045,
   0.3541964,
   0.390004,
   0.3973069,
   0.43431,
   0.4871603,
   0.6342374,
   0.9223513,
   2.05917,
   5.806463,
   46.59295};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3136,_fy3136,_felx3136,_fehx3136,_fely3136,_fehy3136);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3136 = new TH1F("Graph_Graph3136","",100,-100,100);
   Graph_Graph3136->SetMinimum(0);
   Graph_Graph3136->SetMaximum(1.5);
   Graph_Graph3136->SetDirectory(0);
   Graph_Graph3136->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3136->SetLineColor(ci);
   Graph_Graph3136->GetXaxis()->SetRange(1,100);
   Graph_Graph3136->GetXaxis()->CenterTitle(true);
   Graph_Graph3136->GetXaxis()->SetLabelFont(42);
   Graph_Graph3136->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3136->GetXaxis()->SetTitleFont(42);
   Graph_Graph3136->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3136->GetYaxis()->CenterTitle(true);
   Graph_Graph3136->GetYaxis()->SetLabelFont(42);
   Graph_Graph3136->GetYaxis()->SetTitleFont(42);
   Graph_Graph3136->GetZaxis()->SetLabelFont(42);
   Graph_Graph3136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3136->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3136);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.896746,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__407 = new TH2D("ThetaY_vs_Y_40_45__407","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__407->SetBinContent(7821,5);
   ThetaY_vs_Y_40_45__407->SetBinContent(7847,66);
   ThetaY_vs_Y_40_45__407->SetBinContent(7873,211);
   ThetaY_vs_Y_40_45__407->SetBinContent(7899,461);
   ThetaY_vs_Y_40_45__407->SetBinContent(7925,723);
   ThetaY_vs_Y_40_45__407->SetBinContent(7951,931);
   ThetaY_vs_Y_40_45__407->SetBinContent(7977,949);
   ThetaY_vs_Y_40_45__407->SetBinContent(8003,1013);
   ThetaY_vs_Y_40_45__407->SetBinContent(8029,1127);
   ThetaY_vs_Y_40_45__407->SetBinContent(8055,1123);
   ThetaY_vs_Y_40_45__407->SetBinContent(8081,1185);
   ThetaY_vs_Y_40_45__407->SetBinContent(8107,1204);
   ThetaY_vs_Y_40_45__407->SetBinContent(8133,1082);
   ThetaY_vs_Y_40_45__407->SetBinContent(8159,1180);
   ThetaY_vs_Y_40_45__407->SetBinContent(8185,1164);
   ThetaY_vs_Y_40_45__407->SetBinContent(8211,1154);
   ThetaY_vs_Y_40_45__407->SetBinContent(8237,1174);
   ThetaY_vs_Y_40_45__407->SetBinContent(8263,1165);
   ThetaY_vs_Y_40_45__407->SetBinContent(8289,1206);
   ThetaY_vs_Y_40_45__407->SetBinContent(8315,1214);
   ThetaY_vs_Y_40_45__407->SetBinContent(8341,1206);
   ThetaY_vs_Y_40_45__407->SetBinContent(8367,1168);
   ThetaY_vs_Y_40_45__407->SetBinContent(8393,1199);
   ThetaY_vs_Y_40_45__407->SetBinContent(8419,1089);
   ThetaY_vs_Y_40_45__407->SetBinContent(8445,1069);
   ThetaY_vs_Y_40_45__407->SetBinContent(8471,978);
   ThetaY_vs_Y_40_45__407->SetBinContent(8497,872);
   ThetaY_vs_Y_40_45__407->SetBinContent(8523,670);
   ThetaY_vs_Y_40_45__407->SetBinContent(8549,461);
   ThetaY_vs_Y_40_45__407->SetBinContent(8575,207);
   ThetaY_vs_Y_40_45__407->SetBinContent(8601,74);
   ThetaY_vs_Y_40_45__407->SetBinContent(8627,10);
   ThetaY_vs_Y_40_45__407->SetEntries(27340);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__407->SetLineColor(ci);
   ThetaY_vs_Y_40_45__407->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__407->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__407->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__407->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__407->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__407->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__407->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__407->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__407->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__407->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__407->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__407->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__407->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__407->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__407->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
