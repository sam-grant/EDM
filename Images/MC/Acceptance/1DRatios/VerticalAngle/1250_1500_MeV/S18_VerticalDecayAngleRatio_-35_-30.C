void S18_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06506545,125,1.236243);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__930 = new TH1D("S18_ThetaY_mI35_mI30__930","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__930->SetBinContent(314,0.1);
   S18_ThetaY_mI35_mI30__930->SetBinContent(315,0.8142857);
   S18_ThetaY_mI35_mI30__930->SetBinContent(316,1);
   S18_ThetaY_mI35_mI30__930->SetBinContent(317,0.8142857);
   S18_ThetaY_mI35_mI30__930->SetBinContent(318,0.7714286);
   S18_ThetaY_mI35_mI30__930->SetBinContent(319,0.7285714);
   S18_ThetaY_mI35_mI30__930->SetBinContent(320,0.8);
   S18_ThetaY_mI35_mI30__930->SetBinContent(321,0.5714286);
   S18_ThetaY_mI35_mI30__930->SetBinContent(322,0.3857143);
   S18_ThetaY_mI35_mI30__930->SetBinContent(323,0.08571429);
   S18_ThetaY_mI35_mI30__930->SetBinError(314,0.03779645);
   S18_ThetaY_mI35_mI30__930->SetBinError(315,0.1078548);
   S18_ThetaY_mI35_mI30__930->SetBinError(316,0.1195229);
   S18_ThetaY_mI35_mI30__930->SetBinError(317,0.1078548);
   S18_ThetaY_mI35_mI30__930->SetBinError(318,0.1049781);
   S18_ThetaY_mI35_mI30__930->SetBinError(319,0.1020204);
   S18_ThetaY_mI35_mI30__930->SetBinError(320,0.1069045);
   S18_ThetaY_mI35_mI30__930->SetBinError(321,0.09035079);
   S18_ThetaY_mI35_mI30__930->SetBinError(322,0.07423075);
   S18_ThetaY_mI35_mI30__930->SetBinError(323,0.03499271);
   S18_ThetaY_mI35_mI30__930->SetMinimum(0);
   S18_ThetaY_mI35_mI30__930->SetMaximum(1.106113);
   S18_ThetaY_mI35_mI30__930->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__930->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__930->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__930->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__930->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__930->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__930->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__930->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__930->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__930->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__930->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__930->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__930->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__930->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__930->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__930->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__930->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__931 = new TH1D("ThetaY_mI35_mI30__931","",630,-1575,1575);
   ThetaY_mI35_mI30__931->SetBinContent(307,0.006040106);
   ThetaY_mI35_mI30__931->SetBinContent(308,0.1877265);
   ThetaY_mI35_mI30__931->SetBinContent(309,0.5328582);
   ThetaY_mI35_mI30__931->SetBinContent(310,0.7080213);
   ThetaY_mI35_mI30__931->SetBinContent(311,0.8259241);
   ThetaY_mI35_mI30__931->SetBinContent(312,0.9193042);
   ThetaY_mI35_mI30__931->SetBinContent(313,0.9577193);
   ThetaY_mI35_mI30__931->SetBinContent(314,1.005557);
   ThetaY_mI35_mI30__931->SetBinContent(315,1.005436);
   ThetaY_mI35_mI30__931->SetBinContent(316,1);
   ThetaY_mI35_mI30__931->SetBinContent(317,1.005557);
   ThetaY_mI35_mI30__931->SetBinContent(318,0.9740275);
   ThetaY_mI35_mI30__931->SetBinContent(319,0.93223);
   ThetaY_mI35_mI30__931->SetBinContent(320,0.8476685);
   ThetaY_mI35_mI30__931->SetBinContent(321,0.7201015);
   ThetaY_mI35_mI30__931->SetBinContent(322,0.498188);
   ThetaY_mI35_mI30__931->SetBinContent(323,0.1754047);
   ThetaY_mI35_mI30__931->SetBinContent(324,0.006885721);
   ThetaY_mI35_mI30__931->SetBinError(307,0.0008542);
   ThetaY_mI35_mI30__931->SetBinError(308,0.004762117);
   ThetaY_mI35_mI30__931->SetBinError(309,0.008023117);
   ThetaY_mI35_mI30__931->SetBinError(310,0.009248269);
   ThetaY_mI35_mI30__931->SetBinError(311,0.009988663);
   ThetaY_mI35_mI30__931->SetBinError(312,0.01053821);
   ThetaY_mI35_mI30__931->SetBinError(313,0.01075614);
   ThetaY_mI35_mI30__931->SetBinError(314,0.0110215);
   ThetaY_mI35_mI30__931->SetBinError(315,0.01102084);
   ThetaY_mI35_mI30__931->SetBinError(316,0.010991);
   ThetaY_mI35_mI30__931->SetBinError(317,0.0110215);
   ThetaY_mI35_mI30__931->SetBinError(318,0.01084733);
   ThetaY_mI35_mI30__931->SetBinError(319,0.01061204);
   ThetaY_mI35_mI30__931->SetBinError(320,0.0101193);
   ThetaY_mI35_mI30__931->SetBinError(321,0.009326832);
   ThetaY_mI35_mI30__931->SetBinError(322,0.007757717);
   ThetaY_mI35_mI30__931->SetBinError(323,0.004603179);
   ThetaY_mI35_mI30__931->SetBinError(324,0.0009120361);
   ThetaY_mI35_mI30__931->SetEntries(101891);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__931->SetLineColor(ci);
   ThetaY_mI35_mI30__931->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__931->SetMarkerColor(ci);
   ThetaY_mI35_mI30__931->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__931->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__931->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__931->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__931->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__931->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__931->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__931->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__931->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__931->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__931->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__931->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__931->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__931->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__931->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__931->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__931->Draw("AEsame");
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
   
   Double_t _fx3311[18] = {
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
   Double_t _fy3311[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.09944738,
   0.8098831,
   1,
   0.8097858,
   0.7919987,
   0.7815361,
   0.9437651,
   0.793539,
   0.7742344,
   0.4886659,
   0};
   Double_t _felx3311[18] = {
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
   Double_t _fely3311[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03668785,
   0.1073154,
   0.1197328,
   0.1073025,
   0.1077953,
   0.10943,
   0.1262303,
   0.1253512,
   0.14854,
   0.1941745,
   0};
   Double_t _fehx3311[18] = {
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
   Double_t _fehy3311[18] = {
   4.435435,
   0.1401821,
   0.04936735,
   0.03715205,
   0.03184778,
   0.02861239,
   0.02746459,
   0.05359816,
   0.1225883,
   0.1350216,
   0.1225735,
   0.1235854,
   0.1259574,
   0.1443798,
   0.1469345,
   0.1802379,
   0.2928304,
   3.881896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3311,_fy3311,_felx3311,_fehx3311,_fely3311,_fehy3311);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3311 = new TH1F("Graph_Graph3311","",100,-100,100);
   Graph_Graph3311->SetMinimum(0);
   Graph_Graph3311->SetMaximum(1.5);
   Graph_Graph3311->SetDirectory(0);
   Graph_Graph3311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3311->SetLineColor(ci);
   Graph_Graph3311->GetXaxis()->SetRange(1,100);
   Graph_Graph3311->GetXaxis()->CenterTitle(true);
   Graph_Graph3311->GetXaxis()->SetLabelFont(42);
   Graph_Graph3311->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3311->GetXaxis()->SetTitleFont(42);
   Graph_Graph3311->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3311->GetYaxis()->CenterTitle(true);
   Graph_Graph3311->GetYaxis()->SetLabelFont(42);
   Graph_Graph3311->GetYaxis()->SetTitleFont(42);
   Graph_Graph3311->GetZaxis()->SetLabelFont(42);
   Graph_Graph3311->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3311->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3311);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106113,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__932 = new TH2D("ThetaY_vs_Y_mI35_mI30__932","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(7988,50);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8014,1554);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8040,4411);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8066,5861);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8092,6837);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8118,7610);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8144,7928);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8170,8324);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8196,8323);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8222,8278);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8248,8324);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8274,8063);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8300,7717);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8326,7017);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8352,5961);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8378,4124);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8404,1452);
   ThetaY_vs_Y_mI35_mI30__932->SetBinContent(8430,57);
   ThetaY_vs_Y_mI35_mI30__932->SetEntries(101891);
   ThetaY_vs_Y_mI35_mI30__932->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(1,416.2);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(2,832.4);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(3,1248.6);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(4,1664.8);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(5,2081);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(6,2497.2);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(7,2913.4);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(8,3329.6);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(9,3745.8);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(10,4162);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(11,4578.2);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(12,4994.4);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(13,5410.6);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(14,5826.8);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(15,6243);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(16,6659.2);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(17,7075.4);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(18,7491.6);
   ThetaY_vs_Y_mI35_mI30__932->SetContourLevel(19,7907.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__932->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__932->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__932->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__932->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__932->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__932->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__932->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__932->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__932->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__932->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__932->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__932->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__932->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__932->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__932->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__932->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
