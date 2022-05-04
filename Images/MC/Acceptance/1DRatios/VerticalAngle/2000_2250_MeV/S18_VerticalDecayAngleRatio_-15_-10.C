void S18_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06856462,125,1.302728);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__1455 = new TH1D("S18_ThetaY_mI15_mI10__1455","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(313,0.3093923);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(314,0.7569061);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(315,1.033149);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(316,0.9337017);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(317,1);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(318,0.7845304);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(319,0.4696133);
   S18_ThetaY_mI15_mI10__1455->SetBinContent(320,0.09392265);
   S18_ThetaY_mI15_mI10__1455->SetBinError(313,0.04134428);
   S18_ThetaY_mI15_mI10__1455->SetBinError(314,0.06466685);
   S18_ThetaY_mI15_mI10__1455->SetBinError(315,0.07555135);
   S18_ThetaY_mI15_mI10__1455->SetBinError(316,0.0718232);
   S18_ThetaY_mI15_mI10__1455->SetBinError(317,0.07432941);
   S18_ThetaY_mI15_mI10__1455->SetBinError(318,0.06583633);
   S18_ThetaY_mI15_mI10__1455->SetBinError(319,0.05093671);
   S18_ThetaY_mI15_mI10__1455->SetBinError(320,0.02277959);
   S18_ThetaY_mI15_mI10__1455->SetMinimum(0);
   S18_ThetaY_mI15_mI10__1455->SetMaximum(1.165598);
   S18_ThetaY_mI15_mI10__1455->SetEntries(974);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1455->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__1455->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1455->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__1455->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__1455->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__1455->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1455->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1455->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1455->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__1455->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__1455->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1455->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1455->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1455->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1455->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1455->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1456 = new TH1D("ThetaY_mI15_mI10__1456","",630,-1575,1575);
   ThetaY_mI15_mI10__1456->SetBinContent(310,0.001715056);
   ThetaY_mI15_mI10__1456->SetBinContent(311,0.215313);
   ThetaY_mI15_mI10__1456->SetBinContent(312,0.6351096);
   ThetaY_mI15_mI10__1456->SetBinContent(313,0.8662747);
   ThetaY_mI15_mI10__1456->SetBinContent(314,0.9910082);
   ThetaY_mI15_mI10__1456->SetBinContent(315,1.059635);
   ThetaY_mI15_mI10__1456->SetBinContent(316,1.042068);
   ThetaY_mI15_mI10__1456->SetBinContent(317,1);
   ThetaY_mI15_mI10__1456->SetBinContent(318,0.8657111);
   ThetaY_mI15_mI10__1456->SetBinContent(319,0.6356487);
   ThetaY_mI15_mI10__1456->SetBinContent(320,0.2118094);
   ThetaY_mI15_mI10__1456->SetBinContent(321,0.001519049);
   ThetaY_mI15_mI10__1456->SetBinError(310,0.0002049884);
   ThetaY_mI15_mI10__1456->SetBinError(311,0.002296811);
   ThetaY_mI15_mI10__1456->SetBinError(312,0.003944704);
   ThetaY_mI15_mI10__1456->SetBinError(313,0.004606997);
   ThetaY_mI15_mI10__1456->SetBinError(314,0.004927524);
   ThetaY_mI15_mI10__1456->SetBinError(315,0.005095282);
   ThetaY_mI15_mI10__1456->SetBinError(316,0.00505287);
   ThetaY_mI15_mI10__1456->SetBinError(317,0.004949828);
   ThetaY_mI15_mI10__1456->SetBinError(318,0.004605498);
   ThetaY_mI15_mI10__1456->SetBinError(319,0.003946378);
   ThetaY_mI15_mI10__1456->SetBinError(320,0.002278047);
   ThetaY_mI15_mI10__1456->SetBinError(321,0.0001929195);
   ThetaY_mI15_mI10__1456->SetEntries(307166);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1456->SetLineColor(ci);
   ThetaY_mI15_mI10__1456->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1456->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1456->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1456->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1456->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1456->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1456->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1456->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1456->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1456->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1456->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1456->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1456->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1456->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1456->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1456->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1456->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1456->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1456->Draw("AEsame");
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
   
   Double_t _fx3486[12] = {
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
   Double_t _fy3486[12] = {
   0,
   0,
   0,
   0.3571526,
   0.7637738,
   0.9750048,
   0.8960085,
   1,
   0.9062265,
   0.7387938,
   0.4434301,
   0};
   Double_t _felx3486[12] = {
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
   Double_t _fely3486[12] = {
   0,
   0,
   0,
   0.0476206,
   0.06528339,
   0.07138868,
   0.06899139,
   0.07442432,
   0.07611066,
   0.08010492,
   0.1065792,
   0};
   Double_t _fehx3486[12] = {
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
   Double_t _fehy3486[12] = {
   6.009324,
   0.04724497,
   0.01601574,
   0.05443809,
   0.0711188,
   0.0768191,
   0.07452148,
   0.08018266,
   0.08279037,
   0.08930315,
   0.1359087,
   6.796297};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3486,_fy3486,_felx3486,_fehx3486,_fely3486,_fehy3486);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3486 = new TH1F("Graph_Graph3486","",100,-100,100);
   Graph_Graph3486->SetMinimum(0);
   Graph_Graph3486->SetMaximum(1.5);
   Graph_Graph3486->SetDirectory(0);
   Graph_Graph3486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3486->SetLineColor(ci);
   Graph_Graph3486->GetXaxis()->SetRange(1,100);
   Graph_Graph3486->GetXaxis()->CenterTitle(true);
   Graph_Graph3486->GetXaxis()->SetLabelFont(42);
   Graph_Graph3486->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3486->GetXaxis()->SetTitleFont(42);
   Graph_Graph3486->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3486->GetYaxis()->CenterTitle(true);
   Graph_Graph3486->GetYaxis()->SetLabelFont(42);
   Graph_Graph3486->GetYaxis()->SetTitleFont(42);
   Graph_Graph3486->GetZaxis()->SetLabelFont(42);
   Graph_Graph3486->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3486->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3486);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.165598,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1457 = new TH2D("ThetaY_vs_Y_mI15_mI10__1457","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8070,70);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8096,8788);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8122,25922);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8148,35357);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8174,40448);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8200,43249);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8226,42532);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8252,40815);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8278,35334);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8304,25944);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8330,8645);
   ThetaY_vs_Y_mI15_mI10__1457->SetBinContent(8356,62);
   ThetaY_vs_Y_mI15_mI10__1457->SetEntries(307166);
   ThetaY_vs_Y_mI15_mI10__1457->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(1,2162.45);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(2,4324.9);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(3,6487.35);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(4,8649.8);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(5,10812.25);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(6,12974.7);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(7,15137.15);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(8,17299.6);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(9,19462.05);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(10,21624.5);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(11,23786.95);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(12,25949.4);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(13,28111.85);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(14,30274.3);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(15,32436.75);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(16,34599.2);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(17,36761.65);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(18,38924.1);
   ThetaY_vs_Y_mI15_mI10__1457->SetContourLevel(19,41086.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1457->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1457->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1457->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1457->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1457->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1457->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1457->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1457->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1457->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1457->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1457->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1457->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1457->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1457->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1457->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1457->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
