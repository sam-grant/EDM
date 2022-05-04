void S12S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-9.781544,125,185.8493);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__1701 = new TH1D("S12S18_ThetaY_15_20__1701","",630,-1575,1575);
   S12S18_ThetaY_15_20__1701->SetBinContent(311,1);
   S12S18_ThetaY_15_20__1701->SetBinContent(312,12.75);
   S12S18_ThetaY_15_20__1701->SetBinContent(313,27.5);
   S12S18_ThetaY_15_20__1701->SetBinContent(314,40.25);
   S12S18_ThetaY_15_20__1701->SetBinContent(315,46);
   S12S18_ThetaY_15_20__1701->SetBinContent(316,45.75);
   S12S18_ThetaY_15_20__1701->SetBinContent(317,22.75);
   S12S18_ThetaY_15_20__1701->SetBinError(311,0.5);
   S12S18_ThetaY_15_20__1701->SetBinError(312,1.785357);
   S12S18_ThetaY_15_20__1701->SetBinError(313,2.622022);
   S12S18_ThetaY_15_20__1701->SetBinError(314,3.172144);
   S12S18_ThetaY_15_20__1701->SetBinError(315,3.391165);
   S12S18_ThetaY_15_20__1701->SetBinError(316,3.381937);
   S12S18_ThetaY_15_20__1701->SetBinError(317,2.384848);
   S12S18_ThetaY_15_20__1701->SetMinimum(0);
   S12S18_ThetaY_15_20__1701->SetMaximum(166.2862);
   S12S18_ThetaY_15_20__1701->SetEntries(784);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1701->SetLineColor(ci);
   S12S18_ThetaY_15_20__1701->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1701->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__1701->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__1701->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__1701->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1701->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1701->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1701->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__1701->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__1701->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1701->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1701->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1701->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1701->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1701->Draw("AE");
   
   TH1D *ThetaY_15_20__1702 = new TH1D("ThetaY_15_20__1702","",630,-1575,1575);
   ThetaY_15_20__1702->SetBinContent(311,1);
   ThetaY_15_20__1702->SetBinContent(312,44.78307);
   ThetaY_15_20__1702->SetBinContent(313,107.1217);
   ThetaY_15_20__1702->SetBinContent(314,136.709);
   ThetaY_15_20__1702->SetBinContent(315,148.619);
   ThetaY_15_20__1702->SetBinContent(316,151.1693);
   ThetaY_15_20__1702->SetBinContent(317,135.7037);
   ThetaY_15_20__1702->SetBinContent(318,106.7566);
   ThetaY_15_20__1702->SetBinContent(319,44.44974);
   ThetaY_15_20__1702->SetBinContent(320,0.973545);
   ThetaY_15_20__1702->SetBinError(311,0.0727393);
   ThetaY_15_20__1702->SetBinError(312,0.4867725);
   ThetaY_15_20__1702->SetBinError(313,0.7528489);
   ThetaY_15_20__1702->SetBinError(314,0.8504869);
   ThetaY_15_20__1702->SetBinError(315,0.8867605);
   ThetaY_15_20__1702->SetBinError(316,0.8943364);
   ThetaY_15_20__1702->SetBinError(317,0.8473541);
   ThetaY_15_20__1702->SetBinError(318,0.7515649);
   ThetaY_15_20__1702->SetBinError(319,0.4849575);
   ThetaY_15_20__1702->SetBinError(320,0.07177069);
   ThetaY_15_20__1702->SetEntries(165807);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1702->SetLineColor(ci);
   ThetaY_15_20__1702->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1702->SetMarkerColor(ci);
   ThetaY_15_20__1702->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1702->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1702->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1702->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1702->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1702->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1702->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1702->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1702->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1702->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1702->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1702->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1702->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1702->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1702->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1702->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1702->Draw("AEsame");
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
   
   Double_t _fx3568[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3568[10] = {
   1,
   0.2847058,
   0.2567174,
   0.294421,
   0.3095162,
   0.3026408,
   0.1676447,
   0,
   0,
   0};
   Double_t _felx3568[10] = {
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
   Double_t _fely3568[10] = {
   0.4825667,
   0.03985291,
   0.0245055,
   0.02325118,
   0.02287124,
   0.02242249,
   0.01757235,
   0,
   0,
   0};
   Double_t _fehx3568[10] = {
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
   Double_t _fehy3568[10] = {
   0.8056925,
   0.04586957,
   0.02696567,
   0.0251651,
   0.024628,
   0.0241495,
   0.01951916,
   0.004311456,
   0.01035565,
   0.4751354};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3568,_fy3568,_felx3568,_fehx3568,_fely3568,_fehy3568);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3568 = new TH1F("Graph_Graph3568","",100,-100,100);
   Graph_Graph3568->SetMinimum(0);
   Graph_Graph3568->SetMaximum(1.5);
   Graph_Graph3568->SetDirectory(0);
   Graph_Graph3568->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3568->SetLineColor(ci);
   Graph_Graph3568->GetXaxis()->SetRange(1,100);
   Graph_Graph3568->GetXaxis()->CenterTitle(true);
   Graph_Graph3568->GetXaxis()->SetLabelFont(42);
   Graph_Graph3568->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3568->GetXaxis()->SetTitleFont(42);
   Graph_Graph3568->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3568->GetYaxis()->CenterTitle(true);
   Graph_Graph3568->GetYaxis()->SetLabelFont(42);
   Graph_Graph3568->GetYaxis()->SetTitleFont(42);
   Graph_Graph3568->GetZaxis()->SetLabelFont(42);
   Graph_Graph3568->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3568->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3568);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,166.2862,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1703 = new TH2D("ThetaY_vs_Y_15_20__1703","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8102,189);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8128,8464);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8154,20246);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8180,25838);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8206,28089);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8232,28571);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8258,25648);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8284,20177);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8310,8401);
   ThetaY_vs_Y_15_20__1703->SetBinContent(8336,184);
   ThetaY_vs_Y_15_20__1703->SetEntries(165807);
   ThetaY_vs_Y_15_20__1703->SetContour(20);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(1,1428.55);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(2,2857.1);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(3,4285.65);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(4,5714.2);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(5,7142.75);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(6,8571.3);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(7,9999.85);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(8,11428.4);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(9,12856.95);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(10,14285.5);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(11,15714.05);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(12,17142.6);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(13,18571.15);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(14,19999.7);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(15,21428.25);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(16,22856.8);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(17,24285.35);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(18,25713.9);
   ThetaY_vs_Y_15_20__1703->SetContourLevel(19,27142.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1703->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1703->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1703->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1703->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1703->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1703->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1703->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1703->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1703->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1703->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1703->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1703->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1703->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1703->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1703->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1703->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
