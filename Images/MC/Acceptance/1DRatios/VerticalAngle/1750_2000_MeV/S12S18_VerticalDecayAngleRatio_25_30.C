void S12S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06498058,125,1.234631);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__1365 = new TH1D("S12S18_ThetaY_25_30__1365","",630,-1575,1575);
   S12S18_ThetaY_25_30__1365->SetBinContent(310,0.1320755);
   S12S18_ThetaY_25_30__1365->SetBinContent(311,0.5220126);
   S12S18_ThetaY_25_30__1365->SetBinContent(312,0.6981132);
   S12S18_ThetaY_25_30__1365->SetBinContent(313,0.7610063);
   S12S18_ThetaY_25_30__1365->SetBinContent(314,0.836478);
   S12S18_ThetaY_25_30__1365->SetBinContent(315,1);
   S12S18_ThetaY_25_30__1365->SetBinContent(316,0.9308176);
   S12S18_ThetaY_25_30__1365->SetBinContent(317,0.1698113);
   S12S18_ThetaY_25_30__1365->SetBinContent(318,0.006289308);
   S12S18_ThetaY_25_30__1365->SetBinError(310,0.02882123);
   S12S18_ThetaY_25_30__1365->SetBinError(311,0.05729832);
   S12S18_ThetaY_25_30__1365->SetBinError(312,0.06626197);
   S12S18_ThetaY_25_30__1365->SetBinError(313,0.06918239);
   S12S18_ThetaY_25_30__1365->SetBinError(314,0.07253184);
   S12S18_ThetaY_25_30__1365->SetBinError(315,0.07930516);
   S12S18_ThetaY_25_30__1365->SetBinError(316,0.07651274);
   S12S18_ThetaY_25_30__1365->SetBinError(317,0.0326802);
   S12S18_ThetaY_25_30__1365->SetBinError(318,0.006289308);
   S12S18_ThetaY_25_30__1365->SetMinimum(0);
   S12S18_ThetaY_25_30__1365->SetMaximum(1.10467);
   S12S18_ThetaY_25_30__1365->SetEntries(804);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1365->SetLineColor(ci);
   S12S18_ThetaY_25_30__1365->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1365->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__1365->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__1365->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__1365->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1365->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1365->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1365->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__1365->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__1365->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1365->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1365->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1365->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1365->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1365->Draw("AE");
   
   TH1D *ThetaY_25_30__1366 = new TH1D("ThetaY_25_30__1366","",630,-1575,1575);
   ThetaY_25_30__1366->SetBinContent(309,0.0005567541);
   ThetaY_25_30__1366->SetBinContent(310,0.1479574);
   ThetaY_25_30__1366->SetBinContent(311,0.5326049);
   ThetaY_25_30__1366->SetBinContent(312,0.7496694);
   ThetaY_25_30__1366->SetBinContent(313,0.8816202);
   ThetaY_25_30__1366->SetBinContent(314,0.966386);
   ThetaY_25_30__1366->SetBinContent(315,1);
   ThetaY_25_30__1366->SetBinContent(316,1.004245);
   ThetaY_25_30__1366->SetBinContent(317,0.9695177);
   ThetaY_25_30__1366->SetBinContent(318,0.8903194);
   ThetaY_25_30__1366->SetBinContent(319,0.7472336);
   ThetaY_25_30__1366->SetBinContent(320,0.5333009);
   ThetaY_25_30__1366->SetBinContent(321,0.1503932);
   ThetaY_25_30__1366->SetBinContent(322,0.0002783771);
   ThetaY_25_30__1366->SetBinError(309,0.0001968423);
   ThetaY_25_30__1366->SetBinError(310,0.003208892);
   ThetaY_25_30__1366->SetBinError(311,0.006088206);
   ThetaY_25_30__1366->SetBinError(312,0.007223067);
   ThetaY_25_30__1366->SetBinError(313,0.007832988);
   ThetaY_25_30__1366->SetBinError(314,0.00820091);
   ThetaY_25_30__1366->SetBinError(315,0.008342318);
   ThetaY_25_30__1366->SetBinError(316,0.008360007);
   ThetaY_25_30__1366->SetBinError(317,0.008214187);
   ThetaY_25_30__1366->SetBinError(318,0.007871539);
   ThetaY_25_30__1366->SetBinError(319,0.007211323);
   ThetaY_25_30__1366->SetBinError(320,0.006092182);
   ThetaY_25_30__1366->SetBinError(321,0.003235198);
   ThetaY_25_30__1366->SetBinError(322,0.0001391885);
   ThetaY_25_30__1366->SetEntries(123201);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1366->SetLineColor(ci);
   ThetaY_25_30__1366->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1366->SetMarkerColor(ci);
   ThetaY_25_30__1366->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1366->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1366->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1366->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1366->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1366->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1366->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1366->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1366->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1366->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1366->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1366->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1366->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1366->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1366->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1366->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1366->Draw("AEsame");
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
   
   Double_t _fx3456[14] = {
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
   32.5};
   Double_t _fy3456[14] = {
   0,
   0.8926587,
   0.9801122,
   0.9312281,
   0.8631907,
   0.8655734,
   1,
   0.9268828,
   0.1751503,
   0.007064103,
   0,
   0,
   0,
   0};
   Double_t _felx3456[14] = {
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
   Double_t _fely3456[14] = {
   0,
   0.1941408,
   0.107938,
   0.0887045,
   0.07873367,
   0.07531579,
   0.07965612,
   0.07648986,
   0.03352895,
   0.00584384,
   0,
   0,
   0,
   0};
   Double_t _fehx3456[14] = {
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
   Double_t _fehy3456[14] = {
   23.38449,
   0.241893,
   0.1205499,
   0.09759431,
   0.0862718,
   0.08217872,
   0.08627487,
   0.08308427,
   0.04065897,
   0.01624619,
   0.01549682,
   0.02171409,
   0.07702267,
   52.81996};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3456,_fy3456,_felx3456,_fehx3456,_fely3456,_fehy3456);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3456 = new TH1F("Graph_Graph3456","",100,-100,100);
   Graph_Graph3456->SetMinimum(0);
   Graph_Graph3456->SetMaximum(1.5);
   Graph_Graph3456->SetDirectory(0);
   Graph_Graph3456->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3456->SetLineColor(ci);
   Graph_Graph3456->GetXaxis()->SetRange(1,100);
   Graph_Graph3456->GetXaxis()->CenterTitle(true);
   Graph_Graph3456->GetXaxis()->SetLabelFont(42);
   Graph_Graph3456->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3456->GetXaxis()->SetTitleFont(42);
   Graph_Graph3456->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3456->GetYaxis()->CenterTitle(true);
   Graph_Graph3456->GetYaxis()->SetLabelFont(42);
   Graph_Graph3456->GetYaxis()->SetTitleFont(42);
   Graph_Graph3456->GetZaxis()->SetLabelFont(42);
   Graph_Graph3456->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3456->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3456);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.10467,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1367 = new TH2D("ThetaY_vs_Y_25_30__1367","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8052,8);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8078,2126);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8104,7653);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8130,10772);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8156,12668);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8182,13886);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8208,14369);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8234,14430);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8260,13931);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8286,12793);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8312,10737);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8338,7663);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8364,2161);
   ThetaY_vs_Y_25_30__1367->SetBinContent(8390,4);
   ThetaY_vs_Y_25_30__1367->SetEntries(123201);
   ThetaY_vs_Y_25_30__1367->SetContour(20);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(1,721.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(2,1443);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(3,2164.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(4,2886);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(5,3607.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(6,4329);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(7,5050.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(8,5772);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(9,6493.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(10,7215);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(11,7936.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(12,8658);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(13,9379.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(14,10101);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(15,10822.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(16,11544);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(17,12265.5);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(18,12987);
   ThetaY_vs_Y_25_30__1367->SetContourLevel(19,13708.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1367->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1367->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1367->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1367->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1367->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1367->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1367->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1367->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1367->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1367->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1367->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1367->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1367->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1367->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1367->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1367->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
