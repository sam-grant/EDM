void S18_VerticalDecayPositionRatio_2500_2750_MeV()
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
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06894069,81.25,1.309873);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__1777 = new TH1D("S18_Y__1777","",24,-60,60);
   S18_Y__1777->SetBinContent(4,0.01121076);
   S18_Y__1777->SetBinContent(5,0.04932735);
   S18_Y__1777->SetBinContent(6,0.07399103);
   S18_Y__1777->SetBinContent(7,0.1950673);
   S18_Y__1777->SetBinContent(8,0.3408072);
   S18_Y__1777->SetBinContent(9,0.5022422);
   S18_Y__1777->SetBinContent(10,0.8026906);
   S18_Y__1777->SetBinContent(11,0.9977578);
   S18_Y__1777->SetBinContent(12,1.067265);
   S18_Y__1777->SetBinContent(13,1.004484);
   S18_Y__1777->SetBinContent(14,1);
   S18_Y__1777->SetBinContent(15,0.7197309);
   S18_Y__1777->SetBinContent(16,0.5426009);
   S18_Y__1777->SetBinContent(17,0.3520179);
   S18_Y__1777->SetBinContent(18,0.1748879);
   S18_Y__1777->SetBinContent(19,0.1143498);
   S18_Y__1777->SetBinContent(20,0.04932735);
   S18_Y__1777->SetBinContent(21,0.006726457);
   S18_Y__1777->SetBinError(4,0.005013605);
   S18_Y__1777->SetBinError(5,0.01051663);
   S18_Y__1777->SetBinError(6,0.01288019);
   S18_Y__1777->SetBinError(7,0.02091341);
   S18_Y__1777->SetBinError(8,0.02764311);
   S18_Y__1777->SetBinError(9,0.03355747);
   S18_Y__1777->SetBinError(10,0.04242352);
   S18_Y__1777->SetBinError(11,0.04729826);
   S18_Y__1777->SetBinError(12,0.04891799);
   S18_Y__1777->SetBinError(13,0.04745742);
   S18_Y__1777->SetBinError(14,0.04735137);
   S18_Y__1777->SetBinError(15,0.04017146);
   S18_Y__1777->SetBinError(16,0.03487971);
   S18_Y__1777->SetBinError(17,0.02809409);
   S18_Y__1777->SetBinError(18,0.01980215);
   S18_Y__1777->SetBinError(19,0.01601217);
   S18_Y__1777->SetBinError(20,0.01051663);
   S18_Y__1777->SetBinError(21,0.003883522);
   S18_Y__1777->SetEntries(3570);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__1777->SetLineColor(ci);
   S18_Y__1777->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__1777->SetMarkerColor(ci);
   S18_Y__1777->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__1777->GetXaxis()->SetRange(0,25);
   S18_Y__1777->GetXaxis()->SetLabelFont(42);
   S18_Y__1777->GetXaxis()->SetTitleOffset(1);
   S18_Y__1777->GetXaxis()->SetTitleFont(42);
   S18_Y__1777->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__1777->GetYaxis()->CenterTitle(true);
   S18_Y__1777->GetYaxis()->SetLabelFont(42);
   S18_Y__1777->GetYaxis()->SetTitleFont(42);
   S18_Y__1777->GetZaxis()->SetLabelFont(42);
   S18_Y__1777->GetZaxis()->SetTitleOffset(1);
   S18_Y__1777->GetZaxis()->SetTitleFont(42);
   S18_Y__1777->Draw("AE");
   
   TH1D *Y__1778 = new TH1D("Y__1778","",24,-60,60);
   Y__1778->SetBinContent(4,0.0311084);
   Y__1778->SetBinContent(5,0.08244071);
   Y__1778->SetBinContent(6,0.1532417);
   Y__1778->SetBinContent(7,0.2592904);
   Y__1778->SetBinContent(8,0.410203);
   Y__1778->SetBinContent(9,0.6078763);
   Y__1778->SetBinContent(10,0.8199276);
   Y__1778->SetBinContent(11,0.9994811);
   Y__1778->SetBinContent(12,1.103454);
   Y__1778->SetBinContent(13,1.104435);
   Y__1778->SetBinContent(14,1);
   Y__1778->SetBinContent(15,0.8185613);
   Y__1778->SetBinContent(16,0.6079397);
   Y__1778->SetBinContent(17,0.4073782);
   Y__1778->SetBinContent(18,0.2568345);
   Y__1778->SetBinContent(19,0.1507915);
   Y__1778->SetBinContent(20,0.08153559);
   Y__1778->SetBinContent(21,0.03079132);
   Y__1778->SetBinError(4,0.0004234885);
   Y__1778->SetBinError(5,0.0006894038);
   Y__1778->SetBinError(6,0.0009399209);
   Y__1778->SetBinError(7,0.001222633);
   Y__1778->SetBinError(8,0.001537809);
   Y__1778->SetBinError(9,0.00187202);
   Y__1778->SetBinError(10,0.002174155);
   Y__1778->SetBinError(11,0.002400436);
   Y__1778->SetBinError(12,0.002522203);
   Y__1778->SetBinError(13,0.002523323);
   Y__1778->SetBinError(14,0.002401059);
   Y__1778->SetBinError(15,0.002172343);
   Y__1778->SetBinError(16,0.001872117);
   Y__1778->SetBinError(17,0.001532504);
   Y__1778->SetBinError(18,0.001216829);
   Y__1778->SetBinError(19,0.0009323765);
   Y__1778->SetBinError(20,0.0006856089);
   Y__1778->SetBinError(21,0.0004213247);
   Y__1778->SetEntries(1548163);

   ci = TColor::GetColor("#ff0000");
   Y__1778->SetLineColor(ci);
   Y__1778->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1778->SetMarkerColor(ci);
   Y__1778->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1778->GetXaxis()->CenterTitle(true);
   Y__1778->GetXaxis()->SetLabelFont(42);
   Y__1778->GetXaxis()->SetTitleSize(0.04);
   Y__1778->GetXaxis()->SetTitleOffset(1.1);
   Y__1778->GetXaxis()->SetTitleFont(42);
   Y__1778->GetYaxis()->SetTitle("Decays");
   Y__1778->GetYaxis()->CenterTitle(true);
   Y__1778->GetYaxis()->SetNdivisions(4000510);
   Y__1778->GetYaxis()->SetLabelFont(42);
   Y__1778->GetYaxis()->SetTitleSize(0.04);
   Y__1778->GetYaxis()->SetTitleOffset(1.1);
   Y__1778->GetYaxis()->SetTitleFont(42);
   Y__1778->GetZaxis()->SetLabelFont(42);
   Y__1778->GetZaxis()->SetTitleOffset(1);
   Y__1778->GetZaxis()->SetTitleFont(42);
   Y__1778->Draw("AEsame");
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
   
   Double_t _fx3593[18] = {
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
   Double_t _fy3593[18] = {
   0.3603774,
   0.5983374,
   0.4828387,
   0.7523118,
   0.8308256,
   0.8262243,
   0.9789774,
   0.9982758,
   0.9672031,
   0.909501,
   1,
   0.8792634,
   0.8925242,
   0.8641061,
   0.6809361,
   0.7583302,
   0.6049794,
   0.2184531};
   Double_t _felx3593[18] = {
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
   Double_t _fely3593[18] = {
   0.1557207,
   0.1266824,
   0.08367371,
   0.08057796,
   0.06738608,
   0.05522154,
   0.05178129,
   0.04736559,
   0.04437108,
   0.04300395,
   0.04739432,
   0.04910539,
   0.05739948,
   0.0689657,
   0.07700169,
   0.1059393,
   0.1280898,
   0.1189143};
   Double_t _fehx3593[18] = {
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
   Double_t _fehy3593[18] = {
   0.2439827,
   0.1568448,
   0.0996061,
   0.08970979,
   0.07308751,
   0.05904224,
   0.05459575,
   0.04966839,
   0.04645511,
   0.04508725,
   0.04969587,
   0.05192789,
   0.06121577,
   0.07470359,
   0.08624546,
   0.1218887,
   0.1585877,
   0.2126133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3593,_fy3593,_felx3593,_fehx3593,_fely3593,_fehy3593);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3593 = new TH1F("Graph_Graph3593","",100,-65,65);
   Graph_Graph3593->SetMinimum(0);
   Graph_Graph3593->SetMaximum(1.25);
   Graph_Graph3593->SetDirectory(0);
   Graph_Graph3593->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3593->SetLineColor(ci);
   Graph_Graph3593->GetXaxis()->SetRange(1,100);
   Graph_Graph3593->GetXaxis()->CenterTitle(true);
   Graph_Graph3593->GetXaxis()->SetLabelFont(42);
   Graph_Graph3593->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3593->GetXaxis()->SetTitleFont(42);
   Graph_Graph3593->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3593->GetYaxis()->CenterTitle(true);
   Graph_Graph3593->GetYaxis()->SetLabelFont(42);
   Graph_Graph3593->GetYaxis()->SetTitleFont(42);
   Graph_Graph3593->GetZaxis()->SetLabelFont(42);
   Graph_Graph3593->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3593->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3593);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.171992,510,"S");
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
   entry=leg->AddEntry("S18_Y","Truth vertices","lpf");
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
