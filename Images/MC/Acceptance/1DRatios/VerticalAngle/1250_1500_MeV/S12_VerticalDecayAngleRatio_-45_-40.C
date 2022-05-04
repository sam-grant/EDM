void S12_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1324859,125,2.517231);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__867 = new TH1D("S12_ThetaY_mI45_mI40__867","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__867->SetBinContent(316,1);
   S12_ThetaY_mI45_mI40__867->SetBinContent(317,1.375);
   S12_ThetaY_mI45_mI40__867->SetBinContent(318,1.25);
   S12_ThetaY_mI45_mI40__867->SetBinContent(319,0.375);
   S12_ThetaY_mI45_mI40__867->SetBinContent(320,0.75);
   S12_ThetaY_mI45_mI40__867->SetBinContent(321,1.25);
   S12_ThetaY_mI45_mI40__867->SetBinContent(322,1);
   S12_ThetaY_mI45_mI40__867->SetBinContent(323,0.125);
   S12_ThetaY_mI45_mI40__867->SetBinError(316,0.3535534);
   S12_ThetaY_mI45_mI40__867->SetBinError(317,0.4145781);
   S12_ThetaY_mI45_mI40__867->SetBinError(318,0.3952847);
   S12_ThetaY_mI45_mI40__867->SetBinError(319,0.2165064);
   S12_ThetaY_mI45_mI40__867->SetBinError(320,0.3061862);
   S12_ThetaY_mI45_mI40__867->SetBinError(321,0.3952847);
   S12_ThetaY_mI45_mI40__867->SetBinError(322,0.3535534);
   S12_ThetaY_mI45_mI40__867->SetBinError(323,0.125);
   S12_ThetaY_mI45_mI40__867->SetMinimum(0);
   S12_ThetaY_mI45_mI40__867->SetMaximum(2.25226);
   S12_ThetaY_mI45_mI40__867->SetEntries(57);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__867->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__867->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__867->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__867->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__867->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__867->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__867->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__867->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__867->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__867->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__867->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__867->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__867->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__867->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__867->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__867->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__868 = new TH1D("ThetaY_mI45_mI40__868","",630,-1575,1575);
   ThetaY_mI45_mI40__868->SetBinContent(307,0.005793743);
   ThetaY_mI45_mI40__868->SetBinContent(308,0.3939745);
   ThetaY_mI45_mI40__868->SetBinContent(309,0.9779838);
   ThetaY_mI45_mI40__868->SetBinContent(310,1.329085);
   ThetaY_mI45_mI40__868->SetBinContent(311,1.706837);
   ThetaY_mI45_mI40__868->SetBinContent(312,1.867903);
   ThetaY_mI45_mI40__868->SetBinContent(313,1.83314);
   ThetaY_mI45_mI40__868->SetBinContent(314,1.918888);
   ThetaY_mI45_mI40__868->SetBinContent(315,1.866744);
   ThetaY_mI45_mI40__868->SetBinContent(316,2.047509);
   ThetaY_mI45_mI40__868->SetBinContent(317,2.04635);
   ThetaY_mI45_mI40__868->SetBinContent(318,1.936269);
   ThetaY_mI45_mI40__868->SetBinContent(319,1.804171);
   ThetaY_mI45_mI40__868->SetBinContent(320,1.600232);
   ThetaY_mI45_mI40__868->SetBinContent(321,1.436848);
   ThetaY_mI45_mI40__868->SetBinContent(322,1);
   ThetaY_mI45_mI40__868->SetBinContent(323,0.3893395);
   ThetaY_mI45_mI40__868->SetBinContent(324,0.005793743);
   ThetaY_mI45_mI40__868->SetBinError(307,0.002591041);
   ThetaY_mI45_mI40__868->SetBinError(308,0.02136627);
   ThetaY_mI45_mI40__868->SetBinError(309,0.03366359);
   ThetaY_mI45_mI40__868->SetBinError(310,0.03924379);
   ThetaY_mI45_mI40__868->SetBinError(311,0.0444724);
   ThetaY_mI45_mI40__868->SetBinError(312,0.04652343);
   ThetaY_mI45_mI40__868->SetBinError(313,0.04608849);
   ThetaY_mI45_mI40__868->SetBinError(314,0.04715409);
   ThetaY_mI45_mI40__868->SetBinError(315,0.046509);
   ThetaY_mI45_mI40__868->SetBinError(316,0.04870881);
   ThetaY_mI45_mI40__868->SetBinError(317,0.04869502);
   ThetaY_mI45_mI40__868->SetBinError(318,0.04736717);
   ThetaY_mI45_mI40__868->SetBinError(319,0.04572287);
   ThetaY_mI45_mI40__868->SetBinError(320,0.04306119);
   ThetaY_mI45_mI40__868->SetBinError(321,0.04080375);
   ThetaY_mI45_mI40__868->SetBinError(322,0.0340404);
   ThetaY_mI45_mI40__868->SetBinError(323,0.02124021);
   ThetaY_mI45_mI40__868->SetBinError(324,0.002591041);
   ThetaY_mI45_mI40__868->SetEntries(20856);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__868->SetLineColor(ci);
   ThetaY_mI45_mI40__868->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__868->SetMarkerColor(ci);
   ThetaY_mI45_mI40__868->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__868->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__868->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__868->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__868->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__868->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__868->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__868->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__868->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__868->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__868->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__868->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__868->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__868->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__868->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__868->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__868->Draw("AEsame");
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
   
   Double_t _fx3290[18] = {
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
   Double_t _fy3290[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.4883984,
   0.6719281,
   0.6455715,
   0.2078516,
   0.4686821,
   0.8699597,
   1,
   0.3210565,
   0};
   Double_t _felx3290[18] = {
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
   Double_t _fely3290[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1693494,
   0.2000453,
   0.2012343,
   0.1132001,
   0.1862507,
   0.2714344,
   0.3474713,
   0.2657432,
   0};
   Double_t _fehx3290[18] = {
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
   Double_t _fehy3290[18] = {
   48.01919,
   0.5857026,
   0.2355651,
   0.1732866,
   0.1349113,
   0.1232715,
   0.1256105,
   0.1199944,
   0.1233481,
   0.241664,
   0.2709573,
   0.2766376,
   0.2025676,
   0.2809027,
   0.3733417,
   0.4965542,
   0.7419094,
   48.01919};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3290,_fy3290,_felx3290,_fehx3290,_fely3290,_fehy3290);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3290 = new TH1F("Graph_Graph3290","",100,-100,100);
   Graph_Graph3290->SetMinimum(0);
   Graph_Graph3290->SetMaximum(1.5);
   Graph_Graph3290->SetDirectory(0);
   Graph_Graph3290->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3290->SetLineColor(ci);
   Graph_Graph3290->GetXaxis()->SetRange(1,100);
   Graph_Graph3290->GetXaxis()->CenterTitle(true);
   Graph_Graph3290->GetXaxis()->SetLabelFont(42);
   Graph_Graph3290->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3290->GetXaxis()->SetTitleFont(42);
   Graph_Graph3290->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3290->GetYaxis()->CenterTitle(true);
   Graph_Graph3290->GetYaxis()->SetLabelFont(42);
   Graph_Graph3290->GetYaxis()->SetTitleFont(42);
   Graph_Graph3290->GetZaxis()->SetLabelFont(42);
   Graph_Graph3290->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3290->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3290);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.25226,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__869 = new TH2D("ThetaY_vs_Y_mI45_mI40__869","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(7986,5);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8012,340);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8038,844);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8064,1147);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8090,1473);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8116,1612);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8142,1582);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8168,1656);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8194,1611);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8220,1767);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8246,1766);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8272,1671);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8298,1557);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8324,1381);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8350,1240);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8376,863);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8402,336);
   ThetaY_vs_Y_mI45_mI40__869->SetBinContent(8428,5);
   ThetaY_vs_Y_mI45_mI40__869->SetEntries(20856);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__869->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__869->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__869->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__869->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__869->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__869->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__869->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__869->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__869->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__869->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__869->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__869->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__869->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__869->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__869->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__869->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
