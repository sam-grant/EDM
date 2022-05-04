void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1306141,125,2.481669);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__909 = new TH1D("S12_ThetaY_25_30__909","",630,-1575,1575);
   S12_ThetaY_25_30__909->SetBinContent(308,0.2372881);
   S12_ThetaY_25_30__909->SetBinContent(309,1);
   S12_ThetaY_25_30__909->SetBinContent(310,1.135593);
   S12_ThetaY_25_30__909->SetBinContent(311,1.135593);
   S12_ThetaY_25_30__909->SetBinContent(312,1.40678);
   S12_ThetaY_25_30__909->SetBinContent(313,1.372881);
   S12_ThetaY_25_30__909->SetBinContent(314,1.508475);
   S12_ThetaY_25_30__909->SetBinContent(315,1.440678);
   S12_ThetaY_25_30__909->SetBinContent(316,1.59322);
   S12_ThetaY_25_30__909->SetBinContent(317,1.237288);
   S12_ThetaY_25_30__909->SetBinError(308,0.06341792);
   S12_ThetaY_25_30__909->SetBinError(309,0.1301889);
   S12_ThetaY_25_30__909->SetBinError(310,0.1387348);
   S12_ThetaY_25_30__909->SetBinError(311,0.1387348);
   S12_ThetaY_25_30__909->SetBinError(312,0.1544141);
   S12_ThetaY_25_30__909->SetBinError(313,0.1525424);
   S12_ThetaY_25_30__909->SetBinError(314,0.159898);
   S12_ThetaY_25_30__909->SetBinError(315,0.1562635);
   S12_ThetaY_25_30__909->SetBinError(316,0.1643281);
   S12_ThetaY_25_30__909->SetBinError(317,0.1448136);
   S12_ThetaY_25_30__909->SetMinimum(0);
   S12_ThetaY_25_30__909->SetMaximum(2.22044);
   S12_ThetaY_25_30__909->SetEntries(712);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__909->SetLineColor(ci);
   S12_ThetaY_25_30__909->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__909->SetMarkerColor(ci);
   S12_ThetaY_25_30__909->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__909->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__909->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__909->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__909->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__909->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__909->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__909->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__909->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__909->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__909->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__909->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__909->Draw("AE");
   
   TH1D *ThetaY_25_30__910 = new TH1D("ThetaY_25_30__910","",630,-1575,1575);
   ThetaY_25_30__910->SetBinContent(307,0.01114923);
   ThetaY_25_30__910->SetBinContent(308,0.341052);
   ThetaY_25_30__910->SetBinContent(309,1);
   ThetaY_25_30__910->SetBinContent(310,1.405803);
   ThetaY_25_30__910->SetBinContent(311,1.679674);
   ThetaY_25_30__910->SetBinContent(312,1.837621);
   ThetaY_25_30__910->SetBinContent(313,1.936678);
   ThetaY_25_30__910->SetBinContent(314,2.017867);
   ThetaY_25_30__910->SetBinContent(315,2.018582);
   ThetaY_25_30__910->SetBinContent(316,1.990423);
   ThetaY_25_30__910->SetBinContent(317,1.975986);
   ThetaY_25_30__910->SetBinContent(318,1.95526);
   ThetaY_25_30__910->SetBinContent(319,1.871355);
   ThetaY_25_30__910->SetBinContent(320,1.665666);
   ThetaY_25_30__910->SetBinContent(321,1.441824);
   ThetaY_25_30__910->SetBinContent(322,0.9922813);
   ThetaY_25_30__910->SetBinContent(323,0.3507719);
   ThetaY_25_30__910->SetBinContent(324,0.01272156);
   ThetaY_25_30__910->SetBinError(307,0.001262401);
   ThetaY_25_30__910->SetBinError(308,0.00698209);
   ThetaY_25_30__910->SetBinError(309,0.0119557);
   ThetaY_25_30__910->SetBinError(310,0.01417547);
   ThetaY_25_30__910->SetBinError(311,0.01549486);
   ThetaY_25_30__910->SetBinError(312,0.01620702);
   ThetaY_25_30__910->SetBinError(313,0.0166381);
   ThetaY_25_30__910->SetBinError(314,0.01698327);
   ThetaY_25_30__910->SetBinError(315,0.01698628);
   ThetaY_25_30__910->SetBinError(316,0.01686739);
   ThetaY_25_30__910->SetBinError(317,0.0168061);
   ThetaY_25_30__910->SetBinError(318,0.01671773);
   ThetaY_25_30__910->SetBinError(319,0.0163551);
   ThetaY_25_30__910->SetBinError(320,0.01543011);
   ThetaY_25_30__910->SetBinError(321,0.01435593);
   ThetaY_25_30__910->SetBinError(322,0.01190947);
   ThetaY_25_30__910->SetBinError(323,0.007080884);
   ThetaY_25_30__910->SetBinError(324,0.001348482);
   ThetaY_25_30__910->SetEntries(171435);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__910->SetLineColor(ci);
   ThetaY_25_30__910->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__910->SetMarkerColor(ci);
   ThetaY_25_30__910->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__910->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__910->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__910->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__910->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__910->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__910->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__910->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__910->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__910->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__910->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__910->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__910->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__910->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__910->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__910->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__910->Draw("AEsame");
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
   
   Double_t _fx3304[18] = {
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
   Double_t _fy3304[18] = {
   0,
   0.6957535,
   1,
   0.8077895,
   0.6760795,
   0.7655438,
   0.7088846,
   0.7475588,
   0.7137079,
   0.8004431,
   0.6261623,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3304[18] = {
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
   Double_t _fely3304[18] = {
   0,
   0.1842068,
   0.1303562,
   0.09877019,
   0.08262076,
   0.08412684,
   0.07883384,
   0.07933815,
   0.07748944,
   0.08268712,
   0.07330875,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3304[18] = {
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
   Double_t _fehy3304[18] = {
   2.832027,
   0.2410006,
   0.1485886,
   0.1116656,
   0.09339982,
   0.09392912,
   0.08813577,
   0.08824706,
   0.08640295,
   0.09171088,
   0.08244447,
   0.01595995,
   0.01667559,
   0.01873498,
   0.02164384,
   0.03145065,
   0.08899079,
   2.478371};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3304,_fy3304,_felx3304,_fehx3304,_fely3304,_fehy3304);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3304 = new TH1F("Graph_Graph3304","",100,-100,100);
   Graph_Graph3304->SetMinimum(0);
   Graph_Graph3304->SetMaximum(1.5);
   Graph_Graph3304->SetDirectory(0);
   Graph_Graph3304->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3304->SetLineColor(ci);
   Graph_Graph3304->GetXaxis()->SetRange(1,100);
   Graph_Graph3304->GetXaxis()->CenterTitle(true);
   Graph_Graph3304->GetXaxis()->SetLabelFont(42);
   Graph_Graph3304->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3304->GetXaxis()->SetTitleFont(42);
   Graph_Graph3304->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3304->GetYaxis()->CenterTitle(true);
   Graph_Graph3304->GetYaxis()->SetLabelFont(42);
   Graph_Graph3304->GetYaxis()->SetTitleFont(42);
   Graph_Graph3304->GetZaxis()->SetLabelFont(42);
   Graph_Graph3304->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3304->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3304);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.22044,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__911 = new TH2D("ThetaY_vs_Y_25_30__911","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__911->SetBinContent(8000,78);
   ThetaY_vs_Y_25_30__911->SetBinContent(8026,2386);
   ThetaY_vs_Y_25_30__911->SetBinContent(8052,6996);
   ThetaY_vs_Y_25_30__911->SetBinContent(8078,9835);
   ThetaY_vs_Y_25_30__911->SetBinContent(8104,11751);
   ThetaY_vs_Y_25_30__911->SetBinContent(8130,12856);
   ThetaY_vs_Y_25_30__911->SetBinContent(8156,13549);
   ThetaY_vs_Y_25_30__911->SetBinContent(8182,14117);
   ThetaY_vs_Y_25_30__911->SetBinContent(8208,14122);
   ThetaY_vs_Y_25_30__911->SetBinContent(8234,13925);
   ThetaY_vs_Y_25_30__911->SetBinContent(8260,13824);
   ThetaY_vs_Y_25_30__911->SetBinContent(8286,13679);
   ThetaY_vs_Y_25_30__911->SetBinContent(8312,13092);
   ThetaY_vs_Y_25_30__911->SetBinContent(8338,11653);
   ThetaY_vs_Y_25_30__911->SetBinContent(8364,10087);
   ThetaY_vs_Y_25_30__911->SetBinContent(8390,6942);
   ThetaY_vs_Y_25_30__911->SetBinContent(8416,2454);
   ThetaY_vs_Y_25_30__911->SetBinContent(8442,89);
   ThetaY_vs_Y_25_30__911->SetEntries(171435);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__911->SetLineColor(ci);
   ThetaY_vs_Y_25_30__911->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__911->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__911->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__911->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__911->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__911->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__911->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__911->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__911->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__911->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__911->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__911->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__911->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__911->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__911->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
