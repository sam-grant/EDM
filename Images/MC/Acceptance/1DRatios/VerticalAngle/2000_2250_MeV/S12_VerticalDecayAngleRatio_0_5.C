void S12_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07932967,125,1.507264);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__1407 = new TH1D("S12_ThetaY_0_5__1407","",630,-1575,1575);
   S12_ThetaY_0_5__1407->SetBinContent(311,0.03398058);
   S12_ThetaY_0_5__1407->SetBinContent(312,0.4320388);
   S12_ThetaY_0_5__1407->SetBinContent(313,1);
   S12_ThetaY_0_5__1407->SetBinContent(314,1.082524);
   S12_ThetaY_0_5__1407->SetBinContent(315,1.208738);
   S12_ThetaY_0_5__1407->SetBinContent(316,1.165049);
   S12_ThetaY_0_5__1407->SetBinContent(317,1.097087);
   S12_ThetaY_0_5__1407->SetBinContent(318,0.7864078);
   S12_ThetaY_0_5__1407->SetBinContent(319,0.1067961);
   S12_ThetaY_0_5__1407->SetBinContent(320,0.004854369);
   S12_ThetaY_0_5__1407->SetBinError(311,0.01284345);
   S12_ThetaY_0_5__1407->SetBinError(312,0.04579602);
   S12_ThetaY_0_5__1407->SetBinError(313,0.0696733);
   S12_ThetaY_0_5__1407->SetBinError(314,0.07249119);
   S12_ThetaY_0_5__1407->SetBinError(315,0.07660065);
   S12_ThetaY_0_5__1407->SetBinError(316,0.07520356);
   S12_ThetaY_0_5__1407->SetBinError(317,0.07297717);
   S12_ThetaY_0_5__1407->SetBinError(318,0.06178603);
   S12_ThetaY_0_5__1407->SetBinError(319,0.02276901);
   S12_ThetaY_0_5__1407->SetBinError(320,0.004854369);
   S12_ThetaY_0_5__1407->SetMinimum(0);
   S12_ThetaY_0_5__1407->SetMaximum(1.348604);
   S12_ThetaY_0_5__1407->SetEntries(1425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1407->SetLineColor(ci);
   S12_ThetaY_0_5__1407->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1407->SetMarkerColor(ci);
   S12_ThetaY_0_5__1407->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__1407->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__1407->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1407->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1407->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1407->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__1407->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__1407->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1407->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1407->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1407->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1407->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1407->Draw("AE");
   
   TH1D *ThetaY_0_5__1408 = new TH1D("ThetaY_0_5__1408","",630,-1575,1575);
   ThetaY_0_5__1408->SetBinContent(310,0.001913306);
   ThetaY_0_5__1408->SetBinContent(311,0.2446055);
   ThetaY_0_5__1408->SetBinContent(312,0.7480176);
   ThetaY_0_5__1408->SetBinContent(313,1);
   ThetaY_0_5__1408->SetBinContent(314,1.158698);
   ThetaY_0_5__1408->SetBinContent(315,1.226004);
   ThetaY_0_5__1408->SetBinContent(316,1.217522);
   ThetaY_0_5__1408->SetBinContent(317,1.164608);
   ThetaY_0_5__1408->SetBinContent(318,1.011565);
   ThetaY_0_5__1408->SetBinContent(319,0.7351985);
   ThetaY_0_5__1408->SetBinContent(320,0.2467314);
   ThetaY_0_5__1408->SetBinContent(321,0.001849529);
   ThetaY_0_5__1408->SetBinError(310,0.0002016802);
   ThetaY_0_5__1408->SetBinError(311,0.002280364);
   ThetaY_0_5__1408->SetBinError(312,0.00398774);
   ThetaY_0_5__1408->SetBinError(313,0.004610743);
   ThetaY_0_5__1408->SetBinError(314,0.004963135);
   ThetaY_0_5__1408->SetBinError(315,0.005105249);
   ThetaY_0_5__1408->SetBinError(316,0.005087557);
   ThetaY_0_5__1408->SetBinError(317,0.004975776);
   ThetaY_0_5__1408->SetBinError(318,0.004637328);
   ThetaY_0_5__1408->SetBinError(319,0.003953423);
   ThetaY_0_5__1408->SetBinError(320,0.002290252);
   ThetaY_0_5__1408->SetBinError(321,0.0001982903);
   ThetaY_0_5__1408->SetEntries(411907);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1408->SetLineColor(ci);
   ThetaY_0_5__1408->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1408->SetMarkerColor(ci);
   ThetaY_0_5__1408->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1408->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1408->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1408->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1408->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1408->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1408->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1408->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1408->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1408->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1408->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1408->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1408->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1408->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1408->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1408->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1408->Draw("AEsame");
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
   
   Double_t _fx3470[12] = {
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
   Double_t _fy3470[12] = {
   0,
   0.1389199,
   0.5775784,
   1,
   0.9342591,
   0.9859168,
   0.9569017,
   0.9420228,
   0.777417,
   0.1452616,
   0.01967471,
   0};
   Double_t _felx3470[12] = {
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
   Double_t _fely3470[12] = {
   0,
   0.05124474,
   0.06118436,
   0.0697683,
   0.06264291,
   0.06257211,
   0.06185339,
   0.06274454,
   0.06111974,
   0.03074211,
   0.0162761,
   0};
   Double_t _fehx3470[12] = {
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
   Double_t _fehy3470[12] = {
   4.719073,
   0.07485889,
   0.06803831,
   0.07481598,
   0.06699212,
   0.06667631,
   0.06598801,
   0.06707089,
   0.06612612,
   0.03805642,
   0.04524894,
   4.883528};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3470,_fy3470,_felx3470,_fehx3470,_fely3470,_fehy3470);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3470 = new TH1F("Graph_Graph3470","",100,-100,100);
   Graph_Graph3470->SetMinimum(0);
   Graph_Graph3470->SetMaximum(1.5);
   Graph_Graph3470->SetDirectory(0);
   Graph_Graph3470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3470->SetLineColor(ci);
   Graph_Graph3470->GetXaxis()->SetRange(1,100);
   Graph_Graph3470->GetXaxis()->CenterTitle(true);
   Graph_Graph3470->GetXaxis()->SetLabelFont(42);
   Graph_Graph3470->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3470->GetXaxis()->SetTitleFont(42);
   Graph_Graph3470->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3470->GetYaxis()->CenterTitle(true);
   Graph_Graph3470->GetYaxis()->SetLabelFont(42);
   Graph_Graph3470->GetYaxis()->SetTitleFont(42);
   Graph_Graph3470->GetZaxis()->SetLabelFont(42);
   Graph_Graph3470->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3470->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3470);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.348604,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1409 = new TH2D("ThetaY_vs_Y_0_5__1409","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8073,90);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8099,11506);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8125,35186);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8151,47039);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8177,54504);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8203,57670);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8229,57271);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8255,54782);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8281,47583);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8307,34583);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8333,11606);
   ThetaY_vs_Y_0_5__1409->SetBinContent(8359,87);
   ThetaY_vs_Y_0_5__1409->SetEntries(411907);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1409->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1409->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1409->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1409->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1409->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1409->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1409->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1409->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1409->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1409->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1409->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1409->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1409->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1409->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1409->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1409->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
