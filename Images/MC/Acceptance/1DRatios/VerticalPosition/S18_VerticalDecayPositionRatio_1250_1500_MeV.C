void S18_VerticalDecayPositionRatio_1250_1500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06813325,81.25,1.294532);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__922 = new TH1D("S18_Y__922","",24,-60,60);
   S18_Y__922->SetBinContent(4,0.0190992);
   S18_Y__922->SetBinContent(5,0.06185861);
   S18_Y__922->SetBinContent(6,0.1211517);
   S18_Y__922->SetBinContent(7,0.2075257);
   S18_Y__922->SetBinContent(8,0.3474914);
   S18_Y__922->SetBinContent(9,0.5413341);
   S18_Y__922->SetBinContent(10,0.7651083);
   S18_Y__922->SetBinContent(11,0.95439);
   S18_Y__922->SetBinContent(12,1.048461);
   S18_Y__922->SetBinContent(13,1.085519);
   S18_Y__922->SetBinContent(14,1);
   S18_Y__922->SetBinContent(15,0.7787913);
   S18_Y__922->SetBinContent(16,0.554732);
   S18_Y__922->SetBinContent(17,0.3529076);
   S18_Y__922->SetBinContent(18,0.2120867);
   S18_Y__922->SetBinContent(19,0.1185861);
   S18_Y__922->SetBinContent(20,0.0481756);
   S18_Y__922->SetBinContent(21,0.02023945);
   S18_Y__922->SetBinError(4,0.002333339);
   S18_Y__922->SetBinError(5,0.004199236);
   S18_Y__922->SetBinError(6,0.005876718);
   S18_Y__922->SetBinError(7,0.007691413);
   S18_Y__922->SetBinError(8,0.009952731);
   S18_Y__922->SetBinError(9,0.01242233);
   S18_Y__922->SetBinError(10,0.01476834);
   S18_Y__922->SetBinError(11,0.01649427);
   S18_Y__922->SetBinError(12,0.01728806);
   S18_Y__922->SetBinError(13,0.01759093);
   S18_Y__922->SetBinError(14,0.0168838);
   S18_Y__922->SetBinError(15,0.01489981);
   S18_Y__922->SetBinError(16,0.01257511);
   S18_Y__922->SetBinError(17,0.01003);
   S18_Y__922->SetBinError(18,0.007775474);
   S18_Y__922->SetBinError(19,0.005814161);
   S18_Y__922->SetBinError(20,0.003705815);
   S18_Y__922->SetBinError(21,0.002401981);
   S18_Y__922->SetEntries(28897);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__922->SetLineColor(ci);
   S18_Y__922->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__922->SetMarkerColor(ci);
   S18_Y__922->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__922->GetXaxis()->SetRange(0,25);
   S18_Y__922->GetXaxis()->SetLabelFont(42);
   S18_Y__922->GetXaxis()->SetTitleOffset(1);
   S18_Y__922->GetXaxis()->SetTitleFont(42);
   S18_Y__922->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__922->GetYaxis()->CenterTitle(true);
   S18_Y__922->GetYaxis()->SetLabelFont(42);
   S18_Y__922->GetYaxis()->SetTitleFont(42);
   S18_Y__922->GetZaxis()->SetLabelFont(42);
   S18_Y__922->GetZaxis()->SetTitleOffset(1);
   S18_Y__922->GetZaxis()->SetTitleFont(42);
   S18_Y__922->Draw("AE");
   
   TH1D *Y__923 = new TH1D("Y__923","",24,-60,60);
   Y__923->SetBinContent(4,0.03132811);
   Y__923->SetBinContent(5,0.08229036);
   Y__923->SetBinContent(6,0.153052);
   Y__923->SetBinContent(7,0.2574415);
   Y__923->SetBinContent(8,0.4082268);
   Y__923->SetBinContent(9,0.6073712);
   Y__923->SetBinContent(10,0.8201052);
   Y__923->SetBinContent(11,0.9974239);
   Y__923->SetBinContent(12,1.099764);
   Y__923->SetBinContent(13,1.096532);
   Y__923->SetBinContent(14,1);
   Y__923->SetBinContent(15,0.8190162);
   Y__923->SetBinContent(16,0.6065465);
   Y__923->SetBinContent(17,0.4085392);
   Y__923->SetBinContent(18,0.2575151);
   Y__923->SetBinContent(19,0.1530775);
   Y__923->SetBinContent(20,0.08175261);
   Y__923->SetBinContent(21,0.03154892);
   Y__923->SetBinError(4,0.0002169295);
   Y__923->SetBinError(5,0.0003515816);
   Y__923->SetBinError(6,0.0004794807);
   Y__923->SetBinError(7,0.0006218575);
   Y__923->SetBinError(8,0.0007830732);
   Y__923->SetBinError(9,0.0009551656);
   Y__923->SetBinError(10,0.001109906);
   Y__923->SetBinError(11,0.001224028);
   Y__923->SetBinError(12,0.001285291);
   Y__923->SetBinError(13,0.001283401);
   Y__923->SetBinError(14,0.001225608);
   Y__923->SetBinError(15,0.001109169);
   Y__923->SetBinError(16,0.000954517);
   Y__923->SetBinError(17,0.0007833728);
   Y__923->SetBinError(18,0.0006219463);
   Y__923->SetBinError(19,0.0004795207);
   Y__923->SetBinError(20,0.0003504309);
   Y__923->SetBinError(21,0.0002176927);
   Y__923->SetEntries(5932656);

   ci = TColor::GetColor("#ff0000");
   Y__923->SetLineColor(ci);
   Y__923->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__923->SetMarkerColor(ci);
   Y__923->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__923->GetXaxis()->CenterTitle(true);
   Y__923->GetXaxis()->SetLabelFont(42);
   Y__923->GetXaxis()->SetTitleSize(0.04);
   Y__923->GetXaxis()->SetTitleOffset(1.1);
   Y__923->GetXaxis()->SetTitleFont(42);
   Y__923->GetYaxis()->SetTitle("Decays");
   Y__923->GetYaxis()->CenterTitle(true);
   Y__923->GetYaxis()->SetNdivisions(4000510);
   Y__923->GetYaxis()->SetLabelFont(42);
   Y__923->GetYaxis()->SetTitleSize(0.04);
   Y__923->GetYaxis()->SetTitleOffset(1.1);
   Y__923->GetYaxis()->SetTitleFont(42);
   Y__923->GetZaxis()->SetLabelFont(42);
   Y__923->GetZaxis()->SetTitleOffset(1);
   Y__923->GetZaxis()->SetTitleFont(42);
   Y__923->Draw("AEsame");
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
   
   Double_t _fx3308[18] = {
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
   Double_t _fy3308[18] = {
   0.6096506,
   0.7517114,
   0.7915719,
   0.8061081,
   0.8512216,
   0.8912739,
   0.9329392,
   0.9568549,
   0.9533502,
   0.9899564,
   1,
   0.9508864,
   0.9145746,
   0.863828,
   0.8235893,
   0.7746799,
   0.5892852,
   0.641526};
   Double_t _felx3308[18] = {
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
   Double_t _fely3308[18] = {
   0.07441185,
   0.05109061,
   0.03846156,
   0.02993279,
   0.02443162,
   0.02049875,
   0.01805093,
   0.01657767,
   0.01575849,
   0.01608341,
   0.01692741,
   0.01823672,
   0.0207804,
   0.02460333,
   0.03025282,
   0.03804379,
   0.04535461,
   0.07608193};
   Double_t _fehx3308[18] = {
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
   Double_t _fehy3308[18] = {
   0.08410405,
   0.05468789,
   0.04037776,
   0.03106563,
   0.02514322,
   0.02097578,
   0.01840365,
   0.01686743,
   0.01602118,
   0.01634688,
   0.01721643,
   0.01858991,
   0.02125806,
   0.02531435,
   0.03138522,
   0.03995997,
   0.04898819,
   0.08569212};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3308,_fy3308,_felx3308,_fehx3308,_fely3308,_fehy3308);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3308 = new TH1F("Graph_Graph3308","",100,-65,65);
   Graph_Graph3308->SetMinimum(0);
   Graph_Graph3308->SetMaximum(1.25);
   Graph_Graph3308->SetDirectory(0);
   Graph_Graph3308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3308->SetLineColor(ci);
   Graph_Graph3308->GetXaxis()->SetRange(1,100);
   Graph_Graph3308->GetXaxis()->CenterTitle(true);
   Graph_Graph3308->GetXaxis()->SetLabelFont(42);
   Graph_Graph3308->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3308->GetXaxis()->SetTitleFont(42);
   Graph_Graph3308->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3308->GetYaxis()->CenterTitle(true);
   Graph_Graph3308->GetYaxis()->SetLabelFont(42);
   Graph_Graph3308->GetYaxis()->SetTitleFont(42);
   Graph_Graph3308->GetZaxis()->SetLabelFont(42);
   Graph_Graph3308->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3308->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3308);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.158265,510,"S");
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
