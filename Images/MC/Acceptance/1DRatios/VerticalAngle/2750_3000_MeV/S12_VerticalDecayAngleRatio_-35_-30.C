void S12_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.1181982,125,2.245765);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__9 = new TH1D("S12_ThetaY_mI35_mI30__9","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__9->SetBinContent(316,0.4);
   S12_ThetaY_mI35_mI30__9->SetBinContent(317,1);
   S12_ThetaY_mI35_mI30__9->SetBinError(316,0.2828427);
   S12_ThetaY_mI35_mI30__9->SetBinError(317,0.4472136);
   S12_ThetaY_mI35_mI30__9->SetMinimum(0);
   S12_ThetaY_mI35_mI30__9->SetMaximum(2.009369);
   S12_ThetaY_mI35_mI30__9->SetEntries(7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__9->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__9->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__9->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__9->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__9->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__9->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__9->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__9->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__9->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__9->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__9->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__9->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__9->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__9->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__9->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__9->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__10 = new TH1D("ThetaY_mI35_mI30__10","",630,-1575,1575);
   ThetaY_mI35_mI30__10->SetBinContent(313,0.07087379);
   ThetaY_mI35_mI30__10->SetBinContent(314,0.9961165);
   ThetaY_mI35_mI30__10->SetBinContent(315,1.817961);
   ThetaY_mI35_mI30__10->SetBinContent(316,1.826699);
   ThetaY_mI35_mI30__10->SetBinContent(317,1);
   ThetaY_mI35_mI30__10->SetBinContent(318,0.06699029);
   ThetaY_mI35_mI30__10->SetBinError(313,0.005865556);
   ThetaY_mI35_mI30__10->SetBinError(314,0.02198981);
   ThetaY_mI35_mI30__10->SetBinError(315,0.02970699);
   ThetaY_mI35_mI30__10->SetBinError(316,0.0297783);
   ThetaY_mI35_mI30__10->SetBinError(317,0.02203263);
   ThetaY_mI35_mI30__10->SetBinError(318,0.005702592);
   ThetaY_mI35_mI30__10->SetEntries(11904);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__10->SetLineColor(ci);
   ThetaY_mI35_mI30__10->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__10->SetMarkerColor(ci);
   ThetaY_mI35_mI30__10->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__10->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__10->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__10->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__10->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__10->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__10->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__10->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__10->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__10->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__10->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__10->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__10->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__10->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__10->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__10->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__10->Draw("AEsame");
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
   
   Double_t _fx3004[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3004[6] = {
   0,
   0,
   0,
   0.2189742,
   1,
   0};
   Double_t _felx3004[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3004[6] = {
   0,
   0,
   0,
   0.1414606,
   0.4323734,
   0};
   Double_t _fehx3004[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3004[6] = {
   5.228105,
   0.3698057,
   0.2025868,
   0.2889896,
   0.677871,
   5.53321};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-100,100);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.5);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetRange(1,100);
   Graph_Graph3004->GetXaxis()->CenterTitle(true);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3004->GetYaxis()->CenterTitle(true);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.009369,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__11 = new TH2D("ThetaY_vs_Y_mI35_mI30__11","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__11->SetBinContent(8144,146);
   ThetaY_vs_Y_mI35_mI30__11->SetBinContent(8170,2052);
   ThetaY_vs_Y_mI35_mI30__11->SetBinContent(8196,3745);
   ThetaY_vs_Y_mI35_mI30__11->SetBinContent(8222,3763);
   ThetaY_vs_Y_mI35_mI30__11->SetBinContent(8248,2060);
   ThetaY_vs_Y_mI35_mI30__11->SetBinContent(8274,138);
   ThetaY_vs_Y_mI35_mI30__11->SetEntries(11904);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__11->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__11->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__11->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__11->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__11->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__11->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__11->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__11->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__11->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__11->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__11->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__11->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__11->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__11->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__11->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__11->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
