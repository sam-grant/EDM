void S18_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.06741464,125,1.280878);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__1299 = new TH1D("S18_ThetaY_10_15__1299","",630,-1575,1575);
   S18_ThetaY_10_15__1299->SetBinContent(310,0.04700855);
   S18_ThetaY_10_15__1299->SetBinContent(311,0.3589744);
   S18_ThetaY_10_15__1299->SetBinContent(312,0.7393162);
   S18_ThetaY_10_15__1299->SetBinContent(313,0.8205128);
   S18_ThetaY_10_15__1299->SetBinContent(314,1);
   S18_ThetaY_10_15__1299->SetBinContent(315,0.8888889);
   S18_ThetaY_10_15__1299->SetBinContent(316,0.9615385);
   S18_ThetaY_10_15__1299->SetBinContent(317,0.9017094);
   S18_ThetaY_10_15__1299->SetBinContent(318,0.4487179);
   S18_ThetaY_10_15__1299->SetBinContent(319,0.04273504);
   S18_ThetaY_10_15__1299->SetBinError(310,0.01417361);
   S18_ThetaY_10_15__1299->SetBinError(311,0.03916731);
   S18_ThetaY_10_15__1299->SetBinError(312,0.05620917);
   S18_ThetaY_10_15__1299->SetBinError(313,0.05921541);
   S18_ThetaY_10_15__1299->SetBinError(314,0.06537205);
   S18_ThetaY_10_15__1299->SetBinError(315,0.06163336);
   S18_ThetaY_10_15__1299->SetBinError(316,0.06410256);
   S18_ThetaY_10_15__1299->SetBinError(317,0.06207624);
   S18_ThetaY_10_15__1299->SetBinError(318,0.04379039);
   S18_ThetaY_10_15__1299->SetBinError(319,0.01351401);
   S18_ThetaY_10_15__1299->SetMinimum(0);
   S18_ThetaY_10_15__1299->SetMaximum(1.146049);
   S18_ThetaY_10_15__1299->SetEntries(1453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1299->SetLineColor(ci);
   S18_ThetaY_10_15__1299->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1299->SetMarkerColor(ci);
   S18_ThetaY_10_15__1299->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__1299->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__1299->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1299->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1299->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1299->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__1299->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__1299->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1299->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1299->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1299->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1299->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1299->Draw("AE");
   
   TH1D *ThetaY_10_15__1300 = new TH1D("ThetaY_10_15__1300","",630,-1575,1575);
   ThetaY_10_15__1300->SetBinContent(309,0.0005043674);
   ThetaY_10_15__1300->SetBinContent(310,0.1497971);
   ThetaY_10_15__1300->SetBinContent(311,0.5537037);
   ThetaY_10_15__1300->SetBinContent(312,0.7950664);
   ThetaY_10_15__1300->SetBinContent(313,0.9217772);
   ThetaY_10_15__1300->SetBinContent(314,1);
   ThetaY_10_15__1300->SetBinContent(315,1.041289);
   ThetaY_10_15__1300->SetBinContent(316,1.041862);
   ThetaY_10_15__1300->SetBinContent(317,1.008528);
   ThetaY_10_15__1300->SetBinContent(318,0.9301222);
   ThetaY_10_15__1300->SetBinContent(319,0.7797061);
   ThetaY_10_15__1300->SetBinContent(320,0.5567299);
   ThetaY_10_15__1300->SetBinContent(321,0.1549554);
   ThetaY_10_15__1300->SetBinContent(322,0.0005502189);
   ThetaY_10_15__1300->SetBinError(309,0.0001075315);
   ThetaY_10_15__1300->SetBinError(310,0.001853164);
   ThetaY_10_15__1300->SetBinError(311,0.003562877);
   ThetaY_10_15__1300->SetBinError(312,0.00426937);
   ThetaY_10_15__1300->SetBinError(313,0.004597007);
   ThetaY_10_15__1300->SetBinError(314,0.004788088);
   ThetaY_10_15__1300->SetBinError(315,0.004885937);
   ThetaY_10_15__1300->SetBinError(316,0.004887281);
   ThetaY_10_15__1300->SetBinError(317,0.004808462);
   ThetaY_10_15__1300->SetBinError(318,0.004617768);
   ThetaY_10_15__1300->SetBinError(319,0.004227928);
   ThetaY_10_15__1300->SetBinError(320,0.0035726);
   ThetaY_10_15__1300->SetBinError(321,0.001884801);
   ThetaY_10_15__1300->SetBinError(322,0.000112313);
   ThetaY_10_15__1300->SetEntries(389718);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1300->SetLineColor(ci);
   ThetaY_10_15__1300->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1300->SetMarkerColor(ci);
   ThetaY_10_15__1300->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1300->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1300->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1300->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1300->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1300->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1300->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1300->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1300->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1300->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1300->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1300->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1300->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1300->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1300->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1300->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1300->Draw("AEsame");
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
   
   Double_t _fx3434[14] = {
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
   Double_t _fy3434[14] = {
   0,
   0.3138148,
   0.6483149,
   0.9298799,
   0.8901422,
   1,
   0.8536425,
   0.9229034,
   0.8940843,
   0.482429,
   0.05480917,
   0,
   0,
   0};
   Double_t _felx3434[14] = {
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
   Double_t _fely3434[14] = {
   0,
   0.09323445,
   0.07071713,
   0.07080406,
   0.06433682,
   0.0654996,
   0.05927651,
   0.06163253,
   0.06164916,
   0.0470654,
   0.01704078,
   0,
   0,
   0};
   Double_t _fehx3434[14] = {
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
   Double_t _fehy3434[14] = {
   16.27025,
   0.1261458,
   0.07888936,
   0.07641427,
   0.06916557,
   0.06993863,
   0.06354422,
   0.06589401,
   0.06605547,
   0.05189863,
   0.0233917,
   0.01413237,
   0.05078032,
   14.86179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3434,_fy3434,_felx3434,_fehx3434,_fely3434,_fehy3434);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3434 = new TH1F("Graph_Graph3434","",100,-100,100);
   Graph_Graph3434->SetMinimum(0);
   Graph_Graph3434->SetMaximum(1.5);
   Graph_Graph3434->SetDirectory(0);
   Graph_Graph3434->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3434->SetLineColor(ci);
   Graph_Graph3434->GetXaxis()->SetRange(1,100);
   Graph_Graph3434->GetXaxis()->CenterTitle(true);
   Graph_Graph3434->GetXaxis()->SetLabelFont(42);
   Graph_Graph3434->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3434->GetXaxis()->SetTitleFont(42);
   Graph_Graph3434->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3434->GetYaxis()->CenterTitle(true);
   Graph_Graph3434->GetYaxis()->SetLabelFont(42);
   Graph_Graph3434->GetYaxis()->SetTitleFont(42);
   Graph_Graph3434->GetZaxis()->SetLabelFont(42);
   Graph_Graph3434->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3434->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3434);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.146049,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1301 = new TH2D("ThetaY_vs_Y_10_15__1301","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8049,22);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8075,6534);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8101,24152);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8127,34680);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8153,40207);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8179,43619);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8205,45420);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8231,45445);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8257,43991);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8283,40571);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8309,34010);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8335,24284);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8361,6759);
   ThetaY_vs_Y_10_15__1301->SetBinContent(8387,24);
   ThetaY_vs_Y_10_15__1301->SetEntries(389718);
   ThetaY_vs_Y_10_15__1301->SetContour(20);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(1,2272.25);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(2,4544.5);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(3,6816.75);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(4,9089);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(5,11361.25);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(6,13633.5);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(7,15905.75);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(8,18178);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(9,20450.25);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(10,22722.5);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(11,24994.75);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(12,27267);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(13,29539.25);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(14,31811.5);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(15,34083.75);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(16,36356);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(17,38628.25);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(18,40900.5);
   ThetaY_vs_Y_10_15__1301->SetContourLevel(19,43172.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1301->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1301->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1301->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1301->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1301->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1301->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1301->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1301->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1301->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1301->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1301->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1301->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1301->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1301->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1301->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1301->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
