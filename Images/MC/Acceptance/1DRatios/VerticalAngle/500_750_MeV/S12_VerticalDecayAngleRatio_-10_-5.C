void S12_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06540209,125,1.24264);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__375 = new TH1D("S12_ThetaY_mI10_mI5__375","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__375->SetBinContent(307,0.008130081);
   S12_ThetaY_mI10_mI5__375->SetBinContent(308,0.09756098);
   S12_ThetaY_mI10_mI5__375->SetBinContent(309,0.504065);
   S12_ThetaY_mI10_mI5__375->SetBinContent(310,0.8455285);
   S12_ThetaY_mI10_mI5__375->SetBinContent(311,0.7479675);
   S12_ThetaY_mI10_mI5__375->SetBinContent(312,0.8455285);
   S12_ThetaY_mI10_mI5__375->SetBinContent(313,0.8780488);
   S12_ThetaY_mI10_mI5__375->SetBinContent(314,0.7804878);
   S12_ThetaY_mI10_mI5__375->SetBinContent(315,0.7642276);
   S12_ThetaY_mI10_mI5__375->SetBinContent(316,0.9349593);
   S12_ThetaY_mI10_mI5__375->SetBinContent(317,0.7560976);
   S12_ThetaY_mI10_mI5__375->SetBinContent(318,0.9268293);
   S12_ThetaY_mI10_mI5__375->SetBinContent(319,0.7317073);
   S12_ThetaY_mI10_mI5__375->SetBinContent(320,0.7642276);
   S12_ThetaY_mI10_mI5__375->SetBinContent(321,0.8292683);
   S12_ThetaY_mI10_mI5__375->SetBinContent(322,1);
   S12_ThetaY_mI10_mI5__375->SetBinContent(323,0.796748);
   S12_ThetaY_mI10_mI5__375->SetBinContent(324,0.6097561);
   S12_ThetaY_mI10_mI5__375->SetBinContent(325,0.4065041);
   S12_ThetaY_mI10_mI5__375->SetBinContent(326,0.1300813);
   S12_ThetaY_mI10_mI5__375->SetBinContent(327,0.02439024);
   S12_ThetaY_mI10_mI5__375->SetBinError(307,0.008130081);
   S12_ThetaY_mI10_mI5__375->SetBinError(308,0.02816343);
   S12_ThetaY_mI10_mI5__375->SetBinError(309,0.06401632);
   S12_ThetaY_mI10_mI5__375->SetBinError(310,0.08291089);
   S12_ThetaY_mI10_mI5__375->SetBinError(311,0.077981);
   S12_ThetaY_mI10_mI5__375->SetBinError(312,0.08291089);
   S12_ThetaY_mI10_mI5__375->SetBinError(313,0.08449028);
   S12_ThetaY_mI10_mI5__375->SetBinError(314,0.0796582);
   S12_ThetaY_mI10_mI5__375->SetBinError(315,0.07882406);
   S12_ThetaY_mI10_mI5__375->SetBinError(316,0.08718541);
   S12_ThetaY_mI10_mI5__375->SetBinError(317,0.07840366);
   S12_ThetaY_mI10_mI5__375->SetBinError(318,0.08680551);
   S12_ThetaY_mI10_mI5__375->SetBinError(319,0.07712872);
   S12_ThetaY_mI10_mI5__375->SetBinError(320,0.07882406);
   S12_ThetaY_mI10_mI5__375->SetBinError(321,0.0821098);
   S12_ThetaY_mI10_mI5__375->SetBinError(322,0.09016696);
   S12_ThetaY_mI10_mI5__375->SetBinError(323,0.0804837);
   S12_ThetaY_mI10_mI5__375->SetBinError(324,0.07040857);
   S12_ThetaY_mI10_mI5__375->SetBinError(325,0.05748836);
   S12_ThetaY_mI10_mI5__375->SetBinError(326,0.03252033);
   S12_ThetaY_mI10_mI5__375->SetBinError(327,0.01408171);
   S12_ThetaY_mI10_mI5__375->SetMinimum(0);
   S12_ThetaY_mI10_mI5__375->SetMaximum(1.111836);
   S12_ThetaY_mI10_mI5__375->SetEntries(1646);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__375->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__375->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__375->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__375->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__375->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__375->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__375->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__375->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__375->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__375->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__375->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__375->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__375->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__375->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__375->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__375->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__376 = new TH1D("ThetaY_mI10_mI5__376","",630,-1575,1575);
   ThetaY_mI10_mI5__376->SetBinContent(300,0.005459678);
   ThetaY_mI10_mI5__376->SetBinContent(301,0.06511665);
   ThetaY_mI10_mI5__376->SetBinContent(302,0.1921274);
   ThetaY_mI10_mI5__376->SetBinContent(303,0.3975711);
   ThetaY_mI10_mI5__376->SetBinContent(304,0.6049856);
   ThetaY_mI10_mI5__376->SetBinContent(305,0.749707);
   ThetaY_mI10_mI5__376->SetBinContent(306,0.8518962);
   ThetaY_mI10_mI5__376->SetBinContent(307,0.9228454);
   ThetaY_mI10_mI5__376->SetBinContent(308,0.9709439);
   ThetaY_mI10_mI5__376->SetBinContent(309,1.000533);
   ThetaY_mI10_mI5__376->SetBinContent(310,1.009188);
   ThetaY_mI10_mI5__376->SetBinContent(311,1.006019);
   ThetaY_mI10_mI5__376->SetBinContent(312,1.009188);
   ThetaY_mI10_mI5__376->SetBinContent(313,0.9962182);
   ThetaY_mI10_mI5__376->SetBinContent(314,1.001412);
   ThetaY_mI10_mI5__376->SetBinContent(315,0.9885214);
   ThetaY_mI10_mI5__376->SetBinContent(316,1.001119);
   ThetaY_mI10_mI5__376->SetBinContent(317,0.9947001);
   ThetaY_mI10_mI5__376->SetBinContent(318,1.004874);
   ThetaY_mI10_mI5__376->SetBinContent(319,1.005193);
   ThetaY_mI10_mI5__376->SetBinContent(320,1.007377);
   ThetaY_mI10_mI5__376->SetBinContent(321,1.01076);
   ThetaY_mI10_mI5__376->SetBinContent(322,1);
   ThetaY_mI10_mI5__376->SetBinContent(323,0.9690529);
   ThetaY_mI10_mI5__376->SetBinContent(324,0.9264408);
   ThetaY_mI10_mI5__376->SetBinContent(325,0.8578886);
   ThetaY_mI10_mI5__376->SetBinContent(326,0.75);
   ThetaY_mI10_mI5__376->SetBinContent(327,0.6042133);
   ThetaY_mI10_mI5__376->SetBinContent(328,0.3922712);
   ThetaY_mI10_mI5__376->SetBinContent(329,0.1902898);
   ThetaY_mI10_mI5__376->SetBinContent(330,0.06397145);
   ThetaY_mI10_mI5__376->SetBinContent(331,0.006338553);
   ThetaY_mI10_mI5__376->SetBinError(300,0.0003813205);
   ThetaY_mI10_mI5__376->SetBinError(301,0.001316899);
   ThetaY_mI10_mI5__376->SetBinError(302,0.002262045);
   ThetaY_mI10_mI5__376->SetBinError(303,0.003253973);
   ThetaY_mI10_mI5__376->SetBinError(304,0.004014016);
   ThetaY_mI10_mI5__376->SetBinError(305,0.004468404);
   ThetaY_mI10_mI5__376->SetBinError(306,0.004763212);
   ThetaY_mI10_mI5__376->SetBinError(307,0.004957595);
   ThetaY_mI10_mI5__376->SetBinError(308,0.005085149);
   ThetaY_mI10_mI5__376->SetBinError(309,0.00516205);
   ThetaY_mI10_mI5__376->SetBinError(310,0.005184331);
   ThetaY_mI10_mI5__376->SetBinError(311,0.005176184);
   ThetaY_mI10_mI5__376->SetBinError(312,0.005184331);
   ThetaY_mI10_mI5__376->SetBinError(313,0.005150908);
   ThetaY_mI10_mI5__376->SetBinError(314,0.005164317);
   ThetaY_mI10_mI5__376->SetBinError(315,0.005130972);
   ThetaY_mI10_mI5__376->SetBinError(316,0.005163561);
   ThetaY_mI10_mI5__376->SetBinError(317,0.005146982);
   ThetaY_mI10_mI5__376->SetBinError(318,0.005173237);
   ThetaY_mI10_mI5__376->SetBinError(319,0.005174059);
   ThetaY_mI10_mI5__376->SetBinError(320,0.005179677);
   ThetaY_mI10_mI5__376->SetBinError(321,0.005188365);
   ThetaY_mI10_mI5__376->SetBinError(322,0.005160676);
   ThetaY_mI10_mI5__376->SetBinError(323,0.005080195);
   ThetaY_mI10_mI5__376->SetBinError(324,0.004967243);
   ThetaY_mI10_mI5__376->SetBinError(325,0.004779935);
   ThetaY_mI10_mI5__376->SetBinError(326,0.004469277);
   ThetaY_mI10_mI5__376->SetBinError(327,0.004011453);
   ThetaY_mI10_mI5__376->SetBinError(328,0.003232212);
   ThetaY_mI10_mI5__376->SetBinError(329,0.002251201);
   ThetaY_mI10_mI5__376->SetBinError(330,0.001305268);
   ThetaY_mI10_mI5__376->SetBinError(331,0.0004108674);
   ThetaY_mI10_mI5__376->SetEntries(884489);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__376->SetLineColor(ci);
   ThetaY_mI10_mI5__376->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__376->SetMarkerColor(ci);
   ThetaY_mI10_mI5__376->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__376->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__376->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__376->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__376->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__376->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__376->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__376->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__376->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__376->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__376->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__376->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__376->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__376->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__376->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__376->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__376->Draw("AEsame");
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
   
   Double_t _fx3126[32] = {
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
   Double_t _fy3126[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008809797,
   0.1004806,
   0.5037967,
   0.8378303,
   0.7434924,
   0.8378303,
   0.881382,
   0.7793877,
   0.7731018,
   0.9339147,
   0.7601261,
   0.922334,
   0.7279269,
   0.7586311,
   0.8204407,
   1,
   0.8221924,
   0.6581706,
   0.4738425,
   0.1734417,
   0.04036694,
   0,
   0,
   0,
   0};
   Double_t _felx3126[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3126[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007287912,
   0.02860167,
   0.06386102,
   0.08213518,
   0.0774665,
   0.08213518,
   0.08480061,
   0.07950744,
   0.07969698,
   0.08709302,
   0.07877634,
   0.08638675,
   0.07667771,
   0.0782034,
   0.08121026,
   0.09019047,
   0.08302253,
   0.07590983,
   0.06683738,
   0.04291448,
   0.02197017,
   0,
   0,
   0,
   0};
   Double_t _fehx3126[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3126[32] = {
   2.753837,
   0.2299457,
   0.07791478,
   0.03765007,
   0.02474152,
   0.01996533,
   0.01757032,
   0.02025933,
   0.03818977,
   0.07252055,
   0.09061311,
   0.08599356,
   0.09061311,
   0.0933827,
   0.08806584,
   0.08837128,
   0.09562249,
   0.08739863,
   0.09488566,
   0.085216,
   0.08671488,
   0.08967836,
   0.0987188,
   0.09186366,
   0.08521619,
   0.07700458,
   0.05512161,
   0.0392712,
   0.03815878,
   0.07866731,
   0.2340637,
   2.370524};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3126,_fy3126,_felx3126,_fehx3126,_fely3126,_fehy3126);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3126 = new TH1F("Graph_Graph3126","",100,-100,100);
   Graph_Graph3126->SetMinimum(0);
   Graph_Graph3126->SetMaximum(1.5);
   Graph_Graph3126->SetDirectory(0);
   Graph_Graph3126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3126->SetLineColor(ci);
   Graph_Graph3126->GetXaxis()->SetRange(1,100);
   Graph_Graph3126->GetXaxis()->CenterTitle(true);
   Graph_Graph3126->GetXaxis()->SetLabelFont(42);
   Graph_Graph3126->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3126->GetXaxis()->SetTitleFont(42);
   Graph_Graph3126->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3126->GetYaxis()->CenterTitle(true);
   Graph_Graph3126->GetYaxis()->SetLabelFont(42);
   Graph_Graph3126->GetYaxis()->SetTitleFont(42);
   Graph_Graph3126->GetZaxis()->SetLabelFont(42);
   Graph_Graph3126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3126->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3126);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.111836,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__377 = new TH2D("ThetaY_vs_Y_mI10_mI5__377","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7811,205);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7837,2445);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7863,7214);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7889,14928);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7915,22716);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7941,28150);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7967,31987);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(7993,34651);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8019,36457);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8045,37568);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8071,37893);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8097,37774);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8123,37893);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8149,37406);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8175,37601);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8201,37117);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8227,37590);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8253,37349);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8279,37731);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8305,37743);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8331,37825);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8357,37952);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8383,37548);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8409,36386);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8435,34786);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8461,32212);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8487,28161);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8513,22687);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8539,14729);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8565,7145);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8591,2402);
   ThetaY_vs_Y_mI10_mI5__377->SetBinContent(8617,238);
   ThetaY_vs_Y_mI10_mI5__377->SetEntries(884489);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__377->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__377->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__377->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__377->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__377->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__377->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__377->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__377->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__377->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__377->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__377->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__377->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__377->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__377->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__377->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__377->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
