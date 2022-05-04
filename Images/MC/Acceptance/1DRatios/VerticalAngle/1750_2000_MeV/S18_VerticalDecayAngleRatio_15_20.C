void S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.08579095,125,1.630028);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__1302 = new TH1D("S18_ThetaY_15_20__1302","",630,-1575,1575);
   S18_ThetaY_15_20__1302->SetBinContent(310,0.137931);
   S18_ThetaY_15_20__1302->SetBinContent(311,0.4758621);
   S18_ThetaY_15_20__1302->SetBinContent(312,1);
   S18_ThetaY_15_20__1302->SetBinContent(313,0.9655172);
   S18_ThetaY_15_20__1302->SetBinContent(314,1.186207);
   S18_ThetaY_15_20__1302->SetBinContent(315,1.234483);
   S18_ThetaY_15_20__1302->SetBinContent(316,1.255172);
   S18_ThetaY_15_20__1302->SetBinContent(317,0.9448276);
   S18_ThetaY_15_20__1302->SetBinContent(318,0.3172414);
   S18_ThetaY_15_20__1302->SetBinContent(319,0.0137931);
   S18_ThetaY_15_20__1302->SetBinError(310,0.03084232);
   S18_ThetaY_15_20__1302->SetBinError(311,0.05728706);
   S18_ThetaY_15_20__1302->SetBinError(312,0.08304548);
   S18_ThetaY_15_20__1302->SetBinError(313,0.0816011);
   S18_ThetaY_15_20__1302->SetBinError(314,0.09044743);
   S18_ThetaY_15_20__1302->SetBinError(315,0.09226957);
   S18_ThetaY_15_20__1302->SetBinError(316,0.09303957);
   S18_ThetaY_15_20__1302->SetBinError(317,0.08072207);
   S18_ThetaY_15_20__1302->SetBinError(318,0.04677469);
   S18_ThetaY_15_20__1302->SetBinError(319,0.009753197);
   S18_ThetaY_15_20__1302->SetMinimum(0);
   S18_ThetaY_15_20__1302->SetMaximum(1.458446);
   S18_ThetaY_15_20__1302->SetEntries(1092);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1302->SetLineColor(ci);
   S18_ThetaY_15_20__1302->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1302->SetMarkerColor(ci);
   S18_ThetaY_15_20__1302->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__1302->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__1302->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1302->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1302->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1302->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__1302->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__1302->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1302->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1302->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1302->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1302->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1302->Draw("AE");
   
   TH1D *ThetaY_15_20__1303 = new TH1D("ThetaY_15_20__1303","",630,-1575,1575);
   ThetaY_15_20__1303->SetBinContent(309,0.0005140372);
   ThetaY_15_20__1303->SetBinContent(310,0.1946224);
   ThetaY_15_20__1303->SetBinContent(311,0.7084618);
   ThetaY_15_20__1303->SetBinContent(312,1);
   ThetaY_15_20__1303->SetBinContent(313,1.181297);
   ThetaY_15_20__1303->SetBinContent(314,1.292764);
   ThetaY_15_20__1303->SetBinContent(315,1.316093);
   ThetaY_15_20__1303->SetBinContent(316,1.32586);
   ThetaY_15_20__1303->SetBinContent(317,1.268723);
   ThetaY_15_20__1303->SetBinContent(318,1.184342);
   ThetaY_15_20__1303->SetBinContent(319,1.006248);
   ThetaY_15_20__1303->SetBinContent(320,0.711032);
   ThetaY_15_20__1303->SetBinContent(321,0.1946619);
   ThetaY_15_20__1303->SetBinContent(322,0.0005931198);
   ThetaY_15_20__1303->SetBinError(309,0.0001425683);
   ThetaY_15_20__1303->SetBinError(310,0.002774099);
   ThetaY_15_20__1303->SetBinError(311,0.00529278);
   ThetaY_15_20__1303->SetBinError(312,0.006288189);
   ThetaY_15_20__1303->SetBinError(313,0.006834475);
   ThetaY_15_20__1303->SetBinError(314,0.007149657);
   ThetaY_15_20__1303->SetBinError(315,0.00721388);
   ThetaY_15_20__1303->SetBinError(316,0.007240598);
   ThetaY_15_20__1303->SetBinError(317,0.007082865);
   ThetaY_15_20__1303->SetBinError(318,0.006843276);
   ThetaY_15_20__1303->SetBinError(319,0.006307801);
   ThetaY_15_20__1303->SetBinError(320,0.005302372);
   ThetaY_15_20__1303->SetBinError(321,0.002774381);
   ThetaY_15_20__1303->SetBinError(322,0.0001531429);
   ThetaY_15_20__1303->SetEntries(287932);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1303->SetLineColor(ci);
   ThetaY_15_20__1303->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1303->SetMarkerColor(ci);
   ThetaY_15_20__1303->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1303->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1303->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1303->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1303->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1303->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1303->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1303->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1303->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1303->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1303->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1303->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1303->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1303->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1303->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1303->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1303->Draw("AEsame");
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
   
   Double_t _fx3435[14] = {
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
   Double_t _fy3435[14] = {
   0,
   0.7087111,
   0.6716834,
   1,
   0.8173366,
   0.9175742,
   0.9379903,
   0.9466855,
   0.7447076,
   0.2678631,
   0.01370747,
   0,
   0,
   0};
   Double_t _felx3435[14] = {
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
   Double_t _fely3435[14] = {
   0,
   0.1574413,
   0.08081775,
   0.08318551,
   0.06915534,
   0.07007892,
   0.07023024,
   0.0702975,
   0.06368151,
   0.03937972,
   0.00885397,
   0,
   0,
   0};
   Double_t _fehx3435[14] = {
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
   Double_t _fehy3435[14] = {
   26.5345,
   0.1970538,
   0.0911854,
   0.09041445,
   0.07527218,
   0.07564933,
   0.07569857,
   0.0757242,
   0.06937679,
   0.04564459,
   0.01808083,
   0.01785764,
   0.06523657,
   22.77574};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3435,_fy3435,_felx3435,_fehx3435,_fely3435,_fehy3435);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3435 = new TH1F("Graph_Graph3435","",100,-100,100);
   Graph_Graph3435->SetMinimum(0);
   Graph_Graph3435->SetMaximum(1.5);
   Graph_Graph3435->SetDirectory(0);
   Graph_Graph3435->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3435->SetLineColor(ci);
   Graph_Graph3435->GetXaxis()->SetRange(1,100);
   Graph_Graph3435->GetXaxis()->CenterTitle(true);
   Graph_Graph3435->GetXaxis()->SetLabelFont(42);
   Graph_Graph3435->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3435->GetXaxis()->SetTitleFont(42);
   Graph_Graph3435->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3435->GetYaxis()->CenterTitle(true);
   Graph_Graph3435->GetYaxis()->SetLabelFont(42);
   Graph_Graph3435->GetYaxis()->SetTitleFont(42);
   Graph_Graph3435->GetZaxis()->SetLabelFont(42);
   Graph_Graph3435->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3435->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3435);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.458446,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1304 = new TH2D("ThetaY_vs_Y_15_20__1304","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8050,13);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8076,4922);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8102,17917);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8128,25290);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8154,29875);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8180,32694);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8206,33284);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8232,33531);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8258,32086);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8284,29952);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8310,25448);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8336,17982);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8362,4923);
   ThetaY_vs_Y_15_20__1304->SetBinContent(8388,15);
   ThetaY_vs_Y_15_20__1304->SetEntries(287932);
   ThetaY_vs_Y_15_20__1304->SetContour(20);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(1,1676.55);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(2,3353.1);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(3,5029.65);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(4,6706.2);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(5,8382.75);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(6,10059.3);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(7,11735.85);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(8,13412.4);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(9,15088.95);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(10,16765.5);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(11,18442.05);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(12,20118.6);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(13,21795.15);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(14,23471.7);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(15,25148.25);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(16,26824.8);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(17,28501.35);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(18,30177.9);
   ThetaY_vs_Y_15_20__1304->SetContourLevel(19,31854.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1304->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1304->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1304->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1304->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1304->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1304->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1304->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1304->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1304->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1304->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1304->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1304->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1304->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1304->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1304->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1304->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
