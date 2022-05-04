void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08484667,125,1.612087);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__1278 = new TH1D("S18_ThetaY_mI25_mI20__1278","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(313,0.0776699);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(314,0.7572816);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(315,1.15534);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(316,1.087379);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(317,1.106796);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(318,1.009709);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(319,1);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(320,0.6504854);
   S18_ThetaY_mI25_mI20__1278->SetBinContent(321,0.1262136);
   S18_ThetaY_mI25_mI20__1278->SetBinError(313,0.02746046);
   S18_ThetaY_mI25_mI20__1278->SetBinError(314,0.08574525);
   S18_ThetaY_mI25_mI20__1278->SetBinError(315,0.1059098);
   S18_ThetaY_mI25_mI20__1278->SetBinError(316,0.1027476);
   S18_ThetaY_mI25_mI20__1278->SetBinError(317,0.103661);
   S18_ThetaY_mI25_mI20__1278->SetBinError(318,0.09901009);
   S18_ThetaY_mI25_mI20__1278->SetBinError(319,0.09853293);
   S18_ThetaY_mI25_mI20__1278->SetBinError(320,0.07946944);
   S18_ThetaY_mI25_mI20__1278->SetBinError(321,0.03500535);
   S18_ThetaY_mI25_mI20__1278->SetMinimum(0);
   S18_ThetaY_mI25_mI20__1278->SetMaximum(1.442393);
   S18_ThetaY_mI25_mI20__1278->SetEntries(718);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1278->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__1278->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1278->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__1278->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__1278->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__1278->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1278->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1278->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1278->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__1278->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__1278->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1278->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1278->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1278->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1278->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1278->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1279 = new TH1D("ThetaY_mI25_mI20__1279","",630,-1575,1575);
   ThetaY_mI25_mI20__1279->SetBinContent(309,0.0006365372);
   ThetaY_mI25_mI20__1279->SetBinContent(310,0.1957063);
   ThetaY_mI25_mI20__1279->SetBinContent(311,0.6968925);
   ThetaY_mI25_mI20__1279->SetBinContent(312,0.9942712);
   ThetaY_mI25_mI20__1279->SetBinContent(313,1.156704);
   ThetaY_mI25_mI20__1279->SetBinContent(314,1.268619);
   ThetaY_mI25_mI20__1279->SetBinContent(315,1.311267);
   ThetaY_mI25_mI20__1279->SetBinContent(316,1.306811);
   ThetaY_mI25_mI20__1279->SetBinContent(317,1.271512);
   ThetaY_mI25_mI20__1279->SetBinContent(318,1.180603);
   ThetaY_mI25_mI20__1279->SetBinContent(319,1);
   ThetaY_mI25_mI20__1279->SetBinContent(320,0.6949251);
   ThetaY_mI25_mI20__1279->SetBinContent(321,0.194954);
   ThetaY_mI25_mI20__1279->SetBinContent(322,0.0007522713);
   ThetaY_mI25_mI20__1279->SetBinError(309,0.0001919232);
   ThetaY_mI25_mI20__1279->SetBinError(310,0.003365255);
   ThetaY_mI25_mI20__1279->SetBinError(311,0.006350362);
   ThetaY_mI25_mI20__1279->SetBinError(312,0.007585217);
   ThetaY_mI25_mI20__1279->SetBinError(313,0.008181382);
   ThetaY_mI25_mI20__1279->SetBinError(314,0.008568033);
   ThetaY_mI25_mI20__1279->SetBinError(315,0.008710861);
   ThetaY_mI25_mI20__1279->SetBinError(316,0.008696048);
   ThetaY_mI25_mI20__1279->SetBinError(317,0.008577798);
   ThetaY_mI25_mI20__1279->SetBinError(318,0.008265469);
   ThetaY_mI25_mI20__1279->SetBinError(319,0.007607038);
   ThetaY_mI25_mI20__1279->SetBinError(320,0.006341391);
   ThetaY_mI25_mI20__1279->SetBinError(321,0.003358781);
   ThetaY_mI25_mI20__1279->SetBinError(322,0.0002086425);
   ThetaY_mI25_mI20__1279->SetEntries(194820);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1279->SetLineColor(ci);
   ThetaY_mI25_mI20__1279->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1279->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1279->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1279->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1279->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1279->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1279->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1279->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1279->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1279->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1279->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1279->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1279->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1279->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1279->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1279->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1279->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1279->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1279->Draw("AEsame");
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
   
   Double_t _fx3427[14] = {
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
   32.5};
   Double_t _fy3427[14] = {
   0,
   0,
   0,
   0,
   0.06714761,
   0.5969339,
   0.8810868,
   0.8320857,
   0.8704566,
   0.8552483,
   1,
   0.9360512,
   0.6474019,
   0};
   Double_t _felx3427[14] = {
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
   Double_t _fely3427[14] = {
   0,
   0,
   0,
   0,
   0.02324045,
   0.06756265,
   0.08086526,
   0.07869993,
   0.08161512,
   0.08394012,
   0.09866271,
   0.1143839,
   0.1775396,
   0};
   Double_t _fehx3427[14] = {
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
   Double_t _fehy3427[14] = {
   30.56663,
   0.09135559,
   0.0256501,
   0.01797795,
   0.03312325,
   0.07568278,
   0.08865476,
   0.08652417,
   0.08965537,
   0.09261711,
   0.108919,
   0.1293057,
   0.2345541,
   25.52477};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3427,_fy3427,_felx3427,_fehx3427,_fely3427,_fehy3427);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3427 = new TH1F("Graph_Graph3427","",100,-100,100);
   Graph_Graph3427->SetMinimum(0);
   Graph_Graph3427->SetMaximum(1.5);
   Graph_Graph3427->SetDirectory(0);
   Graph_Graph3427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3427->SetLineColor(ci);
   Graph_Graph3427->GetXaxis()->SetRange(1,100);
   Graph_Graph3427->GetXaxis()->CenterTitle(true);
   Graph_Graph3427->GetXaxis()->SetLabelFont(42);
   Graph_Graph3427->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3427->GetXaxis()->SetTitleFont(42);
   Graph_Graph3427->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3427->GetYaxis()->CenterTitle(true);
   Graph_Graph3427->GetYaxis()->SetLabelFont(42);
   Graph_Graph3427->GetYaxis()->SetTitleFont(42);
   Graph_Graph3427->GetZaxis()->SetLabelFont(42);
   Graph_Graph3427->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3427->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3427);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.442393,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1280 = new TH2D("ThetaY_vs_Y_mI25_mI20__1280","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8042,11);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8068,3382);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8094,12043);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8120,17182);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8146,19989);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8172,21923);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8198,22660);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8224,22583);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8250,21973);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8276,20402);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8302,17281);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8328,12009);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8354,3369);
   ThetaY_vs_Y_mI25_mI20__1280->SetBinContent(8380,13);
   ThetaY_vs_Y_mI25_mI20__1280->SetEntries(194820);
   ThetaY_vs_Y_mI25_mI20__1280->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(1,1133);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(2,2266);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(3,3399);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(4,4532);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(5,5665);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(6,6798);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(7,7931);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(8,9064);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(9,10197);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(10,11330);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(11,12463);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(12,13596);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(13,14729);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(14,15862);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(15,16995);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(16,18128);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(17,19261);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(18,20394);
   ThetaY_vs_Y_mI25_mI20__1280->SetContourLevel(19,21527);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1280->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1280->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1280->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1280->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1280->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1280->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1280->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1280->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1280->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1280->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1280->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1280->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1280->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1280->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1280->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1280->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
