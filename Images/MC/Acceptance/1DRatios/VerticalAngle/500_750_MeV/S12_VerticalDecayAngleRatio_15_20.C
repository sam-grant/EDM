void S12_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.06494761,125,1.234005);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__390 = new TH1D("S12_ThetaY_15_20__390","",630,-1575,1575);
   S12_ThetaY_15_20__390->SetBinContent(302,0.0125);
   S12_ThetaY_15_20__390->SetBinContent(303,0.0875);
   S12_ThetaY_15_20__390->SetBinContent(304,0.2);
   S12_ThetaY_15_20__390->SetBinContent(305,0.4625);
   S12_ThetaY_15_20__390->SetBinContent(306,0.675);
   S12_ThetaY_15_20__390->SetBinContent(307,0.525);
   S12_ThetaY_15_20__390->SetBinContent(308,0.8);
   S12_ThetaY_15_20__390->SetBinContent(309,0.9625);
   S12_ThetaY_15_20__390->SetBinContent(310,0.9);
   S12_ThetaY_15_20__390->SetBinContent(311,1);
   S12_ThetaY_15_20__390->SetBinContent(312,0.6625);
   S12_ThetaY_15_20__390->SetBinContent(313,0.8125);
   S12_ThetaY_15_20__390->SetBinContent(314,0.825);
   S12_ThetaY_15_20__390->SetBinContent(315,0.7);
   S12_ThetaY_15_20__390->SetBinContent(316,0.775);
   S12_ThetaY_15_20__390->SetBinContent(317,0.6375);
   S12_ThetaY_15_20__390->SetBinContent(318,0.7875);
   S12_ThetaY_15_20__390->SetBinContent(319,0.95);
   S12_ThetaY_15_20__390->SetBinContent(320,0.3125);
   S12_ThetaY_15_20__390->SetBinContent(321,0.125);
   S12_ThetaY_15_20__390->SetBinError(302,0.0125);
   S12_ThetaY_15_20__390->SetBinError(303,0.03307189);
   S12_ThetaY_15_20__390->SetBinError(304,0.05);
   S12_ThetaY_15_20__390->SetBinError(305,0.07603453);
   S12_ThetaY_15_20__390->SetBinError(306,0.09185587);
   S12_ThetaY_15_20__390->SetBinError(307,0.08100926);
   S12_ThetaY_15_20__390->SetBinError(308,0.1);
   S12_ThetaY_15_20__390->SetBinError(309,0.1096871);
   S12_ThetaY_15_20__390->SetBinError(310,0.106066);
   S12_ThetaY_15_20__390->SetBinError(311,0.1118034);
   S12_ThetaY_15_20__390->SetBinError(312,0.09100137);
   S12_ThetaY_15_20__390->SetBinError(313,0.1007782);
   S12_ThetaY_15_20__390->SetBinError(314,0.1015505);
   S12_ThetaY_15_20__390->SetBinError(315,0.09354143);
   S12_ThetaY_15_20__390->SetBinError(316,0.0984251);
   S12_ThetaY_15_20__390->SetBinError(317,0.08926786);
   S12_ThetaY_15_20__390->SetBinError(318,0.09921567);
   S12_ThetaY_15_20__390->SetBinError(319,0.1089725);
   S12_ThetaY_15_20__390->SetBinError(320,0.0625);
   S12_ThetaY_15_20__390->SetBinError(321,0.03952847);
   S12_ThetaY_15_20__390->SetMinimum(0);
   S12_ThetaY_15_20__390->SetMaximum(1.104109);
   S12_ThetaY_15_20__390->SetEntries(977);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__390->SetLineColor(ci);
   S12_ThetaY_15_20__390->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__390->SetMarkerColor(ci);
   S12_ThetaY_15_20__390->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__390->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__390->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__390->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__390->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__390->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__390->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__390->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__390->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__390->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__390->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__390->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__390->Draw("AE");
   
   TH1D *ThetaY_15_20__391 = new TH1D("ThetaY_15_20__391","",630,-1575,1575);
   ThetaY_15_20__391->SetBinContent(300,0.005342948);
   ThetaY_15_20__391->SetBinContent(301,0.06528822);
   ThetaY_15_20__391->SetBinContent(302,0.1866122);
   ThetaY_15_20__391->SetBinContent(303,0.3808696);
   ThetaY_15_20__391->SetBinContent(304,0.5997567);
   ThetaY_15_20__391->SetBinContent(305,0.7245993);
   ThetaY_15_20__391->SetBinContent(306,0.8540897);
   ThetaY_15_20__391->SetBinContent(307,0.919682);
   ThetaY_15_20__391->SetBinContent(308,0.9561705);
   ThetaY_15_20__391->SetBinContent(309,0.9980453);
   ThetaY_15_20__391->SetBinContent(310,0.9922679);
   ThetaY_15_20__391->SetBinContent(311,1);
   ThetaY_15_20__391->SetBinContent(312,0.9987837);
   ThetaY_15_20__391->SetBinContent(313,0.9895313);
   ThetaY_15_20__391->SetBinContent(314,0.9938752);
   ThetaY_15_20__391->SetBinContent(315,0.9822771);
   ThetaY_15_20__391->SetBinContent(316,0.9919639);
   ThetaY_15_20__391->SetBinContent(317,0.9823205);
   ThetaY_15_20__391->SetBinContent(318,0.9931367);
   ThetaY_15_20__391->SetBinContent(319,0.9949177);
   ThetaY_15_20__391->SetBinContent(320,1.000391);
   ThetaY_15_20__391->SetBinContent(321,1.003736);
   ThetaY_15_20__391->SetBinContent(322,0.9945267);
   ThetaY_15_20__391->SetBinContent(323,0.9662482);
   ThetaY_15_20__391->SetBinContent(324,0.9013509);
   ThetaY_15_20__391->SetBinContent(325,0.8336302);
   ThetaY_15_20__391->SetBinContent(326,0.7381956);
   ThetaY_15_20__391->SetBinContent(327,0.5902437);
   ThetaY_15_20__391->SetBinContent(328,0.391599);
   ThetaY_15_20__391->SetBinContent(329,0.1856566);
   ThetaY_15_20__391->SetBinContent(330,0.0640285);
   ThetaY_15_20__391->SetBinContent(331,0.006385474);
   ThetaY_15_20__391->SetBinError(300,0.0004817574);
   ThetaY_15_20__391->SetBinError(301,0.001684051);
   ThetaY_15_20__391->SetBinError(302,0.002847134);
   ThetaY_15_20__391->SetBinError(303,0.004067486);
   ThetaY_15_20__391->SetBinError(304,0.005104174);
   ThetaY_15_20__391->SetBinError(305,0.00561031);
   ThetaY_15_20__391->SetBinError(306,0.006091015);
   ThetaY_15_20__391->SetBinError(307,0.006320577);
   ThetaY_15_20__391->SetBinError(308,0.006444742);
   ThetaY_15_20__391->SetBinError(309,0.006584352);
   ThetaY_15_20__391->SetBinError(310,0.006565267);
   ThetaY_15_20__391->SetBinError(311,0.006590797);
   ThetaY_15_20__391->SetBinError(312,0.006586787);
   ThetaY_15_20__391->SetBinError(313,0.006556207);
   ThetaY_15_20__391->SetBinError(314,0.006570582);
   ThetaY_15_20__391->SetBinError(315,0.006532131);
   ThetaY_15_20__391->SetBinError(316,0.006564261);
   ThetaY_15_20__391->SetBinError(317,0.006532276);
   ThetaY_15_20__391->SetBinError(318,0.00656814);
   ThetaY_15_20__391->SetBinError(319,0.006574027);
   ThetaY_15_20__391->SetBinError(320,0.006592085);
   ThetaY_15_20__391->SetBinError(321,0.006603096);
   ThetaY_15_20__391->SetBinError(322,0.006572735);
   ThetaY_15_20__391->SetBinError(323,0.006478616);
   ThetaY_15_20__391->SetBinError(324,0.00625727);
   ThetaY_15_20__391->SetBinError(325,0.006017618);
   ThetaY_15_20__391->SetBinError(326,0.005662701);
   ThetaY_15_20__391->SetBinError(327,0.005063532);
   ThetaY_15_20__391->SetBinError(328,0.00412438);
   ThetaY_15_20__391->SetBinError(329,0.002839835);
   ThetaY_15_20__391->SetBinError(330,0.001667725);
   ThetaY_15_20__391->SetBinError(331,0.000526665);
   ThetaY_15_20__391->SetEntries(536056);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__391->SetLineColor(ci);
   ThetaY_15_20__391->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__391->SetMarkerColor(ci);
   ThetaY_15_20__391->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__391->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__391->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__391->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__391->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__391->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__391->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__391->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__391->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__391->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__391->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__391->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__391->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__391->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__391->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__391->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__391->Draw("AEsame");
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
   
   Double_t _fx3131[32] = {
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
   Double_t _fy3131[32] = {
   0,
   0,
   0.06698382,
   0.2297374,
   0.3334685,
   0.6382838,
   0.7903151,
   0.5708495,
   0.8366709,
   0.9643851,
   0.9070131,
   1,
   0.6633068,
   0.8210958,
   0.8300841,
   0.7126299,
   0.7812785,
   0.6489735,
   0.7929422,
   0.9548529,
   0.3123779,
   0.1245348,
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
   Double_t _felx3131[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3131[32] = {
   0,
   0,
   0.05541457,
   0.08475251,
   0.08253268,
   0.1045696,
   0.1073587,
   0.08781683,
   0.1044591,
   0.109844,
   0.1068094,
   0.1117606,
   0.09092651,
   0.1017244,
   0.1020615,
   0.09505942,
   0.09908628,
   0.09067566,
   0.09977053,
   0.1094665,
   0.06208734,
   0.03872168,
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
   Double_t _fehx3131[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3131[32] = {
   4.339525,
   0.3526957,
   0.1540902,
   0.1238152,
   0.106021,
   0.1232922,
   0.1230427,
   0.1024945,
   0.1183979,
   0.1231345,
   0.1201991,
   0.1250133,
   0.1043396,
   0.1151862,
   0.1154589,
   0.1086766,
   0.1125319,
   0.1043299,
   0.1131944,
   0.122803,
   0.07585385,
   0.05315477,
   0.02314035,
   0.02381761,
   0.02553255,
   0.02760682,
   0.03117604,
   0.03899123,
   0.05877217,
   0.1239801,
   0.3596391,
   3.626587};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3131,_fy3131,_felx3131,_fehx3131,_fely3131,_fehy3131);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3131 = new TH1F("Graph_Graph3131","",100,-100,100);
   Graph_Graph3131->SetMinimum(0);
   Graph_Graph3131->SetMaximum(1.5);
   Graph_Graph3131->SetDirectory(0);
   Graph_Graph3131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3131->SetLineColor(ci);
   Graph_Graph3131->GetXaxis()->SetRange(1,100);
   Graph_Graph3131->GetXaxis()->CenterTitle(true);
   Graph_Graph3131->GetXaxis()->SetLabelFont(42);
   Graph_Graph3131->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3131->GetXaxis()->SetTitleFont(42);
   Graph_Graph3131->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3131->GetYaxis()->CenterTitle(true);
   Graph_Graph3131->GetYaxis()->SetLabelFont(42);
   Graph_Graph3131->GetYaxis()->SetTitleFont(42);
   Graph_Graph3131->GetZaxis()->SetLabelFont(42);
   Graph_Graph3131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3131->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3131);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.104109,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__392 = new TH2D("ThetaY_vs_Y_15_20__392","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__392->SetBinContent(7816,123);
   ThetaY_vs_Y_15_20__392->SetBinContent(7842,1503);
   ThetaY_vs_Y_15_20__392->SetBinContent(7868,4296);
   ThetaY_vs_Y_15_20__392->SetBinContent(7894,8768);
   ThetaY_vs_Y_15_20__392->SetBinContent(7920,13807);
   ThetaY_vs_Y_15_20__392->SetBinContent(7946,16681);
   ThetaY_vs_Y_15_20__392->SetBinContent(7972,19662);
   ThetaY_vs_Y_15_20__392->SetBinContent(7998,21172);
   ThetaY_vs_Y_15_20__392->SetBinContent(8024,22012);
   ThetaY_vs_Y_15_20__392->SetBinContent(8050,22976);
   ThetaY_vs_Y_15_20__392->SetBinContent(8076,22843);
   ThetaY_vs_Y_15_20__392->SetBinContent(8102,23021);
   ThetaY_vs_Y_15_20__392->SetBinContent(8128,22993);
   ThetaY_vs_Y_15_20__392->SetBinContent(8154,22780);
   ThetaY_vs_Y_15_20__392->SetBinContent(8180,22880);
   ThetaY_vs_Y_15_20__392->SetBinContent(8206,22613);
   ThetaY_vs_Y_15_20__392->SetBinContent(8232,22836);
   ThetaY_vs_Y_15_20__392->SetBinContent(8258,22614);
   ThetaY_vs_Y_15_20__392->SetBinContent(8284,22863);
   ThetaY_vs_Y_15_20__392->SetBinContent(8310,22904);
   ThetaY_vs_Y_15_20__392->SetBinContent(8336,23030);
   ThetaY_vs_Y_15_20__392->SetBinContent(8362,23107);
   ThetaY_vs_Y_15_20__392->SetBinContent(8388,22895);
   ThetaY_vs_Y_15_20__392->SetBinContent(8414,22244);
   ThetaY_vs_Y_15_20__392->SetBinContent(8440,20750);
   ThetaY_vs_Y_15_20__392->SetBinContent(8466,19191);
   ThetaY_vs_Y_15_20__392->SetBinContent(8492,16994);
   ThetaY_vs_Y_15_20__392->SetBinContent(8518,13588);
   ThetaY_vs_Y_15_20__392->SetBinContent(8544,9015);
   ThetaY_vs_Y_15_20__392->SetBinContent(8570,4274);
   ThetaY_vs_Y_15_20__392->SetBinContent(8596,1474);
   ThetaY_vs_Y_15_20__392->SetBinContent(8622,147);
   ThetaY_vs_Y_15_20__392->SetEntries(536056);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__392->SetLineColor(ci);
   ThetaY_vs_Y_15_20__392->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__392->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__392->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__392->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__392->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__392->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__392->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__392->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__392->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__392->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__392->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__392->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__392->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__392->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__392->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
