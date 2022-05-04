void S12_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.07071101,125,1.343509);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__1584 = new TH1D("S12_ThetaY_10_15__1584","",630,-1575,1575);
   S12_ThetaY_10_15__1584->SetBinContent(312,0.2421875);
   S12_ThetaY_10_15__1584->SetBinContent(313,0.6953125);
   S12_ThetaY_10_15__1584->SetBinContent(314,1);
   S12_ThetaY_10_15__1584->SetBinContent(315,0.8359375);
   S12_ThetaY_10_15__1584->SetBinContent(316,0.9296875);
   S12_ThetaY_10_15__1584->SetBinContent(317,0.703125);
   S12_ThetaY_10_15__1584->SetBinContent(318,0.09375);
   S12_ThetaY_10_15__1584->SetBinError(312,0.04349816);
   S12_ThetaY_10_15__1584->SetBinError(313,0.07370298);
   S12_ThetaY_10_15__1584->SetBinError(314,0.08838835);
   S12_ThetaY_10_15__1584->SetBinError(315,0.08081313);
   S12_ThetaY_10_15__1584->SetBinError(316,0.08522431);
   S12_ThetaY_10_15__1584->SetBinError(317,0.07411588);
   S12_ThetaY_10_15__1584->SetBinError(318,0.02706329);
   S12_ThetaY_10_15__1584->SetMinimum(0);
   S12_ThetaY_10_15__1584->SetMaximum(1.202087);
   S12_ThetaY_10_15__1584->SetEntries(576);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1584->SetLineColor(ci);
   S12_ThetaY_10_15__1584->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1584->SetMarkerColor(ci);
   S12_ThetaY_10_15__1584->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__1584->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__1584->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1584->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1584->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1584->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__1584->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__1584->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1584->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1584->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1584->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1584->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1584->Draw("AE");
   
   TH1D *ThetaY_10_15__1585 = new TH1D("ThetaY_10_15__1585","",630,-1575,1575);
   ThetaY_10_15__1585->SetBinContent(311,0.006518756);
   ThetaY_10_15__1585->SetBinContent(312,0.3295403);
   ThetaY_10_15__1585->SetBinContent(313,0.7859389);
   ThetaY_10_15__1585->SetBinContent(314,1);
   ThetaY_10_15__1585->SetBinContent(315,1.092806);
   ThetaY_10_15__1585->SetBinContent(316,1.084772);
   ThetaY_10_15__1585->SetBinContent(317,1.003202);
   ThetaY_10_15__1585->SetBinContent(318,0.7805352);
   ThetaY_10_15__1585->SetBinContent(319,0.3251086);
   ThetaY_10_15__1585->SetBinContent(320,0.00691903);
   ThetaY_10_15__1585->SetBinError(311,0.0004317151);
   ThetaY_10_15__1585->SetBinError(312,0.003069511);
   ThetaY_10_15__1585->SetBinError(313,0.004740338);
   ThetaY_10_15__1585->SetBinError(314,0.005347058);
   ThetaY_10_15__1585->SetBinError(315,0.005589675);
   ThetaY_10_15__1585->SetBinError(316,0.00556909);
   ThetaY_10_15__1585->SetBinError(317,0.005355613);
   ThetaY_10_15__1585->SetBinError(318,0.004724014);
   ThetaY_10_15__1585->SetBinError(319,0.003048802);
   ThetaY_10_15__1585->SetBinError(320,0.0004447721);
   ThetaY_10_15__1585->SetEntries(224383);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1585->SetLineColor(ci);
   ThetaY_10_15__1585->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1585->SetMarkerColor(ci);
   ThetaY_10_15__1585->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1585->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1585->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1585->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1585->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1585->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1585->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1585->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1585->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1585->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1585->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1585->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1585->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1585->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1585->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1585->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1585->Draw("AEsame");
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
   
   Double_t _fx3529[10] = {
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
   Double_t _fy3529[10] = {
   0,
   0.7349254,
   0.8846902,
   1,
   0.7649456,
   0.8570346,
   0.7008806,
   0.1201099,
   0,
   0};
   Double_t _felx3529[10] = {
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
   Double_t _fely3529[10] = {
   0,
   0.1314516,
   0.09375024,
   0.08843293,
   0.07393671,
   0.07857566,
   0.07383531,
   0.03419088,
   0,
   0};
   Double_t _fehx3529[10] = {
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
   Double_t _fehy3529[10] = {
   2.215332,
   0.1573787,
   0.104257,
   0.09662455,
   0.08145555,
   0.08613474,
   0.08205803,
   0.04565379,
   0.04424412,
   2.086684};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3529,_fy3529,_felx3529,_fehx3529,_fely3529,_fehy3529);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3529 = new TH1F("Graph_Graph3529","",100,-100,100);
   Graph_Graph3529->SetMinimum(0);
   Graph_Graph3529->SetMaximum(1.5);
   Graph_Graph3529->SetDirectory(0);
   Graph_Graph3529->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3529->SetLineColor(ci);
   Graph_Graph3529->GetXaxis()->SetRange(1,100);
   Graph_Graph3529->GetXaxis()->CenterTitle(true);
   Graph_Graph3529->GetXaxis()->SetLabelFont(42);
   Graph_Graph3529->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3529->GetXaxis()->SetTitleFont(42);
   Graph_Graph3529->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3529->GetYaxis()->CenterTitle(true);
   Graph_Graph3529->GetYaxis()->SetLabelFont(42);
   Graph_Graph3529->GetYaxis()->SetTitleFont(42);
   Graph_Graph3529->GetZaxis()->SetLabelFont(42);
   Graph_Graph3529->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3529->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3529);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.202087,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1586 = new TH2D("ThetaY_vs_Y_10_15__1586","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8101,228);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8127,11526);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8153,27489);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8179,34976);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8205,38222);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8231,37941);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8257,35088);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8283,27300);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8309,11371);
   ThetaY_vs_Y_10_15__1586->SetBinContent(8335,242);
   ThetaY_vs_Y_10_15__1586->SetEntries(224383);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1586->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1586->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1586->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1586->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1586->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1586->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1586->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1586->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1586->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1586->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1586->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1586->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1586->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1586->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1586->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1586->Draw("COL");
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
