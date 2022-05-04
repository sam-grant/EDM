void S12_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.36439,125,25.9234);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__741 = new TH1D("S12_ThetaY_30_35__741","",630,-1575,1575);
   S12_ThetaY_30_35__741->SetBinContent(306,1);
   S12_ThetaY_30_35__741->SetBinContent(307,2.333333);
   S12_ThetaY_30_35__741->SetBinContent(308,6.333333);
   S12_ThetaY_30_35__741->SetBinContent(309,6.833333);
   S12_ThetaY_30_35__741->SetBinContent(310,5.833333);
   S12_ThetaY_30_35__741->SetBinContent(311,9.333333);
   S12_ThetaY_30_35__741->SetBinContent(312,10);
   S12_ThetaY_30_35__741->SetBinContent(313,7.166667);
   S12_ThetaY_30_35__741->SetBinContent(314,8.666667);
   S12_ThetaY_30_35__741->SetBinContent(315,9.333333);
   S12_ThetaY_30_35__741->SetBinContent(316,10.16667);
   S12_ThetaY_30_35__741->SetBinContent(317,1);
   S12_ThetaY_30_35__741->SetBinError(306,0.4082483);
   S12_ThetaY_30_35__741->SetBinError(307,0.6236096);
   S12_ThetaY_30_35__741->SetBinError(308,1.027402);
   S12_ThetaY_30_35__741->SetBinError(309,1.067187);
   S12_ThetaY_30_35__741->SetBinError(310,0.9860133);
   S12_ThetaY_30_35__741->SetBinError(311,1.247219);
   S12_ThetaY_30_35__741->SetBinError(312,1.290994);
   S12_ThetaY_30_35__741->SetBinError(313,1.092906);
   S12_ThetaY_30_35__741->SetBinError(314,1.20185);
   S12_ThetaY_30_35__741->SetBinError(315,1.247219);
   S12_ThetaY_30_35__741->SetBinError(316,1.301708);
   S12_ThetaY_30_35__741->SetBinError(317,0.4082483);
   S12_ThetaY_30_35__741->SetMinimum(0);
   S12_ThetaY_30_35__741->SetMaximum(23.19462);
   S12_ThetaY_30_35__741->SetEntries(468);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__741->SetLineColor(ci);
   S12_ThetaY_30_35__741->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__741->SetMarkerColor(ci);
   S12_ThetaY_30_35__741->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__741->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__741->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__741->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__741->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__741->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__741->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__741->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__741->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__741->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__741->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__741->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__741->Draw("AE");
   
   TH1D *ThetaY_30_35__742 = new TH1D("ThetaY_30_35__742","",630,-1575,1575);
   ThetaY_30_35__742->SetBinContent(305,0.002688172);
   ThetaY_30_35__742->SetBinContent(306,1);
   ThetaY_30_35__742->SetBinContent(307,6.274194);
   ThetaY_30_35__742->SetBinContent(308,11.74462);
   ThetaY_30_35__742->SetBinContent(309,14.95161);
   ThetaY_30_35__742->SetBinContent(310,17.56452);
   ThetaY_30_35__742->SetBinContent(311,19.26344);
   ThetaY_30_35__742->SetBinContent(312,19.62097);
   ThetaY_30_35__742->SetBinContent(313,20.55914);
   ThetaY_30_35__742->SetBinContent(314,20.92742);
   ThetaY_30_35__742->SetBinContent(315,20.51613);
   ThetaY_30_35__742->SetBinContent(316,21.08602);
   ThetaY_30_35__742->SetBinContent(317,20.83333);
   ThetaY_30_35__742->SetBinContent(318,20.68011);
   ThetaY_30_35__742->SetBinContent(319,20.1371);
   ThetaY_30_35__742->SetBinContent(320,19.12903);
   ThetaY_30_35__742->SetBinContent(321,17.4543);
   ThetaY_30_35__742->SetBinContent(322,15.11828);
   ThetaY_30_35__742->SetBinContent(323,12.14247);
   ThetaY_30_35__742->SetBinContent(324,6.19086);
   ThetaY_30_35__742->SetBinContent(325,0.9623656);
   ThetaY_30_35__742->SetBinContent(326,0.002688172);
   ThetaY_30_35__742->SetBinError(305,0.002688172);
   ThetaY_30_35__742->SetBinError(306,0.05184758);
   ThetaY_30_35__742->SetBinError(307,0.1298696);
   ThetaY_30_35__742->SetBinError(308,0.1776839);
   ThetaY_30_35__742->SetBinError(309,0.2004807);
   ThetaY_30_35__742->SetBinError(310,0.2172934);
   ThetaY_30_35__742->SetBinError(311,0.2275598);
   ThetaY_30_35__742->SetBinError(312,0.2296618);
   ThetaY_30_35__742->SetBinError(313,0.2350883);
   ThetaY_30_35__742->SetBinError(314,0.2371845);
   ThetaY_30_35__742->SetBinError(315,0.2348423);
   ThetaY_30_35__742->SetBinError(316,0.2380816);
   ThetaY_30_35__742->SetBinError(317,0.2366508);
   ThetaY_30_35__742->SetBinError(318,0.2357789);
   ThetaY_30_35__742->SetBinError(319,0.2326628);
   ThetaY_30_35__742->SetBinError(320,0.2267645);
   ThetaY_30_35__742->SetBinError(321,0.2166106);
   ThetaY_30_35__742->SetBinError(322,0.201595);
   ThetaY_30_35__742->SetBinError(323,0.1806684);
   ThetaY_30_35__742->SetBinError(324,0.1290043);
   ThetaY_30_35__742->SetBinError(325,0.0508626);
   ThetaY_30_35__742->SetBinError(326,0.002688172);
   ThetaY_30_35__742->SetEntries(113892);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__742->SetLineColor(ci);
   ThetaY_30_35__742->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__742->SetMarkerColor(ci);
   ThetaY_30_35__742->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__742->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__742->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__742->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__742->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__742->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__742->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__742->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__742->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__742->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__742->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__742->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__742->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__742->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__742->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__742->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__742->Draw("AEsame");
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
   
   Double_t _fx3248[22] = {
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5};
   Double_t _fy3248[22] = {
   0,
   1,
   0.3718937,
   0.5392538,
   0.4570298,
   0.332109,
   0.4845102,
   0.5096589,
   0.3485879,
   0.4141297,
   0.4549266,
   0.482152,
   0.048,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3248[22] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3248[22] = {
   0,
   0.399379,
   0.09846809,
   0.08746025,
   0.07133915,
   0.05601251,
   0.06479887,
   0.06587758,
   0.05309693,
   0.0574315,
   0.06082818,
   0.06179867,
   0.01904576,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3248[22] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3248[22] = {
   328.7844,
   0.6049668,
   0.1288308,
   0.1029661,
   0.08346501,
   0.06637231,
   0.07411467,
   0.075008,
   0.06188186,
   0.06601598,
   0.06957033,
   0.07028602,
   0.02868686,
   0.01483907,
   0.01523927,
   0.01604245,
   0.01758194,
   0.02029908,
   0.02527487,
   0.04958271,
   0.3196574,
   328.7844};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3248,_fy3248,_felx3248,_fehx3248,_fely3248,_fehy3248);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3248 = new TH1F("Graph_Graph3248","",100,-100,100);
   Graph_Graph3248->SetMinimum(0);
   Graph_Graph3248->SetMaximum(1.5);
   Graph_Graph3248->SetDirectory(0);
   Graph_Graph3248->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3248->SetLineColor(ci);
   Graph_Graph3248->GetXaxis()->SetRange(1,100);
   Graph_Graph3248->GetXaxis()->CenterTitle(true);
   Graph_Graph3248->GetXaxis()->SetLabelFont(42);
   Graph_Graph3248->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3248->GetXaxis()->SetTitleFont(42);
   Graph_Graph3248->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3248->GetYaxis()->CenterTitle(true);
   Graph_Graph3248->GetYaxis()->SetLabelFont(42);
   Graph_Graph3248->GetYaxis()->SetTitleFont(42);
   Graph_Graph3248->GetZaxis()->SetLabelFont(42);
   Graph_Graph3248->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3248->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3248);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,23.19462,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__743 = new TH2D("ThetaY_vs_Y_30_35__743","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__743->SetBinContent(7949,1);
   ThetaY_vs_Y_30_35__743->SetBinContent(7975,372);
   ThetaY_vs_Y_30_35__743->SetBinContent(8001,2334);
   ThetaY_vs_Y_30_35__743->SetBinContent(8027,4369);
   ThetaY_vs_Y_30_35__743->SetBinContent(8053,5562);
   ThetaY_vs_Y_30_35__743->SetBinContent(8079,6534);
   ThetaY_vs_Y_30_35__743->SetBinContent(8105,7166);
   ThetaY_vs_Y_30_35__743->SetBinContent(8131,7299);
   ThetaY_vs_Y_30_35__743->SetBinContent(8157,7648);
   ThetaY_vs_Y_30_35__743->SetBinContent(8183,7785);
   ThetaY_vs_Y_30_35__743->SetBinContent(8209,7632);
   ThetaY_vs_Y_30_35__743->SetBinContent(8235,7844);
   ThetaY_vs_Y_30_35__743->SetBinContent(8261,7750);
   ThetaY_vs_Y_30_35__743->SetBinContent(8287,7693);
   ThetaY_vs_Y_30_35__743->SetBinContent(8313,7491);
   ThetaY_vs_Y_30_35__743->SetBinContent(8339,7116);
   ThetaY_vs_Y_30_35__743->SetBinContent(8365,6493);
   ThetaY_vs_Y_30_35__743->SetBinContent(8391,5624);
   ThetaY_vs_Y_30_35__743->SetBinContent(8417,4517);
   ThetaY_vs_Y_30_35__743->SetBinContent(8443,2303);
   ThetaY_vs_Y_30_35__743->SetBinContent(8469,358);
   ThetaY_vs_Y_30_35__743->SetBinContent(8495,1);
   ThetaY_vs_Y_30_35__743->SetEntries(113892);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__743->SetLineColor(ci);
   ThetaY_vs_Y_30_35__743->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__743->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__743->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__743->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__743->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__743->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__743->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__743->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__743->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__743->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__743->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__743->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__743->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__743->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__743->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
