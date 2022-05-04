void S12_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.06544426,125,1.243441);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__564 = new TH1D("S12_ThetaY_20_25__564","",630,-1575,1575);
   S12_ThetaY_20_25__564->SetBinContent(304,0.006944444);
   S12_ThetaY_20_25__564->SetBinContent(305,0.1319444);
   S12_ThetaY_20_25__564->SetBinContent(306,0.2847222);
   S12_ThetaY_20_25__564->SetBinContent(307,0.5763889);
   S12_ThetaY_20_25__564->SetBinContent(308,0.7222222);
   S12_ThetaY_20_25__564->SetBinContent(309,0.7430556);
   S12_ThetaY_20_25__564->SetBinContent(310,0.8055556);
   S12_ThetaY_20_25__564->SetBinContent(311,0.7708333);
   S12_ThetaY_20_25__564->SetBinContent(312,0.7430556);
   S12_ThetaY_20_25__564->SetBinContent(313,1);
   S12_ThetaY_20_25__564->SetBinContent(314,0.8472222);
   S12_ThetaY_20_25__564->SetBinContent(315,0.8958333);
   S12_ThetaY_20_25__564->SetBinContent(316,0.7152778);
   S12_ThetaY_20_25__564->SetBinContent(317,0.8055556);
   S12_ThetaY_20_25__564->SetBinContent(318,0.6944444);
   S12_ThetaY_20_25__564->SetBinContent(319,0.1736111);
   S12_ThetaY_20_25__564->SetBinContent(320,0.006944444);
   S12_ThetaY_20_25__564->SetBinError(304,0.006944444);
   S12_ThetaY_20_25__564->SetBinError(305,0.03027013);
   S12_ThetaY_20_25__564->SetBinError(306,0.04446614);
   S12_ThetaY_20_25__564->SetBinError(307,0.0632669);
   S12_ThetaY_20_25__564->SetBinError(308,0.07081972);
   S12_ThetaY_20_25__564->SetBinError(309,0.07183389);
   S12_ThetaY_20_25__564->SetBinError(310,0.07479396);
   S12_ThetaY_20_25__564->SetBinError(311,0.07316426);
   S12_ThetaY_20_25__564->SetBinError(312,0.07183389);
   S12_ThetaY_20_25__564->SetBinError(313,0.08333333);
   S12_ThetaY_20_25__564->SetBinError(314,0.0767039);
   S12_ThetaY_20_25__564->SetBinError(315,0.07887373);
   S12_ThetaY_20_25__564->SetBinError(316,0.07047841);
   S12_ThetaY_20_25__564->SetBinError(317,0.07479396);
   S12_ThetaY_20_25__564->SetBinError(318,0.06944444);
   S12_ThetaY_20_25__564->SetBinError(319,0.03472222);
   S12_ThetaY_20_25__564->SetBinError(320,0.006944444);
   S12_ThetaY_20_25__564->SetMinimum(0);
   S12_ThetaY_20_25__564->SetMaximum(1.112552);
   S12_ThetaY_20_25__564->SetEntries(1429);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__564->SetLineColor(ci);
   S12_ThetaY_20_25__564->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__564->SetMarkerColor(ci);
   S12_ThetaY_20_25__564->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__564->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__564->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__564->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__564->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__564->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__564->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__564->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__564->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__564->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__564->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__564->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__564->Draw("AE");
   
   TH1D *ThetaY_20_25__565 = new TH1D("ThetaY_20_25__565","",630,-1575,1575);
   ThetaY_20_25__565->SetBinContent(303,0.0001630169);
   ThetaY_20_25__565->SetBinContent(304,0.05357822);
   ThetaY_20_25__565->SetBinContent(305,0.2365919);
   ThetaY_20_25__565->SetBinContent(306,0.5158941);
   ThetaY_20_25__565->SetBinContent(307,0.6993968);
   ThetaY_20_25__565->SetBinContent(308,0.8139434);
   ThetaY_20_25__565->SetBinContent(309,0.9026246);
   ThetaY_20_25__565->SetBinContent(310,0.9654404);
   ThetaY_20_25__565->SetBinContent(311,0.9789165);
   ThetaY_20_25__565->SetBinContent(312,0.9984242);
   ThetaY_20_25__565->SetBinContent(313,1);
   ThetaY_20_25__565->SetBinContent(314,0.9972287);
   ThetaY_20_25__565->SetBinContent(315,1.011411);
   ThetaY_20_25__565->SetBinContent(316,1.001141);
   ThetaY_20_25__565->SetBinContent(317,0.9845134);
   ThetaY_20_25__565->SetBinContent(318,1.002065);
   ThetaY_20_25__565->SetBinContent(319,1.005217);
   ThetaY_20_25__565->SetBinContent(320,0.9832636);
   ThetaY_20_25__565->SetBinContent(321,0.9554964);
   ThetaY_20_25__565->SetBinContent(322,0.9058306);
   ThetaY_20_25__565->SetBinContent(323,0.8070423);
   ThetaY_20_25__565->SetBinContent(324,0.6861925);
   ThetaY_20_25__565->SetBinContent(325,0.505135);
   ThetaY_20_25__565->SetBinContent(326,0.2402869);
   ThetaY_20_25__565->SetBinContent(327,0.05455632);
   ThetaY_20_25__565->SetBinContent(328,0.0003803728);
   ThetaY_20_25__565->SetBinError(303,9.411785e-05);
   ThetaY_20_25__565->SetBinError(304,0.001706278);
   ThetaY_20_25__565->SetBinError(305,0.003585548);
   ThetaY_20_25__565->SetBinError(306,0.005294635);
   ThetaY_20_25__565->SetBinError(307,0.006164779);
   ThetaY_20_25__565->SetBinError(308,0.006650477);
   ThetaY_20_25__565->SetBinError(309,0.007003405);
   ThetaY_20_25__565->SetBinError(310,0.007242999);
   ThetaY_20_25__565->SetBinError(311,0.007293374);
   ThetaY_20_25__565->SetBinError(312,0.007365686);
   ThetaY_20_25__565->SetBinError(313,0.007371497);
   ThetaY_20_25__565->SetBinError(314,0.007361276);
   ThetaY_20_25__565->SetBinError(315,0.007413436);
   ThetaY_20_25__565->SetBinError(316,0.007375702);
   ThetaY_20_25__565->SetBinError(317,0.007314194);
   ThetaY_20_25__565->SetBinError(318,0.007379104);
   ThetaY_20_25__565->SetBinError(319,0.007390699);
   ThetaY_20_25__565->SetBinError(320,0.00730955);
   ThetaY_20_25__565->SetBinError(321,0.007205601);
   ThetaY_20_25__565->SetBinError(322,0.007015832);
   ThetaY_20_25__565->SetBinError(323,0.006622224);
   ThetaY_20_25__565->SetBinError(324,0.006106307);
   ThetaY_20_25__565->SetBinError(325,0.005239133);
   ThetaY_20_25__565->SetBinError(326,0.003613439);
   ThetaY_20_25__565->SetBinError(327,0.001721782);
   ThetaY_20_25__565->SetBinError(328,0.0001437674);
   ThetaY_20_25__565->SetEntries(336862);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__565->SetLineColor(ci);
   ThetaY_20_25__565->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__565->SetMarkerColor(ci);
   ThetaY_20_25__565->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__565->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__565->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__565->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__565->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__565->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__565->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__565->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__565->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__565->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__565->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__565->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__565->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__565->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__565->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__565->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__565->Draw("AEsame");
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
   
   Double_t _fx3189[26] = {
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
   Double_t _fy3189[26] = {
   0,
   0.1296132,
   0.557688,
   0.5519005,
   0.8241228,
   0.8873126,
   0.8232166,
   0.8343918,
   0.7874352,
   0.7442283,
   1,
   0.8495766,
   0.8857262,
   0.7144625,
   0.8182271,
   0.6930135,
   0.1727102,
   0.007062648,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3189[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3189[26] = {
   0,
   0.1072428,
   0.12707,
   0.08602019,
   0.09056386,
   0.0871663,
   0.07971201,
   0.07760955,
   0.07485486,
   0.07204165,
   0.08355932,
   0.07706438,
   0.07815005,
   0.07047798,
   0.07610127,
   0.06937081,
   0.03433177,
   0.00584261,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3189[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3189[26] = {
   108.2717,
   0.298548,
   0.1599813,
   0.1006101,
   0.1011161,
   0.09618717,
   0.08783657,
   0.08519208,
   0.0823375,
   0.07938159,
   0.09085621,
   0.0843979,
   0.08537419,
   0.0778027,
   0.08353587,
   0.07669262,
   0.04194565,
   0.01624223,
   0.01338105,
   0.01411476,
   0.01584262,
   0.01863297,
   0.02531232,
   0.05321777,
   0.2345576,
   38.44575};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3189,_fy3189,_felx3189,_fehx3189,_fely3189,_fehy3189);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3189 = new TH1F("Graph_Graph3189","",100,-100,100);
   Graph_Graph3189->SetMinimum(0);
   Graph_Graph3189->SetMaximum(1.5);
   Graph_Graph3189->SetDirectory(0);
   Graph_Graph3189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3189->SetLineColor(ci);
   Graph_Graph3189->GetXaxis()->SetRange(1,100);
   Graph_Graph3189->GetXaxis()->CenterTitle(true);
   Graph_Graph3189->GetXaxis()->SetLabelFont(42);
   Graph_Graph3189->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3189->GetXaxis()->SetTitleFont(42);
   Graph_Graph3189->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3189->GetYaxis()->CenterTitle(true);
   Graph_Graph3189->GetYaxis()->SetLabelFont(42);
   Graph_Graph3189->GetYaxis()->SetTitleFont(42);
   Graph_Graph3189->GetZaxis()->SetLabelFont(42);
   Graph_Graph3189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3189->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3189);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.112552,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__566 = new TH2D("ThetaY_vs_Y_20_25__566","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__566->SetBinContent(7895,3);
   ThetaY_vs_Y_20_25__566->SetBinContent(7921,986);
   ThetaY_vs_Y_20_25__566->SetBinContent(7947,4354);
   ThetaY_vs_Y_20_25__566->SetBinContent(7973,9494);
   ThetaY_vs_Y_20_25__566->SetBinContent(7999,12871);
   ThetaY_vs_Y_20_25__566->SetBinContent(8025,14979);
   ThetaY_vs_Y_20_25__566->SetBinContent(8051,16611);
   ThetaY_vs_Y_20_25__566->SetBinContent(8077,17767);
   ThetaY_vs_Y_20_25__566->SetBinContent(8103,18015);
   ThetaY_vs_Y_20_25__566->SetBinContent(8129,18374);
   ThetaY_vs_Y_20_25__566->SetBinContent(8155,18403);
   ThetaY_vs_Y_20_25__566->SetBinContent(8181,18352);
   ThetaY_vs_Y_20_25__566->SetBinContent(8207,18613);
   ThetaY_vs_Y_20_25__566->SetBinContent(8233,18424);
   ThetaY_vs_Y_20_25__566->SetBinContent(8259,18118);
   ThetaY_vs_Y_20_25__566->SetBinContent(8285,18441);
   ThetaY_vs_Y_20_25__566->SetBinContent(8311,18499);
   ThetaY_vs_Y_20_25__566->SetBinContent(8337,18095);
   ThetaY_vs_Y_20_25__566->SetBinContent(8363,17584);
   ThetaY_vs_Y_20_25__566->SetBinContent(8389,16670);
   ThetaY_vs_Y_20_25__566->SetBinContent(8415,14852);
   ThetaY_vs_Y_20_25__566->SetBinContent(8441,12628);
   ThetaY_vs_Y_20_25__566->SetBinContent(8467,9296);
   ThetaY_vs_Y_20_25__566->SetBinContent(8493,4422);
   ThetaY_vs_Y_20_25__566->SetBinContent(8519,1004);
   ThetaY_vs_Y_20_25__566->SetBinContent(8545,7);
   ThetaY_vs_Y_20_25__566->SetEntries(336862);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__566->SetLineColor(ci);
   ThetaY_vs_Y_20_25__566->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__566->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__566->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__566->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__566->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__566->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__566->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__566->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__566->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__566->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__566->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__566->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__566->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__566->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__566->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
