void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.1244205,125,2.36399);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__51 = new TH1D("S12_ThetaY_35_40__51","",630,-1575,1575);
   S12_ThetaY_35_40__51->SetBinContent(314,1);
   S12_ThetaY_35_40__51->SetBinContent(315,1);
   S12_ThetaY_35_40__51->SetBinError(314,0.7071068);
   S12_ThetaY_35_40__51->SetBinError(315,0.7071068);
   S12_ThetaY_35_40__51->SetMinimum(0);
   S12_ThetaY_35_40__51->SetMaximum(2.115149);
   S12_ThetaY_35_40__51->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__51->SetLineColor(ci);
   S12_ThetaY_35_40__51->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__51->SetMarkerColor(ci);
   S12_ThetaY_35_40__51->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__51->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__51->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__51->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__51->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__51->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__51->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__51->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__51->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__51->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__51->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__51->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__51->Draw("AE");
   
   TH1D *ThetaY_35_40__52 = new TH1D("ThetaY_35_40__52","",630,-1575,1575);
   ThetaY_35_40__52->SetBinContent(313,0.06877323);
   ThetaY_35_40__52->SetBinContent(314,1);
   ThetaY_35_40__52->SetBinContent(315,1.918216);
   ThetaY_35_40__52->SetBinContent(316,1.922862);
   ThetaY_35_40__52->SetBinContent(317,1.016729);
   ThetaY_35_40__52->SetBinContent(318,0.06784387);
   ThetaY_35_40__52->SetBinError(313,0.007994726);
   ThetaY_35_40__52->SetBinError(314,0.03048554);
   ThetaY_35_40__52->SetBinError(315,0.04222237);
   ThetaY_35_40__52->SetBinError(316,0.04227348);
   ThetaY_35_40__52->SetBinError(317,0.03073947);
   ThetaY_35_40__52->SetBinError(318,0.007940524);
   ThetaY_35_40__52->SetEntries(6450);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__52->SetLineColor(ci);
   ThetaY_35_40__52->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__52->SetMarkerColor(ci);
   ThetaY_35_40__52->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__52->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__52->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__52->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__52->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__52->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__52->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__52->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__52->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__52->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__52->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__52->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__52->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__52->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__52->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__52->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__52->Draw("AEsame");
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
   
   Double_t _fx3018[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3018[6] = {
   0,
   1,
   0.5213178,
   0,
   0,
   0};
   Double_t _felx3018[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3018[6] = {
   0,
   0.6462839,
   0.3368254,
   0,
   0,
   0};
   Double_t _fehx3018[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3018[6] = {
   13.55261,
   1.321774,
   0.6883543,
   0.4789321,
   0.9061275,
   13.74061};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-100,100);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(1.5);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3018->SetLineColor(ci);
   Graph_Graph3018->GetXaxis()->SetRange(1,100);
   Graph_Graph3018->GetXaxis()->CenterTitle(true);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3018->GetYaxis()->CenterTitle(true);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.115149,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__53 = new TH2D("ThetaY_vs_Y_35_40__53","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__53->SetBinContent(8158,74);
   ThetaY_vs_Y_35_40__53->SetBinContent(8184,1076);
   ThetaY_vs_Y_35_40__53->SetBinContent(8210,2064);
   ThetaY_vs_Y_35_40__53->SetBinContent(8236,2069);
   ThetaY_vs_Y_35_40__53->SetBinContent(8262,1094);
   ThetaY_vs_Y_35_40__53->SetBinContent(8288,73);
   ThetaY_vs_Y_35_40__53->SetEntries(6450);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__53->SetLineColor(ci);
   ThetaY_vs_Y_35_40__53->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__53->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__53->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__53->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__53->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__53->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__53->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__53->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__53->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__53->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__53->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__53->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__53->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__53->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__53->Draw("COL");
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
