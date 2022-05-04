void S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__1464 = new TH1D("S18_ThetaY_0_5__1464","",630,-1575,1575);
   S18_ThetaY_0_5__1464->SetBinContent(311,0.02788845);
   S18_ThetaY_0_5__1464->SetBinContent(312,0.2589641);
   S18_ThetaY_0_5__1464->SetBinContent(313,0.8007968);
   S18_ThetaY_0_5__1464->SetBinContent(314,0.8605578);
   S18_ThetaY_0_5__1464->SetBinContent(315,1);
   S18_ThetaY_0_5__1464->SetBinContent(316,0.8406375);
   S18_ThetaY_0_5__1464->SetBinContent(317,0.9083665);
   S18_ThetaY_0_5__1464->SetBinContent(318,0.7051793);
   S18_ThetaY_0_5__1464->SetBinContent(319,0.1115538);
   S18_ThetaY_0_5__1464->SetBinError(311,0.01054084);
   S18_ThetaY_0_5__1464->SetBinError(312,0.03212055);
   S18_ThetaY_0_5__1464->SetBinError(313,0.05648385);
   S18_ThetaY_0_5__1464->SetBinError(314,0.05855354);
   S18_ThetaY_0_5__1464->SetBinError(315,0.06311944);
   S18_ThetaY_0_5__1464->SetBinError(316,0.05787187);
   S18_ThetaY_0_5__1464->SetBinError(317,0.06015804);
   S18_ThetaY_0_5__1464->SetBinError(318,0.05300452);
   S18_ThetaY_0_5__1464->SetBinError(319,0.02108168);
   S18_ThetaY_0_5__1464->SetMinimum(0);
   S18_ThetaY_0_5__1464->SetMaximum(1.1);
   S18_ThetaY_0_5__1464->SetEntries(1384);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1464->SetLineColor(ci);
   S18_ThetaY_0_5__1464->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1464->SetMarkerColor(ci);
   S18_ThetaY_0_5__1464->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__1464->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__1464->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1464->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1464->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1464->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__1464->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__1464->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1464->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1464->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1464->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1464->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1464->Draw("AE");
   
   TH1D *ThetaY_0_5__1465 = new TH1D("ThetaY_0_5__1465","",630,-1575,1575);
   ThetaY_0_5__1465->SetBinContent(310,0.001560603);
   ThetaY_0_5__1465->SetBinContent(311,0.1995145);
   ThetaY_0_5__1465->SetBinContent(312,0.6101266);
   ThetaY_0_5__1465->SetBinContent(313,0.8156581);
   ThetaY_0_5__1465->SetBinContent(314,0.9451014);
   ThetaY_0_5__1465->SetBinContent(315,1);
   ThetaY_0_5__1465->SetBinContent(316,0.9930813);
   ThetaY_0_5__1465->SetBinContent(317,0.949922);
   ThetaY_0_5__1465->SetBinContent(318,0.825091);
   ThetaY_0_5__1465->SetBinContent(319,0.5996705);
   ThetaY_0_5__1465->SetBinContent(320,0.2012485);
   ThetaY_0_5__1465->SetBinContent(321,0.001508583);
   ThetaY_0_5__1465->SetBinError(310,0.000164502);
   ThetaY_0_5__1465->SetBinError(311,0.001859997);
   ThetaY_0_5__1465->SetBinError(312,0.003252633);
   ThetaY_0_5__1465->SetBinError(313,0.00376079);
   ThetaY_0_5__1465->SetBinError(314,0.004048221);
   ThetaY_0_5__1465->SetBinError(315,0.004164137);
   ThetaY_0_5__1465->SetBinError(316,0.004149707);
   ThetaY_0_5__1465->SetBinError(317,0.004058532);
   ThetaY_0_5__1465->SetBinError(318,0.003782474);
   ThetaY_0_5__1465->SetBinError(319,0.003224641);
   ThetaY_0_5__1465->SetBinError(320,0.001868062);
   ThetaY_0_5__1465->SetBinError(321,0.0001617371);
   ThetaY_0_5__1465->SetEntries(411907);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1465->SetLineColor(ci);
   ThetaY_0_5__1465->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1465->SetMarkerColor(ci);
   ThetaY_0_5__1465->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1465->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1465->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1465->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1465->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1465->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1465->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1465->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1465->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1465->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1465->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1465->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1465->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1465->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1465->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1465->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1465->Draw("AEsame");
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
   
   Double_t _fx3489[12] = {
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
   Double_t _fy3489[12] = {
   0,
   0.1397816,
   0.4244433,
   0.9817801,
   0.9105454,
   1,
   0.8464941,
   0.9562538,
   0.8546685,
   0.1860251,
   0,
   0};
   Double_t _felx3489[12] = {
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
   Double_t _fely3489[12] = {
   0,
   0.05156258,
   0.05255769,
   0.06933877,
   0.0620288,
   0.06321399,
   0.05833555,
   0.06341401,
   0.06429871,
   0.0349579,
   0,
   0};
   Double_t _fehx3489[12] = {
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
   Double_t _fehy3489[12] = {
   4.748343,
   0.0753232,
   0.05950833,
   0.07441932,
   0.06640669,
   0.06734329,
   0.0625023,
   0.06776674,
   0.06932954,
   0.04223834,
   0.03644912,
   4.913818};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3489,_fy3489,_felx3489,_fehx3489,_fely3489,_fehy3489);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3489 = new TH1F("Graph_Graph3489","",100,-100,100);
   Graph_Graph3489->SetMinimum(0);
   Graph_Graph3489->SetMaximum(1.5);
   Graph_Graph3489->SetDirectory(0);
   Graph_Graph3489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3489->SetLineColor(ci);
   Graph_Graph3489->GetXaxis()->SetRange(1,100);
   Graph_Graph3489->GetXaxis()->CenterTitle(true);
   Graph_Graph3489->GetXaxis()->SetLabelFont(42);
   Graph_Graph3489->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3489->GetXaxis()->SetTitleFont(42);
   Graph_Graph3489->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3489->GetYaxis()->CenterTitle(true);
   Graph_Graph3489->GetYaxis()->SetLabelFont(42);
   Graph_Graph3489->GetYaxis()->SetTitleFont(42);
   Graph_Graph3489->GetZaxis()->SetLabelFont(42);
   Graph_Graph3489->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3489->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3489);
   
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
   
   TH2D *ThetaY_vs_Y_0_5__1466 = new TH2D("ThetaY_vs_Y_0_5__1466","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8073,90);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8099,11506);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8125,35186);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8151,47039);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8177,54504);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8203,57670);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8229,57271);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8255,54782);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8281,47583);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8307,34583);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8333,11606);
   ThetaY_vs_Y_0_5__1466->SetBinContent(8359,87);
   ThetaY_vs_Y_0_5__1466->SetEntries(411907);
   ThetaY_vs_Y_0_5__1466->SetContour(20);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(1,2883.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(2,5767);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(3,8650.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(4,11534);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(5,14417.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(6,17301);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(7,20184.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(8,23068);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(9,25951.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(10,28835);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(11,31718.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(12,34602);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(13,37485.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(14,40369);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(15,43252.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(16,46136);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(17,49019.5);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(18,51903);
   ThetaY_vs_Y_0_5__1466->SetContourLevel(19,54786.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1466->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1466->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1466->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1466->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1466->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1466->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1466->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1466->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1466->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1466->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1466->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1466->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1466->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1466->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1466->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1466->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
