void S12_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06492651,125,1.233604);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__1221 = new TH1D("S12_ThetaY_mI25_mI20__1221","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(313,0.09655172);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(314,0.7103448);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(315,0.9241379);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(316,1);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(317,0.8);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(318,0.7034483);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(319,0.6758621);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(320,0.4551724);
   S12_ThetaY_mI25_mI20__1221->SetBinContent(321,0.1034483);
   S12_ThetaY_mI25_mI20__1221->SetBinError(313,0.02580453);
   S12_ThetaY_mI25_mI20__1221->SetBinError(314,0.06999236);
   S12_ThetaY_mI25_mI20__1221->SetBinError(315,0.07983336);
   S12_ThetaY_mI25_mI20__1221->SetBinError(316,0.08304548);
   S12_ThetaY_mI25_mI20__1221->SetBinError(317,0.07427814);
   S12_ThetaY_mI25_mI20__1221->SetBinError(318,0.06965176);
   S12_ThetaY_mI25_mI20__1221->SetBinError(319,0.06827238);
   S12_ThetaY_mI25_mI20__1221->SetBinError(320,0.05602785);
   S12_ThetaY_mI25_mI20__1221->SetBinError(321,0.02671023);
   S12_ThetaY_mI25_mI20__1221->SetMinimum(0);
   S12_ThetaY_mI25_mI20__1221->SetMaximum(1.103751);
   S12_ThetaY_mI25_mI20__1221->SetEntries(793);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1221->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__1221->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1221->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__1221->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__1221->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__1221->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1221->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1221->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1221->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__1221->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__1221->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1221->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1221->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1221->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1221->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1221->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1222 = new TH1D("ThetaY_mI25_mI20__1222","",630,-1575,1575);
   ThetaY_mI25_mI20__1222->SetBinContent(309,0.0004870921);
   ThetaY_mI25_mI20__1222->SetBinContent(310,0.1497587);
   ThetaY_mI25_mI20__1222->SetBinContent(311,0.5332772);
   ThetaY_mI25_mI20__1222->SetBinContent(312,0.7608378);
   ThetaY_mI25_mI20__1222->SetBinContent(313,0.8851348);
   ThetaY_mI25_mI20__1222->SetBinContent(314,0.9707745);
   ThetaY_mI25_mI20__1222->SetBinContent(315,1.00341);
   ThetaY_mI25_mI20__1222->SetBinContent(316,1);
   ThetaY_mI25_mI20__1222->SetBinContent(317,0.9729885);
   ThetaY_mI25_mI20__1222->SetBinContent(318,0.9034229);
   ThetaY_mI25_mI20__1222->SetBinContent(319,0.7652216);
   ThetaY_mI25_mI20__1222->SetBinContent(320,0.5317717);
   ThetaY_mI25_mI20__1222->SetBinContent(321,0.149183);
   ThetaY_mI25_mI20__1222->SetBinContent(322,0.0005756543);
   ThetaY_mI25_mI20__1222->SetBinError(309,0.0001468638);
   ThetaY_mI25_mI20__1222->SetBinError(310,0.002575166);
   ThetaY_mI25_mI20__1222->SetBinError(311,0.004859434);
   ThetaY_mI25_mI20__1222->SetBinError(312,0.005804372);
   ThetaY_mI25_mI20__1222->SetBinError(313,0.00626057);
   ThetaY_mI25_mI20__1222->SetBinError(314,0.006556444);
   ThetaY_mI25_mI20__1222->SetBinError(315,0.006665739);
   ThetaY_mI25_mI20__1222->SetBinError(316,0.006654404);
   ThetaY_mI25_mI20__1222->SetBinError(317,0.006563916);
   ThetaY_mI25_mI20__1222->SetBinError(318,0.006324916);
   ThetaY_mI25_mI20__1222->SetBinError(319,0.00582107);
   ThetaY_mI25_mI20__1222->SetBinError(320,0.00485257);
   ThetaY_mI25_mI20__1222->SetBinError(321,0.002570212);
   ThetaY_mI25_mI20__1222->SetBinError(322,0.0001596578);
   ThetaY_mI25_mI20__1222->SetEntries(194820);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1222->SetLineColor(ci);
   ThetaY_mI25_mI20__1222->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1222->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1222->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1222->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1222->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1222->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1222->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1222->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1222->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1222->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1222->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1222->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1222->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1222->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1222->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1222->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1222->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1222->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1222->Draw("AEsame");
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
   
   Double_t _fx3408[14] = {
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
   32.5};
   Double_t _fy3408[14] = {
   0,
   0,
   0,
   0,
   0.1090814,
   0.73173,
   0.9209977,
   1,
   0.8222091,
   0.7786478,
   0.883224,
   0.8559546,
   0.693432,
   0};
   Double_t _felx3408[14] = {
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
   Double_t _fely3408[14] = {
   0,
   0,
   0,
   0,
   0.02881081,
   0.0721496,
   0.07969562,
   0.08321373,
   0.0764293,
   0.07716139,
   0.08931633,
   0.1053773,
   0.1773973,
   0};
   Double_t _fehx3408[14] = {
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
   Double_t _fehy3408[14] = {
   28.37459,
   0.08480416,
   0.02381064,
   0.01668868,
   0.03765377,
   0.07964388,
   0.08691319,
   0.09044813,
   0.08389076,
   0.08521898,
   0.09884552,
   0.1192338,
   0.2299152,
   23.69429};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3408,_fy3408,_felx3408,_fehx3408,_fely3408,_fehy3408);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3408 = new TH1F("Graph_Graph3408","",100,-100,100);
   Graph_Graph3408->SetMinimum(0);
   Graph_Graph3408->SetMaximum(1.5);
   Graph_Graph3408->SetDirectory(0);
   Graph_Graph3408->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3408->SetLineColor(ci);
   Graph_Graph3408->GetXaxis()->SetRange(1,100);
   Graph_Graph3408->GetXaxis()->CenterTitle(true);
   Graph_Graph3408->GetXaxis()->SetLabelFont(42);
   Graph_Graph3408->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3408->GetXaxis()->SetTitleFont(42);
   Graph_Graph3408->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3408->GetYaxis()->CenterTitle(true);
   Graph_Graph3408->GetYaxis()->SetLabelFont(42);
   Graph_Graph3408->GetYaxis()->SetTitleFont(42);
   Graph_Graph3408->GetZaxis()->SetLabelFont(42);
   Graph_Graph3408->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3408->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3408);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.103751,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1223 = new TH2D("ThetaY_vs_Y_mI25_mI20__1223","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8042,11);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8068,3382);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8094,12043);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8120,17182);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8146,19989);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8172,21923);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8198,22660);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8224,22583);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8250,21973);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8276,20402);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8302,17281);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8328,12009);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8354,3369);
   ThetaY_vs_Y_mI25_mI20__1223->SetBinContent(8380,13);
   ThetaY_vs_Y_mI25_mI20__1223->SetEntries(194820);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1223->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1223->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1223->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1223->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1223->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1223->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1223->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1223->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1223->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1223->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1223->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1223->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1223->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1223->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1223->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1223->Draw("COL");
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
