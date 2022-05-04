void S12_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06994716,125,1.328996);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__1551 = new TH1D("S12_ThetaY_mI45_mI40__1551","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__1551->SetBinContent(316,0.25);
   S12_ThetaY_mI45_mI40__1551->SetBinContent(317,1);
   S12_ThetaY_mI45_mI40__1551->SetBinContent(318,0.25);
   S12_ThetaY_mI45_mI40__1551->SetBinContent(319,0.125);
   S12_ThetaY_mI45_mI40__1551->SetBinError(316,0.1767767);
   S12_ThetaY_mI45_mI40__1551->SetBinError(317,0.3535534);
   S12_ThetaY_mI45_mI40__1551->SetBinError(318,0.1767767);
   S12_ThetaY_mI45_mI40__1551->SetBinError(319,0.125);
   S12_ThetaY_mI45_mI40__1551->SetMinimum(0);
   S12_ThetaY_mI45_mI40__1551->SetMaximum(1.189102);
   S12_ThetaY_mI45_mI40__1551->SetEntries(13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__1551->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__1551->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__1551->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__1551->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__1551->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__1551->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1551->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__1551->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1551->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__1551->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__1551->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1551->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1551->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__1551->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__1551->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__1551->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1552 = new TH1D("ThetaY_mI45_mI40__1552","",630,-1575,1575);
   ThetaY_mI45_mI40__1552->SetBinContent(311,0.005154639);
   ThetaY_mI45_mI40__1552->SetBinContent(312,0.3527246);
   ThetaY_mI45_mI40__1552->SetBinContent(313,0.7466863);
   ThetaY_mI45_mI40__1552->SetBinContent(314,0.9896907);
   ThetaY_mI45_mI40__1552->SetBinContent(315,1.080265);
   ThetaY_mI45_mI40__1552->SetBinContent(316,1.081001);
   ThetaY_mI45_mI40__1552->SetBinContent(317,1);
   ThetaY_mI45_mI40__1552->SetBinContent(318,0.763623);
   ThetaY_mI45_mI40__1552->SetBinContent(319,0.3365243);
   ThetaY_mI45_mI40__1552->SetBinContent(320,0.005891016);
   ThetaY_mI45_mI40__1552->SetBinError(311,0.00194827);
   ThetaY_mI45_mI40__1552->SetBinError(312,0.0161164);
   ThetaY_mI45_mI40__1552->SetBinError(313,0.02344872);
   ThetaY_mI45_mI40__1552->SetBinError(314,0.02699603);
   ThetaY_mI45_mI40__1552->SetBinError(315,0.0282043);
   ThetaY_mI45_mI40__1552->SetBinError(316,0.02821391);
   ThetaY_mI45_mI40__1552->SetBinError(317,0.02713627);
   ThetaY_mI45_mI40__1552->SetBinError(318,0.02371317);
   ThetaY_mI45_mI40__1552->SetBinError(319,0.01574194);
   ThetaY_mI45_mI40__1552->SetBinError(320,0.002082789);
   ThetaY_mI45_mI40__1552->SetEntries(8639);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1552->SetLineColor(ci);
   ThetaY_mI45_mI40__1552->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1552->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1552->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1552->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1552->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1552->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1552->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1552->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1552->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1552->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1552->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1552->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1552->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1552->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1552->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1552->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1552->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1552->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1552->Draw("AEsame");
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
   
   Double_t _fx3518[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3518[10] = {
   0,
   0,
   0,
   0,
   0,
   0.231267,
   1,
   0.3273867,
   0.3714442,
   0};
   Double_t _felx3518[10] = {
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
   Double_t _fely3518[10] = {
   0,
   0,
   0,
   0,
   0,
   0.1494409,
   0.3469537,
   0.2115894,
   0.3074038,
   0};
   Double_t _fehx3518[10] = {
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
   Double_t _fehy3518[10] = {
   51.06602,
   0.6536843,
   0.3084786,
   0.2326842,
   0.2131626,
   0.305507,
   0.495311,
   0.4327661,
   0.8572332,
   43.92464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3518,_fy3518,_felx3518,_fehx3518,_fely3518,_fehy3518);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3518 = new TH1F("Graph_Graph3518","",100,-100,100);
   Graph_Graph3518->SetMinimum(0);
   Graph_Graph3518->SetMaximum(1.5);
   Graph_Graph3518->SetDirectory(0);
   Graph_Graph3518->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3518->SetLineColor(ci);
   Graph_Graph3518->GetXaxis()->SetRange(1,100);
   Graph_Graph3518->GetXaxis()->CenterTitle(true);
   Graph_Graph3518->GetXaxis()->SetLabelFont(42);
   Graph_Graph3518->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3518->GetXaxis()->SetTitleFont(42);
   Graph_Graph3518->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3518->GetYaxis()->CenterTitle(true);
   Graph_Graph3518->GetYaxis()->SetLabelFont(42);
   Graph_Graph3518->GetYaxis()->SetTitleFont(42);
   Graph_Graph3518->GetZaxis()->SetLabelFont(42);
   Graph_Graph3518->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3518->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3518);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.189102,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1553 = new TH2D("ThetaY_vs_Y_mI45_mI40__1553","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8090,7);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8116,479);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8142,1014);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8168,1344);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8194,1467);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8220,1468);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8246,1358);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8272,1037);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8298,457);
   ThetaY_vs_Y_mI45_mI40__1553->SetBinContent(8324,8);
   ThetaY_vs_Y_mI45_mI40__1553->SetEntries(8639);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1553->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1553->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1553->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1553->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1553->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1553->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1553->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1553->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1553->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1553->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1553->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1553->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1553->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1553->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1553->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1553->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
