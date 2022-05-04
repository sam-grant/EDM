void S12S18_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06658387,125,1.265094);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__1158 = new TH1D("S12S18_ThetaY_mI35_mI30__1158","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(314,0.07438017);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(315,0.7768595);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(316,0.9338843);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(317,1);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(318,0.8099174);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(319,0.6859504);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(320,0.6694215);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(321,0.338843);
   S12S18_ThetaY_mI35_mI30__1158->SetBinContent(322,0.1239669);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(314,0.02479339);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(315,0.08012694);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(316,0.08785244);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(317,0.09090909);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(318,0.08181401);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(319,0.07529284);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(320,0.07438017);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(321,0.05291838);
   S12S18_ThetaY_mI35_mI30__1158->SetBinError(322,0.03200813);
   S12S18_ThetaY_mI35_mI30__1158->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__1158->SetMaximum(1.131926);
   S12S18_ThetaY_mI35_mI30__1158->SetEntries(655);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1158->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__1158->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1158->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__1158->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__1158->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__1158->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1158->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1158->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1158->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__1158->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__1158->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1158->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1158->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1158->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1158->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1158->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1159 = new TH1D("ThetaY_mI35_mI30__1159","",630,-1575,1575);
   ThetaY_mI35_mI30__1159->SetBinContent(308,0.000713691);
   ThetaY_mI35_mI30__1159->SetBinContent(309,0.1378613);
   ThetaY_mI35_mI30__1159->SetBinContent(310,0.4956584);
   ThetaY_mI35_mI30__1159->SetBinContent(311,0.72737);
   ThetaY_mI35_mI30__1159->SetBinContent(312,0.8676103);
   ThetaY_mI35_mI30__1159->SetBinContent(313,0.9434995);
   ThetaY_mI35_mI30__1159->SetBinContent(314,1.017961);
   ThetaY_mI35_mI30__1159->SetBinContent(315,1.029023);
   ThetaY_mI35_mI30__1159->SetBinContent(316,0.9833472);
   ThetaY_mI35_mI30__1159->SetBinContent(317,1);
   ThetaY_mI35_mI30__1159->SetBinContent(318,0.9649102);
   ThetaY_mI35_mI30__1159->SetBinContent(319,0.8758178);
   ThetaY_mI35_mI30__1159->SetBinContent(320,0.720471);
   ThetaY_mI35_mI30__1159->SetBinContent(321,0.4923278);
   ThetaY_mI35_mI30__1159->SetBinContent(322,0.1461877);
   ThetaY_mI35_mI30__1159->SetBinContent(323,0.000713691);
   ThetaY_mI35_mI30__1159->SetBinError(308,0.0002913631);
   ThetaY_mI35_mI30__1159->SetBinError(309,0.004049493);
   ThetaY_mI35_mI30__1159->SetBinError(310,0.007678399);
   ThetaY_mI35_mI30__1159->SetBinError(311,0.00930159);
   ThetaY_mI35_mI30__1159->SetBinError(312,0.01015879);
   ThetaY_mI35_mI30__1159->SetBinError(313,0.01059376);
   ThetaY_mI35_mI30__1159->SetBinError(314,0.01100386);
   ThetaY_mI35_mI30__1159->SetBinError(315,0.01106349);
   ThetaY_mI35_mI30__1159->SetBinError(316,0.01081516);
   ThetaY_mI35_mI30__1159->SetBinError(317,0.01090635);
   ThetaY_mI35_mI30__1159->SetBinError(318,0.01071329);
   ThetaY_mI35_mI30__1159->SetBinError(319,0.01020672);
   ThetaY_mI35_mI30__1159->SetBinError(320,0.009257373);
   ThetaY_mI35_mI30__1159->SetBinError(321,0.007652559);
   ThetaY_mI35_mI30__1159->SetBinError(322,0.004169989);
   ThetaY_mI35_mI30__1159->SetBinError(323,0.0002913631);
   ThetaY_mI35_mI30__1159->SetEntries(87462);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1159->SetLineColor(ci);
   ThetaY_mI35_mI30__1159->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1159->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1159->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1159->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1159->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1159->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1159->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1159->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1159->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1159->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1159->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1159->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1159->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1159->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1159->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1159->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1159->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1159->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1159->Draw("AEsame");
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
   
   Double_t _fx3387[16] = {
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
   37.5};
   Double_t _fy3387[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.07306778,
   0.7549483,
   0.9496994,
   1,
   0.8393707,
   0.7832113,
   0.9291442,
   0.6882467,
   0.8479984,
   0};
   Double_t _felx3387[16] = {
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
   Double_t _fely3387[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02390823,
   0.07814501,
   0.08981019,
   0.09142902,
   0.08514903,
   0.08627164,
   0.103703,
   0.1075624,
   0.2177233,
   0};
   Double_t _fehx3387[16] = {
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
   Double_t _fehy3387[16] = {
   24.95137,
   0.1104526,
   0.03070344,
   0.02092105,
   0.01753895,
   0.01612807,
   0.03339483,
   0.0866952,
   0.09874533,
   0.1002086,
   0.09427015,
   0.09635476,
   0.1159974,
   0.1258778,
   0.2826069,
   24.95137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3387,_fy3387,_felx3387,_fehx3387,_fely3387,_fehy3387);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3387 = new TH1F("Graph_Graph3387","",100,-100,100);
   Graph_Graph3387->SetMinimum(0);
   Graph_Graph3387->SetMaximum(1.5);
   Graph_Graph3387->SetDirectory(0);
   Graph_Graph3387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3387->SetLineColor(ci);
   Graph_Graph3387->GetXaxis()->SetRange(1,100);
   Graph_Graph3387->GetXaxis()->CenterTitle(true);
   Graph_Graph3387->GetXaxis()->SetLabelFont(42);
   Graph_Graph3387->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3387->GetXaxis()->SetTitleFont(42);
   Graph_Graph3387->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3387->GetYaxis()->CenterTitle(true);
   Graph_Graph3387->GetYaxis()->SetLabelFont(42);
   Graph_Graph3387->GetYaxis()->SetTitleFont(42);
   Graph_Graph3387->GetZaxis()->SetLabelFont(42);
   Graph_Graph3387->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3387->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3387);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.131926,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1160 = new TH2D("ThetaY_vs_Y_mI35_mI30__1160","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8014,6);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8040,1159);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8066,4167);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8092,6115);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8118,7294);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8144,7932);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8170,8558);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8196,8651);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8222,8267);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8248,8407);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8274,8112);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8300,7363);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8326,6057);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8352,4139);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8378,1229);
   ThetaY_vs_Y_mI35_mI30__1160->SetBinContent(8404,6);
   ThetaY_vs_Y_mI35_mI30__1160->SetEntries(87462);
   ThetaY_vs_Y_mI35_mI30__1160->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(1,432.55);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(2,865.1);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(3,1297.65);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(4,1730.2);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(5,2162.75);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(6,2595.3);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(7,3027.85);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(8,3460.4);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(9,3892.95);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(10,4325.5);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(11,4758.05);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(12,5190.6);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(13,5623.15);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(14,6055.7);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(15,6488.25);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(16,6920.8);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(17,7353.35);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(18,7785.9);
   ThetaY_vs_Y_mI35_mI30__1160->SetContourLevel(19,8218.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1160->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1160->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1160->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1160->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1160->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1160->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1160->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1160->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1160->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1160->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1160->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1160->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1160->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1160->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1160->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1160->Draw("COL");
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
