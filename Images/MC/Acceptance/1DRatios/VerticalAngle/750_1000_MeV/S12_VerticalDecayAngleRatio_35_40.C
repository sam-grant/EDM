void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.1235989,125,2.348378);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__573 = new TH1D("S12_ThetaY_35_40__573","",630,-1575,1575);
   S12_ThetaY_35_40__573->SetBinContent(304,0.04166667);
   S12_ThetaY_35_40__573->SetBinContent(305,0.125);
   S12_ThetaY_35_40__573->SetBinContent(306,1);
   S12_ThetaY_35_40__573->SetBinContent(307,0.5416667);
   S12_ThetaY_35_40__573->SetBinContent(308,0.7083333);
   S12_ThetaY_35_40__573->SetBinContent(309,0.6666667);
   S12_ThetaY_35_40__573->SetBinContent(310,1.25);
   S12_ThetaY_35_40__573->SetBinContent(311,1);
   S12_ThetaY_35_40__573->SetBinContent(312,1.291667);
   S12_ThetaY_35_40__573->SetBinContent(313,0.9583333);
   S12_ThetaY_35_40__573->SetBinContent(314,1.125);
   S12_ThetaY_35_40__573->SetBinContent(315,1.125);
   S12_ThetaY_35_40__573->SetBinContent(316,0.4166667);
   S12_ThetaY_35_40__573->SetBinContent(317,0.04166667);
   S12_ThetaY_35_40__573->SetBinError(304,0.04166667);
   S12_ThetaY_35_40__573->SetBinError(305,0.07216878);
   S12_ThetaY_35_40__573->SetBinError(306,0.2041241);
   S12_ThetaY_35_40__573->SetBinError(307,0.1502313);
   S12_ThetaY_35_40__573->SetBinError(308,0.1717961);
   S12_ThetaY_35_40__573->SetBinError(309,0.1666667);
   S12_ThetaY_35_40__573->SetBinError(310,0.2282177);
   S12_ThetaY_35_40__573->SetBinError(311,0.2041241);
   S12_ThetaY_35_40__573->SetBinError(312,0.2319902);
   S12_ThetaY_35_40__573->SetBinError(313,0.1998263);
   S12_ThetaY_35_40__573->SetBinError(314,0.2165064);
   S12_ThetaY_35_40__573->SetBinError(315,0.2165064);
   S12_ThetaY_35_40__573->SetBinError(316,0.1317616);
   S12_ThetaY_35_40__573->SetBinError(317,0.04166667);
   S12_ThetaY_35_40__573->SetMinimum(0);
   S12_ThetaY_35_40__573->SetMaximum(2.101181);
   S12_ThetaY_35_40__573->SetEntries(247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__573->SetLineColor(ci);
   S12_ThetaY_35_40__573->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__573->SetMarkerColor(ci);
   S12_ThetaY_35_40__573->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__573->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__573->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__573->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__573->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__573->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__573->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__573->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__573->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__573->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__573->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__573->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__573->Draw("AE");
   
   TH1D *ThetaY_35_40__574 = new TH1D("ThetaY_35_40__574","",630,-1575,1575);
   ThetaY_35_40__574->SetBinContent(304,0.09599589);
   ThetaY_35_40__574->SetBinContent(305,0.4722793);
   ThetaY_35_40__574->SetBinContent(306,1);
   ThetaY_35_40__574->SetBinContent(307,1.305441);
   ThetaY_35_40__574->SetBinContent(308,1.5);
   ThetaY_35_40__574->SetBinContent(309,1.685832);
   ThetaY_35_40__574->SetBinContent(310,1.819815);
   ThetaY_35_40__574->SetBinContent(311,1.870637);
   ThetaY_35_40__574->SetBinContent(312,1.884497);
   ThetaY_35_40__574->SetBinContent(313,1.908111);
   ThetaY_35_40__574->SetBinContent(314,1.85729);
   ThetaY_35_40__574->SetBinContent(315,1.864476);
   ThetaY_35_40__574->SetBinContent(316,1.892197);
   ThetaY_35_40__574->SetBinContent(317,1.909651);
   ThetaY_35_40__574->SetBinContent(318,1.884497);
   ThetaY_35_40__574->SetBinContent(319,1.910164);
   ThetaY_35_40__574->SetBinContent(320,1.87269);
   ThetaY_35_40__574->SetBinContent(321,1.771047);
   ThetaY_35_40__574->SetBinContent(322,1.676591);
   ThetaY_35_40__574->SetBinContent(323,1.516427);
   ThetaY_35_40__574->SetBinContent(324,1.299281);
   ThetaY_35_40__574->SetBinContent(325,0.9851129);
   ThetaY_35_40__574->SetBinContent(326,0.4604723);
   ThetaY_35_40__574->SetBinContent(327,0.09856263);
   ThetaY_35_40__574->SetBinContent(328,0.001026694);
   ThetaY_35_40__574->SetBinError(304,0.007019915);
   ThetaY_35_40__574->SetBinError(305,0.01557059);
   ThetaY_35_40__574->SetBinError(306,0.02265716);
   ThetaY_35_40__574->SetBinError(307,0.02588715);
   ThetaY_35_40__574->SetBinError(308,0.02774924);
   ThetaY_35_40__574->SetBinError(309,0.02941796);
   ThetaY_35_40__574->SetBinError(310,0.03056463);
   ThetaY_35_40__574->SetBinError(311,0.03098848);
   ThetaY_35_40__574->SetBinError(312,0.03110307);
   ThetaY_35_40__574->SetBinError(313,0.03129733);
   ThetaY_35_40__574->SetBinError(314,0.03087773);
   ThetaY_35_40__574->SetBinError(315,0.03093741);
   ThetaY_35_40__574->SetBinError(316,0.03116655);
   ThetaY_35_40__574->SetBinError(317,0.03130996);
   ThetaY_35_40__574->SetBinError(318,0.03110307);
   ThetaY_35_40__574->SetBinError(319,0.03131417);
   ThetaY_35_40__574->SetBinError(320,0.03100548);
   ThetaY_35_40__574->SetBinError(321,0.03015231);
   ThetaY_35_40__574->SetBinError(322,0.02933723);
   ThetaY_35_40__574->SetBinError(323,0.02790078);
   ThetaY_35_40__574->SetBinError(324,0.025826);
   ThetaY_35_40__574->SetBinError(325,0.02248788);
   ThetaY_35_40__574->SetBinError(326,0.01537472);
   ThetaY_35_40__574->SetBinError(327,0.007113145);
   ThetaY_35_40__574->SetBinError(328,0.0007259823);
   ThetaY_35_40__574->SetEntries(67288);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__574->SetLineColor(ci);
   ThetaY_35_40__574->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__574->SetMarkerColor(ci);
   ThetaY_35_40__574->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__574->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__574->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__574->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__574->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__574->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__574->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__574->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__574->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__574->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__574->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__574->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__574->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__574->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__574->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__574->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__574->Draw("AEsame");
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
   
   Double_t _fx3192[25] = {
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
   Double_t _fy3192[25] = {
   0.4340463,
   0.2646739,
   1,
   0.4149299,
   0.4722222,
   0.3954527,
   0.6868829,
   0.5345774,
   0.6854172,
   0.502242,
   0.6057214,
   0.6033866,
   0.2202026,
   0.021819,
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
   Double_t _felx3192[25] = {
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
   Double_t _fely3192[25] = {
   0.3594278,
   0.1442171,
   0.2038881,
   0.1138539,
   0.1137055,
   0.09804452,
   0.1252141,
   0.108697,
   0.122937,
   0.104266,
   0.1162611,
   0.1158114,
   0.06853875,
   0.01805061,
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
   Double_t _fehx3192[25] = {
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
   Double_t _fehy3192[25] = {
   1.006934,
   0.2582843,
   0.2505312,
   0.1504571,
   0.1450966,
   0.1260351,
   0.1504662,
   0.1334538,
   0.1472878,
   0.1285737,
   0.1410879,
   0.1405416,
   0.09414113,
   0.05019562,
   0.04071563,
   0.04016839,
   0.0409724,
   0.04332448,
   0.04576599,
   0.05060127,
   0.05906122,
   0.07790583,
   0.1667592,
   0.7820224,
   122.6081};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3192,_fy3192,_felx3192,_fehx3192,_fely3192,_fehy3192);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3192 = new TH1F("Graph_Graph3192","",100,-100,100);
   Graph_Graph3192->SetMinimum(0);
   Graph_Graph3192->SetMaximum(1.5);
   Graph_Graph3192->SetDirectory(0);
   Graph_Graph3192->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3192->SetLineColor(ci);
   Graph_Graph3192->GetXaxis()->SetRange(1,100);
   Graph_Graph3192->GetXaxis()->CenterTitle(true);
   Graph_Graph3192->GetXaxis()->SetLabelFont(42);
   Graph_Graph3192->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3192->GetXaxis()->SetTitleFont(42);
   Graph_Graph3192->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3192->GetYaxis()->CenterTitle(true);
   Graph_Graph3192->GetYaxis()->SetLabelFont(42);
   Graph_Graph3192->GetYaxis()->SetTitleFont(42);
   Graph_Graph3192->GetZaxis()->SetLabelFont(42);
   Graph_Graph3192->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3192->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3192);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.101181,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__575 = new TH2D("ThetaY_vs_Y_35_40__575","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__575->SetBinContent(7924,187);
   ThetaY_vs_Y_35_40__575->SetBinContent(7950,920);
   ThetaY_vs_Y_35_40__575->SetBinContent(7976,1948);
   ThetaY_vs_Y_35_40__575->SetBinContent(8002,2543);
   ThetaY_vs_Y_35_40__575->SetBinContent(8028,2922);
   ThetaY_vs_Y_35_40__575->SetBinContent(8054,3284);
   ThetaY_vs_Y_35_40__575->SetBinContent(8080,3545);
   ThetaY_vs_Y_35_40__575->SetBinContent(8106,3644);
   ThetaY_vs_Y_35_40__575->SetBinContent(8132,3671);
   ThetaY_vs_Y_35_40__575->SetBinContent(8158,3717);
   ThetaY_vs_Y_35_40__575->SetBinContent(8184,3618);
   ThetaY_vs_Y_35_40__575->SetBinContent(8210,3632);
   ThetaY_vs_Y_35_40__575->SetBinContent(8236,3686);
   ThetaY_vs_Y_35_40__575->SetBinContent(8262,3720);
   ThetaY_vs_Y_35_40__575->SetBinContent(8288,3671);
   ThetaY_vs_Y_35_40__575->SetBinContent(8314,3721);
   ThetaY_vs_Y_35_40__575->SetBinContent(8340,3648);
   ThetaY_vs_Y_35_40__575->SetBinContent(8366,3450);
   ThetaY_vs_Y_35_40__575->SetBinContent(8392,3266);
   ThetaY_vs_Y_35_40__575->SetBinContent(8418,2954);
   ThetaY_vs_Y_35_40__575->SetBinContent(8444,2531);
   ThetaY_vs_Y_35_40__575->SetBinContent(8470,1919);
   ThetaY_vs_Y_35_40__575->SetBinContent(8496,897);
   ThetaY_vs_Y_35_40__575->SetBinContent(8522,192);
   ThetaY_vs_Y_35_40__575->SetBinContent(8548,2);
   ThetaY_vs_Y_35_40__575->SetEntries(67288);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__575->SetLineColor(ci);
   ThetaY_vs_Y_35_40__575->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__575->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__575->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__575->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__575->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__575->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__575->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__575->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__575->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__575->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__575->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__575->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__575->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__575->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__575->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
