void S12S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06527858,125,1.240293);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__1347 = new TH1D("S12S18_ThetaY_mI5_0__1347","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(311,0.05429864);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(312,0.4223228);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(313,0.8295626);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(314,0.8295626);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(315,0.9200603);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(316,1);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(317,0.9049774);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(318,0.8431373);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(319,0.5942685);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(320,0.1508296);
   S12S18_ThetaY_mI5_0__1347->SetBinContent(321,0.01206637);
   S12S18_ThetaY_mI5_0__1347->SetBinError(311,0.009049774);
   S12S18_ThetaY_mI5_0__1347->SetBinError(312,0.02523861);
   S12S18_ThetaY_mI5_0__1347->SetBinError(313,0.03537267);
   S12S18_ThetaY_mI5_0__1347->SetBinError(314,0.03537267);
   S12S18_ThetaY_mI5_0__1347->SetBinError(315,0.03725215);
   S12S18_ThetaY_mI5_0__1347->SetBinError(316,0.03883678);
   S12S18_ThetaY_mI5_0__1347->SetBinError(317,0.03694555);
   S12S18_ThetaY_mI5_0__1347->SetBinError(318,0.03566091);
   S12S18_ThetaY_mI5_0__1347->SetBinError(319,0.02993881);
   S12S18_ThetaY_mI5_0__1347->SetBinError(320,0.01508296);
   S12S18_ThetaY_mI5_0__1347->SetBinError(321,0.004266104);
   S12S18_ThetaY_mI5_0__1347->SetMinimum(0);
   S12S18_ThetaY_mI5_0__1347->SetMaximum(1.109736);
   S12S18_ThetaY_mI5_0__1347->SetEntries(4350);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1347->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__1347->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1347->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__1347->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__1347->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__1347->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1347->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1347->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1347->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__1347->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__1347->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1347->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1347->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1347->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1347->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1347->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1348 = new TH1D("ThetaY_mI5_0__1348","",630,-1575,1575);
   ThetaY_mI5_0__1348->SetBinContent(309,0.0006948236);
   ThetaY_mI5_0__1348->SetBinContent(310,0.1474846);
   ThetaY_mI5_0__1348->SetBinContent(311,0.540308);
   ThetaY_mI5_0__1348->SetBinContent(312,0.7636276);
   ThetaY_mI5_0__1348->SetBinContent(313,0.8941552);
   ThetaY_mI5_0__1348->SetBinContent(314,0.969527);
   ThetaY_mI5_0__1348->SetBinContent(315,1.008851);
   ThetaY_mI5_0__1348->SetBinContent(316,1);
   ThetaY_mI5_0__1348->SetBinContent(317,0.9721243);
   ThetaY_mI5_0__1348->SetBinContent(318,0.8893411);
   ThetaY_mI5_0__1348->SetBinContent(319,0.767019);
   ThetaY_mI5_0__1348->SetBinContent(320,0.5318544);
   ThetaY_mI5_0__1348->SetBinContent(321,0.1496518);
   ThetaY_mI5_0__1348->SetBinContent(322,0.0006121065);
   ThetaY_mI5_0__1348->SetBinError(309,0.0001072136);
   ThetaY_mI5_0__1348->SetBinError(310,0.001562018);
   ThetaY_mI5_0__1348->SetBinError(311,0.002989739);
   ThetaY_mI5_0__1348->SetBinError(312,0.003554295);
   ThetaY_mI5_0__1348->SetBinError(313,0.003846087);
   ThetaY_mI5_0__1348->SetBinError(314,0.004004908);
   ThetaY_mI5_0__1348->SetBinError(315,0.00408532);
   ThetaY_mI5_0__1348->SetBinError(316,0.00406736);
   ThetaY_mI5_0__1348->SetBinError(317,0.004010269);
   ThetaY_mI5_0__1348->SetBinError(318,0.003835719);
   ThetaY_mI5_0__1348->SetBinError(319,0.003562179);
   ThetaY_mI5_0__1348->SetBinError(320,0.002966258);
   ThetaY_mI5_0__1348->SetBinError(321,0.001573452);
   ThetaY_mI5_0__1348->SetBinError(322,0.0001006297);
   ThetaY_mI5_0__1348->SetEntries(521975);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1348->SetLineColor(ci);
   ThetaY_mI5_0__1348->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1348->SetMarkerColor(ci);
   ThetaY_mI5_0__1348->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1348->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1348->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1348->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1348->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1348->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1348->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1348->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1348->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1348->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1348->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1348->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1348->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1348->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1348->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1348->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1348->Draw("AEsame");
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
   
   Double_t _fx3450[14] = {
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
   Double_t _fy3450[14] = {
   0,
   0,
   0.1004957,
   0.553048,
   0.9277613,
   0.8556364,
   0.9119886,
   1,
   0.9309276,
   0.9480471,
   0.7747767,
   0.2835919,
   0.08062962,
   0};
   Double_t _felx3450[14] = {
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
   Double_t _fely3450[14] = {
   0,
   0,
   0.01668006,
   0.03313089,
   0.03974821,
   0.03664382,
   0.0370991,
   0.03903903,
   0.03818754,
   0.04029365,
   0.03918115,
   0.02835527,
   0.02791272,
   0};
   Double_t _fehx3450[14] = {
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
   Double_t _fehy3450[14] = {
   4.0853,
   0.01882971,
   0.01970887,
   0.03517844,
   0.04148952,
   0.03824844,
   0.0386405,
   0.04059434,
   0.03978779,
   0.04204449,
   0.0412154,
   0.03134371,
   0.03978816,
   4.651231};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3450,_fy3450,_felx3450,_fehx3450,_fely3450,_fehy3450);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3450 = new TH1F("Graph_Graph3450","",100,-100,100);
   Graph_Graph3450->SetMinimum(0);
   Graph_Graph3450->SetMaximum(1.5);
   Graph_Graph3450->SetDirectory(0);
   Graph_Graph3450->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3450->SetLineColor(ci);
   Graph_Graph3450->GetXaxis()->SetRange(1,100);
   Graph_Graph3450->GetXaxis()->CenterTitle(true);
   Graph_Graph3450->GetXaxis()->SetLabelFont(42);
   Graph_Graph3450->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3450->GetXaxis()->SetTitleFont(42);
   Graph_Graph3450->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3450->GetYaxis()->CenterTitle(true);
   Graph_Graph3450->GetYaxis()->SetLabelFont(42);
   Graph_Graph3450->GetYaxis()->SetTitleFont(42);
   Graph_Graph3450->GetZaxis()->SetLabelFont(42);
   Graph_Graph3450->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3450->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3450);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.109736,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1349 = new TH2D("ThetaY_vs_Y_mI5_0__1349","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8046,42);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8072,8915);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8098,32660);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8124,46159);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8150,54049);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8176,58605);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8202,60982);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8228,60447);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8254,58762);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8280,53758);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8306,46364);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8332,32149);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8358,9046);
   ThetaY_vs_Y_mI5_0__1349->SetBinContent(8384,37);
   ThetaY_vs_Y_mI5_0__1349->SetEntries(521975);
   ThetaY_vs_Y_mI5_0__1349->SetContour(20);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(1,3049.1);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(2,6098.2);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(3,9147.3);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(4,12196.4);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(5,15245.5);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(6,18294.6);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(7,21343.7);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(8,24392.8);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(9,27441.9);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(10,30491);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(11,33540.1);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(12,36589.2);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(13,39638.3);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(14,42687.4);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(15,45736.5);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(16,48785.6);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(17,51834.7);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(18,54883.8);
   ThetaY_vs_Y_mI5_0__1349->SetContourLevel(19,57932.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1349->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1349->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1349->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1349->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1349->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1349->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1349->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1349->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1349->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1349->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1349->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1349->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1349->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1349->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1349->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1349->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-5_0","Reco vertices","lpf");
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
