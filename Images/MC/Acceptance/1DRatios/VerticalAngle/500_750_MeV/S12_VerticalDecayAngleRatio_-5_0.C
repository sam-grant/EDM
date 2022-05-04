void S12_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__378 = new TH1D("S12_ThetaY_mI5_0__378","",630,-1575,1575);
   S12_ThetaY_mI5_0__378->SetBinContent(306,0.032);
   S12_ThetaY_mI5_0__378->SetBinContent(307,0.12);
   S12_ThetaY_mI5_0__378->SetBinContent(308,0.36);
   S12_ThetaY_mI5_0__378->SetBinContent(309,0.872);
   S12_ThetaY_mI5_0__378->SetBinContent(310,0.912);
   S12_ThetaY_mI5_0__378->SetBinContent(311,0.792);
   S12_ThetaY_mI5_0__378->SetBinContent(312,0.84);
   S12_ThetaY_mI5_0__378->SetBinContent(313,0.984);
   S12_ThetaY_mI5_0__378->SetBinContent(314,0.896);
   S12_ThetaY_mI5_0__378->SetBinContent(315,0.96);
   S12_ThetaY_mI5_0__378->SetBinContent(316,0.856);
   S12_ThetaY_mI5_0__378->SetBinContent(317,0.896);
   S12_ThetaY_mI5_0__378->SetBinContent(318,0.928);
   S12_ThetaY_mI5_0__378->SetBinContent(319,0.848);
   S12_ThetaY_mI5_0__378->SetBinContent(320,1);
   S12_ThetaY_mI5_0__378->SetBinContent(321,0.824);
   S12_ThetaY_mI5_0__378->SetBinContent(322,0.888);
   S12_ThetaY_mI5_0__378->SetBinContent(323,0.712);
   S12_ThetaY_mI5_0__378->SetBinContent(324,0.368);
   S12_ThetaY_mI5_0__378->SetBinContent(325,0.152);
   S12_ThetaY_mI5_0__378->SetBinContent(326,0.024);
   S12_ThetaY_mI5_0__378->SetBinError(306,0.016);
   S12_ThetaY_mI5_0__378->SetBinError(307,0.03098387);
   S12_ThetaY_mI5_0__378->SetBinError(308,0.05366563);
   S12_ThetaY_mI5_0__378->SetBinError(309,0.08352245);
   S12_ThetaY_mI5_0__378->SetBinError(310,0.08541663);
   S12_ThetaY_mI5_0__378->SetBinError(311,0.07959899);
   S12_ThetaY_mI5_0__378->SetBinError(312,0.08197561);
   S12_ThetaY_mI5_0__378->SetBinError(313,0.08872429);
   S12_ThetaY_mI5_0__378->SetBinError(314,0.08466404);
   S12_ThetaY_mI5_0__378->SetBinError(315,0.08763561);
   S12_ThetaY_mI5_0__378->SetBinError(316,0.08275264);
   S12_ThetaY_mI5_0__378->SetBinError(317,0.08466404);
   S12_ThetaY_mI5_0__378->SetBinError(318,0.08616264);
   S12_ThetaY_mI5_0__378->SetBinError(319,0.08236504);
   S12_ThetaY_mI5_0__378->SetBinError(320,0.08944272);
   S12_ThetaY_mI5_0__378->SetBinError(321,0.08119113);
   S12_ThetaY_mI5_0__378->SetBinError(322,0.08428523);
   S12_ThetaY_mI5_0__378->SetBinError(323,0.07547185);
   S12_ThetaY_mI5_0__378->SetBinError(324,0.05425864);
   S12_ThetaY_mI5_0__378->SetBinError(325,0.03487119);
   S12_ThetaY_mI5_0__378->SetBinError(326,0.01385641);
   S12_ThetaY_mI5_0__378->SetMinimum(0);
   S12_ThetaY_mI5_0__378->SetMaximum(1.1);
   S12_ThetaY_mI5_0__378->SetEntries(1783);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__378->SetLineColor(ci);
   S12_ThetaY_mI5_0__378->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__378->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__378->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__378->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__378->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__378->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__378->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__378->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__378->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__378->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__378->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__378->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__378->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__378->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__378->Draw("AE");
   
   TH1D *ThetaY_mI5_0__379 = new TH1D("ThetaY_mI5_0__379","",630,-1575,1575);
   ThetaY_mI5_0__379->SetBinContent(300,0.005106302);
   ThetaY_mI5_0__379->SetBinContent(301,0.0648548);
   ThetaY_mI5_0__379->SetBinContent(302,0.1921067);
   ThetaY_mI5_0__379->SetBinContent(303,0.3878642);
   ThetaY_mI5_0__379->SetBinContent(304,0.5963635);
   ThetaY_mI5_0__379->SetBinContent(305,0.7459734);
   ThetaY_mI5_0__379->SetBinContent(306,0.8366938);
   ThetaY_mI5_0__379->SetBinContent(307,0.9120953);
   ThetaY_mI5_0__379->SetBinContent(308,0.9553557);
   ThetaY_mI5_0__379->SetBinContent(309,0.9774511);
   ThetaY_mI5_0__379->SetBinContent(310,0.9966117);
   ThetaY_mI5_0__379->SetBinContent(311,0.9974946);
   ThetaY_mI5_0__379->SetBinContent(312,0.9840607);
   ThetaY_mI5_0__379->SetBinContent(313,0.9917679);
   ThetaY_mI5_0__379->SetBinContent(314,0.9779045);
   ThetaY_mI5_0__379->SetBinContent(315,0.9804815);
   ThetaY_mI5_0__379->SetBinContent(316,0.9769262);
   ThetaY_mI5_0__379->SetBinContent(317,0.9878069);
   ThetaY_mI5_0__379->SetBinContent(318,0.9949891);
   ThetaY_mI5_0__379->SetBinContent(319,0.9923167);
   ThetaY_mI5_0__379->SetBinContent(320,1);
   ThetaY_mI5_0__379->SetBinContent(321,0.9840607);
   ThetaY_mI5_0__379->SetBinContent(322,0.9864707);
   ThetaY_mI5_0__379->SetBinContent(323,0.9596029);
   ThetaY_mI5_0__379->SetBinContent(324,0.9005226);
   ThetaY_mI5_0__379->SetBinContent(325,0.8418955);
   ThetaY_mI5_0__379->SetBinContent(326,0.7460689);
   ThetaY_mI5_0__379->SetBinContent(327,0.5997518);
   ThetaY_mI5_0__379->SetBinContent(328,0.3824);
   ThetaY_mI5_0__379->SetBinContent(329,0.1890047);
   ThetaY_mI5_0__379->SetBinContent(330,0.06194374);
   ThetaY_mI5_0__379->SetBinContent(331,0.005583526);
   ThetaY_mI5_0__379->SetBinError(300,0.0003490596);
   ThetaY_mI5_0__379->SetBinError(301,0.001243992);
   ThetaY_mI5_0__379->SetBinError(302,0.002141005);
   ThetaY_mI5_0__379->SetBinError(303,0.003042189);
   ThetaY_mI5_0__379->SetBinError(304,0.003772262);
   ThetaY_mI5_0__379->SetBinError(305,0.004218985);
   ThetaY_mI5_0__379->SetBinError(306,0.004468169);
   ThetaY_mI5_0__379->SetBinError(307,0.004665159);
   ThetaY_mI5_0__379->SetBinError(308,0.004774511);
   ThetaY_mI5_0__379->SetBinError(309,0.004829408);
   ThetaY_mI5_0__379->SetBinError(310,0.004876513);
   ThetaY_mI5_0__379->SetBinError(311,0.004878672);
   ThetaY_mI5_0__379->SetBinError(312,0.004845709);
   ThetaY_mI5_0__379->SetBinError(313,0.004864647);
   ThetaY_mI5_0__379->SetBinError(314,0.004830528);
   ThetaY_mI5_0__379->SetBinError(315,0.004836888);
   ThetaY_mI5_0__379->SetBinError(316,0.004828111);
   ThetaY_mI5_0__379->SetBinError(317,0.004854923);
   ThetaY_mI5_0__379->SetBinError(318,0.004872541);
   ThetaY_mI5_0__379->SetBinError(319,0.004865993);
   ThetaY_mI5_0__379->SetBinError(320,0.004884795);
   ThetaY_mI5_0__379->SetBinError(321,0.004845709);
   ThetaY_mI5_0__379->SetBinError(322,0.004851639);
   ThetaY_mI5_0__379->SetBinError(323,0.004785112);
   ThetaY_mI5_0__379->SetBinError(324,0.004635469);
   ThetaY_mI5_0__379->SetBinError(325,0.004482037);
   ThetaY_mI5_0__379->SetBinError(326,0.004219255);
   ThetaY_mI5_0__379->SetBinError(327,0.003782963);
   ThetaY_mI5_0__379->SetBinError(328,0.003020684);
   ThetaY_mI5_0__379->SetBinError(329,0.002123649);
   ThetaY_mI5_0__379->SetBinError(330,0.001215752);
   ThetaY_mI5_0__379->SetBinError(331,0.0003650065);
   ThetaY_mI5_0__379->SetEntries(972772);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__379->SetLineColor(ci);
   ThetaY_mI5_0__379->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__379->SetMarkerColor(ci);
   ThetaY_mI5_0__379->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__379->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__379->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__379->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__379->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__379->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__379->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__379->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__379->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__379->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__379->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__379->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__379->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__379->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__379->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__379->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__379->Draw("AEsame");
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
   
   Double_t _fx3127[32] = {
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
   Double_t _fy3127[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.03824577,
   0.1315652,
   0.376823,
   0.8921162,
   0.9151006,
   0.7939893,
   0.8536059,
   0.9921676,
   0.9162449,
   0.9791108,
   0.8762177,
   0.9070599,
   0.9326735,
   0.8545659,
   1,
   0.8373467,
   0.9001788,
   0.7419735,
   0.4086516,
   0.180545,
   0.03216861,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3127[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3127[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.01830467,
   0.03359373,
   0.05599468,
   0.08543041,
   0.08569689,
   0.0797573,
   0.0832754,
   0.08947006,
   0.08656462,
   0.08938468,
   0.08468406,
   0.08569568,
   0.08659078,
   0.08297626,
   0.08945504,
   0.08247393,
   0.08542578,
   0.07858689,
   0.06006835,
   0.04106282,
   0.0175079,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3127[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3127[32] = {
   2.896756,
   0.2271715,
   0.07667539,
   0.03797465,
   0.02469755,
   0.01974414,
   0.03024357,
   0.04350452,
   0.06500628,
   0.09403332,
   0.0941264,
   0.08820375,
   0.09182687,
   0.09792862,
   0.09515887,
   0.09794488,
   0.09329483,
   0.09420351,
   0.09503123,
   0.09145472,
   0.09784125,
   0.09102881,
   0.09394669,
   0.08738851,
   0.06962245,
   0.05166511,
   0.03129429,
   0.02455801,
   0.03851731,
   0.07793394,
   0.2378513,
   2.648194};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3127,_fy3127,_felx3127,_fehx3127,_fely3127,_fehy3127);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3127 = new TH1F("Graph_Graph3127","",100,-100,100);
   Graph_Graph3127->SetMinimum(0);
   Graph_Graph3127->SetMaximum(1.5);
   Graph_Graph3127->SetDirectory(0);
   Graph_Graph3127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3127->SetLineColor(ci);
   Graph_Graph3127->GetXaxis()->SetRange(1,100);
   Graph_Graph3127->GetXaxis()->CenterTitle(true);
   Graph_Graph3127->GetXaxis()->SetLabelFont(42);
   Graph_Graph3127->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3127->GetXaxis()->SetTitleFont(42);
   Graph_Graph3127->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3127->GetYaxis()->CenterTitle(true);
   Graph_Graph3127->GetYaxis()->SetLabelFont(42);
   Graph_Graph3127->GetYaxis()->SetTitleFont(42);
   Graph_Graph3127->GetZaxis()->SetLabelFont(42);
   Graph_Graph3127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3127->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3127);
   
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
   
   TH2D *ThetaY_vs_Y_mI5_0__380 = new TH2D("ThetaY_vs_Y_mI5_0__380","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7812,214);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7838,2718);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7864,8051);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7890,16255);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7916,24993);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7942,31263);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7968,35065);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(7994,38225);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8020,40038);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8046,40964);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8072,41767);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8098,41804);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8124,41241);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8150,41564);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8176,40983);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8202,41091);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8228,40942);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8254,41398);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8280,41699);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8306,41587);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8332,41909);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8358,41241);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8384,41342);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8410,40216);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8436,37740);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8462,35283);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8488,31267);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8514,25135);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8540,16026);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8566,7921);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8592,2596);
   ThetaY_vs_Y_mI5_0__380->SetBinContent(8618,234);
   ThetaY_vs_Y_mI5_0__380->SetEntries(972772);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__380->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__380->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__380->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__380->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__380->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__380->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__380->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__380->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__380->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__380->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__380->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__380->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__380->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__380->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__380->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__380->Draw("COL");
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
