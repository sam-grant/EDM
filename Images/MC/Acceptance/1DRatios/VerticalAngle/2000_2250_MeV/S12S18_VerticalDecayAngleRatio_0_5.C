void S12S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__1521 = new TH1D("S12S18_ThetaY_0_5__1521","",630,-1575,1575);
   S12S18_ThetaY_0_5__1521->SetBinContent(311,0.028);
   S12S18_ThetaY_0_5__1521->SetBinContent(312,0.308);
   S12S18_ThetaY_0_5__1521->SetBinContent(313,0.814);
   S12S18_ThetaY_0_5__1521->SetBinContent(314,0.878);
   S12S18_ThetaY_0_5__1521->SetBinContent(315,1);
   S12S18_ThetaY_0_5__1521->SetBinContent(316,0.902);
   S12S18_ThetaY_0_5__1521->SetBinContent(317,0.908);
   S12S18_ThetaY_0_5__1521->SetBinContent(318,0.678);
   S12S18_ThetaY_0_5__1521->SetBinContent(319,0.1);
   S12S18_ThetaY_0_5__1521->SetBinContent(320,0.002);
   S12S18_ThetaY_0_5__1521->SetBinError(311,0.007483315);
   S12S18_ThetaY_0_5__1521->SetBinError(312,0.02481935);
   S12S18_ThetaY_0_5__1521->SetBinError(313,0.04034848);
   S12S18_ThetaY_0_5__1521->SetBinError(314,0.04190465);
   S12S18_ThetaY_0_5__1521->SetBinError(315,0.04472136);
   S12S18_ThetaY_0_5__1521->SetBinError(316,0.04247352);
   S12S18_ThetaY_0_5__1521->SetBinError(317,0.04261455);
   S12S18_ThetaY_0_5__1521->SetBinError(318,0.03682391);
   S12S18_ThetaY_0_5__1521->SetBinError(319,0.01414214);
   S12S18_ThetaY_0_5__1521->SetBinError(320,0.002);
   S12S18_ThetaY_0_5__1521->SetMinimum(0);
   S12S18_ThetaY_0_5__1521->SetMaximum(1.1);
   S12S18_ThetaY_0_5__1521->SetEntries(2809);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1521->SetLineColor(ci);
   S12S18_ThetaY_0_5__1521->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1521->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__1521->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__1521->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__1521->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1521->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1521->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1521->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__1521->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__1521->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1521->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1521->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1521->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1521->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1521->Draw("AE");
   
   TH1D *ThetaY_0_5__1522 = new TH1D("ThetaY_0_5__1522","",630,-1575,1575);
   ThetaY_0_5__1522->SetBinContent(310,0.001560603);
   ThetaY_0_5__1522->SetBinContent(311,0.1995145);
   ThetaY_0_5__1522->SetBinContent(312,0.6101266);
   ThetaY_0_5__1522->SetBinContent(313,0.8156581);
   ThetaY_0_5__1522->SetBinContent(314,0.9451014);
   ThetaY_0_5__1522->SetBinContent(315,1);
   ThetaY_0_5__1522->SetBinContent(316,0.9930813);
   ThetaY_0_5__1522->SetBinContent(317,0.949922);
   ThetaY_0_5__1522->SetBinContent(318,0.825091);
   ThetaY_0_5__1522->SetBinContent(319,0.5996705);
   ThetaY_0_5__1522->SetBinContent(320,0.2012485);
   ThetaY_0_5__1522->SetBinContent(321,0.001508583);
   ThetaY_0_5__1522->SetBinError(310,0.000164502);
   ThetaY_0_5__1522->SetBinError(311,0.001859997);
   ThetaY_0_5__1522->SetBinError(312,0.003252633);
   ThetaY_0_5__1522->SetBinError(313,0.00376079);
   ThetaY_0_5__1522->SetBinError(314,0.004048221);
   ThetaY_0_5__1522->SetBinError(315,0.004164137);
   ThetaY_0_5__1522->SetBinError(316,0.004149707);
   ThetaY_0_5__1522->SetBinError(317,0.004058532);
   ThetaY_0_5__1522->SetBinError(318,0.003782474);
   ThetaY_0_5__1522->SetBinError(319,0.003224641);
   ThetaY_0_5__1522->SetBinError(320,0.001868062);
   ThetaY_0_5__1522->SetBinError(321,0.0001617371);
   ThetaY_0_5__1522->SetEntries(411907);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1522->SetLineColor(ci);
   ThetaY_0_5__1522->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1522->SetMarkerColor(ci);
   ThetaY_0_5__1522->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1522->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1522->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1522->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1522->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1522->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1522->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1522->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1522->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1522->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1522->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1522->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1522->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1522->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1522->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1522->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1522->Draw("AEsame");
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
   
   Double_t _fx3508[12] = {
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
   Double_t _fy3508[12] = {
   0,
   0.1403407,
   0.5048133,
   0.9979672,
   0.9290008,
   1,
   0.9082841,
   0.955868,
   0.8217275,
   0.1667582,
   0.009937963,
   0};
   Double_t _felx3508[12] = {
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
   Double_t _fely3508[12] = {
   0,
   0.03707603,
   0.04072309,
   0.04966003,
   0.04449965,
   0.04489942,
   0.04292123,
   0.04502964,
   0.04476627,
   0.02352069,
   0.008221278,
   0};
   Double_t _fehx3508[12] = {
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
   Double_t _fehy3508[12] = {
   2.383668,
   0.04846097,
   0.04414985,
   0.05219599,
   0.04668489,
   0.04696292,
   0.04499983,
   0.04720345,
   0.04727511,
   0.02709836,
   0.02285586,
   2.466737};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3508,_fy3508,_felx3508,_fehx3508,_fely3508,_fehy3508);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3508 = new TH1F("Graph_Graph3508","",100,-100,100);
   Graph_Graph3508->SetMinimum(0);
   Graph_Graph3508->SetMaximum(1.5);
   Graph_Graph3508->SetDirectory(0);
   Graph_Graph3508->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3508->SetLineColor(ci);
   Graph_Graph3508->GetXaxis()->SetRange(1,100);
   Graph_Graph3508->GetXaxis()->CenterTitle(true);
   Graph_Graph3508->GetXaxis()->SetLabelFont(42);
   Graph_Graph3508->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3508->GetXaxis()->SetTitleFont(42);
   Graph_Graph3508->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3508->GetYaxis()->CenterTitle(true);
   Graph_Graph3508->GetYaxis()->SetLabelFont(42);
   Graph_Graph3508->GetYaxis()->SetTitleFont(42);
   Graph_Graph3508->GetZaxis()->SetLabelFont(42);
   Graph_Graph3508->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3508->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3508);
   
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
   
   TH2D *ThetaY_vs_Y_0_5__1523 = new TH2D("ThetaY_vs_Y_0_5__1523","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8073,90);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8099,11506);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8125,35186);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8151,47039);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8177,54504);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8203,57670);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8229,57271);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8255,54782);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8281,47583);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8307,34583);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8333,11606);
   ThetaY_vs_Y_0_5__1523->SetBinContent(8359,87);
   ThetaY_vs_Y_0_5__1523->SetEntries(411907);
   ThetaY_vs_Y_0_5__1523->SetContour(20);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(1,2883.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(2,5767);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(3,8650.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(4,11534);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(5,14417.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(6,17301);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(7,20184.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(8,23068);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(9,25951.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(10,28835);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(11,31718.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(12,34602);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(13,37485.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(14,40369);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(15,43252.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(16,46136);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(17,49019.5);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(18,51903);
   ThetaY_vs_Y_0_5__1523->SetContourLevel(19,54786.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1523->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1523->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1523->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1523->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1523->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1523->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1523->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1523->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1523->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1523->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1523->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1523->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1523->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1523->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1523->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1523->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_0_5","Reco vertices","lpf");
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
