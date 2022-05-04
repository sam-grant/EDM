void S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06645711,125,1.262685);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__606 = new TH1D("S18_ThetaY_mI5_0__606","",630,-1575,1575);
   S18_ThetaY_mI5_0__606->SetBinContent(307,0.006134969);
   S18_ThetaY_mI5_0__606->SetBinContent(308,0.05214724);
   S18_ThetaY_mI5_0__606->SetBinContent(309,0.3159509);
   S18_ThetaY_mI5_0__606->SetBinContent(310,0.8374233);
   S18_ThetaY_mI5_0__606->SetBinContent(311,1);
   S18_ThetaY_mI5_0__606->SetBinContent(312,0.9233129);
   S18_ThetaY_mI5_0__606->SetBinContent(313,1.018405);
   S18_ThetaY_mI5_0__606->SetBinContent(314,0.9478528);
   S18_ThetaY_mI5_0__606->SetBinContent(315,0.8834356);
   S18_ThetaY_mI5_0__606->SetBinContent(316,0.9233129);
   S18_ThetaY_mI5_0__606->SetBinContent(317,0.9325153);
   S18_ThetaY_mI5_0__606->SetBinContent(318,0.9263804);
   S18_ThetaY_mI5_0__606->SetBinContent(319,0.9539877);
   S18_ThetaY_mI5_0__606->SetBinContent(320,0.9969325);
   S18_ThetaY_mI5_0__606->SetBinContent(321,0.809816);
   S18_ThetaY_mI5_0__606->SetBinContent(322,0.5613497);
   S18_ThetaY_mI5_0__606->SetBinContent(323,0.2208589);
   S18_ThetaY_mI5_0__606->SetBinContent(324,0.01840491);
   S18_ThetaY_mI5_0__606->SetBinError(307,0.004338078);
   S18_ThetaY_mI5_0__606->SetBinError(308,0.01264756);
   S18_ThetaY_mI5_0__606->SetBinError(309,0.03113157);
   S18_ThetaY_mI5_0__606->SetBinError(310,0.05068316);
   S18_ThetaY_mI5_0__606->SetBinError(311,0.05538488);
   S18_ThetaY_mI5_0__606->SetBinError(312,0.05321887);
   S18_ThetaY_mI5_0__606->SetBinError(313,0.05589223);
   S18_ThetaY_mI5_0__606->SetBinError(314,0.05392146);
   S18_ThetaY_mI5_0__606->SetBinError(315,0.05205694);
   S18_ThetaY_mI5_0__606->SetBinError(316,0.05321887);
   S18_ThetaY_mI5_0__606->SetBinError(317,0.05348342);
   S18_ThetaY_mI5_0__606->SetBinError(318,0.0533072);
   S18_ThetaY_mI5_0__606->SetBinError(319,0.05409568);
   S18_ThetaY_mI5_0__606->SetBinError(320,0.05529987);
   S18_ThetaY_mI5_0__606->SetBinError(321,0.04984073);
   S18_ThetaY_mI5_0__606->SetBinError(322,0.04149616);
   S18_ThetaY_mI5_0__606->SetBinError(323,0.02602847);
   S18_ThetaY_mI5_0__606->SetBinError(324,0.007513772);
   S18_ThetaY_mI5_0__606->SetMinimum(0);
   S18_ThetaY_mI5_0__606->SetMaximum(1.129771);
   S18_ThetaY_mI5_0__606->SetEntries(4019);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__606->SetLineColor(ci);
   S18_ThetaY_mI5_0__606->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__606->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__606->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__606->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__606->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__606->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__606->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__606->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__606->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__606->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__606->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__606->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__606->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__606->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__606->Draw("AE");
   
   TH1D *ThetaY_mI5_0__607 = new TH1D("ThetaY_mI5_0__607","",630,-1575,1575);
   ThetaY_mI5_0__607->SetBinContent(303,0.0004128819);
   ThetaY_mI5_0__607->SetBinContent(304,0.05398431);
   ThetaY_mI5_0__607->SetBinContent(305,0.2472543);
   ThetaY_mI5_0__607->SetBinContent(306,0.5174649);
   ThetaY_mI5_0__607->SetBinContent(307,0.7078035);
   ThetaY_mI5_0__607->SetBinContent(308,0.8406689);
   ThetaY_mI5_0__607->SetBinContent(309,0.9261354);
   ThetaY_mI5_0__607->SetBinContent(310,0.9720685);
   ThetaY_mI5_0__607->SetBinContent(311,1);
   ThetaY_mI5_0__607->SetBinContent(312,1.014327);
   ThetaY_mI5_0__607->SetBinContent(313,1.022048);
   ThetaY_mI5_0__607->SetBinContent(314,1.018415);
   ThetaY_mI5_0__607->SetBinContent(315,1.019055);
   ThetaY_mI5_0__607->SetBinContent(316,1.01026);
   ThetaY_mI5_0__607->SetBinContent(317,1.027064);
   ThetaY_mI5_0__607->SetBinContent(318,1.019178);
   ThetaY_mI5_0__607->SetBinContent(319,1.020995);
   ThetaY_mI5_0__607->SetBinContent(320,1.003365);
   ThetaY_mI5_0__607->SetBinContent(321,0.9739059);
   ThetaY_mI5_0__607->SetBinContent(322,0.9169282);
   ThetaY_mI5_0__607->SetBinContent(323,0.8365607);
   ThetaY_mI5_0__607->SetBinContent(324,0.7038398);
   ThetaY_mI5_0__607->SetBinContent(325,0.5223163);
   ThetaY_mI5_0__607->SetBinContent(326,0.2454583);
   ThetaY_mI5_0__607->SetBinContent(327,0.05284889);
   ThetaY_mI5_0__607->SetBinContent(328,0.0002890173);
   ThetaY_mI5_0__607->SetBinError(303,9.23232e-05);
   ThetaY_mI5_0__607->SetBinError(304,0.001055679);
   ThetaY_mI5_0__607->SetBinError(305,0.002259279);
   ThetaY_mI5_0__607->SetBinError(306,0.003268424);
   ThetaY_mI5_0__607->SetBinError(307,0.00382256);
   ThetaY_mI5_0__607->SetBinError(308,0.004165915);
   ThetaY_mI5_0__607->SetBinError(309,0.004372554);
   ThetaY_mI5_0__607->SetBinError(310,0.004479674);
   ThetaY_mI5_0__607->SetBinError(311,0.004543577);
   ThetaY_mI5_0__607->SetBinError(312,0.00457601);
   ThetaY_mI5_0__607->SetBinError(313,0.004593392);
   ThetaY_mI5_0__607->SetBinError(314,0.004585221);
   ThetaY_mI5_0__607->SetBinError(315,0.004586661);
   ThetaY_mI5_0__607->SetBinError(316,0.004566827);
   ThetaY_mI5_0__607->SetBinError(317,0.004604652);
   ThetaY_mI5_0__607->SetBinError(318,0.00458694);
   ThetaY_mI5_0__607->SetBinError(319,0.004591026);
   ThetaY_mI5_0__607->SetBinError(320,0.004551216);
   ThetaY_mI5_0__607->SetBinError(321,0.004483905);
   ThetaY_mI5_0__607->SetBinError(322,0.004350765);
   ThetaY_mI5_0__607->SetBinError(323,0.004155724);
   ThetaY_mI5_0__607->SetBinError(324,0.003811842);
   ThetaY_mI5_0__607->SetBinError(325,0.003283709);
   ThetaY_mI5_0__607->SetBinError(326,0.002251059);
   ThetaY_mI5_0__607->SetBinError(327,0.001044518);
   ThetaY_mI5_0__607->SetBinError(328,7.724313e-05);
   ThetaY_mI5_0__607->SetEntries(904503);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__607->SetLineColor(ci);
   ThetaY_mI5_0__607->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__607->SetMarkerColor(ci);
   ThetaY_mI5_0__607->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__607->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__607->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__607->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__607->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__607->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__607->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__607->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__607->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__607->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__607->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__607->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__607->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__607->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__607->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__607->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__607->Draw("AEsame");
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
   
   Double_t _fx3203[26] = {
   -62.5,
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
   57.5,
   62.5};
   Double_t _fy3203[26] = {
   0,
   0,
   0,
   0,
   0.008667617,
   0.06203065,
   0.3411498,
   0.8614859,
   1,
   0.9102714,
   0.9964356,
   0.9307141,
   0.8669169,
   0.9139358,
   0.9079424,
   0.9089482,
   0.9343706,
   0.9935891,
   0.8315136,
   0.6122068,
   0.2640082,
   0.02614929,
   0,
   0,
   0,
   0};
   Double_t _felx3203[26] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3203[26] = {
   0,
   0,
   0,
   0,
   0.005598579,
   0.01489827,
   0.03359799,
   0.05225787,
   0.05554189,
   0.05259789,
   0.05484141,
   0.05308279,
   0.05120213,
   0.05281028,
   0.0522037,
   0.05243427,
   0.05312054,
   0.05526938,
   0.05128609,
   0.04530682,
   0.03106844,
   0.01037303,
   0,
   0,
   0,
   0};
   Double_t _fehx3203[26] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3203[26] = {
   14.32707,
   0.104647,
   0.02284182,
   0.01091381,
   0.01143275,
   0.01899283,
   0.03708261,
   0.05552941,
   0.05871713,
   0.05572977,
   0.0579473,
   0.05620139,
   0.0543205,
   0.05595484,
   0.05529625,
   0.05555107,
   0.05623106,
   0.05843396,
   0.05455241,
   0.0487917,
   0.03495971,
   0.01562047,
   0.01081244,
   0.02300897,
   0.106896,
   20.88264};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3203,_fy3203,_felx3203,_fehx3203,_fely3203,_fehy3203);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3203 = new TH1F("Graph_Graph3203","",100,-100,100);
   Graph_Graph3203->SetMinimum(0);
   Graph_Graph3203->SetMaximum(1.5);
   Graph_Graph3203->SetDirectory(0);
   Graph_Graph3203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3203->SetLineColor(ci);
   Graph_Graph3203->GetXaxis()->SetRange(1,100);
   Graph_Graph3203->GetXaxis()->CenterTitle(true);
   Graph_Graph3203->GetXaxis()->SetLabelFont(42);
   Graph_Graph3203->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3203->GetXaxis()->SetTitleFont(42);
   Graph_Graph3203->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3203->GetYaxis()->CenterTitle(true);
   Graph_Graph3203->GetYaxis()->SetLabelFont(42);
   Graph_Graph3203->GetYaxis()->SetTitleFont(42);
   Graph_Graph3203->GetZaxis()->SetLabelFont(42);
   Graph_Graph3203->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3203->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3203);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.129771,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__608 = new TH2D("ThetaY_vs_Y_mI5_0__608","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(7890,20);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(7916,2615);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(7942,11977);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(7968,25066);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(7994,34286);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8020,40722);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8046,44862);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8072,47087);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8098,48440);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8124,49134);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8150,49508);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8176,49332);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8202,49363);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8228,48937);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8254,49751);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8280,49369);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8306,49457);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8332,48603);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8358,47176);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8384,44416);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8410,40523);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8436,34094);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8462,25301);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8488,11890);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8514,2560);
   ThetaY_vs_Y_mI5_0__608->SetBinContent(8540,14);
   ThetaY_vs_Y_mI5_0__608->SetEntries(904503);
   ThetaY_vs_Y_mI5_0__608->SetContour(20);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(1,2487.55);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(2,4975.1);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(3,7462.65);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(4,9950.2);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(5,12437.75);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(6,14925.3);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(7,17412.85);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(8,19900.4);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(9,22387.95);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(10,24875.5);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(11,27363.05);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(12,29850.6);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(13,32338.15);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(14,34825.7);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(15,37313.25);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(16,39800.8);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(17,42288.35);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(18,44775.9);
   ThetaY_vs_Y_mI5_0__608->SetContourLevel(19,47263.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__608->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__608->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__608->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__608->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__608->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__608->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__608->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__608->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__608->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__608->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__608->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__608->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__608->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__608->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__608->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__608->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-5_0","Reco vertices","lpf");
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
