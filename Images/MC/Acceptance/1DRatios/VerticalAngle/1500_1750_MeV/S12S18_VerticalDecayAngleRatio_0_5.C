void S12S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06649043,125,1.263318);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__1179 = new TH1D("S12S18_ThetaY_0_5__1179","",630,-1575,1575);
   S12S18_ThetaY_0_5__1179->SetBinContent(310,0.09716599);
   S12S18_ThetaY_0_5__1179->SetBinContent(311,0.5533063);
   S12S18_ThetaY_0_5__1179->SetBinContent(312,0.8704453);
   S12S18_ThetaY_0_5__1179->SetBinContent(313,0.9554656);
   S12S18_ThetaY_0_5__1179->SetBinContent(314,0.9163293);
   S12S18_ThetaY_0_5__1179->SetBinContent(315,0.9905533);
   S12S18_ThetaY_0_5__1179->SetBinContent(316,1.009447);
   S12S18_ThetaY_0_5__1179->SetBinContent(317,1);
   S12S18_ThetaY_0_5__1179->SetBinContent(318,0.9311741);
   S12S18_ThetaY_0_5__1179->SetBinContent(319,0.6626181);
   S12S18_ThetaY_0_5__1179->SetBinContent(320,0.2105263);
   S12S18_ThetaY_0_5__1179->SetBinContent(321,0.01889339);
   S12S18_ThetaY_0_5__1179->SetBinError(310,0.01145112);
   S12S18_ThetaY_0_5__1179->SetBinError(311,0.02732585);
   S12S18_ThetaY_0_5__1179->SetBinError(312,0.03427375);
   S12S18_ThetaY_0_5__1179->SetBinError(313,0.0359086);
   S12S18_ThetaY_0_5__1179->SetBinError(314,0.03516549);
   S12S18_ThetaY_0_5__1179->SetBinError(315,0.03656199);
   S12S18_ThetaY_0_5__1179->SetBinError(316,0.03690903);
   S12S18_ThetaY_0_5__1179->SetBinError(317,0.03673592);
   S12S18_ThetaY_0_5__1179->SetBinError(318,0.03544919);
   S12S18_ThetaY_0_5__1179->SetBinError(319,0.02990354);
   S12S18_ThetaY_0_5__1179->SetBinError(320,0.0168556);
   S12S18_ThetaY_0_5__1179->SetBinError(321,0.00504947);
   S12S18_ThetaY_0_5__1179->SetMinimum(0);
   S12S18_ThetaY_0_5__1179->SetMaximum(1.130337);
   S12S18_ThetaY_0_5__1179->SetEntries(6088);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1179->SetLineColor(ci);
   S12S18_ThetaY_0_5__1179->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1179->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__1179->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__1179->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__1179->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1179->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1179->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1179->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__1179->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__1179->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1179->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1179->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1179->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1179->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1179->Draw("AE");
   
   TH1D *ThetaY_0_5__1180 = new TH1D("ThetaY_0_5__1180","",630,-1575,1575);
   ThetaY_0_5__1180->SetBinContent(308,0.000949288);
   ThetaY_0_5__1180->SetBinContent(309,0.1383962);
   ThetaY_0_5__1180->SetBinContent(310,0.5106837);
   ThetaY_0_5__1180->SetBinContent(311,0.7339495);
   ThetaY_0_5__1180->SetBinContent(312,0.8716962);
   ThetaY_0_5__1180->SetBinContent(313,0.9596969);
   ThetaY_0_5__1180->SetBinContent(314,1.007311);
   ThetaY_0_5__1180->SetBinContent(315,1.027196);
   ThetaY_0_5__1180->SetBinContent(316,1.027579);
   ThetaY_0_5__1180->SetBinContent(317,1);
   ThetaY_0_5__1180->SetBinContent(318,0.9623116);
   ThetaY_0_5__1180->SetBinContent(319,0.8709301);
   ThetaY_0_5__1180->SetBinContent(320,0.7308019);
   ThetaY_0_5__1180->SetBinContent(321,0.5023233);
   ThetaY_0_5__1180->SetBinContent(322,0.1372637);
   ThetaY_0_5__1180->SetBinContent(323,0.0009992506);
   ThetaY_0_5__1180->SetBinError(308,0.0001257363);
   ThetaY_0_5__1180->SetBinError(309,0.001518181);
   ThetaY_0_5__1180->SetBinError(310,0.002916336);
   ThetaY_0_5__1180->SetBinError(311,0.003496187);
   ThetaY_0_5__1180->SetBinError(312,0.003810168);
   ThetaY_0_5__1180->SetBinError(313,0.00399787);
   ThetaY_0_5__1180->SetBinError(314,0.004095844);
   ThetaY_0_5__1180->SetBinError(315,0.004136074);
   ThetaY_0_5__1180->SetBinError(316,0.004136845);
   ThetaY_0_5__1180->SetBinError(317,0.004080953);
   ThetaY_0_5__1180->SetBinError(318,0.004003312);
   ThetaY_0_5__1180->SetBinError(319,0.003808494);
   ThetaY_0_5__1180->SetBinError(320,0.003488682);
   ThetaY_0_5__1180->SetBinError(321,0.002892366);
   ThetaY_0_5__1180->SetBinError(322,0.001511957);
   ThetaY_0_5__1180->SetBinError(323,0.0001290027);
   ThetaY_0_5__1180->SetEntries(629397);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1180->SetLineColor(ci);
   ThetaY_0_5__1180->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1180->SetMarkerColor(ci);
   ThetaY_0_5__1180->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1180->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1180->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1180->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1180->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1180->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1180->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1180->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1180->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1180->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1180->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1180->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1180->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1180->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1180->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1180->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1180->Draw("AEsame");
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
   
   Double_t _fx3394[16] = {
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
   Double_t _fy3394[16] = {
   0,
   0,
   0.1902665,
   0.7538752,
   0.998565,
   0.995591,
   0.9096785,
   0.9643272,
   0.982354,
   1,
   0.967643,
   0.7608166,
   0.2880758,
   0.03761201,
   0,
   0};
   Double_t _felx3394[16] = {
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
   Double_t _fely3394[16] = {
   0,
   0,
   0.02239682,
   0.03738837,
   0.03954936,
   0.03763655,
   0.03509674,
   0.0357967,
   0.03612713,
   0.03695326,
   0.03704755,
   0.03448392,
   0.02308045,
   0.00993307,
   0,
   0};
   Double_t _fehx3394[16] = {
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
   Double_t _fehy3394[16] = {
   2.65996,
   0.01795414,
   0.02520304,
   0.03929117,
   0.04114846,
   0.03908764,
   0.03647828,
   0.03715143,
   0.03748143,
   0.03834535,
   0.03849454,
   0.03608417,
   0.02500866,
   0.01298122,
   0.01810229,
   2.524912};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3394,_fy3394,_felx3394,_fehx3394,_fely3394,_fehy3394);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3394 = new TH1F("Graph_Graph3394","",100,-100,100);
   Graph_Graph3394->SetMinimum(0);
   Graph_Graph3394->SetMaximum(1.5);
   Graph_Graph3394->SetDirectory(0);
   Graph_Graph3394->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3394->SetLineColor(ci);
   Graph_Graph3394->GetXaxis()->SetRange(1,100);
   Graph_Graph3394->GetXaxis()->CenterTitle(true);
   Graph_Graph3394->GetXaxis()->SetLabelFont(42);
   Graph_Graph3394->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3394->GetXaxis()->SetTitleFont(42);
   Graph_Graph3394->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3394->GetYaxis()->CenterTitle(true);
   Graph_Graph3394->GetYaxis()->SetLabelFont(42);
   Graph_Graph3394->GetYaxis()->SetTitleFont(42);
   Graph_Graph3394->GetZaxis()->SetLabelFont(42);
   Graph_Graph3394->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3394->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3394);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.130337,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1181 = new TH2D("ThetaY_vs_Y_0_5__1181","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8021,57);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8047,8310);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8073,30664);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8099,44070);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8125,52341);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8151,57625);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8177,60484);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8203,61678);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8229,61701);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8255,60045);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8281,57782);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8307,52295);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8333,43881);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8359,30162);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8385,8242);
   ThetaY_vs_Y_0_5__1181->SetBinContent(8411,60);
   ThetaY_vs_Y_0_5__1181->SetEntries(629397);
   ThetaY_vs_Y_0_5__1181->SetContour(20);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(1,3085.05);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(2,6170.1);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(3,9255.15);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(4,12340.2);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(5,15425.25);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(6,18510.3);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(7,21595.35);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(8,24680.4);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(9,27765.45);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(10,30850.5);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(11,33935.55);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(12,37020.6);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(13,40105.65);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(14,43190.7);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(15,46275.75);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(16,49360.8);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(17,52445.85);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(18,55530.9);
   ThetaY_vs_Y_0_5__1181->SetContourLevel(19,58615.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1181->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1181->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1181->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1181->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1181->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1181->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1181->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1181->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1181->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1181->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1181->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1181->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1181->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1181->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1181->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1181->Draw("COL");
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
