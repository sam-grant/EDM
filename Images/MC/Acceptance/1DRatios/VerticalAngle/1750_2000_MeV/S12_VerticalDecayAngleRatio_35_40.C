void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.07202864,125,1.368544);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__1257 = new TH1D("S12_ThetaY_35_40__1257","",630,-1575,1575);
   S12_ThetaY_35_40__1257->SetBinContent(310,0.09677419);
   S12_ThetaY_35_40__1257->SetBinContent(311,0.2580645);
   S12_ThetaY_35_40__1257->SetBinContent(312,0.4516129);
   S12_ThetaY_35_40__1257->SetBinContent(313,1);
   S12_ThetaY_35_40__1257->SetBinContent(314,0.5806452);
   S12_ThetaY_35_40__1257->SetBinContent(315,0.9032258);
   S12_ThetaY_35_40__1257->SetBinContent(316,0.1612903);
   S12_ThetaY_35_40__1257->SetBinError(310,0.05587261);
   S12_ThetaY_35_40__1257->SetBinError(311,0.09123958);
   S12_ThetaY_35_40__1257->SetBinError(312,0.1206986);
   S12_ThetaY_35_40__1257->SetBinError(313,0.1796053);
   S12_ThetaY_35_40__1257->SetBinError(314,0.1368594);
   S12_ThetaY_35_40__1257->SetBinError(315,0.1706936);
   S12_ThetaY_35_40__1257->SetBinError(316,0.07213123);
   S12_ThetaY_35_40__1257->SetMinimum(0);
   S12_ThetaY_35_40__1257->SetMaximum(1.224487);
   S12_ThetaY_35_40__1257->SetEntries(107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1257->SetLineColor(ci);
   S12_ThetaY_35_40__1257->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1257->SetMarkerColor(ci);
   S12_ThetaY_35_40__1257->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__1257->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__1257->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1257->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1257->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1257->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__1257->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__1257->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1257->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1257->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1257->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1257->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1257->Draw("AE");
   
   TH1D *ThetaY_35_40__1258 = new TH1D("ThetaY_35_40__1258","",630,-1575,1575);
   ThetaY_35_40__1258->SetBinContent(309,0.001001502);
   ThetaY_35_40__1258->SetBinContent(310,0.168002);
   ThetaY_35_40__1258->SetBinContent(311,0.6031547);
   ThetaY_35_40__1258->SetBinContent(312,0.8580371);
   ThetaY_35_40__1258->SetBinContent(313,1);
   ThetaY_35_40__1258->SetBinContent(314,1.089885);
   ThetaY_35_40__1258->SetBinContent(315,1.112919);
   ThetaY_35_40__1258->SetBinContent(316,1.11317);
   ThetaY_35_40__1258->SetBinContent(317,1.10691);
   ThetaY_35_40__1258->SetBinContent(318,1.003756);
   ThetaY_35_40__1258->SetBinContent(319,0.8743115);
   ThetaY_35_40__1258->SetBinContent(320,0.5873811);
   ThetaY_35_40__1258->SetBinContent(321,0.1705058);
   ThetaY_35_40__1258->SetBinError(309,0.0005007511);
   ThetaY_35_40__1258->SetBinError(310,0.006485645);
   ThetaY_35_40__1258->SetBinError(311,0.01228882);
   ThetaY_35_40__1258->SetBinError(312,0.01465713);
   ThetaY_35_40__1258->SetBinError(313,0.01582326);
   ThetaY_35_40__1258->SetBinError(314,0.0165191);
   ThetaY_35_40__1258->SetBinError(315,0.01669275);
   ThetaY_35_40__1258->SetBinError(316,0.01669463);
   ThetaY_35_40__1258->SetBinError(317,0.01664762);
   ThetaY_35_40__1258->SetBinError(318,0.01585295);
   ThetaY_35_40__1258->SetBinError(319,0.01479548);
   ThetaY_35_40__1258->SetBinError(320,0.01212707);
   ThetaY_35_40__1258->SetBinError(321,0.006533795);
   ThetaY_35_40__1258->SetEntries(38698);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1258->SetLineColor(ci);
   ThetaY_35_40__1258->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1258->SetMarkerColor(ci);
   ThetaY_35_40__1258->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1258->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1258->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1258->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1258->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1258->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1258->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1258->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1258->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1258->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1258->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1258->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1258->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1258->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1258->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1258->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1258->Draw("AEsame");
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
   
   Double_t _fx3420[13] = {
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
   27.5};
   Double_t _fy3420[13] = {
   0,
   0.57603,
   0.4278579,
   0.5263326,
   1,
   0.5327583,
   0.8115824,
   0.1448928,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3420[13] = {
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
   Double_t _fely3420[13] = {
   0,
   0.3140095,
   0.1482781,
   0.1392357,
   0.1793019,
   0.1246395,
   0.1529165,
   0.06261399,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3420[13] = {
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
   Double_t _fehy3420[13] = {
   75.30347,
   0.5627933,
   0.211518,
   0.1820978,
   0.2147995,
   0.1579111,
   0.1848953,
   0.09811162,
   0.05366303,
   0.05917918,
   0.06794312,
   0.1011458,
   0.348775};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3420,_fy3420,_felx3420,_fehx3420,_fely3420,_fehy3420);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3420 = new TH1F("Graph_Graph3420","",100,-100,100);
   Graph_Graph3420->SetMinimum(0);
   Graph_Graph3420->SetMaximum(1.5);
   Graph_Graph3420->SetDirectory(0);
   Graph_Graph3420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3420->SetLineColor(ci);
   Graph_Graph3420->GetXaxis()->SetRange(1,100);
   Graph_Graph3420->GetXaxis()->CenterTitle(true);
   Graph_Graph3420->GetXaxis()->SetLabelFont(42);
   Graph_Graph3420->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3420->GetXaxis()->SetTitleFont(42);
   Graph_Graph3420->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3420->GetYaxis()->CenterTitle(true);
   Graph_Graph3420->GetYaxis()->SetLabelFont(42);
   Graph_Graph3420->GetYaxis()->SetTitleFont(42);
   Graph_Graph3420->GetZaxis()->SetLabelFont(42);
   Graph_Graph3420->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3420->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3420);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.224487,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1259 = new TH2D("ThetaY_vs_Y_35_40__1259","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8054,4);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8080,671);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8106,2409);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8132,3427);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8158,3994);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8184,4353);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8210,4445);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8236,4446);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8262,4421);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8288,4009);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8314,3492);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8340,2346);
   ThetaY_vs_Y_35_40__1259->SetBinContent(8366,681);
   ThetaY_vs_Y_35_40__1259->SetEntries(38698);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1259->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1259->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1259->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1259->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1259->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1259->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1259->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1259->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1259->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1259->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1259->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1259->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1259->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1259->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1259->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1259->Draw("COL");
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
