void S18_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.07112342,125,1.351345);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_5_10__954 = new TH1D("S18_ThetaY_5_10__954","",630,-1575,1575);
   S18_ThetaY_5_10__954->SetBinContent(308,0.01333333);
   S18_ThetaY_5_10__954->SetBinContent(309,0.104);
   S18_ThetaY_5_10__954->SetBinContent(310,0.576);
   S18_ThetaY_5_10__954->SetBinContent(311,0.8053333);
   S18_ThetaY_5_10__954->SetBinContent(312,1);
   S18_ThetaY_5_10__954->SetBinContent(313,0.9706667);
   S18_ThetaY_5_10__954->SetBinContent(314,0.9306667);
   S18_ThetaY_5_10__954->SetBinContent(315,0.9146667);
   S18_ThetaY_5_10__954->SetBinContent(316,1.069333);
   S18_ThetaY_5_10__954->SetBinContent(317,1.018667);
   S18_ThetaY_5_10__954->SetBinContent(318,0.952);
   S18_ThetaY_5_10__954->SetBinContent(319,0.72);
   S18_ThetaY_5_10__954->SetBinContent(320,0.2666667);
   S18_ThetaY_5_10__954->SetBinContent(321,0.01333333);
   S18_ThetaY_5_10__954->SetBinError(308,0.005962848);
   S18_ThetaY_5_10__954->SetBinError(309,0.01665333);
   S18_ThetaY_5_10__954->SetBinError(310,0.03919184);
   S18_ThetaY_5_10__954->SetBinError(311,0.04634173);
   S18_ThetaY_5_10__954->SetBinError(312,0.05163978);
   S18_ThetaY_5_10__954->SetBinError(313,0.05087676);
   S18_ThetaY_5_10__954->SetBinError(314,0.04981744);
   S18_ThetaY_5_10__954->SetBinError(315,0.04938736);
   S18_ThetaY_5_10__954->SetBinError(316,0.05339996);
   S18_ThetaY_5_10__954->SetBinError(317,0.05211952);
   S18_ThetaY_5_10__954->SetBinError(318,0.05038518);
   S18_ThetaY_5_10__954->SetBinError(319,0.0438178);
   S18_ThetaY_5_10__954->SetBinError(320,0.02666667);
   S18_ThetaY_5_10__954->SetBinError(321,0.005962848);
   S18_ThetaY_5_10__954->SetMinimum(0);
   S18_ThetaY_5_10__954->SetMaximum(1.209098);
   S18_ThetaY_5_10__954->SetEntries(3508);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__954->SetLineColor(ci);
   S18_ThetaY_5_10__954->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__954->SetMarkerColor(ci);
   S18_ThetaY_5_10__954->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__954->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__954->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__954->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__954->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__954->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__954->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__954->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__954->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__954->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__954->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__954->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__954->Draw("AE");
   
   TH1D *ThetaY_5_10__955 = new TH1D("ThetaY_5_10__955","",630,-1575,1575);
   ThetaY_5_10__955->SetBinContent(307,0.006455623);
   ThetaY_5_10__955->SetBinContent(308,0.1960745);
   ThetaY_5_10__955->SetBinContent(309,0.5525371);
   ThetaY_5_10__955->SetBinContent(310,0.7630666);
   ThetaY_5_10__955->SetBinContent(311,0.9127689);
   ThetaY_5_10__955->SetBinContent(312,1);
   ThetaY_5_10__955->SetBinContent(313,1.055955);
   ThetaY_5_10__955->SetBinContent(314,1.081638);
   ThetaY_5_10__955->SetBinContent(315,1.09918);
   ThetaY_5_10__955->SetBinContent(316,1.090439);
   ThetaY_5_10__955->SetBinContent(317,1.083923);
   ThetaY_5_10__955->SetBinContent(318,1.059644);
   ThetaY_5_10__955->SetBinContent(319,1.007739);
   ThetaY_5_10__955->SetBinContent(320,0.9175404);
   ThetaY_5_10__955->SetBinContent(321,0.7670964);
   ThetaY_5_10__955->SetBinContent(322,0.554562);
   ThetaY_5_10__955->SetBinContent(323,0.1917039);
   ThetaY_5_10__955->SetBinContent(324,0.006535817);
   ThetaY_5_10__955->SetBinError(307,0.0003597578);
   ThetaY_5_10__955->SetBinError(308,0.001982676);
   ThetaY_5_10__955->SetBinError(309,0.003328295);
   ThetaY_5_10__955->SetBinError(310,0.003911311);
   ThetaY_5_10__955->SetBinError(311,0.004277811);
   ThetaY_5_10__955->SetBinError(312,0.004477557);
   ThetaY_5_10__955->SetBinError(313,0.004601124);
   ThetaY_5_10__955->SetBinError(314,0.00465674);
   ThetaY_5_10__955->SetBinError(315,0.004694351);
   ThetaY_5_10__955->SetBinError(316,0.004675648);
   ThetaY_5_10__955->SetBinError(317,0.004661658);
   ThetaY_5_10__955->SetBinError(318,0.004609154);
   ThetaY_5_10__955->SetBinError(319,0.004494849);
   ThetaY_5_10__955->SetBinError(320,0.004288977);
   ThetaY_5_10__955->SetBinError(321,0.003921625);
   ThetaY_5_10__955->SetBinError(322,0.003334389);
   ThetaY_5_10__955->SetBinError(323,0.001960454);
   ThetaY_5_10__955->SetBinError(324,0.0003619854);
   ThetaY_5_10__955->SetEntries(665728);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__955->SetLineColor(ci);
   ThetaY_5_10__955->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__955->SetMarkerColor(ci);
   ThetaY_5_10__955->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__955->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__955->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__955->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__955->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__955->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__955->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__955->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__955->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__955->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__955->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__955->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__955->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__955->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__955->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__955->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__955->Draw("AEsame");
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
   
   Double_t _fx3319[18] = {
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
   Double_t _fy3319[18] = {
   0,
   0.06800136,
   0.1882226,
   0.7548489,
   0.8822971,
   1,
   0.9192307,
   0.8604238,
   0.8321355,
   0.9806449,
   0.9397961,
   0.8984147,
   0.7144709,
   0.2906321,
   0.01738156,
   0,
   0,
   0};
   Double_t _felx3319[18] = {
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
   Double_t _fely3319[18] = {
   0,
   0.02937863,
   0.03003065,
   0.05146597,
   0.05090987,
   0.05180993,
   0.04832434,
   0.04618362,
   0.04504906,
   0.04913034,
   0.04823218,
   0.04768669,
   0.04357053,
   0.02904591,
   0.007508169,
   0,
   0,
   0};
   Double_t _fehx3319[18] = {
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
   Double_t _fehy3319[18] = {
   0.7626611,
   0.04602227,
   0.03525314,
   0.05510198,
   0.05393694,
   0.05456744,
   0.05093506,
   0.04873256,
   0.04755734,
   0.05165662,
   0.05077437,
   0.05028855,
   0.04631312,
   0.03210537,
   0.01175982,
   0.00885303,
   0.0256117,
   0.7532769};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3319,_fy3319,_felx3319,_fehx3319,_fely3319,_fehy3319);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3319 = new TH1F("Graph_Graph3319","",100,-100,100);
   Graph_Graph3319->SetMinimum(0);
   Graph_Graph3319->SetMaximum(1.5);
   Graph_Graph3319->SetDirectory(0);
   Graph_Graph3319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3319->SetLineColor(ci);
   Graph_Graph3319->GetXaxis()->SetRange(1,100);
   Graph_Graph3319->GetXaxis()->CenterTitle(true);
   Graph_Graph3319->GetXaxis()->SetLabelFont(42);
   Graph_Graph3319->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3319->GetXaxis()->SetTitleFont(42);
   Graph_Graph3319->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3319->GetYaxis()->CenterTitle(true);
   Graph_Graph3319->GetYaxis()->SetLabelFont(42);
   Graph_Graph3319->GetYaxis()->SetTitleFont(42);
   Graph_Graph3319->GetZaxis()->SetLabelFont(42);
   Graph_Graph3319->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3319->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3319);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.209098,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__956 = new TH2D("ThetaY_vs_Y_5_10__956","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__956->SetBinContent(7996,322);
   ThetaY_vs_Y_5_10__956->SetBinContent(8022,9780);
   ThetaY_vs_Y_5_10__956->SetBinContent(8048,27560);
   ThetaY_vs_Y_5_10__956->SetBinContent(8074,38061);
   ThetaY_vs_Y_5_10__956->SetBinContent(8100,45528);
   ThetaY_vs_Y_5_10__956->SetBinContent(8126,49879);
   ThetaY_vs_Y_5_10__956->SetBinContent(8152,52670);
   ThetaY_vs_Y_5_10__956->SetBinContent(8178,53951);
   ThetaY_vs_Y_5_10__956->SetBinContent(8204,54826);
   ThetaY_vs_Y_5_10__956->SetBinContent(8230,54390);
   ThetaY_vs_Y_5_10__956->SetBinContent(8256,54065);
   ThetaY_vs_Y_5_10__956->SetBinContent(8282,52854);
   ThetaY_vs_Y_5_10__956->SetBinContent(8308,50265);
   ThetaY_vs_Y_5_10__956->SetBinContent(8334,45766);
   ThetaY_vs_Y_5_10__956->SetBinContent(8360,38262);
   ThetaY_vs_Y_5_10__956->SetBinContent(8386,27661);
   ThetaY_vs_Y_5_10__956->SetBinContent(8412,9562);
   ThetaY_vs_Y_5_10__956->SetBinContent(8438,326);
   ThetaY_vs_Y_5_10__956->SetEntries(665728);
   ThetaY_vs_Y_5_10__956->SetContour(20);
   ThetaY_vs_Y_5_10__956->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__956->SetContourLevel(1,2741.3);
   ThetaY_vs_Y_5_10__956->SetContourLevel(2,5482.6);
   ThetaY_vs_Y_5_10__956->SetContourLevel(3,8223.9);
   ThetaY_vs_Y_5_10__956->SetContourLevel(4,10965.2);
   ThetaY_vs_Y_5_10__956->SetContourLevel(5,13706.5);
   ThetaY_vs_Y_5_10__956->SetContourLevel(6,16447.8);
   ThetaY_vs_Y_5_10__956->SetContourLevel(7,19189.1);
   ThetaY_vs_Y_5_10__956->SetContourLevel(8,21930.4);
   ThetaY_vs_Y_5_10__956->SetContourLevel(9,24671.7);
   ThetaY_vs_Y_5_10__956->SetContourLevel(10,27413);
   ThetaY_vs_Y_5_10__956->SetContourLevel(11,30154.3);
   ThetaY_vs_Y_5_10__956->SetContourLevel(12,32895.6);
   ThetaY_vs_Y_5_10__956->SetContourLevel(13,35636.9);
   ThetaY_vs_Y_5_10__956->SetContourLevel(14,38378.2);
   ThetaY_vs_Y_5_10__956->SetContourLevel(15,41119.5);
   ThetaY_vs_Y_5_10__956->SetContourLevel(16,43860.8);
   ThetaY_vs_Y_5_10__956->SetContourLevel(17,46602.1);
   ThetaY_vs_Y_5_10__956->SetContourLevel(18,49343.4);
   ThetaY_vs_Y_5_10__956->SetContourLevel(19,52084.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__956->SetLineColor(ci);
   ThetaY_vs_Y_5_10__956->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__956->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__956->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__956->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__956->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__956->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__956->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__956->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__956->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__956->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__956->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__956->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__956->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__956->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__956->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
