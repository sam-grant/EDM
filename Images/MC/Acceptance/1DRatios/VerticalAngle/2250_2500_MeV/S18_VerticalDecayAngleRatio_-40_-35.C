void S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-9.573982,125,181.9057);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__1611 = new TH1D("S18_ThetaY_mI40_mI35__1611","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__1611->SetBinContent(315,8);
   S18_ThetaY_mI40_mI35__1611->SetBinContent(316,16);
   S18_ThetaY_mI40_mI35__1611->SetBinContent(317,10);
   S18_ThetaY_mI40_mI35__1611->SetBinContent(318,2);
   S18_ThetaY_mI40_mI35__1611->SetBinContent(319,4);
   S18_ThetaY_mI40_mI35__1611->SetBinContent(320,1);
   S18_ThetaY_mI40_mI35__1611->SetBinError(315,2.828427);
   S18_ThetaY_mI40_mI35__1611->SetBinError(316,4);
   S18_ThetaY_mI40_mI35__1611->SetBinError(317,3.162278);
   S18_ThetaY_mI40_mI35__1611->SetBinError(318,1.414214);
   S18_ThetaY_mI40_mI35__1611->SetBinError(319,2);
   S18_ThetaY_mI40_mI35__1611->SetBinError(320,1);
   S18_ThetaY_mI40_mI35__1611->SetMinimum(0);
   S18_ThetaY_mI40_mI35__1611->SetMaximum(162.7577);
   S18_ThetaY_mI40_mI35__1611->SetEntries(41);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1611->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__1611->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1611->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__1611->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__1611->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__1611->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1611->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1611->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1611->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__1611->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__1611->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1611->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1611->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1611->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1611->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1611->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1612 = new TH1D("ThetaY_mI40_mI35__1612","",630,-1575,1575);
   ThetaY_mI40_mI35__1612->SetBinContent(311,1.076923);
   ThetaY_mI40_mI35__1612->SetBinContent(312,45.30769);
   ThetaY_mI40_mI35__1612->SetBinContent(313,105.0769);
   ThetaY_mI40_mI35__1612->SetBinContent(314,132.1538);
   ThetaY_mI40_mI35__1612->SetBinContent(315,147.9615);
   ThetaY_mI40_mI35__1612->SetBinContent(316,141.9231);
   ThetaY_mI40_mI35__1612->SetBinContent(317,136.0385);
   ThetaY_mI40_mI35__1612->SetBinContent(318,104.6923);
   ThetaY_mI40_mI35__1612->SetBinContent(319,43.88462);
   ThetaY_mI40_mI35__1612->SetBinContent(320,1);
   ThetaY_mI40_mI35__1612->SetBinError(311,0.2035193);
   ThetaY_mI40_mI35__1612->SetBinError(312,1.320077);
   ThetaY_mI40_mI35__1612->SetBinError(313,2.010328);
   ThetaY_mI40_mI35__1612->SetBinError(314,2.254516);
   ThetaY_mI40_mI35__1612->SetBinError(315,2.385546);
   ThetaY_mI40_mI35__1612->SetBinError(316,2.33636);
   ThetaY_mI40_mI35__1612->SetBinError(317,2.287411);
   ThetaY_mI40_mI35__1612->SetBinError(318,2.006646);
   ThetaY_mI40_mI35__1612->SetBinError(319,1.29918);
   ThetaY_mI40_mI35__1612->SetBinError(320,0.1961161);
   ThetaY_mI40_mI35__1612->SetEntries(22337);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1612->SetLineColor(ci);
   ThetaY_mI40_mI35__1612->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1612->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1612->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1612->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1612->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1612->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1612->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1612->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1612->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1612->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1612->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1612->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1612->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1612->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1612->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1612->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1612->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1612->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1612->Draw("AEsame");
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
   
   Double_t _fx3538[10] = {
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
   Double_t _fy3538[10] = {
   0,
   0,
   0,
   0,
   0.05406811,
   0.1127371,
   0.07350862,
   0.0191036,
   0.09114812,
   1};
   Double_t _felx3538[10] = {
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
   Double_t _fely3538[10] = {
   0,
   0,
   0,
   0,
   0.01872748,
   0.02794387,
   0.02288098,
   0.012342,
   0.0436827,
   0.8331112};
   Double_t _fehx3538[10] = {
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
   Double_t _fehy3538[10] = {
   1.766974,
   0.04066552,
   0.01752661,
   0.01393463,
   0.02670468,
   0.03591791,
   0.03142901,
   0.02521778,
   0.07229601,
   2.448811};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3538,_fy3538,_felx3538,_fehx3538,_fely3538,_fehy3538);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3538 = new TH1F("Graph_Graph3538","",100,-100,100);
   Graph_Graph3538->SetMinimum(0);
   Graph_Graph3538->SetMaximum(1.5);
   Graph_Graph3538->SetDirectory(0);
   Graph_Graph3538->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3538->SetLineColor(ci);
   Graph_Graph3538->GetXaxis()->SetRange(1,100);
   Graph_Graph3538->GetXaxis()->CenterTitle(true);
   Graph_Graph3538->GetXaxis()->SetLabelFont(42);
   Graph_Graph3538->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3538->GetXaxis()->SetTitleFont(42);
   Graph_Graph3538->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3538->GetYaxis()->CenterTitle(true);
   Graph_Graph3538->GetYaxis()->SetLabelFont(42);
   Graph_Graph3538->GetYaxis()->SetTitleFont(42);
   Graph_Graph3538->GetZaxis()->SetLabelFont(42);
   Graph_Graph3538->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3538->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3538);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,162.7577,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1613 = new TH2D("ThetaY_vs_Y_mI40_mI35__1613","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8091,28);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8117,1178);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8143,2732);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8169,3436);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8195,3847);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8221,3690);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8247,3537);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8273,2722);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8299,1141);
   ThetaY_vs_Y_mI40_mI35__1613->SetBinContent(8325,26);
   ThetaY_vs_Y_mI40_mI35__1613->SetEntries(22337);
   ThetaY_vs_Y_mI40_mI35__1613->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(1,192.35);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(2,384.7);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(3,577.05);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(4,769.4);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(5,961.75);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(6,1154.1);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(7,1346.45);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(8,1538.8);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(9,1731.15);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(10,1923.5);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(11,2115.85);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(12,2308.2);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(13,2500.55);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(14,2692.9);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(15,2885.25);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(16,3077.6);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(17,3269.95);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(18,3462.3);
   ThetaY_vs_Y_mI40_mI35__1613->SetContourLevel(19,3654.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1613->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1613->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1613->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1613->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1613->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1613->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1613->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1613->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1613->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1613->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1613->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1613->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1613->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1613->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1613->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1613->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-40_-35","Reco vertices","lpf");
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
