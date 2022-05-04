void S12S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_20_25__1191 = new TH1D("S12S18_ThetaY_20_25__1191","",630,-1575,1575);
   S12S18_ThetaY_20_25__1191->SetBinContent(309,0.1156716);
   S12S18_ThetaY_20_25__1191->SetBinContent(310,0.5671642);
   S12S18_ThetaY_20_25__1191->SetBinContent(311,0.7947761);
   S12S18_ThetaY_20_25__1191->SetBinContent(312,1);
   S12S18_ThetaY_20_25__1191->SetBinContent(313,0.9291045);
   S12S18_ThetaY_20_25__1191->SetBinContent(314,0.9253731);
   S12S18_ThetaY_20_25__1191->SetBinContent(315,0.9664179);
   S12S18_ThetaY_20_25__1191->SetBinContent(316,1.041045);
   S12S18_ThetaY_20_25__1191->SetBinContent(317,0.8022388);
   S12S18_ThetaY_20_25__1191->SetBinContent(318,0.1231343);
   S12S18_ThetaY_20_25__1191->SetBinError(309,0.02077524);
   S12S18_ThetaY_20_25__1191->SetBinError(310,0.04600309);
   S12S18_ThetaY_20_25__1191->SetBinError(311,0.05445716);
   S12S18_ThetaY_20_25__1191->SetBinError(312,0.06108472);
   S12S18_ThetaY_20_25__1191->SetBinError(313,0.0588796);
   S12S18_ThetaY_20_25__1191->SetBinError(314,0.05876125);
   S12S18_ThetaY_20_25__1191->SetBinError(315,0.06005029);
   S12S18_ThetaY_20_25__1191->SetBinError(316,0.06232572);
   S12S18_ThetaY_20_25__1191->SetBinError(317,0.05471223);
   S12S18_ThetaY_20_25__1191->SetBinError(318,0.02143494);
   S12S18_ThetaY_20_25__1191->SetMinimum(0);
   S12S18_ThetaY_20_25__1191->SetMaximum(1.311617);
   S12S18_ThetaY_20_25__1191->SetEntries(1947);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1191->SetLineColor(ci);
   S12S18_ThetaY_20_25__1191->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1191->SetMarkerColor(ci);
   S12S18_ThetaY_20_25__1191->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_20_25__1191->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_20_25__1191->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1191->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1191->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1191->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_20_25__1191->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_20_25__1191->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1191->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1191->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1191->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1191->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1191->Draw("AE");
   
   TH1D *ThetaY_20_25__1192 = new TH1D("ThetaY_20_25__1192","",630,-1575,1575);
   ThetaY_20_25__1192->SetBinContent(308,0.0007228418);
   ThetaY_20_25__1192->SetBinContent(309,0.1612454);
   ThetaY_20_25__1192->SetBinContent(310,0.5884449);
   ThetaY_20_25__1192->SetBinContent(311,0.8437113);
   ThetaY_20_25__1192->SetBinContent(312,1);
   ThetaY_20_25__1192->SetBinContent(313,1.098306);
   ThetaY_20_25__1192->SetBinContent(314,1.154017);
   ThetaY_20_25__1192->SetBinContent(315,1.179575);
   ThetaY_20_25__1192->SetBinContent(316,1.192379);
   ThetaY_20_25__1192->SetBinContent(317,1.159438);
   ThetaY_20_25__1192->SetBinContent(318,1.108478);
   ThetaY_20_25__1192->SetBinContent(319,1.004131);
   ThetaY_20_25__1192->SetBinContent(320,0.8380834);
   ThetaY_20_25__1192->SetBinContent(321,0.5865861);
   ThetaY_20_25__1192->SetBinContent(322,0.1570116);
   ThetaY_20_25__1192->SetBinContent(323,0.0009809996);
   ThetaY_20_25__1192->SetBinError(308,0.0001931876);
   ThetaY_20_25__1192->SetBinError(309,0.002885368);
   ThetaY_20_25__1192->SetBinError(310,0.005512016);
   ThetaY_20_25__1192->SetBinError(311,0.006600161);
   ThetaY_20_25__1192->SetBinError(312,0.00718551);
   ThetaY_20_25__1192->SetBinError(313,0.007530423);
   ThetaY_20_25__1192->SetBinError(314,0.007719047);
   ThetaY_20_25__1192->SetBinError(315,0.007804055);
   ThetaY_20_25__1192->SetBinError(316,0.007846298);
   ThetaY_20_25__1192->SetBinError(317,0.007737157);
   ThetaY_20_25__1192->SetBinError(318,0.007565213);
   ThetaY_20_25__1192->SetBinError(319,0.007200335);
   ThetaY_20_25__1192->SetBinError(320,0.006578112);
   ThetaY_20_25__1192->SetBinError(321,0.005503304);
   ThetaY_20_25__1192->SetBinError(322,0.002847236);
   ThetaY_20_25__1192->SetBinError(323,0.0002250567);
   ThetaY_20_25__1192->SetEntries(233832);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1192->SetLineColor(ci);
   ThetaY_20_25__1192->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1192->SetMarkerColor(ci);
   ThetaY_20_25__1192->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1192->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1192->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1192->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1192->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1192->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1192->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1192->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1192->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1192->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1192->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1192->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1192->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1192->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1192->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1192->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1192->Draw("AEsame");
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
   
   Double_t _fx3398[16] = {
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
   Double_t _fy3398[16] = {
   0,
   0.7173642,
   0.9638357,
   0.9420001,
   1,
   0.8459428,
   0.8018714,
   0.8192936,
   0.873082,
   0.6919203,
   0.1110842,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3398[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3398[16] = {
   0,
   0.1287586,
   0.07860701,
   0.06491114,
   0.06146597,
   0.05388486,
   0.05116496,
   0.05116204,
   0.05255222,
   0.04737603,
   0.01925313,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3398[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3398[16] = {
   10.15661,
   0.1542904,
   0.0853027,
   0.06955022,
   0.06536877,
   0.05743434,
   0.05454111,
   0.05446364,
   0.05581724,
   0.05073878,
   0.02291993,
   0.00684155,
   0.008197123,
   0.0117119,
   0.0437647,
   7.353021};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3398,_fy3398,_felx3398,_fehx3398,_fely3398,_fehy3398);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3398 = new TH1F("Graph_Graph3398","",100,-100,100);
   Graph_Graph3398->SetMinimum(0);
   Graph_Graph3398->SetMaximum(1.5);
   Graph_Graph3398->SetDirectory(0);
   Graph_Graph3398->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3398->SetLineColor(ci);
   Graph_Graph3398->GetXaxis()->SetRange(1,100);
   Graph_Graph3398->GetXaxis()->CenterTitle(true);
   Graph_Graph3398->GetXaxis()->SetLabelFont(42);
   Graph_Graph3398->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3398->GetXaxis()->SetTitleFont(42);
   Graph_Graph3398->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3398->GetYaxis()->CenterTitle(true);
   Graph_Graph3398->GetYaxis()->SetLabelFont(42);
   Graph_Graph3398->GetYaxis()->SetTitleFont(42);
   Graph_Graph3398->GetZaxis()->SetLabelFont(42);
   Graph_Graph3398->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3398->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3398);
   
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
   
   TH2D *ThetaY_vs_Y_20_25__1193 = new TH2D("ThetaY_vs_Y_20_25__1193","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8025,14);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8051,3123);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8077,11397);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8103,16341);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8129,19368);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8155,21272);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8181,22351);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8207,22846);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8233,23094);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8259,22456);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8285,21469);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8311,19448);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8337,16232);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8363,11361);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8389,3041);
   ThetaY_vs_Y_20_25__1193->SetBinContent(8415,19);
   ThetaY_vs_Y_20_25__1193->SetEntries(233832);
   ThetaY_vs_Y_20_25__1193->SetContour(20);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(1,1154.7);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(2,2309.4);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(3,3464.1);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(4,4618.8);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(5,5773.5);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(6,6928.2);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(7,8082.9);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(8,9237.6);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(9,10392.3);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(10,11547);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(11,12701.7);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(12,13856.4);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(13,15011.1);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(14,16165.8);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(15,17320.5);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(16,18475.2);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(17,19629.9);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(18,20784.6);
   ThetaY_vs_Y_20_25__1193->SetContourLevel(19,21939.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1193->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1193->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1193->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1193->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1193->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1193->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1193->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1193->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1193->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1193->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1193->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1193->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1193->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1193->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1193->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1193->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_20_25","Reco vertices","lpf");
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
