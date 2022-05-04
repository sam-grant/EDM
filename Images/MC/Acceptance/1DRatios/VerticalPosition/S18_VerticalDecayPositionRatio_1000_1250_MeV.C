void S18_VerticalDecayPositionRatio_1000_1250_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.0626985,81.25,1.191272);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__751 = new TH1D("S18_Y__751","",24,-60,60);
   S18_Y__751->SetBinContent(4,0.01714286);
   S18_Y__751->SetBinContent(5,0.05965714);
   S18_Y__751->SetBinContent(6,0.1122286);
   S18_Y__751->SetBinContent(7,0.1885714);
   S18_Y__751->SetBinContent(8,0.3170286);
   S18_Y__751->SetBinContent(9,0.5046857);
   S18_Y__751->SetBinContent(10,0.7106286);
   S18_Y__751->SetBinContent(11,0.8770286);
   S18_Y__751->SetBinContent(12,0.9824);
   S18_Y__751->SetBinContent(13,1);
   S18_Y__751->SetBinContent(14,0.8541714);
   S18_Y__751->SetBinContent(15,0.7067429);
   S18_Y__751->SetBinContent(16,0.5085714);
   S18_Y__751->SetBinContent(17,0.3193143);
   S18_Y__751->SetBinContent(18,0.1878857);
   S18_Y__751->SetBinContent(19,0.1067429);
   S18_Y__751->SetBinContent(20,0.05462857);
   S18_Y__751->SetBinContent(21,0.01714286);
   S18_Y__751->SetBinError(4,0.001979487);
   S18_Y__751->SetBinError(5,0.003692684);
   S18_Y__751->SetBinError(6,0.005064805);
   S18_Y__751->SetBinError(7,0.006565214);
   S18_Y__751->SetBinError(8,0.00851256);
   S18_Y__751->SetBinError(9,0.01074043);
   S18_Y__751->SetBinError(10,0.01274478);
   S18_Y__751->SetBinError(11,0.01415852);
   S18_Y__751->SetBinError(12,0.01498494);
   S18_Y__751->SetBinError(13,0.01511858);
   S18_Y__751->SetBinError(14,0.0139728);
   S18_Y__751->SetBinError(15,0.01270989);
   S18_Y__751->SetBinError(16,0.01078169);
   S18_Y__751->SetBinError(17,0.008543192);
   S18_Y__751->SetBinError(18,0.006553267);
   S18_Y__751->SetBinError(19,0.00493947);
   S18_Y__751->SetBinError(20,0.003533629);
   S18_Y__751->SetBinError(21,0.001979487);
   S18_Y__751->SetEntries(32920);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__751->SetLineColor(ci);
   S18_Y__751->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__751->SetMarkerColor(ci);
   S18_Y__751->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__751->GetXaxis()->SetRange(0,25);
   S18_Y__751->GetXaxis()->SetLabelFont(42);
   S18_Y__751->GetXaxis()->SetTitleOffset(1);
   S18_Y__751->GetXaxis()->SetTitleFont(42);
   S18_Y__751->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__751->GetYaxis()->CenterTitle(true);
   S18_Y__751->GetYaxis()->SetLabelFont(42);
   S18_Y__751->GetYaxis()->SetTitleFont(42);
   S18_Y__751->GetZaxis()->SetLabelFont(42);
   S18_Y__751->GetZaxis()->SetTitleOffset(1);
   S18_Y__751->GetZaxis()->SetTitleFont(42);
   S18_Y__751->Draw("AE");
   
   TH1D *Y__752 = new TH1D("Y__752","",24,-60,60);
   Y__752->SetBinContent(4,0.02840461);
   Y__752->SetBinContent(5,0.0745027);
   Y__752->SetBinContent(6,0.1388375);
   Y__752->SetBinContent(7,0.2352584);
   Y__752->SetBinContent(8,0.3734031);
   Y__752->SetBinContent(9,0.5516396);
   Y__752->SetBinContent(10,0.74593);
   Y__752->SetBinContent(11,0.9096524);
   Y__752->SetBinContent(12,1.001529);
   Y__752->SetBinContent(13,1);
   Y__752->SetBinContent(14,0.9066152);
   Y__752->SetBinContent(15,0.7463359);
   Y__752->SetBinContent(16,0.5515655);
   Y__752->SetBinContent(17,0.3726642);
   Y__752->SetBinContent(18,0.2350578);
   Y__752->SetBinContent(19,0.1384219);
   Y__752->SetBinContent(20,0.07433619);
   Y__752->SetBinContent(21,0.0285541);
   Y__752->SetBinError(4,0.0001858019);
   Y__752->SetBinError(5,0.0003009136);
   Y__752->SetBinError(6,0.0004107799);
   Y__752->SetBinError(7,0.0005347223);
   Y__752->SetBinError(8,0.0006736662);
   Y__752->SetBinError(9,0.0008188106);
   Y__752->SetBinError(10,0.0009521487);
   Y__752->SetBinError(11,0.001051462);
   Y__752->SetBinError(12,0.001103284);
   Y__752->SetBinError(13,0.001102442);
   Y__752->SetBinError(14,0.001049705);
   Y__752->SetBinError(15,0.0009524078);
   Y__752->SetBinError(16,0.0008187556);
   Y__752->SetBinError(17,0.0006729993);
   Y__752->SetBinError(18,0.0005344944);
   Y__752->SetBinError(19,0.0004101646);
   Y__752->SetBinError(20,0.0003005771);
   Y__752->SetBinError(21,0.0001862902);
   Y__752->SetEntries(6675047);

   ci = TColor::GetColor("#ff0000");
   Y__752->SetLineColor(ci);
   Y__752->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__752->SetMarkerColor(ci);
   Y__752->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__752->GetXaxis()->CenterTitle(true);
   Y__752->GetXaxis()->SetLabelFont(42);
   Y__752->GetXaxis()->SetTitleSize(0.04);
   Y__752->GetXaxis()->SetTitleOffset(1.1);
   Y__752->GetXaxis()->SetTitleFont(42);
   Y__752->GetYaxis()->SetTitle("Decays");
   Y__752->GetYaxis()->CenterTitle(true);
   Y__752->GetYaxis()->SetNdivisions(4000510);
   Y__752->GetYaxis()->SetLabelFont(42);
   Y__752->GetYaxis()->SetTitleSize(0.04);
   Y__752->GetYaxis()->SetTitleOffset(1.1);
   Y__752->GetYaxis()->SetTitleFont(42);
   Y__752->GetZaxis()->SetLabelFont(42);
   Y__752->GetZaxis()->SetTitleOffset(1);
   Y__752->GetZaxis()->SetTitleFont(42);
   Y__752->Draw("AEsame");
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
   
   Double_t _fx3251[18] = {
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
   Double_t _fy3251[18] = {
   0.6035238,
   0.800738,
   0.8083446,
   0.8015503,
   0.8490249,
   0.914883,
   0.9526746,
   0.9641359,
   0.9809003,
   1,
   0.9421543,
   0.9469501,
   0.9220509,
   0.8568419,
   0.799317,
   0.7711415,
   0.7348853,
   0.6003641};
   Double_t _felx3251[18] = {
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
   Double_t _fely3251[18] = {
   0.06964326,
   0.04963764,
   0.0365458,
   0.02796008,
   0.02284585,
   0.01951581,
   0.01712804,
   0.01560392,
   0.01500045,
   0.01515813,
   0.01544991,
   0.0170716,
   0.01959381,
   0.02297402,
   0.02793282,
   0.03574431,
   0.04759487,
   0.06927807};
   Double_t _fehx3251[18] = {
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
   Double_t _fehy3251[18] = {
   0.07818719,
   0.05281521,
   0.03823696,
   0.02895298,
   0.0234691,
   0.01993666,
   0.01743882,
   0.01585854,
   0.01523163,
   0.01538968,
   0.01570539,
   0.0173822,
   0.02001472,
   0.0235985,
   0.02892659,
   0.03744116,
   0.05078272,
   0.07777712};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3251,_fy3251,_felx3251,_fehx3251,_fely3251,_fehy3251);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3251 = new TH1F("Graph_Graph3251","",100,-65,65);
   Graph_Graph3251->SetMinimum(0);
   Graph_Graph3251->SetMaximum(1.25);
   Graph_Graph3251->SetDirectory(0);
   Graph_Graph3251->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3251->SetLineColor(ci);
   Graph_Graph3251->GetXaxis()->SetRange(1,100);
   Graph_Graph3251->GetXaxis()->CenterTitle(true);
   Graph_Graph3251->GetXaxis()->SetLabelFont(42);
   Graph_Graph3251->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3251->GetXaxis()->SetTitleFont(42);
   Graph_Graph3251->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3251->GetYaxis()->CenterTitle(true);
   Graph_Graph3251->GetYaxis()->SetLabelFont(42);
   Graph_Graph3251->GetYaxis()->SetTitleFont(42);
   Graph_Graph3251->GetZaxis()->SetLabelFont(42);
   Graph_Graph3251->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3251->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3251);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.065875,510,"S");
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
