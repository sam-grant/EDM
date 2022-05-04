void S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07824859,125,1.486723);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__1794 = new TH1D("S18_ThetaY_mI20_mI15__1794","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__1794->SetBinContent(314,0.3559322);
   S18_ThetaY_mI20_mI15__1794->SetBinContent(315,1.084746);
   S18_ThetaY_mI20_mI15__1794->SetBinContent(316,0.8644068);
   S18_ThetaY_mI20_mI15__1794->SetBinContent(317,1);
   S18_ThetaY_mI20_mI15__1794->SetBinContent(318,0.4915254);
   S18_ThetaY_mI20_mI15__1794->SetBinError(314,0.07767077);
   S18_ThetaY_mI20_mI15__1794->SetBinError(315,0.1355932);
   S18_ThetaY_mI20_mI15__1794->SetBinError(316,0.1210412);
   S18_ThetaY_mI20_mI15__1794->SetBinError(317,0.1301889);
   S18_ThetaY_mI20_mI15__1794->SetBinError(318,0.09127398);
   S18_ThetaY_mI20_mI15__1794->SetMinimum(0);
   S18_ThetaY_mI20_mI15__1794->SetMaximum(1.330226);
   S18_ThetaY_mI20_mI15__1794->SetEntries(224);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1794->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__1794->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1794->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__1794->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__1794->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__1794->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1794->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1794->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1794->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__1794->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__1794->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1794->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1794->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1794->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1794->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1794->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1795 = new TH1D("ThetaY_mI20_mI15__1795","",630,-1575,1575);
   ThetaY_mI20_mI15__1795->SetBinContent(312,0.02576515);
   ThetaY_mI20_mI15__1795->SetBinContent(313,0.5178534);
   ThetaY_mI20_mI15__1795->SetBinContent(314,0.9974495);
   ThetaY_mI20_mI15__1795->SetBinContent(315,1.209296);
   ThetaY_mI20_mI15__1795->SetBinContent(316,1.202946);
   ThetaY_mI20_mI15__1795->SetBinContent(317,1);
   ThetaY_mI20_mI15__1795->SetBinContent(318,0.5091089);
   ThetaY_mI20_mI15__1795->SetBinContent(319,0.02586925);
   ThetaY_mI20_mI15__1795->SetBinError(312,0.001158057);
   ThetaY_mI20_mI15__1795->SetBinError(313,0.00519179);
   ThetaY_mI20_mI15__1795->SetBinError(314,0.007205418);
   ThetaY_mI20_mI15__1795->SetBinError(315,0.007933778);
   ThetaY_mI20_mI15__1795->SetBinError(316,0.00791292);
   ThetaY_mI20_mI15__1795->SetBinError(317,0.007214624);
   ThetaY_mI20_mI15__1795->SetBinError(318,0.005147769);
   ThetaY_mI20_mI15__1795->SetBinError(319,0.001160394);
   ThetaY_mI20_mI15__1795->SetEntries(105441);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1795->SetLineColor(ci);
   ThetaY_mI20_mI15__1795->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1795->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1795->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1795->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1795->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1795->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1795->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1795->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1795->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1795->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1795->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1795->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1795->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1795->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1795->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1795->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1795->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1795->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1795->Draw("AEsame");
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
   
   Double_t _fx3599[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3599[8] = {
   0,
   0,
   0.3568423,
   0.8970058,
   0.7185748,
   1,
   0.9654623,
   0};
   Double_t _felx3599[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3599[8] = {
   0,
   0,
   0.07728503,
   0.1119836,
   0.1003981,
   0.1300148,
   0.1784975,
   0};
   Double_t _fehx3599[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3599[8] = {
   1.213339,
   0.06026154,
   0.09616246,
   0.1269249,
   0.1155159,
   0.1481345,
   0.2150217,
   1.208447};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3599,_fy3599,_felx3599,_fehx3599,_fely3599,_fehy3599);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3599 = new TH1F("Graph_Graph3599","",100,-100,100);
   Graph_Graph3599->SetMinimum(0);
   Graph_Graph3599->SetMaximum(1.5);
   Graph_Graph3599->SetDirectory(0);
   Graph_Graph3599->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3599->SetLineColor(ci);
   Graph_Graph3599->GetXaxis()->SetRange(1,100);
   Graph_Graph3599->GetXaxis()->CenterTitle(true);
   Graph_Graph3599->GetXaxis()->SetLabelFont(42);
   Graph_Graph3599->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3599->GetXaxis()->SetTitleFont(42);
   Graph_Graph3599->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3599->GetYaxis()->CenterTitle(true);
   Graph_Graph3599->GetYaxis()->SetLabelFont(42);
   Graph_Graph3599->GetYaxis()->SetTitleFont(42);
   Graph_Graph3599->GetZaxis()->SetLabelFont(42);
   Graph_Graph3599->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3599->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3599);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.330226,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1796 = new TH2D("ThetaY_vs_Y_mI20_mI15__1796","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8121,495);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8147,9949);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8173,19163);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8199,23233);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8225,23111);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8251,19212);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8277,9781);
   ThetaY_vs_Y_mI20_mI15__1796->SetBinContent(8303,497);
   ThetaY_vs_Y_mI20_mI15__1796->SetEntries(105441);
   ThetaY_vs_Y_mI20_mI15__1796->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(1,1161.65);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(2,2323.3);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(3,3484.95);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(4,4646.6);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(5,5808.25);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(6,6969.9);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(7,8131.55);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(8,9293.2);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(9,10454.85);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(10,11616.5);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(11,12778.15);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(12,13939.8);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(13,15101.45);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(14,16263.1);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(15,17424.75);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(16,18586.4);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(17,19748.05);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(18,20909.7);
   ThetaY_vs_Y_mI20_mI15__1796->SetContourLevel(19,22071.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1796->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1796->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1796->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1796->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1796->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1796->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1796->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1796->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1796->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1796->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1796->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1796->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1796->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1796->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1796->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1796->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
