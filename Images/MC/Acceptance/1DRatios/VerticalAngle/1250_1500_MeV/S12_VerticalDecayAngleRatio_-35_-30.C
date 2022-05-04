void S12_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.3709448,125,7.04795);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__873 = new TH1D("S12_ThetaY_mI35_mI30__873","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__873->SetBinContent(313,0.0625);
   S12_ThetaY_mI35_mI30__873->SetBinContent(314,1.25);
   S12_ThetaY_mI35_mI30__873->SetBinContent(315,3.625);
   S12_ThetaY_mI35_mI30__873->SetBinContent(316,3.8125);
   S12_ThetaY_mI35_mI30__873->SetBinContent(317,3.75);
   S12_ThetaY_mI35_mI30__873->SetBinContent(318,2.4375);
   S12_ThetaY_mI35_mI30__873->SetBinContent(319,2.5);
   S12_ThetaY_mI35_mI30__873->SetBinContent(320,2.6875);
   S12_ThetaY_mI35_mI30__873->SetBinContent(321,2.8125);
   S12_ThetaY_mI35_mI30__873->SetBinContent(322,1.25);
   S12_ThetaY_mI35_mI30__873->SetBinContent(323,1);
   S12_ThetaY_mI35_mI30__873->SetBinError(313,0.0625);
   S12_ThetaY_mI35_mI30__873->SetBinError(314,0.2795085);
   S12_ThetaY_mI35_mI30__873->SetBinError(315,0.4759858);
   S12_ThetaY_mI35_mI30__873->SetBinError(316,0.4881406);
   S12_ThetaY_mI35_mI30__873->SetBinError(317,0.4841229);
   S12_ThetaY_mI35_mI30__873->SetBinError(318,0.3903124);
   S12_ThetaY_mI35_mI30__873->SetBinError(319,0.3952847);
   S12_ThetaY_mI35_mI30__873->SetBinError(320,0.4098399);
   S12_ThetaY_mI35_mI30__873->SetBinError(321,0.4192627);
   S12_ThetaY_mI35_mI30__873->SetBinError(322,0.2795085);
   S12_ThetaY_mI35_mI30__873->SetBinError(323,0.25);
   S12_ThetaY_mI35_mI30__873->SetMinimum(0);
   S12_ThetaY_mI35_mI30__873->SetMaximum(6.306061);
   S12_ThetaY_mI35_mI30__873->SetEntries(403);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__873->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__873->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__873->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__873->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__873->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__873->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__873->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__873->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__873->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__873->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__873->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__873->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__873->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__873->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__873->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__873->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__874 = new TH1D("ThetaY_mI35_mI30__874","",630,-1575,1575);
   ThetaY_mI35_mI30__874->SetBinContent(307,0.03443526);
   ThetaY_mI35_mI30__874->SetBinContent(308,1.070248);
   ThetaY_mI35_mI30__874->SetBinContent(309,3.037879);
   ThetaY_mI35_mI30__874->SetBinContent(310,4.036501);
   ThetaY_mI35_mI30__874->SetBinContent(311,4.708678);
   ThetaY_mI35_mI30__874->SetBinContent(312,5.241047);
   ThetaY_mI35_mI30__874->SetBinContent(313,5.460055);
   ThetaY_mI35_mI30__874->SetBinContent(314,5.732782);
   ThetaY_mI35_mI30__874->SetBinContent(315,5.732094);
   ThetaY_mI35_mI30__874->SetBinContent(316,5.701102);
   ThetaY_mI35_mI30__874->SetBinContent(317,5.732782);
   ThetaY_mI35_mI30__874->SetBinContent(318,5.55303);
   ThetaY_mI35_mI30__874->SetBinContent(319,5.314738);
   ThetaY_mI35_mI30__874->SetBinContent(320,4.832645);
   ThetaY_mI35_mI30__874->SetBinContent(321,4.105372);
   ThetaY_mI35_mI30__874->SetBinContent(322,2.84022);
   ThetaY_mI35_mI30__874->SetBinContent(323,1);
   ThetaY_mI35_mI30__874->SetBinContent(324,0.0392562);
   ThetaY_mI35_mI30__874->SetBinError(307,0.004869881);
   ThetaY_mI35_mI30__874->SetBinError(308,0.02714932);
   ThetaY_mI35_mI30__874->SetBinError(309,0.04574061);
   ThetaY_mI35_mI30__874->SetBinError(310,0.05272532);
   ThetaY_mI35_mI30__874->SetBinError(311,0.05694639);
   ThetaY_mI35_mI30__874->SetBinError(312,0.06007942);
   ThetaY_mI35_mI30__874->SetBinError(313,0.06132184);
   ThetaY_mI35_mI30__874->SetBinError(314,0.06283468);
   ThetaY_mI35_mI30__874->SetBinError(315,0.06283091);
   ThetaY_mI35_mI30__874->SetBinError(316,0.06266082);
   ThetaY_mI35_mI30__874->SetBinError(317,0.06283468);
   ThetaY_mI35_mI30__874->SetBinError(318,0.06184174);
   ThetaY_mI35_mI30__874->SetBinError(319,0.06050031);
   ThetaY_mI35_mI30__874->SetBinError(320,0.05769114);
   ThetaY_mI35_mI30__874->SetBinError(321,0.05317322);
   ThetaY_mI35_mI30__874->SetBinError(322,0.04422753);
   ThetaY_mI35_mI30__874->SetBinError(323,0.02624319);
   ThetaY_mI35_mI30__874->SetBinError(324,0.00519961);
   ThetaY_mI35_mI30__874->SetEntries(101891);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__874->SetLineColor(ci);
   ThetaY_mI35_mI30__874->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__874->SetMarkerColor(ci);
   ThetaY_mI35_mI30__874->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__874->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__874->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__874->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__874->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__874->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__874->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__874->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__874->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__874->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__874->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__874->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__874->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__874->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__874->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__874->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__874->Draw("AEsame");
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
   
   Double_t _fx3292[18] = {
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
   Double_t _fy3292[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.01144677,
   0.2180442,
   0.6324042,
   0.6687304,
   0.6541326,
   0.4389495,
   0.47039,
   0.5561137,
   0.685078,
   0.4401067,
   1,
   0};
   Double_t _felx3292[18] = {
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
   Double_t _fely3292[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.009469526,
   0.04840064,
   0.08308183,
   0.08569584,
   0.08451022,
   0.07015039,
   0.07425005,
   0.08472811,
   0.1021196,
   0.09780687,
   0.2486432,
   0};
   Double_t _fehx3292[18] = {
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
   Double_t _fehy3292[18] = {
   3.403733,
   0.1075751,
   0.03788429,
   0.02851032,
   0.02443984,
   0.02195702,
   0.02632763,
   0.06056208,
   0.09479737,
   0.09746202,
   0.09621519,
   0.08237968,
   0.08702083,
   0.09875139,
   0.118628,
   0.1224308,
   0.3199952,
   2.978949};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3292,_fy3292,_felx3292,_fehx3292,_fely3292,_fehy3292);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3292 = new TH1F("Graph_Graph3292","",100,-100,100);
   Graph_Graph3292->SetMinimum(0);
   Graph_Graph3292->SetMaximum(1.5);
   Graph_Graph3292->SetDirectory(0);
   Graph_Graph3292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3292->SetLineColor(ci);
   Graph_Graph3292->GetXaxis()->SetRange(1,100);
   Graph_Graph3292->GetXaxis()->CenterTitle(true);
   Graph_Graph3292->GetXaxis()->SetLabelFont(42);
   Graph_Graph3292->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3292->GetXaxis()->SetTitleFont(42);
   Graph_Graph3292->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3292->GetYaxis()->CenterTitle(true);
   Graph_Graph3292->GetYaxis()->SetLabelFont(42);
   Graph_Graph3292->GetYaxis()->SetTitleFont(42);
   Graph_Graph3292->GetZaxis()->SetLabelFont(42);
   Graph_Graph3292->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3292->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3292);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,6.306061,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__875 = new TH2D("ThetaY_vs_Y_mI35_mI30__875","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(7988,50);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8014,1554);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8040,4411);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8066,5861);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8092,6837);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8118,7610);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8144,7928);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8170,8324);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8196,8323);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8222,8278);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8248,8324);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8274,8063);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8300,7717);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8326,7017);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8352,5961);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8378,4124);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8404,1452);
   ThetaY_vs_Y_mI35_mI30__875->SetBinContent(8430,57);
   ThetaY_vs_Y_mI35_mI30__875->SetEntries(101891);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__875->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__875->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__875->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__875->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__875->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__875->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__875->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__875->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__875->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__875->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__875->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__875->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__875->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__875->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__875->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__875->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
