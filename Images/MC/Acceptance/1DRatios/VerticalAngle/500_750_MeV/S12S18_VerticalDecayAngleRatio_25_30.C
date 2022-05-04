void S12S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08898411,125,1.690698);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__510 = new TH1D("S12S18_ThetaY_25_30__510","",630,-1575,1575);
   S12S18_ThetaY_25_30__510->SetBinContent(301,0.02040816);
   S12S18_ThetaY_25_30__510->SetBinContent(302,0.08163265);
   S12S18_ThetaY_25_30__510->SetBinContent(303,0.244898);
   S12S18_ThetaY_25_30__510->SetBinContent(304,0.6326531);
   S12S18_ThetaY_25_30__510->SetBinContent(305,1);
   S12S18_ThetaY_25_30__510->SetBinContent(306,0.9183673);
   S12S18_ThetaY_25_30__510->SetBinContent(307,1.040816);
   S12S18_ThetaY_25_30__510->SetBinContent(308,1.061224);
   S12S18_ThetaY_25_30__510->SetBinContent(309,1.244898);
   S12S18_ThetaY_25_30__510->SetBinContent(310,1.020408);
   S12S18_ThetaY_25_30__510->SetBinContent(311,1);
   S12S18_ThetaY_25_30__510->SetBinContent(312,0.9591837);
   S12S18_ThetaY_25_30__510->SetBinContent(313,1.081633);
   S12S18_ThetaY_25_30__510->SetBinContent(314,1.142857);
   S12S18_ThetaY_25_30__510->SetBinContent(315,0.9183673);
   S12S18_ThetaY_25_30__510->SetBinContent(316,1.326531);
   S12S18_ThetaY_25_30__510->SetBinContent(317,1.265306);
   S12S18_ThetaY_25_30__510->SetBinContent(318,0.3265306);
   S12S18_ThetaY_25_30__510->SetBinContent(319,0.02040816);
   S12S18_ThetaY_25_30__510->SetBinError(301,0.02040816);
   S12S18_ThetaY_25_30__510->SetBinError(302,0.04081633);
   S12S18_ThetaY_25_30__510->SetBinError(303,0.07069595);
   S12S18_ThetaY_25_30__510->SetBinError(304,0.1136278);
   S12S18_ThetaY_25_30__510->SetBinError(305,0.1428571);
   S12S18_ThetaY_25_30__510->SetBinError(306,0.1369021);
   S12S18_ThetaY_25_30__510->SetBinError(307,0.1457434);
   S12S18_ThetaY_25_30__510->SetBinError(308,0.1471654);
   S12S18_ThetaY_25_30__510->SetBinError(309,0.1593929);
   S12S18_ThetaY_25_30__510->SetBinError(310,0.1443075);
   S12S18_ThetaY_25_30__510->SetBinError(311,0.1428571);
   S12S18_ThetaY_25_30__510->SetBinError(312,0.1399113);
   S12S18_ThetaY_25_30__510->SetBinError(313,0.1485737);
   S12S18_ThetaY_25_30__510->SetBinError(314,0.1527207);
   S12S18_ThetaY_25_30__510->SetBinError(315,0.1369021);
   S12S18_ThetaY_25_30__510->SetBinError(316,0.1645359);
   S12S18_ThetaY_25_30__510->SetBinError(317,0.160694);
   S12S18_ThetaY_25_30__510->SetBinError(318,0.08163265);
   S12S18_ThetaY_25_30__510->SetBinError(319,0.02040816);
   S12S18_ThetaY_25_30__510->SetMinimum(0);
   S12S18_ThetaY_25_30__510->SetMaximum(1.51273);
   S12S18_ThetaY_25_30__510->SetEntries(750);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__510->SetLineColor(ci);
   S12S18_ThetaY_25_30__510->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__510->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__510->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__510->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__510->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__510->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__510->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__510->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__510->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__510->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__510->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__510->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__510->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__510->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__510->Draw("AE");
   
   TH1D *ThetaY_25_30__511 = new TH1D("ThetaY_25_30__511","",630,-1575,1575);
   ThetaY_25_30__511->SetBinContent(300,0.008635097);
   ThetaY_25_30__511->SetBinContent(301,0.08844011);
   ThetaY_25_30__511->SetBinContent(302,0.2577994);
   ThetaY_25_30__511->SetBinContent(303,0.5171309);
   ThetaY_25_30__511->SetBinContent(304,0.8142061);
   ThetaY_25_30__511->SetBinContent(305,1);
   ThetaY_25_30__511->SetBinContent(306,1.141226);
   ThetaY_25_30__511->SetBinContent(307,1.241783);
   ThetaY_25_30__511->SetBinContent(308,1.322563);
   ThetaY_25_30__511->SetBinContent(309,1.367967);
   ThetaY_25_30__511->SetBinContent(310,1.35585);
   ThetaY_25_30__511->SetBinContent(311,1.339833);
   ThetaY_25_30__511->SetBinContent(312,1.334262);
   ThetaY_25_30__511->SetBinContent(313,1.357382);
   ThetaY_25_30__511->SetBinContent(314,1.343733);
   ThetaY_25_30__511->SetBinContent(315,1.367967);
   ThetaY_25_30__511->SetBinContent(316,1.34429);
   ThetaY_25_30__511->SetBinContent(317,1.361003);
   ThetaY_25_30__511->SetBinContent(318,1.375209);
   ThetaY_25_30__511->SetBinContent(319,1.372981);
   ThetaY_25_30__511->SetBinContent(320,1.36532);
   ThetaY_25_30__511->SetBinContent(321,1.342201);
   ThetaY_25_30__511->SetBinContent(322,1.311281);
   ThetaY_25_30__511->SetBinContent(323,1.287047);
   ThetaY_25_30__511->SetBinContent(324,1.237465);
   ThetaY_25_30__511->SetBinContent(325,1.138997);
   ThetaY_25_30__511->SetBinContent(326,1.016017);
   ThetaY_25_30__511->SetBinContent(327,0.8199164);
   ThetaY_25_30__511->SetBinContent(328,0.5270195);
   ThetaY_25_30__511->SetBinContent(329,0.2600279);
   ThetaY_25_30__511->SetBinContent(330,0.0862117);
   ThetaY_25_30__511->SetBinContent(331,0.006685237);
   ThetaY_25_30__511->SetBinError(300,0.001096658);
   ThetaY_25_30__511->SetBinError(301,0.003509639);
   ThetaY_25_30__511->SetBinError(302,0.005992096);
   ThetaY_25_30__511->SetBinError(303,0.008486684);
   ThetaY_25_30__511->SetBinError(304,0.01064891);
   ThetaY_25_30__511->SetBinError(305,0.01180152);
   ThetaY_25_30__511->SetBinError(306,0.01260734);
   ThetaY_25_30__511->SetBinError(307,0.01315105);
   ThetaY_25_30__511->SetBinError(308,0.01357206);
   ThetaY_25_30__511->SetBinError(309,0.01380306);
   ThetaY_25_30__511->SetBinError(310,0.0137418);
   ThetaY_25_30__511->SetBinError(311,0.01366039);
   ThetaY_25_30__511->SetBinError(312,0.01363196);
   ThetaY_25_30__511->SetBinError(313,0.01374956);
   ThetaY_25_30__511->SetBinError(314,0.01368026);
   ThetaY_25_30__511->SetBinError(315,0.01380306);
   ThetaY_25_30__511->SetBinError(316,0.01368309);
   ThetaY_25_30__511->SetBinError(317,0.01376789);
   ThetaY_25_30__511->SetBinError(318,0.01383955);
   ThetaY_25_30__511->SetBinError(319,0.01382834);
   ThetaY_25_30__511->SetBinError(320,0.01378971);
   ThetaY_25_30__511->SetBinError(321,0.01367245);
   ThetaY_25_30__511->SetBinError(322,0.01351406);
   ThetaY_25_30__511->SetBinError(323,0.0133886);
   ThetaY_25_30__511->SetBinError(324,0.01312817);
   ThetaY_25_30__511->SetBinError(325,0.01259503);
   ThetaY_25_30__511->SetBinError(326,0.01189565);
   ThetaY_25_30__511->SetBinError(327,0.01068618);
   ThetaY_25_30__511->SetBinError(328,0.008567441);
   ThetaY_25_30__511->SetBinError(329,0.006017938);
   ThetaY_25_30__511->SetBinError(330,0.003465141);
   ThetaY_25_30__511->SetBinError(331,0.0009649308);
   ThetaY_25_30__511->SetEntries(227681);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__511->SetLineColor(ci);
   ThetaY_25_30__511->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__511->SetMarkerColor(ci);
   ThetaY_25_30__511->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__511->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__511->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__511->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__511->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__511->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__511->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__511->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__511->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__511->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__511->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__511->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__511->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__511->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__511->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__511->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__511->Draw("AEsame");
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
   
   Double_t _fx3171[32] = {
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
   Double_t _fy3171[32] = {
   0,
   0.2307569,
   0.3166518,
   0.4735705,
   0.7770183,
   1,
   0.8047202,
   0.838163,
   0.8024002,
   0.9100354,
   0.7525969,
   0.7463617,
   0.7188871,
   0.7968523,
   0.8505094,
   0.6713376,
   0.9867892,
   0.9296867,
   0.2374407,
   0.01486413,
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
   Double_t _felx3171[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3171[32] = {
   0,
   0.19095,
   0.1516746,
   0.134982,
   0.139156,
   0.1428434,
   0.1198339,
   0.117308,
   0.1112115,
   0.1165524,
   0.1063429,
   0.1065229,
   0.1047368,
   0.1094005,
   0.1136364,
   0.09992706,
   0.1224847,
   0.1181182,
   0.05877879,
   0.01229653,
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
   Double_t _fehx3171[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3171[32] = {
   4.416309,
   0.5320114,
   0.2508574,
   0.1803508,
   0.1666557,
   0.1648891,
   0.1391783,
   0.1350145,
   0.1278211,
   0.1325429,
   0.1225594,
   0.1229437,
   0.121246,
   0.1255732,
   0.1299513,
   0.1160478,
   0.1387355,
   0.134185,
   0.07551344,
   0.03418619,
   0.02752131,
   0.02799541,
   0.02865559,
   0.02919521,
   0.03036511,
   0.03299051,
   0.03698425,
   0.04583119,
   0.07130858,
   0.144563,
   0.4364581,
   5.729296};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3171,_fy3171,_felx3171,_fehx3171,_fely3171,_fehy3171);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3171 = new TH1F("Graph_Graph3171","",100,-100,100);
   Graph_Graph3171->SetMinimum(0);
   Graph_Graph3171->SetMaximum(1.5);
   Graph_Graph3171->SetDirectory(0);
   Graph_Graph3171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3171->SetLineColor(ci);
   Graph_Graph3171->GetXaxis()->SetRange(1,100);
   Graph_Graph3171->GetXaxis()->CenterTitle(true);
   Graph_Graph3171->GetXaxis()->SetLabelFont(42);
   Graph_Graph3171->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3171->GetXaxis()->SetTitleFont(42);
   Graph_Graph3171->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3171->GetYaxis()->CenterTitle(true);
   Graph_Graph3171->GetYaxis()->SetLabelFont(42);
   Graph_Graph3171->GetYaxis()->SetTitleFont(42);
   Graph_Graph3171->GetZaxis()->SetLabelFont(42);
   Graph_Graph3171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3171->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3171);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.51273,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__512 = new TH2D("ThetaY_vs_Y_25_30__512","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__512->SetBinContent(7818,62);
   ThetaY_vs_Y_25_30__512->SetBinContent(7844,635);
   ThetaY_vs_Y_25_30__512->SetBinContent(7870,1851);
   ThetaY_vs_Y_25_30__512->SetBinContent(7896,3713);
   ThetaY_vs_Y_25_30__512->SetBinContent(7922,5846);
   ThetaY_vs_Y_25_30__512->SetBinContent(7948,7180);
   ThetaY_vs_Y_25_30__512->SetBinContent(7974,8194);
   ThetaY_vs_Y_25_30__512->SetBinContent(8000,8916);
   ThetaY_vs_Y_25_30__512->SetBinContent(8026,9496);
   ThetaY_vs_Y_25_30__512->SetBinContent(8052,9822);
   ThetaY_vs_Y_25_30__512->SetBinContent(8078,9735);
   ThetaY_vs_Y_25_30__512->SetBinContent(8104,9620);
   ThetaY_vs_Y_25_30__512->SetBinContent(8130,9580);
   ThetaY_vs_Y_25_30__512->SetBinContent(8156,9746);
   ThetaY_vs_Y_25_30__512->SetBinContent(8182,9648);
   ThetaY_vs_Y_25_30__512->SetBinContent(8208,9822);
   ThetaY_vs_Y_25_30__512->SetBinContent(8234,9652);
   ThetaY_vs_Y_25_30__512->SetBinContent(8260,9772);
   ThetaY_vs_Y_25_30__512->SetBinContent(8286,9874);
   ThetaY_vs_Y_25_30__512->SetBinContent(8312,9858);
   ThetaY_vs_Y_25_30__512->SetBinContent(8338,9803);
   ThetaY_vs_Y_25_30__512->SetBinContent(8364,9637);
   ThetaY_vs_Y_25_30__512->SetBinContent(8390,9415);
   ThetaY_vs_Y_25_30__512->SetBinContent(8416,9241);
   ThetaY_vs_Y_25_30__512->SetBinContent(8442,8885);
   ThetaY_vs_Y_25_30__512->SetBinContent(8468,8178);
   ThetaY_vs_Y_25_30__512->SetBinContent(8494,7295);
   ThetaY_vs_Y_25_30__512->SetBinContent(8520,5887);
   ThetaY_vs_Y_25_30__512->SetBinContent(8546,3784);
   ThetaY_vs_Y_25_30__512->SetBinContent(8572,1867);
   ThetaY_vs_Y_25_30__512->SetBinContent(8598,619);
   ThetaY_vs_Y_25_30__512->SetBinContent(8624,48);
   ThetaY_vs_Y_25_30__512->SetEntries(227681);
   ThetaY_vs_Y_25_30__512->SetContour(20);
   ThetaY_vs_Y_25_30__512->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__512->SetContourLevel(1,493.7);
   ThetaY_vs_Y_25_30__512->SetContourLevel(2,987.4);
   ThetaY_vs_Y_25_30__512->SetContourLevel(3,1481.1);
   ThetaY_vs_Y_25_30__512->SetContourLevel(4,1974.8);
   ThetaY_vs_Y_25_30__512->SetContourLevel(5,2468.5);
   ThetaY_vs_Y_25_30__512->SetContourLevel(6,2962.2);
   ThetaY_vs_Y_25_30__512->SetContourLevel(7,3455.9);
   ThetaY_vs_Y_25_30__512->SetContourLevel(8,3949.6);
   ThetaY_vs_Y_25_30__512->SetContourLevel(9,4443.3);
   ThetaY_vs_Y_25_30__512->SetContourLevel(10,4937);
   ThetaY_vs_Y_25_30__512->SetContourLevel(11,5430.7);
   ThetaY_vs_Y_25_30__512->SetContourLevel(12,5924.4);
   ThetaY_vs_Y_25_30__512->SetContourLevel(13,6418.1);
   ThetaY_vs_Y_25_30__512->SetContourLevel(14,6911.8);
   ThetaY_vs_Y_25_30__512->SetContourLevel(15,7405.5);
   ThetaY_vs_Y_25_30__512->SetContourLevel(16,7899.2);
   ThetaY_vs_Y_25_30__512->SetContourLevel(17,8392.9);
   ThetaY_vs_Y_25_30__512->SetContourLevel(18,8886.6);
   ThetaY_vs_Y_25_30__512->SetContourLevel(19,9380.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__512->SetLineColor(ci);
   ThetaY_vs_Y_25_30__512->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__512->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__512->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__512->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__512->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__512->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__512->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__512->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__512->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__512->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__512->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__512->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__512->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__512->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__512->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
