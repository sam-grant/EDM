void S12S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0673816,125,1.28025);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__1008 = new TH1D("S12S18_ThetaY_0_5__1008","",630,-1575,1575);
   S12S18_ThetaY_0_5__1008->SetBinContent(308,0.004944376);
   S12S18_ThetaY_0_5__1008->SetBinContent(309,0.05438813);
   S12S18_ThetaY_0_5__1008->SetBinContent(310,0.3448702);
   S12S18_ThetaY_0_5__1008->SetBinContent(311,0.7601978);
   S12S18_ThetaY_0_5__1008->SetBinContent(312,0.9060569);
   S12S18_ThetaY_0_5__1008->SetBinContent(313,1);
   S12S18_ThetaY_0_5__1008->SetBinContent(314,0.9579728);
   S12S18_ThetaY_0_5__1008->SetBinContent(315,0.9715698);
   S12S18_ThetaY_0_5__1008->SetBinContent(316,1.011125);
   S12S18_ThetaY_0_5__1008->SetBinContent(317,1);
   S12S18_ThetaY_0_5__1008->SetBinContent(318,0.9555006);
   S12S18_ThetaY_0_5__1008->SetBinContent(319,0.8627936);
   S12S18_ThetaY_0_5__1008->SetBinContent(320,0.526576);
   S12S18_ThetaY_0_5__1008->SetBinContent(321,0.09394314);
   S12S18_ThetaY_0_5__1008->SetBinContent(322,0.002472188);
   S12S18_ThetaY_0_5__1008->SetBinError(308,0.002472188);
   S12S18_ThetaY_0_5__1008->SetBinError(309,0.00819932);
   S12S18_ThetaY_0_5__1008->SetBinError(310,0.02064684);
   S12S18_ThetaY_0_5__1008->SetBinError(311,0.03065413);
   S12S18_ThetaY_0_5__1008->SetBinError(312,0.03346597);
   S12S18_ThetaY_0_5__1008->SetBinError(313,0.03515813);
   S12S18_ThetaY_0_5__1008->SetBinError(314,0.0344114);
   S12S18_ThetaY_0_5__1008->SetBinError(315,0.03465475);
   S12S18_ThetaY_0_5__1008->SetBinError(316,0.03535315);
   S12S18_ThetaY_0_5__1008->SetBinError(317,0.03515813);
   S12S18_ThetaY_0_5__1008->SetBinError(318,0.03436697);
   S12S18_ThetaY_0_5__1008->SetBinError(319,0.03265722);
   S12S18_ThetaY_0_5__1008->SetBinError(320,0.02551269);
   S12S18_ThetaY_0_5__1008->SetBinError(321,0.01077602);
   S12S18_ThetaY_0_5__1008->SetBinError(322,0.001748101);
   S12S18_ThetaY_0_5__1008->SetMinimum(0);
   S12S18_ThetaY_0_5__1008->SetMaximum(1.145487);
   S12S18_ThetaY_0_5__1008->SetEntries(7647);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1008->SetLineColor(ci);
   S12S18_ThetaY_0_5__1008->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1008->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__1008->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__1008->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__1008->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1008->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1008->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1008->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__1008->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__1008->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1008->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1008->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1008->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1008->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1008->Draw("AE");
   
   TH1D *ThetaY_0_5__1009 = new TH1D("ThetaY_0_5__1009","",630,-1575,1575);
   ThetaY_0_5__1009->SetBinContent(307,0.006128153);
   ThetaY_0_5__1009->SetBinContent(308,0.1863097);
   ThetaY_0_5__1009->SetBinContent(309,0.5197993);
   ThetaY_0_5__1009->SetBinContent(310,0.735552);
   ThetaY_0_5__1009->SetBinContent(311,0.8644515);
   ThetaY_0_5__1009->SetBinContent(312,0.9524851);
   ThetaY_0_5__1009->SetBinContent(313,1);
   ThetaY_0_5__1009->SetBinContent(314,1.026457);
   ThetaY_0_5__1009->SetBinContent(315,1.039338);
   ThetaY_0_5__1009->SetBinContent(316,1.041352);
   ThetaY_0_5__1009->SetBinContent(317,1.027933);
   ThetaY_0_5__1009->SetBinContent(318,1.000885);
   ThetaY_0_5__1009->SetBinContent(319,0.9538739);
   ThetaY_0_5__1009->SetBinContent(320,0.8677152);
   ThetaY_0_5__1009->SetBinContent(321,0.7312119);
   ThetaY_0_5__1009->SetBinContent(322,0.5285662);
   ThetaY_0_5__1009->SetBinContent(323,0.1846779);
   ThetaY_0_5__1009->SetBinContent(324,0.006076072);
   ThetaY_0_5__1009->SetBinError(307,0.0003261687);
   ThetaY_0_5__1009->SetBinError(308,0.001798437);
   ThetaY_0_5__1009->SetBinError(309,0.003003968);
   ThetaY_0_5__1009->SetBinError(310,0.003573421);
   ThetaY_0_5__1009->SetBinError(311,0.003873894);
   ThetaY_0_5__1009->SetBinError(312,0.004066367);
   ThetaY_0_5__1009->SetBinError(313,0.004166558);
   ThetaY_0_5__1009->SetBinError(314,0.004221316);
   ThetaY_0_5__1009->SetBinError(315,0.00424772);
   ThetaY_0_5__1009->SetBinError(316,0.004251833);
   ThetaY_0_5__1009->SetBinError(317,0.004224349);
   ThetaY_0_5__1009->SetBinError(318,0.004168402);
   ThetaY_0_5__1009->SetBinError(319,0.00406933);
   ThetaY_0_5__1009->SetBinError(320,0.0038812);
   ThetaY_0_5__1009->SetBinError(321,0.003562863);
   ThetaY_0_5__1009->SetBinError(322,0.003029194);
   ThetaY_0_5__1009->SetBinError(323,0.001790544);
   ThetaY_0_5__1009->SetBinError(324,0.0003247797);
   ThetaY_0_5__1009->SetEntries(729992);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1009->SetLineColor(ci);
   ThetaY_0_5__1009->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1009->SetMarkerColor(ci);
   ThetaY_0_5__1009->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1009->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1009->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1009->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1009->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1009->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1009->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1009->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1009->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1009->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1009->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1009->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1009->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1009->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1009->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1009->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1009->Draw("AEsame");
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
   
   Double_t _fx3337[18] = {
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
   Double_t _fy3337[18] = {
   0,
   0.02653847,
   0.1046329,
   0.4688591,
   0.879399,
   0.9512557,
   1,
   0.933281,
   0.9347966,
   0.9709732,
   0.9728265,
   0.9546554,
   0.9045153,
   0.6068535,
   0.1284759,
   0.004677158,
   0,
   0};
   Double_t _felx3337[18] = {
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
   Double_t _fely3337[18] = {
   0,
   0.01270279,
   0.01572512,
   0.02814493,
   0.03566906,
   0.03536098,
   0.03539654,
   0.03373589,
   0.03355385,
   0.03417272,
   0.03442822,
   0.03455822,
   0.03444463,
   0.02951531,
   0.0147178,
   0.003021073,
   0,
   0};
   Double_t _fehx3337[18] = {
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
   Double_t _fehy3337[18] = {
   0.3723178,
   0.02099066,
   0.01828732,
   0.02988806,
   0.03714677,
   0.0367012,
   0.03667284,
   0.03497856,
   0.03478099,
   0.03539769,
   0.03566935,
   0.03583308,
   0.03578262,
   0.03098759,
   0.01650914,
   0.006169313,
   0.01232347,
   0.3755175};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3337,_fy3337,_felx3337,_fehx3337,_fely3337,_fehy3337);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3337 = new TH1F("Graph_Graph3337","",100,-100,100);
   Graph_Graph3337->SetMinimum(0);
   Graph_Graph3337->SetMaximum(1.5);
   Graph_Graph3337->SetDirectory(0);
   Graph_Graph3337->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3337->SetLineColor(ci);
   Graph_Graph3337->GetXaxis()->SetRange(1,100);
   Graph_Graph3337->GetXaxis()->CenterTitle(true);
   Graph_Graph3337->GetXaxis()->SetLabelFont(42);
   Graph_Graph3337->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3337->GetXaxis()->SetTitleFont(42);
   Graph_Graph3337->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3337->GetYaxis()->CenterTitle(true);
   Graph_Graph3337->GetYaxis()->SetLabelFont(42);
   Graph_Graph3337->GetYaxis()->SetTitleFont(42);
   Graph_Graph3337->GetZaxis()->SetLabelFont(42);
   Graph_Graph3337->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3337->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3337);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.145487,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1010 = new TH2D("ThetaY_vs_Y_0_5__1010","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1010->SetBinContent(7995,353);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8021,10732);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8047,29942);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8073,42370);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8099,49795);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8125,54866);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8151,57603);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8177,59127);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8203,59869);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8229,59985);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8255,59212);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8281,57654);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8307,54946);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8333,49983);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8359,42120);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8385,30447);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8411,10638);
   ThetaY_vs_Y_0_5__1010->SetBinContent(8437,350);
   ThetaY_vs_Y_0_5__1010->SetEntries(729992);
   ThetaY_vs_Y_0_5__1010->SetContour(20);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(1,2999.25);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(2,5998.5);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(3,8997.75);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(4,11997);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(5,14996.25);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(6,17995.5);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(7,20994.75);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(8,23994);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(9,26993.25);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(10,29992.5);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(11,32991.75);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(12,35991);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(13,38990.25);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(14,41989.5);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(15,44988.75);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(16,47988);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(17,50987.25);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(18,53986.5);
   ThetaY_vs_Y_0_5__1010->SetContourLevel(19,56985.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1010->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1010->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1010->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1010->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1010->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1010->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1010->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1010->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1010->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1010->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1010->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1010->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1010->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1010->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1010->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1010->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_0_5","Reco vertices","lpf");
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
