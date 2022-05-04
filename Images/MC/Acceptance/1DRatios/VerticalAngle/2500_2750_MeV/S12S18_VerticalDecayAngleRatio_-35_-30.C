void S12S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-2.968383,125,56.39927);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__1842 = new TH1D("S12S18_ThetaY_mI35_mI30__1842","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__1842->SetBinContent(315,8.5);
   S12S18_ThetaY_mI35_mI30__1842->SetBinContent(316,13);
   S12S18_ThetaY_mI35_mI30__1842->SetBinContent(317,12);
   S12S18_ThetaY_mI35_mI30__1842->SetBinContent(318,4.5);
   S12S18_ThetaY_mI35_mI30__1842->SetBinContent(319,1);
   S12S18_ThetaY_mI35_mI30__1842->SetBinError(315,2.061553);
   S12S18_ThetaY_mI35_mI30__1842->SetBinError(316,2.54951);
   S12S18_ThetaY_mI35_mI30__1842->SetBinError(317,2.44949);
   S12S18_ThetaY_mI35_mI30__1842->SetBinError(318,1.5);
   S12S18_ThetaY_mI35_mI30__1842->SetBinError(319,0.7071068);
   S12S18_ThetaY_mI35_mI30__1842->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__1842->SetMaximum(50.4625);
   S12S18_ThetaY_mI35_mI30__1842->SetEntries(78);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1842->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__1842->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1842->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__1842->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__1842->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__1842->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1842->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1842->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1842->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__1842->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__1842->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1842->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1842->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1842->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1842->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1842->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1843 = new TH1D("ThetaY_mI35_mI30__1843","",630,-1575,1575);
   ThetaY_mI35_mI30__1843->SetBinContent(312,0.9296875);
   ThetaY_mI35_mI30__1843->SetBinContent(313,19.01562);
   ThetaY_mI35_mI30__1843->SetBinContent(314,38.76562);
   ThetaY_mI35_mI30__1843->SetBinContent(315,45.07031);
   ThetaY_mI35_mI30__1843->SetBinContent(316,45.875);
   ThetaY_mI35_mI30__1843->SetBinContent(317,37.94531);
   ThetaY_mI35_mI30__1843->SetBinContent(318,19.0625);
   ThetaY_mI35_mI30__1843->SetBinContent(319,1);
   ThetaY_mI35_mI30__1843->SetBinError(312,0.08522431);
   ThetaY_mI35_mI30__1843->SetBinError(313,0.3854343);
   ThetaY_mI35_mI30__1843->SetBinError(314,0.5503239);
   ThetaY_mI35_mI30__1843->SetBinError(315,0.5933901);
   ThetaY_mI35_mI30__1843->SetBinError(316,0.5986639);
   ThetaY_mI35_mI30__1843->SetBinError(317,0.5444702);
   ThetaY_mI35_mI30__1843->SetBinError(318,0.385909);
   ThetaY_mI35_mI30__1843->SetBinError(319,0.08838835);
   ThetaY_mI35_mI30__1843->SetEntries(26581);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1843->SetLineColor(ci);
   ThetaY_mI35_mI30__1843->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1843->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1843->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1843->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1843->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1843->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1843->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1843->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1843->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1843->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1843->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1843->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1843->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1843->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1843->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1843->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1843->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1843->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1843->Draw("AEsame");
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
   
   Double_t _fx3615[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3615[8] = {
   0,
   0,
   0,
   0.1885942,
   0.2833787,
   0.3162446,
   0.2360656,
   1};
   Double_t _felx3615[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3615[8] = {
   0,
   0,
   0,
   0.0453499,
   0.05533312,
   0.06425231,
   0.07733374,
   0.6490468};
   Double_t _fehx3615[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3615[8] = {
   0.997828,
   0.04842644,
   0.02374995,
   0.05783996,
   0.06736998,
   0.0788678,
   0.1080982,
   1.342919};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3615,_fy3615,_felx3615,_fehx3615,_fely3615,_fehy3615);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3615 = new TH1F("Graph_Graph3615","",100,-100,100);
   Graph_Graph3615->SetMinimum(0);
   Graph_Graph3615->SetMaximum(1.5);
   Graph_Graph3615->SetDirectory(0);
   Graph_Graph3615->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3615->SetLineColor(ci);
   Graph_Graph3615->GetXaxis()->SetRange(1,100);
   Graph_Graph3615->GetXaxis()->CenterTitle(true);
   Graph_Graph3615->GetXaxis()->SetLabelFont(42);
   Graph_Graph3615->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3615->GetXaxis()->SetTitleFont(42);
   Graph_Graph3615->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3615->GetYaxis()->CenterTitle(true);
   Graph_Graph3615->GetYaxis()->SetLabelFont(42);
   Graph_Graph3615->GetYaxis()->SetTitleFont(42);
   Graph_Graph3615->GetZaxis()->SetLabelFont(42);
   Graph_Graph3615->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3615->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3615);
   
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1844 = new TH2D("ThetaY_vs_Y_mI35_mI30__1844","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8118,119);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8144,2434);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8170,4962);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8196,5769);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8222,5872);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8248,4857);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8274,2440);
   ThetaY_vs_Y_mI35_mI30__1844->SetBinContent(8300,128);
   ThetaY_vs_Y_mI35_mI30__1844->SetEntries(26581);
   ThetaY_vs_Y_mI35_mI30__1844->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(1,293.6);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(2,587.2);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(3,880.8);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(4,1174.4);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(5,1468);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(6,1761.6);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(7,2055.2);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(8,2348.8);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(9,2642.4);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(10,2936);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(11,3229.6);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(12,3523.2);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(13,3816.8);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(14,4110.4);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(15,4404);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(16,4697.6);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(17,4991.2);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(18,5284.8);
   ThetaY_vs_Y_mI35_mI30__1844->SetContourLevel(19,5578.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1844->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1844->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1844->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1844->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1844->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1844->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1844->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1844->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1844->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1844->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1844->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1844->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1844->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1844->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1844->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1844->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
