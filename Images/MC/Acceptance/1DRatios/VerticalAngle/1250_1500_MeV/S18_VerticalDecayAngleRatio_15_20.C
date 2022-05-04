void S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.07065642,125,1.342472);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__960 = new TH1D("S18_ThetaY_15_20__960","",630,-1575,1575);
   S18_ThetaY_15_20__960->SetBinContent(308,0.09433962);
   S18_ThetaY_15_20__960->SetBinContent(309,0.5566038);
   S18_ThetaY_15_20__960->SetBinContent(310,0.745283);
   S18_ThetaY_15_20__960->SetBinContent(311,0.8537736);
   S18_ThetaY_15_20__960->SetBinContent(312,1);
   S18_ThetaY_15_20__960->SetBinContent(313,0.9339623);
   S18_ThetaY_15_20__960->SetBinContent(314,1.033019);
   S18_ThetaY_15_20__960->SetBinContent(315,1.018868);
   S18_ThetaY_15_20__960->SetBinContent(316,1.033019);
   S18_ThetaY_15_20__960->SetBinContent(317,1);
   S18_ThetaY_15_20__960->SetBinContent(318,0.8207547);
   S18_ThetaY_15_20__960->SetBinContent(319,0.08962264);
   S18_ThetaY_15_20__960->SetBinError(308,0.02109498);
   S18_ThetaY_15_20__960->SetBinError(309,0.05123953);
   S18_ThetaY_15_20__960->SetBinError(310,0.05929153);
   S18_ThetaY_15_20__960->SetBinError(311,0.06346049);
   S18_ThetaY_15_20__960->SetBinError(312,0.06868028);
   S18_ThetaY_15_20__960->SetBinError(313,0.06637381);
   S18_ThetaY_15_20__960->SetBinError(314,0.06980495);
   S18_ThetaY_15_20__960->SetBinError(315,0.06932518);
   S18_ThetaY_15_20__960->SetBinError(316,0.06980495);
   S18_ThetaY_15_20__960->SetBinError(317,0.06868028);
   S18_ThetaY_15_20__960->SetBinError(318,0.06222125);
   S18_ThetaY_15_20__960->SetBinError(319,0.02056084);
   S18_ThetaY_15_20__960->SetMinimum(0);
   S18_ThetaY_15_20__960->SetMaximum(1.201159);
   S18_ThetaY_15_20__960->SetEntries(1946);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__960->SetLineColor(ci);
   S18_ThetaY_15_20__960->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__960->SetMarkerColor(ci);
   S18_ThetaY_15_20__960->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__960->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__960->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__960->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__960->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__960->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__960->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__960->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__960->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__960->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__960->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__960->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__960->Draw("AE");
   
   TH1D *ThetaY_15_20__961 = new TH1D("ThetaY_15_20__961","",630,-1575,1575);
   ThetaY_15_20__961->SetBinContent(307,0.006457595);
   ThetaY_15_20__961->SetBinContent(308,0.1964765);
   ThetaY_15_20__961->SetBinContent(309,0.5593933);
   ThetaY_15_20__961->SetBinContent(310,0.7788853);
   ThetaY_15_20__961->SetBinContent(311,0.9146273);
   ThetaY_15_20__961->SetBinContent(312,1);
   ThetaY_15_20__961->SetBinContent(313,1.060768);
   ThetaY_15_20__961->SetBinContent(314,1.073683);
   ThetaY_15_20__961->SetBinContent(315,1.091797);
   ThetaY_15_20__961->SetBinContent(316,1.091963);
   ThetaY_15_20__961->SetBinContent(317,1.090671);
   ThetaY_15_20__961->SetBinContent(318,1.056264);
   ThetaY_15_20__961->SetBinContent(319,1.002947);
   ThetaY_15_20__961->SetBinContent(320,0.9101566);
   ThetaY_15_20__961->SetBinContent(321,0.7768321);
   ThetaY_15_20__961->SetBinContent(322,0.5571746);
   ThetaY_15_20__961->SetBinContent(323,0.1977349);
   ThetaY_15_20__961->SetBinContent(324,0.006192668);
   ThetaY_15_20__961->SetBinError(307,0.000462438);
   ThetaY_15_20__961->SetBinError(308,0.002550782);
   ThetaY_15_20__961->SetBinError(309,0.004304044);
   ThetaY_15_20__961->SetBinError(310,0.005078727);
   ThetaY_15_20__961->SetBinError(311,0.005503515);
   ThetaY_15_20__961->SetBinError(312,0.005754639);
   ThetaY_15_20__961->SetBinError(313,0.005926909);
   ThetaY_15_20__961->SetBinError(314,0.00596288);
   ThetaY_15_20__961->SetBinError(315,0.006012971);
   ThetaY_15_20__961->SetBinError(316,0.006013427);
   ThetaY_15_20__961->SetBinError(317,0.006009869);
   ThetaY_15_20__961->SetBinError(318,0.005914313);
   ThetaY_15_20__961->SetBinError(319,0.005763113);
   ThetaY_15_20__961->SetBinError(320,0.005490048);
   ThetaY_15_20__961->SetBinError(321,0.005072029);
   ThetaY_15_20__961->SetBinError(322,0.0042955);
   ThetaY_15_20__961->SetBinError(323,0.002558938);
   ThetaY_15_20__961->SetBinError(324,0.0004528527);
   ThetaY_15_20__961->SetEntries(403795);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__961->SetLineColor(ci);
   ThetaY_15_20__961->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__961->SetMarkerColor(ci);
   ThetaY_15_20__961->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__961->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__961->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__961->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__961->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__961->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__961->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__961->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__961->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__961->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__961->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__961->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__961->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__961->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__961->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__961->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__961->Draw("AEsame");
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
   
   Double_t _fx3321[18] = {
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
   Double_t _fy3321[18] = {
   0,
   0.4801574,
   0.9950133,
   0.9568585,
   0.9334661,
   1,
   0.8804589,
   0.9621267,
   0.9332025,
   0.9460202,
   0.9168666,
   0.7770357,
   0.08935927,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3321[18] = {
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
   Double_t _fely3321[18] = {
   0,
   0.1066326,
   0.09178475,
   0.07629638,
   0.06954542,
   0.06886548,
   0.06271061,
   0.06518292,
   0.0636538,
   0.06408814,
   0.06312224,
   0.0590097,
   0.02032457,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3321[18] = {
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
   Double_t _fehy3321[18] = {
   1.351151,
   0.1334467,
   0.1006747,
   0.08264033,
   0.07493303,
   0.07378192,
   0.06734666,
   0.06975815,
   0.06815318,
   0.06858624,
   0.06762712,
   0.06367269,
   0.02557269,
   0.009541605,
   0.01117926,
   0.01558675,
   0.04392449,
   1.409239};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3321,_fy3321,_felx3321,_fehx3321,_fely3321,_fehy3321);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3321 = new TH1F("Graph_Graph3321","",100,-100,100);
   Graph_Graph3321->SetMinimum(0);
   Graph_Graph3321->SetMaximum(1.5);
   Graph_Graph3321->SetDirectory(0);
   Graph_Graph3321->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3321->SetLineColor(ci);
   Graph_Graph3321->GetXaxis()->SetRange(1,100);
   Graph_Graph3321->GetXaxis()->CenterTitle(true);
   Graph_Graph3321->GetXaxis()->SetLabelFont(42);
   Graph_Graph3321->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3321->GetXaxis()->SetTitleFont(42);
   Graph_Graph3321->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3321->GetYaxis()->CenterTitle(true);
   Graph_Graph3321->GetYaxis()->SetLabelFont(42);
   Graph_Graph3321->GetYaxis()->SetTitleFont(42);
   Graph_Graph3321->GetZaxis()->SetLabelFont(42);
   Graph_Graph3321->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3321->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3321);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.201159,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__962 = new TH2D("ThetaY_vs_Y_15_20__962","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__962->SetBinContent(7998,195);
   ThetaY_vs_Y_15_20__962->SetBinContent(8024,5933);
   ThetaY_vs_Y_15_20__962->SetBinContent(8050,16892);
   ThetaY_vs_Y_15_20__962->SetBinContent(8076,23520);
   ThetaY_vs_Y_15_20__962->SetBinContent(8102,27619);
   ThetaY_vs_Y_15_20__962->SetBinContent(8128,30197);
   ThetaY_vs_Y_15_20__962->SetBinContent(8154,32032);
   ThetaY_vs_Y_15_20__962->SetBinContent(8180,32422);
   ThetaY_vs_Y_15_20__962->SetBinContent(8206,32969);
   ThetaY_vs_Y_15_20__962->SetBinContent(8232,32974);
   ThetaY_vs_Y_15_20__962->SetBinContent(8258,32935);
   ThetaY_vs_Y_15_20__962->SetBinContent(8284,31896);
   ThetaY_vs_Y_15_20__962->SetBinContent(8310,30286);
   ThetaY_vs_Y_15_20__962->SetBinContent(8336,27484);
   ThetaY_vs_Y_15_20__962->SetBinContent(8362,23458);
   ThetaY_vs_Y_15_20__962->SetBinContent(8388,16825);
   ThetaY_vs_Y_15_20__962->SetBinContent(8414,5971);
   ThetaY_vs_Y_15_20__962->SetBinContent(8440,187);
   ThetaY_vs_Y_15_20__962->SetEntries(403795);
   ThetaY_vs_Y_15_20__962->SetContour(20);
   ThetaY_vs_Y_15_20__962->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__962->SetContourLevel(1,1648.7);
   ThetaY_vs_Y_15_20__962->SetContourLevel(2,3297.4);
   ThetaY_vs_Y_15_20__962->SetContourLevel(3,4946.1);
   ThetaY_vs_Y_15_20__962->SetContourLevel(4,6594.8);
   ThetaY_vs_Y_15_20__962->SetContourLevel(5,8243.5);
   ThetaY_vs_Y_15_20__962->SetContourLevel(6,9892.2);
   ThetaY_vs_Y_15_20__962->SetContourLevel(7,11540.9);
   ThetaY_vs_Y_15_20__962->SetContourLevel(8,13189.6);
   ThetaY_vs_Y_15_20__962->SetContourLevel(9,14838.3);
   ThetaY_vs_Y_15_20__962->SetContourLevel(10,16487);
   ThetaY_vs_Y_15_20__962->SetContourLevel(11,18135.7);
   ThetaY_vs_Y_15_20__962->SetContourLevel(12,19784.4);
   ThetaY_vs_Y_15_20__962->SetContourLevel(13,21433.1);
   ThetaY_vs_Y_15_20__962->SetContourLevel(14,23081.8);
   ThetaY_vs_Y_15_20__962->SetContourLevel(15,24730.5);
   ThetaY_vs_Y_15_20__962->SetContourLevel(16,26379.2);
   ThetaY_vs_Y_15_20__962->SetContourLevel(17,28027.9);
   ThetaY_vs_Y_15_20__962->SetContourLevel(18,29676.6);
   ThetaY_vs_Y_15_20__962->SetContourLevel(19,31325.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__962->SetLineColor(ci);
   ThetaY_vs_Y_15_20__962->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__962->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__962->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__962->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__962->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__962->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__962->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__962->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__962->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__962->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__962->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__962->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__962->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__962->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__962->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
