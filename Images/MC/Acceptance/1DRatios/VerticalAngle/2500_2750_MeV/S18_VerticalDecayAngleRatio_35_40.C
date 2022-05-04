void S18_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.07476367,125,1.42051);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__1827 = new TH1D("S18_ThetaY_35_40__1827","",630,-1575,1575);
   S18_ThetaY_35_40__1827->SetBinContent(313,0.4444444);
   S18_ThetaY_35_40__1827->SetBinContent(314,1);
   S18_ThetaY_35_40__1827->SetBinContent(315,0.7777778);
   S18_ThetaY_35_40__1827->SetBinContent(316,0.1111111);
   S18_ThetaY_35_40__1827->SetBinContent(317,0.1111111);
   S18_ThetaY_35_40__1827->SetBinError(313,0.2222222);
   S18_ThetaY_35_40__1827->SetBinError(314,0.3333333);
   S18_ThetaY_35_40__1827->SetBinError(315,0.2939724);
   S18_ThetaY_35_40__1827->SetBinError(316,0.1111111);
   S18_ThetaY_35_40__1827->SetBinError(317,0.1111111);
   S18_ThetaY_35_40__1827->SetMinimum(0);
   S18_ThetaY_35_40__1827->SetMaximum(1.270982);
   S18_ThetaY_35_40__1827->SetEntries(22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1827->SetLineColor(ci);
   S18_ThetaY_35_40__1827->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1827->SetMarkerColor(ci);
   S18_ThetaY_35_40__1827->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__1827->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__1827->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1827->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1827->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1827->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__1827->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__1827->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1827->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1827->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1827->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1827->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1827->Draw("AE");
   
   TH1D *ThetaY_35_40__1828 = new TH1D("ThetaY_35_40__1828","",630,-1575,1575);
   ThetaY_35_40__1828->SetBinContent(312,0.02559277);
   ThetaY_35_40__1828->SetBinContent(313,0.4956718);
   ThetaY_35_40__1828->SetBinContent(314,1);
   ThetaY_35_40__1828->SetBinContent(315,1.155438);
   ThetaY_35_40__1828->SetBinContent(316,1.130975);
   ThetaY_35_40__1828->SetBinContent(317,0.9954836);
   ThetaY_35_40__1828->SetBinContent(318,0.50207);
   ThetaY_35_40__1828->SetBinContent(319,0.01768912);
   ThetaY_35_40__1828->SetBinError(312,0.00310358);
   ThetaY_35_40__1828->SetBinError(313,0.01365845);
   ThetaY_35_40__1828->SetBinError(314,0.01940011);
   ThetaY_35_40__1828->SetBinError(315,0.02085344);
   ThetaY_35_40__1828->SetBinError(316,0.02063149);
   ThetaY_35_40__1828->SetBinError(317,0.01935625);
   ThetaY_35_40__1828->SetBinError(318,0.01374632);
   ThetaY_35_40__1828->SetBinError(319,0.002580224);
   ThetaY_35_40__1828->SetEntries(14143);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1828->SetLineColor(ci);
   ThetaY_35_40__1828->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1828->SetMarkerColor(ci);
   ThetaY_35_40__1828->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1828->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1828->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1828->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1828->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1828->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1828->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1828->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1828->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1828->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1828->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1828->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1828->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1828->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1828->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1828->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1828->Draw("AEsame");
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
   
   Double_t _fx3610[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3610[8] = {
   0,
   0.8966506,
   1,
   0.6731451,
   0.09824367,
   0.1116152,
   0,
   0};
   Double_t _felx3610[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3610[8] = {
   0,
   0.4296399,
   0.32755,
   0.2484911,
   0.08127686,
   0.09233992,
   0,
   0};
   Double_t _fehx3610[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3610[8] = {
   8.101983,
   0.7108995,
   0.4578158,
   0.3631997,
   0.226038,
   0.2568223,
   0.4077104,
   11.79353};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3610,_fy3610,_felx3610,_fehx3610,_fely3610,_fehy3610);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3610 = new TH1F("Graph_Graph3610","",100,-100,100);
   Graph_Graph3610->SetMinimum(0);
   Graph_Graph3610->SetMaximum(1.5);
   Graph_Graph3610->SetDirectory(0);
   Graph_Graph3610->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3610->SetLineColor(ci);
   Graph_Graph3610->GetXaxis()->SetRange(1,100);
   Graph_Graph3610->GetXaxis()->CenterTitle(true);
   Graph_Graph3610->GetXaxis()->SetLabelFont(42);
   Graph_Graph3610->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3610->GetXaxis()->SetTitleFont(42);
   Graph_Graph3610->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3610->GetYaxis()->CenterTitle(true);
   Graph_Graph3610->GetYaxis()->SetLabelFont(42);
   Graph_Graph3610->GetYaxis()->SetTitleFont(42);
   Graph_Graph3610->GetZaxis()->SetLabelFont(42);
   Graph_Graph3610->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3610->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3610);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.270982,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1829 = new TH2D("ThetaY_vs_Y_35_40__1829","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8132,68);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8158,1317);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8184,2657);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8210,3070);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8236,3005);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8262,2645);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8288,1334);
   ThetaY_vs_Y_35_40__1829->SetBinContent(8314,47);
   ThetaY_vs_Y_35_40__1829->SetEntries(14143);
   ThetaY_vs_Y_35_40__1829->SetContour(20);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(1,153.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(2,307);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(3,460.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(4,614);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(5,767.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(6,921);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(7,1074.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(8,1228);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(9,1381.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(10,1535);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(11,1688.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(12,1842);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(13,1995.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(14,2149);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(15,2302.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(16,2456);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(17,2609.5);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(18,2763);
   ThetaY_vs_Y_35_40__1829->SetContourLevel(19,2916.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1829->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1829->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1829->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1829->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1829->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1829->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1829->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1829->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1829->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1829->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1829->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1829->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1829->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1829->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1829->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1829->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_35_40","Reco vertices","lpf");
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
