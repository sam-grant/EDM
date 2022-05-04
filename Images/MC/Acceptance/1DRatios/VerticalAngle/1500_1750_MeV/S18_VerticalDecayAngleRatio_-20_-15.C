void S18_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.06677163,125,1.268661);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__1110 = new TH1D("S18_ThetaY_mI20_mI15__1110","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(312,0.03652968);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(313,0.4977169);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(314,0.8858447);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(315,1.013699);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(316,0.9178082);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(317,1);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(318,0.8995434);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(319,0.8584475);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(320,0.6849315);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(321,0.3744292);
   S18_ThetaY_mI20_mI15__1110->SetBinContent(322,0.06392694);
   S18_ThetaY_mI20_mI15__1110->SetBinError(312,0.01291519);
   S18_ThetaY_mI20_mI15__1110->SetBinError(313,0.04767263);
   S18_ThetaY_mI20_mI15__1110->SetBinError(314,0.06359995);
   S18_ThetaY_mI20_mI15__1110->SetBinError(315,0.068035);
   S18_ThetaY_mI20_mI15__1110->SetBinError(316,0.0647372);
   S18_ThetaY_mI20_mI15__1110->SetBinError(317,0.06757374);
   S18_ThetaY_mI20_mI15__1110->SetBinError(318,0.06408981);
   S18_ThetaY_mI20_mI15__1110->SetBinError(319,0.06260872);
   S18_ThetaY_mI20_mI15__1110->SetBinError(320,0.05592442);
   S18_ThetaY_mI20_mI15__1110->SetBinError(321,0.04134879);
   S18_ThetaY_mI20_mI15__1110->SetBinError(322,0.01708519);
   S18_ThetaY_mI20_mI15__1110->SetMinimum(0);
   S18_ThetaY_mI20_mI15__1110->SetMaximum(1.135118);
   S18_ThetaY_mI20_mI15__1110->SetEntries(1584);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1110->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__1110->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1110->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__1110->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__1110->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__1110->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1110->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1110->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1110->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__1110->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__1110->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1110->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1110->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1110->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1110->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1110->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1111 = new TH1D("ThetaY_mI20_mI15__1111","",630,-1575,1575);
   ThetaY_mI20_mI15__1111->SetBinContent(308,0.00090269);
   ThetaY_mI20_mI15__1111->SetBinContent(309,0.1375399);
   ThetaY_mI20_mI15__1111->SetBinContent(310,0.5041524);
   ThetaY_mI20_mI15__1111->SetBinContent(311,0.7307577);
   ThetaY_mI20_mI15__1111->SetBinContent(312,0.8763315);
   ThetaY_mI20_mI15__1111->SetBinContent(313,0.9523981);
   ThetaY_mI20_mI15__1111->SetBinContent(314,0.9967804);
   ThetaY_mI20_mI15__1111->SetBinContent(315,1.016579);
   ThetaY_mI20_mI15__1111->SetBinContent(316,1.031925);
   ThetaY_mI20_mI15__1111->SetBinContent(317,1);
   ThetaY_mI20_mI15__1111->SetBinContent(318,0.9582957);
   ThetaY_mI20_mI15__1111->SetBinContent(319,0.8720587);
   ThetaY_mI20_mI15__1111->SetBinContent(320,0.7338569);
   ThetaY_mI20_mI15__1111->SetBinContent(321,0.5047843);
   ThetaY_mI20_mI15__1111->SetBinContent(322,0.1405488);
   ThetaY_mI20_mI15__1111->SetBinContent(323,0.0007823313);
   ThetaY_mI20_mI15__1111->SetBinError(308,0.0001648079);
   ThetaY_mI20_mI15__1111->SetBinError(309,0.002034337);
   ThetaY_mI20_mI15__1111->SetBinError(310,0.00389484);
   ThetaY_mI20_mI15__1111->SetBinError(311,0.004689164);
   ThetaY_mI20_mI15__1111->SetBinError(312,0.005135029);
   ThetaY_mI20_mI15__1111->SetBinError(313,0.005353255);
   ThetaY_mI20_mI15__1111->SetBinError(314,0.005476567);
   ThetaY_mI20_mI15__1111->SetBinError(315,0.00553069);
   ThetaY_mI20_mI15__1111->SetBinError(316,0.005572278);
   ThetaY_mI20_mI15__1111->SetBinError(317,0.005485405);
   ThetaY_mI20_mI15__1111->SetBinError(318,0.005369804);
   ThetaY_mI20_mI15__1111->SetBinError(319,0.005122495);
   ThetaY_mI20_mI15__1111->SetBinError(320,0.004699097);
   ThetaY_mI20_mI15__1111->SetBinError(321,0.00389728);
   ThetaY_mI20_mI15__1111->SetBinError(322,0.00205647);
   ThetaY_mI20_mI15__1111->SetBinError(323,0.0001534278);
   ThetaY_mI20_mI15__1111->SetEntries(347551);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1111->SetLineColor(ci);
   ThetaY_mI20_mI15__1111->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1111->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1111->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1111->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1111->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1111->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1111->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1111->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1111->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1111->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1111->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1111->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1111->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1111->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1111->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1111->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1111->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1111->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1111->Draw("AEsame");
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
   
   Double_t _fx3371[16] = {
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
   Double_t _fy3371[16] = {
   0,
   0,
   0,
   0,
   0.04168478,
   0.5225933,
   0.888706,
   0.9971662,
   0.8894136,
   1,
   0.9386908,
   0.9843918,
   0.9333312,
   0.7417609,
   0.4548379,
   0};
   Double_t _felx3371[16] = {
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
   Double_t _fely3371[16] = {
   0,
   0,
   0,
   0,
   0.01442671,
   0.05006369,
   0.06393583,
   0.0670934,
   0.06286473,
   0.06774326,
   0.0670275,
   0.07196135,
   0.07635337,
   0.08194361,
   0.1202616,
   0};
   Double_t _fehx3371[16] = {
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
   Double_t _fehy3371[16] = {
   9.604396,
   0.06113271,
   0.01667542,
   0.01150424,
   0.02056076,
   0.0551076,
   0.06871181,
   0.0717692,
   0.06747522,
   0.07249775,
   0.07199572,
   0.07742718,
   0.082874,
   0.09154323,
   0.1572477,
   11.13501};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3371,_fy3371,_felx3371,_fehx3371,_fely3371,_fehy3371);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3371 = new TH1F("Graph_Graph3371","",100,-100,100);
   Graph_Graph3371->SetMinimum(0);
   Graph_Graph3371->SetMaximum(1.5);
   Graph_Graph3371->SetDirectory(0);
   Graph_Graph3371->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3371->SetLineColor(ci);
   Graph_Graph3371->GetXaxis()->SetRange(1,100);
   Graph_Graph3371->GetXaxis()->CenterTitle(true);
   Graph_Graph3371->GetXaxis()->SetLabelFont(42);
   Graph_Graph3371->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3371->GetXaxis()->SetTitleFont(42);
   Graph_Graph3371->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3371->GetYaxis()->CenterTitle(true);
   Graph_Graph3371->GetYaxis()->SetLabelFont(42);
   Graph_Graph3371->GetYaxis()->SetTitleFont(42);
   Graph_Graph3371->GetZaxis()->SetLabelFont(42);
   Graph_Graph3371->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3371->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3371);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.135118,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1112 = new TH2D("ThetaY_vs_Y_mI20_mI15__1112","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8017,30);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8043,4571);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8069,16755);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8095,24286);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8121,29124);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8147,31652);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8173,33127);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8199,33785);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8225,34295);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8251,33234);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8277,31848);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8303,28982);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8329,24389);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8355,16776);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8381,4671);
   ThetaY_vs_Y_mI20_mI15__1112->SetBinContent(8407,26);
   ThetaY_vs_Y_mI20_mI15__1112->SetEntries(347551);
   ThetaY_vs_Y_mI20_mI15__1112->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(1,1714.75);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(2,3429.5);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(3,5144.25);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(4,6859);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(5,8573.75);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(6,10288.5);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(7,12003.25);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(8,13718);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(9,15432.75);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(10,17147.5);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(11,18862.25);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(12,20577);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(13,22291.75);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(14,24006.5);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(15,25721.25);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(16,27436);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(17,29150.75);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(18,30865.5);
   ThetaY_vs_Y_mI20_mI15__1112->SetContourLevel(19,32580.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1112->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1112->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1112->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1112->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1112->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1112->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1112->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1112->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1112->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1112->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1112->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1112->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1112->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1112->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1112->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1112->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
