void S12S18_VerticalDecayPositionRatio_1000_1250_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.0624253,81.25,1.186081);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__808 = new TH1D("S12S18_Y__808","",24,-60,60);
   S12S18_Y__808->SetBinContent(4,0.01876001);
   S12S18_Y__808->SetBinContent(5,0.05742393);
   S12S18_Y__808->SetBinContent(6,0.1072981);
   S12S18_Y__808->SetBinContent(7,0.1946923);
   S12S18_Y__808->SetBinContent(8,0.3238389);
   S12S18_Y__808->SetBinContent(9,0.5116678);
   S12S18_Y__808->SetBinContent(10,0.7227179);
   S12S18_Y__808->SetBinContent(11,0.8883551);
   S12S18_Y__808->SetBinContent(12,1);
   S12S18_Y__808->SetBinContent(13,0.9925646);
   S12S18_Y__808->SetBinContent(14,0.8541524);
   S12S18_Y__808->SetBinContent(15,0.7021277);
   S12S18_Y__808->SetBinContent(16,0.5068634);
   S12S18_Y__808->SetBinContent(17,0.3210936);
   S12S18_Y__808->SetBinContent(18,0.1856555);
   S12S18_Y__808->SetBinContent(19,0.1069549);
   S12S18_Y__808->SetBinContent(20,0.05364905);
   S12S18_Y__808->SetBinContent(21,0.0164722);
   S12S18_Y__808->SetBinError(4,0.001464911);
   S12S18_Y__808->SetBinError(5,0.002562955);
   S12S18_Y__808->SetBinError(6,0.003503407);
   S12S18_Y__808->SetBinError(7,0.004719206);
   S12S18_Y__808->SetBinError(8,0.006086381);
   S12S18_Y__808->SetBinError(9,0.007650479);
   S12S18_Y__808->SetBinError(10,0.00909241);
   S12S18_Y__808->SetBinError(11,0.01008064);
   S12S18_Y__808->SetBinError(12,0.01069534);
   S12S18_Y__808->SetBinError(13,0.0106555);
   S12S18_Y__808->SetBinError(14,0.009884672);
   S12S18_Y__808->SetBinError(15,0.008961953);
   S12S18_Y__808->SetBinError(16,0.007614477);
   S12S18_Y__808->SetBinError(17,0.006060527);
   S12S18_Y__808->SetBinError(18,0.004608382);
   S12S18_Y__808->SetBinError(19,0.0034978);
   S12S18_Y__808->SetBinError(20,0.002477283);
   S12S18_Y__808->SetBinError(21,0.001372684);
   S12S18_Y__808->SetEntries(66127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__808->SetLineColor(ci);
   S12S18_Y__808->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__808->SetMarkerColor(ci);
   S12S18_Y__808->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__808->GetXaxis()->SetRange(0,25);
   S12S18_Y__808->GetXaxis()->SetLabelFont(42);
   S12S18_Y__808->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__808->GetXaxis()->SetTitleFont(42);
   S12S18_Y__808->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__808->GetYaxis()->CenterTitle(true);
   S12S18_Y__808->GetYaxis()->SetLabelFont(42);
   S12S18_Y__808->GetYaxis()->SetTitleFont(42);
   S12S18_Y__808->GetZaxis()->SetLabelFont(42);
   S12S18_Y__808->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__808->GetZaxis()->SetTitleFont(42);
   S12S18_Y__808->Draw("AE");
   
   TH1D *Y__809 = new TH1D("Y__809","",24,-60,60);
   Y__809->SetBinContent(4,0.02836125);
   Y__809->SetBinContent(5,0.07438896);
   Y__809->SetBinContent(6,0.1386256);
   Y__809->SetBinContent(7,0.2348992);
   Y__809->SetBinContent(8,0.3728331);
   Y__809->SetBinContent(9,0.5507975);
   Y__809->SetBinContent(10,0.7447913);
   Y__809->SetBinContent(11,0.9082637);
   Y__809->SetBinContent(12,1);
   Y__809->SetBinContent(13,0.9984734);
   Y__809->SetBinContent(14,0.9052311);
   Y__809->SetBinContent(15,0.7451966);
   Y__809->SetBinContent(16,0.5507234);
   Y__809->SetBinContent(17,0.3720953);
   Y__809->SetBinContent(18,0.234699);
   Y__809->SetBinContent(19,0.1382106);
   Y__809->SetBinContent(20,0.07422271);
   Y__809->SetBinContent(21,0.02851051);
   Y__809->SetBinError(4,0.0001855183);
   Y__809->SetBinError(5,0.0003004542);
   Y__809->SetBinError(6,0.0004101528);
   Y__809->SetBinError(7,0.000533906);
   Y__809->SetBinError(8,0.0006726378);
   Y__809->SetBinError(9,0.0008175606);
   Y__809->SetBinError(10,0.0009506952);
   Y__809->SetBinError(11,0.001049857);
   Y__809->SetBinError(12,0.0011016);
   Y__809->SetBinError(13,0.001100759);
   Y__809->SetBinError(14,0.001048102);
   Y__809->SetBinError(15,0.0009509538);
   Y__809->SetBinError(16,0.0008175057);
   Y__809->SetBinError(17,0.0006719719);
   Y__809->SetBinError(18,0.0005336784);
   Y__809->SetBinError(19,0.0004095384);
   Y__809->SetBinError(20,0.0003001183);
   Y__809->SetBinError(21,0.0001860058);
   Y__809->SetEntries(6675047);

   ci = TColor::GetColor("#ff0000");
   Y__809->SetLineColor(ci);
   Y__809->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__809->SetMarkerColor(ci);
   Y__809->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__809->GetXaxis()->CenterTitle(true);
   Y__809->GetXaxis()->SetLabelFont(42);
   Y__809->GetXaxis()->SetTitleSize(0.04);
   Y__809->GetXaxis()->SetTitleOffset(1.1);
   Y__809->GetXaxis()->SetTitleFont(42);
   Y__809->GetYaxis()->SetTitle("Decays");
   Y__809->GetYaxis()->CenterTitle(true);
   Y__809->GetYaxis()->SetNdivisions(4000510);
   Y__809->GetYaxis()->SetLabelFont(42);
   Y__809->GetYaxis()->SetTitleSize(0.04);
   Y__809->GetYaxis()->SetTitleOffset(1.1);
   Y__809->GetYaxis()->SetTitleFont(42);
   Y__809->GetZaxis()->SetLabelFont(42);
   Y__809->GetZaxis()->SetTitleOffset(1);
   Y__809->GetZaxis()->SetTitleFont(42);
   Y__809->Draw("AEsame");
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
   
   Double_t _fx3270[18] = {
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
   Double_t _fy3270[18] = {
   0.6614663,
   0.7719416,
   0.7740137,
   0.8288333,
   0.8685896,
   0.9289582,
   0.970363,
   0.9780805,
   1,
   0.9940822,
   0.9435738,
   0.9422046,
   0.9203593,
   0.8629337,
   0.7910364,
   0.773855,
   0.7228118,
   0.577759};
   Double_t _felx3270[18] = {
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
   Double_t _fely3270[18] = {
   0.0517788,
   0.03458244,
   0.02537136,
   0.02017645,
   0.01639873,
   0.01395756,
   0.01227034,
   0.01115598,
   0.01075171,
   0.01072771,
   0.01097376,
   0.01208591,
   0.01389311,
   0.01636095,
   0.01971542,
   0.02540679,
   0.03349187,
   0.04823679};
   Double_t _fehx3270[18] = {
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
   Double_t _fehy3270[18] = {
   0.05600219,
   0.03616812,
   0.02621719,
   0.02067379,
   0.01671135,
   0.0141689,
   0.01242651,
   0.01128397,
   0.01086795,
   0.01084412,
   0.01110215,
   0.01224196,
   0.01410446,
   0.01667418,
   0.02021314,
   0.02625517,
   0.03508146,
   0.05244481};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3270,_fy3270,_felx3270,_fehx3270,_fely3270,_fehy3270);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3270 = new TH1F("Graph_Graph3270","",100,-65,65);
   Graph_Graph3270->SetMinimum(0);
   Graph_Graph3270->SetMaximum(1.25);
   Graph_Graph3270->SetDirectory(0);
   Graph_Graph3270->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3270->SetLineColor(ci);
   Graph_Graph3270->GetXaxis()->SetRange(1,100);
   Graph_Graph3270->GetXaxis()->CenterTitle(true);
   Graph_Graph3270->GetXaxis()->SetLabelFont(42);
   Graph_Graph3270->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3270->GetXaxis()->SetTitleFont(42);
   Graph_Graph3270->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3270->GetYaxis()->CenterTitle(true);
   Graph_Graph3270->GetYaxis()->SetLabelFont(42);
   Graph_Graph3270->GetYaxis()->SetTitleFont(42);
   Graph_Graph3270->GetZaxis()->SetLabelFont(42);
   Graph_Graph3270->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3270->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3270);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.06123,510,"S");
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
