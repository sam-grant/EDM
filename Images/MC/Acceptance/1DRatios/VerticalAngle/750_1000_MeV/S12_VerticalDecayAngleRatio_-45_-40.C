void S12_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.050562,125,19.96067);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__525 = new TH1D("S12_ThetaY_mI45_mI40__525","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__525->SetBinContent(315,3);
   S12_ThetaY_mI45_mI40__525->SetBinContent(316,9);
   S12_ThetaY_mI45_mI40__525->SetBinContent(317,12);
   S12_ThetaY_mI45_mI40__525->SetBinContent(318,9);
   S12_ThetaY_mI45_mI40__525->SetBinContent(319,3);
   S12_ThetaY_mI45_mI40__525->SetBinContent(320,11);
   S12_ThetaY_mI45_mI40__525->SetBinContent(321,9);
   S12_ThetaY_mI45_mI40__525->SetBinContent(322,8);
   S12_ThetaY_mI45_mI40__525->SetBinContent(323,6);
   S12_ThetaY_mI45_mI40__525->SetBinContent(324,9);
   S12_ThetaY_mI45_mI40__525->SetBinContent(325,3);
   S12_ThetaY_mI45_mI40__525->SetBinContent(326,2);
   S12_ThetaY_mI45_mI40__525->SetBinContent(327,1);
   S12_ThetaY_mI45_mI40__525->SetBinError(315,1.732051);
   S12_ThetaY_mI45_mI40__525->SetBinError(316,3);
   S12_ThetaY_mI45_mI40__525->SetBinError(317,3.464102);
   S12_ThetaY_mI45_mI40__525->SetBinError(318,3);
   S12_ThetaY_mI45_mI40__525->SetBinError(319,1.732051);
   S12_ThetaY_mI45_mI40__525->SetBinError(320,3.316625);
   S12_ThetaY_mI45_mI40__525->SetBinError(321,3);
   S12_ThetaY_mI45_mI40__525->SetBinError(322,2.828427);
   S12_ThetaY_mI45_mI40__525->SetBinError(323,2.44949);
   S12_ThetaY_mI45_mI40__525->SetBinError(324,3);
   S12_ThetaY_mI45_mI40__525->SetBinError(325,1.732051);
   S12_ThetaY_mI45_mI40__525->SetBinError(326,1.414214);
   S12_ThetaY_mI45_mI40__525->SetBinError(327,1);
   S12_ThetaY_mI45_mI40__525->SetMinimum(0);
   S12_ThetaY_mI45_mI40__525->SetMaximum(17.85955);
   S12_ThetaY_mI45_mI40__525->SetEntries(85);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__525->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__525->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__525->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__525->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__525->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__525->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__525->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__525->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__525->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__525->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__525->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__525->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__525->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__525->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__525->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__525->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__526 = new TH1D("ThetaY_mI45_mI40__526","",630,-1575,1575);
   ThetaY_mI45_mI40__526->SetBinContent(304,0.6966292);
   ThetaY_mI45_mI40__526->SetBinContent(305,3.786517);
   ThetaY_mI45_mI40__526->SetBinContent(306,8.146067);
   ThetaY_mI45_mI40__526->SetBinContent(307,11.02247);
   ThetaY_mI45_mI40__526->SetBinContent(308,13.47191);
   ThetaY_mI45_mI40__526->SetBinContent(309,13.65169);
   ThetaY_mI45_mI40__526->SetBinContent(310,15.06742);
   ThetaY_mI45_mI40__526->SetBinContent(311,15.58427);
   ThetaY_mI45_mI40__526->SetBinContent(312,15.19101);
   ThetaY_mI45_mI40__526->SetBinContent(313,15.96629);
   ThetaY_mI45_mI40__526->SetBinContent(314,15.7191);
   ThetaY_mI45_mI40__526->SetBinContent(315,15.77528);
   ThetaY_mI45_mI40__526->SetBinContent(316,15.30337);
   ThetaY_mI45_mI40__526->SetBinContent(317,16.23596);
   ThetaY_mI45_mI40__526->SetBinContent(318,15.57303);
   ThetaY_mI45_mI40__526->SetBinContent(319,14.59551);
   ThetaY_mI45_mI40__526->SetBinContent(320,15.51685);
   ThetaY_mI45_mI40__526->SetBinContent(321,15.1236);
   ThetaY_mI45_mI40__526->SetBinContent(322,13.65169);
   ThetaY_mI45_mI40__526->SetBinContent(323,13.14607);
   ThetaY_mI45_mI40__526->SetBinContent(324,11.02247);
   ThetaY_mI45_mI40__526->SetBinContent(325,7.932584);
   ThetaY_mI45_mI40__526->SetBinContent(326,4.258427);
   ThetaY_mI45_mI40__526->SetBinContent(327,1);
   ThetaY_mI45_mI40__526->SetBinError(304,0.088472);
   ThetaY_mI45_mI40__526->SetBinError(305,0.2062647);
   ThetaY_mI45_mI40__526->SetBinError(306,0.3025373);
   ThetaY_mI45_mI40__526->SetBinError(307,0.3519204);
   ThetaY_mI45_mI40__526->SetBinError(308,0.3890627);
   ThetaY_mI45_mI40__526->SetBinError(309,0.39165);
   ThetaY_mI45_mI40__526->SetBinError(310,0.4114569);
   ThetaY_mI45_mI40__526->SetBinError(311,0.4184545);
   ThetaY_mI45_mI40__526->SetBinError(312,0.413141);
   ThetaY_mI45_mI40__526->SetBinError(313,0.4235523);
   ThetaY_mI45_mI40__526->SetBinError(314,0.4202608);
   ThetaY_mI45_mI40__526->SetBinError(315,0.4210111);
   ThetaY_mI45_mI40__526->SetBinError(316,0.4146661);
   ThetaY_mI45_mI40__526->SetBinError(317,0.4271141);
   ThetaY_mI45_mI40__526->SetBinError(318,0.4183036);
   ThetaY_mI45_mI40__526->SetBinError(319,0.4049623);
   ThetaY_mI45_mI40__526->SetBinError(320,0.4175484);
   ThetaY_mI45_mI40__526->SetBinError(321,0.4122233);
   ThetaY_mI45_mI40__526->SetBinError(322,0.39165);
   ThetaY_mI45_mI40__526->SetBinError(323,0.3843288);
   ThetaY_mI45_mI40__526->SetBinError(324,0.3519204);
   ThetaY_mI45_mI40__526->SetBinError(325,0.2985467);
   ThetaY_mI45_mI40__526->SetBinError(326,0.2187407);
   ThetaY_mI45_mI40__526->SetBinError(327,0.1059998);
   ThetaY_mI45_mI40__526->SetEntries(25582);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__526->SetLineColor(ci);
   ThetaY_mI45_mI40__526->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__526->SetMarkerColor(ci);
   ThetaY_mI45_mI40__526->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__526->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__526->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__526->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__526->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__526->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__526->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__526->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__526->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__526->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__526->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__526->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__526->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__526->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__526->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__526->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__526->Draw("AEsame");
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
   
   Double_t _fx3176[24] = {
   -57.5,
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5,
   57.5};
   Double_t _fy3176[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1901709,
   0.5881057,
   0.7391003,
   0.5779221,
   0.2055427,
   0.7089066,
   0.5950966,
   0.5860082,
   0.4564103,
   0.8165138,
   0.378187,
   0.469657,
   1};
   Double_t _felx3176[24] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3176[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1035788,
   0.1929123,
   0.2111577,
   0.1895621,
   0.1119583,
   0.2112215,
   0.1952123,
   0.20338,
   0.1814345,
   0.2681427,
   0.2061432,
   0.303856,
   0.8290016};
   Double_t _fehx3176[24] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3176[24] = {
   2.682385,
   0.487535,
   0.2262885,
   0.1671812,
   0.1367613,
   0.134959,
   0.1222695,
   0.1182118,
   0.1212741,
   0.1153815,
   0.1171971,
   0.1853747,
   0.2698738,
   0.2824551,
   0.2651787,
   0.2003929,
   0.286215,
   0.2730973,
   0.2904058,
   0.2737182,
   0.3753835,
   0.369416,
   0.6232398,
   2.342436};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3176,_fy3176,_felx3176,_fehx3176,_fely3176,_fehy3176);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3176 = new TH1F("Graph_Graph3176","",100,-100,100);
   Graph_Graph3176->SetMinimum(0);
   Graph_Graph3176->SetMaximum(1.5);
   Graph_Graph3176->SetDirectory(0);
   Graph_Graph3176->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3176->SetLineColor(ci);
   Graph_Graph3176->GetXaxis()->SetRange(1,100);
   Graph_Graph3176->GetXaxis()->CenterTitle(true);
   Graph_Graph3176->GetXaxis()->SetLabelFont(42);
   Graph_Graph3176->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3176->GetXaxis()->SetTitleFont(42);
   Graph_Graph3176->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3176->GetYaxis()->CenterTitle(true);
   Graph_Graph3176->GetYaxis()->SetLabelFont(42);
   Graph_Graph3176->GetYaxis()->SetTitleFont(42);
   Graph_Graph3176->GetZaxis()->SetLabelFont(42);
   Graph_Graph3176->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3176->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3176);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,17.85955,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__527 = new TH2D("ThetaY_vs_Y_mI45_mI40__527","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(7908,62);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(7934,337);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(7960,725);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(7986,981);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8012,1199);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8038,1215);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8064,1341);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8090,1387);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8116,1352);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8142,1421);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8168,1399);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8194,1404);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8220,1362);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8246,1445);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8272,1386);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8298,1299);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8324,1381);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8350,1346);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8376,1215);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8402,1170);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8428,981);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8454,706);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8480,379);
   ThetaY_vs_Y_mI45_mI40__527->SetBinContent(8506,89);
   ThetaY_vs_Y_mI45_mI40__527->SetEntries(25582);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__527->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__527->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__527->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__527->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__527->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__527->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__527->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__527->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__527->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__527->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__527->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__527->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__527->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__527->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__527->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__527->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
