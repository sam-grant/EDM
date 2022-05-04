void S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07749356,125,1.472377);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__963 = new TH1D("S18_ThetaY_20_25__963","",630,-1575,1575);
   S18_ThetaY_20_25__963->SetBinContent(308,0.1346154);
   S18_ThetaY_20_25__963->SetBinContent(309,0.5);
   S18_ThetaY_20_25__963->SetBinContent(310,0.7179487);
   S18_ThetaY_20_25__963->SetBinContent(311,1);
   S18_ThetaY_20_25__963->SetBinContent(312,0.7628205);
   S18_ThetaY_20_25__963->SetBinContent(313,0.9038462);
   S18_ThetaY_20_25__963->SetBinContent(314,0.9423077);
   S18_ThetaY_20_25__963->SetBinContent(315,0.8269231);
   S18_ThetaY_20_25__963->SetBinContent(316,0.9038462);
   S18_ThetaY_20_25__963->SetBinContent(317,0.9487179);
   S18_ThetaY_20_25__963->SetBinContent(318,0.2884615);
   S18_ThetaY_20_25__963->SetBinContent(319,0.006410256);
   S18_ThetaY_20_25__963->SetBinError(308,0.02937549);
   S18_ThetaY_20_25__963->SetBinError(309,0.05661385);
   S18_ThetaY_20_25__963->SetBinError(310,0.06783978);
   S18_ThetaY_20_25__963->SetBinError(311,0.08006408);
   S18_ThetaY_20_25__963->SetBinError(312,0.06992764);
   S18_ThetaY_20_25__963->SetBinError(313,0.07611758);
   S18_ThetaY_20_25__963->SetBinError(314,0.07772023);
   S18_ThetaY_20_25__963->SetBinError(315,0.07280652);
   S18_ThetaY_20_25__963->SetBinError(316,0.07611758);
   S18_ThetaY_20_25__963->SetBinError(317,0.07798414);
   S18_ThetaY_20_25__963->SetBinError(318,0.04300131);
   S18_ThetaY_20_25__963->SetBinError(319,0.006410256);
   S18_ThetaY_20_25__963->SetMinimum(0);
   S18_ThetaY_20_25__963->SetMaximum(1.31739);
   S18_ThetaY_20_25__963->SetEntries(1238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__963->SetLineColor(ci);
   S18_ThetaY_20_25__963->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__963->SetMarkerColor(ci);
   S18_ThetaY_20_25__963->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__963->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__963->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__963->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__963->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__963->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__963->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__963->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__963->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__963->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__963->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__963->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__963->Draw("AE");
   
   TH1D *ThetaY_20_25__964 = new TH1D("ThetaY_20_25__964","",630,-1575,1575);
   ThetaY_20_25__964->SetBinContent(307,0.007299662);
   ThetaY_20_25__964->SetBinContent(308,0.2129247);
   ThetaY_20_25__964->SetBinContent(309,0.6019001);
   ThetaY_20_25__964->SetBinContent(310,0.8577639);
   ThetaY_20_25__964->SetBinContent(311,1);
   ThetaY_20_25__964->SetBinContent(312,1.090226);
   ThetaY_20_25__964->SetBinContent(313,1.163276);
   ThetaY_20_25__964->SetBinContent(314,1.170039);
   ThetaY_20_25__964->SetBinContent(315,1.195427);
   ThetaY_20_25__964->SetBinContent(316,1.197628);
   ThetaY_20_25__964->SetBinContent(317,1.184155);
   ThetaY_20_25__964->SetBinContent(318,1.135742);
   ThetaY_20_25__964->SetBinContent(319,1.102303);
   ThetaY_20_25__964->SetBinContent(320,1.007675);
   ThetaY_20_25__964->SetBinContent(321,0.8468681);
   ThetaY_20_25__964->SetBinContent(322,0.6039397);
   ThetaY_20_25__964->SetBinContent(323,0.2142665);
   ThetaY_20_25__964->SetBinContent(324,0.0066019);
   ThetaY_20_25__964->SetBinError(307,0.0006259408);
   ThetaY_20_25__964->SetBinError(308,0.003380609);
   ThetaY_20_25__964->SetBinError(309,0.00568387);
   ThetaY_20_25__964->SetBinError(310,0.006785249);
   ThetaY_20_25__964->SetBinError(311,0.007326253);
   ThetaY_20_25__964->SetBinError(312,0.007649626);
   ThetaY_20_25__964->SetBinError(313,0.007901751);
   ThetaY_20_25__964->SetBinError(314,0.007924687);
   ThetaY_20_25__964->SetBinError(315,0.008010202);
   ThetaY_20_25__964->SetBinError(316,0.008017571);
   ThetaY_20_25__964->SetBinError(317,0.007972348);
   ThetaY_20_25__964->SetBinError(318,0.007807674);
   ThetaY_20_25__964->SetBinError(319,0.007691877);
   ThetaY_20_25__964->SetBinError(320,0.007354315);
   ThetaY_20_25__964->SetBinError(321,0.006742016);
   ThetaY_20_25__964->SetBinError(322,0.005693492);
   ThetaY_20_25__964->SetBinError(323,0.003391244);
   ThetaY_20_25__964->SetBinError(324,0.0005952733);
   ThetaY_20_25__964->SetEntries(271976);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__964->SetLineColor(ci);
   ThetaY_20_25__964->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__964->SetMarkerColor(ci);
   ThetaY_20_25__964->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__964->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__964->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__964->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__964->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__964->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__964->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__964->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__964->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__964->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__964->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__964->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__964->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__964->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__964->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__964->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__964->Draw("AEsame");
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
   
   Double_t _fx3322[18] = {
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
   Double_t _fy3322[18] = {
   0,
   0.6322206,
   0.8307027,
   0.8370003,
   1,
   0.6996903,
   0.7769832,
   0.8053642,
   0.6917387,
   0.7546972,
   0.8011769,
   0.2539852,
   0.005815333,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3322[18] = {
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
   Double_t _fely3322[18] = {
   0,
   0.1372006,
   0.0941783,
   0.07924472,
   0.08031025,
   0.0642361,
   0.06556692,
   0.06657157,
   0.06099975,
   0.06368042,
   0.0660007,
   0.03775988,
   0.004810757,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3322[18] = {
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
   Double_t _fehy3322[18] = {
   1.6277,
   0.1708251,
   0.1055221,
   0.08713313,
   0.08703905,
   0.07042608,
   0.07135124,
   0.07231906,
   0.06663461,
   0.06929767,
   0.07167869,
   0.04384108,
   0.01337359,
   0.0117121,
   0.01393618,
   0.01954233,
   0.05509093,
   1.801024};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3322,_fy3322,_felx3322,_fehx3322,_fely3322,_fehy3322);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3322 = new TH1F("Graph_Graph3322","",100,-100,100);
   Graph_Graph3322->SetMinimum(0);
   Graph_Graph3322->SetMaximum(1.5);
   Graph_Graph3322->SetDirectory(0);
   Graph_Graph3322->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3322->SetLineColor(ci);
   Graph_Graph3322->GetXaxis()->SetRange(1,100);
   Graph_Graph3322->GetXaxis()->CenterTitle(true);
   Graph_Graph3322->GetXaxis()->SetLabelFont(42);
   Graph_Graph3322->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3322->GetXaxis()->SetTitleFont(42);
   Graph_Graph3322->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3322->GetYaxis()->CenterTitle(true);
   Graph_Graph3322->GetYaxis()->SetLabelFont(42);
   Graph_Graph3322->GetYaxis()->SetTitleFont(42);
   Graph_Graph3322->GetZaxis()->SetLabelFont(42);
   Graph_Graph3322->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3322->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3322);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.31739,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__965 = new TH2D("ThetaY_vs_Y_20_25__965","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__965->SetBinContent(7999,136);
   ThetaY_vs_Y_20_25__965->SetBinContent(8025,3967);
   ThetaY_vs_Y_20_25__965->SetBinContent(8051,11214);
   ThetaY_vs_Y_20_25__965->SetBinContent(8077,15981);
   ThetaY_vs_Y_20_25__965->SetBinContent(8103,18631);
   ThetaY_vs_Y_20_25__965->SetBinContent(8129,20312);
   ThetaY_vs_Y_20_25__965->SetBinContent(8155,21673);
   ThetaY_vs_Y_20_25__965->SetBinContent(8181,21799);
   ThetaY_vs_Y_20_25__965->SetBinContent(8207,22272);
   ThetaY_vs_Y_20_25__965->SetBinContent(8233,22313);
   ThetaY_vs_Y_20_25__965->SetBinContent(8259,22062);
   ThetaY_vs_Y_20_25__965->SetBinContent(8285,21160);
   ThetaY_vs_Y_20_25__965->SetBinContent(8311,20537);
   ThetaY_vs_Y_20_25__965->SetBinContent(8337,18774);
   ThetaY_vs_Y_20_25__965->SetBinContent(8363,15778);
   ThetaY_vs_Y_20_25__965->SetBinContent(8389,11252);
   ThetaY_vs_Y_20_25__965->SetBinContent(8415,3992);
   ThetaY_vs_Y_20_25__965->SetBinContent(8441,123);
   ThetaY_vs_Y_20_25__965->SetEntries(271976);
   ThetaY_vs_Y_20_25__965->SetContour(20);
   ThetaY_vs_Y_20_25__965->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__965->SetContourLevel(1,1115.65);
   ThetaY_vs_Y_20_25__965->SetContourLevel(2,2231.3);
   ThetaY_vs_Y_20_25__965->SetContourLevel(3,3346.95);
   ThetaY_vs_Y_20_25__965->SetContourLevel(4,4462.6);
   ThetaY_vs_Y_20_25__965->SetContourLevel(5,5578.25);
   ThetaY_vs_Y_20_25__965->SetContourLevel(6,6693.9);
   ThetaY_vs_Y_20_25__965->SetContourLevel(7,7809.55);
   ThetaY_vs_Y_20_25__965->SetContourLevel(8,8925.2);
   ThetaY_vs_Y_20_25__965->SetContourLevel(9,10040.85);
   ThetaY_vs_Y_20_25__965->SetContourLevel(10,11156.5);
   ThetaY_vs_Y_20_25__965->SetContourLevel(11,12272.15);
   ThetaY_vs_Y_20_25__965->SetContourLevel(12,13387.8);
   ThetaY_vs_Y_20_25__965->SetContourLevel(13,14503.45);
   ThetaY_vs_Y_20_25__965->SetContourLevel(14,15619.1);
   ThetaY_vs_Y_20_25__965->SetContourLevel(15,16734.75);
   ThetaY_vs_Y_20_25__965->SetContourLevel(16,17850.4);
   ThetaY_vs_Y_20_25__965->SetContourLevel(17,18966.05);
   ThetaY_vs_Y_20_25__965->SetContourLevel(18,20081.7);
   ThetaY_vs_Y_20_25__965->SetContourLevel(19,21197.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__965->SetLineColor(ci);
   ThetaY_vs_Y_20_25__965->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__965->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__965->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__965->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__965->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__965->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__965->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__965->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__965->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__965->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__965->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__965->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__965->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__965->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__965->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
