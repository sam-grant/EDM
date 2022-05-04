void S12_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06580753,125,1.250343);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__903 = new TH1D("S12_ThetaY_15_20__903","",630,-1575,1575);
   S12_ThetaY_15_20__903->SetBinContent(307,0.004098361);
   S12_ThetaY_15_20__903->SetBinContent(308,0.09016393);
   S12_ThetaY_15_20__903->SetBinContent(309,0.4098361);
   S12_ThetaY_15_20__903->SetBinContent(310,0.6844262);
   S12_ThetaY_15_20__903->SetBinContent(311,0.7213115);
   S12_ThetaY_15_20__903->SetBinContent(312,0.8278689);
   S12_ThetaY_15_20__903->SetBinContent(313,0.795082);
   S12_ThetaY_15_20__903->SetBinContent(314,1);
   S12_ThetaY_15_20__903->SetBinContent(315,0.897541);
   S12_ThetaY_15_20__903->SetBinContent(316,1.004098);
   S12_ThetaY_15_20__903->SetBinContent(317,0.8155738);
   S12_ThetaY_15_20__903->SetBinContent(318,0.6106557);
   S12_ThetaY_15_20__903->SetBinContent(319,0.08196721);
   S12_ThetaY_15_20__903->SetBinError(307,0.004098361);
   S12_ThetaY_15_20__903->SetBinError(308,0.01922302);
   S12_ThetaY_15_20__903->SetBinError(309,0.04098361);
   S12_ThetaY_15_20__903->SetBinError(310,0.05296249);
   S12_ThetaY_15_20__903->SetBinError(311,0.0543709);
   S12_ThetaY_15_20__903->SetBinError(312,0.05824865);
   S12_ThetaY_15_20__903->SetBinError(313,0.05708356);
   S12_ThetaY_15_20__903->SetBinError(314,0.06401844);
   S12_ThetaY_15_20__903->SetBinError(315,0.0606502);
   S12_ThetaY_15_20__903->SetBinError(316,0.06414949);
   S12_ThetaY_15_20__903->SetBinError(317,0.05781449);
   S12_ThetaY_15_20__903->SetBinError(318,0.05002687);
   S12_ThetaY_15_20__903->SetBinError(319,0.01832843);
   S12_ThetaY_15_20__903->SetMinimum(0);
   S12_ThetaY_15_20__903->SetMaximum(1.118728);
   S12_ThetaY_15_20__903->SetEntries(1938);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__903->SetLineColor(ci);
   S12_ThetaY_15_20__903->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__903->SetMarkerColor(ci);
   S12_ThetaY_15_20__903->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__903->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__903->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__903->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__903->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__903->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__903->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__903->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__903->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__903->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__903->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__903->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__903->Draw("AE");
   
   TH1D *ThetaY_15_20__904 = new TH1D("ThetaY_15_20__904","",630,-1575,1575);
   ThetaY_15_20__904->SetBinContent(307,0.006014435);
   ThetaY_15_20__904->SetBinContent(308,0.182993);
   ThetaY_15_20__904->SetBinContent(309,0.5210043);
   ThetaY_15_20__904->SetBinContent(310,0.7254333);
   ThetaY_15_20__904->SetBinContent(311,0.8518598);
   ThetaY_15_20__904->SetBinContent(312,0.9313738);
   ThetaY_15_20__904->SetBinContent(313,0.9879711);
   ThetaY_15_20__904->SetBinContent(314,1);
   ThetaY_15_20__904->SetBinContent(315,1.016871);
   ThetaY_15_20__904->SetBinContent(316,1.017025);
   ThetaY_15_20__904->SetBinContent(317,1.015823);
   ThetaY_15_20__904->SetBinContent(318,0.9837764);
   ThetaY_15_20__904->SetBinContent(319,0.9341188);
   ThetaY_15_20__904->SetBinContent(320,0.847696);
   ThetaY_15_20__904->SetBinContent(321,0.7235211);
   ThetaY_15_20__904->SetBinContent(322,0.5189378);
   ThetaY_15_20__904->SetBinContent(323,0.1841651);
   ThetaY_15_20__904->SetBinContent(324,0.005767689);
   ThetaY_15_20__904->SetBinError(307,0.0004307026);
   ThetaY_15_20__904->SetBinError(308,0.002375732);
   ThetaY_15_20__904->SetBinError(309,0.004008674);
   ThetaY_15_20__904->SetBinError(310,0.004730193);
   ThetaY_15_20__904->SetBinError(311,0.00512583);
   ThetaY_15_20__904->SetBinError(312,0.00535972);
   ThetaY_15_20__904->SetBinError(313,0.005520167);
   ThetaY_15_20__904->SetBinError(314,0.00555367);
   ThetaY_15_20__904->SetBinError(315,0.005600323);
   ThetaY_15_20__904->SetBinError(316,0.005600748);
   ThetaY_15_20__904->SetBinError(317,0.005597435);
   ThetaY_15_20__904->SetBinError(318,0.005508436);
   ThetaY_15_20__904->SetBinError(319,0.005367613);
   ThetaY_15_20__904->SetBinError(320,0.005113287);
   ThetaY_15_20__904->SetBinError(321,0.004723954);
   ThetaY_15_20__904->SetBinError(322,0.004000716);
   ThetaY_15_20__904->SetBinError(323,0.002383328);
   ThetaY_15_20__904->SetBinError(324,0.0004217752);
   ThetaY_15_20__904->SetEntries(403795);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__904->SetLineColor(ci);
   ThetaY_15_20__904->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__904->SetMarkerColor(ci);
   ThetaY_15_20__904->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__904->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__904->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__904->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__904->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__904->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__904->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__904->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__904->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__904->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__904->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__904->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__904->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__904->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__904->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__904->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__904->Draw("AEsame");
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
   
   Double_t _fx3302[18] = {
   -42.5,
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
   37.5,
   42.5};
   Double_t _fy3302[18] = {
   0.6814208,
   0.4927179,
   0.7866271,
   0.9434722,
   0.846749,
   0.8888686,
   0.8047623,
   1,
   0.8826496,
   0.9872893,
   0.8028703,
   0.6207261,
   0.08774817,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3302[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3302[18] = {
   0.5642517,
   0.1044284,
   0.07876084,
   0.0731919,
   0.06396717,
   0.06269645,
   0.05790243,
   0.06421389,
   0.05979513,
   0.06326536,
   0.05703684,
   0.05091249,
   0.01946186,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3302[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3302[18] = {
   1.580242,
   0.1293348,
   0.08707632,
   0.07910614,
   0.06899472,
   0.06728502,
   0.06222824,
   0.06847803,
   0.06399191,
   0.06745742,
   0.06124209,
   0.05527175,
   0.02434511,
   0.008901096,
   0.01042881,
   0.01454044,
   0.04097592,
   1.31464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3302,_fy3302,_felx3302,_fehx3302,_fely3302,_fehy3302);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3302 = new TH1F("Graph_Graph3302","",100,-100,100);
   Graph_Graph3302->SetMinimum(0);
   Graph_Graph3302->SetMaximum(1.5);
   Graph_Graph3302->SetDirectory(0);
   Graph_Graph3302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3302->SetLineColor(ci);
   Graph_Graph3302->GetXaxis()->SetRange(1,100);
   Graph_Graph3302->GetXaxis()->CenterTitle(true);
   Graph_Graph3302->GetXaxis()->SetLabelFont(42);
   Graph_Graph3302->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3302->GetXaxis()->SetTitleFont(42);
   Graph_Graph3302->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3302->GetYaxis()->CenterTitle(true);
   Graph_Graph3302->GetYaxis()->SetLabelFont(42);
   Graph_Graph3302->GetYaxis()->SetTitleFont(42);
   Graph_Graph3302->GetZaxis()->SetLabelFont(42);
   Graph_Graph3302->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3302->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3302);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.118728,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__905 = new TH2D("ThetaY_vs_Y_15_20__905","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__905->SetBinContent(7998,195);
   ThetaY_vs_Y_15_20__905->SetBinContent(8024,5933);
   ThetaY_vs_Y_15_20__905->SetBinContent(8050,16892);
   ThetaY_vs_Y_15_20__905->SetBinContent(8076,23520);
   ThetaY_vs_Y_15_20__905->SetBinContent(8102,27619);
   ThetaY_vs_Y_15_20__905->SetBinContent(8128,30197);
   ThetaY_vs_Y_15_20__905->SetBinContent(8154,32032);
   ThetaY_vs_Y_15_20__905->SetBinContent(8180,32422);
   ThetaY_vs_Y_15_20__905->SetBinContent(8206,32969);
   ThetaY_vs_Y_15_20__905->SetBinContent(8232,32974);
   ThetaY_vs_Y_15_20__905->SetBinContent(8258,32935);
   ThetaY_vs_Y_15_20__905->SetBinContent(8284,31896);
   ThetaY_vs_Y_15_20__905->SetBinContent(8310,30286);
   ThetaY_vs_Y_15_20__905->SetBinContent(8336,27484);
   ThetaY_vs_Y_15_20__905->SetBinContent(8362,23458);
   ThetaY_vs_Y_15_20__905->SetBinContent(8388,16825);
   ThetaY_vs_Y_15_20__905->SetBinContent(8414,5971);
   ThetaY_vs_Y_15_20__905->SetBinContent(8440,187);
   ThetaY_vs_Y_15_20__905->SetEntries(403795);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__905->SetLineColor(ci);
   ThetaY_vs_Y_15_20__905->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__905->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__905->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__905->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__905->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__905->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__905->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__905->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__905->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__905->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__905->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__905->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__905->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__905->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__905->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
