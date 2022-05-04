void S12_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-1.579275,125,30.00622);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__45 = new TH1D("S12_ThetaY_25_30__45","",630,-1575,1575);
   S12_ThetaY_25_30__45->SetBinContent(313,1);
   S12_ThetaY_25_30__45->SetBinContent(315,5);
   S12_ThetaY_25_30__45->SetBinContent(316,3);
   S12_ThetaY_25_30__45->SetBinError(313,1);
   S12_ThetaY_25_30__45->SetBinError(315,2.236068);
   S12_ThetaY_25_30__45->SetBinError(316,1.732051);
   S12_ThetaY_25_30__45->SetMinimum(0);
   S12_ThetaY_25_30__45->SetMaximum(26.84767);
   S12_ThetaY_25_30__45->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__45->SetLineColor(ci);
   S12_ThetaY_25_30__45->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__45->SetMarkerColor(ci);
   S12_ThetaY_25_30__45->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__45->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__45->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__45->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__45->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__45->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__45->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__45->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__45->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__45->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__45->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__45->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__45->Draw("AE");
   
   TH1D *ThetaY_25_30__46 = new TH1D("ThetaY_25_30__46","",630,-1575,1575);
   ThetaY_25_30__46->SetBinContent(313,1);
   ThetaY_25_30__46->SetBinContent(314,13.82558);
   ThetaY_25_30__46->SetBinContent(315,24.40698);
   ThetaY_25_30__46->SetBinContent(316,24.22481);
   ThetaY_25_30__46->SetBinContent(317,13.87597);
   ThetaY_25_30__46->SetBinContent(318,1.069767);
   ThetaY_25_30__46->SetBinError(313,0.06225728);
   ThetaY_25_30__46->SetBinError(314,0.2314898);
   ThetaY_25_30__46->SetBinError(315,0.3075722);
   ThetaY_25_30__46->SetBinError(316,0.3064223);
   ThetaY_25_30__46->SetBinError(317,0.2319112);
   ThetaY_25_30__46->SetBinError(318,0.06439243);
   ThetaY_25_30__46->SetEntries(20228);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__46->SetLineColor(ci);
   ThetaY_25_30__46->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__46->SetMarkerColor(ci);
   ThetaY_25_30__46->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__46->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__46->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__46->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__46->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__46->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__46->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__46->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__46->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__46->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__46->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__46->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__46->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__46->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__46->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__46->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__46->Draw("AEsame");
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
   
   Double_t _fx3016[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3016[6] = {
   1,
   0,
   0.2048595,
   0.12384,
   0,
   0};
   Double_t _felx3016[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3016[6] = {
   0.8278558,
   0,
   0.08851582,
   0.06740993,
   0,
   0};
   Double_t _fehx3016[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3016[6] = {
   2.314264,
   0.1331949,
   0.1386785,
   0.1205197,
   0.1327111,
   1.726708};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-100,100);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.5);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3016->SetLineColor(ci);
   Graph_Graph3016->GetXaxis()->SetRange(1,100);
   Graph_Graph3016->GetXaxis()->CenterTitle(true);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3016->GetYaxis()->CenterTitle(true);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,26.84767,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__47 = new TH2D("ThetaY_vs_Y_25_30__47","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__47->SetBinContent(8156,258);
   ThetaY_vs_Y_25_30__47->SetBinContent(8182,3567);
   ThetaY_vs_Y_25_30__47->SetBinContent(8208,6297);
   ThetaY_vs_Y_25_30__47->SetBinContent(8234,6250);
   ThetaY_vs_Y_25_30__47->SetBinContent(8260,3580);
   ThetaY_vs_Y_25_30__47->SetBinContent(8286,276);
   ThetaY_vs_Y_25_30__47->SetEntries(20228);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__47->SetLineColor(ci);
   ThetaY_vs_Y_25_30__47->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__47->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__47->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__47->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__47->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__47->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__47->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__47->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__47->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__47->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__47->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__47->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__47->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__47->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__47->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
