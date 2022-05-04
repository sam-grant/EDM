void S12_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1182439,125,2.246634);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__30 = new TH1D("S12_ThetaY_0_5__30","",630,-1575,1575);
   S12_ThetaY_0_5__30->SetBinContent(314,0.7142857);
   S12_ThetaY_0_5__30->SetBinContent(315,0.9285714);
   S12_ThetaY_0_5__30->SetBinContent(316,1.357143);
   S12_ThetaY_0_5__30->SetBinContent(317,1);
   S12_ThetaY_0_5__30->SetBinError(314,0.225877);
   S12_ThetaY_0_5__30->SetBinError(315,0.2575394);
   S12_ThetaY_0_5__30->SetBinError(316,0.3113499);
   S12_ThetaY_0_5__30->SetBinError(317,0.2672612);
   S12_ThetaY_0_5__30->SetMinimum(0);
   S12_ThetaY_0_5__30->SetMaximum(2.010146);
   S12_ThetaY_0_5__30->SetEntries(56);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__30->SetLineColor(ci);
   S12_ThetaY_0_5__30->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__30->SetMarkerColor(ci);
   S12_ThetaY_0_5__30->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__30->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__30->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__30->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__30->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__30->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__30->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__30->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__30->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__30->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__30->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__30->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__30->Draw("AE");
   
   TH1D *ThetaY_0_5__31 = new TH1D("ThetaY_0_5__31","",630,-1575,1575);
   ThetaY_0_5__31->SetBinContent(313,0.07327875);
   ThetaY_0_5__31->SetBinContent(314,0.9992618);
   ThetaY_0_5__31->SetBinContent(315,1.827406);
   ThetaY_0_5__31->SetBinContent(316,1.824856);
   ThetaY_0_5__31->SetBinContent(317,1);
   ThetaY_0_5__31->SetBinContent(318,0.07394981);
   ThetaY_0_5__31->SetBinError(313,0.002217516);
   ThetaY_0_5__31->SetBinError(314,0.008188745);
   ThetaY_0_5__31->SetBinError(315,0.01107376);
   ThetaY_0_5__31->SetBinError(316,0.01106603);
   ThetaY_0_5__31->SetBinError(317,0.008191769);
   ThetaY_0_5__31->SetBinError(318,0.002227646);
   ThetaY_0_5__31->SetEntries(86413);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__31->SetLineColor(ci);
   ThetaY_0_5__31->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__31->SetMarkerColor(ci);
   ThetaY_0_5__31->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__31->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__31->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__31->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__31->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__31->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__31->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__31->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__31->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__31->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__31->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__31->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__31->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__31->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__31->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__31->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__31->Draw("AEsame");
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
   
   Double_t _fx3011[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3011[6] = {
   0,
   0.7148134,
   0.5081364,
   0.7436987,
   1,
   0};
   Double_t _felx3011[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3011[6] = {
   0,
   0.2222816,
   0.1391298,
   0.1691584,
   0.2641517,
   0};
   Double_t _fehx3011[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3011[6] = {
   1.796052,
   0.3051534,
   0.1836757,
   0.2128402,
   0.3452452,
   1.77974};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-100,100);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(1.5);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3011->SetLineColor(ci);
   Graph_Graph3011->GetXaxis()->SetRange(1,100);
   Graph_Graph3011->GetXaxis()->CenterTitle(true);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3011->GetYaxis()->CenterTitle(true);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.010146,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__32 = new TH2D("ThetaY_vs_Y_0_5__32","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__32->SetBinContent(8151,1092);
   ThetaY_vs_Y_0_5__32->SetBinContent(8177,14891);
   ThetaY_vs_Y_0_5__32->SetBinContent(8203,27232);
   ThetaY_vs_Y_0_5__32->SetBinContent(8229,27194);
   ThetaY_vs_Y_0_5__32->SetBinContent(8255,14902);
   ThetaY_vs_Y_0_5__32->SetBinContent(8281,1102);
   ThetaY_vs_Y_0_5__32->SetEntries(86413);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__32->SetLineColor(ci);
   ThetaY_vs_Y_0_5__32->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__32->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__32->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__32->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__32->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__32->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__32->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__32->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__32->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__32->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__32->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__32->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__32->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__32->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__32->Draw("COL");
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
