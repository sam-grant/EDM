void S12_VerticalDecayPositionRatio_750_1000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.08300486,81.25,1.577092);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__523 = new TH1D("S12_Y__523","",24,-60,60);
   S12_Y__523->SetBinContent(4,0.0282392);
   S12_Y__523->SetBinContent(5,0.07209302);
   S12_Y__523->SetBinContent(6,0.1421927);
   S12_Y__523->SetBinContent(7,0.2740864);
   S12_Y__523->SetBinContent(8,0.4774086);
   S12_Y__523->SetBinContent(9,0.6950166);
   S12_Y__523->SetBinContent(10,1);
   S12_Y__523->SetBinContent(11,1.2);
   S12_Y__523->SetBinContent(12,1.295349);
   S12_Y__523->SetBinContent(13,1.322924);
   S12_Y__523->SetBinContent(14,1.170764);
   S12_Y__523->SetBinContent(15,0.9415282);
   S12_Y__523->SetBinContent(16,0.6887043);
   S12_Y__523->SetBinContent(17,0.4747508);
   S12_Y__523->SetBinContent(18,0.2807309);
   S12_Y__523->SetBinContent(19,0.1468439);
   S12_Y__523->SetBinContent(20,0.0820598);
   S12_Y__523->SetBinContent(21,0.02425249);
   S12_Y__523->SetBinError(4,0.003062972);
   S12_Y__523->SetBinError(5,0.004893993);
   S12_Y__523->SetBinError(6,0.006873143);
   S12_Y__523->SetBinError(7,0.009542463);
   S12_Y__523->SetBinError(8,0.01259395);
   S12_Y__523->SetBinError(9,0.01519548);
   S12_Y__523->SetBinError(10,0.01822707);
   S12_Y__523->SetBinError(11,0.01996675);
   S12_Y__523->SetBinError(12,0.02074484);
   S12_Y__523->SetBinError(13,0.02096448);
   S12_Y__523->SetBinError(14,0.01972202);
   S12_Y__523->SetBinError(15,0.01768616);
   S12_Y__523->SetBinError(16,0.01512632);
   S12_Y__523->SetBinError(17,0.01255884);
   S12_Y__523->SetBinError(18,0.009657436);
   S12_Y__523->SetBinError(19,0.00698465);
   S12_Y__523->SetBinError(20,0.00522134);
   S12_Y__523->SetBinError(21,0.002838539);
   S12_Y__523->SetEntries(31054);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__523->SetLineColor(ci);
   S12_Y__523->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__523->SetMarkerColor(ci);
   S12_Y__523->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__523->GetXaxis()->SetRange(0,25);
   S12_Y__523->GetXaxis()->SetLabelFont(42);
   S12_Y__523->GetXaxis()->SetTitleOffset(1);
   S12_Y__523->GetXaxis()->SetTitleFont(42);
   S12_Y__523->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__523->GetYaxis()->CenterTitle(true);
   S12_Y__523->GetYaxis()->SetLabelFont(42);
   S12_Y__523->GetYaxis()->SetTitleFont(42);
   S12_Y__523->GetZaxis()->SetLabelFont(42);
   S12_Y__523->GetZaxis()->SetTitleOffset(1);
   S12_Y__523->GetZaxis()->SetTitleFont(42);
   S12_Y__523->Draw("AE");
   
   TH1D *Y__524 = new TH1D("Y__524","",24,-60,60);
   Y__524->SetBinContent(4,0.03790016);
   Y__524->SetBinContent(5,0.09972236);
   Y__524->SetBinContent(6,0.1861452);
   Y__524->SetBinContent(7,0.3141926);
   Y__524->SetBinContent(8,0.5003882);
   Y__524->SetBinContent(9,0.737939);
   Y__524->SetBinContent(10,1);
   Y__524->SetBinContent(11,1.217361);
   Y__524->SetBinContent(12,1.340036);
   Y__524->SetBinContent(13,1.33918);
   Y__524->SetBinContent(14,1.21733);
   Y__524->SetBinContent(15,0.9974562);
   Y__524->SetBinContent(16,0.7373819);
   Y__524->SetBinContent(17,0.4990666);
   Y__524->SetBinContent(18,0.3145734);
   Y__524->SetBinContent(19,0.1864963);
   Y__524->SetBinContent(20,0.09968829);
   Y__524->SetBinContent(21,0.03823646);
   Y__524->SetBinError(4,0.0002369593);
   Y__524->SetBinError(5,0.0003843701);
   Y__524->SetBinError(6,0.0005251449);
   Y__524->SetBinError(7,0.0006822621);
   Y__524->SetBinError(8,0.0008610072);
   Y__524->SetBinError(9,0.001045595);
   Y__524->SetBinError(10,0.001217176);
   Y__524->SetBinError(11,0.001342959);
   Y__524->SetBinError(12,0.001409002);
   Y__524->SetBinError(13,0.001408551);
   Y__524->SetBinError(14,0.001342942);
   Y__524->SetBinError(15,0.001215627);
   Y__524->SetBinError(16,0.0010452);
   Y__524->SetBinError(17,0.0008598695);
   Y__524->SetBinError(18,0.0006826754);
   Y__524->SetBinError(19,0.0005256399);
   Y__524->SetBinError(20,0.0003843044);
   Y__524->SetBinError(21,0.0002380083);
   Y__524->SetEntries(7332414);

   ci = TColor::GetColor("#ff0000");
   Y__524->SetLineColor(ci);
   Y__524->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__524->SetMarkerColor(ci);
   Y__524->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__524->GetXaxis()->CenterTitle(true);
   Y__524->GetXaxis()->SetLabelFont(42);
   Y__524->GetXaxis()->SetTitleSize(0.04);
   Y__524->GetXaxis()->SetTitleOffset(1.1);
   Y__524->GetXaxis()->SetTitleFont(42);
   Y__524->GetYaxis()->SetTitle("Decays");
   Y__524->GetYaxis()->CenterTitle(true);
   Y__524->GetYaxis()->SetNdivisions(4000510);
   Y__524->GetYaxis()->SetLabelFont(42);
   Y__524->GetYaxis()->SetTitleSize(0.04);
   Y__524->GetYaxis()->SetTitleOffset(1.1);
   Y__524->GetYaxis()->SetTitleFont(42);
   Y__524->GetZaxis()->SetLabelFont(42);
   Y__524->GetZaxis()->SetTitleOffset(1);
   Y__524->GetZaxis()->SetTitleFont(42);
   Y__524->Draw("AEsame");
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
   
   Double_t _fx3175[18] = {
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
   Double_t _fy3175[18] = {
   0.7450946,
   0.7229374,
   0.7638807,
   0.8723514,
   0.9540766,
   0.9418348,
   1,
   0.9857391,
   0.9666521,
   0.987861,
   0.9617478,
   0.9439294,
   0.9339859,
   0.9512774,
   0.8924178,
   0.7873822,
   0.8231639,
   0.6342766};
   Double_t _felx3175[18] = {
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
   Double_t _fely3175[18] = {
   0.08078994,
   0.049117,
   0.03697182,
   0.03042417,
   0.02521887,
   0.02063331,
   0.01826663,
   0.01643691,
   0.01551346,
   0.01568849,
   0.01623498,
   0.01776748,
   0.02055454,
   0.025215,
   0.03075499,
   0.03750332,
   0.05243682,
   0.07416931};
   Double_t _fehx3175[18] = {
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
   Double_t _fehy3175[18] = {
   0.09006711,
   0.05257382,
   0.03880638,
   0.03150435,
   0.02589453,
   0.02109041,
   0.01860342,
   0.01671332,
   0.01576447,
   0.01593967,
   0.0165114,
   0.01810513,
   0.02101199,
   0.02589246,
   0.03183374,
   0.03933394,
   0.05588928,
   0.08339753};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3175,_fy3175,_felx3175,_fehx3175,_fely3175,_fehy3175);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3175 = new TH1F("Graph_Graph3175","",100,-65,65);
   Graph_Graph3175->SetMinimum(0);
   Graph_Graph3175->SetMaximum(1.25);
   Graph_Graph3175->SetDirectory(0);
   Graph_Graph3175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3175->SetLineColor(ci);
   Graph_Graph3175->GetXaxis()->SetRange(1,100);
   Graph_Graph3175->GetXaxis()->CenterTitle(true);
   Graph_Graph3175->GetXaxis()->SetLabelFont(42);
   Graph_Graph3175->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3175->GetXaxis()->SetTitleFont(42);
   Graph_Graph3175->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3175->GetYaxis()->CenterTitle(true);
   Graph_Graph3175->GetYaxis()->SetLabelFont(42);
   Graph_Graph3175->GetYaxis()->SetTitleFont(42);
   Graph_Graph3175->GetZaxis()->SetLabelFont(42);
   Graph_Graph3175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3175->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3175);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.411082,510,"S");
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
   entry=leg->AddEntry("S12_Y","Truth vertices","lpf");
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
