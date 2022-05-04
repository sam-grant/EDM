void S12S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06821958,125,1.296172);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__1518 = new TH1D("S12S18_ThetaY_mI5_0__1518","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(311,0.004319654);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(312,0.1490281);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(313,0.7149028);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(314,1);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(315,1.008639);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(316,0.9222462);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(317,0.9287257);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(318,0.8358531);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(319,0.3088553);
   S12S18_ThetaY_mI5_0__1518->SetBinContent(320,0.01511879);
   S12S18_ThetaY_mI5_0__1518->SetBinError(311,0.003054457);
   S12S18_ThetaY_mI5_0__1518->SetBinError(312,0.01794087);
   S12S18_ThetaY_mI5_0__1518->SetBinError(313,0.03929461);
   S12S18_ThetaY_mI5_0__1518->SetBinError(314,0.04647394);
   S12S18_ThetaY_mI5_0__1518->SetBinError(315,0.04667426);
   S12S18_ThetaY_mI5_0__1518->SetBinError(316,0.04463062);
   S12S18_ThetaY_mI5_0__1518->SetBinError(317,0.04478713);
   S12S18_ThetaY_mI5_0__1518->SetBinError(318,0.0424888);
   S12S18_ThetaY_mI5_0__1518->SetBinError(319,0.02582778);
   S12S18_ThetaY_mI5_0__1518->SetBinError(320,0.005714366);
   S12S18_ThetaY_mI5_0__1518->SetMinimum(0);
   S12S18_ThetaY_mI5_0__1518->SetMaximum(1.159733);
   S12S18_ThetaY_mI5_0__1518->SetEntries(2726);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1518->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__1518->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1518->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__1518->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__1518->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__1518->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1518->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1518->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1518->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__1518->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__1518->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1518->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1518->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1518->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1518->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1518->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1519 = new TH1D("ThetaY_mI5_0__1519","",630,-1575,1575);
   ThetaY_mI5_0__1519->SetBinContent(310,0.001681532);
   ThetaY_mI5_0__1519->SetBinContent(311,0.2075048);
   ThetaY_mI5_0__1519->SetBinContent(312,0.6401703);
   ThetaY_mI5_0__1519->SetBinContent(313,0.8595738);
   ThetaY_mI5_0__1519->SetBinContent(314,1);
   ThetaY_mI5_0__1519->SetBinContent(315,1.054303);
   ThetaY_mI5_0__1519->SetBinContent(316,1.046699);
   ThetaY_mI5_0__1519->SetBinContent(317,0.9906967);
   ThetaY_mI5_0__1519->SetBinContent(318,0.8684018);
   ThetaY_mI5_0__1519->SetBinContent(319,0.6428571);
   ThetaY_mI5_0__1519->SetBinContent(320,0.2136277);
   ThetaY_mI5_0__1519->SetBinContent(321,0.00206536);
   ThetaY_mI5_0__1519->SetBinError(310,0.0001753119);
   ThetaY_mI5_0__1519->SetBinError(311,0.001947479);
   ThetaY_mI5_0__1519->SetBinError(312,0.003420633);
   ThetaY_mI5_0__1519->SetBinError(313,0.003963695);
   ThetaY_mI5_0__1519->SetBinError(314,0.004275222);
   ThetaY_mI5_0__1519->SetBinError(315,0.004389766);
   ThetaY_mI5_0__1519->SetBinError(316,0.004373908);
   ThetaY_mI5_0__1519->SetBinError(317,0.004255289);
   ThetaY_mI5_0__1519->SetBinError(318,0.003983998);
   ThetaY_mI5_0__1519->SetBinError(319,0.003427804);
   ThetaY_mI5_0__1519->SetBinError(320,0.001976003);
   ThetaY_mI5_0__1519->SetBinError(321,0.0001942928);
   ThetaY_mI5_0__1519->SetEntries(411849);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1519->SetLineColor(ci);
   ThetaY_mI5_0__1519->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1519->SetMarkerColor(ci);
   ThetaY_mI5_0__1519->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1519->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1519->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1519->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1519->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1519->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1519->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1519->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1519->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1519->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1519->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1519->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1519->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1519->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1519->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1519->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1519->Draw("AEsame");
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
   
   Double_t _fx3507[12] = {
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
   Double_t _fy3507[12] = {
   0,
   0.02081713,
   0.2327944,
   0.8316945,
   1,
   0.9566887,
   0.8810997,
   0.937447,
   0.9625189,
   0.4804416,
   0.07077167,
   0};
   Double_t _felx3507[12] = {
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
   Double_t _fely3507[12] = {
   0,
   0.01344668,
   0.02798421,
   0.04585102,
   0.04665291,
   0.04443284,
   0.04278096,
   0.04536863,
   0.04910473,
   0.04021047,
   0.02610612,
   0};
   Double_t _fehx3507[12] = {
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
   Double_t _fehy3507[12] = {
   2.3885,
   0.02746195,
   0.03156972,
   0.04845227,
   0.04888278,
   0.04654684,
   0.04491114,
   0.04762016,
   0.05167726,
   0.04372667,
   0.038136,
   1.940996};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3507,_fy3507,_felx3507,_fehx3507,_fely3507,_fehy3507);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3507 = new TH1F("Graph_Graph3507","",100,-100,100);
   Graph_Graph3507->SetMinimum(0);
   Graph_Graph3507->SetMaximum(1.5);
   Graph_Graph3507->SetDirectory(0);
   Graph_Graph3507->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3507->SetLineColor(ci);
   Graph_Graph3507->GetXaxis()->SetRange(1,100);
   Graph_Graph3507->GetXaxis()->CenterTitle(true);
   Graph_Graph3507->GetXaxis()->SetLabelFont(42);
   Graph_Graph3507->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3507->GetXaxis()->SetTitleFont(42);
   Graph_Graph3507->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3507->GetYaxis()->CenterTitle(true);
   Graph_Graph3507->GetYaxis()->SetLabelFont(42);
   Graph_Graph3507->GetYaxis()->SetTitleFont(42);
   Graph_Graph3507->GetZaxis()->SetLabelFont(42);
   Graph_Graph3507->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3507->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3507);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.159733,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1520 = new TH2D("ThetaY_vs_Y_mI5_0__1520","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8072,92);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8098,11353);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8124,35025);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8150,47029);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8176,54712);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8202,57683);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8228,57267);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8254,54203);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8280,47512);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8306,35172);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8332,11688);
   ThetaY_vs_Y_mI5_0__1520->SetBinContent(8358,113);
   ThetaY_vs_Y_mI5_0__1520->SetEntries(411849);
   ThetaY_vs_Y_mI5_0__1520->SetContour(20);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(1,2884.15);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(2,5768.3);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(3,8652.45);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(4,11536.6);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(5,14420.75);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(6,17304.9);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(7,20189.05);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(8,23073.2);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(9,25957.35);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(10,28841.5);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(11,31725.65);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(12,34609.8);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(13,37493.95);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(14,40378.1);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(15,43262.25);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(16,46146.4);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(17,49030.55);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(18,51914.7);
   ThetaY_vs_Y_mI5_0__1520->SetContourLevel(19,54798.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1520->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1520->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1520->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1520->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1520->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1520->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1520->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1520->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1520->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1520->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1520->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1520->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1520->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1520->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1520->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1520->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-5_0","Reco vertices","lpf");
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
