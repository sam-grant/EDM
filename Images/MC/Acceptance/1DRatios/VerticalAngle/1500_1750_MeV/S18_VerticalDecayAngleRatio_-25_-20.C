void S18_VerticalDecayAngleRatio_-25_-20()
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
   
   TH1D *S18_ThetaY_mI25_mI20__1107 = new TH1D("S18_ThetaY_mI25_mI20__1107","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(313,0.1666667);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(314,0.8466667);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(315,0.8466667);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(316,0.9666667);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(317,0.86);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(318,1);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(319,0.8266667);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(320,0.6666667);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(321,0.4533333);
   S18_ThetaY_mI25_mI20__1107->SetBinContent(322,0.08);
   S18_ThetaY_mI25_mI20__1107->SetBinError(313,0.03333333);
   S18_ThetaY_mI25_mI20__1107->SetBinError(314,0.07512952);
   S18_ThetaY_mI25_mI20__1107->SetBinError(315,0.07512952);
   S18_ThetaY_mI25_mI20__1107->SetBinError(316,0.0802773);
   S18_ThetaY_mI25_mI20__1107->SetBinError(317,0.07571878);
   S18_ThetaY_mI25_mI20__1107->SetBinError(318,0.08164966);
   S18_ThetaY_mI25_mI20__1107->SetBinError(319,0.07423686);
   S18_ThetaY_mI25_mI20__1107->SetBinError(320,0.06666667);
   S18_ThetaY_mI25_mI20__1107->SetBinError(321,0.05497474);
   S18_ThetaY_mI25_mI20__1107->SetBinError(322,0.02309401);
   S18_ThetaY_mI25_mI20__1107->SetMinimum(0);
   S18_ThetaY_mI25_mI20__1107->SetMaximum(1.185369);
   S18_ThetaY_mI25_mI20__1107->SetEntries(1007);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1107->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__1107->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1107->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__1107->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__1107->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__1107->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1107->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1107->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1107->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__1107->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__1107->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1107->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1107->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1107->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1107->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1107->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1108 = new TH1D("ThetaY_mI25_mI20__1108","",630,-1575,1575);
   ThetaY_mI25_mI20__1108->SetBinContent(308,0.001077889);
   ThetaY_mI25_mI20__1108->SetBinContent(309,0.144484);
   ThetaY_mI25_mI20__1108->SetBinContent(310,0.530509);
   ThetaY_mI25_mI20__1108->SetBinContent(311,0.7721905);
   ThetaY_mI25_mI20__1108->SetBinContent(312,0.9124567);
   ThetaY_mI25_mI20__1108->SetBinContent(313,1.008529);
   ThetaY_mI25_mI20__1108->SetBinContent(314,1.057222);
   ThetaY_mI25_mI20__1108->SetBinContent(315,1.077608);
   ThetaY_mI25_mI20__1108->SetBinContent(316,1.076905);
   ThetaY_mI25_mI20__1108->SetBinContent(317,1.045646);
   ThetaY_mI25_mI20__1108->SetBinContent(318,1);
   ThetaY_mI25_mI20__1108->SetBinContent(319,0.9213141);
   ThetaY_mI25_mI20__1108->SetBinContent(320,0.7652076);
   ThetaY_mI25_mI20__1108->SetBinContent(321,0.5307901);
   ThetaY_mI25_mI20__1108->SetBinContent(322,0.147624);
   ThetaY_mI25_mI20__1108->SetBinContent(323,0.0008435655);
   ThetaY_mI25_mI20__1108->SetBinError(308,0.0002247554);
   ThetaY_mI25_mI20__1108->SetBinError(309,0.002602154);
   ThetaY_mI25_mI20__1108->SetBinError(310,0.004986198);
   ThetaY_mI25_mI20__1108->SetBinError(311,0.006015689);
   ThetaY_mI25_mI20__1108->SetBinError(312,0.00653927);
   ThetaY_mI25_mI20__1108->SetBinError(313,0.006874916);
   ThetaY_mI25_mI20__1108->SetBinError(314,0.007038923);
   ThetaY_mI25_mI20__1108->SetBinError(315,0.007106464);
   ThetaY_mI25_mI20__1108->SetBinError(316,0.007104146);
   ThetaY_mI25_mI20__1108->SetBinError(317,0.007000282);
   ThetaY_mI25_mI20__1108->SetBinError(318,0.006845783);
   ThetaY_mI25_mI20__1108->SetBinError(319,0.006570932);
   ThetaY_mI25_mI20__1108->SetBinError(320,0.005988427);
   ThetaY_mI25_mI20__1108->SetBinError(321,0.004987519);
   ThetaY_mI25_mI20__1108->SetBinError(322,0.002630277);
   ThetaY_mI25_mI20__1108->SetBinError(323,0.0001988303);
   ThetaY_mI25_mI20__1108->SetEntries(234556);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1108->SetLineColor(ci);
   ThetaY_mI25_mI20__1108->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1108->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1108->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1108->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1108->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1108->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1108->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1108->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1108->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1108->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1108->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1108->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1108->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1108->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1108->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1108->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1108->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1108->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1108->Draw("AEsame");
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
   
   Double_t _fx3370[16] = {
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
   Double_t _fy3370[16] = {
   0,
   0,
   0,
   0,
   0,
   0.1652571,
   0.8008411,
   0.7856908,
   0.8976341,
   0.8224579,
   1,
   0.8972691,
   0.8712233,
   0.8540726,
   0.5419175,
   0};
   Double_t _felx3370[16] = {
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
   Double_t _fely3370[16] = {
   0,
   0,
   0,
   0,
   0,
   0.03284724,
   0.07116746,
   0.06981745,
   0.07469141,
   0.07252662,
   0.08184289,
   0.08071977,
   0.08723979,
   0.1036215,
   0.1545041,
   0};
   Double_t _fehx3370[16] = {
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
   Double_t _fehy3370[16] = {
   11.85471,
   0.08497232,
   0.02313717,
   0.01589525,
   0.01345166,
   0.04013082,
   0.07779484,
   0.07631869,
   0.08118446,
   0.07922623,
   0.08883602,
   0.08833445,
   0.09645165,
   0.117037,
   0.2064616,
   15.31961};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3370,_fy3370,_felx3370,_fehx3370,_fely3370,_fehy3370);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3370 = new TH1F("Graph_Graph3370","",100,-100,100);
   Graph_Graph3370->SetMinimum(0);
   Graph_Graph3370->SetMaximum(1.5);
   Graph_Graph3370->SetDirectory(0);
   Graph_Graph3370->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3370->SetLineColor(ci);
   Graph_Graph3370->GetXaxis()->SetRange(1,100);
   Graph_Graph3370->GetXaxis()->CenterTitle(true);
   Graph_Graph3370->GetXaxis()->SetLabelFont(42);
   Graph_Graph3370->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3370->GetXaxis()->SetTitleFont(42);
   Graph_Graph3370->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3370->GetYaxis()->CenterTitle(true);
   Graph_Graph3370->GetYaxis()->SetLabelFont(42);
   Graph_Graph3370->GetYaxis()->SetTitleFont(42);
   Graph_Graph3370->GetZaxis()->SetLabelFont(42);
   Graph_Graph3370->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3370->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3370);
   
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1109 = new TH2D("ThetaY_vs_Y_mI25_mI20__1109","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8016,23);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8042,3083);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8068,11320);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8094,16477);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8120,19470);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8146,21520);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8172,22559);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8198,22994);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8224,22979);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8250,22312);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8276,21338);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8302,19659);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8328,16328);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8354,11326);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8380,3150);
   ThetaY_vs_Y_mI25_mI20__1109->SetBinContent(8406,18);
   ThetaY_vs_Y_mI25_mI20__1109->SetEntries(234556);
   ThetaY_vs_Y_mI25_mI20__1109->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(1,1149.7);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(2,2299.4);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(3,3449.1);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(4,4598.8);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(5,5748.5);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(6,6898.2);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(7,8047.9);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(8,9197.6);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(9,10347.3);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(10,11497);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(11,12646.7);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(12,13796.4);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(13,14946.1);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(14,16095.8);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(15,17245.5);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(16,18395.2);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(17,19544.9);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(18,20694.6);
   ThetaY_vs_Y_mI25_mI20__1109->SetContourLevel(19,21844.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1109->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1109->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1109->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1109->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1109->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1109->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1109->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1109->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1109->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1109->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1109->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1109->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1109->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1109->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1109->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1109->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
