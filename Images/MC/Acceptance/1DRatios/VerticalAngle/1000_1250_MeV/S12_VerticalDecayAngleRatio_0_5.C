void S12_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06658919,125,1.265194);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__723 = new TH1D("S12_ThetaY_0_5__723","",630,-1575,1575);
   S12_ThetaY_0_5__723->SetBinContent(308,0.05072464);
   S12_ThetaY_0_5__723->SetBinContent(309,0.2826087);
   S12_ThetaY_0_5__723->SetBinContent(310,0.7028986);
   S12_ThetaY_0_5__723->SetBinContent(311,0.9154589);
   S12_ThetaY_0_5__723->SetBinContent(312,0.9323671);
   S12_ThetaY_0_5__723->SetBinContent(313,0.9347826);
   S12_ThetaY_0_5__723->SetBinContent(314,0.9299517);
   S12_ThetaY_0_5__723->SetBinContent(315,0.9057971);
   S12_ThetaY_0_5__723->SetBinContent(316,0.8937198);
   S12_ThetaY_0_5__723->SetBinContent(317,0.9299517);
   S12_ThetaY_0_5__723->SetBinContent(318,1);
   S12_ThetaY_0_5__723->SetBinContent(319,0.8623188);
   S12_ThetaY_0_5__723->SetBinContent(320,0.705314);
   S12_ThetaY_0_5__723->SetBinContent(321,0.2971014);
   S12_ThetaY_0_5__723->SetBinContent(322,0.04589372);
   S12_ThetaY_0_5__723->SetBinContent(323,0.002415459);
   S12_ThetaY_0_5__723->SetBinError(308,0.01106902);
   S12_ThetaY_0_5__723->SetBinError(309,0.02612718);
   S12_ThetaY_0_5__723->SetBinError(310,0.04120464);
   S12_ThetaY_0_5__723->SetBinError(311,0.04702397);
   S12_ThetaY_0_5__723->SetBinError(312,0.04745624);
   S12_ThetaY_0_5__723->SetBinError(313,0.04751767);
   S12_ThetaY_0_5__723->SetBinError(314,0.04739473);
   S12_ThetaY_0_5__723->SetBinError(315,0.04677516);
   S12_ThetaY_0_5__723->SetBinError(316,0.04646228);
   S12_ThetaY_0_5__723->SetBinError(317,0.04739473);
   S12_ThetaY_0_5__723->SetBinError(318,0.04914732);
   S12_ThetaY_0_5__723->SetBinError(319,0.04563875);
   S12_ThetaY_0_5__723->SetBinError(320,0.04127538);
   S12_ThetaY_0_5__723->SetBinError(321,0.02678874);
   S12_ThetaY_0_5__723->SetBinError(322,0.01052874);
   S12_ThetaY_0_5__723->SetBinError(323,0.002415459);
   S12_ThetaY_0_5__723->SetMinimum(0);
   S12_ThetaY_0_5__723->SetMaximum(1.132016);
   S12_ThetaY_0_5__723->SetEntries(4302);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__723->SetLineColor(ci);
   S12_ThetaY_0_5__723->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__723->SetMarkerColor(ci);
   S12_ThetaY_0_5__723->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__723->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__723->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__723->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__723->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__723->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__723->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__723->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__723->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__723->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__723->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__723->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__723->Draw("AE");
   
   TH1D *ThetaY_0_5__724 = new TH1D("ThetaY_0_5__724","",630,-1575,1575);
   ThetaY_0_5__724->SetBinContent(305,7.345245e-05);
   ThetaY_0_5__724->SetBinContent(306,0.05229814);
   ThetaY_0_5__724->SetBinContent(307,0.3065538);
   ThetaY_0_5__724->SetBinContent(308,0.579852);
   ThetaY_0_5__724->SetBinContent(309,0.7587638);
   ThetaY_0_5__724->SetBinContent(310,0.8666471);
   ThetaY_0_5__724->SetBinContent(311,0.9341866);
   ThetaY_0_5__724->SetBinContent(312,0.9945645);
   ThetaY_0_5__724->SetBinContent(313,1.014085);
   ThetaY_0_5__724->SetBinContent(314,1.029106);
   ThetaY_0_5__724->SetBinContent(315,1.027086);
   ThetaY_0_5__724->SetBinContent(316,1.026314);
   ThetaY_0_5__724->SetBinContent(317,1.020952);
   ThetaY_0_5__724->SetBinContent(318,1);
   ThetaY_0_5__724->SetBinContent(319,0.986044);
   ThetaY_0_5__724->SetBinContent(320,0.9456819);
   ThetaY_0_5__724->SetBinContent(321,0.866996);
   ThetaY_0_5__724->SetBinContent(322,0.7572764);
   ThetaY_0_5__724->SetBinContent(323,0.5856731);
   ThetaY_0_5__724->SetBinContent(324,0.3043686);
   ThetaY_0_5__724->SetBinContent(325,0.05240832);
   ThetaY_0_5__724->SetBinContent(326,3.672622e-05);
   ThetaY_0_5__724->SetBinError(305,3.672622e-05);
   ThetaY_0_5__724->SetBinError(306,0.0009799779);
   ThetaY_0_5__724->SetBinError(307,0.002372611);
   ThetaY_0_5__724->SetBinError(308,0.00326311);
   ThetaY_0_5__724->SetBinError(309,0.003732729);
   ThetaY_0_5__724->SetBinError(310,0.003989278);
   ThetaY_0_5__724->SetBinError(311,0.004141808);
   ThetaY_0_5__724->SetBinError(312,0.004273558);
   ThetaY_0_5__724->SetBinError(313,0.004315292);
   ThetaY_0_5__724->SetBinError(314,0.004347135);
   ThetaY_0_5__724->SetBinError(315,0.004342866);
   ThetaY_0_5__724->SetBinError(316,0.004341235);
   ThetaY_0_5__724->SetBinError(317,0.00432988);
   ThetaY_0_5__724->SetBinError(318,0.00428522);
   ThetaY_0_5__724->SetBinError(319,0.004255213);
   ThetaY_0_5__724->SetBinError(320,0.004167213);
   ThetaY_0_5__724->SetBinError(321,0.003990081);
   ThetaY_0_5__724->SetBinError(322,0.003729068);
   ThetaY_0_5__724->SetBinError(323,0.003279448);
   ThetaY_0_5__724->SetBinError(324,0.002364139);
   ThetaY_0_5__724->SetBinError(325,0.0009810096);
   ThetaY_0_5__724->SetBinError(326,2.596936e-05);
   ThetaY_0_5__724->SetEntries(822789);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__724->SetLineColor(ci);
   ThetaY_0_5__724->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__724->SetMarkerColor(ci);
   ThetaY_0_5__724->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__724->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__724->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__724->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__724->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__724->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__724->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__724->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__724->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__724->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__724->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__724->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__724->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__724->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__724->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__724->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__724->Draw("AEsame");
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
   
   Double_t _fx3242[22] = {
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
   Double_t _fy3242[22] = {
   0,
   0,
   0,
   0.08747859,
   0.3724594,
   0.8110551,
   0.979953,
   0.9374627,
   0.9217995,
   0.9036505,
   0.88191,
   0.8708051,
   0.9108669,
   1,
   0.8745237,
   0.7458258,
   0.3426792,
   0.06060366,
   0.004124244,
   0,
   0,
   0};
   Double_t _felx3242[22] = {
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
   Double_t _fely3242[22] = {
   0,
   0,
   0,
   0.01894225,
   0.03443286,
   0.04766336,
   0.0505012,
   0.04786417,
   0.04700088,
   0.04619176,
   0.04567329,
   0.0453997,
   0.0465619,
   0.04931343,
   0.04641615,
   0.04374425,
   0.03089614,
   0.01378308,
   0.003411786,
   0,
   0,
   0};
   Double_t _fehx3242[22] = {
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
   Double_t _fehy3242[22] = {
   76.88153,
   0.08505751,
   0.01450694,
   0.02356744,
   0.03777425,
   0.0505513,
   0.05317435,
   0.0503736,
   0.04946162,
   0.04861638,
   0.04810308,
   0.04783151,
   0.04900604,
   0.0518083,
   0.04894853,
   0.0463893,
   0.03381645,
   0.0173416,
   0.0094843,
   0.0146111,
   0.08487863,
   198.6987};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3242,_fy3242,_felx3242,_fehx3242,_fely3242,_fehy3242);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3242 = new TH1F("Graph_Graph3242","",100,-100,100);
   Graph_Graph3242->SetMinimum(0);
   Graph_Graph3242->SetMaximum(1.5);
   Graph_Graph3242->SetDirectory(0);
   Graph_Graph3242->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3242->SetLineColor(ci);
   Graph_Graph3242->GetXaxis()->SetRange(1,100);
   Graph_Graph3242->GetXaxis()->CenterTitle(true);
   Graph_Graph3242->GetXaxis()->SetLabelFont(42);
   Graph_Graph3242->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3242->GetXaxis()->SetTitleFont(42);
   Graph_Graph3242->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3242->GetYaxis()->CenterTitle(true);
   Graph_Graph3242->GetYaxis()->SetLabelFont(42);
   Graph_Graph3242->GetYaxis()->SetTitleFont(42);
   Graph_Graph3242->GetZaxis()->SetLabelFont(42);
   Graph_Graph3242->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3242->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3242);
   
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
   
   TH2D *ThetaY_vs_Y_0_5__725 = new TH2D("ThetaY_vs_Y_0_5__725","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__725->SetBinContent(7943,4);
   ThetaY_vs_Y_0_5__725->SetBinContent(7969,2848);
   ThetaY_vs_Y_0_5__725->SetBinContent(7995,16694);
   ThetaY_vs_Y_0_5__725->SetBinContent(8021,31577);
   ThetaY_vs_Y_0_5__725->SetBinContent(8047,41320);
   ThetaY_vs_Y_0_5__725->SetBinContent(8073,47195);
   ThetaY_vs_Y_0_5__725->SetBinContent(8099,50873);
   ThetaY_vs_Y_0_5__725->SetBinContent(8125,54161);
   ThetaY_vs_Y_0_5__725->SetBinContent(8151,55224);
   ThetaY_vs_Y_0_5__725->SetBinContent(8177,56042);
   ThetaY_vs_Y_0_5__725->SetBinContent(8203,55932);
   ThetaY_vs_Y_0_5__725->SetBinContent(8229,55890);
   ThetaY_vs_Y_0_5__725->SetBinContent(8255,55598);
   ThetaY_vs_Y_0_5__725->SetBinContent(8281,54457);
   ThetaY_vs_Y_0_5__725->SetBinContent(8307,53697);
   ThetaY_vs_Y_0_5__725->SetBinContent(8333,51499);
   ThetaY_vs_Y_0_5__725->SetBinContent(8359,47214);
   ThetaY_vs_Y_0_5__725->SetBinContent(8385,41239);
   ThetaY_vs_Y_0_5__725->SetBinContent(8411,31894);
   ThetaY_vs_Y_0_5__725->SetBinContent(8437,16575);
   ThetaY_vs_Y_0_5__725->SetBinContent(8463,2854);
   ThetaY_vs_Y_0_5__725->SetBinContent(8489,2);
   ThetaY_vs_Y_0_5__725->SetEntries(822789);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__725->SetLineColor(ci);
   ThetaY_vs_Y_0_5__725->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__725->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__725->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__725->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__725->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__725->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__725->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__725->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__725->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__725->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__725->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__725->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__725->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__725->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__725->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
