void S12_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06545687,125,1.243681);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__1575 = new TH1D("S12_ThetaY_mI5_0__1575","",630,-1575,1575);
   S12_ThetaY_mI5_0__1575->SetBinContent(312,0.005128205);
   S12_ThetaY_mI5_0__1575->SetBinContent(313,0.3794872);
   S12_ThetaY_mI5_0__1575->SetBinContent(314,0.7589744);
   S12_ThetaY_mI5_0__1575->SetBinContent(315,1);
   S12_ThetaY_mI5_0__1575->SetBinContent(316,0.7333333);
   S12_ThetaY_mI5_0__1575->SetBinContent(317,0.7025641);
   S12_ThetaY_mI5_0__1575->SetBinContent(318,0.5641026);
   S12_ThetaY_mI5_0__1575->SetBinContent(319,0.02564103);
   S12_ThetaY_mI5_0__1575->SetBinError(312,0.005128205);
   S12_ThetaY_mI5_0__1575->SetBinError(313,0.04411449);
   S12_ThetaY_mI5_0__1575->SetBinError(314,0.06238731);
   S12_ThetaY_mI5_0__1575->SetBinError(315,0.07161149);
   S12_ThetaY_mI5_0__1575->SetBinError(316,0.06132441);
   S12_ThetaY_mI5_0__1575->SetBinError(317,0.0600241);
   S12_ThetaY_mI5_0__1575->SetBinError(318,0.05378507);
   S12_ThetaY_mI5_0__1575->SetBinError(319,0.01146702);
   S12_ThetaY_mI5_0__1575->SetMinimum(0);
   S12_ThetaY_mI5_0__1575->SetMaximum(1.112767);
   S12_ThetaY_mI5_0__1575->SetEntries(813);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1575->SetLineColor(ci);
   S12_ThetaY_mI5_0__1575->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1575->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__1575->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__1575->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__1575->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1575->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1575->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1575->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__1575->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__1575->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1575->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1575->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1575->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1575->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1575->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1576 = new TH1D("ThetaY_mI5_0__1576","",630,-1575,1575);
   ThetaY_mI5_0__1576->SetBinContent(311,0.006153606);
   ThetaY_mI5_0__1576->SetBinContent(312,0.2956263);
   ThetaY_mI5_0__1576->SetBinContent(313,0.721374);
   ThetaY_mI5_0__1576->SetBinContent(314,0.910909);
   ThetaY_mI5_0__1576->SetBinContent(315,1);
   ThetaY_mI5_0__1576->SetBinContent(316,1.011606);
   ThetaY_mI5_0__1576->SetBinContent(317,0.9059628);
   ThetaY_mI5_0__1576->SetBinContent(318,0.7080347);
   ThetaY_mI5_0__1576->SetBinContent(319,0.2992678);
   ThetaY_mI5_0__1576->SetBinContent(320,0.00673781);
   ThetaY_mI5_0__1576->SetBinError(311,0.0003461674);
   ThetaY_mI5_0__1576->SetBinError(312,0.002399346);
   ThetaY_mI5_0__1576->SetBinError(313,0.003748017);
   ThetaY_mI5_0__1576->SetBinError(314,0.004211713);
   ThetaY_mI5_0__1576->SetBinError(315,0.004412872);
   ThetaY_mI5_0__1576->SetBinError(316,0.004438406);
   ThetaY_mI5_0__1576->SetBinError(317,0.004200263);
   ThetaY_mI5_0__1576->SetBinError(318,0.003713202);
   ThetaY_mI5_0__1576->SetBinError(319,0.002414078);
   ThetaY_mI5_0__1576->SetBinError(320,0.0003622269);
   ThetaY_mI5_0__1576->SetEntries(301214);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1576->SetLineColor(ci);
   ThetaY_mI5_0__1576->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1576->SetMarkerColor(ci);
   ThetaY_mI5_0__1576->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1576->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1576->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1576->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1576->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1576->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1576->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1576->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1576->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1576->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1576->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1576->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1576->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1576->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1576->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1576->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1576->Draw("AEsame");
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
   
   Double_t _fx3526[10] = {
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
   Double_t _fy3526[10] = {
   0,
   0.01734692,
   0.5260616,
   0.8332054,
   1,
   0.7249198,
   0.7754889,
   0.7967159,
   0.0856792,
   0};
   Double_t _felx3526[10] = {
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
   Double_t _fely3526[10] = {
   0,
   0.01435035,
   0.06107504,
   0.06851907,
   0.07168512,
   0.06063262,
   0.06627024,
   0.07596191,
   0.03701312,
   0};
   Double_t _fehx3526[10] = {
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
   Double_t _fehy3526[10] = {
   1.538722,
   0.03989404,
   0.06861536,
   0.07440111,
   0.07701924,
   0.06593042,
   0.07219226,
   0.08357649,
   0.05797732,
   1.404952};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3526,_fy3526,_felx3526,_fehx3526,_fely3526,_fehy3526);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3526 = new TH1F("Graph_Graph3526","",100,-100,100);
   Graph_Graph3526->SetMinimum(0);
   Graph_Graph3526->SetMaximum(1.5);
   Graph_Graph3526->SetDirectory(0);
   Graph_Graph3526->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3526->SetLineColor(ci);
   Graph_Graph3526->GetXaxis()->SetRange(1,100);
   Graph_Graph3526->GetXaxis()->CenterTitle(true);
   Graph_Graph3526->GetXaxis()->SetLabelFont(42);
   Graph_Graph3526->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3526->GetXaxis()->SetTitleFont(42);
   Graph_Graph3526->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3526->GetYaxis()->CenterTitle(true);
   Graph_Graph3526->GetYaxis()->SetLabelFont(42);
   Graph_Graph3526->GetYaxis()->SetTitleFont(42);
   Graph_Graph3526->GetZaxis()->SetLabelFont(42);
   Graph_Graph3526->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3526->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3526);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.112767,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1577 = new TH2D("ThetaY_vs_Y_mI5_0__1577","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8098,316);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8124,15181);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8150,37044);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8176,46777);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8202,51352);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8228,51948);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8254,46523);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8280,36359);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8306,15368);
   ThetaY_vs_Y_mI5_0__1577->SetBinContent(8332,346);
   ThetaY_vs_Y_mI5_0__1577->SetEntries(301214);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1577->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1577->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1577->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1577->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1577->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1577->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1577->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1577->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1577->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1577->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1577->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1577->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1577->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1577->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1577->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1577->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
