void S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06545687,125,1.243681);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__1632 = new TH1D("S18_ThetaY_mI5_0__1632","",630,-1575,1575);
   S18_ThetaY_mI5_0__1632->SetBinContent(312,0.04142012);
   S18_ThetaY_mI5_0__1632->SetBinContent(313,0.3431953);
   S18_ThetaY_mI5_0__1632->SetBinContent(314,0.852071);
   S18_ThetaY_mI5_0__1632->SetBinContent(315,1);
   S18_ThetaY_mI5_0__1632->SetBinContent(316,0.9289941);
   S18_ThetaY_mI5_0__1632->SetBinContent(317,0.8284024);
   S18_ThetaY_mI5_0__1632->SetBinContent(318,0.4556213);
   S18_ThetaY_mI5_0__1632->SetBinContent(319,0.0591716);
   S18_ThetaY_mI5_0__1632->SetBinError(312,0.01565533);
   S18_ThetaY_mI5_0__1632->SetBinError(313,0.04506375);
   S18_ThetaY_mI5_0__1632->SetBinError(314,0.07100592);
   S18_ThetaY_mI5_0__1632->SetBinError(315,0.07692308);
   S18_ThetaY_mI5_0__1632->SetBinError(316,0.0741418);
   S18_ThetaY_mI5_0__1632->SetBinError(317,0.07001278);
   S18_ThetaY_mI5_0__1632->SetBinError(318,0.05192287);
   S18_ThetaY_mI5_0__1632->SetBinError(319,0.0187117);
   S18_ThetaY_mI5_0__1632->SetMinimum(0);
   S18_ThetaY_mI5_0__1632->SetMaximum(1.112767);
   S18_ThetaY_mI5_0__1632->SetEntries(762);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1632->SetLineColor(ci);
   S18_ThetaY_mI5_0__1632->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1632->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__1632->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__1632->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__1632->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1632->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1632->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1632->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__1632->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__1632->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1632->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1632->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1632->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1632->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1632->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1633 = new TH1D("ThetaY_mI5_0__1633","",630,-1575,1575);
   ThetaY_mI5_0__1633->SetBinContent(311,0.006153606);
   ThetaY_mI5_0__1633->SetBinContent(312,0.2956263);
   ThetaY_mI5_0__1633->SetBinContent(313,0.721374);
   ThetaY_mI5_0__1633->SetBinContent(314,0.910909);
   ThetaY_mI5_0__1633->SetBinContent(315,1);
   ThetaY_mI5_0__1633->SetBinContent(316,1.011606);
   ThetaY_mI5_0__1633->SetBinContent(317,0.9059628);
   ThetaY_mI5_0__1633->SetBinContent(318,0.7080347);
   ThetaY_mI5_0__1633->SetBinContent(319,0.2992678);
   ThetaY_mI5_0__1633->SetBinContent(320,0.00673781);
   ThetaY_mI5_0__1633->SetBinError(311,0.0003461674);
   ThetaY_mI5_0__1633->SetBinError(312,0.002399346);
   ThetaY_mI5_0__1633->SetBinError(313,0.003748017);
   ThetaY_mI5_0__1633->SetBinError(314,0.004211713);
   ThetaY_mI5_0__1633->SetBinError(315,0.004412872);
   ThetaY_mI5_0__1633->SetBinError(316,0.004438406);
   ThetaY_mI5_0__1633->SetBinError(317,0.004200263);
   ThetaY_mI5_0__1633->SetBinError(318,0.003713202);
   ThetaY_mI5_0__1633->SetBinError(319,0.002414078);
   ThetaY_mI5_0__1633->SetBinError(320,0.0003622269);
   ThetaY_mI5_0__1633->SetEntries(301214);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1633->SetLineColor(ci);
   ThetaY_mI5_0__1633->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1633->SetMarkerColor(ci);
   ThetaY_mI5_0__1633->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1633->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1633->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1633->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1633->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1633->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1633->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1633->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1633->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1633->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1633->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1633->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1633->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1633->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1633->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1633->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1633->Draw("AEsame");
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
   
   Double_t _fx3545[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3545[10] = {
   0,
   0.1401097,
   0.4757522,
   0.9354074,
   1,
   0.9183357,
   0.914389,
   0.6435013,
   0.1977212,
   0};
   Double_t _felx3545[10] = {
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
   Double_t _fely3545[10] = {
   0,
   0.05168031,
   0.06233662,
   0.07797898,
   0.07697256,
   0.07332294,
   0.07730285,
   0.07325067,
   0.0614837,
   0};
   Double_t _fehx3545[10] = {
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
   Double_t _fehy3545[10] = {
   1.775449,
   0.07549149,
   0.07109504,
   0.08476905,
   0.08313989,
   0.07942628,
   0.08413339,
   0.0821065,
   0.08440582,
   1.621098};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3545,_fy3545,_felx3545,_fehx3545,_fely3545,_fehy3545);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3545 = new TH1F("Graph_Graph3545","",100,-100,100);
   Graph_Graph3545->SetMinimum(0);
   Graph_Graph3545->SetMaximum(1.5);
   Graph_Graph3545->SetDirectory(0);
   Graph_Graph3545->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3545->SetLineColor(ci);
   Graph_Graph3545->GetXaxis()->SetRange(1,100);
   Graph_Graph3545->GetXaxis()->CenterTitle(true);
   Graph_Graph3545->GetXaxis()->SetLabelFont(42);
   Graph_Graph3545->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3545->GetXaxis()->SetTitleFont(42);
   Graph_Graph3545->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3545->GetYaxis()->CenterTitle(true);
   Graph_Graph3545->GetYaxis()->SetLabelFont(42);
   Graph_Graph3545->GetYaxis()->SetTitleFont(42);
   Graph_Graph3545->GetZaxis()->SetLabelFont(42);
   Graph_Graph3545->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3545->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3545);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.112767,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1634 = new TH2D("ThetaY_vs_Y_mI5_0__1634","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8098,316);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8124,15181);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8150,37044);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8176,46777);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8202,51352);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8228,51948);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8254,46523);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8280,36359);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8306,15368);
   ThetaY_vs_Y_mI5_0__1634->SetBinContent(8332,346);
   ThetaY_vs_Y_mI5_0__1634->SetEntries(301214);
   ThetaY_vs_Y_mI5_0__1634->SetContour(20);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(1,2597.4);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(2,5194.8);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(3,7792.2);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(4,10389.6);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(5,12987);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(6,15584.4);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(7,18181.8);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(8,20779.2);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(9,23376.6);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(10,25974);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(11,28571.4);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(12,31168.8);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(13,33766.2);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(14,36363.6);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(15,38961);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(16,41558.4);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(17,44155.8);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(18,46753.2);
   ThetaY_vs_Y_mI5_0__1634->SetContourLevel(19,49350.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1634->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1634->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1634->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1634->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1634->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1634->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1634->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1634->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1634->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1634->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1634->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1634->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1634->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1634->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1634->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1634->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-5_0","Reco vertices","lpf");
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
