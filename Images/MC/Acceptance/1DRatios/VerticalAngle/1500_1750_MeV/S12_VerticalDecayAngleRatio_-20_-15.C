void S12_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06568265,125,1.24797);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__1053 = new TH1D("S12_ThetaY_mI20_mI15__1053","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(312,0.05284553);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(313,0.5284553);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(314,0.8902439);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(315,1);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(316,0.8821138);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(317,0.9674797);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(318,0.7154472);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(319,0.695122);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(320,0.5731707);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(321,0.3577236);
   S12_ThetaY_mI20_mI15__1053->SetBinContent(322,0.06097561);
   S12_ThetaY_mI20_mI15__1053->SetBinError(312,0.01465671);
   S12_ThetaY_mI20_mI15__1053->SetBinError(313,0.04634859);
   S12_ThetaY_mI20_mI15__1053->SetBinError(314,0.06015711);
   S12_ThetaY_mI20_mI15__1053->SetBinError(315,0.06375767);
   S12_ThetaY_mI20_mI15__1053->SetBinError(316,0.05988179);
   S12_ThetaY_mI20_mI15__1053->SetBinError(317,0.06271239);
   S12_ThetaY_mI20_mI15__1053->SetBinError(318,0.05392886);
   S12_ThetaY_mI20_mI15__1053->SetBinError(319,0.0531573);
   S12_ThetaY_mI20_mI15__1053->SetBinError(320,0.04826968);
   S12_ThetaY_mI20_mI15__1053->SetBinError(321,0.03813346);
   S12_ThetaY_mI20_mI15__1053->SetBinError(322,0.01574383);
   S12_ThetaY_mI20_mI15__1053->SetMinimum(0);
   S12_ThetaY_mI20_mI15__1053->SetMaximum(1.116605);
   S12_ThetaY_mI20_mI15__1053->SetEntries(1654);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1053->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__1053->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1053->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__1053->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__1053->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__1053->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1053->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1053->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1053->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__1053->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__1053->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1053->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1053->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1053->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1053->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1053->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1054 = new TH1D("ThetaY_mI20_mI15__1054","",630,-1575,1575);
   ThetaY_mI20_mI15__1054->SetBinContent(308,0.000887968);
   ThetaY_mI20_mI15__1054->SetBinContent(309,0.1352967);
   ThetaY_mI20_mI15__1054->SetBinContent(310,0.4959301);
   ThetaY_mI20_mI15__1054->SetBinContent(311,0.7188397);
   ThetaY_mI20_mI15__1054->SetBinContent(312,0.8620394);
   ThetaY_mI20_mI15__1054->SetBinContent(313,0.9368655);
   ThetaY_mI20_mI15__1054->SetBinContent(314,0.9805239);
   ThetaY_mI20_mI15__1054->SetBinContent(315,1);
   ThetaY_mI20_mI15__1054->SetBinContent(316,1.015095);
   ThetaY_mI20_mI15__1054->SetBinContent(317,0.983691);
   ThetaY_mI20_mI15__1054->SetBinContent(318,0.9426669);
   ThetaY_mI20_mI15__1054->SetBinContent(319,0.8578363);
   ThetaY_mI20_mI15__1054->SetBinContent(320,0.7218884);
   ThetaY_mI20_mI15__1054->SetBinContent(321,0.4965517);
   ThetaY_mI20_mI15__1054->SetBinContent(322,0.1382566);
   ThetaY_mI20_mI15__1054->SetBinContent(323,0.0007695723);
   ThetaY_mI20_mI15__1054->SetBinError(308,0.00016212);
   ThetaY_mI20_mI15__1054->SetBinError(309,0.002001159);
   ThetaY_mI20_mI15__1054->SetBinError(310,0.003831319);
   ThetaY_mI20_mI15__1054->SetBinError(311,0.004612688);
   ThetaY_mI20_mI15__1054->SetBinError(312,0.005051282);
   ThetaY_mI20_mI15__1054->SetBinError(313,0.005265949);
   ThetaY_mI20_mI15__1054->SetBinError(314,0.00538725);
   ThetaY_mI20_mI15__1054->SetBinError(315,0.00544049);
   ThetaY_mI20_mI15__1054->SetBinError(316,0.0054814);
   ThetaY_mI20_mI15__1054->SetBinError(317,0.005395943);
   ThetaY_mI20_mI15__1054->SetBinError(318,0.005282228);
   ThetaY_mI20_mI15__1054->SetBinError(319,0.005038952);
   ThetaY_mI20_mI15__1054->SetBinError(320,0.004622459);
   ThetaY_mI20_mI15__1054->SetBinError(321,0.003833719);
   ThetaY_mI20_mI15__1054->SetBinError(322,0.002022931);
   ThetaY_mI20_mI15__1054->SetBinError(323,0.0001509255);
   ThetaY_mI20_mI15__1054->SetEntries(347551);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1054->SetLineColor(ci);
   ThetaY_mI20_mI15__1054->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1054->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1054->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1054->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1054->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1054->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1054->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1054->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1054->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1054->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1054->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1054->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1054->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1054->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1054->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1054->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1054->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1054->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1054->Draw("AEsame");
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
   
   Double_t _fx3352[16] = {
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
   Double_t _fy3352[16] = {
   0,
   0,
   0,
   0,
   0.06130292,
   0.5640674,
   0.9079268,
   1,
   0.8689959,
   0.9835199,
   0.7589608,
   0.81032,
   0.793988,
   0.7204155,
   0.4410321,
   0};
   Double_t _felx3352[16] = {
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
   Double_t _fely3352[16] = {
   0,
   0,
   0,
   0,
   0.01678474,
   0.0495089,
   0.06150657,
   0.06394496,
   0.05913119,
   0.06393411,
   0.05731128,
   0.06208743,
   0.06697794,
   0.07684894,
   0.1127616,
   0};
   Double_t _fehx3352[16] = {
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
   Double_t _fehy3352[16] = {
   8.692013,
   0.05532532,
   0.01509132,
   0.01041138,
   0.02215865,
   0.05405918,
   0.0658234,
   0.06817279,
   0.06330036,
   0.06823374,
   0.06181345,
   0.06703947,
   0.07288415,
   0.08552409,
   0.1461089,
   10.07723};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3352,_fy3352,_felx3352,_fehx3352,_fely3352,_fehy3352);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3352 = new TH1F("Graph_Graph3352","",100,-100,100);
   Graph_Graph3352->SetMinimum(0);
   Graph_Graph3352->SetMaximum(1.5);
   Graph_Graph3352->SetDirectory(0);
   Graph_Graph3352->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3352->SetLineColor(ci);
   Graph_Graph3352->GetXaxis()->SetRange(1,100);
   Graph_Graph3352->GetXaxis()->CenterTitle(true);
   Graph_Graph3352->GetXaxis()->SetLabelFont(42);
   Graph_Graph3352->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3352->GetXaxis()->SetTitleFont(42);
   Graph_Graph3352->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3352->GetYaxis()->CenterTitle(true);
   Graph_Graph3352->GetYaxis()->SetLabelFont(42);
   Graph_Graph3352->GetYaxis()->SetTitleFont(42);
   Graph_Graph3352->GetZaxis()->SetLabelFont(42);
   Graph_Graph3352->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3352->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3352);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.116605,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1055 = new TH2D("ThetaY_vs_Y_mI20_mI15__1055","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8017,30);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8043,4571);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8069,16755);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8095,24286);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8121,29124);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8147,31652);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8173,33127);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8199,33785);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8225,34295);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8251,33234);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8277,31848);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8303,28982);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8329,24389);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8355,16776);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8381,4671);
   ThetaY_vs_Y_mI20_mI15__1055->SetBinContent(8407,26);
   ThetaY_vs_Y_mI20_mI15__1055->SetEntries(347551);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1055->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1055->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1055->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1055->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1055->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1055->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1055->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1055->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1055->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1055->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1055->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1055->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1055->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1055->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1055->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1055->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-20_-15","Reco vertices","lpf");
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
