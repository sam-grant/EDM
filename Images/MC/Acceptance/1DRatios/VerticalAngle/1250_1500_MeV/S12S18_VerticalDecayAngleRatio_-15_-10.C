void S12S18_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI15_mI10__999 = new TH1D("S12S18_ThetaY_mI15_mI10__999","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(311,0.04);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(312,0.4432);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(313,0.8784);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(314,0.976);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(315,0.9808);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(316,1);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(317,0.9152);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(318,0.8544);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(319,0.832);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(320,0.7616);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(321,0.6544);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(322,0.2592);
   S12S18_ThetaY_mI15_mI10__999->SetBinContent(323,0.0432);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(311,0.008);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(312,0.02662931);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(313,0.0374892);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(314,0.03951708);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(315,0.03961414);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(316,0.04);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(317,0.03826643);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(318,0.0369735);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(319,0.03648561);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(320,0.03490788);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(321,0.032358);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(322,0.02036468);
   S12S18_ThetaY_mI15_mI10__999->SetBinError(323,0.008313844);
   S12S18_ThetaY_mI15_mI10__999->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__999->SetMaximum(1.1);
   S12S18_ThetaY_mI15_mI10__999->SetEntries(5399);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__999->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__999->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__999->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__999->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__999->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__999->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__999->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__999->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__999->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__999->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__999->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__999->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__999->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__999->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__999->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__999->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1000 = new TH1D("ThetaY_mI15_mI10__1000","",630,-1575,1575);
   ThetaY_mI15_mI10__1000->SetBinContent(307,0.006105955);
   ThetaY_mI15_mI10__1000->SetBinContent(308,0.1769839);
   ThetaY_mI15_mI10__1000->SetBinContent(309,0.4982681);
   ThetaY_mI15_mI10__1000->SetBinContent(310,0.6989431);
   ThetaY_mI15_mI10__1000->SetBinContent(311,0.8306319);
   ThetaY_mI15_mI10__1000->SetBinContent(312,0.908233);
   ThetaY_mI15_mI10__1000->SetBinContent(313,0.9614548);
   ThetaY_mI15_mI10__1000->SetBinContent(314,0.9863449);
   ThetaY_mI15_mI10__1000->SetBinContent(315,0.9968693);
   ThetaY_mI15_mI10__1000->SetBinContent(316,1);
   ThetaY_mI15_mI10__1000->SetBinContent(317,0.9807496);
   ThetaY_mI15_mI10__1000->SetBinContent(318,0.9541942);
   ThetaY_mI15_mI10__1000->SetBinContent(319,0.9064346);
   ThetaY_mI15_mI10__1000->SetBinContent(320,0.8311204);
   ThetaY_mI15_mI10__1000->SetBinContent(321,0.7044274);
   ThetaY_mI15_mI10__1000->SetBinContent(322,0.50131);
   ThetaY_mI15_mI10__1000->SetBinContent(323,0.1753852);
   ThetaY_mI15_mI10__1000->SetBinContent(324,0.004906967);
   ThetaY_mI15_mI10__1000->SetBinError(307,0.0003682029);
   ThetaY_mI15_mI10__1000->SetBinError(308,0.001982336);
   ThetaY_mI15_mI10__1000->SetBinError(309,0.003326151);
   ThetaY_mI15_mI10__1000->SetBinError(310,0.003939412);
   ThetaY_mI15_mI10__1000->SetBinError(311,0.004294521);
   ThetaY_mI15_mI10__1000->SetBinError(312,0.004490649);
   ThetaY_mI15_mI10__1000->SetBinError(313,0.00462035);
   ThetaY_mI15_mI10__1000->SetBinError(314,0.004679774);
   ThetaY_mI15_mI10__1000->SetBinError(315,0.004704674);
   ThetaY_mI15_mI10__1000->SetBinError(316,0.004712056);
   ThetaY_mI15_mI10__1000->SetBinError(317,0.004666481);
   ThetaY_mI15_mI10__1000->SetBinError(318,0.004602871);
   ThetaY_mI15_mI10__1000->SetBinError(319,0.004486201);
   ThetaY_mI15_mI10__1000->SetBinError(320,0.004295784);
   ThetaY_mI15_mI10__1000->SetBinError(321,0.003954837);
   ThetaY_mI15_mI10__1000->SetBinError(322,0.003336289);
   ThetaY_mI15_mI10__1000->SetBinError(323,0.001973363);
   ThetaY_mI15_mI10__1000->SetBinError(324,0.0003300784);
   ThetaY_mI15_mI10__1000->SetEntries(545967);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1000->SetLineColor(ci);
   ThetaY_mI15_mI10__1000->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1000->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1000->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1000->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1000->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1000->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1000->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1000->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1000->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1000->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1000->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1000->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1000->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1000->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1000->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1000->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1000->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1000->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1000->Draw("AEsame");
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
   
   Double_t _fx3334[18] = {
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
   42.5};
   Double_t _fy3334[18] = {
   0,
   0,
   0,
   0,
   0.04815611,
   0.4879805,
   0.9136155,
   0.9895119,
   0.9838802,
   1,
   0.9331638,
   0.8954152,
   0.917882,
   0.9163534,
   0.9289815,
   0.5170453,
   0.2463149,
   0};
   Double_t _felx3334[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3334[18] = {
   0,
   0,
   0,
   0,
   0.009569451,
   0.02940091,
   0.03922618,
   0.04032681,
   0.03999757,
   0.04026538,
   0.03925745,
   0.03897576,
   0.04049383,
   0.04225181,
   0.04621072,
   0.04072542,
   0.04718557,
   0};
   Double_t _fehx3334[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3334[18] = {
   0.4840384,
   0.01664544,
   0.005911989,
   0.004214536,
   0.01169058,
   0.03122879,
   0.04094858,
   0.04200572,
   0.04165854,
   0.04192121,
   0.04094571,
   0.04071134,
   0.04232199,
   0.04424758,
   0.04857017,
   0.04406882,
   0.05723097,
   0.6028037};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3334,_fy3334,_felx3334,_fehx3334,_fely3334,_fehy3334);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3334 = new TH1F("Graph_Graph3334","",100,-100,100);
   Graph_Graph3334->SetMinimum(0);
   Graph_Graph3334->SetMaximum(1.5);
   Graph_Graph3334->SetDirectory(0);
   Graph_Graph3334->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3334->SetLineColor(ci);
   Graph_Graph3334->GetXaxis()->SetRange(1,100);
   Graph_Graph3334->GetXaxis()->CenterTitle(true);
   Graph_Graph3334->GetXaxis()->SetLabelFont(42);
   Graph_Graph3334->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3334->GetXaxis()->SetTitleFont(42);
   Graph_Graph3334->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3334->GetYaxis()->CenterTitle(true);
   Graph_Graph3334->GetYaxis()->SetLabelFont(42);
   Graph_Graph3334->GetYaxis()->SetTitleFont(42);
   Graph_Graph3334->GetZaxis()->SetLabelFont(42);
   Graph_Graph3334->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3334->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3334);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1001 = new TH2D("ThetaY_vs_Y_mI15_mI10__1001","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(7992,275);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8018,7971);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8044,22441);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8070,31479);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8096,37410);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8122,40905);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8148,43302);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8174,44423);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8200,44897);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8226,45038);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8252,44171);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8278,42975);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8304,40824);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8330,37432);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8356,31726);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8382,22578);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8408,7899);
   ThetaY_vs_Y_mI15_mI10__1001->SetBinContent(8434,221);
   ThetaY_vs_Y_mI15_mI10__1001->SetEntries(545967);
   ThetaY_vs_Y_mI15_mI10__1001->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(1,2251.9);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(2,4503.8);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(3,6755.7);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(4,9007.6);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(5,11259.5);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(6,13511.4);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(7,15763.3);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(8,18015.2);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(9,20267.1);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(10,22519);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(11,24770.9);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(12,27022.8);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(13,29274.7);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(14,31526.6);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(15,33778.5);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(16,36030.4);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(17,38282.3);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(18,40534.2);
   ThetaY_vs_Y_mI15_mI10__1001->SetContourLevel(19,42786.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1001->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1001->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1001->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1001->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1001->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1001->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1001->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1001->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1001->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1001->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1001->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1001->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1001->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1001->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1001->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1001->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-15_-10","Reco vertices","lpf");
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
