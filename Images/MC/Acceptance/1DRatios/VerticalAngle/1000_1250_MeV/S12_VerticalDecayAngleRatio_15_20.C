void S12_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0703567,125,1.336777);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__732 = new TH1D("S12_ThetaY_15_20__732","",630,-1575,1575);
   S12_ThetaY_15_20__732->SetBinContent(306,0.01321586);
   S12_ThetaY_15_20__732->SetBinContent(307,0.1762115);
   S12_ThetaY_15_20__732->SetBinContent(308,0.4625551);
   S12_ThetaY_15_20__732->SetBinContent(309,0.6740088);
   S12_ThetaY_15_20__732->SetBinContent(310,0.8237885);
   S12_ThetaY_15_20__732->SetBinContent(311,1);
   S12_ThetaY_15_20__732->SetBinContent(312,0.7929515);
   S12_ThetaY_15_20__732->SetBinContent(313,0.9339207);
   S12_ThetaY_15_20__732->SetBinContent(314,1.061674);
   S12_ThetaY_15_20__732->SetBinContent(315,0.9162996);
   S12_ThetaY_15_20__732->SetBinContent(316,0.9162996);
   S12_ThetaY_15_20__732->SetBinContent(317,0.7885463);
   S12_ThetaY_15_20__732->SetBinContent(318,0.8546256);
   S12_ThetaY_15_20__732->SetBinContent(319,0.2687225);
   S12_ThetaY_15_20__732->SetBinContent(320,0.03524229);
   S12_ThetaY_15_20__732->SetBinError(306,0.00763018);
   S12_ThetaY_15_20__732->SetBinError(307,0.02786148);
   S12_ThetaY_15_20__732->SetBinError(308,0.04514075);
   S12_ThetaY_15_20__732->SetBinError(309,0.05449038);
   S12_ThetaY_15_20__732->SetBinError(310,0.06024138);
   S12_ThetaY_15_20__732->SetBinError(311,0.06637233);
   S12_ThetaY_15_20__732->SetBinError(312,0.05910312);
   S12_ThetaY_15_20__732->SetBinError(313,0.06414194);
   S12_ThetaY_15_20__732->SetBinError(314,0.06838843);
   S12_ThetaY_15_20__732->SetBinError(315,0.06353394);
   S12_ThetaY_15_20__732->SetBinError(316,0.06353394);
   S12_ThetaY_15_20__732->SetBinError(317,0.05893871);
   S12_ThetaY_15_20__732->SetBinError(318,0.06135854);
   S12_ThetaY_15_20__732->SetBinError(319,0.03440639);
   S12_ThetaY_15_20__732->SetBinError(320,0.01246003);
   S12_ThetaY_15_20__732->SetMinimum(0);
   S12_ThetaY_15_20__732->SetMaximum(1.196064);
   S12_ThetaY_15_20__732->SetEntries(2206);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__732->SetLineColor(ci);
   S12_ThetaY_15_20__732->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__732->SetMarkerColor(ci);
   S12_ThetaY_15_20__732->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__732->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__732->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__732->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__732->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__732->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__732->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__732->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__732->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__732->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__732->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__732->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__732->Draw("AE");
   
   TH1D *ThetaY_15_20__733 = new TH1D("ThetaY_15_20__733","",630,-1575,1575);
   ThetaY_15_20__733->SetBinContent(305,0.0001417133);
   ThetaY_15_20__733->SetBinContent(306,0.0540282);
   ThetaY_15_20__733->SetBinContent(307,0.3284206);
   ThetaY_15_20__733->SetBinContent(308,0.6274711);
   ThetaY_15_20__733->SetBinContent(309,0.8092185);
   ThetaY_15_20__733->SetBinContent(310,0.9338199);
   ThetaY_15_20__733->SetBinContent(311,1);
   ThetaY_15_20__733->SetBinContent(312,1.048608);
   ThetaY_15_20__733->SetBinContent(313,1.082761);
   ThetaY_15_20__733->SetBinContent(314,1.08269);
   ThetaY_15_20__733->SetBinContent(315,1.084851);
   ThetaY_15_20__733->SetBinContent(316,1.086162);
   ThetaY_15_20__733->SetBinContent(317,1.087331);
   ThetaY_15_20__733->SetBinContent(318,1.070573);
   ThetaY_15_20__733->SetBinContent(319,1.043116);
   ThetaY_15_20__733->SetBinContent(320,0.999752);
   ThetaY_15_20__733->SetBinContent(321,0.9341033);
   ThetaY_15_20__733->SetBinContent(322,0.8075533);
   ThetaY_15_20__733->SetBinContent(323,0.6170198);
   ThetaY_15_20__733->SetBinContent(324,0.3240983);
   ThetaY_15_20__733->SetBinContent(325,0.05636647);
   ThetaY_15_20__733->SetBinContent(326,7.085666e-05);
   ThetaY_15_20__733->SetBinError(305,7.085666e-05);
   ThetaY_15_20__733->SetBinError(306,0.00138352);
   ThetaY_15_20__733->SetBinError(307,0.003411069);
   ThetaY_15_20__733->SetBinError(308,0.004714897);
   ThetaY_15_20__733->SetBinError(309,0.005354368);
   ThetaY_15_20__733->SetBinError(310,0.005751841);
   ThetaY_15_20__733->SetBinError(311,0.00595217);
   ThetaY_15_20__733->SetBinError(312,0.006095114);
   ThetaY_15_20__733->SetBinError(313,0.006193577);
   ThetaY_15_20__733->SetBinError(314,0.006193374);
   ThetaY_15_20__733->SetBinError(315,0.006199553);
   ThetaY_15_20__733->SetBinError(316,0.006203297);
   ThetaY_15_20__733->SetBinError(317,0.006206635);
   ThetaY_15_20__733->SetBinError(318,0.006158622);
   ThetaY_15_20__733->SetBinError(319,0.006079134);
   ThetaY_15_20__733->SetBinError(320,0.005951432);
   ThetaY_15_20__733->SetBinError(321,0.005752714);
   ThetaY_15_20__733->SetBinError(322,0.005348856);
   ThetaY_15_20__733->SetBinError(323,0.004675466);
   ThetaY_15_20__733->SetBinError(324,0.003388549);
   ThetaY_15_20__733->SetBinError(325,0.001413142);
   ThetaY_15_20__733->SetBinError(326,5.010322e-05);
   ThetaY_15_20__733->SetEntries(453822);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__733->SetLineColor(ci);
   ThetaY_15_20__733->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__733->SetMarkerColor(ci);
   ThetaY_15_20__733->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__733->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__733->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__733->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__733->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__733->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__733->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__733->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__733->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__733->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__733->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__733->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__733->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__733->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__733->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__733->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__733->Draw("AEsame");
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
   
   Double_t _fx3245[22] = {
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
   52.5};
   Double_t _fy3245[22] = {
   0,
   0.2446104,
   0.536542,
   0.7371735,
   0.8329133,
   0.8821707,
   1,
   0.7561947,
   0.8625367,
   0.9805894,
   0.8446318,
   0.8436125,
   0.7252128,
   0.7982878,
   0.2576151,
   0.03525103,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3245[22] = {
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
   Double_t _fely3245[22] = {
   0,
   0.1332216,
   0.08465628,
   0.07203667,
   0.06748689,
   0.06468005,
   0.06658845,
   0.05648109,
   0.05939654,
   0.06336889,
   0.05871508,
   0.05864398,
   0.05431113,
   0.05744692,
   0.03292708,
   0.0122001,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3245[22] = {
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
   Double_t _fehy3245[22] = {
   72.67618,
   0.2384013,
   0.09920795,
   0.07944969,
   0.07319303,
   0.06960821,
   0.07117983,
   0.060868,
   0.06363677,
   0.06760478,
   0.06294785,
   0.0628716,
   0.0585411,
   0.06173961,
   0.0374321,
   0.01738747,
   0.00868267,
   0.01004337,
   0.01314489,
   0.02502649,
   0.1439672,
   187.83};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3245,_fy3245,_felx3245,_fehx3245,_fely3245,_fehy3245);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3245 = new TH1F("Graph_Graph3245","",100,-100,100);
   Graph_Graph3245->SetMinimum(0);
   Graph_Graph3245->SetMaximum(1.5);
   Graph_Graph3245->SetDirectory(0);
   Graph_Graph3245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3245->SetLineColor(ci);
   Graph_Graph3245->GetXaxis()->SetRange(1,100);
   Graph_Graph3245->GetXaxis()->CenterTitle(true);
   Graph_Graph3245->GetXaxis()->SetLabelFont(42);
   Graph_Graph3245->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3245->GetXaxis()->SetTitleFont(42);
   Graph_Graph3245->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3245->GetYaxis()->CenterTitle(true);
   Graph_Graph3245->GetYaxis()->SetLabelFont(42);
   Graph_Graph3245->GetYaxis()->SetTitleFont(42);
   Graph_Graph3245->GetZaxis()->SetLabelFont(42);
   Graph_Graph3245->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3245->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3245);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.196064,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__734 = new TH2D("ThetaY_vs_Y_15_20__734","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__734->SetBinContent(7946,4);
   ThetaY_vs_Y_15_20__734->SetBinContent(7972,1525);
   ThetaY_vs_Y_15_20__734->SetBinContent(7998,9270);
   ThetaY_vs_Y_15_20__734->SetBinContent(8024,17711);
   ThetaY_vs_Y_15_20__734->SetBinContent(8050,22841);
   ThetaY_vs_Y_15_20__734->SetBinContent(8076,26358);
   ThetaY_vs_Y_15_20__734->SetBinContent(8102,28226);
   ThetaY_vs_Y_15_20__734->SetBinContent(8128,29598);
   ThetaY_vs_Y_15_20__734->SetBinContent(8154,30562);
   ThetaY_vs_Y_15_20__734->SetBinContent(8180,30560);
   ThetaY_vs_Y_15_20__734->SetBinContent(8206,30621);
   ThetaY_vs_Y_15_20__734->SetBinContent(8232,30658);
   ThetaY_vs_Y_15_20__734->SetBinContent(8258,30691);
   ThetaY_vs_Y_15_20__734->SetBinContent(8284,30218);
   ThetaY_vs_Y_15_20__734->SetBinContent(8310,29443);
   ThetaY_vs_Y_15_20__734->SetBinContent(8336,28219);
   ThetaY_vs_Y_15_20__734->SetBinContent(8362,26366);
   ThetaY_vs_Y_15_20__734->SetBinContent(8388,22794);
   ThetaY_vs_Y_15_20__734->SetBinContent(8414,17416);
   ThetaY_vs_Y_15_20__734->SetBinContent(8440,9148);
   ThetaY_vs_Y_15_20__734->SetBinContent(8466,1591);
   ThetaY_vs_Y_15_20__734->SetBinContent(8492,2);
   ThetaY_vs_Y_15_20__734->SetEntries(453822);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__734->SetLineColor(ci);
   ThetaY_vs_Y_15_20__734->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__734->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__734->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__734->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__734->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__734->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__734->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__734->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__734->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__734->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__734->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__734->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__734->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__734->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__734->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
