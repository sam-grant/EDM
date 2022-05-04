void S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-11.71508,125,222.5866);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__966 = new TH1D("S18_ThetaY_25_30__966","",630,-1575,1575);
   S18_ThetaY_25_30__966->SetBinContent(307,1);
   S18_ThetaY_25_30__966->SetBinContent(308,21);
   S18_ThetaY_25_30__966->SetBinContent(309,50);
   S18_ThetaY_25_30__966->SetBinContent(310,64);
   S18_ThetaY_25_30__966->SetBinContent(311,94);
   S18_ThetaY_25_30__966->SetBinContent(312,76);
   S18_ThetaY_25_30__966->SetBinContent(313,101);
   S18_ThetaY_25_30__966->SetBinContent(314,97);
   S18_ThetaY_25_30__966->SetBinContent(315,79);
   S18_ThetaY_25_30__966->SetBinContent(316,96);
   S18_ThetaY_25_30__966->SetBinContent(317,63);
   S18_ThetaY_25_30__966->SetBinContent(318,2);
   S18_ThetaY_25_30__966->SetBinError(307,1);
   S18_ThetaY_25_30__966->SetBinError(308,4.582576);
   S18_ThetaY_25_30__966->SetBinError(309,7.071068);
   S18_ThetaY_25_30__966->SetBinError(310,8);
   S18_ThetaY_25_30__966->SetBinError(311,9.69536);
   S18_ThetaY_25_30__966->SetBinError(312,8.717798);
   S18_ThetaY_25_30__966->SetBinError(313,10.04988);
   S18_ThetaY_25_30__966->SetBinError(314,9.848858);
   S18_ThetaY_25_30__966->SetBinError(315,8.888194);
   S18_ThetaY_25_30__966->SetBinError(316,9.797959);
   S18_ThetaY_25_30__966->SetBinError(317,7.937254);
   S18_ThetaY_25_30__966->SetBinError(318,1.414214);
   S18_ThetaY_25_30__966->SetMinimum(0);
   S18_ThetaY_25_30__966->SetMaximum(199.1564);
   S18_ThetaY_25_30__966->SetEntries(744);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__966->SetLineColor(ci);
   S18_ThetaY_25_30__966->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__966->SetMarkerColor(ci);
   S18_ThetaY_25_30__966->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__966->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__966->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__966->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__966->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__966->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__966->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__966->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__966->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__966->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__966->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__966->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__966->Draw("AE");
   
   TH1D *ThetaY_25_30__967 = new TH1D("ThetaY_25_30__967","",630,-1575,1575);
   ThetaY_25_30__967->SetBinContent(307,1);
   ThetaY_25_30__967->SetBinContent(308,30.58974);
   ThetaY_25_30__967->SetBinContent(309,89.69231);
   ThetaY_25_30__967->SetBinContent(310,126.0897);
   ThetaY_25_30__967->SetBinContent(311,150.6538);
   ThetaY_25_30__967->SetBinContent(312,164.8205);
   ThetaY_25_30__967->SetBinContent(313,173.7051);
   ThetaY_25_30__967->SetBinContent(314,180.9872);
   ThetaY_25_30__967->SetBinContent(315,181.0513);
   ThetaY_25_30__967->SetBinContent(316,178.5256);
   ThetaY_25_30__967->SetBinContent(317,177.2308);
   ThetaY_25_30__967->SetBinContent(318,175.3718);
   ThetaY_25_30__967->SetBinContent(319,167.8462);
   ThetaY_25_30__967->SetBinContent(320,149.3974);
   ThetaY_25_30__967->SetBinContent(321,129.3205);
   ThetaY_25_30__967->SetBinContent(322,89);
   ThetaY_25_30__967->SetBinContent(323,31.46154);
   ThetaY_25_30__967->SetBinContent(324,1.141026);
   ThetaY_25_30__967->SetBinError(307,0.1132277);
   ThetaY_25_30__967->SetBinError(308,0.6262397);
   ThetaY_25_30__967->SetBinError(309,1.072335);
   ThetaY_25_30__967->SetBinError(310,1.27143);
   ThetaY_25_30__967->SetBinError(311,1.38977);
   ThetaY_25_30__967->SetBinError(312,1.453645);
   ThetaY_25_30__967->SetBinError(313,1.49231);
   ThetaY_25_30__967->SetBinError(314,1.523269);
   ThetaY_25_30__967->SetBinError(315,1.523539);
   ThetaY_25_30__967->SetBinError(316,1.512875);
   ThetaY_25_30__967->SetBinError(317,1.507378);
   ThetaY_25_30__967->SetBinError(318,1.499452);
   ThetaY_25_30__967->SetBinError(319,1.466927);
   ThetaY_25_30__967->SetBinError(320,1.383962);
   ThetaY_25_30__967->SetBinError(321,1.287616);
   ThetaY_25_30__967->SetBinError(322,1.068188);
   ThetaY_25_30__967->SetBinError(323,0.6351008);
   ThetaY_25_30__967->SetBinError(324,0.1209485);
   ThetaY_25_30__967->SetEntries(171435);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__967->SetLineColor(ci);
   ThetaY_25_30__967->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__967->SetMarkerColor(ci);
   ThetaY_25_30__967->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__967->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__967->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__967->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__967->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__967->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__967->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__967->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__967->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__967->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__967->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__967->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__967->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__967->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__967->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__967->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__967->Draw("AEsame");
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
   
   Double_t _fx3323[18] = {
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
   Double_t _fy3323[18] = {
   1,
   0.6865046,
   0.5574614,
   0.507575,
   0.6239469,
   0.4611077,
   0.5814451,
   0.5359496,
   0.4363405,
   0.5377379,
   0.3554688,
   0.01140434,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3323[18] = {
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
   Double_t _fely3323[18] = {
   0.8292463,
   0.1492291,
   0.07884726,
   0.06348312,
   0.06449432,
   0.05292983,
   0.05797284,
   0.05450793,
   0.04912317,
   0.05497352,
   0.04476577,
   0.007366486,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3323[18] = {
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
   Double_t _fehy3323[18] = {
   2.348533,
   0.1859033,
   0.09088743,
   0.07197434,
   0.07153822,
   0.05938923,
   0.06406746,
   0.06035929,
   0.05499515,
   0.06090723,
   0.0507961,
   0.01504408,
   0.01096928,
   0.01232395,
   0.01423741,
   0.02068838,
   0.05853854,
   1.630283};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3323,_fy3323,_felx3323,_fehx3323,_fely3323,_fehy3323);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3323 = new TH1F("Graph_Graph3323","",100,-100,100);
   Graph_Graph3323->SetMinimum(0);
   Graph_Graph3323->SetMaximum(1.5);
   Graph_Graph3323->SetDirectory(0);
   Graph_Graph3323->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3323->SetLineColor(ci);
   Graph_Graph3323->GetXaxis()->SetRange(1,100);
   Graph_Graph3323->GetXaxis()->CenterTitle(true);
   Graph_Graph3323->GetXaxis()->SetLabelFont(42);
   Graph_Graph3323->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3323->GetXaxis()->SetTitleFont(42);
   Graph_Graph3323->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3323->GetYaxis()->CenterTitle(true);
   Graph_Graph3323->GetYaxis()->SetLabelFont(42);
   Graph_Graph3323->GetYaxis()->SetTitleFont(42);
   Graph_Graph3323->GetZaxis()->SetLabelFont(42);
   Graph_Graph3323->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3323->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3323);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,199.1564,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__968 = new TH2D("ThetaY_vs_Y_25_30__968","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__968->SetBinContent(8000,78);
   ThetaY_vs_Y_25_30__968->SetBinContent(8026,2386);
   ThetaY_vs_Y_25_30__968->SetBinContent(8052,6996);
   ThetaY_vs_Y_25_30__968->SetBinContent(8078,9835);
   ThetaY_vs_Y_25_30__968->SetBinContent(8104,11751);
   ThetaY_vs_Y_25_30__968->SetBinContent(8130,12856);
   ThetaY_vs_Y_25_30__968->SetBinContent(8156,13549);
   ThetaY_vs_Y_25_30__968->SetBinContent(8182,14117);
   ThetaY_vs_Y_25_30__968->SetBinContent(8208,14122);
   ThetaY_vs_Y_25_30__968->SetBinContent(8234,13925);
   ThetaY_vs_Y_25_30__968->SetBinContent(8260,13824);
   ThetaY_vs_Y_25_30__968->SetBinContent(8286,13679);
   ThetaY_vs_Y_25_30__968->SetBinContent(8312,13092);
   ThetaY_vs_Y_25_30__968->SetBinContent(8338,11653);
   ThetaY_vs_Y_25_30__968->SetBinContent(8364,10087);
   ThetaY_vs_Y_25_30__968->SetBinContent(8390,6942);
   ThetaY_vs_Y_25_30__968->SetBinContent(8416,2454);
   ThetaY_vs_Y_25_30__968->SetBinContent(8442,89);
   ThetaY_vs_Y_25_30__968->SetEntries(171435);
   ThetaY_vs_Y_25_30__968->SetContour(20);
   ThetaY_vs_Y_25_30__968->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__968->SetContourLevel(1,706.1);
   ThetaY_vs_Y_25_30__968->SetContourLevel(2,1412.2);
   ThetaY_vs_Y_25_30__968->SetContourLevel(3,2118.3);
   ThetaY_vs_Y_25_30__968->SetContourLevel(4,2824.4);
   ThetaY_vs_Y_25_30__968->SetContourLevel(5,3530.5);
   ThetaY_vs_Y_25_30__968->SetContourLevel(6,4236.6);
   ThetaY_vs_Y_25_30__968->SetContourLevel(7,4942.7);
   ThetaY_vs_Y_25_30__968->SetContourLevel(8,5648.8);
   ThetaY_vs_Y_25_30__968->SetContourLevel(9,6354.9);
   ThetaY_vs_Y_25_30__968->SetContourLevel(10,7061);
   ThetaY_vs_Y_25_30__968->SetContourLevel(11,7767.1);
   ThetaY_vs_Y_25_30__968->SetContourLevel(12,8473.2);
   ThetaY_vs_Y_25_30__968->SetContourLevel(13,9179.3);
   ThetaY_vs_Y_25_30__968->SetContourLevel(14,9885.4);
   ThetaY_vs_Y_25_30__968->SetContourLevel(15,10591.5);
   ThetaY_vs_Y_25_30__968->SetContourLevel(16,11297.6);
   ThetaY_vs_Y_25_30__968->SetContourLevel(17,12003.7);
   ThetaY_vs_Y_25_30__968->SetContourLevel(18,12709.8);
   ThetaY_vs_Y_25_30__968->SetContourLevel(19,13415.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__968->SetLineColor(ci);
   ThetaY_vs_Y_25_30__968->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__968->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__968->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__968->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__968->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__968->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__968->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__968->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__968->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__968->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__968->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__968->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__968->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__968->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__968->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
