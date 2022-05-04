void S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06472044,125,1.229688);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__1314 = new TH1D("S18_ThetaY_35_40__1314","",630,-1575,1575);
   S18_ThetaY_35_40__1314->SetBinContent(310,0.06666667);
   S18_ThetaY_35_40__1314->SetBinContent(311,0.1666667);
   S18_ThetaY_35_40__1314->SetBinContent(312,0.5);
   S18_ThetaY_35_40__1314->SetBinContent(313,0.5666667);
   S18_ThetaY_35_40__1314->SetBinContent(314,0.7);
   S18_ThetaY_35_40__1314->SetBinContent(315,1);
   S18_ThetaY_35_40__1314->SetBinContent(316,0.1666667);
   S18_ThetaY_35_40__1314->SetBinError(310,0.04714045);
   S18_ThetaY_35_40__1314->SetBinError(311,0.0745356);
   S18_ThetaY_35_40__1314->SetBinError(312,0.1290994);
   S18_ThetaY_35_40__1314->SetBinError(313,0.1374369);
   S18_ThetaY_35_40__1314->SetBinError(314,0.1527525);
   S18_ThetaY_35_40__1314->SetBinError(315,0.1825742);
   S18_ThetaY_35_40__1314->SetBinError(316,0.0745356);
   S18_ThetaY_35_40__1314->SetMinimum(0);
   S18_ThetaY_35_40__1314->SetMaximum(1.100247);
   S18_ThetaY_35_40__1314->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1314->SetLineColor(ci);
   S18_ThetaY_35_40__1314->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1314->SetMarkerColor(ci);
   S18_ThetaY_35_40__1314->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__1314->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__1314->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1314->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1314->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1314->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__1314->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__1314->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1314->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1314->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1314->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1314->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1314->Draw("AE");
   
   TH1D *ThetaY_35_40__1315 = new TH1D("ThetaY_35_40__1315","",630,-1575,1575);
   ThetaY_35_40__1315->SetBinContent(309,0.0008998875);
   ThetaY_35_40__1315->SetBinContent(310,0.1509561);
   ThetaY_35_40__1315->SetBinContent(311,0.5419573);
   ThetaY_35_40__1315->SetBinContent(312,0.7709786);
   ThetaY_35_40__1315->SetBinContent(313,0.8985377);
   ThetaY_35_40__1315->SetBinContent(314,0.9793026);
   ThetaY_35_40__1315->SetBinContent(315,1);
   ThetaY_35_40__1315->SetBinContent(316,1.000225);
   ThetaY_35_40__1315->SetBinContent(317,0.9946007);
   ThetaY_35_40__1315->SetBinContent(318,0.9019123);
   ThetaY_35_40__1315->SetBinContent(319,0.7856018);
   ThetaY_35_40__1315->SetBinContent(320,0.527784);
   ThetaY_35_40__1315->SetBinContent(321,0.1532058);
   ThetaY_35_40__1315->SetBinError(309,0.0004499438);
   ThetaY_35_40__1315->SetBinError(310,0.005827597);
   ThetaY_35_40__1315->SetBinError(311,0.01104197);
   ThetaY_35_40__1315->SetBinError(312,0.01316999);
   ThetaY_35_40__1315->SetBinError(313,0.0142178);
   ThetaY_35_40__1315->SetBinError(314,0.01484303);
   ThetaY_35_40__1315->SetBinError(315,0.01499906);
   ThetaY_35_40__1315->SetBinError(316,0.01500075);
   ThetaY_35_40__1315->SetBinError(317,0.01495852);
   ThetaY_35_40__1315->SetBinError(318,0.01424447);
   ThetaY_35_40__1315->SetBinError(319,0.0132943);
   ThetaY_35_40__1315->SetBinError(320,0.01089663);
   ThetaY_35_40__1315->SetBinError(321,0.005870861);
   ThetaY_35_40__1315->SetEntries(38698);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1315->SetLineColor(ci);
   ThetaY_35_40__1315->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1315->SetMarkerColor(ci);
   ThetaY_35_40__1315->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1315->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1315->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1315->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1315->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1315->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1315->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1315->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1315->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1315->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1315->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1315->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1315->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1315->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1315->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1315->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1315->Draw("AEsame");
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
   
   Double_t _fx3439[13] = {
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
   27.5};
   Double_t _fy3439[13] = {
   0,
   0.4416294,
   0.3075273,
   0.6485264,
   0.6306543,
   0.7147944,
   1,
   0.1666292,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3439[13] = {
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
   Double_t _fely3439[13] = {
   0,
   0.2855182,
   0.1329473,
   0.1659034,
   0.1517425,
   0.1550857,
   0.1821431,
   0.07200713,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3439[13] = {
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
   Double_t _fehy3439[13] = {
   86.60025,
   0.5844927,
   0.2084025,
   0.2150155,
   0.1935803,
   0.1930791,
   0.2188297,
   0.11283,
   0.06171338,
   0.06805704,
   0.07813573,
   0.1163193,
   0.401097};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3439,_fy3439,_felx3439,_fehx3439,_fely3439,_fehy3439);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3439 = new TH1F("Graph_Graph3439","",100,-100,100);
   Graph_Graph3439->SetMinimum(0);
   Graph_Graph3439->SetMaximum(1.5);
   Graph_Graph3439->SetDirectory(0);
   Graph_Graph3439->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3439->SetLineColor(ci);
   Graph_Graph3439->GetXaxis()->SetRange(1,100);
   Graph_Graph3439->GetXaxis()->CenterTitle(true);
   Graph_Graph3439->GetXaxis()->SetLabelFont(42);
   Graph_Graph3439->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3439->GetXaxis()->SetTitleFont(42);
   Graph_Graph3439->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3439->GetYaxis()->CenterTitle(true);
   Graph_Graph3439->GetYaxis()->SetLabelFont(42);
   Graph_Graph3439->GetYaxis()->SetTitleFont(42);
   Graph_Graph3439->GetZaxis()->SetLabelFont(42);
   Graph_Graph3439->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3439->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3439);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.100247,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1316 = new TH2D("ThetaY_vs_Y_35_40__1316","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8054,4);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8080,671);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8106,2409);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8132,3427);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8158,3994);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8184,4353);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8210,4445);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8236,4446);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8262,4421);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8288,4009);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8314,3492);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8340,2346);
   ThetaY_vs_Y_35_40__1316->SetBinContent(8366,681);
   ThetaY_vs_Y_35_40__1316->SetEntries(38698);
   ThetaY_vs_Y_35_40__1316->SetContour(20);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(1,222.3);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(2,444.6);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(3,666.9);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(4,889.2);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(5,1111.5);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(6,1333.8);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(7,1556.1);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(8,1778.4);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(9,2000.7);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(10,2223);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(11,2445.3);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(12,2667.6);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(13,2889.9);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(14,3112.2);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(15,3334.5);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(16,3556.8);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(17,3779.1);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(18,4001.4);
   ThetaY_vs_Y_35_40__1316->SetContourLevel(19,4223.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1316->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1316->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1316->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1316->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1316->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1316->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1316->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1316->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1316->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1316->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1316->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1316->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1316->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1316->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1316->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1316->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_35_40","Reco vertices","lpf");
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
