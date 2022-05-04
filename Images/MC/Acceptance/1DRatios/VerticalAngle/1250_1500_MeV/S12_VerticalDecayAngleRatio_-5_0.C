void S12_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06552417,125,1.244959);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__891 = new TH1D("S12_ThetaY_mI5_0__891","",630,-1575,1575);
   S12_ThetaY_mI5_0__891->SetBinContent(309,0.004796163);
   S12_ThetaY_mI5_0__891->SetBinContent(310,0.1318945);
   S12_ThetaY_mI5_0__891->SetBinContent(311,0.6091127);
   S12_ThetaY_mI5_0__891->SetBinContent(312,0.8944844);
   S12_ThetaY_mI5_0__891->SetBinContent(313,0.8800959);
   S12_ThetaY_mI5_0__891->SetBinContent(314,1);
   S12_ThetaY_mI5_0__891->SetBinContent(315,0.8992806);
   S12_ThetaY_mI5_0__891->SetBinContent(316,0.9640288);
   S12_ThetaY_mI5_0__891->SetBinContent(317,0.9544365);
   S12_ThetaY_mI5_0__891->SetBinContent(318,0.971223);
   S12_ThetaY_mI5_0__891->SetBinContent(319,0.8920863);
   S12_ThetaY_mI5_0__891->SetBinContent(320,0.6546763);
   S12_ThetaY_mI5_0__891->SetBinContent(321,0.2565947);
   S12_ThetaY_mI5_0__891->SetBinContent(322,0.03357314);
   S12_ThetaY_mI5_0__891->SetBinError(309,0.003391399);
   S12_ThetaY_mI5_0__891->SetBinError(310,0.01778465);
   S12_ThetaY_mI5_0__891->SetBinError(311,0.03821913);
   S12_ThetaY_mI5_0__891->SetBinError(312,0.04631465);
   S12_ThetaY_mI5_0__891->SetBinError(313,0.04594063);
   S12_ThetaY_mI5_0__891->SetBinError(314,0.04897021);
   S12_ThetaY_mI5_0__891->SetBinError(315,0.04643865);
   S12_ThetaY_mI5_0__891->SetBinError(316,0.04808139);
   S12_ThetaY_mI5_0__891->SetBinError(317,0.04784158);
   S12_ThetaY_mI5_0__891->SetBinError(318,0.04826046);
   S12_ThetaY_mI5_0__891->SetBinError(319,0.04625252);
   S12_ThetaY_mI5_0__891->SetBinError(320,0.03962281);
   S12_ThetaY_mI5_0__891->SetBinError(321,0.02480595);
   S12_ThetaY_mI5_0__891->SetBinError(322,0.008972799);
   S12_ThetaY_mI5_0__891->SetMinimum(0);
   S12_ThetaY_mI5_0__891->SetMaximum(1.113911);
   S12_ThetaY_mI5_0__891->SetEntries(3814);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__891->SetLineColor(ci);
   S12_ThetaY_mI5_0__891->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__891->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__891->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__891->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__891->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__891->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__891->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__891->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__891->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__891->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__891->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__891->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__891->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__891->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__891->Draw("AE");
   
   TH1D *ThetaY_mI5_0__892 = new TH1D("ThetaY_mI5_0__892","",630,-1575,1575);
   ThetaY_mI5_0__892->SetBinContent(307,0.00563932);
   ThetaY_mI5_0__892->SetBinContent(308,0.1797322);
   ThetaY_mI5_0__892->SetBinContent(309,0.5168589);
   ThetaY_mI5_0__892->SetBinContent(310,0.7162443);
   ThetaY_mI5_0__892->SetBinContent(311,0.8448005);
   ThetaY_mI5_0__892->SetBinContent(312,0.9335101);
   ThetaY_mI5_0__892->SetBinContent(313,0.9660121);
   ThetaY_mI5_0__892->SetBinContent(314,1);
   ThetaY_mI5_0__892->SetBinContent(315,1.008611);
   ThetaY_mI5_0__892->SetBinContent(316,1.012646);
   ThetaY_mI5_0__892->SetBinContent(317,1.009759);
   ThetaY_mI5_0__892->SetBinContent(318,0.9754335);
   ThetaY_mI5_0__892->SetBinContent(319,0.9332568);
   ThetaY_mI5_0__892->SetBinContent(320,0.8532764);
   ThetaY_mI5_0__892->SetBinContent(321,0.7110439);
   ThetaY_mI5_0__892->SetBinContent(322,0.5101052);
   ThetaY_mI5_0__892->SetBinContent(323,0.1789049);
   ThetaY_mI5_0__892->SetBinContent(324,0.005825046);
   ThetaY_mI5_0__892->SetBinError(307,0.0003085699);
   ThetaY_mI5_0__892->SetBinError(308,0.00174202);
   ThetaY_mI5_0__892->SetBinError(309,0.002954106);
   ThetaY_mI5_0__892->SetBinError(310,0.003477529);
   ThetaY_mI5_0__892->SetBinError(311,0.003776741);
   ThetaY_mI5_0__892->SetBinError(312,0.003970083);
   ThetaY_mI5_0__892->SetBinError(313,0.004038605);
   ThetaY_mI5_0__892->SetBinError(314,0.004109038);
   ThetaY_mI5_0__892->SetBinError(315,0.004126691);
   ThetaY_mI5_0__892->SetBinError(316,0.004134938);
   ThetaY_mI5_0__892->SetBinError(317,0.004129039);
   ThetaY_mI5_0__892->SetBinError(318,0.004058252);
   ThetaY_mI5_0__892->SetBinError(319,0.003969545);
   ThetaY_mI5_0__892->SetBinError(320,0.00379564);
   ThetaY_mI5_0__892->SetBinError(321,0.003464881);
   ThetaY_mI5_0__892->SetBinError(322,0.002934743);
   ThetaY_mI5_0__892->SetBinError(323,0.001738006);
   ThetaY_mI5_0__892->SetBinError(324,0.0003136099);
   ThetaY_mI5_0__892->SetEntries(732144);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__892->SetLineColor(ci);
   ThetaY_mI5_0__892->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__892->SetMarkerColor(ci);
   ThetaY_mI5_0__892->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__892->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__892->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__892->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__892->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__892->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__892->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__892->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__892->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__892->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__892->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__892->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__892->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__892->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__892->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__892->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__892->Draw("AEsame");
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
   
   Double_t _fx3298[18] = {
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
   Double_t _fy3298[18] = {
   0,
   0,
   0.009279444,
   0.1841473,
   0.7210137,
   0.9581947,
   0.911061,
   1,
   0.891603,
   0.9519897,
   0.9452121,
   0.9956835,
   0.9558852,
   0.76725,
   0.3608704,
   0.06581611,
   0,
   0};
   Double_t _felx3298[18] = {
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
   Double_t _fely3298[18] = {
   0,
   0,
   0.005993784,
   0.02477046,
   0.04532481,
   0.04975778,
   0.04768715,
   0.04912221,
   0.04616552,
   0.0476196,
   0.04751625,
   0.04962813,
   0.04970406,
   0.04653238,
   0.03487589,
   0.01738157,
   0,
   0};
   Double_t _fehx3298[18] = {
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
   Double_t _fehy3298[18] = {
   0.7850432,
   0.024566,
   0.01223986,
   0.0283503,
   0.04826868,
   0.05241219,
   0.05025189,
   0.05159744,
   0.0486209,
   0.05006415,
   0.04996797,
   0.05216653,
   0.05235924,
   0.04944482,
   0.03842195,
   0.02271543,
   0.02467961,
   0.759946};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3298,_fy3298,_felx3298,_fehx3298,_fely3298,_fehy3298);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3298 = new TH1F("Graph_Graph3298","",100,-100,100);
   Graph_Graph3298->SetMinimum(0);
   Graph_Graph3298->SetMaximum(1.5);
   Graph_Graph3298->SetDirectory(0);
   Graph_Graph3298->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3298->SetLineColor(ci);
   Graph_Graph3298->GetXaxis()->SetRange(1,100);
   Graph_Graph3298->GetXaxis()->CenterTitle(true);
   Graph_Graph3298->GetXaxis()->SetLabelFont(42);
   Graph_Graph3298->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3298->GetXaxis()->SetTitleFont(42);
   Graph_Graph3298->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3298->GetYaxis()->CenterTitle(true);
   Graph_Graph3298->GetYaxis()->SetLabelFont(42);
   Graph_Graph3298->GetYaxis()->SetTitleFont(42);
   Graph_Graph3298->GetZaxis()->SetLabelFont(42);
   Graph_Graph3298->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3298->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3298);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.113911,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__893 = new TH2D("ThetaY_vs_Y_mI5_0__893","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(7994,334);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8020,10645);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8046,30612);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8072,42421);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8098,50035);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8124,55289);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8150,57214);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8176,59227);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8202,59737);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8228,59976);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8254,59805);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8280,57772);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8306,55274);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8332,50537);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8358,42113);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8384,30212);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8410,10596);
   ThetaY_vs_Y_mI5_0__893->SetBinContent(8436,345);
   ThetaY_vs_Y_mI5_0__893->SetEntries(732144);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__893->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__893->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__893->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__893->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__893->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__893->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__893->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__893->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__893->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__893->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__893->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__893->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__893->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__893->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__893->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__893->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
