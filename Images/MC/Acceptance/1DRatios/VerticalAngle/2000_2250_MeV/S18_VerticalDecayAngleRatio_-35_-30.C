void S18_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1115623,125,2.119684);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__1443 = new TH1D("S18_ThetaY_mI35_mI30__1443","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__1443->SetBinContent(315,0.9047619);
   S18_ThetaY_mI35_mI30__1443->SetBinContent(316,1.333333);
   S18_ThetaY_mI35_mI30__1443->SetBinContent(317,1.333333);
   S18_ThetaY_mI35_mI30__1443->SetBinContent(318,1.285714);
   S18_ThetaY_mI35_mI30__1443->SetBinContent(319,1);
   S18_ThetaY_mI35_mI30__1443->SetBinContent(320,0.3333333);
   S18_ThetaY_mI35_mI30__1443->SetBinError(315,0.2075666);
   S18_ThetaY_mI35_mI30__1443->SetBinError(316,0.2519763);
   S18_ThetaY_mI35_mI30__1443->SetBinError(317,0.2519763);
   S18_ThetaY_mI35_mI30__1443->SetBinError(318,0.2474358);
   S18_ThetaY_mI35_mI30__1443->SetBinError(319,0.2182179);
   S18_ThetaY_mI35_mI30__1443->SetBinError(320,0.1259882);
   S18_ThetaY_mI35_mI30__1443->SetMinimum(0);
   S18_ThetaY_mI35_mI30__1443->SetMaximum(1.89656);
   S18_ThetaY_mI35_mI30__1443->SetEntries(130);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1443->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__1443->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1443->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__1443->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__1443->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__1443->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1443->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1443->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1443->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__1443->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__1443->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1443->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1443->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1443->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1443->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1443->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1444 = new TH1D("ThetaY_mI35_mI30__1444","",630,-1575,1575);
   ThetaY_mI35_mI30__1444->SetBinContent(310,0.002743774);
   ThetaY_mI35_mI30__1444->SetBinContent(311,0.3355846);
   ThetaY_mI35_mI30__1444->SetBinContent(312,1.025749);
   ThetaY_mI35_mI30__1444->SetBinContent(313,1.390882);
   ThetaY_mI35_mI30__1444->SetBinContent(314,1.60764);
   ThetaY_mI35_mI30__1444->SetBinContent(315,1.724145);
   ThetaY_mI35_mI30__1444->SetBinContent(316,1.689109);
   ThetaY_mI35_mI30__1444->SetBinContent(317,1.597298);
   ThetaY_mI35_mI30__1444->SetBinContent(318,1.397214);
   ThetaY_mI35_mI30__1444->SetBinContent(319,1);
   ThetaY_mI35_mI30__1444->SetBinContent(320,0.3516252);
   ThetaY_mI35_mI30__1444->SetBinContent(321,0.002110595);
   ThetaY_mI35_mI30__1444->SetBinError(310,0.0007609859);
   ThetaY_mI35_mI30__1444->SetBinError(311,0.008415957);
   ThetaY_mI35_mI30__1444->SetBinError(312,0.01471374);
   ThetaY_mI35_mI30__1444->SetBinError(313,0.01713356);
   ThetaY_mI35_mI30__1444->SetBinError(314,0.01842031);
   ThetaY_mI35_mI30__1444->SetBinError(315,0.01907609);
   ThetaY_mI35_mI30__1444->SetBinError(316,0.01888128);
   ThetaY_mI35_mI30__1444->SetBinError(317,0.01836097);
   ThetaY_mI35_mI30__1444->SetBinError(318,0.01717252);
   ThetaY_mI35_mI30__1444->SetBinError(319,0.01452789);
   ThetaY_mI35_mI30__1444->SetBinError(320,0.008614745);
   ThetaY_mI35_mI30__1444->SetBinError(321,0.0006674288);
   ThetaY_mI35_mI30__1444->SetEntries(57444);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1444->SetLineColor(ci);
   ThetaY_mI35_mI30__1444->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1444->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1444->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1444->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1444->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1444->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1444->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1444->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1444->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1444->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1444->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1444->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1444->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1444->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1444->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1444->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1444->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1444->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1444->Draw("AEsame");
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
   
   Double_t _fx3482[12] = {
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
   Double_t _fy3482[12] = {
   0,
   0,
   0,
   0,
   0,
   0.5247597,
   0.7893707,
   0.8347428,
   0.9201985,
   1,
   0.9479792,
   0};
   Double_t _felx3482[12] = {
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
   Double_t _fely3482[12] = {
   0,
   0,
   0,
   0,
   0,
   0.1194518,
   0.1485312,
   0.1570839,
   0.1763348,
   0.216925,
   0.3502394,
   0};
   Double_t _fehx3482[12] = {
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
   Double_t _fehy3482[12] = {
   34.32463,
   0.26139,
   0.08548318,
   0.06303909,
   0.0545385,
   0.1503388,
   0.1795276,
   0.18987,
   0.2138937,
   0.2700514,
   0.5122428,
   45.60633};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3482,_fy3482,_felx3482,_fehx3482,_fely3482,_fehy3482);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3482 = new TH1F("Graph_Graph3482","",100,-100,100);
   Graph_Graph3482->SetMinimum(0);
   Graph_Graph3482->SetMaximum(1.5);
   Graph_Graph3482->SetDirectory(0);
   Graph_Graph3482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3482->SetLineColor(ci);
   Graph_Graph3482->GetXaxis()->SetRange(1,100);
   Graph_Graph3482->GetXaxis()->CenterTitle(true);
   Graph_Graph3482->GetXaxis()->SetLabelFont(42);
   Graph_Graph3482->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3482->GetXaxis()->SetTitleFont(42);
   Graph_Graph3482->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3482->GetYaxis()->CenterTitle(true);
   Graph_Graph3482->GetYaxis()->SetLabelFont(42);
   Graph_Graph3482->GetYaxis()->SetTitleFont(42);
   Graph_Graph3482->GetZaxis()->SetLabelFont(42);
   Graph_Graph3482->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3482->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3482);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.89656,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1445 = new TH2D("ThetaY_vs_Y_mI35_mI30__1445","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8066,13);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8092,1590);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8118,4860);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8144,6590);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8170,7617);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8196,8169);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8222,8003);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8248,7568);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8274,6620);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8300,4738);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8326,1666);
   ThetaY_vs_Y_mI35_mI30__1445->SetBinContent(8352,10);
   ThetaY_vs_Y_mI35_mI30__1445->SetEntries(57444);
   ThetaY_vs_Y_mI35_mI30__1445->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(1,408.45);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(2,816.9);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(3,1225.35);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(4,1633.8);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(5,2042.25);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(6,2450.7);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(7,2859.15);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(8,3267.6);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(9,3676.05);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(10,4084.5);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(11,4492.95);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(12,4901.4);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(13,5309.85);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(14,5718.3);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(15,6126.75);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(16,6535.2);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(17,6943.65);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(18,7352.1);
   ThetaY_vs_Y_mI35_mI30__1445->SetContourLevel(19,7760.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1445->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1445->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1445->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1445->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1445->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1445->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1445->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1445->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1445->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1445->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1445->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1445->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1445->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1445->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1445->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1445->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
