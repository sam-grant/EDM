void S12_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.08496573,125,1.614349);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__1224 = new TH1D("S12_ThetaY_mI20_mI15__1224","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(312,0.00625);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(313,0.38125);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(314,1.075);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(315,1.075);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(316,1.1125);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(317,0.9375);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(318,0.9625);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(319,1);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(320,0.51875);
   S12_ThetaY_mI20_mI15__1224->SetBinContent(321,0.14375);
   S12_ThetaY_mI20_mI15__1224->SetBinError(312,0.00625);
   S12_ThetaY_mI20_mI15__1224->SetBinError(313,0.04881406);
   S12_ThetaY_mI20_mI15__1224->SetBinError(314,0.08196798);
   S12_ThetaY_mI20_mI15__1224->SetBinError(315,0.08196798);
   S12_ThetaY_mI20_mI15__1224->SetBinError(316,0.0833854);
   S12_ThetaY_mI20_mI15__1224->SetBinError(317,0.07654655);
   S12_ThetaY_mI20_mI15__1224->SetBinError(318,0.07756046);
   S12_ThetaY_mI20_mI15__1224->SetBinError(319,0.07905694);
   S12_ThetaY_mI20_mI15__1224->SetBinError(320,0.05694021);
   S12_ThetaY_mI20_mI15__1224->SetBinError(321,0.02997395);
   S12_ThetaY_mI20_mI15__1224->SetMinimum(0);
   S12_ThetaY_mI20_mI15__1224->SetMaximum(1.444417);
   S12_ThetaY_mI20_mI15__1224->SetEntries(1154);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1224->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__1224->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1224->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__1224->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__1224->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__1224->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1224->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1224->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1224->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__1224->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__1224->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1224->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1224->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1224->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1224->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1224->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1225 = new TH1D("ThetaY_mI20_mI15__1225","",630,-1575,1575);
   ThetaY_mI20_mI15__1225->SetBinContent(309,0.0006211662);
   ThetaY_mI20_mI15__1225->SetBinContent(310,0.1940368);
   ThetaY_mI20_mI15__1225->SetBinContent(311,0.6959779);
   ThetaY_mI20_mI15__1225->SetBinContent(312,0.9780651);
   ThetaY_mI20_mI15__1225->SetBinContent(313,1.147216);
   ThetaY_mI20_mI15__1225->SetBinContent(314,1.255416);
   ThetaY_mI20_mI15__1225->SetBinContent(315,1.306856);
   ThetaY_mI20_mI15__1225->SetBinContent(316,1.313107);
   ThetaY_mI20_mI15__1225->SetBinContent(317,1.260735);
   ThetaY_mI20_mI15__1225->SetBinContent(318,1.153234);
   ThetaY_mI20_mI15__1225->SetBinContent(319,1);
   ThetaY_mI20_mI15__1225->SetBinContent(320,0.6919792);
   ThetaY_mI20_mI15__1225->SetBinContent(321,0.1919792);
   ThetaY_mI20_mI15__1225->SetBinContent(322,0.0007376349);
   ThetaY_mI20_mI15__1225->SetBinError(309,0.0001552916);
   ThetaY_mI20_mI15__1225->SetBinError(310,0.002744644);
   ThetaY_mI20_mI15__1225->SetBinError(311,0.005198065);
   ThetaY_mI20_mI15__1225->SetBinError(312,0.006162087);
   ThetaY_mI20_mI15__1225->SetBinError(313,0.006673699);
   ThetaY_mI20_mI15__1225->SetBinError(314,0.006981323);
   ThetaY_mI20_mI15__1225->SetBinError(315,0.007122916);
   ThetaY_mI20_mI15__1225->SetBinError(316,0.00713993);
   ThetaY_mI20_mI15__1225->SetBinError(317,0.006996096);
   ThetaY_mI20_mI15__1225->SetBinError(318,0.006691179);
   ThetaY_mI20_mI15__1225->SetBinError(319,0.006230802);
   ThetaY_mI20_mI15__1225->SetBinError(320,0.00518311);
   ThetaY_mI20_mI15__1225->SetBinError(321,0.002730053);
   ThetaY_mI20_mI15__1225->SetBinError(322,0.0001692251);
   ThetaY_mI20_mI15__1225->SetEntries(288231);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1225->SetLineColor(ci);
   ThetaY_mI20_mI15__1225->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1225->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1225->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1225->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1225->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1225->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1225->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1225->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1225->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1225->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1225->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1225->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1225->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1225->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1225->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1225->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1225->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1225->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1225->Draw("AEsame");
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
   
   Double_t _fx3409[14] = {
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
   32.5};
   Double_t _fy3409[14] = {
   0,
   0,
   0,
   0.006390168,
   0.3323261,
   0.85629,
   0.8225848,
   0.8472275,
   0.7436141,
   0.8346095,
   1,
   0.7496613,
   0.7487791,
   0};
   Double_t _felx3409[14] = {
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
   Double_t _fely3409[14] = {
   0,
   0,
   0,
   0.005286282,
   0.04247612,
   0.06540027,
   0.06281948,
   0.06360852,
   0.06078712,
   0.06735451,
   0.07921769,
   0.08230868,
   0.1553334,
   0};
   Double_t _fehx3409[14] = {
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
   Double_t _fehy3409[14] = {
   19.63163,
   0.05931094,
   0.01653354,
   0.01469532,
   0.0482876,
   0.07059896,
   0.06781241,
   0.06857535,
   0.06597359,
   0.073025,
   0.08575957,
   0.09188806,
   0.1915033,
   16.37978};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3409,_fy3409,_felx3409,_fehx3409,_fely3409,_fehy3409);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3409 = new TH1F("Graph_Graph3409","",100,-100,100);
   Graph_Graph3409->SetMinimum(0);
   Graph_Graph3409->SetMaximum(1.5);
   Graph_Graph3409->SetDirectory(0);
   Graph_Graph3409->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3409->SetLineColor(ci);
   Graph_Graph3409->GetXaxis()->SetRange(1,100);
   Graph_Graph3409->GetXaxis()->CenterTitle(true);
   Graph_Graph3409->GetXaxis()->SetLabelFont(42);
   Graph_Graph3409->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3409->GetXaxis()->SetTitleFont(42);
   Graph_Graph3409->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3409->GetYaxis()->CenterTitle(true);
   Graph_Graph3409->GetYaxis()->SetLabelFont(42);
   Graph_Graph3409->GetYaxis()->SetTitleFont(42);
   Graph_Graph3409->GetZaxis()->SetLabelFont(42);
   Graph_Graph3409->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3409->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3409);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.444417,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1226 = new TH2D("ThetaY_vs_Y_mI20_mI15__1226","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8043,16);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8069,4998);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8095,17927);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8121,25193);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8147,29550);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8173,32337);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8199,33662);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8225,33823);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8251,32474);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8277,29705);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8303,25758);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8329,17824);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8355,4945);
   ThetaY_vs_Y_mI20_mI15__1226->SetBinContent(8381,19);
   ThetaY_vs_Y_mI20_mI15__1226->SetEntries(288231);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1226->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1226->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1226->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1226->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1226->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1226->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1226->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1226->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1226->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1226->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1226->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1226->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1226->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1226->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1226->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1226->Draw("COL");
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
