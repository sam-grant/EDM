void S12S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1306141,125,2.481669);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__1023 = new TH1D("S12S18_ThetaY_25_30__1023","",630,-1575,1575);
   S12S18_ThetaY_25_30__1023->SetBinContent(307,0.009174312);
   S12S18_ThetaY_25_30__1023->SetBinContent(308,0.3211009);
   S12S18_ThetaY_25_30__1023->SetBinContent(309,1);
   S12S18_ThetaY_25_30__1023->SetBinContent(310,1.201835);
   S12S18_ThetaY_25_30__1023->SetBinContent(311,1.477064);
   S12S18_ThetaY_25_30__1023->SetBinContent(312,1.458716);
   S12S18_ThetaY_25_30__1023->SetBinContent(313,1.669725);
   S12S18_ThetaY_25_30__1023->SetBinContent(314,1.706422);
   S12S18_ThetaY_25_30__1023->SetBinContent(315,1.504587);
   S12S18_ThetaY_25_30__1023->SetBinContent(316,1.743119);
   S12S18_ThetaY_25_30__1023->SetBinContent(317,1.247706);
   S12S18_ThetaY_25_30__1023->SetBinContent(318,0.01834862);
   S12S18_ThetaY_25_30__1023->SetBinError(307,0.009174312);
   S12S18_ThetaY_25_30__1023->SetBinError(308,0.05427596);
   S12S18_ThetaY_25_30__1023->SetBinError(309,0.09578263);
   S12S18_ThetaY_25_30__1023->SetBinError(310,0.1050048);
   S12S18_ThetaY_25_30__1023->SetBinError(311,0.116409);
   S12S18_ThetaY_25_30__1023->SetBinError(312,0.1156837);
   S12S18_ThetaY_25_30__1023->SetBinError(313,0.1237682);
   S12S18_ThetaY_25_30__1023->SetBinError(314,0.1251209);
   S12S18_ThetaY_25_30__1023->SetBinError(315,0.1174885);
   S12S18_ThetaY_25_30__1023->SetBinError(316,0.1264592);
   S12S18_ThetaY_25_30__1023->SetBinError(317,0.1069899);
   S12S18_ThetaY_25_30__1023->SetBinError(318,0.01297444);
   S12S18_ThetaY_25_30__1023->SetMinimum(0);
   S12S18_ThetaY_25_30__1023->SetMaximum(2.22044);
   S12S18_ThetaY_25_30__1023->SetEntries(1456);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1023->SetLineColor(ci);
   S12S18_ThetaY_25_30__1023->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1023->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__1023->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__1023->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__1023->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1023->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1023->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1023->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__1023->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__1023->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1023->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1023->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1023->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1023->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1023->Draw("AE");
   
   TH1D *ThetaY_25_30__1024 = new TH1D("ThetaY_25_30__1024","",630,-1575,1575);
   ThetaY_25_30__1024->SetBinContent(307,0.01114923);
   ThetaY_25_30__1024->SetBinContent(308,0.341052);
   ThetaY_25_30__1024->SetBinContent(309,1);
   ThetaY_25_30__1024->SetBinContent(310,1.405803);
   ThetaY_25_30__1024->SetBinContent(311,1.679674);
   ThetaY_25_30__1024->SetBinContent(312,1.837621);
   ThetaY_25_30__1024->SetBinContent(313,1.936678);
   ThetaY_25_30__1024->SetBinContent(314,2.017867);
   ThetaY_25_30__1024->SetBinContent(315,2.018582);
   ThetaY_25_30__1024->SetBinContent(316,1.990423);
   ThetaY_25_30__1024->SetBinContent(317,1.975986);
   ThetaY_25_30__1024->SetBinContent(318,1.95526);
   ThetaY_25_30__1024->SetBinContent(319,1.871355);
   ThetaY_25_30__1024->SetBinContent(320,1.665666);
   ThetaY_25_30__1024->SetBinContent(321,1.441824);
   ThetaY_25_30__1024->SetBinContent(322,0.9922813);
   ThetaY_25_30__1024->SetBinContent(323,0.3507719);
   ThetaY_25_30__1024->SetBinContent(324,0.01272156);
   ThetaY_25_30__1024->SetBinError(307,0.001262401);
   ThetaY_25_30__1024->SetBinError(308,0.00698209);
   ThetaY_25_30__1024->SetBinError(309,0.0119557);
   ThetaY_25_30__1024->SetBinError(310,0.01417547);
   ThetaY_25_30__1024->SetBinError(311,0.01549486);
   ThetaY_25_30__1024->SetBinError(312,0.01620702);
   ThetaY_25_30__1024->SetBinError(313,0.0166381);
   ThetaY_25_30__1024->SetBinError(314,0.01698327);
   ThetaY_25_30__1024->SetBinError(315,0.01698628);
   ThetaY_25_30__1024->SetBinError(316,0.01686739);
   ThetaY_25_30__1024->SetBinError(317,0.0168061);
   ThetaY_25_30__1024->SetBinError(318,0.01671773);
   ThetaY_25_30__1024->SetBinError(319,0.0163551);
   ThetaY_25_30__1024->SetBinError(320,0.01543011);
   ThetaY_25_30__1024->SetBinError(321,0.01435593);
   ThetaY_25_30__1024->SetBinError(322,0.01190947);
   ThetaY_25_30__1024->SetBinError(323,0.007080884);
   ThetaY_25_30__1024->SetBinError(324,0.001348482);
   ThetaY_25_30__1024->SetEntries(171435);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1024->SetLineColor(ci);
   ThetaY_25_30__1024->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1024->SetMarkerColor(ci);
   ThetaY_25_30__1024->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1024->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1024->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1024->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1024->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1024->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1024->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1024->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1024->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1024->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1024->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1024->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1024->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1024->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1024->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1024->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1024->Draw("AEsame");
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
   
   Double_t _fx3342[18] = {
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
   Double_t _fy3342[18] = {
   0.8228652,
   0.9415013,
   1,
   0.8549097,
   0.8793755,
   0.7938063,
   0.8621592,
   0.8456562,
   0.7453683,
   0.8757531,
   0.6314348,
   0.009384237,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3342[18] = {
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
   Double_t _fely3342[18] = {
   0.682358,
   0.1595044,
   0.09637095,
   0.07508984,
   0.06970225,
   0.06327199,
   0.06427384,
   0.06235539,
   0.05847874,
   0.06390724,
   0.05434191,
   0.006061625,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3342[18] = {
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
   Double_t _fehy3342[18] = {
   1.932526,
   0.1892039,
   0.1061535,
   0.08200226,
   0.07546537,
   0.06853344,
   0.06925903,
   0.06713675,
   0.06326169,
   0.06875509,
   0.05923705,
   0.01237925,
   0.009026237,
   0.01014095,
   0.01171547,
   0.01702375,
   0.04816932,
   1.341503};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3342,_fy3342,_felx3342,_fehx3342,_fely3342,_fehy3342);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3342 = new TH1F("Graph_Graph3342","",100,-100,100);
   Graph_Graph3342->SetMinimum(0);
   Graph_Graph3342->SetMaximum(1.5);
   Graph_Graph3342->SetDirectory(0);
   Graph_Graph3342->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3342->SetLineColor(ci);
   Graph_Graph3342->GetXaxis()->SetRange(1,100);
   Graph_Graph3342->GetXaxis()->CenterTitle(true);
   Graph_Graph3342->GetXaxis()->SetLabelFont(42);
   Graph_Graph3342->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3342->GetXaxis()->SetTitleFont(42);
   Graph_Graph3342->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3342->GetYaxis()->CenterTitle(true);
   Graph_Graph3342->GetYaxis()->SetLabelFont(42);
   Graph_Graph3342->GetYaxis()->SetTitleFont(42);
   Graph_Graph3342->GetZaxis()->SetLabelFont(42);
   Graph_Graph3342->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3342->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3342);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.22044,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1025 = new TH2D("ThetaY_vs_Y_25_30__1025","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8000,78);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8026,2386);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8052,6996);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8078,9835);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8104,11751);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8130,12856);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8156,13549);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8182,14117);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8208,14122);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8234,13925);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8260,13824);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8286,13679);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8312,13092);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8338,11653);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8364,10087);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8390,6942);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8416,2454);
   ThetaY_vs_Y_25_30__1025->SetBinContent(8442,89);
   ThetaY_vs_Y_25_30__1025->SetEntries(171435);
   ThetaY_vs_Y_25_30__1025->SetContour(20);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(1,706.1);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(2,1412.2);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(3,2118.3);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(4,2824.4);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(5,3530.5);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(6,4236.6);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(7,4942.7);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(8,5648.8);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(9,6354.9);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(10,7061);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(11,7767.1);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(12,8473.2);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(13,9179.3);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(14,9885.4);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(15,10591.5);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(16,11297.6);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(17,12003.7);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(18,12709.8);
   ThetaY_vs_Y_25_30__1025->SetContourLevel(19,13415.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1025->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1025->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1025->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1025->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1025->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1025->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1025->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1025->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1025->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1025->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1025->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1025->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1025->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1025->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1025->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1025->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
