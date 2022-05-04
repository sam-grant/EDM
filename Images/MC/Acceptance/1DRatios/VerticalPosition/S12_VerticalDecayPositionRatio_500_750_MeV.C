void S12_VerticalDecayPositionRatio_500_750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:39 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.1675907,81.25,3.184223);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__352 = new TH1D("S12_Y__352","",24,-60,60);
   S12_Y__352->SetBinContent(4,0.05278592);
   S12_Y__352->SetBinContent(5,0.1554252);
   S12_Y__352->SetBinContent(6,0.3079179);
   S12_Y__352->SetBinContent(7,0.5733138);
   S12_Y__352->SetBinContent(8,0.914956);
   S12_Y__352->SetBinContent(9,1.398827);
   S12_Y__352->SetBinContent(10,1.970674);
   S12_Y__352->SetBinContent(11,2.41349);
   S12_Y__352->SetBinContent(12,2.61437);
   S12_Y__352->SetBinContent(13,2.651026);
   S12_Y__352->SetBinContent(14,2.281525);
   S12_Y__352->SetBinContent(15,1.950147);
   S12_Y__352->SetBinContent(16,1.432551);
   S12_Y__352->SetBinContent(17,1);
   S12_Y__352->SetBinContent(18,0.5747801);
   S12_Y__352->SetBinContent(19,0.3181818);
   S12_Y__352->SetBinContent(20,0.1730205);
   S12_Y__352->SetBinContent(21,0.04398827);
   S12_Y__352->SetBinError(4,0.008797654);
   S12_Y__352->SetBinError(5,0.01509623);
   S12_Y__352->SetBinError(6,0.02124835);
   S12_Y__352->SetBinError(7,0.02899372);
   S12_Y__352->SetBinError(8,0.03662755);
   S12_Y__352->SetBinError(9,0.0452887);
   S12_Y__352->SetBinError(10,0.05375455);
   S12_Y__352->SetBinError(11,0.05948816);
   S12_Y__352->SetBinError(12,0.06191435);
   S12_Y__352->SetBinError(13,0.0623469);
   S12_Y__352->SetBinError(14,0.05783895);
   S12_Y__352->SetBinError(15,0.05347385);
   S12_Y__352->SetBinError(16,0.04583138);
   S12_Y__352->SetBinError(17,0.03829198);
   S12_Y__352->SetBinError(18,0.02903078);
   S12_Y__352->SetBinError(19,0.02159959);
   S12_Y__352->SetBinError(20,0.01592783);
   S12_Y__352->SetBinError(21,0.008031123);
   S12_Y__352->SetEntries(14204);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__352->SetLineColor(ci);
   S12_Y__352->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__352->SetMarkerColor(ci);
   S12_Y__352->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__352->GetXaxis()->SetRange(0,25);
   S12_Y__352->GetXaxis()->SetLabelFont(42);
   S12_Y__352->GetXaxis()->SetTitleOffset(1);
   S12_Y__352->GetXaxis()->SetTitleFont(42);
   S12_Y__352->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__352->GetYaxis()->CenterTitle(true);
   S12_Y__352->GetYaxis()->SetLabelFont(42);
   S12_Y__352->GetYaxis()->SetTitleFont(42);
   S12_Y__352->GetZaxis()->SetLabelFont(42);
   S12_Y__352->GetZaxis()->SetTitleOffset(1);
   S12_Y__352->GetZaxis()->SetTitleFont(42);
   S12_Y__352->Draw("AE");
   
   TH1D *Y__353 = new TH1D("Y__353","",24,-60,60);
   Y__353->SetBinContent(4,0.07611987);
   Y__353->SetBinContent(5,0.1984339);
   Y__353->SetBinContent(6,0.3729399);
   Y__353->SetBinContent(7,0.6323486);
   Y__353->SetBinContent(8,0.9979216);
   Y__353->SetBinContent(9,1.481798);
   Y__353->SetBinContent(10,2.003917);
   Y__353->SetBinContent(11,2.441337);
   Y__353->SetBinContent(12,2.685013);
   Y__353->SetBinContent(13,2.685501);
   Y__353->SetBinContent(14,2.440158);
   Y__353->SetBinContent(15,1.997952);
   Y__353->SetBinContent(16,1.479604);
   Y__353->SetBinContent(17,1);
   Y__353->SetBinContent(18,0.6284374);
   Y__353->SetBinContent(19,0.3733456);
   Y__353->SetBinContent(20,0.1990715);
   Y__353->SetBinContent(21,0.07546295);
   Y__353->SetBinError(4,0.0004583705);
   Y__353->SetBinError(5,0.0007400747);
   Y__353->SetBinError(6,0.001014582);
   Y__353->SetBinError(7,0.001321131);
   Y__353->SetBinError(8,0.001659647);
   Y__353->SetBinError(9,0.002022377);
   Y__353->SetBinError(10,0.002351838);
   Y__353->SetBinError(11,0.002595861);
   Y__353->SetBinError(12,0.00272233);
   Y__353->SetBinError(13,0.002722578);
   Y__353->SetBinError(14,0.002595235);
   Y__353->SetBinError(15,0.002348336);
   Y__353->SetBinError(16,0.002020879);
   Y__353->SetBinError(17,0.001661375);
   Y__353->SetBinError(18,0.001317039);
   Y__353->SetBinError(19,0.001015134);
   Y__353->SetBinError(20,0.0007412627);
   Y__353->SetBinError(21,0.0004563883);
   Y__353->SetEntries(7886974);

   ci = TColor::GetColor("#ff0000");
   Y__353->SetLineColor(ci);
   Y__353->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__353->SetMarkerColor(ci);
   Y__353->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__353->GetXaxis()->CenterTitle(true);
   Y__353->GetXaxis()->SetLabelFont(42);
   Y__353->GetXaxis()->SetTitleSize(0.04);
   Y__353->GetXaxis()->SetTitleOffset(1.1);
   Y__353->GetXaxis()->SetTitleFont(42);
   Y__353->GetYaxis()->SetTitle("Decays");
   Y__353->GetYaxis()->CenterTitle(true);
   Y__353->GetYaxis()->SetNdivisions(4000510);
   Y__353->GetYaxis()->SetLabelFont(42);
   Y__353->GetYaxis()->SetTitleSize(0.04);
   Y__353->GetYaxis()->SetTitleOffset(1.1);
   Y__353->GetYaxis()->SetTitleFont(42);
   Y__353->GetZaxis()->SetLabelFont(42);
   Y__353->GetZaxis()->SetTitleOffset(1);
   Y__353->GetZaxis()->SetTitleFont(42);
   Y__353->Draw("AEsame");
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
   
   Double_t _fx3118[18] = {
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
   Double_t _fy3118[18] = {
   0.6934579,
   0.7832595,
   0.8256502,
   0.906642,
   0.9168616,
   0.9440065,
   0.9834114,
   0.9885935,
   0.9736899,
   0.9871626,
   0.9349906,
   0.9760728,
   0.9681993,
   1,
   0.9146178,
   0.8522447,
   0.8691377,
   0.5829122};
   Double_t _felx3118[18] = {
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
   Double_t _fely3118[18] = {
   0.11511,
   0.07601219,
   0.05697393,
   0.04587026,
   0.03672562,
   0.0305851,
   0.02684621,
   0.02438722,
   0.02307819,
   0.02323552,
   0.02372124,
   0.02678553,
   0.03099833,
   0.03831857,
   0.04621512,
   0.05785571,
   0.07996191,
   0.1058844};
   Double_t _fehx3118[18] = {
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
   Double_t _fehy3118[18] = {
   0.1360151,
   0.08377385,
   0.06104835,
   0.04825206,
   0.03822711,
   0.03159252,
   0.02758932,
   0.0249964,
   0.0236318,
   0.023789,
   0.02433087,
   0.0275309,
   0.0320071,
   0.03981589,
   0.04861171,
   0.06192369,
   0.08768126,
   0.1271218};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3118,_fy3118,_felx3118,_fehx3118,_fely3118,_fehy3118);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3118 = new TH1F("Graph_Graph3118","",100,-65,65);
   Graph_Graph3118->SetMinimum(0);
   Graph_Graph3118->SetMaximum(1.25);
   Graph_Graph3118->SetDirectory(0);
   Graph_Graph3118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3118->SetLineColor(ci);
   Graph_Graph3118->GetXaxis()->SetRange(1,100);
   Graph_Graph3118->GetXaxis()->CenterTitle(true);
   Graph_Graph3118->GetXaxis()->SetLabelFont(42);
   Graph_Graph3118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3118->GetXaxis()->SetTitleFont(42);
   Graph_Graph3118->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3118->GetYaxis()->CenterTitle(true);
   Graph_Graph3118->GetYaxis()->SetLabelFont(42);
   Graph_Graph3118->GetYaxis()->SetTitleFont(42);
   Graph_Graph3118->GetZaxis()->SetLabelFont(42);
   Graph_Graph3118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3118->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3118);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.849042,510,"S");
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
   entry=leg->AddEntry("S12_Y","Truth vertices","lpf");
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
