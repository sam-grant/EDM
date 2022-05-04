void S12S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06972758,125,1.324824);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__1164 = new TH1D("S12S18_ThetaY_mI25_mI20__1164","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(313,0.1945392);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(314,0.7986348);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(315,0.9658703);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(316,0.883959);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(317,0.9590444);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(318,1);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(319,0.8703072);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(320,0.6416382);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(321,0.4368601);
   S12S18_ThetaY_mI25_mI20__1164->SetBinContent(322,0.09215017);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(313,0.02576735);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(314,0.05220839);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(315,0.05741503);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(316,0.05492654);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(317,0.05721179);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(318,0.05842062);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(319,0.05450075);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(320,0.04679628);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(321,0.03861334);
   S12S18_ThetaY_mI25_mI20__1164->SetBinError(322,0.01773431);
   S12S18_ThetaY_mI25_mI20__1164->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__1164->SetMaximum(1.185369);
   S12S18_ThetaY_mI25_mI20__1164->SetEntries(2005);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1164->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__1164->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1164->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__1164->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__1164->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__1164->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1164->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1164->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1164->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__1164->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__1164->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1164->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1164->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1164->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1164->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1164->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1165 = new TH1D("ThetaY_mI25_mI20__1165","",630,-1575,1575);
   ThetaY_mI25_mI20__1165->SetBinContent(308,0.001077889);
   ThetaY_mI25_mI20__1165->SetBinContent(309,0.144484);
   ThetaY_mI25_mI20__1165->SetBinContent(310,0.530509);
   ThetaY_mI25_mI20__1165->SetBinContent(311,0.7721905);
   ThetaY_mI25_mI20__1165->SetBinContent(312,0.9124567);
   ThetaY_mI25_mI20__1165->SetBinContent(313,1.008529);
   ThetaY_mI25_mI20__1165->SetBinContent(314,1.057222);
   ThetaY_mI25_mI20__1165->SetBinContent(315,1.077608);
   ThetaY_mI25_mI20__1165->SetBinContent(316,1.076905);
   ThetaY_mI25_mI20__1165->SetBinContent(317,1.045646);
   ThetaY_mI25_mI20__1165->SetBinContent(318,1);
   ThetaY_mI25_mI20__1165->SetBinContent(319,0.9213141);
   ThetaY_mI25_mI20__1165->SetBinContent(320,0.7652076);
   ThetaY_mI25_mI20__1165->SetBinContent(321,0.5307901);
   ThetaY_mI25_mI20__1165->SetBinContent(322,0.147624);
   ThetaY_mI25_mI20__1165->SetBinContent(323,0.0008435655);
   ThetaY_mI25_mI20__1165->SetBinError(308,0.0002247554);
   ThetaY_mI25_mI20__1165->SetBinError(309,0.002602154);
   ThetaY_mI25_mI20__1165->SetBinError(310,0.004986198);
   ThetaY_mI25_mI20__1165->SetBinError(311,0.006015689);
   ThetaY_mI25_mI20__1165->SetBinError(312,0.00653927);
   ThetaY_mI25_mI20__1165->SetBinError(313,0.006874916);
   ThetaY_mI25_mI20__1165->SetBinError(314,0.007038923);
   ThetaY_mI25_mI20__1165->SetBinError(315,0.007106464);
   ThetaY_mI25_mI20__1165->SetBinError(316,0.007104146);
   ThetaY_mI25_mI20__1165->SetBinError(317,0.007000282);
   ThetaY_mI25_mI20__1165->SetBinError(318,0.006845783);
   ThetaY_mI25_mI20__1165->SetBinError(319,0.006570932);
   ThetaY_mI25_mI20__1165->SetBinError(320,0.005988427);
   ThetaY_mI25_mI20__1165->SetBinError(321,0.004987519);
   ThetaY_mI25_mI20__1165->SetBinError(322,0.002630277);
   ThetaY_mI25_mI20__1165->SetBinError(323,0.0001988303);
   ThetaY_mI25_mI20__1165->SetEntries(234556);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1165->SetLineColor(ci);
   ThetaY_mI25_mI20__1165->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1165->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1165->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1165->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1165->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1165->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1165->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1165->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1165->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1165->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1165->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1165->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1165->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1165->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1165->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1165->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1165->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1165->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1165->Draw("AEsame");
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
   
   Double_t _fx3389[16] = {
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
   37.5};
   Double_t _fy3389[16] = {
   0,
   0,
   0,
   0,
   0,
   0.192894,
   0.7554089,
   0.8963095,
   0.8208329,
   0.9171786,
   1,
   0.9446368,
   0.8385152,
   0.8230373,
   0.6242223,
   0};
   Double_t _felx3389[16] = {
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
   Double_t _fely3389[16] = {
   0,
   0,
   0,
   0,
   0,
   0.0255074,
   0.04960154,
   0.05357414,
   0.05125651,
   0.05502379,
   0.05878545,
   0.05949736,
   0.06144951,
   0.07305803,
   0.1198757,
   0};
   Double_t _fehx3389[16] = {
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
   Double_t _fehy3389[16] = {
   6.068963,
   0.04350119,
   0.01184497,
   0.008137502,
   0.006886516,
   0.02912732,
   0.0529729,
   0.05687873,
   0.05456408,
   0.05843079,
   0.06235005,
   0.06337146,
   0.06613076,
   0.07985709,
   0.1454959,
   7.842804};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3389,_fy3389,_felx3389,_fehx3389,_fely3389,_fehy3389);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3389 = new TH1F("Graph_Graph3389","",100,-100,100);
   Graph_Graph3389->SetMinimum(0);
   Graph_Graph3389->SetMaximum(1.5);
   Graph_Graph3389->SetDirectory(0);
   Graph_Graph3389->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3389->SetLineColor(ci);
   Graph_Graph3389->GetXaxis()->SetRange(1,100);
   Graph_Graph3389->GetXaxis()->CenterTitle(true);
   Graph_Graph3389->GetXaxis()->SetLabelFont(42);
   Graph_Graph3389->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3389->GetXaxis()->SetTitleFont(42);
   Graph_Graph3389->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3389->GetYaxis()->CenterTitle(true);
   Graph_Graph3389->GetYaxis()->SetLabelFont(42);
   Graph_Graph3389->GetYaxis()->SetTitleFont(42);
   Graph_Graph3389->GetZaxis()->SetLabelFont(42);
   Graph_Graph3389->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3389->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3389);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.185369,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1166 = new TH2D("ThetaY_vs_Y_mI25_mI20__1166","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8016,23);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8042,3083);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8068,11320);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8094,16477);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8120,19470);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8146,21520);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8172,22559);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8198,22994);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8224,22979);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8250,22312);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8276,21338);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8302,19659);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8328,16328);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8354,11326);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8380,3150);
   ThetaY_vs_Y_mI25_mI20__1166->SetBinContent(8406,18);
   ThetaY_vs_Y_mI25_mI20__1166->SetEntries(234556);
   ThetaY_vs_Y_mI25_mI20__1166->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(1,1149.7);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(2,2299.4);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(3,3449.1);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(4,4598.8);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(5,5748.5);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(6,6898.2);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(7,8047.9);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(8,9197.6);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(9,10347.3);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(10,11497);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(11,12646.7);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(12,13796.4);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(13,14946.1);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(14,16095.8);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(15,17245.5);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(16,18395.2);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(17,19544.9);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(18,20694.6);
   ThetaY_vs_Y_mI25_mI20__1166->SetContourLevel(19,21844.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1166->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1166->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1166->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1166->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1166->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1166->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1166->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1166->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1166->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1166->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1166->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1166->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1166->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1166->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1166->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1166->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
