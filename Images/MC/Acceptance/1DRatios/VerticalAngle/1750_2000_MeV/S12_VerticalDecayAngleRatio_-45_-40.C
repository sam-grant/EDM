void S12_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.4258824,125,8.091765);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__1209 = new TH1D("S12_ThetaY_mI45_mI40__1209","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__1209->SetBinContent(316,4);
   S12_ThetaY_mI45_mI40__1209->SetBinContent(317,4);
   S12_ThetaY_mI45_mI40__1209->SetBinContent(318,4.5);
   S12_ThetaY_mI45_mI40__1209->SetBinContent(319,2.5);
   S12_ThetaY_mI45_mI40__1209->SetBinContent(320,2);
   S12_ThetaY_mI45_mI40__1209->SetBinContent(321,1);
   S12_ThetaY_mI45_mI40__1209->SetBinError(316,1.414214);
   S12_ThetaY_mI45_mI40__1209->SetBinError(317,1.414214);
   S12_ThetaY_mI45_mI40__1209->SetBinError(318,1.5);
   S12_ThetaY_mI45_mI40__1209->SetBinError(319,1.118034);
   S12_ThetaY_mI45_mI40__1209->SetBinError(320,1);
   S12_ThetaY_mI45_mI40__1209->SetBinError(321,0.7071068);
   S12_ThetaY_mI45_mI40__1209->SetMinimum(0);
   S12_ThetaY_mI45_mI40__1209->SetMaximum(7.24);
   S12_ThetaY_mI45_mI40__1209->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__1209->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__1209->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__1209->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__1209->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__1209->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__1209->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1209->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__1209->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1209->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__1209->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__1209->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1209->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1209->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1209->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__1209->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1209->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1210 = new TH1D("ThetaY_mI45_mI40__1210","",630,-1575,1575);
   ThetaY_mI45_mI40__1210->SetBinContent(310,1.050909);
   ThetaY_mI45_mI40__1210->SetBinContent(311,3.418182);
   ThetaY_mI45_mI40__1210->SetBinContent(312,4.865455);
   ThetaY_mI45_mI40__1210->SetBinContent(313,5.541818);
   ThetaY_mI45_mI40__1210->SetBinContent(314,6.221818);
   ThetaY_mI45_mI40__1210->SetBinContent(315,6.581818);
   ThetaY_mI45_mI40__1210->SetBinContent(316,6.356364);
   ThetaY_mI45_mI40__1210->SetBinContent(317,6.163636);
   ThetaY_mI45_mI40__1210->SetBinContent(318,5.632727);
   ThetaY_mI45_mI40__1210->SetBinContent(319,4.821818);
   ThetaY_mI45_mI40__1210->SetBinContent(320,3.465455);
   ThetaY_mI45_mI40__1210->SetBinContent(321,1);
   ThetaY_mI45_mI40__1210->SetBinError(310,0.06181818);
   ThetaY_mI45_mI40__1210->SetBinError(311,0.1114888);
   ThetaY_mI45_mI40__1210->SetBinError(312,0.1330134);
   ThetaY_mI45_mI40__1210->SetBinError(313,0.141958);
   ThetaY_mI45_mI40__1210->SetBinError(314,0.1504154);
   ThetaY_mI45_mI40__1210->SetBinError(315,0.1547058);
   ThetaY_mI45_mI40__1210->SetBinError(316,0.1520331);
   ThetaY_mI45_mI40__1210->SetBinError(317,0.1497105);
   ThetaY_mI45_mI40__1210->SetBinError(318,0.1431176);
   ThetaY_mI45_mI40__1210->SetBinError(319,0.1324156);
   ThetaY_mI45_mI40__1210->SetBinError(320,0.1122571);
   ThetaY_mI45_mI40__1210->SetBinError(321,0.06030227);
   ThetaY_mI45_mI40__1210->SetEntries(15158);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1210->SetLineColor(ci);
   ThetaY_mI45_mI40__1210->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1210->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1210->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1210->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1210->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1210->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1210->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1210->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1210->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1210->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1210->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1210->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1210->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1210->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1210->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1210->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1210->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1210->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1210->Draw("AEsame");
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
   
   Double_t _fx3404[12] = {
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
   Double_t _fy3404[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.6292906,
   0.6489676,
   0.7989025,
   0.5184766,
   0.5771249,
   1};
   Double_t _felx3404[12] = {
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
   Double_t _fely3404[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2182078,
   0.2250451,
   0.261965,
   0.2243002,
   0.2766624,
   0.6473761};
   Double_t _fehx3404[12] = {
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
   Double_t _fehy3404[12] = {
   0.8787145,
   0.2695623,
   0.1893234,
   0.166203,
   0.1480285,
   0.1399278,
   0.3113902,
   0.3211611,
   0.3663937,
   0.3518553,
   0.4580412,
   1.330072};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3404,_fy3404,_felx3404,_fehx3404,_fely3404,_fehy3404);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3404 = new TH1F("Graph_Graph3404","",100,-100,100);
   Graph_Graph3404->SetMinimum(0);
   Graph_Graph3404->SetMaximum(1.5);
   Graph_Graph3404->SetDirectory(0);
   Graph_Graph3404->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3404->SetLineColor(ci);
   Graph_Graph3404->GetXaxis()->SetRange(1,100);
   Graph_Graph3404->GetXaxis()->CenterTitle(true);
   Graph_Graph3404->GetXaxis()->SetLabelFont(42);
   Graph_Graph3404->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3404->GetXaxis()->SetTitleFont(42);
   Graph_Graph3404->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3404->GetYaxis()->CenterTitle(true);
   Graph_Graph3404->GetYaxis()->SetLabelFont(42);
   Graph_Graph3404->GetYaxis()->SetTitleFont(42);
   Graph_Graph3404->GetZaxis()->SetLabelFont(42);
   Graph_Graph3404->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3404->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3404);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,7.24,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1211 = new TH2D("ThetaY_vs_Y_mI45_mI40__1211","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8064,289);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8090,940);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8116,1338);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8142,1524);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8168,1711);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8194,1810);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8220,1748);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8246,1695);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8272,1549);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8298,1326);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8324,953);
   ThetaY_vs_Y_mI45_mI40__1211->SetBinContent(8350,275);
   ThetaY_vs_Y_mI45_mI40__1211->SetEntries(15158);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1211->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1211->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1211->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1211->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1211->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1211->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1211->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1211->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1211->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1211->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1211->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1211->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1211->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1211->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1211->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1211->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
