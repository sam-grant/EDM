void S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06496477,125,1.23433);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__948 = new TH1D("S18_ThetaY_mI5_0__948","",630,-1575,1575);
   S18_ThetaY_mI5_0__948->SetBinContent(310,0.1163366);
   S18_ThetaY_mI5_0__948->SetBinContent(311,0.5173267);
   S18_ThetaY_mI5_0__948->SetBinContent(312,0.8069307);
   S18_ThetaY_mI5_0__948->SetBinContent(313,0.8985149);
   S18_ThetaY_mI5_0__948->SetBinContent(314,0.9356436);
   S18_ThetaY_mI5_0__948->SetBinContent(315,1);
   S18_ThetaY_mI5_0__948->SetBinContent(316,0.9950495);
   S18_ThetaY_mI5_0__948->SetBinContent(317,0.9306931);
   S18_ThetaY_mI5_0__948->SetBinContent(318,0.9554455);
   S18_ThetaY_mI5_0__948->SetBinContent(319,0.8539604);
   S18_ThetaY_mI5_0__948->SetBinContent(320,0.740099);
   S18_ThetaY_mI5_0__948->SetBinContent(321,0.3069307);
   S18_ThetaY_mI5_0__948->SetBinContent(322,0.0470297);
   S18_ThetaY_mI5_0__948->SetBinError(310,0.01696944);
   S18_ThetaY_mI5_0__948->SetBinError(311,0.03578424);
   S18_ThetaY_mI5_0__948->SetBinError(312,0.04469176);
   S18_ThetaY_mI5_0__948->SetBinError(313,0.0471598);
   S18_ThetaY_mI5_0__948->SetBinError(314,0.04812431);
   S18_ThetaY_mI5_0__948->SetBinError(315,0.04975186);
   S18_ThetaY_mI5_0__948->SetBinError(316,0.04962856);
   S18_ThetaY_mI5_0__948->SetBinError(317,0.04799683);
   S18_ThetaY_mI5_0__948->SetBinError(318,0.0486309);
   S18_ThetaY_mI5_0__948->SetBinError(319,0.04597568);
   S18_ThetaY_mI5_0__948->SetBinError(320,0.04280103);
   S18_ThetaY_mI5_0__948->SetBinError(321,0.02756319);
   S18_ThetaY_mI5_0__948->SetBinError(322,0.01078935);
   S18_ThetaY_mI5_0__948->SetMinimum(0);
   S18_ThetaY_mI5_0__948->SetMaximum(1.104401);
   S18_ThetaY_mI5_0__948->SetEntries(3678);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__948->SetLineColor(ci);
   S18_ThetaY_mI5_0__948->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__948->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__948->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__948->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__948->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__948->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__948->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__948->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__948->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__948->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__948->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__948->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__948->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__948->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__948->Draw("AE");
   
   TH1D *ThetaY_mI5_0__949 = new TH1D("ThetaY_mI5_0__949","",630,-1575,1575);
   ThetaY_mI5_0__949->SetBinContent(307,0.005591175);
   ThetaY_mI5_0__949->SetBinContent(308,0.1781978);
   ThetaY_mI5_0__949->SetBinContent(309,0.5124462);
   ThetaY_mI5_0__949->SetBinContent(310,0.7101294);
   ThetaY_mI5_0__949->SetBinContent(311,0.8375881);
   ThetaY_mI5_0__949->SetBinContent(312,0.9255403);
   ThetaY_mI5_0__949->SetBinContent(313,0.9577649);
   ThetaY_mI5_0__949->SetBinContent(314,0.9914626);
   ThetaY_mI5_0__949->SetBinContent(315,1);
   ThetaY_mI5_0__949->SetBinContent(316,1.004001);
   ThetaY_mI5_0__949->SetBinContent(317,1.001138);
   ThetaY_mI5_0__949->SetBinContent(318,0.9671058);
   ThetaY_mI5_0__949->SetBinContent(319,0.9252892);
   ThetaY_mI5_0__949->SetBinContent(320,0.8459916);
   ThetaY_mI5_0__949->SetBinContent(321,0.7049735);
   ThetaY_mI5_0__949->SetBinContent(322,0.5057502);
   ThetaY_mI5_0__949->SetBinContent(323,0.1773775);
   ThetaY_mI5_0__949->SetBinContent(324,0.005775315);
   ThetaY_mI5_0__949->SetBinError(307,0.0003059355);
   ThetaY_mI5_0__949->SetBinError(308,0.001727147);
   ThetaY_mI5_0__949->SetBinError(309,0.002928886);
   ThetaY_mI5_0__949->SetBinError(310,0.00344784);
   ThetaY_mI5_0__949->SetBinError(311,0.003744497);
   ThetaY_mI5_0__949->SetBinError(312,0.003936189);
   ThetaY_mI5_0__949->SetBinError(313,0.004004126);
   ThetaY_mI5_0__949->SetBinError(314,0.004073957);
   ThetaY_mI5_0__949->SetBinError(315,0.00409146);
   ThetaY_mI5_0__949->SetBinError(316,0.004099636);
   ThetaY_mI5_0__949->SetBinError(317,0.004093788);
   ThetaY_mI5_0__949->SetBinError(318,0.004023605);
   ThetaY_mI5_0__949->SetBinError(319,0.003935655);
   ThetaY_mI5_0__949->SetBinError(320,0.003763235);
   ThetaY_mI5_0__949->SetBinError(321,0.0034353);
   ThetaY_mI5_0__949->SetBinError(322,0.002909687);
   ThetaY_mI5_0__949->SetBinError(323,0.001723168);
   ThetaY_mI5_0__949->SetBinError(324,0.0003109325);
   ThetaY_mI5_0__949->SetEntries(732144);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__949->SetLineColor(ci);
   ThetaY_mI5_0__949->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__949->SetMarkerColor(ci);
   ThetaY_mI5_0__949->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__949->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__949->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__949->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__949->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__949->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__949->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__949->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__949->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__949->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__949->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__949->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__949->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__949->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__949->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__949->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__949->Draw("AEsame");
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
   
   Double_t _fx3317[18] = {
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
   Double_t _fy3317[18] = {
   0,
   0,
   0,
   0.1638246,
   0.6176386,
   0.8718483,
   0.9381372,
   0.9437003,
   1,
   0.9910843,
   0.9296348,
   0.9879431,
   0.9229119,
   0.8748302,
   0.4353791,
   0.09298998,
   0,
   0};
   Double_t _felx3317[18] = {
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
   Double_t _fely3317[18] = {
   0,
   0,
   0,
   0.02382385,
   0.04277742,
   0.04840411,
   0.04937223,
   0.04867143,
   0.04989876,
   0.04957516,
   0.04807097,
   0.05043042,
   0.04981815,
   0.05071333,
   0.03910241,
   0.02115038,
   0,
   0};
   Double_t _fehx3317[18] = {
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
   Double_t _fehy3317[18] = {
   0.817282,
   0.02557483,
   0.008892877,
   0.02756924,
   0.04584889,
   0.05116998,
   0.05204248,
   0.05124968,
   0.05245389,
   0.0521201,
   0.05062421,
   0.05307374,
   0.05258367,
   0.05374301,
   0.04278352,
   0.02661175,
   0.02569311,
   0.7911542};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3317,_fy3317,_felx3317,_fehx3317,_fely3317,_fehy3317);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3317 = new TH1F("Graph_Graph3317","",100,-100,100);
   Graph_Graph3317->SetMinimum(0);
   Graph_Graph3317->SetMaximum(1.5);
   Graph_Graph3317->SetDirectory(0);
   Graph_Graph3317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3317->SetLineColor(ci);
   Graph_Graph3317->GetXaxis()->SetRange(1,100);
   Graph_Graph3317->GetXaxis()->CenterTitle(true);
   Graph_Graph3317->GetXaxis()->SetLabelFont(42);
   Graph_Graph3317->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3317->GetXaxis()->SetTitleFont(42);
   Graph_Graph3317->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3317->GetYaxis()->CenterTitle(true);
   Graph_Graph3317->GetYaxis()->SetLabelFont(42);
   Graph_Graph3317->GetYaxis()->SetTitleFont(42);
   Graph_Graph3317->GetZaxis()->SetLabelFont(42);
   Graph_Graph3317->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3317->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3317);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.104401,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__950 = new TH2D("ThetaY_vs_Y_mI5_0__950","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(7994,334);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8020,10645);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8046,30612);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8072,42421);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8098,50035);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8124,55289);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8150,57214);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8176,59227);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8202,59737);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8228,59976);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8254,59805);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8280,57772);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8306,55274);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8332,50537);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8358,42113);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8384,30212);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8410,10596);
   ThetaY_vs_Y_mI5_0__950->SetBinContent(8436,345);
   ThetaY_vs_Y_mI5_0__950->SetEntries(732144);
   ThetaY_vs_Y_mI5_0__950->SetContour(20);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(1,2998.8);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(2,5997.6);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(3,8996.4);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(4,11995.2);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(5,14994);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(6,17992.8);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(7,20991.6);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(8,23990.4);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(9,26989.2);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(10,29988);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(11,32986.8);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(12,35985.6);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(13,38984.4);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(14,41983.2);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(15,44982);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(16,47980.8);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(17,50979.6);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(18,53978.4);
   ThetaY_vs_Y_mI5_0__950->SetContourLevel(19,56977.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__950->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__950->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__950->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__950->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__950->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__950->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__950->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__950->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__950->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__950->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__950->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__950->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__950->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__950->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__950->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__950->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-5_0","Reco vertices","lpf");
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
