void S12S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06658919,125,1.265194);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__837 = new TH1D("S12S18_ThetaY_0_5__837","",630,-1575,1575);
   S12S18_ThetaY_0_5__837->SetBinContent(307,0.001196172);
   S12S18_ThetaY_0_5__837->SetBinContent(308,0.03827751);
   S12S18_ThetaY_0_5__837->SetBinContent(309,0.2655502);
   S12S18_ThetaY_0_5__837->SetBinContent(310,0.7200957);
   S12S18_ThetaY_0_5__837->SetBinContent(311,0.8851675);
   S12S18_ThetaY_0_5__837->SetBinContent(312,0.9007177);
   S12S18_ThetaY_0_5__837->SetBinContent(313,0.937799);
   S12S18_ThetaY_0_5__837->SetBinContent(314,0.9258373);
   S12S18_ThetaY_0_5__837->SetBinContent(315,0.8947368);
   S12S18_ThetaY_0_5__837->SetBinContent(316,0.9294258);
   S12S18_ThetaY_0_5__837->SetBinContent(317,0.9389952);
   S12S18_ThetaY_0_5__837->SetBinContent(318,1);
   S12S18_ThetaY_0_5__837->SetBinContent(319,0.8444976);
   S12S18_ThetaY_0_5__837->SetBinContent(320,0.7344498);
   S12S18_ThetaY_0_5__837->SetBinContent(321,0.3145933);
   S12S18_ThetaY_0_5__837->SetBinContent(322,0.04665072);
   S12S18_ThetaY_0_5__837->SetBinContent(323,0.001196172);
   S12S18_ThetaY_0_5__837->SetBinError(307,0.001196172);
   S12S18_ThetaY_0_5__837->SetBinError(308,0.006766572);
   S12S18_ThetaY_0_5__837->SetBinError(309,0.01782257);
   S12S18_ThetaY_0_5__837->SetBinError(310,0.02934891);
   S12S18_ThetaY_0_5__837->SetBinError(311,0.0325394);
   S12S18_ThetaY_0_5__837->SetBinError(312,0.03282398);
   S12S18_ThetaY_0_5__837->SetBinError(313,0.03349282);
   S12S18_ThetaY_0_5__837->SetBinError(314,0.03327854);
   S12S18_ThetaY_0_5__837->SetBinError(315,0.03271482);
   S12S18_ThetaY_0_5__837->SetBinError(316,0.03334297);
   S12S18_ThetaY_0_5__837->SetBinError(317,0.03351418);
   S12S18_ThetaY_0_5__837->SetBinError(318,0.03458572);
   S12S18_ThetaY_0_5__837->SetBinError(319,0.03178309);
   S12S18_ThetaY_0_5__837->SetBinError(320,0.02963998);
   S12S18_ThetaY_0_5__837->SetBinError(321,0.01939865);
   S12S18_ThetaY_0_5__837->SetBinError(322,0.007470093);
   S12S18_ThetaY_0_5__837->SetBinError(323,0.001196172);
   S12S18_ThetaY_0_5__837->SetMinimum(0);
   S12S18_ThetaY_0_5__837->SetMaximum(1.132016);
   S12S18_ThetaY_0_5__837->SetEntries(8677);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__837->SetLineColor(ci);
   S12S18_ThetaY_0_5__837->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__837->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__837->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__837->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__837->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__837->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__837->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__837->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__837->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__837->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__837->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__837->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__837->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__837->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__837->Draw("AE");
   
   TH1D *ThetaY_0_5__838 = new TH1D("ThetaY_0_5__838","",630,-1575,1575);
   ThetaY_0_5__838->SetBinContent(305,7.345245e-05);
   ThetaY_0_5__838->SetBinContent(306,0.05229814);
   ThetaY_0_5__838->SetBinContent(307,0.3065538);
   ThetaY_0_5__838->SetBinContent(308,0.579852);
   ThetaY_0_5__838->SetBinContent(309,0.7587638);
   ThetaY_0_5__838->SetBinContent(310,0.8666471);
   ThetaY_0_5__838->SetBinContent(311,0.9341866);
   ThetaY_0_5__838->SetBinContent(312,0.9945645);
   ThetaY_0_5__838->SetBinContent(313,1.014085);
   ThetaY_0_5__838->SetBinContent(314,1.029106);
   ThetaY_0_5__838->SetBinContent(315,1.027086);
   ThetaY_0_5__838->SetBinContent(316,1.026314);
   ThetaY_0_5__838->SetBinContent(317,1.020952);
   ThetaY_0_5__838->SetBinContent(318,1);
   ThetaY_0_5__838->SetBinContent(319,0.986044);
   ThetaY_0_5__838->SetBinContent(320,0.9456819);
   ThetaY_0_5__838->SetBinContent(321,0.866996);
   ThetaY_0_5__838->SetBinContent(322,0.7572764);
   ThetaY_0_5__838->SetBinContent(323,0.5856731);
   ThetaY_0_5__838->SetBinContent(324,0.3043686);
   ThetaY_0_5__838->SetBinContent(325,0.05240832);
   ThetaY_0_5__838->SetBinContent(326,3.672622e-05);
   ThetaY_0_5__838->SetBinError(305,3.672622e-05);
   ThetaY_0_5__838->SetBinError(306,0.0009799779);
   ThetaY_0_5__838->SetBinError(307,0.002372611);
   ThetaY_0_5__838->SetBinError(308,0.00326311);
   ThetaY_0_5__838->SetBinError(309,0.003732729);
   ThetaY_0_5__838->SetBinError(310,0.003989278);
   ThetaY_0_5__838->SetBinError(311,0.004141808);
   ThetaY_0_5__838->SetBinError(312,0.004273558);
   ThetaY_0_5__838->SetBinError(313,0.004315292);
   ThetaY_0_5__838->SetBinError(314,0.004347135);
   ThetaY_0_5__838->SetBinError(315,0.004342866);
   ThetaY_0_5__838->SetBinError(316,0.004341235);
   ThetaY_0_5__838->SetBinError(317,0.00432988);
   ThetaY_0_5__838->SetBinError(318,0.00428522);
   ThetaY_0_5__838->SetBinError(319,0.004255213);
   ThetaY_0_5__838->SetBinError(320,0.004167213);
   ThetaY_0_5__838->SetBinError(321,0.003990081);
   ThetaY_0_5__838->SetBinError(322,0.003729068);
   ThetaY_0_5__838->SetBinError(323,0.003279448);
   ThetaY_0_5__838->SetBinError(324,0.002364139);
   ThetaY_0_5__838->SetBinError(325,0.0009810096);
   ThetaY_0_5__838->SetBinError(326,2.596936e-05);
   ThetaY_0_5__838->SetEntries(822789);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__838->SetLineColor(ci);
   ThetaY_0_5__838->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__838->SetMarkerColor(ci);
   ThetaY_0_5__838->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__838->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__838->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__838->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__838->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__838->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__838->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__838->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__838->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__838->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__838->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__838->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__838->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__838->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__838->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__838->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__838->Draw("AEsame");
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
   
   Double_t _fx3280[22] = {
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
   Double_t _fy3280[22] = {
   0,
   0,
   0.003901998,
   0.06601256,
   0.3499775,
   0.8308984,
   0.9475275,
   0.9056403,
   0.9247741,
   0.8996525,
   0.8711415,
   0.9055957,
   0.9197249,
   1,
   0.8564502,
   0.7766351,
   0.3628544,
   0.06160329,
   0.002042389,
   0,
   0,
   0};
   Double_t _felx3280[22] = {
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
   Double_t _fely3280[22] = {
   0,
   0,
   0.00322795,
   0.01161388,
   0.02353395,
   0.03407038,
   0.03507596,
   0.03322433,
   0.03325388,
   0.03255257,
   0.03205692,
   0.0327058,
   0.03304999,
   0.03484291,
   0.03243616,
   0.03151985,
   0.0224223,
   0.009826467,
   0.001689569,
   0,
   0,
   0};
   Double_t _fehx3280[22] = {
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
   Double_t _fehy3280[22] = {
   38.07291,
   0.04212178,
   0.008973634,
   0.01386237,
   0.02517291,
   0.03549766,
   0.03639981,
   0.03446678,
   0.03447234,
   0.0337529,
   0.03325945,
   0.03390946,
   0.03426014,
   0.03607928,
   0.03368914,
   0.03282645,
   0.02385311,
   0.01153477,
   0.004696771,
   0.007235639,
   0.0420332,
   98.39862};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3280,_fy3280,_felx3280,_fehx3280,_fely3280,_fehy3280);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3280 = new TH1F("Graph_Graph3280","",100,-100,100);
   Graph_Graph3280->SetMinimum(0);
   Graph_Graph3280->SetMaximum(1.5);
   Graph_Graph3280->SetDirectory(0);
   Graph_Graph3280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3280->SetLineColor(ci);
   Graph_Graph3280->GetXaxis()->SetRange(1,100);
   Graph_Graph3280->GetXaxis()->CenterTitle(true);
   Graph_Graph3280->GetXaxis()->SetLabelFont(42);
   Graph_Graph3280->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3280->GetXaxis()->SetTitleFont(42);
   Graph_Graph3280->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3280->GetYaxis()->CenterTitle(true);
   Graph_Graph3280->GetYaxis()->SetLabelFont(42);
   Graph_Graph3280->GetYaxis()->SetTitleFont(42);
   Graph_Graph3280->GetZaxis()->SetLabelFont(42);
   Graph_Graph3280->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3280->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3280);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.132016,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__839 = new TH2D("ThetaY_vs_Y_0_5__839","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__839->SetBinContent(7943,4);
   ThetaY_vs_Y_0_5__839->SetBinContent(7969,2848);
   ThetaY_vs_Y_0_5__839->SetBinContent(7995,16694);
   ThetaY_vs_Y_0_5__839->SetBinContent(8021,31577);
   ThetaY_vs_Y_0_5__839->SetBinContent(8047,41320);
   ThetaY_vs_Y_0_5__839->SetBinContent(8073,47195);
   ThetaY_vs_Y_0_5__839->SetBinContent(8099,50873);
   ThetaY_vs_Y_0_5__839->SetBinContent(8125,54161);
   ThetaY_vs_Y_0_5__839->SetBinContent(8151,55224);
   ThetaY_vs_Y_0_5__839->SetBinContent(8177,56042);
   ThetaY_vs_Y_0_5__839->SetBinContent(8203,55932);
   ThetaY_vs_Y_0_5__839->SetBinContent(8229,55890);
   ThetaY_vs_Y_0_5__839->SetBinContent(8255,55598);
   ThetaY_vs_Y_0_5__839->SetBinContent(8281,54457);
   ThetaY_vs_Y_0_5__839->SetBinContent(8307,53697);
   ThetaY_vs_Y_0_5__839->SetBinContent(8333,51499);
   ThetaY_vs_Y_0_5__839->SetBinContent(8359,47214);
   ThetaY_vs_Y_0_5__839->SetBinContent(8385,41239);
   ThetaY_vs_Y_0_5__839->SetBinContent(8411,31894);
   ThetaY_vs_Y_0_5__839->SetBinContent(8437,16575);
   ThetaY_vs_Y_0_5__839->SetBinContent(8463,2854);
   ThetaY_vs_Y_0_5__839->SetBinContent(8489,2);
   ThetaY_vs_Y_0_5__839->SetEntries(822789);
   ThetaY_vs_Y_0_5__839->SetContour(20);
   ThetaY_vs_Y_0_5__839->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__839->SetContourLevel(1,2802.1);
   ThetaY_vs_Y_0_5__839->SetContourLevel(2,5604.2);
   ThetaY_vs_Y_0_5__839->SetContourLevel(3,8406.3);
   ThetaY_vs_Y_0_5__839->SetContourLevel(4,11208.4);
   ThetaY_vs_Y_0_5__839->SetContourLevel(5,14010.5);
   ThetaY_vs_Y_0_5__839->SetContourLevel(6,16812.6);
   ThetaY_vs_Y_0_5__839->SetContourLevel(7,19614.7);
   ThetaY_vs_Y_0_5__839->SetContourLevel(8,22416.8);
   ThetaY_vs_Y_0_5__839->SetContourLevel(9,25218.9);
   ThetaY_vs_Y_0_5__839->SetContourLevel(10,28021);
   ThetaY_vs_Y_0_5__839->SetContourLevel(11,30823.1);
   ThetaY_vs_Y_0_5__839->SetContourLevel(12,33625.2);
   ThetaY_vs_Y_0_5__839->SetContourLevel(13,36427.3);
   ThetaY_vs_Y_0_5__839->SetContourLevel(14,39229.4);
   ThetaY_vs_Y_0_5__839->SetContourLevel(15,42031.5);
   ThetaY_vs_Y_0_5__839->SetContourLevel(16,44833.6);
   ThetaY_vs_Y_0_5__839->SetContourLevel(17,47635.7);
   ThetaY_vs_Y_0_5__839->SetContourLevel(18,50437.8);
   ThetaY_vs_Y_0_5__839->SetContourLevel(19,53239.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__839->SetLineColor(ci);
   ThetaY_vs_Y_0_5__839->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__839->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__839->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__839->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__839->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__839->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__839->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__839->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__839->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__839->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__839->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__839->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__839->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__839->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__839->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_0_5","Reco vertices","lpf");
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
