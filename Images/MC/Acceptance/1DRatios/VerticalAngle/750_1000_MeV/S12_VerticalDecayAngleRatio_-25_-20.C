void S12_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-0.07331342,125,1.392955);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__537 = new TH1D("S12_ThetaY_mI25_mI20__537","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__537->SetBinContent(311,0.008333333);
   S12_ThetaY_mI25_mI20__537->SetBinContent(312,0.25);
   S12_ThetaY_mI25_mI20__537->SetBinContent(313,0.8666667);
   S12_ThetaY_mI25_mI20__537->SetBinContent(314,1);
   S12_ThetaY_mI25_mI20__537->SetBinContent(315,0.8666667);
   S12_ThetaY_mI25_mI20__537->SetBinContent(316,0.9);
   S12_ThetaY_mI25_mI20__537->SetBinContent(317,0.975);
   S12_ThetaY_mI25_mI20__537->SetBinContent(318,1.116667);
   S12_ThetaY_mI25_mI20__537->SetBinContent(319,1.108333);
   S12_ThetaY_mI25_mI20__537->SetBinContent(320,0.8916667);
   S12_ThetaY_mI25_mI20__537->SetBinContent(321,0.9);
   S12_ThetaY_mI25_mI20__537->SetBinContent(322,1);
   S12_ThetaY_mI25_mI20__537->SetBinContent(323,0.8833333);
   S12_ThetaY_mI25_mI20__537->SetBinContent(324,0.6166667);
   S12_ThetaY_mI25_mI20__537->SetBinContent(325,0.4166667);
   S12_ThetaY_mI25_mI20__537->SetBinContent(326,0.1583333);
   S12_ThetaY_mI25_mI20__537->SetBinContent(327,0.01666667);
   S12_ThetaY_mI25_mI20__537->SetBinError(311,0.008333333);
   S12_ThetaY_mI25_mI20__537->SetBinError(312,0.04564355);
   S12_ThetaY_mI25_mI20__537->SetBinError(313,0.08498366);
   S12_ThetaY_mI25_mI20__537->SetBinError(314,0.09128709);
   S12_ThetaY_mI25_mI20__537->SetBinError(315,0.08498366);
   S12_ThetaY_mI25_mI20__537->SetBinError(316,0.08660254);
   S12_ThetaY_mI25_mI20__537->SetBinError(317,0.09013878);
   S12_ThetaY_mI25_mI20__537->SetBinError(318,0.09646531);
   S12_ThetaY_mI25_mI20__537->SetBinError(319,0.09610469);
   S12_ThetaY_mI25_mI20__537->SetBinError(320,0.08620067);
   S12_ThetaY_mI25_mI20__537->SetBinError(321,0.08660254);
   S12_ThetaY_mI25_mI20__537->SetBinError(322,0.09128709);
   S12_ThetaY_mI25_mI20__537->SetBinError(323,0.08579692);
   S12_ThetaY_mI25_mI20__537->SetBinError(324,0.07168604);
   S12_ThetaY_mI25_mI20__537->SetBinError(325,0.05892557);
   S12_ThetaY_mI25_mI20__537->SetBinError(326,0.03632416);
   S12_ThetaY_mI25_mI20__537->SetBinError(327,0.01178511);
   S12_ThetaY_mI25_mI20__537->SetMinimum(0);
   S12_ThetaY_mI25_mI20__537->SetMaximum(1.246328);
   S12_ThetaY_mI25_mI20__537->SetEntries(1437);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__537->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__537->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__537->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__537->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__537->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__537->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__537->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__537->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__537->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__537->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__537->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__537->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__537->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__537->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__537->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__537->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__538 = new TH1D("ThetaY_mI25_mI20__538","",630,-1575,1575);
   ThetaY_mI25_mI20__538->SetBinContent(303,0.0004251959);
   ThetaY_mI25_mI20__538->SetBinContent(304,0.05952743);
   ThetaY_mI25_mI20__538->SetBinContent(305,0.2687238);
   ThetaY_mI25_mI20__538->SetBinContent(306,0.5581607);
   ThetaY_mI25_mI20__538->SetBinContent(307,0.7835145);
   ThetaY_mI25_mI20__538->SetBinContent(308,0.9203669);
   ThetaY_mI25_mI20__538->SetBinContent(309,1.007775);
   ThetaY_mI25_mI20__538->SetBinContent(310,1.071615);
   ThetaY_mI25_mI20__538->SetBinContent(311,1.105509);
   ThetaY_mI25_mI20__538->SetBinContent(312,1.127984);
   ThetaY_mI25_mI20__538->SetBinContent(313,1.118994);
   ThetaY_mI25_mI20__538->SetBinContent(314,1.124279);
   ThetaY_mI25_mI20__538->SetBinContent(315,1.116504);
   ThetaY_mI25_mI20__538->SetBinContent(316,1.133026);
   ThetaY_mI25_mI20__538->SetBinContent(317,1.111887);
   ThetaY_mI25_mI20__538->SetBinContent(318,1.126648);
   ThetaY_mI25_mI20__538->SetBinContent(319,1.110976);
   ThetaY_mI25_mI20__538->SetBinContent(320,1.096823);
   ThetaY_mI25_mI20__538->SetBinContent(321,1.082488);
   ThetaY_mI25_mI20__538->SetBinContent(322,1);
   ThetaY_mI25_mI20__538->SetBinContent(323,0.9258944);
   ThetaY_mI25_mI20__538->SetBinContent(324,0.7732491);
   ThetaY_mI25_mI20__538->SetBinContent(325,0.5636275);
   ThetaY_mI25_mI20__538->SetBinContent(326,0.2681771);
   ThetaY_mI25_mI20__538->SetBinContent(327,0.05977039);
   ThetaY_mI25_mI20__538->SetBinError(303,0.0001607089);
   ThetaY_mI25_mI20__538->SetBinError(304,0.001901534);
   ThetaY_mI25_mI20__538->SetBinError(305,0.00404016);
   ThetaY_mI25_mI20__538->SetBinError(306,0.00582271);
   ThetaY_mI25_mI20__538->SetBinError(307,0.006898728);
   ThetaY_mI25_mI20__538->SetBinError(308,0.007476976);
   ThetaY_mI25_mI20__538->SetBinError(309,0.007823972);
   ThetaY_mI25_mI20__538->SetBinError(310,0.008067982);
   ThetaY_mI25_mI20__538->SetBinError(311,0.00819458);
   ThetaY_mI25_mI20__538->SetBinError(312,0.008277458);
   ThetaY_mI25_mI20__538->SetBinError(313,0.008244407);
   ThetaY_mI25_mI20__538->SetBinError(314,0.008263851);
   ThetaY_mI25_mI20__538->SetBinError(315,0.008235227);
   ThetaY_mI25_mI20__538->SetBinError(316,0.008295936);
   ThetaY_mI25_mI20__538->SetBinError(317,0.008218185);
   ThetaY_mI25_mI20__538->SetBinError(318,0.008272553);
   ThetaY_mI25_mI20__538->SetBinError(319,0.008214817);
   ThetaY_mI25_mI20__538->SetBinError(320,0.008162324);
   ThetaY_mI25_mI20__538->SetBinError(321,0.008108809);
   ThetaY_mI25_mI20__538->SetBinError(322,0.007793733);
   ThetaY_mI25_mI20__538->SetBinError(323,0.007499395);
   ThetaY_mI25_mI20__538->SetBinError(324,0.006853386);
   ThetaY_mI25_mI20__538->SetBinError(325,0.005851155);
   ThetaY_mI25_mI20__538->SetBinError(326,0.004036048);
   ThetaY_mI25_mI20__538->SetBinError(327,0.001905411);
   ThetaY_mI25_mI20__538->SetEntries(337754);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__538->SetLineColor(ci);
   ThetaY_mI25_mI20__538->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__538->SetMarkerColor(ci);
   ThetaY_mI25_mI20__538->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__538->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__538->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__538->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__538->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__538->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__538->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__538->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__538->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__538->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__538->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__538->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__538->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__538->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__538->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__538->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__538->Draw("AEsame");
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
   
   Double_t _fx3180[25] = {
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
   Double_t _fy3180[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007538004,
   0.2216344,
   0.7745051,
   0.8894592,
   0.7762327,
   0.7943334,
   0.8768875,
   0.991141,
   0.9976212,
   0.8129539,
   0.831418,
   1,
   0.9540325,
   0.7975007,
   0.7392589,
   0.5904058,
   0.2788449};
   Double_t _felx3180[25] = {
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
   Double_t _fely3180[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00623585,
   0.04026935,
   0.07603593,
   0.08134317,
   0.07620601,
   0.0765349,
   0.08120844,
   0.08582071,
   0.08670714,
   0.07869828,
   0.08011871,
   0.0914887,
   0.09283563,
   0.09276256,
   0.1044711,
   0.1345209,
   0.1802228};
   Double_t _fehx3180[25] = {
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
   Double_t _fehy3180[25] = {
   41.27147,
   0.2579696,
   0.05710339,
   0.02748919,
   0.0195822,
   0.01667029,
   0.01522433,
   0.01431731,
   0.01733541,
   0.04834936,
   0.08389855,
   0.08915036,
   0.08408627,
   0.08429448,
   0.08910631,
   0.0935992,
   0.09459701,
   0.08671694,
   0.08824301,
   0.100274,
   0.1023476,
   0.1042435,
   0.1204049,
   0.1693604,
   0.3686439};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3180,_fy3180,_felx3180,_fehx3180,_fely3180,_fehy3180);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3180 = new TH1F("Graph_Graph3180","",100,-100,100);
   Graph_Graph3180->SetMinimum(0);
   Graph_Graph3180->SetMaximum(1.5);
   Graph_Graph3180->SetDirectory(0);
   Graph_Graph3180->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3180->SetLineColor(ci);
   Graph_Graph3180->GetXaxis()->SetRange(1,100);
   Graph_Graph3180->GetXaxis()->CenterTitle(true);
   Graph_Graph3180->GetXaxis()->SetLabelFont(42);
   Graph_Graph3180->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3180->GetXaxis()->SetTitleFont(42);
   Graph_Graph3180->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3180->GetYaxis()->CenterTitle(true);
   Graph_Graph3180->GetYaxis()->SetLabelFont(42);
   Graph_Graph3180->GetYaxis()->SetTitleFont(42);
   Graph_Graph3180->GetZaxis()->SetLabelFont(42);
   Graph_Graph3180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3180->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3180);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.246328,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__539 = new TH2D("ThetaY_vs_Y_mI25_mI20__539","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(7886,7);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(7912,980);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(7938,4424);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(7964,9189);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(7990,12899);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8016,15152);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8042,16591);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8068,17642);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8094,18200);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8120,18570);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8146,18422);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8172,18509);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8198,18381);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8224,18653);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8250,18305);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8276,18548);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8302,18290);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8328,18057);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8354,17821);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8380,16463);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8406,15243);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8432,12730);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8458,9279);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8484,4415);
   ThetaY_vs_Y_mI25_mI20__539->SetBinContent(8510,984);
   ThetaY_vs_Y_mI25_mI20__539->SetEntries(337754);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__539->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__539->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__539->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__539->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__539->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__539->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__539->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__539->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__539->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__539->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__539->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__539->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__539->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__539->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__539->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__539->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
