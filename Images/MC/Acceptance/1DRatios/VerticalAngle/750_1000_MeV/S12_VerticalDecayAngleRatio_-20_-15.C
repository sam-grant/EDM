void S12_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06577177,125,1.249664);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__540 = new TH1D("S12_ThetaY_mI20_mI15__540","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__540->SetBinContent(310,0.01030928);
   S12_ThetaY_mI20_mI15__540->SetBinContent(311,0.1340206);
   S12_ThetaY_mI20_mI15__540->SetBinContent(312,0.7010309);
   S12_ThetaY_mI20_mI15__540->SetBinContent(313,0.7835052);
   S12_ThetaY_mI20_mI15__540->SetBinContent(314,0.8969072);
   S12_ThetaY_mI20_mI15__540->SetBinContent(315,0.8969072);
   S12_ThetaY_mI20_mI15__540->SetBinContent(316,0.8969072);
   S12_ThetaY_mI20_mI15__540->SetBinContent(317,0.8247423);
   S12_ThetaY_mI20_mI15__540->SetBinContent(318,0.8814433);
   S12_ThetaY_mI20_mI15__540->SetBinContent(319,1);
   S12_ThetaY_mI20_mI15__540->SetBinContent(320,0.8453608);
   S12_ThetaY_mI20_mI15__540->SetBinContent(321,0.7628866);
   S12_ThetaY_mI20_mI15__540->SetBinContent(322,0.7061856);
   S12_ThetaY_mI20_mI15__540->SetBinContent(323,0.6082474);
   S12_ThetaY_mI20_mI15__540->SetBinContent(324,0.5618557);
   S12_ThetaY_mI20_mI15__540->SetBinContent(325,0.2268041);
   S12_ThetaY_mI20_mI15__540->SetBinContent(326,0.04639175);
   S12_ThetaY_mI20_mI15__540->SetBinError(310,0.007289761);
   S12_ThetaY_mI20_mI15__540->SetBinError(311,0.02628361);
   S12_ThetaY_mI20_mI15__540->SetBinError(312,0.06011291);
   S12_ThetaY_mI20_mI15__540->SetBinError(313,0.06355066);
   S12_ThetaY_mI20_mI15__540->SetBinError(314,0.06799436);
   S12_ThetaY_mI20_mI15__540->SetBinError(315,0.06799436);
   S12_ThetaY_mI20_mI15__540->SetBinError(316,0.06799436);
   S12_ThetaY_mI20_mI15__540->SetBinError(317,0.0652016);
   S12_ThetaY_mI20_mI15__540->SetBinError(318,0.06740565);
   S12_ThetaY_mI20_mI15__540->SetBinError(319,0.07179582);
   S12_ThetaY_mI20_mI15__540->SetBinError(320,0.06601159);
   S12_ThetaY_mI20_mI15__540->SetBinError(321,0.06270889);
   S12_ThetaY_mI20_mI15__540->SetBinError(322,0.0603335);
   S12_ThetaY_mI20_mI15__540->SetBinError(323,0.05599371);
   S12_ThetaY_mI20_mI15__540->SetBinError(324,0.05381601);
   S12_ThetaY_mI20_mI15__540->SetBinError(325,0.03419201);
   S12_ThetaY_mI20_mI15__540->SetBinError(326,0.01546392);
   S12_ThetaY_mI20_mI15__540->SetMinimum(0);
   S12_ThetaY_mI20_mI15__540->SetMaximum(1.11812);
   S12_ThetaY_mI20_mI15__540->SetEntries(2092);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__540->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__540->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__540->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__540->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__540->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__540->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__540->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__540->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__540->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__540->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__540->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__540->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__540->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__540->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__540->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__540->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__541 = new TH1D("ThetaY_mI20_mI15__541","",630,-1575,1575);
   ThetaY_mI20_mI15__541->SetBinContent(303,0.0002216066);
   ThetaY_mI20_mI15__541->SetBinContent(304,0.05026777);
   ThetaY_mI20_mI15__541->SetBinContent(305,0.2412188);
   ThetaY_mI20_mI15__541->SetBinContent(306,0.514386);
   ThetaY_mI20_mI15__541->SetBinContent(307,0.6939612);
   ThetaY_mI20_mI15__541->SetBinContent(308,0.8226777);
   ThetaY_mI20_mI15__541->SetBinContent(309,0.9142752);
   ThetaY_mI20_mI15__541->SetBinContent(310,0.9564543);
   ThetaY_mI20_mI15__541->SetBinContent(311,0.9823453);
   ThetaY_mI20_mI15__541->SetBinContent(312,1.008864);
   ThetaY_mI20_mI15__541->SetBinContent(313,1.006759);
   ThetaY_mI20_mI15__541->SetBinContent(314,1.016473);
   ThetaY_mI20_mI15__541->SetBinContent(315,0.9985226);
   ThetaY_mI20_mI15__541->SetBinContent(316,1.004432);
   ThetaY_mI20_mI15__541->SetBinContent(317,1.009455);
   ThetaY_mI20_mI15__541->SetBinContent(318,1.004801);
   ThetaY_mI20_mI15__541->SetBinContent(319,1);
   ThetaY_mI20_mI15__541->SetBinContent(320,0.9919114);
   ThetaY_mI20_mI15__541->SetBinContent(321,0.9553463);
   ThetaY_mI20_mI15__541->SetBinContent(322,0.8952909);
   ThetaY_mI20_mI15__541->SetBinContent(323,0.8195014);
   ThetaY_mI20_mI15__541->SetBinContent(324,0.6978763);
   ThetaY_mI20_mI15__541->SetBinContent(325,0.5209603);
   ThetaY_mI20_mI15__541->SetBinContent(326,0.2381902);
   ThetaY_mI20_mI15__541->SetBinContent(327,0.0523361);
   ThetaY_mI20_mI15__541->SetBinContent(328,0.0004062789);
   ThetaY_mI20_mI15__541->SetBinError(303,9.047054e-05);
   ThetaY_mI20_mI15__541->SetBinError(304,0.001362576);
   ThetaY_mI20_mI15__541->SetBinError(305,0.002984842);
   ThetaY_mI20_mI15__541->SetBinError(306,0.004358734);
   ThetaY_mI20_mI15__541->SetBinError(307,0.005062714);
   ThetaY_mI20_mI15__541->SetBinError(308,0.005512272);
   ThetaY_mI20_mI15__541->SetBinError(309,0.005811045);
   ThetaY_mI20_mI15__541->SetBinError(310,0.005943577);
   ThetaY_mI20_mI15__541->SetBinError(311,0.006023485);
   ThetaY_mI20_mI15__541->SetBinError(312,0.006104248);
   ThetaY_mI20_mI15__541->SetBinError(313,0.006097875);
   ThetaY_mI20_mI15__541->SetBinError(314,0.006127222);
   ThetaY_mI20_mI15__541->SetBinError(315,0.00607288);
   ThetaY_mI20_mI15__541->SetBinError(316,0.006090824);
   ThetaY_mI20_mI15__541->SetBinError(317,0.006106035);
   ThetaY_mI20_mI15__541->SetBinError(318,0.006091944);
   ThetaY_mI20_mI15__541->SetBinError(319,0.006077371);
   ThetaY_mI20_mI15__541->SetBinError(320,0.006052743);
   ThetaY_mI20_mI15__541->SetBinError(321,0.005940133);
   ThetaY_mI20_mI15__541->SetBinError(322,0.005750397);
   ThetaY_mI20_mI15__541->SetBinError(323,0.00550162);
   ThetaY_mI20_mI15__541->SetBinError(324,0.005076975);
   ThetaY_mI20_mI15__541->SetBinError(325,0.004386499);
   ThetaY_mI20_mI15__541->SetBinError(326,0.002966045);
   ThetaY_mI20_mI15__541->SetBinError(327,0.001390325);
   ThetaY_mI20_mI15__541->SetBinError(328,0.0001224977);
   ThetaY_mI20_mI15__541->SetEntries(498097);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__541->SetLineColor(ci);
   ThetaY_mI20_mI15__541->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__541->SetMarkerColor(ci);
   ThetaY_mI20_mI15__541->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__541->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__541->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__541->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__541->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__541->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__541->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__541->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__541->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__541->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__541->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__541->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__541->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__541->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__541->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__541->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__541->Draw("AEsame");
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
   
   Double_t _fx3181[26] = {
   -62.5,
   -57.5,
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3181[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01077864,
   0.1364292,
   0.6948714,
   0.778245,
   0.8823721,
   0.8982342,
   0.8929495,
   0.8170172,
   0.8772313,
   1,
   0.8522544,
   0.7985446,
   0.7887778,
   0.7422165,
   0.8050935,
   0.4353578,
   0.1947677,
   0,
   0};
   Double_t _felx3181[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3181[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006962172,
   0.02659531,
   0.05965832,
   0.06322896,
   0.06703789,
   0.06824685,
   0.06784405,
   0.06471079,
   0.06722703,
   0.07198917,
   0.06668348,
   0.06575183,
   0.06749611,
   0.06840933,
   0.07721532,
   0.06548192,
   0.06373906,
   0,
   0};
   Double_t _fehx3181[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3181[26] = {
   50.11936,
   0.1889128,
   0.0393466,
   0.01845002,
   0.0136755,
   0.01153574,
   0.01037998,
   0.01421755,
   0.03236548,
   0.06501655,
   0.06858977,
   0.07233801,
   0.07364291,
   0.07320815,
   0.07005352,
   0.07259023,
   0.07737088,
   0.07211963,
   0.07140504,
   0.07353761,
   0.07502846,
   0.085006,
   0.07616366,
   0.08903872,
   0.181442,
   25.42627};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3181,_fy3181,_felx3181,_fehx3181,_fely3181,_fehy3181);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3181 = new TH1F("Graph_Graph3181","",100,-100,100);
   Graph_Graph3181->SetMinimum(0);
   Graph_Graph3181->SetMaximum(1.5);
   Graph_Graph3181->SetDirectory(0);
   Graph_Graph3181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3181->SetLineColor(ci);
   Graph_Graph3181->GetXaxis()->SetRange(1,100);
   Graph_Graph3181->GetXaxis()->CenterTitle(true);
   Graph_Graph3181->GetXaxis()->SetLabelFont(42);
   Graph_Graph3181->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3181->GetXaxis()->SetTitleFont(42);
   Graph_Graph3181->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3181->GetYaxis()->CenterTitle(true);
   Graph_Graph3181->GetYaxis()->SetLabelFont(42);
   Graph_Graph3181->GetYaxis()->SetTitleFont(42);
   Graph_Graph3181->GetZaxis()->SetLabelFont(42);
   Graph_Graph3181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3181->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3181);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.11812,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__542 = new TH2D("ThetaY_vs_Y_mI20_mI15__542","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(7887,6);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(7913,1361);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(7939,6531);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(7965,13927);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(7991,18789);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8017,22274);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8043,24754);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8069,25896);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8095,26597);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8121,27315);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8147,27258);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8173,27521);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8199,27035);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8225,27195);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8251,27331);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8277,27205);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8303,27075);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8329,26856);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8355,25866);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8381,24240);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8407,22188);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8433,18895);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8459,14105);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8485,6449);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8511,1417);
   ThetaY_vs_Y_mI20_mI15__542->SetBinContent(8537,11);
   ThetaY_vs_Y_mI20_mI15__542->SetEntries(498097);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__542->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__542->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__542->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__542->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__542->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__542->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__542->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__542->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__542->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__542->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__542->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__542->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__542->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__542->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__542->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__542->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-20_-15","Reco vertices","lpf");
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
