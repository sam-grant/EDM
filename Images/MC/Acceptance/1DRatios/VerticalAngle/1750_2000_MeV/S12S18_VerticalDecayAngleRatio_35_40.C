void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_35_40__1371 = new TH1D("S12S18_ThetaY_35_40__1371","",630,-1575,1575);
   S12S18_ThetaY_35_40__1371->SetBinContent(310,0.0862069);
   S12S18_ThetaY_35_40__1371->SetBinContent(311,0.2241379);
   S12S18_ThetaY_35_40__1371->SetBinContent(312,0.5);
   S12S18_ThetaY_35_40__1371->SetBinContent(313,0.8275862);
   S12S18_ThetaY_35_40__1371->SetBinContent(314,0.6724138);
   S12S18_ThetaY_35_40__1371->SetBinContent(315,1);
   S12S18_ThetaY_35_40__1371->SetBinContent(316,0.1724138);
   S12S18_ThetaY_35_40__1371->SetBinError(310,0.0385529);
   S12S18_ThetaY_35_40__1371->SetBinError(311,0.06216468);
   S12S18_ThetaY_35_40__1371->SetBinError(312,0.09284767);
   S12S18_ThetaY_35_40__1371->SetBinError(313,0.1194518);
   S12S18_ThetaY_35_40__1371->SetBinError(314,0.1076724);
   S12S18_ThetaY_35_40__1371->SetBinError(315,0.1313064);
   S12S18_ThetaY_35_40__1371->SetBinError(316,0.05452203);
   S12S18_ThetaY_35_40__1371->SetMinimum(0);
   S12S18_ThetaY_35_40__1371->SetMaximum(1.100247);
   S12S18_ThetaY_35_40__1371->SetEntries(202);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1371->SetLineColor(ci);
   S12S18_ThetaY_35_40__1371->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1371->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__1371->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__1371->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__1371->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1371->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1371->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1371->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__1371->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__1371->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1371->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1371->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1371->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1371->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1371->Draw("AE");
   
   TH1D *ThetaY_35_40__1372 = new TH1D("ThetaY_35_40__1372","",630,-1575,1575);
   ThetaY_35_40__1372->SetBinContent(309,0.0008998875);
   ThetaY_35_40__1372->SetBinContent(310,0.1509561);
   ThetaY_35_40__1372->SetBinContent(311,0.5419573);
   ThetaY_35_40__1372->SetBinContent(312,0.7709786);
   ThetaY_35_40__1372->SetBinContent(313,0.8985377);
   ThetaY_35_40__1372->SetBinContent(314,0.9793026);
   ThetaY_35_40__1372->SetBinContent(315,1);
   ThetaY_35_40__1372->SetBinContent(316,1.000225);
   ThetaY_35_40__1372->SetBinContent(317,0.9946007);
   ThetaY_35_40__1372->SetBinContent(318,0.9019123);
   ThetaY_35_40__1372->SetBinContent(319,0.7856018);
   ThetaY_35_40__1372->SetBinContent(320,0.527784);
   ThetaY_35_40__1372->SetBinContent(321,0.1532058);
   ThetaY_35_40__1372->SetBinError(309,0.0004499438);
   ThetaY_35_40__1372->SetBinError(310,0.005827597);
   ThetaY_35_40__1372->SetBinError(311,0.01104197);
   ThetaY_35_40__1372->SetBinError(312,0.01316999);
   ThetaY_35_40__1372->SetBinError(313,0.0142178);
   ThetaY_35_40__1372->SetBinError(314,0.01484303);
   ThetaY_35_40__1372->SetBinError(315,0.01499906);
   ThetaY_35_40__1372->SetBinError(316,0.01500075);
   ThetaY_35_40__1372->SetBinError(317,0.01495852);
   ThetaY_35_40__1372->SetBinError(318,0.01424447);
   ThetaY_35_40__1372->SetBinError(319,0.0132943);
   ThetaY_35_40__1372->SetBinError(320,0.01089663);
   ThetaY_35_40__1372->SetBinError(321,0.005870861);
   ThetaY_35_40__1372->SetEntries(38698);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1372->SetLineColor(ci);
   ThetaY_35_40__1372->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1372->SetMarkerColor(ci);
   ThetaY_35_40__1372->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1372->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1372->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1372->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1372->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1372->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1372->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1372->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1372->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1372->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1372->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1372->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1372->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1372->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1372->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1372->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1372->Draw("AEsame");
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
   
   Double_t _fx3458[13] = {
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
   Double_t _fy3458[13] = {
   0,
   0.5710725,
   0.4135712,
   0.6485264,
   0.9210367,
   0.6866252,
   1,
   0.172375,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3458[13] = {
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
   Double_t _fely3458[13] = {
   0,
   0.2474295,
   0.113496,
   0.1202189,
   0.1332531,
   0.1099518,
   0.1317639,
   0.05364097,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3458[13] = {
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
   Double_t _fehy3458[13] = {
   44.79323,
   0.388741,
   0.1499934,
   0.1449193,
   0.1541222,
   0.1291758,
   0.1504197,
   0.07366955,
   0.03192071,
   0.03520192,
   0.04041503,
   0.06016516,
   0.207464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3458,_fy3458,_felx3458,_fehx3458,_fely3458,_fehy3458);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3458 = new TH1F("Graph_Graph3458","",100,-100,100);
   Graph_Graph3458->SetMinimum(0);
   Graph_Graph3458->SetMaximum(1.5);
   Graph_Graph3458->SetDirectory(0);
   Graph_Graph3458->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3458->SetLineColor(ci);
   Graph_Graph3458->GetXaxis()->SetRange(1,100);
   Graph_Graph3458->GetXaxis()->CenterTitle(true);
   Graph_Graph3458->GetXaxis()->SetLabelFont(42);
   Graph_Graph3458->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3458->GetXaxis()->SetTitleFont(42);
   Graph_Graph3458->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3458->GetYaxis()->CenterTitle(true);
   Graph_Graph3458->GetYaxis()->SetLabelFont(42);
   Graph_Graph3458->GetYaxis()->SetTitleFont(42);
   Graph_Graph3458->GetZaxis()->SetLabelFont(42);
   Graph_Graph3458->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3458->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3458);
   
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
   
   TH2D *ThetaY_vs_Y_35_40__1373 = new TH2D("ThetaY_vs_Y_35_40__1373","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8054,4);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8080,671);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8106,2409);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8132,3427);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8158,3994);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8184,4353);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8210,4445);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8236,4446);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8262,4421);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8288,4009);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8314,3492);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8340,2346);
   ThetaY_vs_Y_35_40__1373->SetBinContent(8366,681);
   ThetaY_vs_Y_35_40__1373->SetEntries(38698);
   ThetaY_vs_Y_35_40__1373->SetContour(20);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(1,222.3);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(2,444.6);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(3,666.9);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(4,889.2);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(5,1111.5);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(6,1333.8);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(7,1556.1);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(8,1778.4);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(9,2000.7);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(10,2223);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(11,2445.3);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(12,2667.6);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(13,2889.9);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(14,3112.2);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(15,3334.5);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(16,3556.8);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(17,3779.1);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(18,4001.4);
   ThetaY_vs_Y_35_40__1373->SetContourLevel(19,4223.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1373->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1373->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1373->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1373->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1373->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1373->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1373->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1373->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1373->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1373->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1373->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1373->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1373->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1373->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1373->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1373->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
