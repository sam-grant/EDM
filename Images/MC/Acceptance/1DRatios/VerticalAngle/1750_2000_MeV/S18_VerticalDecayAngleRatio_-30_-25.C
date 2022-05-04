void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.124628,125,2.367932);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__1275 = new TH1D("S18_ThetaY_mI30_mI25__1275","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(314,0.4375);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(315,1.3125);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(316,1.520833);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(317,1.541667);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(318,1.229167);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(319,1.104167);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(320,1);
   S18_ThetaY_mI30_mI25__1275->SetBinContent(321,0.1041667);
   S18_ThetaY_mI30_mI25__1275->SetBinError(314,0.09547033);
   S18_ThetaY_mI30_mI25__1275->SetBinError(315,0.1653595);
   S18_ThetaY_mI30_mI25__1275->SetBinError(316,0.1780001);
   S18_ThetaY_mI30_mI25__1275->SetBinError(317,0.1792151);
   S18_ThetaY_mI30_mI25__1275->SetBinError(318,0.1600239);
   S18_ThetaY_mI30_mI25__1275->SetBinError(319,0.151669);
   S18_ThetaY_mI30_mI25__1275->SetBinError(320,0.1443376);
   S18_ThetaY_mI30_mI25__1275->SetBinError(321,0.04658475);
   S18_ThetaY_mI30_mI25__1275->SetMinimum(0);
   S18_ThetaY_mI30_mI25__1275->SetMaximum(2.118676);
   S18_ThetaY_mI30_mI25__1275->SetEntries(396);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1275->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__1275->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1275->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__1275->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__1275->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__1275->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1275->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1275->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1275->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__1275->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__1275->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1275->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1275->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1275->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1275->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1275->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1276 = new TH1D("ThetaY_mI30_mI25__1276","",630,-1575,1575);
   ThetaY_mI30_mI25__1276->SetBinContent(309,0.000932463);
   ThetaY_mI30_mI25__1276->SetBinContent(310,0.2806714);
   ThetaY_mI30_mI25__1276->SetBinContent(311,1.005195);
   ThetaY_mI30_mI25__1276->SetBinContent(312,1.441188);
   ThetaY_mI30_mI25__1276->SetBinContent(313,1.679766);
   ThetaY_mI30_mI25__1276->SetBinContent(314,1.846943);
   ThetaY_mI30_mI25__1276->SetBinContent(315,1.87878);
   ThetaY_mI30_mI25__1276->SetBinContent(316,1.926069);
   ThetaY_mI30_mI25__1276->SetBinContent(317,1.83189);
   ThetaY_mI30_mI25__1276->SetBinContent(318,1.70361);
   ThetaY_mI30_mI25__1276->SetBinContent(319,1.448914);
   ThetaY_mI30_mI25__1276->SetBinContent(320,1);
   ThetaY_mI30_mI25__1276->SetBinContent(321,0.2833356);
   ThetaY_mI30_mI25__1276->SetBinContent(322,0.001198881);
   ThetaY_mI30_mI25__1276->SetBinError(309,0.0003524379);
   ThetaY_mI30_mI25__1276->SetBinError(310,0.006114569);
   ThetaY_mI30_mI25__1276->SetBinError(311,0.01157156);
   ThetaY_mI30_mI25__1276->SetBinError(312,0.01385566);
   ThetaY_mI30_mI25__1276->SetBinError(313,0.01495861);
   ThetaY_mI30_mI25__1276->SetBinError(314,0.01568532);
   ThetaY_mI30_mI25__1276->SetBinError(315,0.01581994);
   ThetaY_mI30_mI25__1276->SetBinError(316,0.01601779);
   ThetaY_mI30_mI25__1276->SetBinError(317,0.01562128);
   ThetaY_mI30_mI25__1276->SetBinError(318,0.0150644);
   ThetaY_mI30_mI25__1276->SetBinError(319,0.01389275);
   ThetaY_mI30_mI25__1276->SetBinError(320,0.01154162);
   ThetaY_mI30_mI25__1276->SetBinError(321,0.006143521);
   ThetaY_mI30_mI25__1276->SetBinError(322,0.000399627);
   ThetaY_mI30_mI25__1276->SetEntries(122578);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1276->SetLineColor(ci);
   ThetaY_mI30_mI25__1276->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1276->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1276->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1276->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1276->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1276->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1276->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1276->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1276->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1276->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1276->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1276->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1276->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1276->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1276->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1276->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1276->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1276->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1276->Draw("AEsame");
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
   
   Double_t _fx3426[14] = {
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
   Double_t _fy3426[14] = {
   0,
   0,
   0,
   0,
   0,
   0.2368779,
   0.6985917,
   0.7896048,
   0.8415715,
   0.7215071,
   0.7620648,
   1,
   0.3676442,
   0};
   Double_t _felx3426[14] = {
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
   Double_t _fely3426[14] = {
   0,
   0,
   0,
   0,
   0,
   0.05131336,
   0.08797288,
   0.09243347,
   0.09786799,
   0.09387751,
   0.1045956,
   0.1442828,
   0.1589545,
   0};
   Double_t _fehx3426[14] = {
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
   Double_t _fehy3426[14] = {
   47.04867,
   0.1367128,
   0.03816104,
   0.02661546,
   0.02283498,
   0.0638512,
   0.09982286,
   0.1039508,
   0.1099774,
   0.1069744,
   0.1200521,
   0.1667924,
   0.2491994,
   35.49913};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3426,_fy3426,_felx3426,_fehx3426,_fely3426,_fehy3426);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3426 = new TH1F("Graph_Graph3426","",100,-100,100);
   Graph_Graph3426->SetMinimum(0);
   Graph_Graph3426->SetMaximum(1.5);
   Graph_Graph3426->SetDirectory(0);
   Graph_Graph3426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3426->SetLineColor(ci);
   Graph_Graph3426->GetXaxis()->SetRange(1,100);
   Graph_Graph3426->GetXaxis()->CenterTitle(true);
   Graph_Graph3426->GetXaxis()->SetLabelFont(42);
   Graph_Graph3426->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3426->GetXaxis()->SetTitleFont(42);
   Graph_Graph3426->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3426->GetYaxis()->CenterTitle(true);
   Graph_Graph3426->GetYaxis()->SetLabelFont(42);
   Graph_Graph3426->GetYaxis()->SetTitleFont(42);
   Graph_Graph3426->GetZaxis()->SetLabelFont(42);
   Graph_Graph3426->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3426->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3426);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.118676,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1277 = new TH2D("ThetaY_vs_Y_mI30_mI25__1277","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8041,7);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8067,2107);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8093,7546);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8119,10819);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8145,12610);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8171,13865);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8197,14104);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8223,14459);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8249,13752);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8275,12789);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8301,10877);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8327,7507);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8353,2127);
   ThetaY_vs_Y_mI30_mI25__1277->SetBinContent(8379,9);
   ThetaY_vs_Y_mI30_mI25__1277->SetEntries(122578);
   ThetaY_vs_Y_mI30_mI25__1277->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(1,722.95);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(2,1445.9);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(3,2168.85);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(4,2891.8);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(5,3614.75);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(6,4337.7);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(7,5060.65);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(8,5783.6);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(9,6506.55);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(10,7229.5);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(11,7952.45);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(12,8675.4);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(13,9398.35);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(14,10121.3);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(15,10844.25);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(16,11567.2);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(17,12290.15);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(18,13013.1);
   ThetaY_vs_Y_mI30_mI25__1277->SetContourLevel(19,13736.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1277->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1277->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1277->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1277->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1277->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1277->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1277->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1277->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1277->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1277->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1277->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1277->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1277->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1277->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1277->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1277->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
