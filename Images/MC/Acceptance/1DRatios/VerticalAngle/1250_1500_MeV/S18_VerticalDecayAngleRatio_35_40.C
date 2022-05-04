void S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_35_40__972 = new TH1D("S18_ThetaY_35_40__972","",630,-1575,1575);
   S18_ThetaY_35_40__972->SetBinContent(308,0.02857143);
   S18_ThetaY_35_40__972->SetBinContent(309,0.3428571);
   S18_ThetaY_35_40__972->SetBinContent(310,0.5142857);
   S18_ThetaY_35_40__972->SetBinContent(311,0.6285714);
   S18_ThetaY_35_40__972->SetBinContent(312,0.5428571);
   S18_ThetaY_35_40__972->SetBinContent(313,0.8571429);
   S18_ThetaY_35_40__972->SetBinContent(314,1);
   S18_ThetaY_35_40__972->SetBinContent(315,0.7428571);
   S18_ThetaY_35_40__972->SetBinContent(316,0.1714286);
   S18_ThetaY_35_40__972->SetBinError(308,0.02857143);
   S18_ThetaY_35_40__972->SetBinError(309,0.09897433);
   S18_ThetaY_35_40__972->SetBinError(310,0.1212183);
   S18_ThetaY_35_40__972->SetBinError(311,0.1340119);
   S18_ThetaY_35_40__972->SetBinError(312,0.12454);
   S18_ThetaY_35_40__972->SetBinError(313,0.1564922);
   S18_ThetaY_35_40__972->SetBinError(314,0.1690309);
   S18_ThetaY_35_40__972->SetBinError(315,0.1456863);
   S18_ThetaY_35_40__972->SetBinError(316,0.06998542);
   S18_ThetaY_35_40__972->SetMinimum(0);
   S18_ThetaY_35_40__972->SetMaximum(1.1);
   S18_ThetaY_35_40__972->SetEntries(169);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__972->SetLineColor(ci);
   S18_ThetaY_35_40__972->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__972->SetMarkerColor(ci);
   S18_ThetaY_35_40__972->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__972->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__972->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__972->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__972->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__972->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__972->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__972->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__972->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__972->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__972->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__972->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__972->Draw("AE");
   
   TH1D *ThetaY_35_40__973 = new TH1D("ThetaY_35_40__973","",630,-1575,1575);
   ThetaY_35_40__973->SetBinContent(307,0.007310589);
   ThetaY_35_40__973->SetBinContent(308,0.1677005);
   ThetaY_35_40__973->SetBinContent(309,0.4856004);
   ThetaY_35_40__973->SetBinContent(310,0.6871954);
   ThetaY_35_40__973->SetBinContent(311,0.8039433);
   ThetaY_35_40__973->SetBinContent(312,0.9007532);
   ThetaY_35_40__973->SetBinContent(313,0.9641117);
   ThetaY_35_40__973->SetBinContent(314,1);
   ThetaY_35_40__973->SetBinContent(315,0.986265);
   ThetaY_35_40__973->SetBinContent(316,0.9957909);
   ThetaY_35_40__973->SetBinContent(317,0.9725299);
   ThetaY_35_40__973->SetBinContent(318,0.9587949);
   ThetaY_35_40__973->SetBinContent(319,0.9111653);
   ThetaY_35_40__973->SetBinContent(320,0.8493576);
   ThetaY_35_40__973->SetBinContent(321,0.6801063);
   ThetaY_35_40__973->SetBinContent(322,0.4971201);
   ThetaY_35_40__973->SetBinContent(323,0.184537);
   ThetaY_35_40__973->SetBinContent(324,0.004652193);
   ThetaY_35_40__973->SetBinError(307,0.00127261);
   ThetaY_35_40__973->SetBinError(308,0.006095178);
   ThetaY_35_40__973->SetBinError(309,0.01037191);
   ThetaY_35_40__973->SetBinError(310,0.01233841);
   ThetaY_35_40__973->SetBinError(311,0.01334541);
   ThetaY_35_40__973->SetBinError(312,0.0141261);
   ThetaY_35_40__973->SetBinError(313,0.01461446);
   ThetaY_35_40__973->SetBinError(314,0.01488398);
   ThetaY_35_40__973->SetBinError(315,0.01478142);
   ThetaY_35_40__973->SetBinError(316,0.01485263);
   ThetaY_35_40__973->SetBinError(317,0.01467813);
   ThetaY_35_40__973->SetBinError(318,0.01457411);
   ThetaY_35_40__973->SetBinError(319,0.0142075);
   ThetaY_35_40__973->SetBinError(320,0.01371717);
   ThetaY_35_40__973->SetBinError(321,0.01227461);
   ThetaY_35_40__973->SetBinError(322,0.01049421);
   ThetaY_35_40__973->SetBinError(323,0.006393828);
   ThetaY_35_40__973->SetBinError(324,0.001015192);
   ThetaY_35_40__973->SetEntries(54425);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__973->SetLineColor(ci);
   ThetaY_35_40__973->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__973->SetMarkerColor(ci);
   ThetaY_35_40__973->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__973->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__973->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__973->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__973->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__973->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__973->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__973->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__973->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__973->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__973->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__973->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__973->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__973->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__973->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__973->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__973->Draw("AEsame");
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
   
   Double_t _fx3325[18] = {
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
   Double_t _fy3325[18] = {
   0,
   0.1703718,
   0.706048,
   0.7483835,
   0.7818604,
   0.6026702,
   0.8890494,
   1,
   0.7532024,
   0.1721532,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3325[18] = {
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
   Double_t _fely3325[18] = {
   0,
   0.1409749,
   0.2014529,
   0.1752231,
   0.1658963,
   0.1373393,
   0.1619455,
   0.1688525,
   0.1471715,
   0.06832449,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3325[18] = {
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
   Double_t _fehy3325[18] = {
   7.399615,
   0.3926289,
   0.2693005,
   0.2220618,
   0.2055364,
   0.1729194,
   0.1945674,
   0.2001367,
   0.1792208,
   0.1029322,
   0.05409772,
   0.05487285,
   0.05774188,
   0.06194476,
   0.07736495,
   0.1058541,
   0.2853563,
   11.81705};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3325,_fy3325,_felx3325,_fehx3325,_fely3325,_fehy3325);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3325 = new TH1F("Graph_Graph3325","",100,-100,100);
   Graph_Graph3325->SetMinimum(0);
   Graph_Graph3325->SetMaximum(1.5);
   Graph_Graph3325->SetDirectory(0);
   Graph_Graph3325->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3325->SetLineColor(ci);
   Graph_Graph3325->GetXaxis()->SetRange(1,100);
   Graph_Graph3325->GetXaxis()->CenterTitle(true);
   Graph_Graph3325->GetXaxis()->SetLabelFont(42);
   Graph_Graph3325->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3325->GetXaxis()->SetTitleFont(42);
   Graph_Graph3325->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3325->GetYaxis()->CenterTitle(true);
   Graph_Graph3325->GetYaxis()->SetLabelFont(42);
   Graph_Graph3325->GetYaxis()->SetTitleFont(42);
   Graph_Graph3325->GetZaxis()->SetLabelFont(42);
   Graph_Graph3325->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3325->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3325);
   
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
   
   TH2D *ThetaY_vs_Y_35_40__974 = new TH2D("ThetaY_vs_Y_35_40__974","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__974->SetBinContent(8002,33);
   ThetaY_vs_Y_35_40__974->SetBinContent(8028,757);
   ThetaY_vs_Y_35_40__974->SetBinContent(8054,2192);
   ThetaY_vs_Y_35_40__974->SetBinContent(8080,3102);
   ThetaY_vs_Y_35_40__974->SetBinContent(8106,3629);
   ThetaY_vs_Y_35_40__974->SetBinContent(8132,4066);
   ThetaY_vs_Y_35_40__974->SetBinContent(8158,4352);
   ThetaY_vs_Y_35_40__974->SetBinContent(8184,4514);
   ThetaY_vs_Y_35_40__974->SetBinContent(8210,4452);
   ThetaY_vs_Y_35_40__974->SetBinContent(8236,4495);
   ThetaY_vs_Y_35_40__974->SetBinContent(8262,4390);
   ThetaY_vs_Y_35_40__974->SetBinContent(8288,4328);
   ThetaY_vs_Y_35_40__974->SetBinContent(8314,4113);
   ThetaY_vs_Y_35_40__974->SetBinContent(8340,3834);
   ThetaY_vs_Y_35_40__974->SetBinContent(8366,3070);
   ThetaY_vs_Y_35_40__974->SetBinContent(8392,2244);
   ThetaY_vs_Y_35_40__974->SetBinContent(8418,833);
   ThetaY_vs_Y_35_40__974->SetBinContent(8444,21);
   ThetaY_vs_Y_35_40__974->SetEntries(54425);
   ThetaY_vs_Y_35_40__974->SetContour(20);
   ThetaY_vs_Y_35_40__974->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__974->SetContourLevel(1,225.7);
   ThetaY_vs_Y_35_40__974->SetContourLevel(2,451.4);
   ThetaY_vs_Y_35_40__974->SetContourLevel(3,677.1);
   ThetaY_vs_Y_35_40__974->SetContourLevel(4,902.8);
   ThetaY_vs_Y_35_40__974->SetContourLevel(5,1128.5);
   ThetaY_vs_Y_35_40__974->SetContourLevel(6,1354.2);
   ThetaY_vs_Y_35_40__974->SetContourLevel(7,1579.9);
   ThetaY_vs_Y_35_40__974->SetContourLevel(8,1805.6);
   ThetaY_vs_Y_35_40__974->SetContourLevel(9,2031.3);
   ThetaY_vs_Y_35_40__974->SetContourLevel(10,2257);
   ThetaY_vs_Y_35_40__974->SetContourLevel(11,2482.7);
   ThetaY_vs_Y_35_40__974->SetContourLevel(12,2708.4);
   ThetaY_vs_Y_35_40__974->SetContourLevel(13,2934.1);
   ThetaY_vs_Y_35_40__974->SetContourLevel(14,3159.8);
   ThetaY_vs_Y_35_40__974->SetContourLevel(15,3385.5);
   ThetaY_vs_Y_35_40__974->SetContourLevel(16,3611.2);
   ThetaY_vs_Y_35_40__974->SetContourLevel(17,3836.9);
   ThetaY_vs_Y_35_40__974->SetContourLevel(18,4062.6);
   ThetaY_vs_Y_35_40__974->SetContourLevel(19,4288.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__974->SetLineColor(ci);
   ThetaY_vs_Y_35_40__974->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__974->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__974->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__974->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__974->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__974->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__974->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__974->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__974->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__974->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__974->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__974->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__974->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__974->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__974->Draw("COL");
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
