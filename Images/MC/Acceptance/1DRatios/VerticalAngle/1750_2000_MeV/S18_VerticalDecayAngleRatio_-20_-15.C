void S18_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__1281 = new TH1D("S18_ThetaY_mI20_mI15__1281","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(312,0.01025641);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(313,0.2051282);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(314,0.8051282);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(315,0.9333333);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(316,1);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(317,0.8358974);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(318,0.6358974);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(319,0.6512821);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(320,0.4666667);
   S18_ThetaY_mI20_mI15__1281->SetBinContent(321,0.1076923);
   S18_ThetaY_mI20_mI15__1281->SetBinError(312,0.007252377);
   S18_ThetaY_mI20_mI15__1281->SetBinError(313,0.03243362);
   S18_ThetaY_mI20_mI15__1281->SetBinError(314,0.06425623);
   S18_ThetaY_mI20_mI15__1281->SetBinError(315,0.06918327);
   S18_ThetaY_mI20_mI15__1281->SetBinError(316,0.07161149);
   S18_ThetaY_mI20_mI15__1281->SetBinError(317,0.06547254);
   S18_ThetaY_mI20_mI15__1281->SetBinError(318,0.05710528);
   S18_ThetaY_mI20_mI15__1281->SetBinError(319,0.05779194);
   S18_ThetaY_mI20_mI15__1281->SetBinError(320,0.04891996);
   S18_ThetaY_mI20_mI15__1281->SetBinError(321,0.02350039);
   S18_ThetaY_mI20_mI15__1281->SetMinimum(0);
   S18_ThetaY_mI20_mI15__1281->SetMaximum(1.1);
   S18_ThetaY_mI20_mI15__1281->SetEntries(1102);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1281->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__1281->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1281->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__1281->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__1281->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__1281->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1281->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1281->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1281->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__1281->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__1281->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1281->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1281->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1281->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1281->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1281->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1282 = new TH1D("ThetaY_mI20_mI15__1282","",630,-1575,1575);
   ThetaY_mI20_mI15__1282->SetBinContent(309,0.0004730509);
   ThetaY_mI20_mI15__1282->SetBinContent(310,0.1477693);
   ThetaY_mI20_mI15__1282->SetBinContent(311,0.5300239);
   ThetaY_mI20_mI15__1282->SetBinContent(312,0.7448482);
   ThetaY_mI20_mI15__1282->SetBinContent(313,0.8736658);
   ThetaY_mI20_mI15__1282->SetBinContent(314,0.9560654);
   ThetaY_mI20_mI15__1282->SetBinContent(315,0.9952399);
   ThetaY_mI20_mI15__1282->SetBinContent(316,1);
   ThetaY_mI20_mI15__1282->SetBinContent(317,0.9601159);
   ThetaY_mI20_mI15__1282->SetBinContent(318,0.8782485);
   ThetaY_mI20_mI15__1282->SetBinContent(319,0.7615528);
   ThetaY_mI20_mI15__1282->SetBinContent(320,0.5269787);
   ThetaY_mI20_mI15__1282->SetBinContent(321,0.1462023);
   ThetaY_mI20_mI15__1282->SetBinContent(322,0.0005617479);
   ThetaY_mI20_mI15__1282->SetBinError(309,0.0001182627);
   ThetaY_mI20_mI15__1282->SetBinError(310,0.002090191);
   ThetaY_mI20_mI15__1282->SetBinError(311,0.003958601);
   ThetaY_mI20_mI15__1282->SetBinError(312,0.004692754);
   ThetaY_mI20_mI15__1282->SetBinError(313,0.005082374);
   ThetaY_mI20_mI15__1282->SetBinError(314,0.005316646);
   ThetaY_mI20_mI15__1282->SetBinError(315,0.005424477);
   ThetaY_mI20_mI15__1282->SetBinError(316,0.005437433);
   ThetaY_mI20_mI15__1282->SetBinError(317,0.005327896);
   ThetaY_mI20_mI15__1282->SetBinError(318,0.005095686);
   ThetaY_mI20_mI15__1282->SetBinError(319,0.004745084);
   ThetaY_mI20_mI15__1282->SetBinError(320,0.003947212);
   ThetaY_mI20_mI15__1282->SetBinError(321,0.002079079);
   ThetaY_mI20_mI15__1282->SetBinError(322,0.0001288738);
   ThetaY_mI20_mI15__1282->SetEntries(288231);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1282->SetLineColor(ci);
   ThetaY_mI20_mI15__1282->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1282->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1282->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1282->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1282->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1282->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1282->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1282->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1282->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1282->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1282->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1282->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1282->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1282->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1282->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1282->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1282->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1282->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1282->Draw("AEsame");
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
   
   Double_t _fx3428[14] = {
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
   Double_t _fy3428[14] = {
   0,
   0,
   0,
   0.0137698,
   0.2347902,
   0.8421267,
   0.9377973,
   1,
   0.8706214,
   0.7240518,
   0.8552028,
   0.8855513,
   0.736598,
   0};
   Double_t _felx3428[14] = {
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
   Double_t _fely3428[14] = {
   0,
   0,
   0,
   0.008894236,
   0.03699214,
   0.06729918,
   0.06963677,
   0.071755,
   0.06829208,
   0.06506833,
   0.07597214,
   0.09289386,
   0.1597724,
   0};
   Double_t _fehx3428[14] = {
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
   Double_t _fehy3428[14] = {
   21.15153,
   0.06390284,
   0.01781358,
   0.01816307,
   0.04333742,
   0.07290728,
   0.07501239,
   0.07710052,
   0.07387348,
   0.07119851,
   0.08304393,
   0.1031956,
   0.198896,
   17.64791};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3428,_fy3428,_felx3428,_fehx3428,_fely3428,_fehy3428);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3428 = new TH1F("Graph_Graph3428","",100,-100,100);
   Graph_Graph3428->SetMinimum(0);
   Graph_Graph3428->SetMaximum(1.5);
   Graph_Graph3428->SetDirectory(0);
   Graph_Graph3428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3428->SetLineColor(ci);
   Graph_Graph3428->GetXaxis()->SetRange(1,100);
   Graph_Graph3428->GetXaxis()->CenterTitle(true);
   Graph_Graph3428->GetXaxis()->SetLabelFont(42);
   Graph_Graph3428->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3428->GetXaxis()->SetTitleFont(42);
   Graph_Graph3428->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3428->GetYaxis()->CenterTitle(true);
   Graph_Graph3428->GetYaxis()->SetLabelFont(42);
   Graph_Graph3428->GetYaxis()->SetTitleFont(42);
   Graph_Graph3428->GetZaxis()->SetLabelFont(42);
   Graph_Graph3428->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3428->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3428);
   
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1283 = new TH2D("ThetaY_vs_Y_mI20_mI15__1283","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8043,16);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8069,4998);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8095,17927);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8121,25193);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8147,29550);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8173,32337);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8199,33662);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8225,33823);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8251,32474);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8277,29705);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8303,25758);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8329,17824);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8355,4945);
   ThetaY_vs_Y_mI20_mI15__1283->SetBinContent(8381,19);
   ThetaY_vs_Y_mI20_mI15__1283->SetEntries(288231);
   ThetaY_vs_Y_mI20_mI15__1283->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(1,1691.15);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(2,3382.3);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(3,5073.45);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(4,6764.6);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(5,8455.75);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(6,10146.9);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(7,11838.05);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(8,13529.2);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(9,15220.35);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(10,16911.5);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(11,18602.65);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(12,20293.8);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(13,21984.95);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(14,23676.1);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(15,25367.25);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(16,27058.4);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(17,28749.55);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(18,30440.7);
   ThetaY_vs_Y_mI20_mI15__1283->SetContourLevel(19,32131.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1283->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1283->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1283->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1283->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1283->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1283->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1283->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1283->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1283->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1283->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1283->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1283->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1283->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1283->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1283->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1283->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
