void S12S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4712213,125,8.953205);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__1194 = new TH1D("S12S18_ThetaY_25_30__1194","",630,-1575,1575);
   S12S18_ThetaY_25_30__1194->SetBinContent(309,1);
   S12S18_ThetaY_25_30__1194->SetBinContent(310,2.40625);
   S12S18_ThetaY_25_30__1194->SetBinContent(311,3.84375);
   S12S18_ThetaY_25_30__1194->SetBinContent(312,5.0625);
   S12S18_ThetaY_25_30__1194->SetBinContent(313,4.65625);
   S12S18_ThetaY_25_30__1194->SetBinContent(314,4.96875);
   S12S18_ThetaY_25_30__1194->SetBinContent(315,4.4375);
   S12S18_ThetaY_25_30__1194->SetBinContent(316,5.71875);
   S12S18_ThetaY_25_30__1194->SetBinContent(317,2.46875);
   S12S18_ThetaY_25_30__1194->SetBinContent(318,0.0625);
   S12S18_ThetaY_25_30__1194->SetBinError(309,0.1767767);
   S12S18_ThetaY_25_30__1194->SetBinError(310,0.2742176);
   S12S18_ThetaY_25_30__1194->SetBinError(311,0.3465793);
   S12S18_ThetaY_25_30__1194->SetBinError(312,0.3977476);
   S12S18_ThetaY_25_30__1194->SetBinError(313,0.3814549);
   S12S18_ThetaY_25_30__1194->SetBinError(314,0.3940475);
   S12S18_ThetaY_25_30__1194->SetBinError(315,0.3723867);
   S12S18_ThetaY_25_30__1194->SetBinError(316,0.4227422);
   S12S18_ThetaY_25_30__1194->SetBinError(317,0.2777561);
   S12S18_ThetaY_25_30__1194->SetBinError(318,0.04419417);
   S12S18_ThetaY_25_30__1194->SetMinimum(0);
   S12S18_ThetaY_25_30__1194->SetMaximum(8.010762);
   S12S18_ThetaY_25_30__1194->SetEntries(1108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1194->SetLineColor(ci);
   S12S18_ThetaY_25_30__1194->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1194->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__1194->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__1194->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__1194->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1194->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1194->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1194->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__1194->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__1194->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1194->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1194->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1194->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1194->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1194->Draw("AE");
   
   TH1D *ThetaY_25_30__1195 = new TH1D("ThetaY_25_30__1195","",630,-1575,1575);
   ThetaY_25_30__1195->SetBinContent(308,0.005979073);
   ThetaY_25_30__1195->SetBinContent(309,1);
   ThetaY_25_30__1195->SetBinContent(310,3.56851);
   ThetaY_25_30__1195->SetBinContent(311,5.134529);
   ThetaY_25_30__1195->SetBinContent(312,6.146487);
   ThetaY_25_30__1195->SetBinContent(313,6.778276);
   ThetaY_25_30__1195->SetBinContent(314,7.073742);
   ThetaY_25_30__1195->SetBinContent(315,7.282511);
   ThetaY_25_30__1195->SetBinContent(316,7.206776);
   ThetaY_25_30__1195->SetBinContent(317,7.075237);
   ThetaY_25_30__1195->SetBinContent(318,6.725461);
   ThetaY_25_30__1195->SetBinContent(319,6.252616);
   ThetaY_25_30__1195->SetBinContent(320,5.225212);
   ThetaY_25_30__1195->SetBinContent(321,3.606378);
   ThetaY_25_30__1195->SetBinContent(322,0.9940209);
   ThetaY_25_30__1195->SetBinContent(323,0.001993024);
   ThetaY_25_30__1195->SetBinError(308,0.00172601);
   ThetaY_25_30__1195->SetBinError(309,0.02232165);
   ThetaY_25_30__1195->SetBinError(310,0.04216672);
   ThetaY_25_30__1195->SetBinError(311,0.05057974);
   ThetaY_25_30__1195->SetBinError(312,0.05534008);
   ThetaY_25_30__1195->SetBinError(313,0.05811469);
   ThetaY_25_30__1195->SetBinError(314,0.05936779);
   ThetaY_25_30__1195->SetBinError(315,0.06023749);
   ThetaY_25_30__1195->SetBinError(316,0.05992345);
   ThetaY_25_30__1195->SetBinError(317,0.05937407);
   ThetaY_25_30__1195->SetBinError(318,0.05788784);
   ThetaY_25_30__1195->SetBinError(319,0.0558158);
   ThetaY_25_30__1195->SetBinError(320,0.05102444);
   ThetaY_25_30__1195->SetBinError(321,0.04238985);
   ThetaY_25_30__1195->SetBinError(322,0.02225482);
   ThetaY_25_30__1195->SetBinError(323,0.0009965122);
   ThetaY_25_30__1195->SetEntries(148674);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1195->SetLineColor(ci);
   ThetaY_25_30__1195->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1195->SetMarkerColor(ci);
   ThetaY_25_30__1195->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1195->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1195->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1195->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1195->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1195->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1195->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1195->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1195->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1195->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1195->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1195->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1195->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1195->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1195->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1195->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1195->Draw("AEsame");
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
   
   Double_t _fx3399[16] = {
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
   Double_t _fy3399[16] = {
   0,
   1,
   0.674301,
   0.7486081,
   0.8236412,
   0.6869372,
   0.7024217,
   0.6093365,
   0.793524,
   0.3489283,
   0.009293043,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3399[16] = {
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
   Double_t _fely3399[16] = {
   0,
   0.1772026,
   0.07708239,
   0.06780576,
   0.06506505,
   0.05651787,
   0.05595588,
   0.05131992,
   0.05897296,
   0.03928172,
   0.006002724,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3399[16] = {
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
   Double_t _fehy3399[16] = {
   10.39957,
   0.2118865,
   0.08645354,
   0.07425152,
   0.07042562,
   0.06137539,
   0.06060571,
   0.05583946,
   0.0635319,
   0.0439772,
   0.01225898,
   0.009201932,
   0.01101142,
   0.01595486,
   0.0579047,
   36.65777};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3399,_fy3399,_felx3399,_fehx3399,_fely3399,_fehy3399);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3399 = new TH1F("Graph_Graph3399","",100,-100,100);
   Graph_Graph3399->SetMinimum(0);
   Graph_Graph3399->SetMaximum(1.5);
   Graph_Graph3399->SetDirectory(0);
   Graph_Graph3399->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3399->SetLineColor(ci);
   Graph_Graph3399->GetXaxis()->SetRange(1,100);
   Graph_Graph3399->GetXaxis()->CenterTitle(true);
   Graph_Graph3399->GetXaxis()->SetLabelFont(42);
   Graph_Graph3399->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3399->GetXaxis()->SetTitleFont(42);
   Graph_Graph3399->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3399->GetYaxis()->CenterTitle(true);
   Graph_Graph3399->GetYaxis()->SetLabelFont(42);
   Graph_Graph3399->GetYaxis()->SetTitleFont(42);
   Graph_Graph3399->GetZaxis()->SetLabelFont(42);
   Graph_Graph3399->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3399->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3399);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,8.010762,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1196 = new TH2D("ThetaY_vs_Y_25_30__1196","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8026,12);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8052,2007);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8078,7162);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8104,10305);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8130,12336);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8156,13604);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8182,14197);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8208,14616);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8234,14464);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8260,14200);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8286,13498);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8312,12549);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8338,10487);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8364,7238);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8390,1995);
   ThetaY_vs_Y_25_30__1196->SetBinContent(8416,4);
   ThetaY_vs_Y_25_30__1196->SetEntries(148674);
   ThetaY_vs_Y_25_30__1196->SetContour(20);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(1,730.8);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(2,1461.6);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(3,2192.4);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(4,2923.2);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(5,3654);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(6,4384.8);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(7,5115.6);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(8,5846.4);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(9,6577.2);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(10,7308);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(11,8038.8);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(12,8769.6);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(13,9500.4);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(14,10231.2);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(15,10962);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(16,11692.8);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(17,12423.6);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(18,13154.4);
   ThetaY_vs_Y_25_30__1196->SetContourLevel(19,13885.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1196->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1196->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1196->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1196->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1196->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1196->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1196->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1196->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1196->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1196->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1196->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1196->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1196->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1196->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1196->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1196->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
