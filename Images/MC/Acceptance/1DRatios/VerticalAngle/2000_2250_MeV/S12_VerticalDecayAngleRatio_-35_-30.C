void S12_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0698444,125,1.327043);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__1386 = new TH1D("S12_ThetaY_mI35_mI30__1386","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(314,0.1315789);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(315,0.4736842);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(316,0.6578947);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(317,1);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(318,0.6842105);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(319,0.5263158);
   S12_ThetaY_mI35_mI30__1386->SetBinContent(320,0.1315789);
   S12_ThetaY_mI35_mI30__1386->SetBinError(314,0.05884389);
   S12_ThetaY_mI35_mI30__1386->SetBinError(315,0.1116484);
   S12_ThetaY_mI35_mI30__1386->SetBinError(316,0.1315789);
   S12_ThetaY_mI35_mI30__1386->SetBinError(317,0.1622214);
   S12_ThetaY_mI35_mI30__1386->SetBinError(318,0.1341847);
   S12_ThetaY_mI35_mI30__1386->SetBinError(319,0.1176878);
   S12_ThetaY_mI35_mI30__1386->SetBinError(320,0.05884389);
   S12_ThetaY_mI35_mI30__1386->SetMinimum(0);
   S12_ThetaY_mI35_mI30__1386->SetMaximum(1.187355);
   S12_ThetaY_mI35_mI30__1386->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1386->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__1386->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1386->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__1386->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__1386->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__1386->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1386->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1386->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1386->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__1386->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__1386->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1386->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1386->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1386->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1386->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1386->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1387 = new TH1D("ThetaY_mI35_mI30__1387","",630,-1575,1575);
   ThetaY_mI35_mI30__1387->SetBinContent(310,0.001717759);
   ThetaY_mI35_mI30__1387->SetBinContent(311,0.2100951);
   ThetaY_mI35_mI30__1387->SetBinContent(312,0.6421776);
   ThetaY_mI35_mI30__1387->SetBinContent(313,0.8707717);
   ThetaY_mI35_mI30__1387->SetBinContent(314,1.006475);
   ThetaY_mI35_mI30__1387->SetBinContent(315,1.079413);
   ThetaY_mI35_mI30__1387->SetBinContent(316,1.057479);
   ThetaY_mI35_mI30__1387->SetBinContent(317,1);
   ThetaY_mI35_mI30__1387->SetBinContent(318,0.8747357);
   ThetaY_mI35_mI30__1387->SetBinContent(319,0.6260571);
   ThetaY_mI35_mI30__1387->SetBinContent(320,0.2201374);
   ThetaY_mI35_mI30__1387->SetBinContent(321,0.001321353);
   ThetaY_mI35_mI30__1387->SetBinError(310,0.0004764206);
   ThetaY_mI35_mI30__1387->SetBinError(311,0.005268869);
   ThetaY_mI35_mI30__1387->SetBinError(312,0.009211641);
   ThetaY_mI35_mI30__1387->SetBinError(313,0.01072659);
   ThetaY_mI35_mI30__1387->SetBinError(314,0.01153217);
   ThetaY_mI35_mI30__1387->SetBinError(315,0.01194272);
   ThetaY_mI35_mI30__1387->SetBinError(316,0.01182076);
   ThetaY_mI35_mI30__1387->SetBinError(317,0.01149501);
   ThetaY_mI35_mI30__1387->SetBinError(318,0.01075098);
   ThetaY_mI35_mI30__1387->SetBinError(319,0.009095287);
   ThetaY_mI35_mI30__1387->SetBinError(320,0.005393322);
   ThetaY_mI35_mI30__1387->SetBinError(321,0.0004178485);
   ThetaY_mI35_mI30__1387->SetEntries(57444);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1387->SetLineColor(ci);
   ThetaY_mI35_mI30__1387->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1387->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1387->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1387->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1387->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1387->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1387->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1387->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1387->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1387->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1387->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1387->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1387->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1387->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1387->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1387->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1387->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1387->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1387->Draw("AEsame");
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
   
   Double_t _fx3463[12] = {
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
   Double_t _fy3463[12] = {
   0,
   0,
   0,
   0,
   0.1307325,
   0.4388349,
   0.6221351,
   1,
   0.7821911,
   0.8406834,
   0.5977128,
   0};
   Double_t _felx3463[12] = {
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
   Double_t _fely3463[12] = {
   0,
   0,
   0,
   0,
   0.05648376,
   0.1025722,
   0.1237749,
   0.1618991,
   0.1526956,
   0.1867731,
   0.2584966,
   0};
   Double_t _fehx3463[12] = {
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
   Double_t _fehy3463[12] = {
   30.29896,
   0.2307336,
   0.0754575,
   0.05564571,
   0.08848849,
   0.1299098,
   0.1512624,
   0.1905271,
   0.1858995,
   0.2337715,
   0.4053667,
   40.2575};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3463,_fy3463,_felx3463,_fehx3463,_fely3463,_fehy3463);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3463 = new TH1F("Graph_Graph3463","",100,-100,100);
   Graph_Graph3463->SetMinimum(0);
   Graph_Graph3463->SetMaximum(1.5);
   Graph_Graph3463->SetDirectory(0);
   Graph_Graph3463->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3463->SetLineColor(ci);
   Graph_Graph3463->GetXaxis()->SetRange(1,100);
   Graph_Graph3463->GetXaxis()->CenterTitle(true);
   Graph_Graph3463->GetXaxis()->SetLabelFont(42);
   Graph_Graph3463->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3463->GetXaxis()->SetTitleFont(42);
   Graph_Graph3463->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3463->GetYaxis()->CenterTitle(true);
   Graph_Graph3463->GetYaxis()->SetLabelFont(42);
   Graph_Graph3463->GetYaxis()->SetTitleFont(42);
   Graph_Graph3463->GetZaxis()->SetLabelFont(42);
   Graph_Graph3463->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3463->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3463);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.187355,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1388 = new TH2D("ThetaY_vs_Y_mI35_mI30__1388","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8066,13);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8092,1590);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8118,4860);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8144,6590);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8170,7617);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8196,8169);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8222,8003);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8248,7568);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8274,6620);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8300,4738);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8326,1666);
   ThetaY_vs_Y_mI35_mI30__1388->SetBinContent(8352,10);
   ThetaY_vs_Y_mI35_mI30__1388->SetEntries(57444);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1388->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1388->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1388->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1388->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1388->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1388->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1388->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1388->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1388->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1388->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1388->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1388->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1388->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1388->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1388->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1388->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
