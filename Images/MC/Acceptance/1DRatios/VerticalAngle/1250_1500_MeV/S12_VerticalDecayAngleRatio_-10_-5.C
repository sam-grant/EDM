void S12_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06746241,125,1.281786);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__888 = new TH1D("S12_ThetaY_mI10_mI5__888","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__888->SetBinContent(310,0.02479339);
   S12_ThetaY_mI10_mI5__888->SetBinContent(311,0.3333333);
   S12_ThetaY_mI10_mI5__888->SetBinContent(312,0.7906336);
   S12_ThetaY_mI10_mI5__888->SetBinContent(313,1);
   S12_ThetaY_mI10_mI5__888->SetBinContent(314,0.9173554);
   S12_ThetaY_mI10_mI5__888->SetBinContent(315,0.9862259);
   S12_ThetaY_mI10_mI5__888->SetBinContent(316,0.9256198);
   S12_ThetaY_mI10_mI5__888->SetBinContent(317,0.9449036);
   S12_ThetaY_mI10_mI5__888->SetBinContent(318,0.9944904);
   S12_ThetaY_mI10_mI5__888->SetBinContent(319,0.8484848);
   S12_ThetaY_mI10_mI5__888->SetBinContent(320,0.7768595);
   S12_ThetaY_mI10_mI5__888->SetBinContent(321,0.5261708);
   S12_ThetaY_mI10_mI5__888->SetBinContent(322,0.1322314);
   S12_ThetaY_mI10_mI5__888->SetBinContent(323,0.008264463);
   S12_ThetaY_mI10_mI5__888->SetBinError(310,0.008264463);
   S12_ThetaY_mI10_mI5__888->SetBinError(311,0.03030303);
   S12_ThetaY_mI10_mI5__888->SetBinError(312,0.04666963);
   S12_ThetaY_mI10_mI5__888->SetBinError(313,0.05248639);
   S12_ThetaY_mI10_mI5__888->SetBinError(314,0.05027076);
   S12_ThetaY_mI10_mI5__888->SetBinError(315,0.05212366);
   S12_ThetaY_mI10_mI5__888->SetBinError(316,0.0504967);
   S12_ThetaY_mI10_mI5__888->SetBinError(317,0.05102);
   S12_ThetaY_mI10_mI5__888->SetBinError(318,0.0523416);
   S12_ThetaY_mI10_mI5__888->SetBinError(319,0.04834691);
   S12_ThetaY_mI10_mI5__888->SetBinError(320,0.04626131);
   S12_ThetaY_mI10_mI5__888->SetBinError(321,0.03807238);
   S12_ThetaY_mI10_mI5__888->SetBinError(322,0.01908596);
   S12_ThetaY_mI10_mI5__888->SetBinError(323,0.00477149);
   S12_ThetaY_mI10_mI5__888->SetMinimum(0);
   S12_ThetaY_mI10_mI5__888->SetMaximum(1.146861);
   S12_ThetaY_mI10_mI5__888->SetEntries(3343);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__888->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__888->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__888->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__888->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__888->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__888->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__888->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__888->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__888->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__888->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__888->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__888->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__888->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__888->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__888->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__888->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__889 = new TH1D("ThetaY_mI10_mI5__889","",630,-1575,1575);
   ThetaY_mI10_mI5__889->SetBinContent(307,0.005250853);
   ThetaY_mI10_mI5__889->SetBinContent(308,0.1870952);
   ThetaY_mI10_mI5__889->SetBinContent(309,0.5283048);
   ThetaY_mI10_mI5__889->SetBinContent(310,0.7373232);
   ThetaY_mI10_mI5__889->SetBinContent(311,0.8702043);
   ThetaY_mI10_mI5__889->SetBinContent(312,0.9586831);
   ThetaY_mI10_mI5__889->SetBinContent(313,1);
   ThetaY_mI10_mI5__889->SetBinContent(314,1.032003);
   ThetaY_mI10_mI5__889->SetBinContent(315,1.042601);
   ThetaY_mI10_mI5__889->SetBinContent(316,1.042543);
   ThetaY_mI10_mI5__889->SetBinContent(317,1.030662);
   ThetaY_mI10_mI5__889->SetBinContent(318,1.011747);
   ThetaY_mI10_mI5__889->SetBinContent(319,0.9542563);
   ThetaY_mI10_mI5__889->SetBinContent(320,0.869591);
   ThetaY_mI10_mI5__889->SetBinContent(321,0.7394504);
   ThetaY_mI10_mI5__889->SetBinContent(322,0.5255452);
   ThetaY_mI10_mI5__889->SetBinContent(323,0.1836074);
   ThetaY_mI10_mI5__889->SetBinContent(324,0.006074892);
   ThetaY_mI10_mI5__889->SetBinError(307,0.0003172156);
   ThetaY_mI10_mI5__889->SetBinError(308,0.001893524);
   ThetaY_mI10_mI5__889->SetBinError(309,0.003181866);
   ThetaY_mI10_mI5__889->SetBinError(310,0.003758968);
   ThetaY_mI10_mI5__889->SetBinError(311,0.004083666);
   ThetaY_mI10_mI5__889->SetBinError(312,0.004286247);
   ThetaY_mI10_mI5__889->SetBinError(313,0.004377636);
   ThetaY_mI10_mI5__889->SetBinError(314,0.004447134);
   ThetaY_mI10_mI5__889->SetBinError(315,0.004469909);
   ThetaY_mI10_mI5__889->SetBinError(316,0.004469786);
   ThetaY_mI10_mI5__889->SetBinError(317,0.004444243);
   ThetaY_mI10_mI5__889->SetBinError(318,0.004403274);
   ThetaY_mI10_mI5__889->SetBinError(319,0.004276339);
   ThetaY_mI10_mI5__889->SetBinError(320,0.004082227);
   ThetaY_mI10_mI5__889->SetBinError(321,0.003764386);
   ThetaY_mI10_mI5__889->SetBinError(322,0.003173545);
   ThetaY_mI10_mI5__889->SetBinError(323,0.001875792);
   ThetaY_mI10_mI5__889->SetBinError(324,0.0003411999);
   ThetaY_mI10_mI5__889->SetEntries(664013);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__889->SetLineColor(ci);
   ThetaY_mI10_mI5__889->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__889->SetMarkerColor(ci);
   ThetaY_mI10_mI5__889->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__889->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__889->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__889->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__889->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__889->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__889->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__889->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__889->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__889->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__889->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__889->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__889->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__889->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__889->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__889->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__889->Draw("AEsame");
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
   
   Double_t _fx3297[18] = {
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
   Double_t _fy3297[18] = {
   0,
   0,
   0,
   0.03362621,
   0.3830518,
   0.824708,
   1,
   0.8889073,
   0.9459285,
   0.8878478,
   0.916793,
   0.9829434,
   0.8891583,
   0.8933619,
   0.7115701,
   0.2516081,
   0.04501161,
   0};
   Double_t _felx3297[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3297[18] = {
   0,
   0,
   0,
   0.01099865,
   0.03482065,
   0.04879151,
   0.05264389,
   0.04883723,
   0.05013423,
   0.04856081,
   0.04963512,
   0.05188593,
   0.05079287,
   0.05333177,
   0.05156884,
   0.03622054,
   0.0244997,
   0};
   Double_t _fehx3297[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3297[18] = {
   0.9691305,
   0.02711007,
   0.009600243,
   0.01535935,
   0.03814038,
   0.05176822,
   0.05549207,
   0.05159799,
   0.05286544,
   0.05129331,
   0.05239894,
   0.05470088,
   0.05378179,
   0.05661598,
   0.0554502,
   0.04185326,
   0.0437976,
   0.8372891};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3297,_fy3297,_felx3297,_fehx3297,_fely3297,_fehy3297);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3297 = new TH1F("Graph_Graph3297","",100,-100,100);
   Graph_Graph3297->SetMinimum(0);
   Graph_Graph3297->SetMaximum(1.5);
   Graph_Graph3297->SetDirectory(0);
   Graph_Graph3297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3297->SetLineColor(ci);
   Graph_Graph3297->GetXaxis()->SetRange(1,100);
   Graph_Graph3297->GetXaxis()->CenterTitle(true);
   Graph_Graph3297->GetXaxis()->SetLabelFont(42);
   Graph_Graph3297->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3297->GetXaxis()->SetTitleFont(42);
   Graph_Graph3297->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3297->GetYaxis()->CenterTitle(true);
   Graph_Graph3297->GetYaxis()->SetLabelFont(42);
   Graph_Graph3297->GetYaxis()->SetTitleFont(42);
   Graph_Graph3297->GetZaxis()->SetLabelFont(42);
   Graph_Graph3297->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3297->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3297);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.146861,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__890 = new TH2D("ThetaY_vs_Y_mI10_mI5__890","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(7993,274);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8019,9763);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8045,27568);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8071,38475);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8097,45409);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8123,50026);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8149,52182);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8175,53852);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8201,54405);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8227,54402);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8253,53782);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8279,52795);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8305,49795);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8331,45377);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8357,38586);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8383,27424);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8409,9581);
   ThetaY_vs_Y_mI10_mI5__890->SetBinContent(8435,317);
   ThetaY_vs_Y_mI10_mI5__890->SetEntries(664013);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__890->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__890->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__890->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__890->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__890->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__890->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__890->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__890->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__890->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__890->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__890->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__890->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__890->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__890->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__890->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__890->Draw("COL");
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
