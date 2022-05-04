void S12S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3208365,125,6.095892);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_20_25__1533 = new TH1D("S12S18_ThetaY_20_25__1533","",630,-1575,1575);
   S12S18_ThetaY_20_25__1533->SetBinContent(311,1);
   S12S18_ThetaY_20_25__1533->SetBinContent(312,2.657895);
   S12S18_ThetaY_20_25__1533->SetBinContent(313,3.684211);
   S12S18_ThetaY_20_25__1533->SetBinContent(314,3.894737);
   S12S18_ThetaY_20_25__1533->SetBinContent(315,4.763158);
   S12S18_ThetaY_20_25__1533->SetBinContent(316,4.473684);
   S12S18_ThetaY_20_25__1533->SetBinContent(317,2.447368);
   S12S18_ThetaY_20_25__1533->SetBinError(311,0.1622214);
   S12S18_ThetaY_20_25__1533->SetBinError(312,0.2644704);
   S12S18_ThetaY_20_25__1533->SetBinError(313,0.3113726);
   S12S18_ThetaY_20_25__1533->SetBinError(314,0.3201454);
   S12S18_ThetaY_20_25__1533->SetBinError(315,0.3540427);
   S12S18_ThetaY_20_25__1533->SetBinError(316,0.3431159);
   S12S18_ThetaY_20_25__1533->SetBinError(317,0.2537803);
   S12S18_ThetaY_20_25__1533->SetMinimum(0);
   S12S18_ThetaY_20_25__1533->SetMaximum(5.454219);
   S12S18_ThetaY_20_25__1533->SetEntries(871);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1533->SetLineColor(ci);
   S12S18_ThetaY_20_25__1533->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1533->SetMarkerColor(ci);
   S12S18_ThetaY_20_25__1533->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_20_25__1533->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_20_25__1533->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1533->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1533->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1533->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_20_25__1533->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_20_25__1533->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1533->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1533->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1533->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1533->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1533->Draw("AE");
   
   TH1D *ThetaY_20_25__1534 = new TH1D("ThetaY_20_25__1534","",630,-1575,1575);
   ThetaY_20_25__1534->SetBinContent(310,0.006898138);
   ThetaY_20_25__1534->SetBinContent(311,1);
   ThetaY_20_25__1534->SetBinContent(312,3.031961);
   ThetaY_20_25__1534->SetBinContent(313,4.058864);
   ThetaY_20_25__1534->SetBinContent(314,4.684755);
   ThetaY_20_25__1534->SetBinContent(315,4.915613);
   ThetaY_20_25__1534->SetBinContent(316,4.958381);
   ThetaY_20_25__1534->SetBinContent(317,4.736031);
   ThetaY_20_25__1534->SetBinContent(318,4.00138);
   ThetaY_20_25__1534->SetBinContent(319,2.96436);
   ThetaY_20_25__1534->SetBinContent(320,0.9917222);
   ThetaY_20_25__1534->SetBinContent(321,0.008277765);
   ThetaY_20_25__1534->SetBinError(310,0.001259422);
   ThetaY_20_25__1534->SetBinError(311,0.0151637);
   ThetaY_20_25__1534->SetBinError(312,0.02640384);
   ThetaY_20_25__1534->SetBinError(313,0.03054974);
   ThetaY_20_25__1534->SetBinError(314,0.03282077);
   ThetaY_20_25__1534->SetBinError(315,0.03361972);
   ThetaY_20_25__1534->SetBinError(316,0.03376566);
   ThetaY_20_25__1534->SetBinError(317,0.0329999);
   ThetaY_20_25__1534->SetBinError(318,0.03033264);
   ThetaY_20_25__1534->SetBinError(319,0.02610783);
   ThetaY_20_25__1534->SetBinError(320,0.01510081);
   ThetaY_20_25__1534->SetBinError(321,0.001379628);
   ThetaY_20_25__1534->SetEntries(153773);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1534->SetLineColor(ci);
   ThetaY_20_25__1534->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1534->SetMarkerColor(ci);
   ThetaY_20_25__1534->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1534->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1534->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1534->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1534->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1534->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1534->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1534->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1534->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1534->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1534->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1534->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1534->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1534->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1534->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1534->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1534->Draw("AEsame");
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
   
   Double_t _fx3512[12] = {
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
   Double_t _fy3512[12] = {
   0,
   1,
   0.8766255,
   0.907695,
   0.831364,
   0.9689856,
   0.9022469,
   0.5167551,
   0,
   0,
   0,
   0};
   Double_t _felx3512[12] = {
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
   Double_t _fely3512[12] = {
   0,
   0.1621907,
   0.08741255,
   0.07692367,
   0.06850629,
   0.07225991,
   0.06940149,
   0.05360787,
   0,
   0,
   0,
   0};
   Double_t _fehx3512[12] = {
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
   Double_t _fehy3512[12] = {
   7.243315,
   0.1909462,
   0.0966033,
   0.08374101,
   0.0744018,
   0.07786414,
   0.07496036,
   0.05948293,
   0.01210845,
   0.01634464,
   0.04886275,
   6.005018};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3512,_fy3512,_felx3512,_fehx3512,_fely3512,_fehy3512);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3512 = new TH1F("Graph_Graph3512","",100,-100,100);
   Graph_Graph3512->SetMinimum(0);
   Graph_Graph3512->SetMaximum(1.5);
   Graph_Graph3512->SetDirectory(0);
   Graph_Graph3512->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3512->SetLineColor(ci);
   Graph_Graph3512->GetXaxis()->SetRange(1,100);
   Graph_Graph3512->GetXaxis()->CenterTitle(true);
   Graph_Graph3512->GetXaxis()->SetLabelFont(42);
   Graph_Graph3512->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3512->GetXaxis()->SetTitleFont(42);
   Graph_Graph3512->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3512->GetYaxis()->CenterTitle(true);
   Graph_Graph3512->GetYaxis()->SetLabelFont(42);
   Graph_Graph3512->GetYaxis()->SetTitleFont(42);
   Graph_Graph3512->GetZaxis()->SetLabelFont(42);
   Graph_Graph3512->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3512->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3512);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.454219,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1535 = new TH2D("ThetaY_vs_Y_20_25__1535","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8077,30);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8103,4349);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8129,13186);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8155,17652);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8181,20374);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8207,21378);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8233,21564);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8259,20597);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8285,17402);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8311,12892);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8337,4313);
   ThetaY_vs_Y_20_25__1535->SetBinContent(8363,36);
   ThetaY_vs_Y_20_25__1535->SetEntries(153773);
   ThetaY_vs_Y_20_25__1535->SetContour(20);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(1,1078.2);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(2,2156.4);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(3,3234.6);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(4,4312.8);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(5,5391);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(6,6469.2);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(7,7547.4);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(8,8625.6);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(9,9703.8);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(10,10782);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(11,11860.2);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(12,12938.4);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(13,14016.6);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(14,15094.8);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(15,16173);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(16,17251.2);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(17,18329.4);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(18,19407.6);
   ThetaY_vs_Y_20_25__1535->SetContourLevel(19,20485.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1535->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1535->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1535->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1535->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1535->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1535->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1535->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1535->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1535->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1535->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1535->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1535->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1535->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1535->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1535->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1535->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_20_25","Reco vertices","lpf");
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
