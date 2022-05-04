void S12_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.07939431,125,1.508492);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__1380 = new TH1D("S12_ThetaY_mI45_mI40__1380","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__1380->SetBinContent(316,0.3333333);
   S12_ThetaY_mI45_mI40__1380->SetBinContent(317,0.8888889);
   S12_ThetaY_mI45_mI40__1380->SetBinContent(318,1);
   S12_ThetaY_mI45_mI40__1380->SetBinContent(319,0.4444444);
   S12_ThetaY_mI45_mI40__1380->SetBinContent(320,0.1111111);
   S12_ThetaY_mI45_mI40__1380->SetBinError(316,0.1924501);
   S12_ThetaY_mI45_mI40__1380->SetBinError(317,0.3142697);
   S12_ThetaY_mI45_mI40__1380->SetBinError(318,0.3333333);
   S12_ThetaY_mI45_mI40__1380->SetBinError(319,0.2222222);
   S12_ThetaY_mI45_mI40__1380->SetBinError(320,0.1111111);
   S12_ThetaY_mI45_mI40__1380->SetMinimum(0);
   S12_ThetaY_mI45_mI40__1380->SetMaximum(1.349703);
   S12_ThetaY_mI45_mI40__1380->SetEntries(25);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__1380->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__1380->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__1380->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__1380->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__1380->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__1380->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1380->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__1380->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1380->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__1380->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__1380->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1380->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1380->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1380->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__1380->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1380->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1381 = new TH1D("ThetaY_mI45_mI40__1381","",630,-1575,1575);
   ThetaY_mI45_mI40__1381->SetBinContent(310,0.00148368);
   ThetaY_mI45_mI40__1381->SetBinContent(311,0.2366469);
   ThetaY_mI45_mI40__1381->SetBinContent(312,0.7388724);
   ThetaY_mI45_mI40__1381->SetBinContent(313,0.9821958);
   ThetaY_mI45_mI40__1381->SetBinContent(314,1.113501);
   ThetaY_mI45_mI40__1381->SetBinContent(315,1.227003);
   ThetaY_mI45_mI40__1381->SetBinContent(316,1.15727);
   ThetaY_mI45_mI40__1381->SetBinContent(317,1.146142);
   ThetaY_mI45_mI40__1381->SetBinContent(318,1);
   ThetaY_mI45_mI40__1381->SetBinContent(319,0.7833828);
   ThetaY_mI45_mI40__1381->SetBinContent(320,0.2336795);
   ThetaY_mI45_mI40__1381->SetBinContent(321,0.0007418398);
   ThetaY_mI45_mI40__1381->SetBinError(310,0.00104912);
   ThetaY_mI45_mI40__1381->SetBinError(311,0.01324968);
   ThetaY_mI45_mI40__1381->SetBinError(312,0.02341207);
   ThetaY_mI45_mI40__1381->SetBinError(313,0.02699318);
   ThetaY_mI45_mI40__1381->SetBinError(314,0.02874091);
   ThetaY_mI45_mI40__1381->SetBinError(315,0.03017018);
   ThetaY_mI45_mI40__1381->SetBinError(316,0.02930032);
   ThetaY_mI45_mI40__1381->SetBinError(317,0.02915912);
   ThetaY_mI45_mI40__1381->SetBinError(318,0.02723674);
   ThetaY_mI45_mI40__1381->SetBinError(319,0.02410694);
   ThetaY_mI45_mI40__1381->SetBinError(320,0.01316635);
   ThetaY_mI45_mI40__1381->SetBinError(321,0.0007418398);
   ThetaY_mI45_mI40__1381->SetEntries(11621);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1381->SetLineColor(ci);
   ThetaY_mI45_mI40__1381->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1381->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1381->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1381->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1381->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1381->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1381->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1381->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1381->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1381->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1381->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1381->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1381->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1381->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1381->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1381->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1381->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1381->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1381->Draw("AEsame");
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
   
   Double_t _fx3461[12] = {
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
   Double_t _fy3461[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2880342,
   0.7755484,
   1,
   0.5673401,
   0.475485,
   0};
   Double_t _felx3461[12] = {
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
   Double_t _fely3461[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.1568689,
   0.2689945,
   0.3280333,
   0.2719278,
   0.3935807,
   0};
   Double_t _fehx3461[12] = {
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
   Double_t _fehy3461[12] = {
   226.2502,
   0.8669008,
   0.2771076,
   0.2084108,
   0.1838197,
   0.1668063,
   0.2807107,
   0.3839342,
   0.4589093,
   0.4501109,
   1.099128,
   794.2677};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3461,_fy3461,_felx3461,_fehx3461,_fely3461,_fehy3461);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3461 = new TH1F("Graph_Graph3461","",100,-100,100);
   Graph_Graph3461->SetMinimum(0);
   Graph_Graph3461->SetMaximum(1.5);
   Graph_Graph3461->SetDirectory(0);
   Graph_Graph3461->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3461->SetLineColor(ci);
   Graph_Graph3461->GetXaxis()->SetRange(1,100);
   Graph_Graph3461->GetXaxis()->CenterTitle(true);
   Graph_Graph3461->GetXaxis()->SetLabelFont(42);
   Graph_Graph3461->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3461->GetXaxis()->SetTitleFont(42);
   Graph_Graph3461->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3461->GetYaxis()->CenterTitle(true);
   Graph_Graph3461->GetYaxis()->SetLabelFont(42);
   Graph_Graph3461->GetYaxis()->SetTitleFont(42);
   Graph_Graph3461->GetZaxis()->SetLabelFont(42);
   Graph_Graph3461->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3461->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3461);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.349703,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1382 = new TH2D("ThetaY_vs_Y_mI45_mI40__1382","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8064,2);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8090,319);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8116,996);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8142,1324);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8168,1501);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8194,1654);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8220,1560);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8246,1545);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8272,1348);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8298,1056);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8324,315);
   ThetaY_vs_Y_mI45_mI40__1382->SetBinContent(8350,1);
   ThetaY_vs_Y_mI45_mI40__1382->SetEntries(11621);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1382->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1382->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1382->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1382->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1382->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1382->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1382->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1382->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1382->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1382->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1382->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1382->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1382->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1382->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1382->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1382->Draw("COL");
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
