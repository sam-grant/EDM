void S12_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06523675,125,1.239498);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__717 = new TH1D("S12_ThetaY_mI10_mI5__717","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__717->SetBinContent(309,0.005194805);
   S12_ThetaY_mI10_mI5__717->SetBinContent(310,0.1532468);
   S12_ThetaY_mI10_mI5__717->SetBinContent(311,0.5714286);
   S12_ThetaY_mI10_mI5__717->SetBinContent(312,0.9480519);
   S12_ThetaY_mI10_mI5__717->SetBinContent(313,0.9298701);
   S12_ThetaY_mI10_mI5__717->SetBinContent(314,0.9480519);
   S12_ThetaY_mI10_mI5__717->SetBinContent(315,1);
   S12_ThetaY_mI10_mI5__717->SetBinContent(316,0.9766234);
   S12_ThetaY_mI10_mI5__717->SetBinContent(317,0.9012987);
   S12_ThetaY_mI10_mI5__717->SetBinContent(318,0.8493506);
   S12_ThetaY_mI10_mI5__717->SetBinContent(319,0.9064935);
   S12_ThetaY_mI10_mI5__717->SetBinContent(320,0.7376623);
   S12_ThetaY_mI10_mI5__717->SetBinContent(321,0.7012987);
   S12_ThetaY_mI10_mI5__717->SetBinContent(322,0.4545455);
   S12_ThetaY_mI10_mI5__717->SetBinContent(323,0.1116883);
   S12_ThetaY_mI10_mI5__717->SetBinContent(324,0.01038961);
   S12_ThetaY_mI10_mI5__717->SetBinError(309,0.003673282);
   S12_ThetaY_mI10_mI5__717->SetBinError(310,0.01995103);
   S12_ThetaY_mI10_mI5__717->SetBinError(311,0.03852571);
   S12_ThetaY_mI10_mI5__717->SetBinError(312,0.04962331);
   S12_ThetaY_mI10_mI5__717->SetBinError(313,0.04914516);
   S12_ThetaY_mI10_mI5__717->SetBinError(314,0.04962331);
   S12_ThetaY_mI10_mI5__717->SetBinError(315,0.05096472);
   S12_ThetaY_mI10_mI5__717->SetBinError(316,0.05036551);
   S12_ThetaY_mI10_mI5__717->SetBinError(317,0.04838425);
   S12_ThetaY_mI10_mI5__717->SetBinError(318,0.0469692);
   S12_ThetaY_mI10_mI5__717->SetBinError(319,0.04852348);
   S12_ThetaY_mI10_mI5__717->SetBinError(320,0.04377221);
   S12_ThetaY_mI10_mI5__717->SetBinError(321,0.04267968);
   S12_ThetaY_mI10_mI5__717->SetBinError(322,0.03436041);
   S12_ThetaY_mI10_mI5__717->SetBinError(323,0.01703231);
   S12_ThetaY_mI10_mI5__717->SetBinError(324,0.005194805);
   S12_ThetaY_mI10_mI5__717->SetMinimum(0);
   S12_ThetaY_mI10_mI5__717->SetMaximum(1.109025);
   S12_ThetaY_mI10_mI5__717->SetEntries(3929);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__717->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__717->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__717->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__717->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__717->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__717->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__717->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__717->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__717->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__717->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__717->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__717->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__717->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__717->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__717->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__717->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__718 = new TH1D("ThetaY_mI10_mI5__718","",630,-1575,1575);
   ThetaY_mI10_mI5__718->SetBinContent(305,9.837291e-05);
   ThetaY_mI10_mI5__718->SetBinContent(306,0.04786826);
   ThetaY_mI10_mI5__718->SetBinContent(307,0.3001948);
   ThetaY_mI10_mI5__718->SetBinContent(308,0.5834497);
   ThetaY_mI10_mI5__718->SetBinContent(309,0.7401184);
   ThetaY_mI10_mI5__718->SetBinContent(310,0.8439609);
   ThetaY_mI10_mI5__718->SetBinContent(311,0.918075);
   ThetaY_mI10_mI5__718->SetBinContent(312,0.9572865);
   ThetaY_mI10_mI5__718->SetBinContent(313,0.9737935);
   ThetaY_mI10_mI5__718->SetBinContent(314,0.9851063);
   ThetaY_mI10_mI5__718->SetBinContent(315,1);
   ThetaY_mI10_mI5__718->SetBinContent(316,1.008204);
   ThetaY_mI10_mI5__718->SetBinContent(317,0.9983473);
   ThetaY_mI10_mI5__718->SetBinContent(318,0.9840636);
   ThetaY_mI10_mI5__718->SetBinContent(319,0.9605918);
   ThetaY_mI10_mI5__718->SetBinContent(320,0.9170323);
   ThetaY_mI10_mI5__718->SetBinContent(321,0.8436067);
   ThetaY_mI10_mI5__718->SetBinContent(322,0.7418695);
   ThetaY_mI10_mI5__718->SetBinContent(323,0.5709761);
   ThetaY_mI10_mI5__718->SetBinContent(324,0.3008834);
   ThetaY_mI10_mI5__718->SetBinContent(325,0.04991442);
   ThetaY_mI10_mI5__718->SetBinContent(326,3.934916e-05);
   ThetaY_mI10_mI5__718->SetBinError(305,4.39937e-05);
   ThetaY_mI10_mI5__718->SetBinError(306,0.0009704576);
   ThetaY_mI10_mI5__718->SetBinError(307,0.002430269);
   ThetaY_mI10_mI5__718->SetBinError(308,0.003388086);
   ThetaY_mI10_mI5__718->SetBinError(309,0.003815956);
   ThetaY_mI10_mI5__718->SetBinError(310,0.004074872);
   ThetaY_mI10_mI5__718->SetBinError(311,0.004250029);
   ThetaY_mI10_mI5__718->SetBinError(312,0.00433984);
   ThetaY_mI10_mI5__718->SetBinError(313,0.004377097);
   ThetaY_mI10_mI5__718->SetBinError(314,0.004402449);
   ThetaY_mI10_mI5__718->SetBinError(315,0.004435604);
   ThetaY_mI10_mI5__718->SetBinError(316,0.004453762);
   ThetaY_mI10_mI5__718->SetBinError(317,0.004431937);
   ThetaY_mI10_mI5__718->SetBinError(318,0.004400118);
   ThetaY_mI10_mI5__718->SetBinError(319,0.004347326);
   ThetaY_mI10_mI5__718->SetBinError(320,0.004247614);
   ThetaY_mI10_mI5__718->SetBinError(321,0.004074016);
   ThetaY_mI10_mI5__718->SetBinError(322,0.003820468);
   ThetaY_mI10_mI5__718->SetBinError(323,0.003351674);
   ThetaY_mI10_mI5__718->SetBinError(324,0.002433055);
   ThetaY_mI10_mI5__718->SetBinError(325,0.000990982);
   ThetaY_mI10_mI5__718->SetBinError(326,2.782406e-05);
   ThetaY_mI10_mI5__718->SetEntries(748452);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__718->SetLineColor(ci);
   ThetaY_mI10_mI5__718->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__718->SetMarkerColor(ci);
   ThetaY_mI10_mI5__718->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__718->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__718->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__718->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__718->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__718->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__718->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__718->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__718->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__718->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__718->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__718->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__718->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__718->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__718->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__718->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__718->Draw("AEsame");
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
   
   Double_t _fx3240[22] = {
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
   Double_t _fy3240[22] = {
   0,
   0,
   0,
   0,
   0.007018884,
   0.1815804,
   0.6224203,
   0.9903534,
   0.9548946,
   0.9623854,
   1,
   0.9686761,
   0.9027907,
   0.8631055,
   0.9436823,
   0.8044017,
   0.83131,
   0.6127027,
   0.1956094,
   0.03453036,
   0,
   0};
   Double_t _felx3240[22] = {
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
   Double_t _fely3240[22] = {
   0,
   0,
   0,
   0,
   0.004533624,
   0.0235885,
   0.04202997,
   0.0520072,
   0.0506258,
   0.05053319,
   0.05113468,
   0.05011583,
   0.04860589,
   0.04786067,
   0.0506696,
   0.04784898,
   0.05071895,
   0.04637836,
   0.0297352,
   0.01652742,
   0,
   0};
   Double_t _fehx3240[22] = {
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
   Double_t _fehy3240[22] = {
   58.76622,
   0.09993436,
   0.0159302,
   0.008196118,
   0.009257986,
   0.02687221,
   0.04496964,
   0.05481386,
   0.0533848,
   0.05325998,
   0.05381983,
   0.05277927,
   0.05129702,
   0.05059219,
   0.05346721,
   0.05078464,
   0.05391322,
   0.05003055,
   0.03464066,
   0.02730914,
   0.09583624,
   199.423};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3240,_fy3240,_felx3240,_fehx3240,_fely3240,_fehy3240);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3240 = new TH1F("Graph_Graph3240","",100,-100,100);
   Graph_Graph3240->SetMinimum(0);
   Graph_Graph3240->SetMaximum(1.5);
   Graph_Graph3240->SetDirectory(0);
   Graph_Graph3240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3240->SetLineColor(ci);
   Graph_Graph3240->GetXaxis()->SetRange(1,100);
   Graph_Graph3240->GetXaxis()->CenterTitle(true);
   Graph_Graph3240->GetXaxis()->SetLabelFont(42);
   Graph_Graph3240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3240->GetXaxis()->SetTitleFont(42);
   Graph_Graph3240->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3240->GetYaxis()->CenterTitle(true);
   Graph_Graph3240->GetYaxis()->SetLabelFont(42);
   Graph_Graph3240->GetYaxis()->SetTitleFont(42);
   Graph_Graph3240->GetZaxis()->SetLabelFont(42);
   Graph_Graph3240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3240->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3240);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.109025,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__719 = new TH2D("ThetaY_vs_Y_mI10_mI5__719","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(7941,5);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(7967,2433);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(7993,15258);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8019,29655);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8045,37618);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8071,42896);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8097,46663);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8123,48656);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8149,49495);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8175,50070);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8201,50827);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8227,51244);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8253,50743);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8279,50017);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8305,48824);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8331,46610);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8357,42878);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8383,37707);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8409,29021);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8435,15293);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8461,2537);
   ThetaY_vs_Y_mI10_mI5__719->SetBinContent(8487,2);
   ThetaY_vs_Y_mI10_mI5__719->SetEntries(748452);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__719->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__719->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__719->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__719->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__719->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__719->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__719->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__719->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__719->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__719->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__719->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__719->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__719->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__719->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__719->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__719->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
