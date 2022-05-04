void S12_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:10 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07792078,125,1.480495);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__1734 = new TH1D("S12_ThetaY_mI25_mI20__1734","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__1734->SetBinContent(314,0.1219512);
   S12_ThetaY_mI25_mI20__1734->SetBinContent(315,0.9268293);
   S12_ThetaY_mI25_mI20__1734->SetBinContent(316,1);
   S12_ThetaY_mI25_mI20__1734->SetBinContent(317,1);
   S12_ThetaY_mI25_mI20__1734->SetBinContent(318,0.4878049);
   S12_ThetaY_mI25_mI20__1734->SetBinError(314,0.05453824);
   S12_ThetaY_mI25_mI20__1734->SetBinError(315,0.1503516);
   S12_ThetaY_mI25_mI20__1734->SetBinError(316,0.1561738);
   S12_ThetaY_mI25_mI20__1734->SetBinError(317,0.1561738);
   S12_ThetaY_mI25_mI20__1734->SetBinError(318,0.1090765);
   S12_ThetaY_mI25_mI20__1734->SetMinimum(0);
   S12_ThetaY_mI25_mI20__1734->SetMaximum(1.324653);
   S12_ThetaY_mI25_mI20__1734->SetEntries(145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1734->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__1734->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1734->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__1734->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__1734->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__1734->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1734->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1734->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1734->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__1734->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__1734->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1734->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1734->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1734->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1734->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1734->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1735 = new TH1D("ThetaY_mI25_mI20__1735","",630,-1575,1575);
   ThetaY_mI25_mI20__1735->SetBinContent(312,0.02230056);
   ThetaY_mI25_mI20__1735->SetBinContent(313,0.5062457);
   ThetaY_mI25_mI20__1735->SetBinContent(314,1.003065);
   ThetaY_mI25_mI20__1735->SetBinContent(315,1.20423);
   ThetaY_mI25_mI20__1735->SetBinContent(316,1.184075);
   ThetaY_mI25_mI20__1735->SetBinContent(317,1);
   ThetaY_mI25_mI20__1735->SetBinContent(318,0.510154);
   ThetaY_mI25_mI20__1735->SetBinContent(319,0.02268373);
   ThetaY_mI25_mI20__1735->SetBinError(312,0.001307282);
   ThetaY_mI25_mI20__1735->SetBinError(313,0.006228623);
   ThetaY_mI25_mI20__1735->SetBinError(314,0.008767505);
   ThetaY_mI25_mI20__1735->SetBinError(315,0.009606521);
   ThetaY_mI25_mI20__1735->SetBinError(316,0.009525791);
   ThetaY_mI25_mI20__1735->SetBinError(317,0.008754098);
   ThetaY_mI25_mI20__1735->SetBinError(318,0.00625262);
   ThetaY_mI25_mI20__1735->SetBinError(319,0.001318465);
   ThetaY_mI25_mI20__1735->SetEntries(71153);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1735->SetLineColor(ci);
   ThetaY_mI25_mI20__1735->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1735->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1735->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1735->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1735->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1735->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1735->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1735->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1735->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1735->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1735->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1735->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1735->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1735->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1735->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1735->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1735->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1735->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1735->Draw("AEsame");
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
   
   Double_t _fx3579[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3579[8] = {
   0,
   0,
   0.1215785,
   0.7696446,
   0.8445408,
   1,
   0.9561914,
   0};
   Double_t _felx3579[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3579[8] = {
   0,
   0,
   0.05252275,
   0.1244474,
   0.131525,
   0.1557726,
   0.2123125,
   0};
   Double_t _fehx3579[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3579[8] = {
   2.019918,
   0.08871033,
   0.08227355,
   0.146412,
   0.1538067,
   0.1821712,
   0.2656853,
   1.985692};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3579,_fy3579,_felx3579,_fehx3579,_fely3579,_fehy3579);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3579 = new TH1F("Graph_Graph3579","",100,-100,100);
   Graph_Graph3579->SetMinimum(0);
   Graph_Graph3579->SetMaximum(1.5);
   Graph_Graph3579->SetDirectory(0);
   Graph_Graph3579->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3579->SetLineColor(ci);
   Graph_Graph3579->GetXaxis()->SetRange(1,100);
   Graph_Graph3579->GetXaxis()->CenterTitle(true);
   Graph_Graph3579->GetXaxis()->SetLabelFont(42);
   Graph_Graph3579->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3579->GetXaxis()->SetTitleFont(42);
   Graph_Graph3579->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3579->GetYaxis()->CenterTitle(true);
   Graph_Graph3579->GetYaxis()->SetLabelFont(42);
   Graph_Graph3579->GetYaxis()->SetTitleFont(42);
   Graph_Graph3579->GetZaxis()->SetLabelFont(42);
   Graph_Graph3579->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3579->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3579);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.324653,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1736 = new TH2D("ThetaY_vs_Y_mI25_mI20__1736","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8120,291);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8146,6606);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8172,13089);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8198,15714);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8224,15451);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8250,13049);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8276,6657);
   ThetaY_vs_Y_mI25_mI20__1736->SetBinContent(8302,296);
   ThetaY_vs_Y_mI25_mI20__1736->SetEntries(71153);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1736->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1736->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1736->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1736->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1736->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1736->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1736->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1736->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1736->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1736->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1736->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1736->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1736->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1736->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1736->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1736->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
