void S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1364133,125,2.591853);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__1098 = new TH1D("S18_ThetaY_mI40_mI35__1098","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(314,0.1);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(315,0.7);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(316,2.1);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(317,1);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(318,0.9);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(319,1.05);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(320,1);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(321,1);
   S18_ThetaY_mI40_mI35__1098->SetBinContent(322,0.2);
   S18_ThetaY_mI40_mI35__1098->SetBinError(314,0.07071068);
   S18_ThetaY_mI40_mI35__1098->SetBinError(315,0.1870829);
   S18_ThetaY_mI40_mI35__1098->SetBinError(316,0.324037);
   S18_ThetaY_mI40_mI35__1098->SetBinError(317,0.2236068);
   S18_ThetaY_mI40_mI35__1098->SetBinError(318,0.212132);
   S18_ThetaY_mI40_mI35__1098->SetBinError(319,0.2291288);
   S18_ThetaY_mI40_mI35__1098->SetBinError(320,0.2236068);
   S18_ThetaY_mI40_mI35__1098->SetBinError(321,0.2236068);
   S18_ThetaY_mI40_mI35__1098->SetBinError(322,0.1);
   S18_ThetaY_mI40_mI35__1098->SetMinimum(0);
   S18_ThetaY_mI40_mI35__1098->SetMaximum(2.319026);
   S18_ThetaY_mI40_mI35__1098->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1098->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__1098->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1098->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__1098->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__1098->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__1098->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1098->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1098->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1098->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__1098->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__1098->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1098->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1098->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1098->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1098->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1098->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1099 = new TH1D("ThetaY_mI40_mI35__1099","",630,-1575,1575);
   ThetaY_mI40_mI35__1099->SetBinContent(308,0.00135257);
   ThetaY_mI40_mI35__1099->SetBinContent(309,0.2858431);
   ThetaY_mI40_mI35__1099->SetBinContent(310,0.9824166);
   ThetaY_mI40_mI35__1099->SetBinContent(311,1.459874);
   ThetaY_mI40_mI35__1099->SetBinContent(312,1.747971);
   ThetaY_mI40_mI35__1099->SetBinContent(313,1.916141);
   ThetaY_mI40_mI35__1099->SetBinContent(314,2.059513);
   ThetaY_mI40_mI35__1099->SetBinContent(315,2.102795);
   ThetaY_mI40_mI35__1099->SetBinContent(316,2.108206);
   ThetaY_mI40_mI35__1099->SetBinContent(317,1.999549);
   ThetaY_mI40_mI35__1099->SetBinContent(318,1.931019);
   ThetaY_mI40_mI35__1099->SetBinContent(319,1.777277);
   ThetaY_mI40_mI35__1099->SetBinContent(320,1.484671);
   ThetaY_mI40_mI35__1099->SetBinContent(321,1);
   ThetaY_mI40_mI35__1099->SetBinContent(322,0.2849414);
   ThetaY_mI40_mI35__1099->SetBinContent(323,0.0009017133);
   ThetaY_mI40_mI35__1099->SetBinError(308,0.0007809066);
   ThetaY_mI40_mI35__1099->SetBinError(309,0.01135228);
   ThetaY_mI40_mI35__1099->SetBinError(310,0.02104588);
   ThetaY_mI40_mI35__1099->SetBinError(311,0.02565529);
   ThetaY_mI40_mI35__1099->SetBinError(312,0.02807284);
   ThetaY_mI40_mI35__1099->SetBinError(313,0.02939226);
   ThetaY_mI40_mI35__1099->SetBinError(314,0.03047204);
   ThetaY_mI40_mI35__1099->SetBinError(315,0.03079057);
   ThetaY_mI40_mI35__1099->SetBinError(316,0.03083016);
   ThetaY_mI40_mI35__1099->SetBinError(317,0.03002516);
   ThetaY_mI40_mI35__1099->SetBinError(318,0.02950615);
   ThetaY_mI40_mI35__1099->SetBinError(319,0.02830719);
   ThetaY_mI40_mI35__1099->SetBinError(320,0.02587226);
   ThetaY_mI40_mI35__1099->SetBinError(321,0.02123338);
   ThetaY_mI40_mI35__1099->SetBinError(322,0.01133436);
   ThetaY_mI40_mI35__1099->SetBinError(323,0.0006376076);
   ThetaY_mI40_mI35__1099->SetEntries(46894);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1099->SetLineColor(ci);
   ThetaY_mI40_mI35__1099->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1099->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1099->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1099->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1099->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1099->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1099->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1099->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1099->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1099->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1099->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1099->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1099->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1099->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1099->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1099->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1099->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1099->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1099->Draw("AEsame");
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
   
   Double_t _fx3367[16] = {
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
   37.5};
   Double_t _fy3367[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.04855517,
   0.3328902,
   0.9961078,
   0.5001127,
   0.4660752,
   0.5907915,
   0.67355,
   1,
   0.7018987,
   0};
   Double_t _felx3367[16] = {
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
   Double_t _fely3367[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.03136645,
   0.08801815,
   0.1537586,
   0.1111243,
   0.1090423,
   0.128212,
   0.1497729,
   0.2226733,
   0.3367595,
   0};
   Double_t _fehx3367[16] = {
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
   Double_t _fehy3367[16] = {
   93.95507,
   0.3225016,
   0.09373822,
   0.06307207,
   0.05267418,
   0.04805024,
   0.06407337,
   0.115088,
   0.1795843,
   0.1390935,
   0.1381521,
   0.1596343,
   0.1875169,
   0.2789212,
   0.5581294,
   167.5225};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3367,_fy3367,_felx3367,_fehx3367,_fely3367,_fehy3367);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3367 = new TH1F("Graph_Graph3367","",100,-100,100);
   Graph_Graph3367->SetMinimum(0);
   Graph_Graph3367->SetMaximum(1.5);
   Graph_Graph3367->SetDirectory(0);
   Graph_Graph3367->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3367->SetLineColor(ci);
   Graph_Graph3367->GetXaxis()->SetRange(1,100);
   Graph_Graph3367->GetXaxis()->CenterTitle(true);
   Graph_Graph3367->GetXaxis()->SetLabelFont(42);
   Graph_Graph3367->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3367->GetXaxis()->SetTitleFont(42);
   Graph_Graph3367->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3367->GetYaxis()->CenterTitle(true);
   Graph_Graph3367->GetYaxis()->SetLabelFont(42);
   Graph_Graph3367->GetYaxis()->SetTitleFont(42);
   Graph_Graph3367->GetZaxis()->SetLabelFont(42);
   Graph_Graph3367->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3367->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3367);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.319026,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1100 = new TH2D("ThetaY_vs_Y_mI40_mI35__1100","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8013,3);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8039,634);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8065,2179);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8091,3238);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8117,3877);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8143,4250);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8169,4568);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8195,4664);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8221,4676);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8247,4435);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8273,4283);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8299,3942);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8325,3293);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8351,2218);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8377,632);
   ThetaY_vs_Y_mI40_mI35__1100->SetBinContent(8403,2);
   ThetaY_vs_Y_mI40_mI35__1100->SetEntries(46894);
   ThetaY_vs_Y_mI40_mI35__1100->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(1,233.8);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(2,467.6);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(3,701.4);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(4,935.2);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(5,1169);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(6,1402.8);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(7,1636.6);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(8,1870.4);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(9,2104.2);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(10,2338);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(11,2571.8);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(12,2805.6);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(13,3039.4);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(14,3273.2);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(15,3507);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(16,3740.8);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(17,3974.6);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(18,4208.4);
   ThetaY_vs_Y_mI40_mI35__1100->SetContourLevel(19,4442.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1100->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1100->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1100->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1100->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1100->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1100->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1100->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1100->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1100->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1100->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1100->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1100->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1100->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1100->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1100->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1100->Draw("COL");
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
