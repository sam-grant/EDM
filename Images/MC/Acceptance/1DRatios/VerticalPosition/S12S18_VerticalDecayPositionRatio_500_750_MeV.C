void S12S18_VerticalDecayPositionRatio_500_750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06278705,81.25,1.192954);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__466 = new TH1D("S12S18_Y__466","",24,-60,60);
   S12S18_Y__466->SetBinContent(4,0.01890411);
   S12S18_Y__466->SetBinContent(5,0.05561644);
   S12S18_Y__466->SetBinContent(6,0.110137);
   S12S18_Y__466->SetBinContent(7,0.2175342);
   S12S18_Y__466->SetBinContent(8,0.3427397);
   S12S18_Y__466->SetBinContent(9,0.5079452);
   S12S18_Y__466->SetBinContent(10,0.7126027);
   S12S18_Y__466->SetBinContent(11,0.8871233);
   S12S18_Y__466->SetBinContent(12,0.9860274);
   S12S18_Y__466->SetBinContent(13,1);
   S12S18_Y__466->SetBinContent(14,0.8816438);
   S12S18_Y__466->SetBinContent(15,0.7232877);
   S12S18_Y__466->SetBinContent(16,0.5219178);
   S12S18_Y__466->SetBinContent(17,0.3564384);
   S12S18_Y__466->SetBinContent(18,0.2054795);
   S12S18_Y__466->SetBinContent(19,0.1131507);
   S12S18_Y__466->SetBinContent(20,0.05890411);
   S12S18_Y__466->SetBinContent(21,0.01534247);
   S12S18_Y__466->SetBinError(4,0.002275787);
   S12S18_Y__466->SetBinError(5,0.003903509);
   S12S18_Y__466->SetBinError(6,0.005493134);
   S12S18_Y__466->SetBinError(7,0.007720002);
   S12S18_Y__466->SetBinError(8,0.009690268);
   S12S18_Y__466->SetBinError(9,0.01179674);
   S12S18_Y__466->SetBinError(10,0.0139726);
   S12S18_Y__466->SetBinError(11,0.01558998);
   S12S18_Y__466->SetBinError(12,0.01643607);
   S12S18_Y__466->SetBinError(13,0.01655212);
   S12S18_Y__466->SetBinError(14,0.01554176);
   S12S18_Y__466->SetBinError(15,0.01407697);
   S12S18_Y__466->SetBinError(16,0.01195789);
   S12S18_Y__466->SetBinError(17,0.009882021);
   S12S18_Y__466->SetBinError(18,0.007503049);
   S12S18_Y__466->SetBinError(19,0.005567781);
   S12S18_Y__466->SetBinError(20,0.004017227);
   S12S18_Y__466->SetBinError(21,0.002050223);
   S12S18_Y__466->SetEntries(28159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__466->SetLineColor(ci);
   S12S18_Y__466->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__466->SetMarkerColor(ci);
   S12S18_Y__466->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__466->GetXaxis()->SetRange(0,25);
   S12S18_Y__466->GetXaxis()->SetLabelFont(42);
   S12S18_Y__466->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__466->GetXaxis()->SetTitleFont(42);
   S12S18_Y__466->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__466->GetYaxis()->CenterTitle(true);
   S12S18_Y__466->GetYaxis()->SetLabelFont(42);
   S12S18_Y__466->GetYaxis()->SetTitleFont(42);
   S12S18_Y__466->GetZaxis()->SetLabelFont(42);
   S12S18_Y__466->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__466->GetZaxis()->SetTitleFont(42);
   S12S18_Y__466->Draw("AE");
   
   TH1D *Y__467 = new TH1D("Y__467","",24,-60,60);
   Y__467->SetBinContent(4,0.02834475);
   Y__467->SetBinContent(5,0.07389082);
   Y__467->SetBinContent(6,0.1388716);
   Y__467->SetBinContent(7,0.2354676);
   Y__467->SetBinContent(8,0.371596);
   Y__467->SetBinContent(9,0.5517771);
   Y__467->SetBinContent(10,0.7461984);
   Y__467->SetBinContent(11,0.9090805);
   Y__467->SetBinContent(12,0.9998181);
   Y__467->SetBinContent(13,1);
   Y__467->SetBinContent(14,0.9086417);
   Y__467->SetBinContent(15,0.7439773);
   Y__467->SetBinContent(16,0.55096);
   Y__467->SetBinContent(17,0.37237);
   Y__467->SetBinContent(18,0.2340112);
   Y__467->SetBinContent(19,0.1390227);
   Y__467->SetBinContent(20,0.07412824);
   Y__467->SetBinContent(21,0.02810014);
   Y__467->SetBinError(4,0.0001706834);
   Y__467->SetBinError(5,0.0002755816);
   Y__467->SetBinError(6,0.0003777998);
   Y__467->SetBinError(7,0.0004919496);
   Y__467->SetBinError(8,0.0006180029);
   Y__467->SetBinError(9,0.0007530725);
   Y__467->SetBinError(10,0.000875754);
   Y__467->SetBinError(11,0.0009666208);
   Y__467->SetBinError(12,0.001013714);
   Y__467->SetBinError(13,0.001013806);
   Y__467->SetBinError(14,0.0009663875);
   Y__467->SetBinError(15,0.0008744497);
   Y__467->SetBinError(16,0.0007525147);
   Y__467->SetBinError(17,0.0006186461);
   Y__467->SetBinError(18,0.0004904258);
   Y__467->SetBinError(19,0.0003780052);
   Y__467->SetBinError(20,0.000276024);
   Y__467->SetBinError(21,0.0001699453);
   Y__467->SetEntries(7886974);

   ci = TColor::GetColor("#ff0000");
   Y__467->SetLineColor(ci);
   Y__467->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__467->SetMarkerColor(ci);
   Y__467->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__467->GetXaxis()->CenterTitle(true);
   Y__467->GetXaxis()->SetLabelFont(42);
   Y__467->GetXaxis()->SetTitleSize(0.04);
   Y__467->GetXaxis()->SetTitleOffset(1.1);
   Y__467->GetXaxis()->SetTitleFont(42);
   Y__467->GetYaxis()->SetTitle("Decays");
   Y__467->GetYaxis()->CenterTitle(true);
   Y__467->GetYaxis()->SetNdivisions(4000510);
   Y__467->GetYaxis()->SetLabelFont(42);
   Y__467->GetYaxis()->SetTitleSize(0.04);
   Y__467->GetYaxis()->SetTitleOffset(1.1);
   Y__467->GetYaxis()->SetTitleFont(42);
   Y__467->GetZaxis()->SetLabelFont(42);
   Y__467->GetZaxis()->SetTitleOffset(1);
   Y__467->GetZaxis()->SetTitleFont(42);
   Y__467->Draw("AEsame");
   upper_pad->Modified();
   c->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.5769231,81.25,1.346154);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3156[18] = {
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
   Double_t _fy3156[18] = {
   0.666935,
   0.752684,
   0.7930849,
   0.9238393,
   0.9223449,
   0.9205623,
   0.9549776,
   0.9758467,
   0.9862068,
   1,
   0.9702877,
   0.9721905,
   0.947288,
   0.9572156,
   0.8780751,
   0.8139008,
   0.7946244,
   0.5459926};
   Double_t _felx3156[18] = {
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
   Double_t _fely3156[18] = {
   0.08019323,
   0.05285866,
   0.03959768,
   0.03283562,
   0.02611898,
   0.02141448,
   0.01875735,
   0.01717964,
   0.01646867,
   0.01658237,
   0.01713459,
   0.01895449,
   0.02174034,
   0.02658234,
   0.03210832,
   0.04009417,
   0.05423108,
   0.07281597};
   Double_t _fehx3156[18] = {
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
   Double_t _fehy3156[18] = {
   0.09047166,
   0.05670859,
   0.04162618,
   0.0340241,
   0.02686938,
   0.02191856,
   0.01912947,
   0.0174848,
   0.01674602,
   0.01685967,
   0.0174399,
   0.01932772,
   0.02224515,
   0.02733107,
   0.03330459,
   0.04211996,
   0.05806561,
   0.08324378};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3156,_fy3156,_felx3156,_fehx3156,_fely3156,_fehy3156);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3156 = new TH1F("Graph_Graph3156","",100,-65,65);
   Graph_Graph3156->SetMinimum(0);
   Graph_Graph3156->SetMaximum(1.25);
   Graph_Graph3156->SetDirectory(0);
   Graph_Graph3156->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3156->SetLineColor(ci);
   Graph_Graph3156->GetXaxis()->SetRange(1,100);
   Graph_Graph3156->GetXaxis()->CenterTitle(true);
   Graph_Graph3156->GetXaxis()->SetLabelFont(42);
   Graph_Graph3156->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3156->GetXaxis()->SetTitleFont(42);
   Graph_Graph3156->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3156->GetYaxis()->CenterTitle(true);
   Graph_Graph3156->GetYaxis()->SetLabelFont(42);
   Graph_Graph3156->GetYaxis()->SetTitleFont(42);
   Graph_Graph3156->GetZaxis()->SetLabelFont(42);
   Graph_Graph3156->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3156->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3156);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c->cd();
  
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.06738,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay y-position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.25,510,"-S");
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
   c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Y","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_Y","Truth vertices","lpf");
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
