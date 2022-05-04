void S18_VerticalDecayPositionRatio_1500_1750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06288548,81.25,1.194824);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__1093 = new TH1D("S18_Y__1093","",24,-60,60);
   S18_Y__1093->SetBinContent(4,0.01350016);
   S18_Y__1093->SetBinContent(5,0.05301284);
   S18_Y__1093->SetBinContent(6,0.1155746);
   S18_Y__1093->SetBinContent(7,0.2034903);
   S18_Y__1093->SetBinContent(8,0.3315772);
   S18_Y__1093->SetBinContent(9,0.5215673);
   S18_Y__1093->SetBinContent(10,0.7378992);
   S18_Y__1093->SetBinContent(11,0.8590715);
   S18_Y__1093->SetBinContent(12,0.971024);
   S18_Y__1093->SetBinContent(13,1);
   S18_Y__1093->SetBinContent(14,0.8689496);
   S18_Y__1093->SetBinContent(15,0.6950938);
   S18_Y__1093->SetBinContent(16,0.5070794);
   S18_Y__1093->SetBinContent(17,0.3170892);
   S18_Y__1093->SetBinContent(18,0.1866974);
   S18_Y__1093->SetBinContent(19,0.1103062);
   S18_Y__1093->SetBinContent(20,0.04741521);
   S18_Y__1093->SetBinContent(21,0.0177807);
   S18_Y__1093->SetBinError(4,0.002108371);
   S18_Y__1093->SetBinError(5,0.004177997);
   S18_Y__1093->SetBinError(6,0.006168915);
   S18_Y__1093->SetBinError(7,0.00818558);
   S18_Y__1093->SetBinError(8,0.01044888);
   S18_Y__1093->SetBinError(9,0.01310487);
   S18_Y__1093->SetBinError(10,0.01558749);
   S18_Y__1093->SetBinError(11,0.01681869);
   S18_Y__1093->SetBinError(12,0.01788103);
   S18_Y__1093->SetBinError(13,0.01814586);
   S18_Y__1093->SetBinError(14,0.01691511);
   S18_Y__1093->SetBinError(15,0.01512862);
   S18_Y__1093->SetBinError(16,0.01292158);
   S18_Y__1093->SetBinError(17,0.01021806);
   S18_Y__1093->SetBinError(18,0.007840554);
   S18_Y__1093->SetBinError(19,0.006026673);
   S18_Y__1093->SetBinError(20,0.003951268);
   S18_Y__1093->SetBinError(21,0.002419647);
   S18_Y__1093->SetEntries(22951);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__1093->SetLineColor(ci);
   S18_Y__1093->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__1093->SetMarkerColor(ci);
   S18_Y__1093->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__1093->GetXaxis()->SetRange(0,25);
   S18_Y__1093->GetXaxis()->SetLabelFont(42);
   S18_Y__1093->GetXaxis()->SetTitleOffset(1);
   S18_Y__1093->GetXaxis()->SetTitleFont(42);
   S18_Y__1093->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__1093->GetYaxis()->CenterTitle(true);
   S18_Y__1093->GetYaxis()->SetLabelFont(42);
   S18_Y__1093->GetYaxis()->SetTitleFont(42);
   S18_Y__1093->GetZaxis()->SetLabelFont(42);
   S18_Y__1093->GetZaxis()->SetTitleOffset(1);
   S18_Y__1093->GetZaxis()->SetTitleFont(42);
   S18_Y__1093->Draw("AE");
   
   TH1D *Y__1094 = new TH1D("Y__1094","",24,-60,60);
   Y__1094->SetBinContent(4,0.02840338);
   Y__1094->SetBinContent(5,0.07450623);
   Y__1094->SetBinContent(6,0.1389616);
   Y__1094->SetBinContent(7,0.2356843);
   Y__1094->SetBinContent(8,0.3726678);
   Y__1094->SetBinContent(9,0.5521968);
   Y__1094->SetBinContent(10,0.7450337);
   Y__1094->SetBinContent(11,0.9111705);
   Y__1094->SetBinContent(12,1.000648);
   Y__1094->SetBinContent(13,1);
   Y__1094->SetBinContent(14,0.9080676);
   Y__1094->SetBinContent(15,0.7458107);
   Y__1094->SetBinContent(16,0.5514596);
   Y__1094->SetBinContent(17,0.3715175);
   Y__1094->SetBinContent(18,0.2362166);
   Y__1094->SetBinContent(19,0.1395669);
   Y__1094->SetBinContent(20,0.0742123);
   Y__1094->SetBinContent(21,0.02853684);
   Y__1094->SetBinError(4,0.0002124333);
   Y__1094->SetBinError(5,0.0003440598);
   Y__1094->SetBinError(6,0.0004698779);
   Y__1094->SetBinError(7,0.0006119318);
   Y__1094->SetBinError(8,0.0007694822);
   Y__1094->SetBinError(9,0.0009366657);
   Y__1094->SetBinError(10,0.001087992);
   Y__1094->SetBinError(11,0.001203199);
   Y__1094->SetBinError(12,0.001260893);
   Y__1094->SetBinError(13,0.001260485);
   Y__1094->SetBinError(14,0.001201149);
   Y__1094->SetBinError(15,0.001088559);
   Y__1094->SetBinError(16,0.0009360402);
   Y__1094->SetBinError(17,0.0007682938);
   Y__1094->SetBinError(18,0.0006126224);
   Y__1094->SetBinError(19,0.0004709002);
   Y__1094->SetBinError(20,0.0003433805);
   Y__1094->SetBinError(21,0.0002129318);
   Y__1094->SetEntries(5107343);

   ci = TColor::GetColor("#ff0000");
   Y__1094->SetLineColor(ci);
   Y__1094->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1094->SetMarkerColor(ci);
   Y__1094->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1094->GetXaxis()->CenterTitle(true);
   Y__1094->GetXaxis()->SetLabelFont(42);
   Y__1094->GetXaxis()->SetTitleSize(0.04);
   Y__1094->GetXaxis()->SetTitleOffset(1.1);
   Y__1094->GetXaxis()->SetTitleFont(42);
   Y__1094->GetYaxis()->SetTitle("Decays");
   Y__1094->GetYaxis()->CenterTitle(true);
   Y__1094->GetYaxis()->SetNdivisions(4000510);
   Y__1094->GetYaxis()->SetLabelFont(42);
   Y__1094->GetYaxis()->SetTitleSize(0.04);
   Y__1094->GetYaxis()->SetTitleOffset(1.1);
   Y__1094->GetYaxis()->SetTitleFont(42);
   Y__1094->GetZaxis()->SetLabelFont(42);
   Y__1094->GetZaxis()->SetTitleOffset(1);
   Y__1094->GetZaxis()->SetTitleFont(42);
   Y__1094->Draw("AEsame");
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
   
   Double_t _fx3365[18] = {
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
   Double_t _fy3365[18] = {
   0.4753014,
   0.7115222,
   0.8317017,
   0.8634019,
   0.8897394,
   0.9445316,
   0.9904239,
   0.9428218,
   0.970395,
   1,
   0.9569218,
   0.9319977,
   0.9195223,
   0.8534974,
   0.7903654,
   0.7903465,
   0.6389131,
   0.623079};
   Double_t _felx3365[18] = {
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
   Double_t _fely3365[18] = {
   0.07400833,
   0.05611304,
   0.04446052,
   0.03479387,
   0.02809347,
   0.02378373,
   0.02097021,
   0.01849908,
   0.01791021,
   0.01818858,
   0.01866935,
   0.02032873,
   0.02348094,
   0.02755531,
   0.03324555,
   0.04324168,
   0.05326225,
   0.08465162};
   Double_t _fehx3365[18] = {
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
   Double_t _fehy3365[18] = {
   0.08654294,
   0.06072423,
   0.04690378,
   0.03622533,
   0.02899497,
   0.02439036,
   0.02141902,
   0.01886569,
   0.01824389,
   0.01852248,
   0.01903722,
   0.0207771,
   0.02408842,
   0.02845975,
   0.03467451,
   0.04567534,
   0.05790011,
   0.09702057};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3365,_fy3365,_felx3365,_fehx3365,_fely3365,_fehy3365);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3365 = new TH1F("Graph_Graph3365","",100,-65,65);
   Graph_Graph3365->SetMinimum(0);
   Graph_Graph3365->SetMaximum(1.25);
   Graph_Graph3365->SetDirectory(0);
   Graph_Graph3365->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3365->SetLineColor(ci);
   Graph_Graph3365->GetXaxis()->SetRange(1,100);
   Graph_Graph3365->GetXaxis()->CenterTitle(true);
   Graph_Graph3365->GetXaxis()->SetLabelFont(42);
   Graph_Graph3365->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3365->GetXaxis()->SetTitleFont(42);
   Graph_Graph3365->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3365->GetYaxis()->CenterTitle(true);
   Graph_Graph3365->GetYaxis()->SetLabelFont(42);
   Graph_Graph3365->GetYaxis()->SetTitleFont(42);
   Graph_Graph3365->GetZaxis()->SetLabelFont(42);
   Graph_Graph3365->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3365->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3365);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.069053,510,"S");
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
