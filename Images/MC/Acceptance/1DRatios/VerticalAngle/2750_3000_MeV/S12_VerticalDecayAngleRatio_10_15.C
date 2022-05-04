void S12_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-1.449525,125,27.54098);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__36 = new TH1D("S12_ThetaY_10_15__36","",630,-1575,1575);
   S12_ThetaY_10_15__36->SetBinContent(313,1);
   S12_ThetaY_10_15__36->SetBinContent(314,4.5);
   S12_ThetaY_10_15__36->SetBinContent(315,5.5);
   S12_ThetaY_10_15__36->SetBinContent(316,5.5);
   S12_ThetaY_10_15__36->SetBinContent(317,1.5);
   S12_ThetaY_10_15__36->SetBinError(313,0.7071068);
   S12_ThetaY_10_15__36->SetBinError(314,1.5);
   S12_ThetaY_10_15__36->SetBinError(315,1.658312);
   S12_ThetaY_10_15__36->SetBinError(316,1.658312);
   S12_ThetaY_10_15__36->SetBinError(317,0.8660254);
   S12_ThetaY_10_15__36->SetMinimum(0);
   S12_ThetaY_10_15__36->SetMaximum(24.64193);
   S12_ThetaY_10_15__36->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__36->SetLineColor(ci);
   S12_ThetaY_10_15__36->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__36->SetMarkerColor(ci);
   S12_ThetaY_10_15__36->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__36->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__36->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__36->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__36->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__36->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__36->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__36->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__36->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__36->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__36->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__36->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__36->Draw("AE");
   
   TH1D *ThetaY_10_15__37 = new TH1D("ThetaY_10_15__37","",630,-1575,1575);
   ThetaY_10_15__37->SetBinContent(313,1);
   ThetaY_10_15__37->SetBinContent(314,12.50384);
   ThetaY_10_15__37->SetBinContent(315,22.40176);
   ThetaY_10_15__37->SetBinContent(316,22.2865);
   ThetaY_10_15__37->SetBinContent(317,12.29748);
   ThetaY_10_15__37->SetBinContent(318,0.8946213);
   ThetaY_10_15__37->SetBinError(313,0.03313148);
   ThetaY_10_15__37->SetBinError(314,0.1171555);
   ThetaY_10_15__37->SetBinError(315,0.1568129);
   ThetaY_10_15__37->SetBinError(316,0.156409);
   ThetaY_10_15__37->SetBinError(317,0.1161847);
   ThetaY_10_15__37->SetBinError(318,0.03133722);
   ThetaY_10_15__37->SetEntries(65031);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__37->SetLineColor(ci);
   ThetaY_10_15__37->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__37->SetMarkerColor(ci);
   ThetaY_10_15__37->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__37->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__37->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__37->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__37->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__37->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__37->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__37->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__37->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__37->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__37->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__37->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__37->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__37->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__37->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__37->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__37->Draw("AEsame");
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
   
   Double_t _fx3013[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3013[6] = {
   1,
   0.3598894,
   0.2455165,
   0.2467862,
   0.1219763,
   0};
   Double_t _felx3013[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3013[6] = {
   0.6463521,
   0.1177442,
   0.07290472,
   0.07328185,
   0.06639027,
   0};
   Double_t _fehx3013[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3013[6] = {
   1.322289,
   0.1644522,
   0.09861255,
   0.09912273,
   0.1186811,
   1.030102};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-100,100);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1.5);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3013->SetLineColor(ci);
   Graph_Graph3013->GetXaxis()->SetRange(1,100);
   Graph_Graph3013->GetXaxis()->CenterTitle(true);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3013->GetYaxis()->CenterTitle(true);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,24.64193,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__38 = new TH2D("ThetaY_vs_Y_10_15__38","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__38->SetBinContent(8153,911);
   ThetaY_vs_Y_10_15__38->SetBinContent(8179,11391);
   ThetaY_vs_Y_10_15__38->SetBinContent(8205,20408);
   ThetaY_vs_Y_10_15__38->SetBinContent(8231,20303);
   ThetaY_vs_Y_10_15__38->SetBinContent(8257,11203);
   ThetaY_vs_Y_10_15__38->SetBinContent(8283,815);
   ThetaY_vs_Y_10_15__38->SetEntries(65031);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__38->SetLineColor(ci);
   ThetaY_vs_Y_10_15__38->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__38->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__38->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__38->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__38->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__38->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__38->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__38->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__38->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__38->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__38->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__38->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__38->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__38->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__38->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
