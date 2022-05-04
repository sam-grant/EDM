void S12_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06745895,125,1.28172);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__1554 = new TH1D("S12_ThetaY_mI40_mI35__1554","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__1554->SetBinContent(315,0.05);
   S12_ThetaY_mI40_mI35__1554->SetBinContent(316,1);
   S12_ThetaY_mI40_mI35__1554->SetBinContent(317,0.4);
   S12_ThetaY_mI40_mI35__1554->SetBinContent(318,0.25);
   S12_ThetaY_mI40_mI35__1554->SetBinContent(319,0.1);
   S12_ThetaY_mI40_mI35__1554->SetBinError(315,0.05);
   S12_ThetaY_mI40_mI35__1554->SetBinError(316,0.2236068);
   S12_ThetaY_mI40_mI35__1554->SetBinError(317,0.1414214);
   S12_ThetaY_mI40_mI35__1554->SetBinError(318,0.1118034);
   S12_ThetaY_mI40_mI35__1554->SetBinError(319,0.07071068);
   S12_ThetaY_mI40_mI35__1554->SetMinimum(0);
   S12_ThetaY_mI40_mI35__1554->SetMaximum(1.146802);
   S12_ThetaY_mI40_mI35__1554->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1554->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__1554->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1554->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__1554->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__1554->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__1554->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1554->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1554->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1554->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__1554->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__1554->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1554->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1554->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1554->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1554->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1554->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1555 = new TH1D("ThetaY_mI40_mI35__1555","",630,-1575,1575);
   ThetaY_mI40_mI35__1555->SetBinContent(311,0.007588076);
   ThetaY_mI40_mI35__1555->SetBinContent(312,0.3192412);
   ThetaY_mI40_mI35__1555->SetBinContent(313,0.7403794);
   ThetaY_mI40_mI35__1555->SetBinContent(314,0.9311653);
   ThetaY_mI40_mI35__1555->SetBinContent(315,1.042547);
   ThetaY_mI40_mI35__1555->SetBinContent(316,1);
   ThetaY_mI40_mI35__1555->SetBinContent(317,0.9585366);
   ThetaY_mI40_mI35__1555->SetBinContent(318,0.7376694);
   ThetaY_mI40_mI35__1555->SetBinContent(319,0.3092141);
   ThetaY_mI40_mI35__1555->SetBinContent(320,0.00704607);
   ThetaY_mI40_mI35__1555->SetBinError(311,0.001434012);
   ThetaY_mI40_mI35__1555->SetBinError(312,0.009301356);
   ThetaY_mI40_mI35__1555->SetBinError(313,0.01416492);
   ThetaY_mI40_mI35__1555->SetBinError(314,0.01588548);
   ThetaY_mI40_mI35__1555->SetBinError(315,0.01680872);
   ThetaY_mI40_mI35__1555->SetBinError(316,0.01646216);
   ThetaY_mI40_mI35__1555->SetBinError(317,0.01611726);
   ThetaY_mI40_mI35__1555->SetBinError(318,0.01413897);
   ThetaY_mI40_mI35__1555->SetBinError(319,0.009154117);
   ThetaY_mI40_mI35__1555->SetBinError(320,0.001381848);
   ThetaY_mI40_mI35__1555->SetEntries(22337);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1555->SetLineColor(ci);
   ThetaY_mI40_mI35__1555->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1555->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1555->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1555->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1555->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1555->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1555->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1555->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1555->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1555->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1555->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1555->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1555->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1555->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1555->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1555->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1555->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1555->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1555->Draw("AEsame");
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
   
   Double_t _fx3519[10] = {
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
   Double_t _fy3519[10] = {
   0,
   0,
   0,
   0,
   0.04795945,
   1,
   0.4173028,
   0.3389052,
   0.3234005,
   0};
   Double_t _felx3519[10] = {
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
   Double_t _fely3519[10] = {
   0,
   0,
   0,
   0,
   0.03967624,
   0.2222946,
   0.1445522,
   0.1464978,
   0.2090016,
   0};
   Double_t _fehx3519[10] = {
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
   Double_t _fehy3519[10] = {
   12.53872,
   0.2885688,
   0.1243715,
   0.09888228,
   0.1103313,
   0.2782853,
   0.2061373,
   0.2296206,
   0.4274099,
   13.53781};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3519,_fy3519,_felx3519,_fehx3519,_fely3519,_fehy3519);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3519 = new TH1F("Graph_Graph3519","",100,-100,100);
   Graph_Graph3519->SetMinimum(0);
   Graph_Graph3519->SetMaximum(1.5);
   Graph_Graph3519->SetDirectory(0);
   Graph_Graph3519->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3519->SetLineColor(ci);
   Graph_Graph3519->GetXaxis()->SetRange(1,100);
   Graph_Graph3519->GetXaxis()->CenterTitle(true);
   Graph_Graph3519->GetXaxis()->SetLabelFont(42);
   Graph_Graph3519->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3519->GetXaxis()->SetTitleFont(42);
   Graph_Graph3519->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3519->GetYaxis()->CenterTitle(true);
   Graph_Graph3519->GetYaxis()->SetLabelFont(42);
   Graph_Graph3519->GetYaxis()->SetTitleFont(42);
   Graph_Graph3519->GetZaxis()->SetLabelFont(42);
   Graph_Graph3519->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3519->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3519);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.146802,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1556 = new TH2D("ThetaY_vs_Y_mI40_mI35__1556","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8091,28);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8117,1178);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8143,2732);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8169,3436);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8195,3847);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8221,3690);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8247,3537);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8273,2722);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8299,1141);
   ThetaY_vs_Y_mI40_mI35__1556->SetBinContent(8325,26);
   ThetaY_vs_Y_mI40_mI35__1556->SetEntries(22337);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1556->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1556->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1556->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1556->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1556->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1556->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1556->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1556->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1556->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1556->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1556->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1556->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1556->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1556->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1556->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1556->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-40_-35","Reco vertices","lpf");
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
