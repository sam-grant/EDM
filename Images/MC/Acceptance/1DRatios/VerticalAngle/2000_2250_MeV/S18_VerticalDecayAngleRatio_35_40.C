void S18_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.06558325,125,1.246082);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__1485 = new TH1D("S18_ThetaY_35_40__1485","",630,-1575,1575);
   S18_ThetaY_35_40__1485->SetBinContent(311,0.173913);
   S18_ThetaY_35_40__1485->SetBinContent(312,0.2608696);
   S18_ThetaY_35_40__1485->SetBinContent(313,0.3913043);
   S18_ThetaY_35_40__1485->SetBinContent(314,0.6086957);
   S18_ThetaY_35_40__1485->SetBinContent(315,1);
   S18_ThetaY_35_40__1485->SetBinContent(316,0.1304348);
   S18_ThetaY_35_40__1485->SetBinError(311,0.08695652);
   S18_ThetaY_35_40__1485->SetBinError(312,0.1064996);
   S18_ThetaY_35_40__1485->SetBinError(313,0.1304348);
   S18_ThetaY_35_40__1485->SetBinError(314,0.1626808);
   S18_ThetaY_35_40__1485->SetBinError(315,0.2085144);
   S18_ThetaY_35_40__1485->SetBinError(316,0.07530656);
   S18_ThetaY_35_40__1485->SetMinimum(0);
   S18_ThetaY_35_40__1485->SetMaximum(1.114915);
   S18_ThetaY_35_40__1485->SetEntries(59);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1485->SetLineColor(ci);
   S18_ThetaY_35_40__1485->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1485->SetMarkerColor(ci);
   S18_ThetaY_35_40__1485->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__1485->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__1485->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1485->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1485->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1485->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__1485->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__1485->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1485->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1485->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1485->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1485->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1485->Draw("AE");
   
   TH1D *ThetaY_35_40__1486 = new TH1D("ThetaY_35_40__1486","",630,-1575,1575);
   ThetaY_35_40__1486->SetBinContent(310,0.000968523);
   ThetaY_35_40__1486->SetBinContent(311,0.2084746);
   ThetaY_35_40__1486->SetBinContent(312,0.6273608);
   ThetaY_35_40__1486->SetBinContent(313,0.8411622);
   ThetaY_35_40__1486->SetBinContent(314,0.9750605);
   ThetaY_35_40__1486->SetBinContent(315,1);
   ThetaY_35_40__1486->SetBinContent(316,1.013559);
   ThetaY_35_40__1486->SetBinContent(317,0.9842615);
   ThetaY_35_40__1486->SetBinContent(318,0.8716707);
   ThetaY_35_40__1486->SetBinContent(319,0.6360775);
   ThetaY_35_40__1486->SetBinContent(320,0.203632);
   ThetaY_35_40__1486->SetBinContent(321,0.0002421308);
   ThetaY_35_40__1486->SetBinError(310,0.0004842615);
   ThetaY_35_40__1486->SetBinError(311,0.007104795);
   ThetaY_35_40__1486->SetBinError(312,0.01232491);
   ThetaY_35_40__1486->SetBinError(313,0.01427134);
   ThetaY_35_40__1486->SetBinError(314,0.01536529);
   ThetaY_35_40__1486->SetBinError(315,0.01556055);
   ThetaY_35_40__1486->SetBinError(316,0.01566569);
   ThetaY_35_40__1486->SetBinError(317,0.01543762);
   ThetaY_35_40__1486->SetBinError(318,0.01452785);
   ThetaY_35_40__1486->SetBinError(319,0.01241023);
   ThetaY_35_40__1486->SetBinError(320,0.007021792);
   ThetaY_35_40__1486->SetBinError(321,0.0002421308);
   ThetaY_35_40__1486->SetEntries(30407);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1486->SetLineColor(ci);
   ThetaY_35_40__1486->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1486->SetMarkerColor(ci);
   ThetaY_35_40__1486->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1486->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1486->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1486->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1486->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1486->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1486->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1486->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1486->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1486->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1486->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1486->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1486->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1486->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1486->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1486->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1486->Draw("AEsame");
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
   
   Double_t _fx3496[12] = {
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
   Double_t _fy3496[12] = {
   0,
   0.834217,
   0.4158207,
   0.4651949,
   0.6242645,
   1,
   0.1286898,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3496[12] = {
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
   Double_t _fely3496[12] = {
   0,
   0.3999782,
   0.1651009,
   0.1523201,
   0.1650957,
   0.2075398,
   0.07005594,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3496[12] = {
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
   Double_t _fehy3496[12] = {
   104.952,
   0.6623502,
   0.248818,
   0.2128504,
   0.2158916,
   0.2559007,
   0.1252688,
   0.08134276,
   0.09185222,
   0.1258848,
   0.3935143,
   952.2297};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3496,_fy3496,_felx3496,_fehx3496,_fely3496,_fehy3496);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3496 = new TH1F("Graph_Graph3496","",100,-100,100);
   Graph_Graph3496->SetMinimum(0);
   Graph_Graph3496->SetMaximum(1.5);
   Graph_Graph3496->SetDirectory(0);
   Graph_Graph3496->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3496->SetLineColor(ci);
   Graph_Graph3496->GetXaxis()->SetRange(1,100);
   Graph_Graph3496->GetXaxis()->CenterTitle(true);
   Graph_Graph3496->GetXaxis()->SetLabelFont(42);
   Graph_Graph3496->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3496->GetXaxis()->SetTitleFont(42);
   Graph_Graph3496->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3496->GetYaxis()->CenterTitle(true);
   Graph_Graph3496->GetYaxis()->SetLabelFont(42);
   Graph_Graph3496->GetYaxis()->SetTitleFont(42);
   Graph_Graph3496->GetZaxis()->SetLabelFont(42);
   Graph_Graph3496->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3496->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3496);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.114915,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1487 = new TH2D("ThetaY_vs_Y_35_40__1487","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8080,4);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8106,861);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8132,2591);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8158,3474);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8184,4027);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8210,4130);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8236,4186);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8262,4065);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8288,3600);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8314,2627);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8340,841);
   ThetaY_vs_Y_35_40__1487->SetBinContent(8366,1);
   ThetaY_vs_Y_35_40__1487->SetEntries(30407);
   ThetaY_vs_Y_35_40__1487->SetContour(20);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(1,209.3);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(2,418.6);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(3,627.9);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(4,837.2);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(5,1046.5);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(6,1255.8);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(7,1465.1);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(8,1674.4);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(9,1883.7);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(10,2093);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(11,2302.3);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(12,2511.6);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(13,2720.9);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(14,2930.2);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(15,3139.5);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(16,3348.8);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(17,3558.1);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(18,3767.4);
   ThetaY_vs_Y_35_40__1487->SetContourLevel(19,3976.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1487->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1487->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1487->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1487->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1487->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1487->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1487->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1487->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1487->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1487->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1487->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1487->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1487->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1487->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1487->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1487->Draw("COL");
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
