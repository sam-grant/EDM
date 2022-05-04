void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1527397,125,2.902054);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__1791 = new TH1D("S18_ThetaY_mI25_mI20__1791","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__1791->SetBinContent(314,0.1481481);
   S18_ThetaY_mI25_mI20__1791->SetBinContent(315,1.555556);
   S18_ThetaY_mI25_mI20__1791->SetBinContent(316,1.481481);
   S18_ThetaY_mI25_mI20__1791->SetBinContent(317,1.444444);
   S18_ThetaY_mI25_mI20__1791->SetBinContent(318,1);
   S18_ThetaY_mI25_mI20__1791->SetBinError(314,0.07407407);
   S18_ThetaY_mI25_mI20__1791->SetBinError(315,0.2400274);
   S18_ThetaY_mI25_mI20__1791->SetBinError(316,0.2342428);
   S18_ThetaY_mI25_mI20__1791->SetBinError(317,0.2312962);
   S18_ThetaY_mI25_mI20__1791->SetBinError(318,0.1924501);
   S18_ThetaY_mI25_mI20__1791->SetMinimum(0);
   S18_ThetaY_mI25_mI20__1791->SetMaximum(2.596575);
   S18_ThetaY_mI25_mI20__1791->SetEntries(152);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1791->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__1791->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1791->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__1791->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__1791->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__1791->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1791->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1791->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1791->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__1791->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__1791->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1791->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1791->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1791->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1791->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1791->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1792 = new TH1D("ThetaY_mI25_mI20__1792","",630,-1575,1575);
   ThetaY_mI25_mI20__1792->SetBinContent(312,0.04371338);
   ThetaY_mI25_mI20__1792->SetBinContent(313,0.9923389);
   ThetaY_mI25_mI20__1792->SetBinContent(314,1.966201);
   ThetaY_mI25_mI20__1792->SetBinContent(315,2.360523);
   ThetaY_mI25_mI20__1792->SetBinContent(316,2.321015);
   ThetaY_mI25_mI20__1792->SetBinContent(317,1.960192);
   ThetaY_mI25_mI20__1792->SetBinContent(318,1);
   ThetaY_mI25_mI20__1792->SetBinContent(319,0.04446447);
   ThetaY_mI25_mI20__1792->SetBinError(312,0.002562524);
   ThetaY_mI25_mI20__1792->SetBinError(313,0.0122093);
   ThetaY_mI25_mI20__1792->SetBinError(314,0.01718599);
   ThetaY_mI25_mI20__1792->SetBinError(315,0.01883063);
   ThetaY_mI25_mI20__1792->SetBinError(316,0.01867238);
   ThetaY_mI25_mI20__1792->SetBinError(317,0.01715971);
   ThetaY_mI25_mI20__1792->SetBinError(318,0.01225634);
   ThetaY_mI25_mI20__1792->SetBinError(319,0.002584445);
   ThetaY_mI25_mI20__1792->SetEntries(71153);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1792->SetLineColor(ci);
   ThetaY_mI25_mI20__1792->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1792->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1792->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1792->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1792->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1792->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1792->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1792->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1792->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1792->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1792->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1792->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1792->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1792->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1792->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1792->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1792->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1792->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1792->Draw("AEsame");
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
   
   Double_t _fx3598[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3598[8] = {
   0,
   0,
   0.07534741,
   0.6589877,
   0.6382902,
   0.7368892,
   1,
   0};
   Double_t _felx3598[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3598[8] = {
   0,
   0,
   0.0360645,
   0.1014097,
   0.1006257,
   0.1176597,
   0.1916248,
   0};
   Double_t _fehx3598[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3598[8] = {
   1.564787,
   0.06872198,
   0.05959261,
   0.1183675,
   0.1179012,
   0.1381443,
   0.2324398,
   1.538272};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3598,_fy3598,_felx3598,_fehx3598,_fely3598,_fehy3598);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3598 = new TH1F("Graph_Graph3598","",100,-100,100);
   Graph_Graph3598->SetMinimum(0);
   Graph_Graph3598->SetMaximum(1.5);
   Graph_Graph3598->SetDirectory(0);
   Graph_Graph3598->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3598->SetLineColor(ci);
   Graph_Graph3598->GetXaxis()->SetRange(1,100);
   Graph_Graph3598->GetXaxis()->CenterTitle(true);
   Graph_Graph3598->GetXaxis()->SetLabelFont(42);
   Graph_Graph3598->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3598->GetXaxis()->SetTitleFont(42);
   Graph_Graph3598->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3598->GetYaxis()->CenterTitle(true);
   Graph_Graph3598->GetYaxis()->SetLabelFont(42);
   Graph_Graph3598->GetYaxis()->SetTitleFont(42);
   Graph_Graph3598->GetZaxis()->SetLabelFont(42);
   Graph_Graph3598->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3598->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3598);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.596575,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1793 = new TH2D("ThetaY_vs_Y_mI25_mI20__1793","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8120,291);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8146,6606);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8172,13089);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8198,15714);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8224,15451);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8250,13049);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8276,6657);
   ThetaY_vs_Y_mI25_mI20__1793->SetBinContent(8302,296);
   ThetaY_vs_Y_mI25_mI20__1793->SetEntries(71153);
   ThetaY_vs_Y_mI25_mI20__1793->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(1,785.7);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(2,1571.4);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(3,2357.1);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(4,3142.8);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(5,3928.5);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(6,4714.2);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(7,5499.9);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(8,6285.6);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(9,7071.3);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(10,7857);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(11,8642.7);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(12,9428.4);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(13,10214.1);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(14,10999.8);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(15,11785.5);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(16,12571.2);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(17,13356.9);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(18,14142.6);
   ThetaY_vs_Y_mI25_mI20__1793->SetContourLevel(19,14928.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1793->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1793->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1793->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1793->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1793->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1793->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1793->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1793->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1793->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1793->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1793->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1793->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1793->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1793->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1793->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1793->Draw("COL");
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
