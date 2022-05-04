void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_10_15__1869 = new TH1D("S12S18_ThetaY_10_15__1869","",630,-1575,1575);
   S12S18_ThetaY_10_15__1869->SetBinContent(312,0.01005025);
   S12S18_ThetaY_10_15__1869->SetBinContent(313,0.3417085);
   S12S18_ThetaY_10_15__1869->SetBinContent(314,0.7236181);
   S12S18_ThetaY_10_15__1869->SetBinContent(315,0.9045226);
   S12S18_ThetaY_10_15__1869->SetBinContent(316,1);
   S12S18_ThetaY_10_15__1869->SetBinContent(317,0.3768844);
   S12S18_ThetaY_10_15__1869->SetBinContent(318,0.005025126);
   S12S18_ThetaY_10_15__1869->SetBinError(312,0.007106601);
   S12S18_ThetaY_10_15__1869->SetBinError(313,0.04143825);
   S12S18_ThetaY_10_15__1869->SetBinError(314,0.06030151);
   S12S18_ThetaY_10_15__1869->SetBinError(315,0.06741913);
   S12S18_ThetaY_10_15__1869->SetBinError(316,0.07088812);
   S12S18_ThetaY_10_15__1869->SetBinError(317,0.04351886);
   S12S18_ThetaY_10_15__1869->SetBinError(318,0.005025126);
   S12S18_ThetaY_10_15__1869->SetMinimum(0);
   S12S18_ThetaY_10_15__1869->SetMaximum(1.1);
   S12S18_ThetaY_10_15__1869->SetEntries(669);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1869->SetLineColor(ci);
   S12S18_ThetaY_10_15__1869->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1869->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__1869->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__1869->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__1869->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1869->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1869->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1869->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__1869->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__1869->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1869->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1869->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1869->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1869->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1869->Draw("AE");
   
   TH1D *ThetaY_10_15__1870 = new TH1D("ThetaY_10_15__1870","",630,-1575,1575);
   ThetaY_10_15__1870->SetBinContent(312,0.02101202);
   ThetaY_10_15__1870->SetBinContent(313,0.4136403);
   ThetaY_10_15__1870->SetBinContent(314,0.8361445);
   ThetaY_10_15__1870->SetBinContent(315,0.9857475);
   ThetaY_10_15__1870->SetBinContent(316,1);
   ThetaY_10_15__1870->SetBinContent(317,0.836017);
   ThetaY_10_15__1870->SetBinContent(318,0.4130345);
   ThetaY_10_15__1870->SetBinContent(319,0.02158595);
   ThetaY_10_15__1870->SetBinError(312,0.0008185121);
   ThetaY_10_15__1870->SetBinError(313,0.003631638);
   ThetaY_10_15__1870->SetBinError(314,0.005163354);
   ThetaY_10_15__1870->SetBinError(315,0.005606271);
   ThetaY_10_15__1870->SetBinError(316,0.005646654);
   ThetaY_10_15__1870->SetBinError(317,0.00516296);
   ThetaY_10_15__1870->SetBinError(318,0.003628978);
   ThetaY_10_15__1870->SetBinError(319,0.0008296153);
   ThetaY_10_15__1870->SetEntries(141986);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1870->SetLineColor(ci);
   ThetaY_10_15__1870->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1870->SetMarkerColor(ci);
   ThetaY_10_15__1870->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1870->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1870->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1870->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1870->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1870->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1870->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1870->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1870->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1870->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1870->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1870->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1870->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1870->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1870->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1870->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1870->Draw("AEsame");
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
   
   Double_t _fx3624[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3624[8] = {
   0.4783096,
   0.8261007,
   0.8654223,
   0.9176007,
   1,
   0.4508095,
   0.01216636,
   0};
   Double_t _felx3624[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3624[8] = {
   0.3092376,
   0.1001903,
   0.07223089,
   0.06852792,
   0.0710518,
   0.05201197,
   0.01006472,
   0};
   Double_t _fehx3624[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3624[8] = {
   0.6330784,
   0.1131551,
   0.07852964,
   0.07384969,
   0.07629129,
   0.05839142,
   0.02798043,
   0.4291661};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3624,_fy3624,_felx3624,_fehx3624,_fely3624,_fehy3624);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3624 = new TH1F("Graph_Graph3624","",100,-100,100);
   Graph_Graph3624->SetMinimum(0);
   Graph_Graph3624->SetMaximum(1.5);
   Graph_Graph3624->SetDirectory(0);
   Graph_Graph3624->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3624->SetLineColor(ci);
   Graph_Graph3624->GetXaxis()->SetRange(1,100);
   Graph_Graph3624->GetXaxis()->CenterTitle(true);
   Graph_Graph3624->GetXaxis()->SetLabelFont(42);
   Graph_Graph3624->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3624->GetXaxis()->SetTitleFont(42);
   Graph_Graph3624->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3624->GetYaxis()->CenterTitle(true);
   Graph_Graph3624->GetYaxis()->SetLabelFont(42);
   Graph_Graph3624->GetYaxis()->SetTitleFont(42);
   Graph_Graph3624->GetZaxis()->SetLabelFont(42);
   Graph_Graph3624->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3624->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3624);
   
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
   
   TH2D *ThetaY_vs_Y_10_15__1871 = new TH2D("ThetaY_vs_Y_10_15__1871","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8127,659);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8153,12973);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8179,26224);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8205,30916);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8231,31363);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8257,26220);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8283,12954);
   ThetaY_vs_Y_10_15__1871->SetBinContent(8309,677);
   ThetaY_vs_Y_10_15__1871->SetEntries(141986);
   ThetaY_vs_Y_10_15__1871->SetContour(20);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(1,1568.15);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(2,3136.3);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(3,4704.45);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(4,6272.6);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(5,7840.75);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(6,9408.9);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(7,10977.05);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(8,12545.2);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(9,14113.35);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(10,15681.5);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(11,17249.65);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(12,18817.8);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(13,20385.95);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(14,21954.1);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(15,23522.25);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(16,25090.4);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(17,26658.55);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(18,28226.7);
   ThetaY_vs_Y_10_15__1871->SetContourLevel(19,29794.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1871->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1871->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1871->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1871->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1871->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1871->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1871->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1871->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1871->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1871->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1871->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1871->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1871->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1871->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1871->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1871->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
