void S12_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-2.968383,125,56.39927);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__1728 = new TH1D("S12_ThetaY_mI35_mI30__1728","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__1728->SetBinContent(315,10);
   S12_ThetaY_mI35_mI30__1728->SetBinContent(316,21);
   S12_ThetaY_mI35_mI30__1728->SetBinContent(317,10);
   S12_ThetaY_mI35_mI30__1728->SetBinContent(318,3);
   S12_ThetaY_mI35_mI30__1728->SetBinContent(319,1);
   S12_ThetaY_mI35_mI30__1728->SetBinError(315,3.162278);
   S12_ThetaY_mI35_mI30__1728->SetBinError(316,4.582576);
   S12_ThetaY_mI35_mI30__1728->SetBinError(317,3.162278);
   S12_ThetaY_mI35_mI30__1728->SetBinError(318,1.732051);
   S12_ThetaY_mI35_mI30__1728->SetBinError(319,1);
   S12_ThetaY_mI35_mI30__1728->SetMinimum(0);
   S12_ThetaY_mI35_mI30__1728->SetMaximum(50.4625);
   S12_ThetaY_mI35_mI30__1728->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1728->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__1728->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1728->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__1728->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__1728->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__1728->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1728->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1728->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1728->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__1728->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__1728->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1728->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1728->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1728->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1728->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1728->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1729 = new TH1D("ThetaY_mI35_mI30__1729","",630,-1575,1575);
   ThetaY_mI35_mI30__1729->SetBinContent(312,0.9296875);
   ThetaY_mI35_mI30__1729->SetBinContent(313,19.01562);
   ThetaY_mI35_mI30__1729->SetBinContent(314,38.76562);
   ThetaY_mI35_mI30__1729->SetBinContent(315,45.07031);
   ThetaY_mI35_mI30__1729->SetBinContent(316,45.875);
   ThetaY_mI35_mI30__1729->SetBinContent(317,37.94531);
   ThetaY_mI35_mI30__1729->SetBinContent(318,19.0625);
   ThetaY_mI35_mI30__1729->SetBinContent(319,1);
   ThetaY_mI35_mI30__1729->SetBinError(312,0.08522431);
   ThetaY_mI35_mI30__1729->SetBinError(313,0.3854343);
   ThetaY_mI35_mI30__1729->SetBinError(314,0.5503239);
   ThetaY_mI35_mI30__1729->SetBinError(315,0.5933901);
   ThetaY_mI35_mI30__1729->SetBinError(316,0.5986639);
   ThetaY_mI35_mI30__1729->SetBinError(317,0.5444702);
   ThetaY_mI35_mI30__1729->SetBinError(318,0.385909);
   ThetaY_mI35_mI30__1729->SetBinError(319,0.08838835);
   ThetaY_mI35_mI30__1729->SetEntries(26581);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1729->SetLineColor(ci);
   ThetaY_mI35_mI30__1729->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1729->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1729->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1729->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1729->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1729->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1729->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1729->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1729->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1729->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1729->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1729->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1729->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1729->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1729->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1729->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1729->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1729->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1729->Draw("AEsame");
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
   
   Double_t _fx3577[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3577[8] = {
   0,
   0,
   0,
   0.2218755,
   0.4577657,
   0.2635372,
   0.157377,
   1};
   Double_t _felx3577[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3577[8] = {
   0,
   0,
   0,
   0.06902874,
   0.09926036,
   0.08200241,
   0.08568875,
   0.8284706};
   Double_t _fehx3577[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3577[8] = {
   1.995656,
   0.09685288,
   0.0474999,
   0.09479023,
   0.1235534,
   0.1126151,
   0.1532708,
   2.329302};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3577,_fy3577,_felx3577,_fehx3577,_fely3577,_fehy3577);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3577 = new TH1F("Graph_Graph3577","",100,-100,100);
   Graph_Graph3577->SetMinimum(0);
   Graph_Graph3577->SetMaximum(1.5);
   Graph_Graph3577->SetDirectory(0);
   Graph_Graph3577->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3577->SetLineColor(ci);
   Graph_Graph3577->GetXaxis()->SetRange(1,100);
   Graph_Graph3577->GetXaxis()->CenterTitle(true);
   Graph_Graph3577->GetXaxis()->SetLabelFont(42);
   Graph_Graph3577->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3577->GetXaxis()->SetTitleFont(42);
   Graph_Graph3577->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3577->GetYaxis()->CenterTitle(true);
   Graph_Graph3577->GetYaxis()->SetLabelFont(42);
   Graph_Graph3577->GetYaxis()->SetTitleFont(42);
   Graph_Graph3577->GetZaxis()->SetLabelFont(42);
   Graph_Graph3577->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3577->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3577);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,50.4625,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1730 = new TH2D("ThetaY_vs_Y_mI35_mI30__1730","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8118,119);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8144,2434);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8170,4962);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8196,5769);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8222,5872);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8248,4857);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8274,2440);
   ThetaY_vs_Y_mI35_mI30__1730->SetBinContent(8300,128);
   ThetaY_vs_Y_mI35_mI30__1730->SetEntries(26581);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1730->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1730->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1730->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1730->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1730->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1730->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1730->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1730->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1730->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1730->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1730->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1730->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1730->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1730->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1730->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1730->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
