void S12_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.127411,125,2.420809);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__912 = new TH1D("S12_ThetaY_30_35__912","",630,-1575,1575);
   S12_ThetaY_30_35__912->SetBinContent(308,0.15);
   S12_ThetaY_30_35__912->SetBinContent(309,1);
   S12_ThetaY_30_35__912->SetBinContent(310,1.025);
   S12_ThetaY_30_35__912->SetBinContent(311,1.275);
   S12_ThetaY_30_35__912->SetBinContent(312,1.425);
   S12_ThetaY_30_35__912->SetBinContent(313,1.425);
   S12_ThetaY_30_35__912->SetBinContent(314,1.6);
   S12_ThetaY_30_35__912->SetBinContent(315,1.575);
   S12_ThetaY_30_35__912->SetBinContent(316,0.925);
   S12_ThetaY_30_35__912->SetBinContent(317,0.175);
   S12_ThetaY_30_35__912->SetBinError(308,0.06123724);
   S12_ThetaY_30_35__912->SetBinError(309,0.1581139);
   S12_ThetaY_30_35__912->SetBinError(310,0.1600781);
   S12_ThetaY_30_35__912->SetBinError(311,0.1785357);
   S12_ThetaY_30_35__912->SetBinError(312,0.1887459);
   S12_ThetaY_30_35__912->SetBinError(313,0.1887459);
   S12_ThetaY_30_35__912->SetBinError(314,0.2);
   S12_ThetaY_30_35__912->SetBinError(315,0.1984313);
   S12_ThetaY_30_35__912->SetBinError(316,0.1520691);
   S12_ThetaY_30_35__912->SetBinError(317,0.06614378);
   S12_ThetaY_30_35__912->SetMinimum(0);
   S12_ThetaY_30_35__912->SetMaximum(2.165987);
   S12_ThetaY_30_35__912->SetEntries(423);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__912->SetLineColor(ci);
   S12_ThetaY_30_35__912->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__912->SetMarkerColor(ci);
   S12_ThetaY_30_35__912->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__912->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__912->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__912->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__912->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__912->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__912->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__912->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__912->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__912->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__912->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__912->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__912->Draw("AE");
   
   TH1D *ThetaY_30_35__913 = new TH1D("ThetaY_30_35__913","",630,-1575,1575);
   ThetaY_30_35__913->SetBinContent(307,0.009135629);
   ThetaY_30_35__913->SetBinContent(308,0.3518388);
   ThetaY_30_35__913->SetBinContent(309,1);
   ThetaY_30_35__913->SetBinContent(310,1.394238);
   ThetaY_30_35__913->SetBinContent(311,1.592645);
   ThetaY_30_35__913->SetBinContent(312,1.813071);
   ThetaY_30_35__913->SetBinContent(313,1.891778);
   ThetaY_30_35__913->SetBinContent(314,1.933942);
   ThetaY_30_35__913->SetBinContent(315,1.953151);
   ThetaY_30_35__913->SetBinContent(316,1.951745);
   ThetaY_30_35__913->SetBinContent(317,1.969079);
   ThetaY_30_35__913->SetBinContent(318,1.890138);
   ThetaY_30_35__913->SetBinContent(319,1.785898);
   ThetaY_30_35__913->SetBinContent(320,1.644413);
   ThetaY_30_35__913->SetBinContent(321,1.368705);
   ThetaY_30_35__913->SetBinContent(322,0.9660342);
   ThetaY_30_35__913->SetBinContent(323,0.3452799);
   ThetaY_30_35__913->SetBinContent(324,0.01054111);
   ThetaY_30_35__913->SetBinError(307,0.001462871);
   ThetaY_30_35__913->SetBinError(308,0.009078389);
   ThetaY_30_35__913->SetBinError(309,0.01530513);
   ThetaY_30_35__913->SetBinError(310,0.01807196);
   ThetaY_30_35__913->SetBinError(311,0.01931507);
   ThetaY_30_35__913->SetBinError(312,0.0206084);
   ThetaY_30_35__913->SetBinError(313,0.02105096);
   ThetaY_30_35__913->SetBinError(314,0.02128427);
   ThetaY_30_35__913->SetBinError(315,0.0213897);
   ThetaY_30_35__913->SetBinError(316,0.02138201);
   ThetaY_30_35__913->SetBinError(317,0.02147675);
   ThetaY_30_35__913->SetBinError(318,0.02104184);
   ThetaY_30_35__913->SetBinError(319,0.02045339);
   ThetaY_30_35__913->SetBinError(320,0.01962648);
   ThetaY_30_35__913->SetBinError(321,0.01790572);
   ThetaY_30_35__913->SetBinError(322,0.01504296);
   ThetaY_30_35__913->SetBinError(323,0.008993373);
   ThetaY_30_35__913->SetBinError(324,0.001571376);
   ThetaY_30_35__913->SetEntries(101908);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__913->SetLineColor(ci);
   ThetaY_30_35__913->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__913->SetMarkerColor(ci);
   ThetaY_30_35__913->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__913->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__913->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__913->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__913->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__913->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__913->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__913->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__913->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__913->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__913->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__913->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__913->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__913->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__913->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__913->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__913->Draw("AEsame");
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
   
   Double_t _fx3305[18] = {
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
   Double_t _fy3305[18] = {
   0,
   0.4263316,
   1,
   0.7351689,
   0.8005552,
   0.7859593,
   0.7532597,
   0.8273256,
   0.8063894,
   0.4739348,
   0.08887402,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3305[18] = {
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
   Double_t _fely3305[18] = {
   0,
   0.1693956,
   0.1581683,
   0.1147278,
   0.1121417,
   0.1041716,
   0.09982262,
   0.1035378,
   0.1017013,
   0.07772823,
   0.03278704,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3305[18] = {
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
   Double_t _fehy3305[18] = {
   5.158832,
   0.2554489,
   0.1854533,
   0.134222,
   0.129089,
   0.1190022,
   0.1140311,
   0.1173979,
   0.1154286,
   0.09166728,
   0.04789924,
   0.02435314,
   0.02577476,
   0.02799271,
   0.03363238,
   0.04765444,
   0.1333825,
   4.456836};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3305,_fy3305,_felx3305,_fehx3305,_fely3305,_fehy3305);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3305 = new TH1F("Graph_Graph3305","",100,-100,100);
   Graph_Graph3305->SetMinimum(0);
   Graph_Graph3305->SetMaximum(1.5);
   Graph_Graph3305->SetDirectory(0);
   Graph_Graph3305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3305->SetLineColor(ci);
   Graph_Graph3305->GetXaxis()->SetRange(1,100);
   Graph_Graph3305->GetXaxis()->CenterTitle(true);
   Graph_Graph3305->GetXaxis()->SetLabelFont(42);
   Graph_Graph3305->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3305->GetXaxis()->SetTitleFont(42);
   Graph_Graph3305->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3305->GetYaxis()->CenterTitle(true);
   Graph_Graph3305->GetYaxis()->SetLabelFont(42);
   Graph_Graph3305->GetYaxis()->SetTitleFont(42);
   Graph_Graph3305->GetZaxis()->SetLabelFont(42);
   Graph_Graph3305->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3305->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3305);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.165987,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__914 = new TH2D("ThetaY_vs_Y_30_35__914","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__914->SetBinContent(8001,39);
   ThetaY_vs_Y_30_35__914->SetBinContent(8027,1502);
   ThetaY_vs_Y_30_35__914->SetBinContent(8053,4269);
   ThetaY_vs_Y_30_35__914->SetBinContent(8079,5952);
   ThetaY_vs_Y_30_35__914->SetBinContent(8105,6799);
   ThetaY_vs_Y_30_35__914->SetBinContent(8131,7740);
   ThetaY_vs_Y_30_35__914->SetBinContent(8157,8076);
   ThetaY_vs_Y_30_35__914->SetBinContent(8183,8256);
   ThetaY_vs_Y_30_35__914->SetBinContent(8209,8338);
   ThetaY_vs_Y_30_35__914->SetBinContent(8235,8332);
   ThetaY_vs_Y_30_35__914->SetBinContent(8261,8406);
   ThetaY_vs_Y_30_35__914->SetBinContent(8287,8069);
   ThetaY_vs_Y_30_35__914->SetBinContent(8313,7624);
   ThetaY_vs_Y_30_35__914->SetBinContent(8339,7020);
   ThetaY_vs_Y_30_35__914->SetBinContent(8365,5843);
   ThetaY_vs_Y_30_35__914->SetBinContent(8391,4124);
   ThetaY_vs_Y_30_35__914->SetBinContent(8417,1474);
   ThetaY_vs_Y_30_35__914->SetBinContent(8443,45);
   ThetaY_vs_Y_30_35__914->SetEntries(101908);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__914->SetLineColor(ci);
   ThetaY_vs_Y_30_35__914->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__914->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__914->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__914->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__914->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__914->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__914->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__914->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__914->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__914->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__914->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__914->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__914->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__914->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__914->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
