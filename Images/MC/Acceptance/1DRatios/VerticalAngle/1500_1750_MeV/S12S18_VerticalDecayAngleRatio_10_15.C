void S12S18_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.09039282,125,1.717464);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__1185 = new TH1D("S12S18_ThetaY_10_15__1185","",630,-1575,1575);
   S12S18_ThetaY_10_15__1185->SetBinContent(309,0.05172414);
   S12S18_ThetaY_10_15__1185->SetBinContent(310,0.4975369);
   S12S18_ThetaY_10_15__1185->SetBinContent(311,1);
   S12S18_ThetaY_10_15__1185->SetBinContent(312,1.165025);
   S12S18_ThetaY_10_15__1185->SetBinContent(313,1.253695);
   S12S18_ThetaY_10_15__1185->SetBinContent(314,1.352217);
   S12S18_ThetaY_10_15__1185->SetBinContent(315,1.312808);
   S12S18_ThetaY_10_15__1185->SetBinContent(316,1.302956);
   S12S18_ThetaY_10_15__1185->SetBinContent(317,1.317734);
   S12S18_ThetaY_10_15__1185->SetBinContent(318,1.118227);
   S12S18_ThetaY_10_15__1185->SetBinContent(319,0.2684729);
   S12S18_ThetaY_10_15__1185->SetBinContent(320,0.002463054);
   S12S18_ThetaY_10_15__1185->SetBinError(309,0.01128713);
   S12S18_ThetaY_10_15__1185->SetBinError(310,0.03500658);
   S12S18_ThetaY_10_15__1185->SetBinError(311,0.04962917);
   S12S18_ThetaY_10_15__1185->SetBinError(312,0.05356789);
   S12S18_ThetaY_10_15__1185->SetBinError(313,0.05556904);
   S12S18_ThetaY_10_15__1185->SetBinError(314,0.0577112);
   S12S18_ThetaY_10_15__1185->SetBinError(315,0.05686402);
   S12S18_ThetaY_10_15__1185->SetBinError(316,0.05665025);
   S12S18_ThetaY_10_15__1185->SetBinError(317,0.05697061);
   S12S18_ThetaY_10_15__1185->SetBinError(318,0.05248097);
   S12S18_ThetaY_10_15__1185->SetBinError(319,0.02571504);
   S12S18_ThetaY_10_15__1185->SetBinError(320,0.002463054);
   S12S18_ThetaY_10_15__1185->SetMinimum(0);
   S12S18_ThetaY_10_15__1185->SetMaximum(1.536678);
   S12S18_ThetaY_10_15__1185->SetEntries(4321);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1185->SetLineColor(ci);
   S12S18_ThetaY_10_15__1185->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1185->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__1185->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__1185->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__1185->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1185->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1185->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1185->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__1185->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__1185->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1185->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1185->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1185->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1185->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1185->Draw("AE");
   
   TH1D *ThetaY_10_15__1186 = new TH1D("ThetaY_10_15__1186","",630,-1575,1575);
   ThetaY_10_15__1186->SetBinContent(308,0.001334182);
   ThetaY_10_15__1186->SetBinContent(309,0.1909397);
   ThetaY_10_15__1186->SetBinContent(310,0.6853452);
   ThetaY_10_15__1186->SetBinContent(311,1);
   ThetaY_10_15__1186->SetBinContent(312,1.182631);
   ThetaY_10_15__1186->SetBinContent(313,1.297765);
   ThetaY_10_15__1186->SetBinContent(314,1.361685);
   ThetaY_10_15__1186->SetBinContent(315,1.39698);
   ThetaY_10_15__1186->SetBinContent(316,1.391492);
   ThetaY_10_15__1186->SetBinContent(317,1.364383);
   ThetaY_10_15__1186->SetBinContent(318,1.291246);
   ThetaY_10_15__1186->SetBinContent(319,1.192031);
   ThetaY_10_15__1186->SetBinContent(320,1.000788);
   ThetaY_10_15__1186->SetBinContent(321,0.684193);
   ThetaY_10_15__1186->SetBinContent(322,0.1913945);
   ThetaY_10_15__1186->SetBinContent(323,0.001425149);
   ThetaY_10_15__1186->SetBinError(308,0.0002011356);
   ThetaY_10_15__1186->SetBinError(309,0.002406187);
   ThetaY_10_15__1186->SetBinError(310,0.004558647);
   ThetaY_10_15__1186->SetBinError(311,0.005506571);
   ThetaY_10_15__1186->SetBinError(312,0.005988333);
   ThetaY_10_15__1186->SetBinError(313,0.006273058);
   ThetaY_10_15__1186->SetBinError(314,0.006425687);
   ThetaY_10_15__1186->SetBinError(315,0.006508431);
   ThetaY_10_15__1186->SetBinError(316,0.006495634);
   ThetaY_10_15__1186->SetBinError(317,0.006432051);
   ThetaY_10_15__1186->SetBinError(318,0.006257282);
   ThetaY_10_15__1186->SetBinError(319,0.006012085);
   ThetaY_10_15__1186->SetBinError(320,0.005508741);
   ThetaY_10_15__1186->SetBinError(321,0.004554813);
   ThetaY_10_15__1186->SetBinError(322,0.002409051);
   ThetaY_10_15__1186->SetBinError(323,0.0002078794);
   ThetaY_10_15__1186->SetEntries(469411);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1186->SetLineColor(ci);
   ThetaY_10_15__1186->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1186->SetMarkerColor(ci);
   ThetaY_10_15__1186->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1186->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1186->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1186->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1186->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1186->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1186->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1186->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1186->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1186->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1186->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1186->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1186->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1186->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1186->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1186->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1186->Draw("AEsame");
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
   
   Double_t _fx3396[16] = {
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
   Double_t _fy3396[16] = {
   0,
   0.2708925,
   0.7259654,
   1,
   0.9851122,
   0.9660411,
   0.9930469,
   0.9397472,
   0.9363734,
   0.9658092,
   0.8660059,
   0.225223,
   0.002461114,
   0,
   0,
   0};
   Double_t _felx3396[16] = {
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
   Double_t _fely3396[16] = {
   0,
   0.05873267,
   0.05126291,
   0.04991243,
   0.04555268,
   0.04305826,
   0.04262705,
   0.04092648,
   0.0409325,
   0.0419895,
   0.04084425,
   0.0215689,
   0.002035959,
   0,
   0,
   0};
   Double_t _fehx3396[16] = {
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
   Double_t _fehy3396[16] = {
   3.470844,
   0.07310417,
   0.05501964,
   0.0524697,
   0.04771064,
   0.04502265,
   0.04449832,
   0.04274982,
   0.0427631,
   0.04385694,
   0.04281861,
   0.02374105,
   0.00565968,
   0.006627839,
   0.02369554,
   3.244935};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3396,_fy3396,_felx3396,_fehx3396,_fely3396,_fehy3396);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3396 = new TH1F("Graph_Graph3396","",100,-100,100);
   Graph_Graph3396->SetMinimum(0);
   Graph_Graph3396->SetMaximum(1.5);
   Graph_Graph3396->SetDirectory(0);
   Graph_Graph3396->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3396->SetLineColor(ci);
   Graph_Graph3396->GetXaxis()->SetRange(1,100);
   Graph_Graph3396->GetXaxis()->CenterTitle(true);
   Graph_Graph3396->GetXaxis()->SetLabelFont(42);
   Graph_Graph3396->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3396->GetXaxis()->SetTitleFont(42);
   Graph_Graph3396->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3396->GetYaxis()->CenterTitle(true);
   Graph_Graph3396->GetYaxis()->SetLabelFont(42);
   Graph_Graph3396->GetYaxis()->SetTitleFont(42);
   Graph_Graph3396->GetZaxis()->SetLabelFont(42);
   Graph_Graph3396->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3396->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3396);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.536678,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1187 = new TH2D("ThetaY_vs_Y_10_15__1187","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8023,44);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8049,6297);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8075,22602);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8101,32979);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8127,39002);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8153,42799);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8179,44907);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8205,46071);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8231,45890);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8257,44996);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8283,42584);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8309,39312);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8335,33005);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8361,22564);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8387,6312);
   ThetaY_vs_Y_10_15__1187->SetBinContent(8413,47);
   ThetaY_vs_Y_10_15__1187->SetEntries(469411);
   ThetaY_vs_Y_10_15__1187->SetContour(20);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(1,2303.55);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(2,4607.1);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(3,6910.65);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(4,9214.2);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(5,11517.75);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(6,13821.3);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(7,16124.85);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(8,18428.4);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(9,20731.95);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(10,23035.5);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(11,25339.05);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(12,27642.6);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(13,29946.15);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(14,32249.7);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(15,34553.25);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(16,36856.8);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(17,39160.35);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(18,41463.9);
   ThetaY_vs_Y_10_15__1187->SetContourLevel(19,43767.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1187->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1187->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1187->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1187->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1187->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1187->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1187->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1187->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1187->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1187->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1187->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1187->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1187->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1187->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1187->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1187->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
