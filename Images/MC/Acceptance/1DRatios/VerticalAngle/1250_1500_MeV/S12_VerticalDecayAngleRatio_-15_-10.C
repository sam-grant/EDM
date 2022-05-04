void S12_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.0649091,125,1.233273);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__885 = new TH1D("S12_ThetaY_mI15_mI10__885","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__885->SetBinContent(311,0.0371517);
   S12_ThetaY_mI15_mI10__885->SetBinContent(312,0.4303406);
   S12_ThetaY_mI15_mI10__885->SetBinContent(313,0.8575851);
   S12_ThetaY_mI15_mI10__885->SetBinContent(314,0.9287926);
   S12_ThetaY_mI15_mI10__885->SetBinContent(315,1);
   S12_ThetaY_mI15_mI10__885->SetBinContent(316,0.9349845);
   S12_ThetaY_mI15_mI10__885->SetBinContent(317,0.8916409);
   S12_ThetaY_mI15_mI10__885->SetBinContent(318,0.8575851);
   S12_ThetaY_mI15_mI10__885->SetBinContent(319,0.8390093);
   S12_ThetaY_mI15_mI10__885->SetBinContent(320,0.7399381);
   S12_ThetaY_mI15_mI10__885->SetBinContent(321,0.6687307);
   S12_ThetaY_mI15_mI10__885->SetBinContent(322,0.2012384);
   S12_ThetaY_mI15_mI10__885->SetBinContent(323,0.01857585);
   S12_ThetaY_mI15_mI10__885->SetBinError(311,0.01072477);
   S12_ThetaY_mI15_mI10__885->SetBinError(312,0.03650101);
   S12_ThetaY_mI15_mI10__885->SetBinError(313,0.0515273);
   S12_ThetaY_mI15_mI10__885->SetBinError(314,0.05362386);
   S12_ThetaY_mI15_mI10__885->SetBinError(315,0.05564149);
   S12_ThetaY_mI15_mI10__885->SetBinError(316,0.05380231);
   S12_ThetaY_mI15_mI10__885->SetBinError(317,0.05254044);
   S12_ThetaY_mI15_mI10__885->SetBinError(318,0.0515273);
   S12_ThetaY_mI15_mI10__885->SetBinError(319,0.05096618);
   S12_ThetaY_mI15_mI10__885->SetBinError(320,0.04786262);
   S12_ThetaY_mI15_mI10__885->SetBinError(321,0.04550136);
   S12_ThetaY_mI15_mI10__885->SetBinError(322,0.02496055);
   S12_ThetaY_mI15_mI10__885->SetBinError(323,0.00758356);
   S12_ThetaY_mI15_mI10__885->SetMinimum(0);
   S12_ThetaY_mI15_mI10__885->SetMaximum(1.103455);
   S12_ThetaY_mI15_mI10__885->SetEntries(2715);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__885->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__885->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__885->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__885->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__885->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__885->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__885->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__885->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__885->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__885->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__885->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__885->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__885->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__885->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__885->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__885->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__886 = new TH1D("ThetaY_mI15_mI10__886","",630,-1575,1575);
   ThetaY_mI15_mI10__886->SetBinContent(307,0.006125131);
   ThetaY_mI15_mI10__886->SetBinContent(308,0.1775397);
   ThetaY_mI15_mI10__886->SetBinContent(309,0.499833);
   ThetaY_mI15_mI10__886->SetBinContent(310,0.7011382);
   ThetaY_mI15_mI10__886->SetBinContent(311,0.8332405);
   ThetaY_mI15_mI10__886->SetBinContent(312,0.9110854);
   ThetaY_mI15_mI10__886->SetBinContent(313,0.9644742);
   ThetaY_mI15_mI10__886->SetBinContent(314,0.9894425);
   ThetaY_mI15_mI10__886->SetBinContent(315,1);
   ThetaY_mI15_mI10__886->SetBinContent(316,1.003141);
   ThetaY_mI15_mI10__886->SetBinContent(317,0.9838297);
   ThetaY_mI15_mI10__886->SetBinContent(318,0.9571909);
   ThetaY_mI15_mI10__886->SetBinContent(319,0.9092812);
   ThetaY_mI15_mI10__886->SetBinContent(320,0.8337305);
   ThetaY_mI15_mI10__886->SetBinContent(321,0.7066396);
   ThetaY_mI15_mI10__886->SetBinContent(322,0.5028844);
   ThetaY_mI15_mI10__886->SetBinContent(323,0.175936);
   ThetaY_mI15_mI10__886->SetBinContent(324,0.004922378);
   ThetaY_mI15_mI10__886->SetBinError(307,0.0003693593);
   ThetaY_mI15_mI10__886->SetBinError(308,0.001988562);
   ThetaY_mI15_mI10__886->SetBinError(309,0.003336597);
   ThetaY_mI15_mI10__886->SetBinError(310,0.003951783);
   ThetaY_mI15_mI10__886->SetBinError(311,0.004308008);
   ThetaY_mI15_mI10__886->SetBinError(312,0.004504752);
   ThetaY_mI15_mI10__886->SetBinError(313,0.00463486);
   ThetaY_mI15_mI10__886->SetBinError(314,0.004694471);
   ThetaY_mI15_mI10__886->SetBinError(315,0.004719449);
   ThetaY_mI15_mI10__886->SetBinError(316,0.004726854);
   ThetaY_mI15_mI10__886->SetBinError(317,0.004681136);
   ThetaY_mI15_mI10__886->SetBinError(318,0.004617327);
   ThetaY_mI15_mI10__886->SetBinError(319,0.00450029);
   ThetaY_mI15_mI10__886->SetBinError(320,0.004309275);
   ThetaY_mI15_mI10__886->SetBinError(321,0.003967257);
   ThetaY_mI15_mI10__886->SetBinError(322,0.003346766);
   ThetaY_mI15_mI10__886->SetBinError(323,0.00197956);
   ThetaY_mI15_mI10__886->SetBinError(324,0.000331115);
   ThetaY_mI15_mI10__886->SetEntries(545967);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__886->SetLineColor(ci);
   ThetaY_mI15_mI10__886->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__886->SetMarkerColor(ci);
   ThetaY_mI15_mI10__886->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__886->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__886->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__886->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__886->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__886->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__886->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__886->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__886->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__886->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__886->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__886->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__886->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__886->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__886->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__886->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__886->Draw("AEsame");
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
   
   Double_t _fx3296[18] = {
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
   Double_t _fy3296[18] = {
   0,
   0,
   0,
   0,
   0.04458701,
   0.4723383,
   0.8891737,
   0.9387029,
   1,
   0.9320574,
   0.906296,
   0.8959395,
   0.922717,
   0.8875027,
   0.9463531,
   0.4001683,
   0.105583,
   0};
   Double_t _felx3296[18] = {
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
   Double_t _fely3296[18] = {
   0,
   0,
   0,
   0,
   0.01269159,
   0.04008244,
   0.05356293,
   0.05434784,
   0.05581178,
   0.05378303,
   0.05354614,
   0.0539718,
   0.05620144,
   0.05754972,
   0.06455899,
   0.04957691,
   0.04189367,
   0};
   Double_t _fehx3296[18] = {
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
   Double_t _fehy3296[18] = {
   0.9336746,
   0.03210784,
   0.01140379,
   0.008129531,
   0.01694614,
   0.04363827,
   0.05689227,
   0.05759062,
   0.0590185,
   0.05698107,
   0.05680853,
   0.05732665,
   0.05973494,
   0.06140988,
   0.06912304,
   0.05613782,
   0.06310018,
   1.162764};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3296,_fy3296,_felx3296,_fehx3296,_fely3296,_fehy3296);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3296 = new TH1F("Graph_Graph3296","",100,-100,100);
   Graph_Graph3296->SetMinimum(0);
   Graph_Graph3296->SetMaximum(1.5);
   Graph_Graph3296->SetDirectory(0);
   Graph_Graph3296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3296->SetLineColor(ci);
   Graph_Graph3296->GetXaxis()->SetRange(1,100);
   Graph_Graph3296->GetXaxis()->CenterTitle(true);
   Graph_Graph3296->GetXaxis()->SetLabelFont(42);
   Graph_Graph3296->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3296->GetXaxis()->SetTitleFont(42);
   Graph_Graph3296->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3296->GetYaxis()->CenterTitle(true);
   Graph_Graph3296->GetYaxis()->SetLabelFont(42);
   Graph_Graph3296->GetYaxis()->SetTitleFont(42);
   Graph_Graph3296->GetZaxis()->SetLabelFont(42);
   Graph_Graph3296->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3296->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3296);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.103455,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__887 = new TH2D("ThetaY_vs_Y_mI15_mI10__887","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(7992,275);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8018,7971);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8044,22441);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8070,31479);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8096,37410);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8122,40905);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8148,43302);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8174,44423);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8200,44897);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8226,45038);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8252,44171);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8278,42975);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8304,40824);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8330,37432);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8356,31726);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8382,22578);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8408,7899);
   ThetaY_vs_Y_mI15_mI10__887->SetBinContent(8434,221);
   ThetaY_vs_Y_mI15_mI10__887->SetEntries(545967);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__887->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__887->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__887->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__887->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__887->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__887->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__887->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__887->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__887->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__887->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__887->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__887->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__887->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__887->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__887->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__887->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
