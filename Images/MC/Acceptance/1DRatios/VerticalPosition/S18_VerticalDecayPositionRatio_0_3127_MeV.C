void S18_VerticalDecayPositionRatio_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:29 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.062179,81.25,1.181401);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__58 = new TH1D("S18_Y__58","",24,-60,60);
   S18_Y__58->SetBinContent(4,0.0176812);
   S18_Y__58->SetBinContent(5,0.05466325);
   S18_Y__58->SetBinContent(6,0.1100463);
   S18_Y__58->SetBinContent(7,0.195303);
   S18_Y__58->SetBinContent(8,0.3295991);
   S18_Y__58->SetBinContent(9,0.5060962);
   S18_Y__58->SetBinContent(10,0.7099024);
   S18_Y__58->SetBinContent(11,0.8823503);
   S18_Y__58->SetBinContent(12,0.9771899);
   S18_Y__58->SetBinContent(13,1);
   S18_Y__58->SetBinContent(14,0.8914383);
   S18_Y__58->SetBinContent(15,0.7032438);
   S18_Y__58->SetBinContent(16,0.5081657);
   S18_Y__58->SetBinContent(17,0.3247402);
   S18_Y__58->SetBinContent(18,0.1882395);
   S18_Y__58->SetBinContent(19,0.1091465);
   S18_Y__58->SetBinContent(20,0.04917443);
   S18_Y__58->SetBinContent(21,0.01682638);
   S18_Y__58->SetBinError(4,0.0008918985);
   S18_Y__58->SetBinError(5,0.001568221);
   S18_Y__58->SetBinError(6,0.002225089);
   S18_Y__58->SetBinError(7,0.002964245);
   S18_Y__58->SetBinError(8,0.003850815);
   S18_Y__58->SetBinError(9,0.004771733);
   S18_Y__58->SetBinError(10,0.005651437);
   S18_Y__58->SetBinError(11,0.006300574);
   S18_Y__58->SetBinError(12,0.006630542);
   S18_Y__58->SetBinError(13,0.006707483);
   S18_Y__58->SetBinError(14,0.006332938);
   S18_Y__58->SetBinError(15,0.005624871);
   S18_Y__58->SetBinError(16,0.004781479);
   S18_Y__58->SetBinError(17,0.003822325);
   S18_Y__58->SetBinError(18,0.002910147);
   S18_Y__58->SetBinError(19,0.002215973);
   S18_Y__58->SetBinError(20,0.001487405);
   S18_Y__58->SetBinError(21,0.0008700715);
   S18_Y__58->SetEntries(168343);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__58->SetLineColor(ci);
   S18_Y__58->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__58->SetMarkerColor(ci);
   S18_Y__58->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__58->GetXaxis()->SetRange(0,25);
   S18_Y__58->GetXaxis()->SetLabelFont(42);
   S18_Y__58->GetXaxis()->SetTitleOffset(1);
   S18_Y__58->GetXaxis()->SetTitleFont(42);
   S18_Y__58->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__58->GetYaxis()->CenterTitle(true);
   S18_Y__58->GetYaxis()->SetLabelFont(42);
   S18_Y__58->GetYaxis()->SetTitleFont(42);
   S18_Y__58->GetZaxis()->SetLabelFont(42);
   S18_Y__58->GetZaxis()->SetTitleOffset(1);
   S18_Y__58->GetZaxis()->SetTitleFont(42);
   S18_Y__58->Draw("AE");
   
   TH1D *Y__59 = new TH1D("Y__59","",24,-60,60);
   Y__59->SetBinContent(4,0.02844669);
   Y__59->SetBinContent(5,0.07447262);
   Y__59->SetBinContent(6,0.1391633);
   Y__59->SetBinContent(7,0.2350921);
   Y__59->SetBinContent(8,0.3728205);
   Y__59->SetBinContent(9,0.5518235);
   Y__59->SetBinContent(10,0.7460147);
   Y__59->SetBinContent(11,0.9091942);
   Y__59->SetBinContent(12,1.000423);
   Y__59->SetBinContent(13,1);
   Y__59->SetBinContent(14,0.908756);
   Y__59->SetBinContent(15,0.7454056);
   Y__59->SetBinContent(16,0.5512242);
   Y__59->SetBinContent(17,0.3723458);
   Y__59->SetBinContent(18,0.2348226);
   Y__59->SetBinContent(19,0.1388689);
   Y__59->SetBinContent(20,0.07432488);
   Y__59->SetBinContent(21,0.02838741);
   Y__59->SetBinError(4,6.087684e-05);
   Y__59->SetBinError(5,9.849962e-05);
   Y__59->SetBinError(6,0.0001346476);
   Y__59->SetBinError(7,0.0001750069);
   Y__59->SetBinError(8,0.0002203871);
   Y__59->SetBinError(9,0.0002681244);
   Y__59->SetBinError(10,0.0003117525);
   Y__59->SetBinError(11,0.0003441633);
   Y__59->SetBinError(12,0.0003610174);
   Y__59->SetBinError(13,0.000360941);
   Y__59->SetBinError(14,0.0003440804);
   Y__59->SetBinError(15,0.0003116252);
   Y__59->SetBinError(16,0.0002679788);
   Y__59->SetBinError(17,0.0002202467);
   Y__59->SetBinError(18,0.0001749066);
   Y__59->SetBinError(19,0.0001345051);
   Y__59->SetBinError(20,9.840187e-05);
   Y__59->SetBinError(21,6.081338e-05);
   Y__59->SetEntries(6.226346e+07);

   ci = TColor::GetColor("#ff0000");
   Y__59->SetLineColor(ci);
   Y__59->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__59->SetMarkerColor(ci);
   Y__59->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__59->GetXaxis()->CenterTitle(true);
   Y__59->GetXaxis()->SetLabelFont(42);
   Y__59->GetXaxis()->SetTitleSize(0.04);
   Y__59->GetXaxis()->SetTitleOffset(1.1);
   Y__59->GetXaxis()->SetTitleFont(42);
   Y__59->GetYaxis()->SetTitle("Decays");
   Y__59->GetYaxis()->CenterTitle(true);
   Y__59->GetYaxis()->SetNdivisions(4000510);
   Y__59->GetYaxis()->SetLabelFont(42);
   Y__59->GetYaxis()->SetTitleSize(0.04);
   Y__59->GetYaxis()->SetTitleOffset(1.1);
   Y__59->GetYaxis()->SetTitleFont(42);
   Y__59->GetZaxis()->SetLabelFont(42);
   Y__59->GetZaxis()->SetTitleOffset(1);
   Y__59->GetZaxis()->SetTitleFont(42);
   Y__59->Draw("AEsame");
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
   
   Double_t _fx3020[18] = {
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
   Double_t _fy3020[18] = {
   0.6215557,
   0.7340046,
   0.7907714,
   0.830751,
   0.8840692,
   0.9171342,
   0.9515931,
   0.970475,
   0.9767763,
   1,
   0.9809436,
   0.9434378,
   0.9218858,
   0.8721468,
   0.8016245,
   0.7859684,
   0.6616146,
   0.5927411};
   Double_t _felx3020[18] = {
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
   Double_t _fely3020[18] = {
   0.03136813,
   0.02107714,
   0.01600625,
   0.01262353,
   0.01034185,
   0.008658554,
   0.007585853,
   0.006939514,
   0.006637051,
   0.006717136,
   0.00697863,
   0.007556273,
   0.008685733,
   0.01027824,
   0.01240684,
   0.01597435,
   0.02002829,
   0.03066243};
   Double_t _fehx3020[18] = {
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
   Double_t _fehy3020[18] = {
   0.03299274,
   0.02169128,
   0.01633358,
   0.01281683,
   0.01046354,
   0.008740689,
   0.007646569,
   0.006989315,
   0.006682304,
   0.00676241,
   0.007028456,
   0.007617038,
   0.008767957,
   0.01040009,
   0.01260037,
   0.01630238,
   0.020644,
   0.0322913};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-65,65);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.25);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3020->SetLineColor(ci);
   Graph_Graph3020->GetXaxis()->SetRange(1,100);
   Graph_Graph3020->GetXaxis()->CenterTitle(true);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3020->GetYaxis()->CenterTitle(true);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.057043,510,"S");
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
