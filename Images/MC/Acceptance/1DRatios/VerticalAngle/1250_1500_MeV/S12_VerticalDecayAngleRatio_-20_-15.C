void S12_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.06597845,125,1.25359);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__882 = new TH1D("S12_ThetaY_mI20_mI15__882","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__882->SetBinContent(311,0.00862069);
   S12_ThetaY_mI20_mI15__882->SetBinContent(312,0.1681034);
   S12_ThetaY_mI20_mI15__882->SetBinContent(313,0.7068966);
   S12_ThetaY_mI20_mI15__882->SetBinContent(314,0.9353448);
   S12_ThetaY_mI20_mI15__882->SetBinContent(315,0.887931);
   S12_ThetaY_mI20_mI15__882->SetBinContent(316,0.9439655);
   S12_ThetaY_mI20_mI15__882->SetBinContent(317,1);
   S12_ThetaY_mI20_mI15__882->SetBinContent(318,0.9181034);
   S12_ThetaY_mI20_mI15__882->SetBinContent(319,0.9224138);
   S12_ThetaY_mI20_mI15__882->SetBinContent(320,0.75);
   S12_ThetaY_mI20_mI15__882->SetBinContent(321,0.6336207);
   S12_ThetaY_mI20_mI15__882->SetBinContent(322,0.2758621);
   S12_ThetaY_mI20_mI15__882->SetBinContent(323,0.0862069);
   S12_ThetaY_mI20_mI15__882->SetBinContent(324,0.004310345);
   S12_ThetaY_mI20_mI15__882->SetBinError(311,0.006095748);
   S12_ThetaY_mI20_mI15__882->SetBinError(312,0.02691809);
   S12_ThetaY_mI20_mI15__882->SetBinError(313,0.05519935);
   S12_ThetaY_mI20_mI15__882->SetBinError(314,0.06349534);
   S12_ThetaY_mI20_mI15__882->SetBinError(315,0.06186509);
   S12_ThetaY_mI20_mI15__882->SetBinError(316,0.06378728);
   S12_ThetaY_mI20_mI15__882->SetBinError(317,0.06565322);
   S12_ThetaY_mI20_mI15__882->SetBinError(318,0.06290741);
   S12_ThetaY_mI20_mI15__882->SetBinError(319,0.06305491);
   S12_ThetaY_mI20_mI15__882->SetBinError(320,0.05685735);
   S12_ThetaY_mI20_mI15__882->SetBinError(321,0.05226015);
   S12_ThetaY_mI20_mI15__882->SetBinError(322,0.03448276);
   S12_ThetaY_mI20_mI15__882->SetBinError(323,0.01927645);
   S12_ThetaY_mI20_mI15__882->SetBinError(324,0.004310345);
   S12_ThetaY_mI20_mI15__882->SetMinimum(0);
   S12_ThetaY_mI20_mI15__882->SetMaximum(1.121634);
   S12_ThetaY_mI20_mI15__882->SetEntries(1912);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__882->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__882->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__882->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__882->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__882->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__882->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__882->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__882->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__882->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__882->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__882->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__882->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__882->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__882->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__882->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__882->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__883 = new TH1D("ThetaY_mI20_mI15__883","",630,-1575,1575);
   ThetaY_mI20_mI15__883->SetBinContent(307,0.006207363);
   ThetaY_mI20_mI15__883->SetBinContent(308,0.183025);
   ThetaY_mI20_mI15__883->SetBinContent(309,0.5102329);
   ThetaY_mI20_mI15__883->SetBinContent(310,0.7266917);
   ThetaY_mI20_mI15__883->SetBinContent(311,0.8483498);
   ThetaY_mI20_mI15__883->SetBinContent(312,0.9274783);
   ThetaY_mI20_mI15__883->SetBinContent(313,0.9852498);
   ThetaY_mI20_mI15__883->SetBinContent(314,1.008789);
   ThetaY_mI20_mI15__883->SetBinContent(315,1.019667);
   ThetaY_mI20_mI15__883->SetBinContent(316,1.01641);
   ThetaY_mI20_mI15__883->SetBinContent(317,1);
   ThetaY_mI20_mI15__883->SetBinContent(318,0.976707);
   ThetaY_mI20_mI15__883->SetBinContent(319,0.9327638);
   ThetaY_mI20_mI15__883->SetBinContent(320,0.8485957);
   ThetaY_mI20_mI15__883->SetBinContent(321,0.7325917);
   ThetaY_mI20_mI15__883->SetBinContent(322,0.5114621);
   ThetaY_mI20_mI15__883->SetBinContent(323,0.1847151);
   ThetaY_mI20_mI15__883->SetBinContent(324,0.00636101);
   ThetaY_mI20_mI15__883->SetBinError(307,0.0004367485);
   ThetaY_mI20_mI15__883->SetBinError(308,0.002371554);
   ThetaY_mI20_mI15__883->SetBinError(309,0.003959699);
   ThetaY_mI20_mI15__883->SetBinError(310,0.004725557);
   ThetaY_mI20_mI15__883->SetBinError(311,0.005105818);
   ThetaY_mI20_mI15__883->SetBinError(312,0.005338629);
   ThetaY_mI20_mI15__883->SetBinError(313,0.005502386);
   ThetaY_mI20_mI15__883->SetBinError(314,0.005567728);
   ThetaY_mI20_mI15__883->SetBinError(315,0.005597667);
   ThetaY_mI20_mI15__883->SetBinError(316,0.005588719);
   ThetaY_mI20_mI15__883->SetBinError(317,0.005543421);
   ThetaY_mI20_mI15__883->SetBinError(318,0.005478479);
   ThetaY_mI20_mI15__883->SetBinError(319,0.005353819);
   ThetaY_mI20_mI15__883->SetBinError(320,0.005106558);
   ThetaY_mI20_mI15__883->SetBinError(321,0.004744701);
   ThetaY_mI20_mI15__883->SetBinError(322,0.003964465);
   ThetaY_mI20_mI15__883->SetBinError(323,0.002382479);
   ThetaY_mI20_mI15__883->SetBinError(324,0.0004421208);
   ThetaY_mI20_mI15__883->SetEntries(404344);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__883->SetLineColor(ci);
   ThetaY_mI20_mI15__883->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__883->SetMarkerColor(ci);
   ThetaY_mI20_mI15__883->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__883->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__883->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__883->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__883->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__883->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__883->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__883->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__883->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__883->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__883->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__883->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__883->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__883->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__883->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__883->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__883->Draw("AEsame");
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
   
   Double_t _fx3295[18] = {
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
   Double_t _fy3295[18] = {
   0,
   0,
   0,
   0,
   0.01016172,
   0.1812478,
   0.7174795,
   0.927196,
   0.870805,
   0.9287255,
   1,
   0.9399988,
   0.9889039,
   0.8838131,
   0.8649029,
   0.5393597,
   0.4667019,
   0.6776195};
   Double_t _felx3295[18] = {
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
   Double_t _fely3295[18] = {
   0,
   0,
   0,
   0,
   0.006563675,
   0.0289161,
   0.0561107,
   0.06310026,
   0.0608096,
   0.06291588,
   0.06583836,
   0.06457139,
   0.06778386,
   0.06714666,
   0.07147268,
   0.06737056,
   0.1036423,
   0.5610726};
   Double_t _fehx3295[18] = {
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
   Double_t _fehy3295[18] = {
   1.284235,
   0.04336383,
   0.01555344,
   0.01092038,
   0.01340372,
   0.03394432,
   0.06068223,
   0.06755001,
   0.06521386,
   0.06733164,
   0.07032479,
   0.0691692,
   0.0725997,
   0.07245531,
   0.07764117,
   0.0763659,
   0.1297035,
   1.570658};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3295,_fy3295,_felx3295,_fehx3295,_fely3295,_fehy3295);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3295 = new TH1F("Graph_Graph3295","",100,-100,100);
   Graph_Graph3295->SetMinimum(0);
   Graph_Graph3295->SetMaximum(1.5);
   Graph_Graph3295->SetDirectory(0);
   Graph_Graph3295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3295->SetLineColor(ci);
   Graph_Graph3295->GetXaxis()->SetRange(1,100);
   Graph_Graph3295->GetXaxis()->CenterTitle(true);
   Graph_Graph3295->GetXaxis()->SetLabelFont(42);
   Graph_Graph3295->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3295->GetXaxis()->SetTitleFont(42);
   Graph_Graph3295->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3295->GetYaxis()->CenterTitle(true);
   Graph_Graph3295->GetYaxis()->SetLabelFont(42);
   Graph_Graph3295->GetYaxis()->SetTitleFont(42);
   Graph_Graph3295->GetZaxis()->SetLabelFont(42);
   Graph_Graph3295->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3295->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3295);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.121634,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__884 = new TH2D("ThetaY_vs_Y_mI20_mI15__884","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(7991,202);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8017,5956);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8043,16604);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8069,23648);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8095,27607);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8121,30182);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8147,32062);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8173,32828);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8199,33182);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8225,33076);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8251,32542);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8277,31784);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8303,30354);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8329,27615);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8355,23840);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8381,16644);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8407,6011);
   ThetaY_vs_Y_mI20_mI15__884->SetBinContent(8433,207);
   ThetaY_vs_Y_mI20_mI15__884->SetEntries(404344);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__884->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__884->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__884->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__884->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__884->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__884->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__884->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__884->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__884->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__884->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__884->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__884->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__884->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__884->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__884->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__884->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-20_-15","Reco vertices","lpf");
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
