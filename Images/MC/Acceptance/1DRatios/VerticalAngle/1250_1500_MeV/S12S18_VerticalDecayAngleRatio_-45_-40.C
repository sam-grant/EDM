void S12S18_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.1324859,125,2.517231);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__981 = new TH1D("S12S18_ThetaY_mI45_mI40__981","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(316,1.846154);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(317,1.461538);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(318,1.846154);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(319,0.9230769);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(320,0.8461538);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(321,1.230769);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(322,1);
   S12S18_ThetaY_mI45_mI40__981->SetBinContent(323,0.3846154);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(316,0.3768446);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(317,0.3352999);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(318,0.3768446);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(319,0.2664694);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(320,0.255125);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(321,0.3076923);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(322,0.2773501);
   S12S18_ThetaY_mI45_mI40__981->SetBinError(323,0.1720052);
   S12S18_ThetaY_mI45_mI40__981->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__981->SetMaximum(2.25226);
   S12S18_ThetaY_mI45_mI40__981->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__981->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__981->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__981->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__981->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__981->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__981->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__981->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__981->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__981->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__981->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__981->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__981->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__981->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__981->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__981->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__981->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__982 = new TH1D("ThetaY_mI45_mI40__982","",630,-1575,1575);
   ThetaY_mI45_mI40__982->SetBinContent(307,0.005793743);
   ThetaY_mI45_mI40__982->SetBinContent(308,0.3939745);
   ThetaY_mI45_mI40__982->SetBinContent(309,0.9779838);
   ThetaY_mI45_mI40__982->SetBinContent(310,1.329085);
   ThetaY_mI45_mI40__982->SetBinContent(311,1.706837);
   ThetaY_mI45_mI40__982->SetBinContent(312,1.867903);
   ThetaY_mI45_mI40__982->SetBinContent(313,1.83314);
   ThetaY_mI45_mI40__982->SetBinContent(314,1.918888);
   ThetaY_mI45_mI40__982->SetBinContent(315,1.866744);
   ThetaY_mI45_mI40__982->SetBinContent(316,2.047509);
   ThetaY_mI45_mI40__982->SetBinContent(317,2.04635);
   ThetaY_mI45_mI40__982->SetBinContent(318,1.936269);
   ThetaY_mI45_mI40__982->SetBinContent(319,1.804171);
   ThetaY_mI45_mI40__982->SetBinContent(320,1.600232);
   ThetaY_mI45_mI40__982->SetBinContent(321,1.436848);
   ThetaY_mI45_mI40__982->SetBinContent(322,1);
   ThetaY_mI45_mI40__982->SetBinContent(323,0.3893395);
   ThetaY_mI45_mI40__982->SetBinContent(324,0.005793743);
   ThetaY_mI45_mI40__982->SetBinError(307,0.002591041);
   ThetaY_mI45_mI40__982->SetBinError(308,0.02136627);
   ThetaY_mI45_mI40__982->SetBinError(309,0.03366359);
   ThetaY_mI45_mI40__982->SetBinError(310,0.03924379);
   ThetaY_mI45_mI40__982->SetBinError(311,0.0444724);
   ThetaY_mI45_mI40__982->SetBinError(312,0.04652343);
   ThetaY_mI45_mI40__982->SetBinError(313,0.04608849);
   ThetaY_mI45_mI40__982->SetBinError(314,0.04715409);
   ThetaY_mI45_mI40__982->SetBinError(315,0.046509);
   ThetaY_mI45_mI40__982->SetBinError(316,0.04870881);
   ThetaY_mI45_mI40__982->SetBinError(317,0.04869502);
   ThetaY_mI45_mI40__982->SetBinError(318,0.04736717);
   ThetaY_mI45_mI40__982->SetBinError(319,0.04572287);
   ThetaY_mI45_mI40__982->SetBinError(320,0.04306119);
   ThetaY_mI45_mI40__982->SetBinError(321,0.04080375);
   ThetaY_mI45_mI40__982->SetBinError(322,0.0340404);
   ThetaY_mI45_mI40__982->SetBinError(323,0.02124021);
   ThetaY_mI45_mI40__982->SetBinError(324,0.002591041);
   ThetaY_mI45_mI40__982->SetEntries(20856);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__982->SetLineColor(ci);
   ThetaY_mI45_mI40__982->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__982->SetMarkerColor(ci);
   ThetaY_mI45_mI40__982->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__982->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__982->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__982->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__982->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__982->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__982->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__982->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__982->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__982->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__982->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__982->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__982->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__982->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__982->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__982->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__982->Draw("AEsame");
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
   
   Double_t _fx3328[18] = {
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
   Double_t _fy3328[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.9016586,
   0.7142173,
   0.9534595,
   0.5116348,
   0.5287696,
   0.8565757,
   1,
   0.9878663,
   0};
   Double_t _felx3328[18] = {
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
   Double_t _fely3328[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1839475,
   0.1632272,
   0.1945873,
   0.1461318,
   0.157549,
   0.2131685,
   0.2756522,
   0.4293195,
   0};
   Double_t _fehx3328[18] = {
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
   Double_t _fehy3328[18] = {
   29.55027,
   0.3604323,
   0.1449632,
   0.1066379,
   0.08302235,
   0.07585939,
   0.07729877,
   0.07384268,
   0.0759065,
   0.2260696,
   0.2057227,
   0.2391725,
   0.1954467,
   0.2134862,
   0.274437,
   0.3650517,
   0.6766255,
   29.55027};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3328,_fy3328,_felx3328,_fehx3328,_fely3328,_fehy3328);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3328 = new TH1F("Graph_Graph3328","",100,-100,100);
   Graph_Graph3328->SetMinimum(0);
   Graph_Graph3328->SetMaximum(1.5);
   Graph_Graph3328->SetDirectory(0);
   Graph_Graph3328->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3328->SetLineColor(ci);
   Graph_Graph3328->GetXaxis()->SetRange(1,100);
   Graph_Graph3328->GetXaxis()->CenterTitle(true);
   Graph_Graph3328->GetXaxis()->SetLabelFont(42);
   Graph_Graph3328->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3328->GetXaxis()->SetTitleFont(42);
   Graph_Graph3328->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3328->GetYaxis()->CenterTitle(true);
   Graph_Graph3328->GetYaxis()->SetLabelFont(42);
   Graph_Graph3328->GetYaxis()->SetTitleFont(42);
   Graph_Graph3328->GetZaxis()->SetLabelFont(42);
   Graph_Graph3328->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3328->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3328);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.25226,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__983 = new TH2D("ThetaY_vs_Y_mI45_mI40__983","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(7986,5);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8012,340);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8038,844);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8064,1147);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8090,1473);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8116,1612);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8142,1582);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8168,1656);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8194,1611);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8220,1767);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8246,1766);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8272,1671);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8298,1557);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8324,1381);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8350,1240);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8376,863);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8402,336);
   ThetaY_vs_Y_mI45_mI40__983->SetBinContent(8428,5);
   ThetaY_vs_Y_mI45_mI40__983->SetEntries(20856);
   ThetaY_vs_Y_mI45_mI40__983->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(1,88.35);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(2,176.7);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(3,265.05);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(4,353.4);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(5,441.75);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(6,530.1);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(7,618.45);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(8,706.8);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(9,795.15);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(10,883.5);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(11,971.85);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(12,1060.2);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(13,1148.55);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(14,1236.9);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(15,1325.25);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(16,1413.6);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(17,1501.95);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(18,1590.3);
   ThetaY_vs_Y_mI45_mI40__983->SetContourLevel(19,1678.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__983->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__983->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__983->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__983->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__983->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__983->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__983->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__983->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__983->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__983->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__983->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__983->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__983->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__983->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__983->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__983->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
