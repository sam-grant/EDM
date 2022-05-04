void S12_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-31.01856,125,589.3527);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__1392 = new TH1D("S12_ThetaY_mI25_mI20__1392","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(314,42);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(315,105);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(316,88);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(317,91);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(318,61);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(319,49);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(320,15);
   S12_ThetaY_mI25_mI20__1392->SetBinContent(321,1);
   S12_ThetaY_mI25_mI20__1392->SetBinError(314,6.480741);
   S12_ThetaY_mI25_mI20__1392->SetBinError(315,10.24695);
   S12_ThetaY_mI25_mI20__1392->SetBinError(316,9.380832);
   S12_ThetaY_mI25_mI20__1392->SetBinError(317,9.539392);
   S12_ThetaY_mI25_mI20__1392->SetBinError(318,7.81025);
   S12_ThetaY_mI25_mI20__1392->SetBinError(319,7);
   S12_ThetaY_mI25_mI20__1392->SetBinError(320,3.872983);
   S12_ThetaY_mI25_mI20__1392->SetBinError(321,1);
   S12_ThetaY_mI25_mI20__1392->SetMinimum(0);
   S12_ThetaY_mI25_mI20__1392->SetMaximum(527.3156);
   S12_ThetaY_mI25_mI20__1392->SetEntries(452);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1392->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__1392->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1392->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__1392->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__1392->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__1392->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1392->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1392->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1392->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__1392->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__1392->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1392->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1392->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1392->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1392->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1392->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1393 = new TH1D("ThetaY_mI25_mI20__1393","",630,-1575,1575);
   ThetaY_mI25_mI20__1393->SetBinContent(310,0.8888889);
   ThetaY_mI25_mI20__1393->SetBinContent(311,94.55556);
   ThetaY_mI25_mI20__1393->SetBinContent(312,289.9556);
   ThetaY_mI25_mI20__1393->SetBinContent(313,393.9556);
   ThetaY_mI25_mI20__1393->SetBinContent(314,450.3556);
   ThetaY_mI25_mI20__1393->SetBinContent(315,479.3778);
   ThetaY_mI25_mI20__1393->SetBinContent(316,476.4);
   ThetaY_mI25_mI20__1393->SetBinContent(317,447.2222);
   ThetaY_mI25_mI20__1393->SetBinContent(318,396.2889);
   ThetaY_mI25_mI20__1393->SetBinContent(319,293.9333);
   ThetaY_mI25_mI20__1393->SetBinContent(320,94.62222);
   ThetaY_mI25_mI20__1393->SetBinContent(321,1);
   ThetaY_mI25_mI20__1393->SetBinError(310,0.1405457);
   ThetaY_mI25_mI20__1393->SetBinError(311,1.449564);
   ThetaY_mI25_mI20__1393->SetBinError(312,2.538396);
   ThetaY_mI25_mI20__1393->SetBinError(313,2.958812);
   ThetaY_mI25_mI20__1393->SetBinError(314,3.163527);
   ThetaY_mI25_mI20__1393->SetBinError(315,3.263869);
   ThetaY_mI25_mI20__1393->SetBinError(316,3.253716);
   ThetaY_mI25_mI20__1393->SetBinError(317,3.152502);
   ThetaY_mI25_mI20__1393->SetBinError(318,2.967561);
   ThetaY_mI25_mI20__1393->SetBinError(319,2.555749);
   ThetaY_mI25_mI20__1393->SetBinError(320,1.450074);
   ThetaY_mI25_mI20__1393->SetBinError(321,0.1490712);
   ThetaY_mI25_mI20__1393->SetEntries(153835);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1393->SetLineColor(ci);
   ThetaY_mI25_mI20__1393->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1393->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1393->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1393->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1393->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1393->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1393->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1393->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1393->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1393->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1393->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1393->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1393->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1393->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1393->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1393->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1393->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1393->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1393->Draw("AEsame");
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
   
   Double_t _fx3465[12] = {
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
   27.5};
   Double_t _fy3465[12] = {
   0,
   0,
   0,
   0,
   0.09325965,
   0.2190339,
   0.1847187,
   0.2034783,
   0.1539281,
   0.1667045,
   0.1585251,
   1};
   Double_t _felx3465[12] = {
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
   Double_t _fely3465[12] = {
   0,
   0,
   0,
   0,
   0.01434725,
   0.02139283,
   0.01969345,
   0.02133863,
   0.01968735,
   0.02377643,
   0.04053707,
   0.830684};
   Double_t _fehx3465[12] = {
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
   Double_t _fehy3465[12] = {
   2.119552,
   0.01947448,
   0.006349772,
   0.004673414,
   0.0167454,
   0.02359283,
   0.02191495,
   0.02370415,
   0.02238337,
   0.02743812,
   0.05252842,
   2.384947};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3465,_fy3465,_felx3465,_fehx3465,_fely3465,_fehy3465);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3465 = new TH1F("Graph_Graph3465","",100,-100,100);
   Graph_Graph3465->SetMinimum(0);
   Graph_Graph3465->SetMaximum(1.5);
   Graph_Graph3465->SetDirectory(0);
   Graph_Graph3465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3465->SetLineColor(ci);
   Graph_Graph3465->GetXaxis()->SetRange(1,100);
   Graph_Graph3465->GetXaxis()->CenterTitle(true);
   Graph_Graph3465->GetXaxis()->SetLabelFont(42);
   Graph_Graph3465->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3465->GetXaxis()->SetTitleFont(42);
   Graph_Graph3465->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3465->GetYaxis()->CenterTitle(true);
   Graph_Graph3465->GetYaxis()->SetLabelFont(42);
   Graph_Graph3465->GetYaxis()->SetTitleFont(42);
   Graph_Graph3465->GetZaxis()->SetLabelFont(42);
   Graph_Graph3465->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3465->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3465);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,527.3156,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1394 = new TH2D("ThetaY_vs_Y_mI25_mI20__1394","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8068,40);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8094,4255);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8120,13048);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8146,17728);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8172,20266);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8198,21572);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8224,21438);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8250,20125);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8276,17833);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8302,13227);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8328,4258);
   ThetaY_vs_Y_mI25_mI20__1394->SetBinContent(8354,45);
   ThetaY_vs_Y_mI25_mI20__1394->SetEntries(153835);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1394->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1394->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1394->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1394->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1394->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1394->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1394->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1394->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1394->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1394->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1394->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1394->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1394->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1394->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1394->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1394->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
