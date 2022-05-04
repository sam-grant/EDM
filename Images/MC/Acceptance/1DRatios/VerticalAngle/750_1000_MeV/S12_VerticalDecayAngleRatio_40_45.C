void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0690416,125,1.31179);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__576 = new TH1D("S12_ThetaY_40_45__576","",630,-1575,1575);
   S12_ThetaY_40_45__576->SetBinContent(306,0.06666667);
   S12_ThetaY_40_45__576->SetBinContent(307,0.3333333);
   S12_ThetaY_40_45__576->SetBinContent(308,0.4);
   S12_ThetaY_40_45__576->SetBinContent(309,0.6);
   S12_ThetaY_40_45__576->SetBinContent(310,0.4);
   S12_ThetaY_40_45__576->SetBinContent(311,0.6);
   S12_ThetaY_40_45__576->SetBinContent(312,0.4);
   S12_ThetaY_40_45__576->SetBinContent(313,0.8666667);
   S12_ThetaY_40_45__576->SetBinContent(314,1);
   S12_ThetaY_40_45__576->SetBinContent(315,0.2);
   S12_ThetaY_40_45__576->SetBinError(306,0.06666667);
   S12_ThetaY_40_45__576->SetBinError(307,0.1490712);
   S12_ThetaY_40_45__576->SetBinError(308,0.1632993);
   S12_ThetaY_40_45__576->SetBinError(309,0.2);
   S12_ThetaY_40_45__576->SetBinError(310,0.1632993);
   S12_ThetaY_40_45__576->SetBinError(311,0.2);
   S12_ThetaY_40_45__576->SetBinError(312,0.1632993);
   S12_ThetaY_40_45__576->SetBinError(313,0.2403701);
   S12_ThetaY_40_45__576->SetBinError(314,0.2581989);
   S12_ThetaY_40_45__576->SetBinError(315,0.1154701);
   S12_ThetaY_40_45__576->SetMinimum(0);
   S12_ThetaY_40_45__576->SetMaximum(1.173707);
   S12_ThetaY_40_45__576->SetEntries(73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__576->SetLineColor(ci);
   S12_ThetaY_40_45__576->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__576->SetMarkerColor(ci);
   S12_ThetaY_40_45__576->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__576->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__576->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__576->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__576->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__576->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__576->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__576->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__576->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__576->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__576->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__576->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__576->Draw("AE");
   
   TH1D *ThetaY_40_45__577 = new TH1D("ThetaY_40_45__577","",630,-1575,1575);
   ThetaY_40_45__577->SetBinContent(303,0.0007283321);
   ThetaY_40_45__577->SetBinContent(304,0.03641661);
   ThetaY_40_45__577->SetBinContent(305,0.2563729);
   ThetaY_40_45__577->SetBinContent(306,0.5222141);
   ThetaY_40_45__577->SetBinContent(307,0.7436271);
   ThetaY_40_45__577->SetBinContent(308,0.8528769);
   ThetaY_40_45__577->SetBinContent(309,0.9373634);
   ThetaY_40_45__577->SetBinContent(310,1.007283);
   ThetaY_40_45__577->SetBinContent(311,1.018937);
   ThetaY_40_45__577->SetBinContent(312,1.029133);
   ThetaY_40_45__577->SetBinContent(313,0.989075);
   ThetaY_40_45__577->SetBinContent(314,1);
   ThetaY_40_45__577->SetBinContent(315,1.019665);
   ThetaY_40_45__577->SetBinContent(316,1.0437);
   ThetaY_40_45__577->SetBinContent(317,1.048798);
   ThetaY_40_45__577->SetBinContent(318,1.067007);
   ThetaY_40_45__577->SetBinContent(319,1.025492);
   ThetaY_40_45__577->SetBinContent(320,1.009468);
   ThetaY_40_45__577->SetBinContent(321,0.9701384);
   ThetaY_40_45__577->SetBinContent(322,0.9045885);
   ThetaY_40_45__577->SetBinContent(323,0.7997087);
   ThetaY_40_45__577->SetBinContent(324,0.6868172);
   ThetaY_40_45__577->SetBinContent(325,0.5061908);
   ThetaY_40_45__577->SetBinContent(326,0.2716679);
   ThetaY_40_45__577->SetBinContent(327,0.05025492);
   ThetaY_40_45__577->SetBinError(303,0.0007283321);
   ThetaY_40_45__577->SetBinError(304,0.005150086);
   ThetaY_40_45__577->SetBinError(305,0.01366472);
   ThetaY_40_45__577->SetBinError(306,0.01950244);
   ThetaY_40_45__577->SetBinError(307,0.02327246);
   ThetaY_40_45__577->SetBinError(308,0.02492344);
   ThetaY_40_45__577->SetBinError(309,0.02612876);
   ThetaY_40_45__577->SetBinError(310,0.02708573);
   ThetaY_40_45__577->SetBinError(311,0.02724196);
   ThetaY_40_45__577->SetBinError(312,0.02737793);
   ThetaY_40_45__577->SetBinError(313,0.0268398);
   ThetaY_40_45__577->SetBinError(314,0.02698763);
   ThetaY_40_45__577->SetBinError(315,0.02725169);
   ThetaY_40_45__577->SetBinError(316,0.027571);
   ThetaY_40_45__577->SetBinError(317,0.02763826);
   ThetaY_40_45__577->SetBinError(318,0.02787714);
   ThetaY_40_45__577->SetBinError(319,0.02732944);
   ThetaY_40_45__577->SetBinError(320,0.02711509);
   ThetaY_40_45__577->SetBinError(321,0.02658163);
   ThetaY_40_45__577->SetBinError(322,0.0256679);
   ThetaY_40_45__577->SetBinError(323,0.02413407);
   ThetaY_40_45__577->SetBinError(324,0.02236584);
   ThetaY_40_45__577->SetBinError(325,0.01920091);
   ThetaY_40_45__577->SetBinError(326,0.01406643);
   ThetaY_40_45__577->SetBinError(327,0.006049981);
   ThetaY_40_45__577->SetEntries(25809);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__577->SetLineColor(ci);
   ThetaY_40_45__577->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__577->SetMarkerColor(ci);
   ThetaY_40_45__577->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__577->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__577->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__577->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__577->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__577->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__577->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__577->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__577->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__577->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__577->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__577->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__577->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__577->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__577->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__577->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__577->Draw("AEsame");
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
   
   Double_t _fx3193[25] = {
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
   57.5};
   Double_t _fy3193[25] = {
   0,
   0,
   0,
   0.1276616,
   0.4482533,
   0.4690009,
   0.6400932,
   0.3971077,
   0.5888492,
   0.3886766,
   0.8762396,
   1,
   0.1961429,
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
   0};
   Double_t _felx3193[25] = {
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
   Double_t _fely3193[25] = {
   0,
   0,
   0,
   0.1056356,
   0.194011,
   0.1864392,
   0.2100016,
   0.1578071,
   0.1931411,
   0.1544506,
   0.2409295,
   0.2565973,
   0.1068317,
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
   0};
   Double_t _fehx3193[25] = {
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
   Double_t _fehy3193[25] = {
   485.3989,
   3.433113,
   0.4799895,
   0.2942371,
   0.3044859,
   0.2812681,
   0.2938121,
   0.2380037,
   0.2701807,
   0.2329335,
   0.3186921,
   0.3329826,
   0.1911972,
   0.1176714,
   0.117099,
   0.1150995,
   0.1197621,
   0.1216644,
   0.1266001,
   0.1357808,
   0.1536031,
   0.1788753,
   0.2427888,
   0.4528992,
   2.475117};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3193,_fy3193,_felx3193,_fehx3193,_fely3193,_fehy3193);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3193 = new TH1F("Graph_Graph3193","",100,-100,100);
   Graph_Graph3193->SetMinimum(0);
   Graph_Graph3193->SetMaximum(1.5);
   Graph_Graph3193->SetDirectory(0);
   Graph_Graph3193->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3193->SetLineColor(ci);
   Graph_Graph3193->GetXaxis()->SetRange(1,100);
   Graph_Graph3193->GetXaxis()->CenterTitle(true);
   Graph_Graph3193->GetXaxis()->SetLabelFont(42);
   Graph_Graph3193->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3193->GetXaxis()->SetTitleFont(42);
   Graph_Graph3193->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3193->GetYaxis()->CenterTitle(true);
   Graph_Graph3193->GetYaxis()->SetLabelFont(42);
   Graph_Graph3193->GetYaxis()->SetTitleFont(42);
   Graph_Graph3193->GetZaxis()->SetLabelFont(42);
   Graph_Graph3193->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3193->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3193);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.173707,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__578 = new TH2D("ThetaY_vs_Y_40_45__578","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__578->SetBinContent(7899,1);
   ThetaY_vs_Y_40_45__578->SetBinContent(7925,50);
   ThetaY_vs_Y_40_45__578->SetBinContent(7951,352);
   ThetaY_vs_Y_40_45__578->SetBinContent(7977,717);
   ThetaY_vs_Y_40_45__578->SetBinContent(8003,1021);
   ThetaY_vs_Y_40_45__578->SetBinContent(8029,1171);
   ThetaY_vs_Y_40_45__578->SetBinContent(8055,1287);
   ThetaY_vs_Y_40_45__578->SetBinContent(8081,1383);
   ThetaY_vs_Y_40_45__578->SetBinContent(8107,1399);
   ThetaY_vs_Y_40_45__578->SetBinContent(8133,1413);
   ThetaY_vs_Y_40_45__578->SetBinContent(8159,1358);
   ThetaY_vs_Y_40_45__578->SetBinContent(8185,1373);
   ThetaY_vs_Y_40_45__578->SetBinContent(8211,1400);
   ThetaY_vs_Y_40_45__578->SetBinContent(8237,1433);
   ThetaY_vs_Y_40_45__578->SetBinContent(8263,1440);
   ThetaY_vs_Y_40_45__578->SetBinContent(8289,1465);
   ThetaY_vs_Y_40_45__578->SetBinContent(8315,1408);
   ThetaY_vs_Y_40_45__578->SetBinContent(8341,1386);
   ThetaY_vs_Y_40_45__578->SetBinContent(8367,1332);
   ThetaY_vs_Y_40_45__578->SetBinContent(8393,1242);
   ThetaY_vs_Y_40_45__578->SetBinContent(8419,1098);
   ThetaY_vs_Y_40_45__578->SetBinContent(8445,943);
   ThetaY_vs_Y_40_45__578->SetBinContent(8471,695);
   ThetaY_vs_Y_40_45__578->SetBinContent(8497,373);
   ThetaY_vs_Y_40_45__578->SetBinContent(8523,69);
   ThetaY_vs_Y_40_45__578->SetEntries(25809);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__578->SetLineColor(ci);
   ThetaY_vs_Y_40_45__578->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__578->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__578->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__578->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__578->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__578->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__578->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__578->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__578->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__578->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__578->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__578->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__578->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__578->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__578->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
