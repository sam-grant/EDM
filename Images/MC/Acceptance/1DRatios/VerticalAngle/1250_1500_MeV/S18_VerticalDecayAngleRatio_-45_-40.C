void S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3402836,125,6.465389);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI45_mI40__924 = new TH1D("S18_ThetaY_mI45_mI40__924","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__924->SetBinContent(316,4);
   S18_ThetaY_mI45_mI40__924->SetBinContent(317,2);
   S18_ThetaY_mI45_mI40__924->SetBinContent(318,3.5);
   S18_ThetaY_mI45_mI40__924->SetBinContent(319,2.25);
   S18_ThetaY_mI45_mI40__924->SetBinContent(320,1.25);
   S18_ThetaY_mI45_mI40__924->SetBinContent(321,1.5);
   S18_ThetaY_mI45_mI40__924->SetBinContent(322,1.25);
   S18_ThetaY_mI45_mI40__924->SetBinContent(323,1);
   S18_ThetaY_mI45_mI40__924->SetBinError(316,1);
   S18_ThetaY_mI45_mI40__924->SetBinError(317,0.7071068);
   S18_ThetaY_mI45_mI40__924->SetBinError(318,0.9354143);
   S18_ThetaY_mI45_mI40__924->SetBinError(319,0.75);
   S18_ThetaY_mI45_mI40__924->SetBinError(320,0.559017);
   S18_ThetaY_mI45_mI40__924->SetBinError(321,0.6123724);
   S18_ThetaY_mI45_mI40__924->SetBinError(322,0.559017);
   S18_ThetaY_mI45_mI40__924->SetBinError(323,0.5);
   S18_ThetaY_mI45_mI40__924->SetMinimum(0);
   S18_ThetaY_mI45_mI40__924->SetMaximum(5.784821);
   S18_ThetaY_mI45_mI40__924->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__924->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__924->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__924->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__924->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__924->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__924->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__924->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__924->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__924->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__924->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__924->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__924->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__924->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__924->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__924->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__924->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__925 = new TH1D("ThetaY_mI45_mI40__925","",630,-1575,1575);
   ThetaY_mI45_mI40__925->SetBinContent(307,0.01488095);
   ThetaY_mI45_mI40__925->SetBinContent(308,1.011905);
   ThetaY_mI45_mI40__925->SetBinContent(309,2.511905);
   ThetaY_mI45_mI40__925->SetBinContent(310,3.41369);
   ThetaY_mI45_mI40__925->SetBinContent(311,4.383929);
   ThetaY_mI45_mI40__925->SetBinContent(312,4.797619);
   ThetaY_mI45_mI40__925->SetBinContent(313,4.708333);
   ThetaY_mI45_mI40__925->SetBinContent(314,4.928571);
   ThetaY_mI45_mI40__925->SetBinContent(315,4.794643);
   ThetaY_mI45_mI40__925->SetBinContent(316,5.258929);
   ThetaY_mI45_mI40__925->SetBinContent(317,5.255952);
   ThetaY_mI45_mI40__925->SetBinContent(318,4.973214);
   ThetaY_mI45_mI40__925->SetBinContent(319,4.633929);
   ThetaY_mI45_mI40__925->SetBinContent(320,4.110119);
   ThetaY_mI45_mI40__925->SetBinContent(321,3.690476);
   ThetaY_mI45_mI40__925->SetBinContent(322,2.568452);
   ThetaY_mI45_mI40__925->SetBinContent(323,1);
   ThetaY_mI45_mI40__925->SetBinContent(324,0.01488095);
   ThetaY_mI45_mI40__925->SetBinError(307,0.006654964);
   ThetaY_mI45_mI40__925->SetBinError(308,0.05487824);
   ThetaY_mI45_mI40__925->SetBinError(309,0.08646333);
   ThetaY_mI45_mI40__925->SetBinError(310,0.1007958);
   ThetaY_mI45_mI40__925->SetBinError(311,0.1142252);
   ThetaY_mI45_mI40__925->SetBinError(312,0.1194932);
   ThetaY_mI45_mI40__925->SetBinError(313,0.1183761);
   ThetaY_mI45_mI40__925->SetBinError(314,0.121113);
   ThetaY_mI45_mI40__925->SetBinError(315,0.1194561);
   ThetaY_mI45_mI40__925->SetBinError(316,0.1251062);
   ThetaY_mI45_mI40__925->SetBinError(317,0.1250708);
   ThetaY_mI45_mI40__925->SetBinError(318,0.1216603);
   ThetaY_mI45_mI40__925->SetBinError(319,0.117437);
   ThetaY_mI45_mI40__925->SetBinError(320,0.1106006);
   ThetaY_mI45_mI40__925->SetBinError(321,0.1048025);
   ThetaY_mI45_mI40__925->SetBinError(322,0.08743114);
   ThetaY_mI45_mI40__925->SetBinError(323,0.05455447);
   ThetaY_mI45_mI40__925->SetBinError(324,0.006654964);
   ThetaY_mI45_mI40__925->SetEntries(20856);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__925->SetLineColor(ci);
   ThetaY_mI45_mI40__925->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__925->SetMarkerColor(ci);
   ThetaY_mI45_mI40__925->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__925->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__925->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__925->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__925->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__925->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__925->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__925->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__925->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__925->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__925->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__925->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__925->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__925->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__925->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__925->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__925->Draw("AEsame");
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
   
   Double_t _fx3309[18] = {
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
   Double_t _fy3309[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.7606112,
   0.380521,
   0.7037702,
   0.4855491,
   0.3041274,
   0.4064516,
   0.4866744,
   1,
   0};
   Double_t _felx3309[18] = {
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
   Double_t _fely3309[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1889476,
   0.1319437,
   0.1865464,
   0.1592124,
   0.1315616,
   0.1615547,
   0.2107182,
   0.4808339,
   0};
   Double_t _fehx3309[18] = {
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
   Double_t _fehy3309[18] = {
   37.39153,
   0.4560743,
   0.1834296,
   0.1349346,
   0.1050526,
   0.09598893,
   0.09781026,
   0.09343708,
   0.09604855,
   0.2430799,
   0.1882856,
   0.2441869,
   0.2226784,
   0.206365,
   0.2437009,
   0.3308317,
   0.7991228,
   37.39153};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3309,_fy3309,_felx3309,_fehx3309,_fely3309,_fehy3309);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3309 = new TH1F("Graph_Graph3309","",100,-100,100);
   Graph_Graph3309->SetMinimum(0);
   Graph_Graph3309->SetMaximum(1.5);
   Graph_Graph3309->SetDirectory(0);
   Graph_Graph3309->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3309->SetLineColor(ci);
   Graph_Graph3309->GetXaxis()->SetRange(1,100);
   Graph_Graph3309->GetXaxis()->CenterTitle(true);
   Graph_Graph3309->GetXaxis()->SetLabelFont(42);
   Graph_Graph3309->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3309->GetXaxis()->SetTitleFont(42);
   Graph_Graph3309->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3309->GetYaxis()->CenterTitle(true);
   Graph_Graph3309->GetYaxis()->SetLabelFont(42);
   Graph_Graph3309->GetYaxis()->SetTitleFont(42);
   Graph_Graph3309->GetZaxis()->SetLabelFont(42);
   Graph_Graph3309->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3309->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3309);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.784821,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__926 = new TH2D("ThetaY_vs_Y_mI45_mI40__926","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(7986,5);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8012,340);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8038,844);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8064,1147);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8090,1473);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8116,1612);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8142,1582);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8168,1656);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8194,1611);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8220,1767);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8246,1766);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8272,1671);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8298,1557);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8324,1381);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8350,1240);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8376,863);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8402,336);
   ThetaY_vs_Y_mI45_mI40__926->SetBinContent(8428,5);
   ThetaY_vs_Y_mI45_mI40__926->SetEntries(20856);
   ThetaY_vs_Y_mI45_mI40__926->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(1,88.35);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(2,176.7);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(3,265.05);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(4,353.4);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(5,441.75);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(6,530.1);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(7,618.45);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(8,706.8);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(9,795.15);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(10,883.5);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(11,971.85);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(12,1060.2);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(13,1148.55);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(14,1236.9);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(15,1325.25);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(16,1413.6);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(17,1501.95);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(18,1590.3);
   ThetaY_vs_Y_mI45_mI40__926->SetContourLevel(19,1678.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__926->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__926->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__926->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__926->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__926->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__926->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__926->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__926->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__926->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__926->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__926->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__926->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__926->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__926->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__926->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__926->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-45_-40","Reco vertices","lpf");
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
