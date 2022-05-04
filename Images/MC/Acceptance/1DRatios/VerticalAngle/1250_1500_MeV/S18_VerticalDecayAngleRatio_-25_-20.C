void S18_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-10.97157,125,208.4598);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__936 = new TH1D("S18_ThetaY_mI25_mI20__936","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__936->SetBinContent(312,3);
   S18_ThetaY_mI25_mI20__936->SetBinContent(313,62);
   S18_ThetaY_mI25_mI20__936->SetBinContent(314,133);
   S18_ThetaY_mI25_mI20__936->SetBinContent(315,144);
   S18_ThetaY_mI25_mI20__936->SetBinContent(316,146);
   S18_ThetaY_mI25_mI20__936->SetBinContent(317,148);
   S18_ThetaY_mI25_mI20__936->SetBinContent(318,145);
   S18_ThetaY_mI25_mI20__936->SetBinContent(319,132);
   S18_ThetaY_mI25_mI20__936->SetBinContent(320,106);
   S18_ThetaY_mI25_mI20__936->SetBinContent(321,117);
   S18_ThetaY_mI25_mI20__936->SetBinContent(322,57);
   S18_ThetaY_mI25_mI20__936->SetBinContent(323,25);
   S18_ThetaY_mI25_mI20__936->SetBinContent(324,1);
   S18_ThetaY_mI25_mI20__936->SetBinError(312,1.732051);
   S18_ThetaY_mI25_mI20__936->SetBinError(313,7.874008);
   S18_ThetaY_mI25_mI20__936->SetBinError(314,11.53256);
   S18_ThetaY_mI25_mI20__936->SetBinError(315,12);
   S18_ThetaY_mI25_mI20__936->SetBinError(316,12.08305);
   S18_ThetaY_mI25_mI20__936->SetBinError(317,12.16553);
   S18_ThetaY_mI25_mI20__936->SetBinError(318,12.04159);
   S18_ThetaY_mI25_mI20__936->SetBinError(319,11.48913);
   S18_ThetaY_mI25_mI20__936->SetBinError(320,10.29563);
   S18_ThetaY_mI25_mI20__936->SetBinError(321,10.81665);
   S18_ThetaY_mI25_mI20__936->SetBinError(322,7.549834);
   S18_ThetaY_mI25_mI20__936->SetBinError(323,5);
   S18_ThetaY_mI25_mI20__936->SetBinError(324,1);
   S18_ThetaY_mI25_mI20__936->SetMinimum(0);
   S18_ThetaY_mI25_mI20__936->SetMaximum(186.5167);
   S18_ThetaY_mI25_mI20__936->SetEntries(1219);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__936->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__936->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__936->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__936->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__936->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__936->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__936->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__936->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__936->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__936->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__936->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__936->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__936->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__936->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__936->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__936->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__937 = new TH1D("ThetaY_mI25_mI20__937","",630,-1575,1575);
   ThetaY_mI25_mI20__937->SetBinContent(307,0.7651515);
   ThetaY_mI25_mI20__937->SetBinContent(308,29.51515);
   ThetaY_mI25_mI20__937->SetBinContent(309,85.2803);
   ThetaY_mI25_mI20__937->SetBinContent(310,118.4773);
   ThetaY_mI25_mI20__937->SetBinContent(311,141.6515);
   ThetaY_mI25_mI20__937->SetBinContent(312,153.3712);
   ThetaY_mI25_mI20__937->SetBinContent(313,162.4848);
   ThetaY_mI25_mI20__937->SetBinContent(314,167);
   ThetaY_mI25_mI20__937->SetBinContent(315,169.5606);
   ThetaY_mI25_mI20__937->SetBinContent(316,168.5758);
   ThetaY_mI25_mI20__937->SetBinContent(317,166.5227);
   ThetaY_mI25_mI20__937->SetBinContent(318,162.7348);
   ThetaY_mI25_mI20__937->SetBinContent(319,156.803);
   ThetaY_mI25_mI20__937->SetBinContent(320,140.803);
   ThetaY_mI25_mI20__937->SetBinContent(321,117.6742);
   ThetaY_mI25_mI20__937->SetBinContent(322,85.67424);
   ThetaY_mI25_mI20__937->SetBinContent(323,30.95455);
   ThetaY_mI25_mI20__937->SetBinContent(324,1);
   ThetaY_mI25_mI20__937->SetBinError(307,0.07613542);
   ThetaY_mI25_mI20__937->SetBinError(308,0.4728632);
   ThetaY_mI25_mI20__937->SetBinError(309,0.8037804);
   ThetaY_mI25_mI20__937->SetBinError(310,0.9473938);
   ThetaY_mI25_mI20__937->SetBinError(311,1.035914);
   ThetaY_mI25_mI20__937->SetBinError(312,1.077916);
   ThetaY_mI25_mI20__937->SetBinError(313,1.10948);
   ThetaY_mI25_mI20__937->SetBinError(314,1.12479);
   ThetaY_mI25_mI20__937->SetBinError(315,1.13338);
   ThetaY_mI25_mI20__937->SetBinError(316,1.130084);
   ThetaY_mI25_mI20__937->SetBinError(317,1.123181);
   ThetaY_mI25_mI20__937->SetBinError(318,1.110333);
   ThetaY_mI25_mI20__937->SetBinError(319,1.089909);
   ThetaY_mI25_mI20__937->SetBinError(320,1.032807);
   ThetaY_mI25_mI20__937->SetBinError(321,0.9441777);
   ThetaY_mI25_mI20__937->SetBinError(322,0.8056347);
   ThetaY_mI25_mI20__937->SetBinError(323,0.4842563);
   ThetaY_mI25_mI20__937->SetBinError(324,0.08703883);
   ThetaY_mI25_mI20__937->SetEntries(271768);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__937->SetLineColor(ci);
   ThetaY_mI25_mI20__937->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__937->SetMarkerColor(ci);
   ThetaY_mI25_mI20__937->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__937->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__937->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__937->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__937->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__937->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__937->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__937->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__937->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__937->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__937->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__937->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__937->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__937->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__937->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__937->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__937->Draw("AEsame");
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
   
   Double_t _fx3313[18] = {
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
   Double_t _fy3313[18] = {
   0,
   0,
   0,
   0,
   0,
   0.01956039,
   0.381574,
   0.7964072,
   0.8492539,
   0.8660795,
   0.8887676,
   0.89102,
   0.8418205,
   0.7528247,
   0.9942703,
   0.6653108,
   0.8076358,
   1};
   Double_t _felx3313[18] = {
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
   Double_t _fely3313[18] = {
   0,
   0,
   0,
   0,
   0,
   0.01064602,
   0.04839761,
   0.0691766,
   0.07091442,
   0.07182803,
   0.07321729,
   0.07415715,
   0.07340942,
   0.07321128,
   0.09213097,
   0.08808069,
   0.1609113,
   0.8284337};
   Double_t _fehx3313[18] = {
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
   Double_t _fehy3313[18] = {
   2.428151,
   0.06239022,
   0.02158965,
   0.01553994,
   0.01299748,
   0.01902973,
   0.05496573,
   0.07546655,
   0.07710188,
   0.07805077,
   0.07951621,
   0.08060547,
   0.08011203,
   0.0807067,
   0.1010974,
   0.1006009,
   0.1967282,
   2.328395};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3313,_fy3313,_felx3313,_fehx3313,_fely3313,_fehy3313);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3313 = new TH1F("Graph_Graph3313","",100,-100,100);
   Graph_Graph3313->SetMinimum(0);
   Graph_Graph3313->SetMaximum(1.5);
   Graph_Graph3313->SetDirectory(0);
   Graph_Graph3313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3313->SetLineColor(ci);
   Graph_Graph3313->GetXaxis()->SetRange(1,100);
   Graph_Graph3313->GetXaxis()->CenterTitle(true);
   Graph_Graph3313->GetXaxis()->SetLabelFont(42);
   Graph_Graph3313->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3313->GetXaxis()->SetTitleFont(42);
   Graph_Graph3313->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3313->GetYaxis()->CenterTitle(true);
   Graph_Graph3313->GetYaxis()->SetLabelFont(42);
   Graph_Graph3313->GetYaxis()->SetTitleFont(42);
   Graph_Graph3313->GetZaxis()->SetLabelFont(42);
   Graph_Graph3313->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3313->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3313);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,186.5167,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__938 = new TH2D("ThetaY_vs_Y_mI25_mI20__938","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(7990,101);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8016,3896);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8042,11257);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8068,15639);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8094,18698);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8120,20245);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8146,21448);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8172,22044);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8198,22382);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8224,22252);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8250,21981);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8276,21481);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8302,20698);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8328,18586);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8354,15533);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8380,11309);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8406,4086);
   ThetaY_vs_Y_mI25_mI20__938->SetBinContent(8432,132);
   ThetaY_vs_Y_mI25_mI20__938->SetEntries(271768);
   ThetaY_vs_Y_mI25_mI20__938->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(1,1119.1);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(2,2238.2);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(3,3357.3);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(4,4476.4);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(5,5595.5);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(6,6714.6);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(7,7833.7);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(8,8952.8);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(9,10071.9);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(10,11191);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(11,12310.1);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(12,13429.2);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(13,14548.3);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(14,15667.4);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(15,16786.5);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(16,17905.6);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(17,19024.7);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(18,20143.8);
   ThetaY_vs_Y_mI25_mI20__938->SetContourLevel(19,21262.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__938->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__938->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__938->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__938->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__938->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__938->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__938->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__938->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__938->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__938->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__938->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__938->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__938->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__938->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__938->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__938->Draw("COL");
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
