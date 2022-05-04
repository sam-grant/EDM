void S12S18_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0698444,125,1.327043);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__1500 = new TH1D("S12S18_ThetaY_mI35_mI30__1500","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(314,0.07575758);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(315,0.5606061);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(316,0.8030303);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(317,1);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(318,0.8030303);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(319,0.6212121);
   S12S18_ThetaY_mI35_mI30__1500->SetBinContent(320,0.1818182);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(314,0.03387982);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(315,0.09216307);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(316,0.1103047);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(317,0.1230915);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(318,0.1103047);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(319,0.09701703);
   S12S18_ThetaY_mI35_mI30__1500->SetBinError(320,0.05248639);
   S12S18_ThetaY_mI35_mI30__1500->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__1500->SetMaximum(1.187355);
   S12S18_ThetaY_mI35_mI30__1500->SetEntries(267);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1500->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__1500->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1500->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__1500->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__1500->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__1500->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1500->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1500->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1500->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__1500->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__1500->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1500->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1500->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1500->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1500->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1500->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1501 = new TH1D("ThetaY_mI35_mI30__1501","",630,-1575,1575);
   ThetaY_mI35_mI30__1501->SetBinContent(310,0.001717759);
   ThetaY_mI35_mI30__1501->SetBinContent(311,0.2100951);
   ThetaY_mI35_mI30__1501->SetBinContent(312,0.6421776);
   ThetaY_mI35_mI30__1501->SetBinContent(313,0.8707717);
   ThetaY_mI35_mI30__1501->SetBinContent(314,1.006475);
   ThetaY_mI35_mI30__1501->SetBinContent(315,1.079413);
   ThetaY_mI35_mI30__1501->SetBinContent(316,1.057479);
   ThetaY_mI35_mI30__1501->SetBinContent(317,1);
   ThetaY_mI35_mI30__1501->SetBinContent(318,0.8747357);
   ThetaY_mI35_mI30__1501->SetBinContent(319,0.6260571);
   ThetaY_mI35_mI30__1501->SetBinContent(320,0.2201374);
   ThetaY_mI35_mI30__1501->SetBinContent(321,0.001321353);
   ThetaY_mI35_mI30__1501->SetBinError(310,0.0004764206);
   ThetaY_mI35_mI30__1501->SetBinError(311,0.005268869);
   ThetaY_mI35_mI30__1501->SetBinError(312,0.009211641);
   ThetaY_mI35_mI30__1501->SetBinError(313,0.01072659);
   ThetaY_mI35_mI30__1501->SetBinError(314,0.01153217);
   ThetaY_mI35_mI30__1501->SetBinError(315,0.01194272);
   ThetaY_mI35_mI30__1501->SetBinError(316,0.01182076);
   ThetaY_mI35_mI30__1501->SetBinError(317,0.01149501);
   ThetaY_mI35_mI30__1501->SetBinError(318,0.01075098);
   ThetaY_mI35_mI30__1501->SetBinError(319,0.009095287);
   ThetaY_mI35_mI30__1501->SetBinError(320,0.005393322);
   ThetaY_mI35_mI30__1501->SetBinError(321,0.0004178485);
   ThetaY_mI35_mI30__1501->SetEntries(57444);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1501->SetLineColor(ci);
   ThetaY_mI35_mI30__1501->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1501->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1501->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1501->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1501->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1501->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1501->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1501->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1501->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1501->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1501->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1501->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1501->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1501->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1501->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1501->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1501->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1501->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1501->Draw("AEsame");
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
   
   Double_t _fx3501[12] = {
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
   27.5};
   Double_t _fy3501[12] = {
   0,
   0,
   0,
   0,
   0.07527023,
   0.5193618,
   0.7593819,
   1,
   0.9180262,
   0.9922612,
   0.8259304,
   0};
   Double_t _felx3501[12] = {
   2.5,
   2.5,
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
   Double_t _fely3501[12] = {
   0,
   0,
   0,
   0,
   0.03252096,
   0.0851822,
   0.1043164,
   0.1233052,
   0.1261945,
   0.1549812,
   0.2358455,
   0};
   Double_t _fehx3501[12] = {
   2.5,
   2.5,
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
   Double_t _fehy3501[12] = {
   17.44485,
   0.1328466,
   0.04344523,
   0.03203844,
   0.05094792,
   0.1004589,
   0.1197499,
   0.1395536,
   0.1448823,
   0.1813479,
   0.3153999,
   23.17856};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3501,_fy3501,_felx3501,_fehx3501,_fely3501,_fehy3501);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3501 = new TH1F("Graph_Graph3501","",100,-100,100);
   Graph_Graph3501->SetMinimum(0);
   Graph_Graph3501->SetMaximum(1.5);
   Graph_Graph3501->SetDirectory(0);
   Graph_Graph3501->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3501->SetLineColor(ci);
   Graph_Graph3501->GetXaxis()->SetRange(1,100);
   Graph_Graph3501->GetXaxis()->CenterTitle(true);
   Graph_Graph3501->GetXaxis()->SetLabelFont(42);
   Graph_Graph3501->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3501->GetXaxis()->SetTitleFont(42);
   Graph_Graph3501->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3501->GetYaxis()->CenterTitle(true);
   Graph_Graph3501->GetYaxis()->SetLabelFont(42);
   Graph_Graph3501->GetYaxis()->SetTitleFont(42);
   Graph_Graph3501->GetZaxis()->SetLabelFont(42);
   Graph_Graph3501->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3501->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3501);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.187355,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1502 = new TH2D("ThetaY_vs_Y_mI35_mI30__1502","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8066,13);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8092,1590);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8118,4860);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8144,6590);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8170,7617);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8196,8169);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8222,8003);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8248,7568);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8274,6620);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8300,4738);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8326,1666);
   ThetaY_vs_Y_mI35_mI30__1502->SetBinContent(8352,10);
   ThetaY_vs_Y_mI35_mI30__1502->SetEntries(57444);
   ThetaY_vs_Y_mI35_mI30__1502->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(1,408.45);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(2,816.9);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(3,1225.35);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(4,1633.8);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(5,2042.25);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(6,2450.7);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(7,2859.15);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(8,3267.6);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(9,3676.05);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(10,4084.5);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(11,4492.95);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(12,4901.4);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(13,5309.85);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(14,5718.3);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(15,6126.75);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(16,6535.2);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(17,6943.65);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(18,7352.1);
   ThetaY_vs_Y_mI35_mI30__1502->SetContourLevel(19,7760.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1502->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1502->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1502->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1502->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1502->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1502->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1502->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1502->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1502->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1502->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1502->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1502->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1502->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1502->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1502->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1502->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
