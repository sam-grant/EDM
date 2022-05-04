void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08496573,125,1.614349);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__1338 = new TH1D("S12S18_ThetaY_mI20_mI15__1338","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(312,0.01045296);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(313,0.3519164);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(314,1.146341);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(315,1.233449);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(316,1.299652);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(317,1.090592);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(318,0.9686411);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(319,1);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(320,0.6062718);
   S12S18_ThetaY_mI20_mI15__1338->SetBinContent(321,0.1533101);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(312,0.00603502);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(313,0.03501699);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(314,0.06319985);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(315,0.0655571);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(316,0.06729341);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(317,0.06164392);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(318,0.05809523);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(319,0.05902813);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(320,0.04596134);
   S12S18_ThetaY_mI20_mI15__1338->SetBinError(321,0.02311237);
   S12S18_ThetaY_mI20_mI15__1338->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__1338->SetMaximum(1.444417);
   S12S18_ThetaY_mI20_mI15__1338->SetEntries(2256);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1338->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__1338->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1338->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__1338->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__1338->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__1338->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1338->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1338->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1338->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__1338->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__1338->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1338->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1338->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1338->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1338->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1338->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1339 = new TH1D("ThetaY_mI20_mI15__1339","",630,-1575,1575);
   ThetaY_mI20_mI15__1339->SetBinContent(309,0.0006211662);
   ThetaY_mI20_mI15__1339->SetBinContent(310,0.1940368);
   ThetaY_mI20_mI15__1339->SetBinContent(311,0.6959779);
   ThetaY_mI20_mI15__1339->SetBinContent(312,0.9780651);
   ThetaY_mI20_mI15__1339->SetBinContent(313,1.147216);
   ThetaY_mI20_mI15__1339->SetBinContent(314,1.255416);
   ThetaY_mI20_mI15__1339->SetBinContent(315,1.306856);
   ThetaY_mI20_mI15__1339->SetBinContent(316,1.313107);
   ThetaY_mI20_mI15__1339->SetBinContent(317,1.260735);
   ThetaY_mI20_mI15__1339->SetBinContent(318,1.153234);
   ThetaY_mI20_mI15__1339->SetBinContent(319,1);
   ThetaY_mI20_mI15__1339->SetBinContent(320,0.6919792);
   ThetaY_mI20_mI15__1339->SetBinContent(321,0.1919792);
   ThetaY_mI20_mI15__1339->SetBinContent(322,0.0007376349);
   ThetaY_mI20_mI15__1339->SetBinError(309,0.0001552916);
   ThetaY_mI20_mI15__1339->SetBinError(310,0.002744644);
   ThetaY_mI20_mI15__1339->SetBinError(311,0.005198065);
   ThetaY_mI20_mI15__1339->SetBinError(312,0.006162087);
   ThetaY_mI20_mI15__1339->SetBinError(313,0.006673699);
   ThetaY_mI20_mI15__1339->SetBinError(314,0.006981323);
   ThetaY_mI20_mI15__1339->SetBinError(315,0.007122916);
   ThetaY_mI20_mI15__1339->SetBinError(316,0.00713993);
   ThetaY_mI20_mI15__1339->SetBinError(317,0.006996096);
   ThetaY_mI20_mI15__1339->SetBinError(318,0.006691179);
   ThetaY_mI20_mI15__1339->SetBinError(319,0.006230802);
   ThetaY_mI20_mI15__1339->SetBinError(320,0.00518311);
   ThetaY_mI20_mI15__1339->SetBinError(321,0.002730053);
   ThetaY_mI20_mI15__1339->SetBinError(322,0.0001692251);
   ThetaY_mI20_mI15__1339->SetEntries(288231);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1339->SetLineColor(ci);
   ThetaY_mI20_mI15__1339->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1339->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1339->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1339->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1339->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1339->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1339->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1339->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1339->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1339->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1339->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1339->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1339->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1339->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1339->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1339->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1339->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1339->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1339->Draw("AEsame");
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
   
   Double_t _fx3447[14] = {
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
   Double_t _fy3447[14] = {
   0,
   0,
   0,
   0.01068739,
   0.3067568,
   0.913117,
   0.9438296,
   0.9897533,
   0.8650452,
   0.8399346,
   1,
   0.8761416,
   0.7985767,
   0};
   Double_t _felx3447[14] = {
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
   Double_t _fely3447[14] = {
   0,
   0,
   0,
   0.005816704,
   0.03052437,
   0.05057074,
   0.05040252,
   0.05150546,
   0.04910334,
   0.05057985,
   0.05932038,
   0.06667755,
   0.1204514,
   0};
   Double_t _fehx3447[14] = {
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
   Double_t _fehy3447[14] = {
   10.94446,
   0.03306533,
   0.009217302,
   0.01039715,
   0.03372525,
   0.05345382,
   0.05317036,
   0.05425972,
   0.05197463,
   0.05372326,
   0.06295063,
   0.07195995,
   0.1401793,
   9.131583};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3447,_fy3447,_felx3447,_fehx3447,_fely3447,_fehy3447);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3447 = new TH1F("Graph_Graph3447","",100,-100,100);
   Graph_Graph3447->SetMinimum(0);
   Graph_Graph3447->SetMaximum(1.5);
   Graph_Graph3447->SetDirectory(0);
   Graph_Graph3447->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3447->SetLineColor(ci);
   Graph_Graph3447->GetXaxis()->SetRange(1,100);
   Graph_Graph3447->GetXaxis()->CenterTitle(true);
   Graph_Graph3447->GetXaxis()->SetLabelFont(42);
   Graph_Graph3447->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3447->GetXaxis()->SetTitleFont(42);
   Graph_Graph3447->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3447->GetYaxis()->CenterTitle(true);
   Graph_Graph3447->GetYaxis()->SetLabelFont(42);
   Graph_Graph3447->GetYaxis()->SetTitleFont(42);
   Graph_Graph3447->GetZaxis()->SetLabelFont(42);
   Graph_Graph3447->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3447->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3447);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.444417,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1340 = new TH2D("ThetaY_vs_Y_mI20_mI15__1340","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8043,16);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8069,4998);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8095,17927);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8121,25193);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8147,29550);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8173,32337);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8199,33662);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8225,33823);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8251,32474);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8277,29705);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8303,25758);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8329,17824);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8355,4945);
   ThetaY_vs_Y_mI20_mI15__1340->SetBinContent(8381,19);
   ThetaY_vs_Y_mI20_mI15__1340->SetEntries(288231);
   ThetaY_vs_Y_mI20_mI15__1340->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(1,1691.15);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(2,3382.3);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(3,5073.45);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(4,6764.6);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(5,8455.75);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(6,10146.9);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(7,11838.05);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(8,13529.2);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(9,15220.35);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(10,16911.5);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(11,18602.65);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(12,20293.8);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(13,21984.95);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(14,23676.1);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(15,25367.25);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(16,27058.4);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(17,28749.55);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(18,30440.7);
   ThetaY_vs_Y_mI20_mI15__1340->SetContourLevel(19,32131.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1340->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1340->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1340->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1340->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1340->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1340->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1340->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1340->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1340->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1340->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1340->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1340->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1340->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1340->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1340->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1340->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-20_-15","Reco vertices","lpf");
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
