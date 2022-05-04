void S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06493374,125,1.233741);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__1287 = new TH1D("S18_ThetaY_mI10_mI5__1287","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(311,0.006644518);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(312,0.2624585);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(313,0.6744186);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(314,0.9435216);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(315,1);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(316,0.9401993);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(317,0.9667774);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(318,0.7973422);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(319,0.5681063);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(320,0.3023256);
   S18_ThetaY_mI10_mI5__1287->SetBinContent(321,0.02657807);
   S18_ThetaY_mI10_mI5__1287->SetBinError(311,0.004698384);
   S18_ThetaY_mI10_mI5__1287->SetBinError(312,0.02952889);
   S18_ThetaY_mI10_mI5__1287->SetBinError(313,0.04733491);
   S18_ThetaY_mI10_mI5__1287->SetBinError(314,0.05598771);
   S18_ThetaY_mI10_mI5__1287->SetBinError(315,0.05763904);
   S18_ThetaY_mI10_mI5__1287->SetBinError(316,0.05588905);
   S18_ThetaY_mI10_mI5__1287->SetBinError(317,0.0566735);
   S18_ThetaY_mI10_mI5__1287->SetBinError(318,0.05146822);
   S18_ThetaY_mI10_mI5__1287->SetBinError(319,0.04344418);
   S18_ThetaY_mI10_mI5__1287->SetBinError(320,0.03169233);
   S18_ThetaY_mI10_mI5__1287->SetBinError(321,0.009396768);
   S18_ThetaY_mI10_mI5__1287->SetMinimum(0);
   S18_ThetaY_mI10_mI5__1287->SetMaximum(1.103873);
   S18_ThetaY_mI10_mI5__1287->SetEntries(1953);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1287->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__1287->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1287->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__1287->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__1287->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__1287->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1287->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1287->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1287->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__1287->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__1287->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1287->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1287->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1287->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1287->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1287->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1288 = new TH1D("ThetaY_mI10_mI5__1288","",630,-1575,1575);
   ThetaY_mI10_mI5__1288->SetBinContent(309,0.0004719293);
   ThetaY_mI10_mI5__1288->SetBinContent(310,0.1458806);
   ThetaY_mI10_mI5__1288->SetBinContent(311,0.5322999);
   ThetaY_mI10_mI5__1288->SetBinContent(312,0.7624562);
   ThetaY_mI10_mI5__1288->SetBinContent(313,0.8881891);
   ThetaY_mI10_mI5__1288->SetBinContent(314,0.9625179);
   ThetaY_mI10_mI5__1288->SetBinContent(315,1);
   ThetaY_mI10_mI5__1288->SetBinContent(316,1.003521);
   ThetaY_mI10_mI5__1288->SetBinContent(317,0.9676184);
   ThetaY_mI10_mI5__1288->SetBinContent(318,0.8923094);
   ThetaY_mI10_mI5__1288->SetBinContent(319,0.7543608);
   ThetaY_mI10_mI5__1288->SetBinContent(320,0.5292324);
   ThetaY_mI10_mI5__1288->SetBinContent(321,0.1457717);
   ThetaY_mI10_mI5__1288->SetBinContent(322,0.0006352894);
   ThetaY_mI10_mI5__1288->SetBinError(309,9.255295e-05);
   ThetaY_mI10_mI5__1288->SetBinError(310,0.001627236);
   ThetaY_mI10_mI5__1288->SetBinError(311,0.003108351);
   ThetaY_mI10_mI5__1288->SetBinError(312,0.00372014);
   ThetaY_mI10_mI5__1288->SetBinError(313,0.004015175);
   ThetaY_mI10_mI5__1288->SetBinError(314,0.004179807);
   ThetaY_mI10_mI5__1288->SetBinError(315,0.004260414);
   ThetaY_mI10_mI5__1288->SetBinError(316,0.004267908);
   ThetaY_mI10_mI5__1288->SetBinError(317,0.004190867);
   ThetaY_mI10_mI5__1288->SetBinError(318,0.004024478);
   ThetaY_mI10_mI5__1288->SetBinError(319,0.003700338);
   ThetaY_mI10_mI5__1288->SetBinError(320,0.003099381);
   ThetaY_mI10_mI5__1288->SetBinError(321,0.001626629);
   ThetaY_mI10_mI5__1288->SetBinError(322,0.0001073835);
   ThetaY_mI10_mI5__1288->SetEntries(472988);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1288->SetLineColor(ci);
   ThetaY_mI10_mI5__1288->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1288->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1288->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1288->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1288->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1288->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1288->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1288->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1288->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1288->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1288->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1288->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1288->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1288->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1288->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1288->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1288->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1288->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1288->Draw("AEsame");
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
   
   Double_t _fx3430[14] = {
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
   Double_t _fy3430[14] = {
   0,
   0,
   0.01248266,
   0.3442276,
   0.7593187,
   0.9802639,
   1,
   0.9369002,
   0.9991309,
   0.8935715,
   0.7530963,
   0.571253,
   0.1823267,
   0};
   Double_t _felx3430[14] = {
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
   Double_t _fely3430[14] = {
   0,
   0,
   0.008062813,
   0.03868237,
   0.05335964,
   0.05828866,
   0.05776368,
   0.05580183,
   0.05869546,
   0.05777957,
   0.05765195,
   0.05986558,
   0.0631218,
   0};
   Double_t _fehx3430[14] = {
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
   Double_t _fehy3430[14] = {
   13.43019,
   0.04193191,
   0.01646505,
   0.04329524,
   0.05724909,
   0.0618633,
   0.06120185,
   0.05922972,
   0.0622504,
   0.06164342,
   0.06224533,
   0.06649617,
   0.08997995,
   9.88537};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3430,_fy3430,_felx3430,_fehx3430,_fely3430,_fehy3430);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3430 = new TH1F("Graph_Graph3430","",100,-100,100);
   Graph_Graph3430->SetMinimum(0);
   Graph_Graph3430->SetMaximum(1.5);
   Graph_Graph3430->SetDirectory(0);
   Graph_Graph3430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3430->SetLineColor(ci);
   Graph_Graph3430->GetXaxis()->SetRange(1,100);
   Graph_Graph3430->GetXaxis()->CenterTitle(true);
   Graph_Graph3430->GetXaxis()->SetLabelFont(42);
   Graph_Graph3430->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3430->GetXaxis()->SetTitleFont(42);
   Graph_Graph3430->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3430->GetYaxis()->CenterTitle(true);
   Graph_Graph3430->GetYaxis()->SetLabelFont(42);
   Graph_Graph3430->GetYaxis()->SetTitleFont(42);
   Graph_Graph3430->GetZaxis()->SetLabelFont(42);
   Graph_Graph3430->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3430->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3430);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.103873,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1289 = new TH2D("ThetaY_vs_Y_mI10_mI5__1289","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8045,26);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8071,8037);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8097,29326);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8123,42006);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8149,48933);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8175,53028);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8201,55093);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8227,55287);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8253,53309);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8279,49160);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8305,41560);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8331,29157);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8357,8031);
   ThetaY_vs_Y_mI10_mI5__1289->SetBinContent(8383,35);
   ThetaY_vs_Y_mI10_mI5__1289->SetEntries(472988);
   ThetaY_vs_Y_mI10_mI5__1289->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(1,2764.35);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(2,5528.7);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(3,8293.05);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(4,11057.4);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(5,13821.75);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(6,16586.1);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(7,19350.45);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(8,22114.8);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(9,24879.15);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(10,27643.5);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(11,30407.85);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(12,33172.2);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(13,35936.55);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(14,38700.9);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(15,41465.25);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(16,44229.6);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(17,46993.95);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(18,49758.3);
   ThetaY_vs_Y_mI10_mI5__1289->SetContourLevel(19,52522.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1289->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1289->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1289->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1289->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1289->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1289->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1289->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1289->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1289->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1289->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1289->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1289->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1289->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1289->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1289->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1289->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
