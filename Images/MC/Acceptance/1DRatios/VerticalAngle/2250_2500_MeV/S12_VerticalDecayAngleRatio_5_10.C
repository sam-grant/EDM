void S12_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.0709524,125,1.348096);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__1581 = new TH1D("S12_ThetaY_5_10__1581","",630,-1575,1575);
   S12_ThetaY_5_10__1581->SetBinContent(312,0.1292517);
   S12_ThetaY_5_10__1581->SetBinContent(313,0.7687075);
   S12_ThetaY_5_10__1581->SetBinContent(314,1);
   S12_ThetaY_5_10__1581->SetBinContent(315,0.9387755);
   S12_ThetaY_5_10__1581->SetBinContent(316,1.040816);
   S12_ThetaY_5_10__1581->SetBinContent(317,0.9455782);
   S12_ThetaY_5_10__1581->SetBinContent(318,0.2176871);
   S12_ThetaY_5_10__1581->SetBinError(312,0.02965237);
   S12_ThetaY_5_10__1581->SetBinError(313,0.07231392);
   S12_ThetaY_5_10__1581->SetBinError(314,0.08247861);
   S12_ThetaY_5_10__1581->SetBinError(315,0.07991388);
   S12_ThetaY_5_10__1581->SetBinError(316,0.08414501);
   S12_ThetaY_5_10__1581->SetBinError(317,0.0802029);
   S12_ThetaY_5_10__1581->SetBinError(318,0.038482);
   S12_ThetaY_5_10__1581->SetMinimum(0);
   S12_ThetaY_5_10__1581->SetMaximum(1.206191);
   S12_ThetaY_5_10__1581->SetEntries(741);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1581->SetLineColor(ci);
   S12_ThetaY_5_10__1581->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1581->SetMarkerColor(ci);
   S12_ThetaY_5_10__1581->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__1581->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__1581->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1581->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1581->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1581->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__1581->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__1581->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1581->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1581->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1581->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1581->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1581->Draw("AE");
   
   TH1D *ThetaY_5_10__1582 = new TH1D("ThetaY_5_10__1582","",630,-1575,1575);
   ThetaY_5_10__1582->SetBinContent(311,0.006953843);
   ThetaY_5_10__1582->SetBinContent(312,0.3215802);
   ThetaY_5_10__1582->SetBinContent(313,0.7777804);
   ThetaY_5_10__1582->SetBinContent(314,1);
   ThetaY_5_10__1582->SetBinContent(315,1.096537);
   ThetaY_5_10__1582->SetBinContent(316,1.08795);
   ThetaY_5_10__1582->SetBinContent(317,1.00021);
   ThetaY_5_10__1582->SetBinContent(318,0.7747701);
   ThetaY_5_10__1582->SetBinContent(319,0.3207169);
   ThetaY_5_10__1582->SetBinContent(320,0.006720493);
   ThetaY_5_10__1582->SetBinError(311,0.0004028253);
   ThetaY_5_10__1582->SetBinError(312,0.002739359);
   ThetaY_5_10__1582->SetBinError(313,0.004260228);
   ThetaY_5_10__1582->SetBinError(314,0.004830636);
   ThetaY_5_10__1582->SetBinError(315,0.005058433);
   ThetaY_5_10__1582->SetBinError(316,0.005038587);
   ThetaY_5_10__1582->SetBinError(317,0.004831143);
   ThetaY_5_10__1582->SetBinError(318,0.004251976);
   ThetaY_5_10__1582->SetBinError(319,0.002735679);
   ThetaY_5_10__1582->SetBinError(320,0.0003960088);
   ThetaY_5_10__1582->SetEntries(273975);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1582->SetLineColor(ci);
   ThetaY_5_10__1582->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1582->SetMarkerColor(ci);
   ThetaY_5_10__1582->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1582->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1582->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1582->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1582->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1582->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1582->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1582->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1582->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1582->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1582->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1582->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1582->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1582->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1582->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1582->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1582->Draw("AEsame");
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
   
   Double_t _fx3528[10] = {
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
   Double_t _fy3528[10] = {
   0,
   0.4019267,
   0.9883349,
   1,
   0.8561275,
   0.9566768,
   0.9453797,
   0.2809699,
   0,
   0};
   Double_t _felx3528[10] = {
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
   Double_t _fely3528[10] = {
   0,
   0.09145001,
   0.09299287,
   0.08252498,
   0.07289609,
   0.07738402,
   0.08021838,
   0.04943109,
   0,
   0};
   Double_t _fehx3528[10] = {
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
   Double_t _fehy3528[10] = {
   1.806587,
   0.1150783,
   0.1021862,
   0.08963558,
   0.0793855,
   0.08391355,
   0.0873341,
   0.05900076,
   0.0390525,
   1.869516};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3528,_fy3528,_felx3528,_fehx3528,_fely3528,_fehy3528);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3528 = new TH1F("Graph_Graph3528","",100,-100,100);
   Graph_Graph3528->SetMinimum(0);
   Graph_Graph3528->SetMaximum(1.5);
   Graph_Graph3528->SetDirectory(0);
   Graph_Graph3528->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3528->SetLineColor(ci);
   Graph_Graph3528->GetXaxis()->SetRange(1,100);
   Graph_Graph3528->GetXaxis()->CenterTitle(true);
   Graph_Graph3528->GetXaxis()->SetLabelFont(42);
   Graph_Graph3528->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3528->GetXaxis()->SetTitleFont(42);
   Graph_Graph3528->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3528->GetYaxis()->CenterTitle(true);
   Graph_Graph3528->GetYaxis()->SetLabelFont(42);
   Graph_Graph3528->GetYaxis()->SetTitleFont(42);
   Graph_Graph3528->GetZaxis()->SetLabelFont(42);
   Graph_Graph3528->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3528->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3528);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.206191,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1583 = new TH2D("ThetaY_vs_Y_5_10__1583","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8100,298);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8126,13781);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8152,33331);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8178,42854);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8204,46991);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8230,46623);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8256,42863);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8282,33202);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8308,13744);
   ThetaY_vs_Y_5_10__1583->SetBinContent(8334,288);
   ThetaY_vs_Y_5_10__1583->SetEntries(273975);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1583->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1583->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1583->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1583->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1583->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1583->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1583->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1583->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1583->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1583->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1583->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1583->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1583->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1583->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1583->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1583->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
