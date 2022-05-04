void S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-2.968383,125,56.39927);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__1785 = new TH1D("S18_ThetaY_mI35_mI30__1785","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__1785->SetBinContent(315,7);
   S18_ThetaY_mI35_mI30__1785->SetBinContent(316,5);
   S18_ThetaY_mI35_mI30__1785->SetBinContent(317,14);
   S18_ThetaY_mI35_mI30__1785->SetBinContent(318,6);
   S18_ThetaY_mI35_mI30__1785->SetBinContent(319,1);
   S18_ThetaY_mI35_mI30__1785->SetBinError(315,2.645751);
   S18_ThetaY_mI35_mI30__1785->SetBinError(316,2.236068);
   S18_ThetaY_mI35_mI30__1785->SetBinError(317,3.741657);
   S18_ThetaY_mI35_mI30__1785->SetBinError(318,2.44949);
   S18_ThetaY_mI35_mI30__1785->SetBinError(319,1);
   S18_ThetaY_mI35_mI30__1785->SetMinimum(0);
   S18_ThetaY_mI35_mI30__1785->SetMaximum(50.4625);
   S18_ThetaY_mI35_mI30__1785->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1785->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__1785->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1785->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__1785->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__1785->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__1785->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1785->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1785->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1785->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__1785->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__1785->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1785->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1785->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1785->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1785->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1785->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1786 = new TH1D("ThetaY_mI35_mI30__1786","",630,-1575,1575);
   ThetaY_mI35_mI30__1786->SetBinContent(312,0.9296875);
   ThetaY_mI35_mI30__1786->SetBinContent(313,19.01562);
   ThetaY_mI35_mI30__1786->SetBinContent(314,38.76562);
   ThetaY_mI35_mI30__1786->SetBinContent(315,45.07031);
   ThetaY_mI35_mI30__1786->SetBinContent(316,45.875);
   ThetaY_mI35_mI30__1786->SetBinContent(317,37.94531);
   ThetaY_mI35_mI30__1786->SetBinContent(318,19.0625);
   ThetaY_mI35_mI30__1786->SetBinContent(319,1);
   ThetaY_mI35_mI30__1786->SetBinError(312,0.08522431);
   ThetaY_mI35_mI30__1786->SetBinError(313,0.3854343);
   ThetaY_mI35_mI30__1786->SetBinError(314,0.5503239);
   ThetaY_mI35_mI30__1786->SetBinError(315,0.5933901);
   ThetaY_mI35_mI30__1786->SetBinError(316,0.5986639);
   ThetaY_mI35_mI30__1786->SetBinError(317,0.5444702);
   ThetaY_mI35_mI30__1786->SetBinError(318,0.385909);
   ThetaY_mI35_mI30__1786->SetBinError(319,0.08838835);
   ThetaY_mI35_mI30__1786->SetEntries(26581);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1786->SetLineColor(ci);
   ThetaY_mI35_mI30__1786->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1786->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1786->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1786->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1786->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1786->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1786->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1786->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1786->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1786->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1786->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1786->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1786->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1786->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1786->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1786->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1786->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1786->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1786->Draw("AEsame");
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
   
   Double_t _fx3596[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3596[8] = {
   0,
   0,
   0,
   0.1553129,
   0.1089918,
   0.368952,
   0.3147541,
   1};
   Double_t _felx3596[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3596[8] = {
   0,
   0,
   0,
   0.05730693,
   0.04709439,
   0.09754768,
   0.1249803,
   0.8284706};
   Double_t _fehx3596[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3596[8] = {
   1.995656,
   0.09685288,
   0.0474999,
   0.08373139,
   0.073785,
   0.1275452,
   0.1883635,
   2.329302};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3596,_fy3596,_felx3596,_fehx3596,_fely3596,_fehy3596);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3596 = new TH1F("Graph_Graph3596","",100,-100,100);
   Graph_Graph3596->SetMinimum(0);
   Graph_Graph3596->SetMaximum(1.5);
   Graph_Graph3596->SetDirectory(0);
   Graph_Graph3596->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3596->SetLineColor(ci);
   Graph_Graph3596->GetXaxis()->SetRange(1,100);
   Graph_Graph3596->GetXaxis()->CenterTitle(true);
   Graph_Graph3596->GetXaxis()->SetLabelFont(42);
   Graph_Graph3596->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3596->GetXaxis()->SetTitleFont(42);
   Graph_Graph3596->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3596->GetYaxis()->CenterTitle(true);
   Graph_Graph3596->GetYaxis()->SetLabelFont(42);
   Graph_Graph3596->GetYaxis()->SetTitleFont(42);
   Graph_Graph3596->GetZaxis()->SetLabelFont(42);
   Graph_Graph3596->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3596->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3596);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,50.4625,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1787 = new TH2D("ThetaY_vs_Y_mI35_mI30__1787","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8118,119);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8144,2434);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8170,4962);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8196,5769);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8222,5872);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8248,4857);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8274,2440);
   ThetaY_vs_Y_mI35_mI30__1787->SetBinContent(8300,128);
   ThetaY_vs_Y_mI35_mI30__1787->SetEntries(26581);
   ThetaY_vs_Y_mI35_mI30__1787->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(1,293.6);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(2,587.2);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(3,880.8);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(4,1174.4);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(5,1468);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(6,1761.6);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(7,2055.2);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(8,2348.8);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(9,2642.4);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(10,2936);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(11,3229.6);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(12,3523.2);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(13,3816.8);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(14,4110.4);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(15,4404);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(16,4697.6);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(17,4991.2);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(18,5284.8);
   ThetaY_vs_Y_mI35_mI30__1787->SetContourLevel(19,5578.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1787->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1787->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1787->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1787->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1787->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1787->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1787->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1787->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1787->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1787->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1787->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1787->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1787->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1787->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1787->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1787->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
