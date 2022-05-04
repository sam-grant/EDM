void S18_VerticalDecayPositionRatio_2750_3000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-1.482353,81.25,28.16471);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__55 = new TH1D("S18_Y__55","",24,-60,60);
   S18_Y__55->SetBinContent(5,0.3333333);
   S18_Y__55->SetBinContent(6,1);
   S18_Y__55->SetBinContent(7,3.666667);
   S18_Y__55->SetBinContent(8,7.333333);
   S18_Y__55->SetBinContent(9,11);
   S18_Y__55->SetBinContent(10,10.33333);
   S18_Y__55->SetBinContent(11,16.66667);
   S18_Y__55->SetBinContent(12,16.66667);
   S18_Y__55->SetBinContent(13,15);
   S18_Y__55->SetBinContent(14,21.33333);
   S18_Y__55->SetBinContent(15,14.33333);
   S18_Y__55->SetBinContent(16,8);
   S18_Y__55->SetBinContent(17,6.333333);
   S18_Y__55->SetBinContent(18,1.666667);
   S18_Y__55->SetBinContent(19,1);
   S18_Y__55->SetBinContent(20,1.333333);
   S18_Y__55->SetBinContent(21,1);
   S18_Y__55->SetBinError(5,0.3333333);
   S18_Y__55->SetBinError(6,0.5773503);
   S18_Y__55->SetBinError(7,1.105542);
   S18_Y__55->SetBinError(8,1.563472);
   S18_Y__55->SetBinError(9,1.914854);
   S18_Y__55->SetBinError(10,1.855921);
   S18_Y__55->SetBinError(11,2.357023);
   S18_Y__55->SetBinError(12,2.357023);
   S18_Y__55->SetBinError(13,2.236068);
   S18_Y__55->SetBinError(14,2.666667);
   S18_Y__55->SetBinError(15,2.185813);
   S18_Y__55->SetBinError(16,1.632993);
   S18_Y__55->SetBinError(17,1.452966);
   S18_Y__55->SetBinError(18,0.745356);
   S18_Y__55->SetBinError(19,0.5773503);
   S18_Y__55->SetBinError(20,0.6666667);
   S18_Y__55->SetBinError(21,0.5773503);
   S18_Y__55->SetEntries(411);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__55->SetLineColor(ci);
   S18_Y__55->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__55->SetMarkerColor(ci);
   S18_Y__55->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__55->GetXaxis()->SetRange(0,25);
   S18_Y__55->GetXaxis()->SetLabelFont(42);
   S18_Y__55->GetXaxis()->SetTitleOffset(1);
   S18_Y__55->GetXaxis()->SetTitleFont(42);
   S18_Y__55->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__55->GetYaxis()->CenterTitle(true);
   S18_Y__55->GetYaxis()->SetLabelFont(42);
   S18_Y__55->GetYaxis()->SetTitleFont(42);
   S18_Y__55->GetZaxis()->SetLabelFont(42);
   S18_Y__55->GetZaxis()->SetTitleOffset(1);
   S18_Y__55->GetZaxis()->SetTitleFont(42);
   S18_Y__55->Draw("AE");
   
   TH1D *Y__56 = new TH1D("Y__56","",24,-60,60);
   Y__56->SetBinContent(4,1.01319);
   Y__56->SetBinContent(5,2.674361);
   Y__56->SetBinContent(6,4.906843);
   Y__56->SetBinContent(7,8.47939);
   Y__56->SetBinContent(8,13.33512);
   Y__56->SetBinContent(9,19.72218);
   Y__56->SetBinContent(10,26.61006);
   Y__56->SetBinContent(11,32.09522);
   Y__56->SetBinContent(12,35.64551);
   Y__56->SetBinContent(13,35.61954);
   Y__56->SetBinContent(14,32.5676);
   Y__56->SetBinContent(15,26.80585);
   Y__56->SetBinContent(16,19.62572);
   Y__56->SetBinContent(17,13.35243);
   Y__56->SetBinContent(18,8.338005);
   Y__56->SetBinContent(19,4.988458);
   Y__56->SetBinContent(20,2.658697);
   Y__56->SetBinContent(21,1);
   Y__56->SetBinError(4,0.0204362);
   Y__56->SetBinError(5,0.03320203);
   Y__56->SetBinError(6,0.04497339);
   Y__56->SetBinError(7,0.05912034);
   Y__56->SetBinError(8,0.07414008);
   Y__56->SetBinError(9,0.09016376);
   Y__56->SetBinError(10,0.1047315);
   Y__56->SetBinError(11,0.1150204);
   Y__56->SetBinError(12,0.1212152);
   Y__56->SetBinError(13,0.121171);
   Y__56->SetBinError(14,0.1158637);
   Y__56->SetBinError(15,0.1051161);
   Y__56->SetBinError(16,0.08994301);
   Y__56->SetBinError(17,0.07418819);
   Y__56->SetBinError(18,0.05862538);
   Y__56->SetBinError(19,0.04534587);
   Y__56->SetBinError(20,0.03310465);
   Y__56->SetBinError(21,0.02030274);
   Y__56->SetEntries(702177);

   ci = TColor::GetColor("#ff0000");
   Y__56->SetLineColor(ci);
   Y__56->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__56->SetMarkerColor(ci);
   Y__56->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__56->GetXaxis()->CenterTitle(true);
   Y__56->GetXaxis()->SetLabelFont(42);
   Y__56->GetXaxis()->SetTitleSize(0.04);
   Y__56->GetXaxis()->SetTitleOffset(1.1);
   Y__56->GetXaxis()->SetTitleFont(42);
   Y__56->GetYaxis()->SetTitle("Decays");
   Y__56->GetYaxis()->CenterTitle(true);
   Y__56->GetYaxis()->SetNdivisions(4000510);
   Y__56->GetYaxis()->SetLabelFont(42);
   Y__56->GetYaxis()->SetTitleSize(0.04);
   Y__56->GetYaxis()->SetTitleOffset(1.1);
   Y__56->GetYaxis()->SetTitleFont(42);
   Y__56->GetZaxis()->SetLabelFont(42);
   Y__56->GetZaxis()->SetTitleOffset(1);
   Y__56->GetZaxis()->SetTitleFont(42);
   Y__56->Draw("AEsame");
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
   
   Double_t _fx3019[18] = {
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
   Double_t _fy3019[18] = {
   0,
   0.1246404,
   0.203797,
   0.432421,
   0.5499263,
   0.5577478,
   0.3883243,
   0.5192882,
   0.4675671,
   0.4211172,
   0.6550477,
   0.5347091,
   0.4076283,
   0.4743206,
   0.1998879,
   0.2004627,
   0.5014987,
   1};
   Double_t _felx3019[18] = {
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
   Double_t _fely3019[18] = {
   0,
   0.1031113,
   0.1109237,
   0.1284047,
   0.1163849,
   0.09662923,
   0.06938297,
   0.07321502,
   0.06592074,
   0.0625582,
   0.08169904,
   0.08125023,
   0.08264309,
   0.1078811,
   0.08634811,
   0.1091088,
   0.2400687,
   0.544482};
   Double_t _fehx3019[18] = {
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
   Double_t _fehy3019[18] = {
   0.6059115,
   0.2866867,
   0.1982885,
   0.1736829,
   0.1440767,
   0.115021,
   0.08304545,
   0.08434542,
   0.0759418,
   0.07262187,
   0.09258558,
   0.09464647,
   0.1013773,
   0.1357367,
   0.1352511,
   0.1950435,
   0.3967493,
   0.9739153};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-65,65);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(1.25);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3019->SetLineColor(ci);
   Graph_Graph3019->GetXaxis()->SetRange(1,100);
   Graph_Graph3019->GetXaxis()->CenterTitle(true);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3019->GetYaxis()->CenterTitle(true);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,25.2,510,"S");
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
