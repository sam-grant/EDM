void S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06555061,125,1.245461);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__951 = new TH1D("S18_ThetaY_0_5__951","",630,-1575,1575);
   S18_ThetaY_0_5__951->SetBinContent(308,0.002283105);
   S18_ThetaY_0_5__951->SetBinContent(309,0.04109589);
   S18_ThetaY_0_5__951->SetBinContent(310,0.2968037);
   S18_ThetaY_0_5__951->SetBinContent(311,0.7237443);
   S18_ThetaY_0_5__951->SetBinContent(312,0.803653);
   S18_ThetaY_0_5__951->SetBinContent(313,0.9269406);
   S18_ThetaY_0_5__951->SetBinContent(314,0.869863);
   S18_ThetaY_0_5__951->SetBinContent(315,0.890411);
   S18_ThetaY_0_5__951->SetBinContent(316,0.890411);
   S18_ThetaY_0_5__951->SetBinContent(317,1);
   S18_ThetaY_0_5__951->SetBinContent(318,0.8607306);
   S18_ThetaY_0_5__951->SetBinContent(319,0.8333333);
   S18_ThetaY_0_5__951->SetBinContent(320,0.4771689);
   S18_ThetaY_0_5__951->SetBinContent(321,0.07762557);
   S18_ThetaY_0_5__951->SetBinError(308,0.002283105);
   S18_ThetaY_0_5__951->SetBinError(309,0.009686394);
   S18_ThetaY_0_5__951->SetBinError(310,0.0260314);
   S18_ThetaY_0_5__951->SetBinError(311,0.04064953);
   S18_ThetaY_0_5__951->SetBinError(312,0.04283485);
   S18_ThetaY_0_5__951->SetBinError(313,0.04600329);
   S18_ThetaY_0_5__951->SetBinError(314,0.04456443);
   S18_ThetaY_0_5__951->SetBinError(315,0.04508771);
   S18_ThetaY_0_5__951->SetBinError(316,0.04508771);
   S18_ThetaY_0_5__951->SetBinError(317,0.04778185);
   S18_ThetaY_0_5__951->SetBinError(318,0.04432988);
   S18_ThetaY_0_5__951->SetBinError(319,0.04361866);
   S18_ThetaY_0_5__951->SetBinError(320,0.03300647);
   S18_ThetaY_0_5__951->SetBinError(321,0.01331268);
   S18_ThetaY_0_5__951->SetMinimum(0);
   S18_ThetaY_0_5__951->SetMaximum(1.11436);
   S18_ThetaY_0_5__951->SetEntries(3808);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__951->SetLineColor(ci);
   S18_ThetaY_0_5__951->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__951->SetMarkerColor(ci);
   S18_ThetaY_0_5__951->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__951->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__951->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__951->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__951->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__951->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__951->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__951->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__951->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__951->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__951->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__951->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__951->Draw("AE");
   
   TH1D *ThetaY_0_5__952 = new TH1D("ThetaY_0_5__952","",630,-1575,1575);
   ThetaY_0_5__952->SetBinContent(307,0.005961629);
   ThetaY_0_5__952->SetBinContent(308,0.181247);
   ThetaY_0_5__952->SetBinContent(309,0.5056745);
   ThetaY_0_5__952->SetBinContent(310,0.7155644);
   ThetaY_0_5__952->SetBinContent(311,0.8409613);
   ThetaY_0_5__952->SetBinContent(312,0.9266027);
   ThetaY_0_5__952->SetBinContent(313,0.9728265);
   ThetaY_0_5__952->SetBinContent(314,0.9985645);
   ThetaY_0_5__952->SetBinContent(315,1.011096);
   ThetaY_0_5__952->SetBinContent(316,1.013055);
   ThetaY_0_5__952->SetBinContent(317,1);
   ThetaY_0_5__952->SetBinContent(318,0.9736878);
   ThetaY_0_5__952->SetBinContent(319,0.9279538);
   ThetaY_0_5__952->SetBinContent(320,0.8441363);
   ThetaY_0_5__952->SetBinContent(321,0.7113423);
   ThetaY_0_5__952->SetBinContent(322,0.5142032);
   ThetaY_0_5__952->SetBinContent(323,0.1796595);
   ThetaY_0_5__952->SetBinContent(324,0.005910964);
   ThetaY_0_5__952->SetBinError(307,0.0003173055);
   ThetaY_0_5__952->SetBinError(308,0.001749567);
   ThetaY_0_5__952->SetBinError(309,0.00292234);
   ThetaY_0_5__952->SetBinError(310,0.003476318);
   ThetaY_0_5__952->SetBinError(311,0.003768627);
   ThetaY_0_5__952->SetBinError(312,0.003955869);
   ThetaY_0_5__952->SetBinError(313,0.004053338);
   ThetaY_0_5__952->SetBinError(314,0.004106607);
   ThetaY_0_5__952->SetBinError(315,0.004132295);
   ThetaY_0_5__952->SetBinError(316,0.004136296);
   ThetaY_0_5__952->SetBinError(317,0.004109558);
   ThetaY_0_5__952->SetBinError(318,0.004055132);
   ThetaY_0_5__952->SetBinError(319,0.003958752);
   ThetaY_0_5__952->SetBinError(320,0.003775734);
   ThetaY_0_5__952->SetBinError(321,0.003466047);
   ThetaY_0_5__952->SetBinError(322,0.00294688);
   ThetaY_0_5__952->SetBinError(323,0.001741888);
   ThetaY_0_5__952->SetBinError(324,0.0003159543);
   ThetaY_0_5__952->SetEntries(729992);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__952->SetLineColor(ci);
   ThetaY_0_5__952->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__952->SetMarkerColor(ci);
   ThetaY_0_5__952->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__952->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__952->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__952->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__952->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__952->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__952->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__952->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__952->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__952->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__952->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__952->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__952->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__952->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__952->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__952->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__952->Draw("AEsame");
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
   
   Double_t _fx3318[18] = {
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
   42.5};
   Double_t _fy3318[18] = {
   0,
   0.01259665,
   0.08126945,
   0.4147826,
   0.8606155,
   0.8673113,
   0.9528325,
   0.8711135,
   0.8806396,
   0.8789366,
   1,
   0.8839904,
   0.8980332,
   0.5652748,
   0.1091255,
   0,
   0,
   0};
   Double_t _felx3318[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3318[18] = {
   0,
   0.01042071,
   0.01898132,
   0.03638729,
   0.04846456,
   0.04635347,
   0.04743471,
   0.04475205,
   0.0447184,
   0.04463164,
   0.04793956,
   0.0456558,
   0.04713907,
   0.03915081,
   0.01862966,
   0,
   0,
   0};
   Double_t _fehx3318[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3318[18] = {
   0.7068916,
   0.02897078,
   0.02403354,
   0.03972946,
   0.0512748,
   0.04890049,
   0.04985791,
   0.04711316,
   0.04704973,
   0.04695844,
   0.05029561,
   0.04807781,
   0.04968178,
   0.04196189,
   0.02211859,
   0.008174537,
   0.02339764,
   0.7129666};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3318,_fy3318,_felx3318,_fehx3318,_fely3318,_fehy3318);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3318 = new TH1F("Graph_Graph3318","",100,-100,100);
   Graph_Graph3318->SetMinimum(0);
   Graph_Graph3318->SetMaximum(1.5);
   Graph_Graph3318->SetDirectory(0);
   Graph_Graph3318->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3318->SetLineColor(ci);
   Graph_Graph3318->GetXaxis()->SetRange(1,100);
   Graph_Graph3318->GetXaxis()->CenterTitle(true);
   Graph_Graph3318->GetXaxis()->SetLabelFont(42);
   Graph_Graph3318->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3318->GetXaxis()->SetTitleFont(42);
   Graph_Graph3318->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3318->GetYaxis()->CenterTitle(true);
   Graph_Graph3318->GetYaxis()->SetLabelFont(42);
   Graph_Graph3318->GetYaxis()->SetTitleFont(42);
   Graph_Graph3318->GetZaxis()->SetLabelFont(42);
   Graph_Graph3318->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3318->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3318);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.11436,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__953 = new TH2D("ThetaY_vs_Y_0_5__953","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__953->SetBinContent(7995,353);
   ThetaY_vs_Y_0_5__953->SetBinContent(8021,10732);
   ThetaY_vs_Y_0_5__953->SetBinContent(8047,29942);
   ThetaY_vs_Y_0_5__953->SetBinContent(8073,42370);
   ThetaY_vs_Y_0_5__953->SetBinContent(8099,49795);
   ThetaY_vs_Y_0_5__953->SetBinContent(8125,54866);
   ThetaY_vs_Y_0_5__953->SetBinContent(8151,57603);
   ThetaY_vs_Y_0_5__953->SetBinContent(8177,59127);
   ThetaY_vs_Y_0_5__953->SetBinContent(8203,59869);
   ThetaY_vs_Y_0_5__953->SetBinContent(8229,59985);
   ThetaY_vs_Y_0_5__953->SetBinContent(8255,59212);
   ThetaY_vs_Y_0_5__953->SetBinContent(8281,57654);
   ThetaY_vs_Y_0_5__953->SetBinContent(8307,54946);
   ThetaY_vs_Y_0_5__953->SetBinContent(8333,49983);
   ThetaY_vs_Y_0_5__953->SetBinContent(8359,42120);
   ThetaY_vs_Y_0_5__953->SetBinContent(8385,30447);
   ThetaY_vs_Y_0_5__953->SetBinContent(8411,10638);
   ThetaY_vs_Y_0_5__953->SetBinContent(8437,350);
   ThetaY_vs_Y_0_5__953->SetEntries(729992);
   ThetaY_vs_Y_0_5__953->SetContour(20);
   ThetaY_vs_Y_0_5__953->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__953->SetContourLevel(1,2999.25);
   ThetaY_vs_Y_0_5__953->SetContourLevel(2,5998.5);
   ThetaY_vs_Y_0_5__953->SetContourLevel(3,8997.75);
   ThetaY_vs_Y_0_5__953->SetContourLevel(4,11997);
   ThetaY_vs_Y_0_5__953->SetContourLevel(5,14996.25);
   ThetaY_vs_Y_0_5__953->SetContourLevel(6,17995.5);
   ThetaY_vs_Y_0_5__953->SetContourLevel(7,20994.75);
   ThetaY_vs_Y_0_5__953->SetContourLevel(8,23994);
   ThetaY_vs_Y_0_5__953->SetContourLevel(9,26993.25);
   ThetaY_vs_Y_0_5__953->SetContourLevel(10,29992.5);
   ThetaY_vs_Y_0_5__953->SetContourLevel(11,32991.75);
   ThetaY_vs_Y_0_5__953->SetContourLevel(12,35991);
   ThetaY_vs_Y_0_5__953->SetContourLevel(13,38990.25);
   ThetaY_vs_Y_0_5__953->SetContourLevel(14,41989.5);
   ThetaY_vs_Y_0_5__953->SetContourLevel(15,44988.75);
   ThetaY_vs_Y_0_5__953->SetContourLevel(16,47988);
   ThetaY_vs_Y_0_5__953->SetContourLevel(17,50987.25);
   ThetaY_vs_Y_0_5__953->SetContourLevel(18,53986.5);
   ThetaY_vs_Y_0_5__953->SetContourLevel(19,56985.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__953->SetLineColor(ci);
   ThetaY_vs_Y_0_5__953->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__953->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__953->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__953->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__953->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__953->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__953->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__953->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__953->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__953->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__953->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__953->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__953->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__953->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__953->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
