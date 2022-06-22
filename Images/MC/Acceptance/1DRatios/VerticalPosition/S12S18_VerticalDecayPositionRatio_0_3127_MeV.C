void S12S18_VerticalDecayPositionRatio_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun  1 10:06:32 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06205744,81.25,1.179091);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__11 = new TH1D("S12S18_Y__11","",24,-60,60);
   S12S18_Y__11->SetBinContent(4,0.01788041);
   S12S18_Y__11->SetBinContent(5,0.05373108);
   S12S18_Y__11->SetBinContent(6,0.1073948);
   S12S18_Y__11->SetBinContent(7,0.1974931);
   S12S18_Y__11->SetBinContent(8,0.333236);
   S12S18_Y__11->SetBinContent(9,0.5128937);
   S12S18_Y__11->SetBinContent(10,0.7221349);
   S12S18_Y__11->SetBinContent(11,0.893032);
   S12S18_Y__11->SetBinContent(12,0.9917337);
   S12S18_Y__11->SetBinContent(13,1);
   S12S18_Y__11->SetBinContent(14,0.8860461);
   S12S18_Y__11->SetBinContent(15,0.707871);
   S12S18_Y__11->SetBinContent(16,0.512714);
   S12S18_Y__11->SetBinContent(17,0.3274855);
   S12S18_Y__11->SetBinContent(18,0.190013);
   S12S18_Y__11->SetBinContent(19,0.1079563);
   S12S18_Y__11->SetBinContent(20,0.05069859);
   S12S18_Y__11->SetBinContent(21,0.01657756);
   S12S18_Y__11->SetBinError(4,0.0006337543);
   S12S18_Y__11->SetBinError(5,0.001098614);
   S12S18_Y__11->SetBinError(6,0.001553187);
   S12S18_Y__11->SetBinError(7,0.002106242);
   S12S18_Y__11->SetBinError(8,0.00273595);
   S12S18_Y__11->SetBinError(9,0.003394266);
   S12S18_Y__11->SetBinError(10,0.004027554);
   S12S18_Y__11->SetBinError(11,0.004478842);
   S12S18_Y__11->SetBinError(12,0.004719866);
   S12S18_Y__11->SetBinError(13,0.004739496);
   S12S18_Y__11->SetBinError(14,0.004461289);
   S12S18_Y__11->SetBinError(15,0.003987578);
   S12S18_Y__11->SetBinError(16,0.003393671);
   S12S18_Y__11->SetBinError(17,0.002712241);
   S12S18_Y__11->SetBinError(18,0.002065969);
   S12S18_Y__11->SetBinError(19,0.001557242);
   S12S18_Y__11->SetBinError(20,0.001067161);
   S12S18_Y__11->SetBinError(21,0.0006102286);
   S12S18_Y__11->SetEntries(339623);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__11->SetLineColor(ci);
   S12S18_Y__11->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__11->SetMarkerColor(ci);
   S12S18_Y__11->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__11->GetXaxis()->SetRange(0,25);
   S12S18_Y__11->GetXaxis()->SetLabelFont(42);
   S12S18_Y__11->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__11->GetXaxis()->SetTitleFont(42);
   S12S18_Y__11->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__11->GetYaxis()->CenterTitle(true);
   S12S18_Y__11->GetYaxis()->SetLabelFont(42);
   S12S18_Y__11->GetYaxis()->SetTitleFont(42);
   S12S18_Y__11->GetZaxis()->SetLabelFont(42);
   S12S18_Y__11->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__11->GetZaxis()->SetTitleFont(42);
   S12S18_Y__11->Draw("AE");
   
   TH1D *Y__12 = new TH1D("Y__12","",24,-60,60);
   Y__12->SetBinContent(4,0.02844669);
   Y__12->SetBinContent(5,0.07447262);
   Y__12->SetBinContent(6,0.1391633);
   Y__12->SetBinContent(7,0.2350921);
   Y__12->SetBinContent(8,0.3728205);
   Y__12->SetBinContent(9,0.5518235);
   Y__12->SetBinContent(10,0.7460147);
   Y__12->SetBinContent(11,0.9091942);
   Y__12->SetBinContent(12,1.000423);
   Y__12->SetBinContent(13,1);
   Y__12->SetBinContent(14,0.908756);
   Y__12->SetBinContent(15,0.7454056);
   Y__12->SetBinContent(16,0.5512242);
   Y__12->SetBinContent(17,0.3723458);
   Y__12->SetBinContent(18,0.2348226);
   Y__12->SetBinContent(19,0.1388689);
   Y__12->SetBinContent(20,0.07432488);
   Y__12->SetBinContent(21,0.02838741);
   Y__12->SetBinError(4,6.087684e-05);
   Y__12->SetBinError(5,9.849962e-05);
   Y__12->SetBinError(6,0.0001346476);
   Y__12->SetBinError(7,0.0001750069);
   Y__12->SetBinError(8,0.0002203871);
   Y__12->SetBinError(9,0.0002681244);
   Y__12->SetBinError(10,0.0003117525);
   Y__12->SetBinError(11,0.0003441633);
   Y__12->SetBinError(12,0.0003610174);
   Y__12->SetBinError(13,0.000360941);
   Y__12->SetBinError(14,0.0003440804);
   Y__12->SetBinError(15,0.0003116252);
   Y__12->SetBinError(16,0.0002679788);
   Y__12->SetBinError(17,0.0002202467);
   Y__12->SetBinError(18,0.0001749066);
   Y__12->SetBinError(19,0.0001345051);
   Y__12->SetBinError(20,9.840187e-05);
   Y__12->SetBinError(21,6.081338e-05);
   Y__12->SetEntries(6.226346e+07);

   ci = TColor::GetColor("#ff0000");
   Y__12->SetLineColor(ci);
   Y__12->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__12->SetMarkerColor(ci);
   Y__12->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__12->GetXaxis()->CenterTitle(true);
   Y__12->GetXaxis()->SetLabelFont(42);
   Y__12->GetXaxis()->SetTitleSize(0.04);
   Y__12->GetXaxis()->SetTitleOffset(1.1);
   Y__12->GetXaxis()->SetTitleFont(42);
   Y__12->GetYaxis()->SetTitle("Decays");
   Y__12->GetYaxis()->CenterTitle(true);
   Y__12->GetYaxis()->SetNdivisions(4000510);
   Y__12->GetYaxis()->SetLabelFont(42);
   Y__12->GetYaxis()->SetTitleSize(0.04);
   Y__12->GetYaxis()->SetTitleOffset(1.1);
   Y__12->GetYaxis()->SetTitleFont(42);
   Y__12->GetZaxis()->SetLabelFont(42);
   Y__12->GetZaxis()->SetTitleOffset(1);
   Y__12->GetZaxis()->SetTitleFont(42);
   Y__12->Draw("AEsame");
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
   
   Double_t _fx3005[18] = {
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
   Double_t _fy3005[18] = {
   0.6285586,
   0.7214876,
   0.7717176,
   0.8400671,
   0.8938242,
   0.9294524,
   0.9679902,
   0.9822236,
   0.991314,
   1,
   0.9750099,
   0.9496454,
   0.9301369,
   0.8795199,
   0.809177,
   0.7773977,
   0.6821214,
   0.583976};
   Double_t _felx3005[18] = {
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
   Double_t _fely3005[18] = {
   0.02231451,
   0.0147817,
   0.01118545,
   0.008980845,
   0.00735743,
   0.00616751,
   0.005413864,
   0.004940156,
   0.004731394,
   0.004753202,
   0.004923066,
   0.005364225,
   0.006173146,
   0.007302669,
   0.008818446,
   0.01123862,
   0.01438536,
   0.0215279};
   Double_t _fehx3005[18] = {
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
   Double_t _fehy3005[18] = {
   0.02312122,
   0.01508772,
   0.01134877,
   0.009077378,
   0.007418245,
   0.006208573,
   0.005444229,
   0.004965066,
   0.004754031,
   0.004775849,
   0.004947987,
   0.005394612,
   0.006214254,
   0.007363559,
   0.008915082,
   0.01140229,
   0.01469201,
   0.02233663};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-65,65);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(1.25);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetRange(1,100);
   Graph_Graph3005->GetXaxis()->CenterTitle(true);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3005->GetYaxis()->CenterTitle(true);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.054976,510,"S");
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
