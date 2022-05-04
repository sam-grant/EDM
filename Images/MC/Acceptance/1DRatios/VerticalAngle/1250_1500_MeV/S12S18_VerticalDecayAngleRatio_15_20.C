void S12S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.06580753,125,1.250343);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__1017 = new TH1D("S12S18_ThetaY_15_20__1017","",630,-1575,1575);
   S12S18_ThetaY_15_20__1017->SetBinContent(307,0.002159827);
   S12S18_ThetaY_15_20__1017->SetBinContent(308,0.09071274);
   S12S18_ThetaY_15_20__1017->SetBinContent(309,0.4708423);
   S12S18_ThetaY_15_20__1017->SetBinContent(310,0.7019438);
   S12S18_ThetaY_15_20__1017->SetBinContent(311,0.7710583);
   S12S18_ThetaY_15_20__1017->SetBinContent(312,0.8941685);
   S12S18_ThetaY_15_20__1017->SetBinContent(313,0.8466523);
   S12S18_ThetaY_15_20__1017->SetBinContent(314,1);
   S12S18_ThetaY_15_20__1017->SetBinContent(315,0.9395248);
   S12S18_ThetaY_15_20__1017->SetBinContent(316,1.00216);
   S12S18_ThetaY_15_20__1017->SetBinContent(317,0.887689);
   S12S18_ThetaY_15_20__1017->SetBinContent(318,0.6976242);
   S12S18_ThetaY_15_20__1017->SetBinContent(319,0.08423326);
   S12S18_ThetaY_15_20__1017->SetBinError(307,0.002159827);
   S12S18_ThetaY_15_20__1017->SetBinError(308,0.01399728);
   S12S18_ThetaY_15_20__1017->SetBinError(309,0.03188947);
   S12S18_ThetaY_15_20__1017->SetBinError(310,0.03893684);
   S12S18_ThetaY_15_20__1017->SetBinError(311,0.04080873);
   S12S18_ThetaY_15_20__1017->SetBinError(312,0.04394598);
   S12S18_ThetaY_15_20__1017->SetBinError(313,0.0427624);
   S12S18_ThetaY_15_20__1017->SetBinError(314,0.04647394);
   S12S18_ThetaY_15_20__1017->SetBinError(315,0.04504677);
   S12S18_ThetaY_15_20__1017->SetBinError(316,0.0465241);
   S12S18_ThetaY_15_20__1017->SetBinError(317,0.04378647);
   S12S18_ThetaY_15_20__1017->SetBinError(318,0.03881685);
   S12S18_ThetaY_15_20__1017->SetBinError(319,0.01348812);
   S12S18_ThetaY_15_20__1017->SetMinimum(0);
   S12S18_ThetaY_15_20__1017->SetMaximum(1.118728);
   S12S18_ThetaY_15_20__1017->SetEntries(3884);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1017->SetLineColor(ci);
   S12S18_ThetaY_15_20__1017->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1017->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__1017->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__1017->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__1017->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1017->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1017->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1017->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__1017->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__1017->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1017->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1017->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1017->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1017->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1017->Draw("AE");
   
   TH1D *ThetaY_15_20__1018 = new TH1D("ThetaY_15_20__1018","",630,-1575,1575);
   ThetaY_15_20__1018->SetBinContent(307,0.006014435);
   ThetaY_15_20__1018->SetBinContent(308,0.182993);
   ThetaY_15_20__1018->SetBinContent(309,0.5210043);
   ThetaY_15_20__1018->SetBinContent(310,0.7254333);
   ThetaY_15_20__1018->SetBinContent(311,0.8518598);
   ThetaY_15_20__1018->SetBinContent(312,0.9313738);
   ThetaY_15_20__1018->SetBinContent(313,0.9879711);
   ThetaY_15_20__1018->SetBinContent(314,1);
   ThetaY_15_20__1018->SetBinContent(315,1.016871);
   ThetaY_15_20__1018->SetBinContent(316,1.017025);
   ThetaY_15_20__1018->SetBinContent(317,1.015823);
   ThetaY_15_20__1018->SetBinContent(318,0.9837764);
   ThetaY_15_20__1018->SetBinContent(319,0.9341188);
   ThetaY_15_20__1018->SetBinContent(320,0.847696);
   ThetaY_15_20__1018->SetBinContent(321,0.7235211);
   ThetaY_15_20__1018->SetBinContent(322,0.5189378);
   ThetaY_15_20__1018->SetBinContent(323,0.1841651);
   ThetaY_15_20__1018->SetBinContent(324,0.005767689);
   ThetaY_15_20__1018->SetBinError(307,0.0004307026);
   ThetaY_15_20__1018->SetBinError(308,0.002375732);
   ThetaY_15_20__1018->SetBinError(309,0.004008674);
   ThetaY_15_20__1018->SetBinError(310,0.004730193);
   ThetaY_15_20__1018->SetBinError(311,0.00512583);
   ThetaY_15_20__1018->SetBinError(312,0.00535972);
   ThetaY_15_20__1018->SetBinError(313,0.005520167);
   ThetaY_15_20__1018->SetBinError(314,0.00555367);
   ThetaY_15_20__1018->SetBinError(315,0.005600323);
   ThetaY_15_20__1018->SetBinError(316,0.005600748);
   ThetaY_15_20__1018->SetBinError(317,0.005597435);
   ThetaY_15_20__1018->SetBinError(318,0.005508436);
   ThetaY_15_20__1018->SetBinError(319,0.005367613);
   ThetaY_15_20__1018->SetBinError(320,0.005113287);
   ThetaY_15_20__1018->SetBinError(321,0.004723954);
   ThetaY_15_20__1018->SetBinError(322,0.004000716);
   ThetaY_15_20__1018->SetBinError(323,0.002383328);
   ThetaY_15_20__1018->SetBinError(324,0.0004217752);
   ThetaY_15_20__1018->SetEntries(403795);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1018->SetLineColor(ci);
   ThetaY_15_20__1018->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1018->SetMarkerColor(ci);
   ThetaY_15_20__1018->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1018->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1018->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1018->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1018->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1018->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1018->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1018->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1018->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1018->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1018->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1018->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1018->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1018->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1018->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1018->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1018->Draw("AEsame");
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
   
   Double_t _fx3340[18] = {
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
   Double_t _fy3340[18] = {
   0.3591073,
   0.4957169,
   0.9037207,
   0.96762,
   0.9051469,
   0.9600533,
   0.8569605,
   1,
   0.9239369,
   0.9853832,
   0.8738622,
   0.7091288,
   0.09017403,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3340[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3340[18] = {
   0.2973594,
   0.07644804,
   0.06155235,
   0.05401455,
   0.04819065,
   0.04748645,
   0.04352785,
   0.046787,
   0.04457288,
   0.04604873,
   0.04335429,
   0.03963513,
   0.01438624,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3340[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3340[18] = {
   0.8327842,
   0.08927135,
   0.06589851,
   0.05711977,
   0.05082914,
   0.04989707,
   0.04579843,
   0.04903049,
   0.04677829,
   0.04825412,
   0.04556185,
   0.0419162,
   0.01688786,
   0.004690858,
   0.005495963,
   0.007662781,
   0.02159422,
   0.6928124};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3340,_fy3340,_felx3340,_fehx3340,_fely3340,_fehy3340);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3340 = new TH1F("Graph_Graph3340","",100,-100,100);
   Graph_Graph3340->SetMinimum(0);
   Graph_Graph3340->SetMaximum(1.5);
   Graph_Graph3340->SetDirectory(0);
   Graph_Graph3340->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3340->SetLineColor(ci);
   Graph_Graph3340->GetXaxis()->SetRange(1,100);
   Graph_Graph3340->GetXaxis()->CenterTitle(true);
   Graph_Graph3340->GetXaxis()->SetLabelFont(42);
   Graph_Graph3340->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3340->GetXaxis()->SetTitleFont(42);
   Graph_Graph3340->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3340->GetYaxis()->CenterTitle(true);
   Graph_Graph3340->GetYaxis()->SetLabelFont(42);
   Graph_Graph3340->GetYaxis()->SetTitleFont(42);
   Graph_Graph3340->GetZaxis()->SetLabelFont(42);
   Graph_Graph3340->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3340->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3340);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.118728,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1019 = new TH2D("ThetaY_vs_Y_15_20__1019","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1019->SetBinContent(7998,195);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8024,5933);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8050,16892);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8076,23520);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8102,27619);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8128,30197);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8154,32032);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8180,32422);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8206,32969);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8232,32974);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8258,32935);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8284,31896);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8310,30286);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8336,27484);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8362,23458);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8388,16825);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8414,5971);
   ThetaY_vs_Y_15_20__1019->SetBinContent(8440,187);
   ThetaY_vs_Y_15_20__1019->SetEntries(403795);
   ThetaY_vs_Y_15_20__1019->SetContour(20);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(1,1648.7);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(2,3297.4);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(3,4946.1);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(4,6594.8);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(5,8243.5);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(6,9892.2);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(7,11540.9);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(8,13189.6);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(9,14838.3);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(10,16487);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(11,18135.7);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(12,19784.4);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(13,21433.1);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(14,23081.8);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(15,24730.5);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(16,26379.2);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(17,28027.9);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(18,29676.6);
   ThetaY_vs_Y_15_20__1019->SetContourLevel(19,31325.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1019->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1019->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1019->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1019->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1019->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1019->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1019->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1019->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1019->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1019->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1019->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1019->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1019->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1019->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1019->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1019->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
