void S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07715395,125,1.465925);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__1134 = new TH1D("S18_ThetaY_20_25__1134","",630,-1575,1575);
   S18_ThetaY_20_25__1134->SetBinContent(309,0.1285714);
   S18_ThetaY_20_25__1134->SetBinContent(310,0.5214286);
   S18_ThetaY_20_25__1134->SetBinContent(311,0.8071429);
   S18_ThetaY_20_25__1134->SetBinContent(312,1);
   S18_ThetaY_20_25__1134->SetBinContent(313,0.75);
   S18_ThetaY_20_25__1134->SetBinContent(314,0.8785714);
   S18_ThetaY_20_25__1134->SetBinContent(315,0.9428571);
   S18_ThetaY_20_25__1134->SetBinContent(316,1.042857);
   S18_ThetaY_20_25__1134->SetBinContent(317,0.6642857);
   S18_ThetaY_20_25__1134->SetBinContent(318,0.1428571);
   S18_ThetaY_20_25__1134->SetBinError(309,0.03030458);
   S18_ThetaY_20_25__1134->SetBinError(310,0.0610286);
   S18_ThetaY_20_25__1134->SetBinError(311,0.07592961);
   S18_ThetaY_20_25__1134->SetBinError(312,0.08451543);
   S18_ThetaY_20_25__1134->SetBinError(313,0.07319251);
   S18_ThetaY_20_25__1134->SetBinError(314,0.07921812);
   S18_ThetaY_20_25__1134->SetBinError(315,0.08206518);
   S18_ThetaY_20_25__1134->SetBinError(316,0.08630747);
   S18_ThetaY_20_25__1134->SetBinError(317,0.06888322);
   S18_ThetaY_20_25__1134->SetBinError(318,0.03194383);
   S18_ThetaY_20_25__1134->SetMinimum(0);
   S18_ThetaY_20_25__1134->SetMaximum(1.311617);
   S18_ThetaY_20_25__1134->SetEntries(963);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1134->SetLineColor(ci);
   S18_ThetaY_20_25__1134->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1134->SetMarkerColor(ci);
   S18_ThetaY_20_25__1134->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__1134->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__1134->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1134->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1134->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1134->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__1134->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__1134->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1134->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1134->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1134->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1134->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1134->Draw("AE");
   
   TH1D *ThetaY_20_25__1135 = new TH1D("ThetaY_20_25__1135","",630,-1575,1575);
   ThetaY_20_25__1135->SetBinContent(308,0.0007228418);
   ThetaY_20_25__1135->SetBinContent(309,0.1612454);
   ThetaY_20_25__1135->SetBinContent(310,0.5884449);
   ThetaY_20_25__1135->SetBinContent(311,0.8437113);
   ThetaY_20_25__1135->SetBinContent(312,1);
   ThetaY_20_25__1135->SetBinContent(313,1.098306);
   ThetaY_20_25__1135->SetBinContent(314,1.154017);
   ThetaY_20_25__1135->SetBinContent(315,1.179575);
   ThetaY_20_25__1135->SetBinContent(316,1.192379);
   ThetaY_20_25__1135->SetBinContent(317,1.159438);
   ThetaY_20_25__1135->SetBinContent(318,1.108478);
   ThetaY_20_25__1135->SetBinContent(319,1.004131);
   ThetaY_20_25__1135->SetBinContent(320,0.8380834);
   ThetaY_20_25__1135->SetBinContent(321,0.5865861);
   ThetaY_20_25__1135->SetBinContent(322,0.1570116);
   ThetaY_20_25__1135->SetBinContent(323,0.0009809996);
   ThetaY_20_25__1135->SetBinError(308,0.0001931876);
   ThetaY_20_25__1135->SetBinError(309,0.002885368);
   ThetaY_20_25__1135->SetBinError(310,0.005512016);
   ThetaY_20_25__1135->SetBinError(311,0.006600161);
   ThetaY_20_25__1135->SetBinError(312,0.00718551);
   ThetaY_20_25__1135->SetBinError(313,0.007530423);
   ThetaY_20_25__1135->SetBinError(314,0.007719047);
   ThetaY_20_25__1135->SetBinError(315,0.007804055);
   ThetaY_20_25__1135->SetBinError(316,0.007846298);
   ThetaY_20_25__1135->SetBinError(317,0.007737157);
   ThetaY_20_25__1135->SetBinError(318,0.007565213);
   ThetaY_20_25__1135->SetBinError(319,0.007200335);
   ThetaY_20_25__1135->SetBinError(320,0.006578112);
   ThetaY_20_25__1135->SetBinError(321,0.005503304);
   ThetaY_20_25__1135->SetBinError(322,0.002847236);
   ThetaY_20_25__1135->SetBinError(323,0.0002250567);
   ThetaY_20_25__1135->SetEntries(233832);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1135->SetLineColor(ci);
   ThetaY_20_25__1135->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1135->SetMarkerColor(ci);
   ThetaY_20_25__1135->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1135->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1135->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1135->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1135->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1135->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1135->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1135->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1135->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1135->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1135->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1135->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1135->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1135->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1135->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1135->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1135->Draw("AEsame");
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
   
   Double_t _fx3379[16] = {
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
   37.5};
   Double_t _fy3379[16] = {
   0,
   0.7973652,
   0.8861129,
   0.9566577,
   1,
   0.6828695,
   0.7613159,
   0.7993197,
   0.8746019,
   0.5729376,
   0.1288769,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3379[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3379[16] = {
   0,
   0.186688,
   0.1038,
   0.09016895,
   0.08471683,
   0.06669746,
   0.06873901,
   0.06968261,
   0.07252627,
   0.05942526,
   0.02858758,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3379[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3379[16] = {
   19.44266,
   0.2365898,
   0.116745,
   0.09910254,
   0.09222165,
   0.07355679,
   0.07524781,
   0.07604261,
   0.0788086,
   0.06593633,
   0.03576216,
   0.01309668,
   0.01569164,
   0.02241993,
   0.08377813,
   14.07578};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3379,_fy3379,_felx3379,_fehx3379,_fely3379,_fehy3379);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3379 = new TH1F("Graph_Graph3379","",100,-100,100);
   Graph_Graph3379->SetMinimum(0);
   Graph_Graph3379->SetMaximum(1.5);
   Graph_Graph3379->SetDirectory(0);
   Graph_Graph3379->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3379->SetLineColor(ci);
   Graph_Graph3379->GetXaxis()->SetRange(1,100);
   Graph_Graph3379->GetXaxis()->CenterTitle(true);
   Graph_Graph3379->GetXaxis()->SetLabelFont(42);
   Graph_Graph3379->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3379->GetXaxis()->SetTitleFont(42);
   Graph_Graph3379->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3379->GetYaxis()->CenterTitle(true);
   Graph_Graph3379->GetYaxis()->SetLabelFont(42);
   Graph_Graph3379->GetYaxis()->SetTitleFont(42);
   Graph_Graph3379->GetZaxis()->SetLabelFont(42);
   Graph_Graph3379->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3379->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3379);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.311617,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1136 = new TH2D("ThetaY_vs_Y_20_25__1136","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8025,14);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8051,3123);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8077,11397);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8103,16341);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8129,19368);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8155,21272);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8181,22351);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8207,22846);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8233,23094);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8259,22456);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8285,21469);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8311,19448);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8337,16232);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8363,11361);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8389,3041);
   ThetaY_vs_Y_20_25__1136->SetBinContent(8415,19);
   ThetaY_vs_Y_20_25__1136->SetEntries(233832);
   ThetaY_vs_Y_20_25__1136->SetContour(20);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(1,1154.7);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(2,2309.4);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(3,3464.1);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(4,4618.8);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(5,5773.5);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(6,6928.2);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(7,8082.9);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(8,9237.6);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(9,10392.3);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(10,11547);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(11,12701.7);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(12,13856.4);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(13,15011.1);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(14,16165.8);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(15,17320.5);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(16,18475.2);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(17,19629.9);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(18,20784.6);
   ThetaY_vs_Y_20_25__1136->SetContourLevel(19,21939.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1136->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1136->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1136->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1136->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1136->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1136->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1136->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1136->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1136->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1136->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1136->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1136->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1136->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1136->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1136->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1136->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
