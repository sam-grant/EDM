void S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1538977,125,2.924057);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__1818 = new TH1D("S18_ThetaY_20_25__1818","",630,-1575,1575);
   S18_ThetaY_20_25__1818->SetBinContent(313,1);
   S18_ThetaY_20_25__1818->SetBinContent(314,1.285714);
   S18_ThetaY_20_25__1818->SetBinContent(315,1.607143);
   S18_ThetaY_20_25__1818->SetBinContent(316,1.535714);
   S18_ThetaY_20_25__1818->SetBinContent(317,0.1785714);
   S18_ThetaY_20_25__1818->SetBinError(313,0.1889822);
   S18_ThetaY_20_25__1818->SetBinError(314,0.2142857);
   S18_ThetaY_20_25__1818->SetBinError(315,0.2395787);
   S18_ThetaY_20_25__1818->SetBinError(316,0.2341942);
   S18_ThetaY_20_25__1818->SetBinError(317,0.07985957);
   S18_ThetaY_20_25__1818->SetMinimum(0);
   S18_ThetaY_20_25__1818->SetMaximum(2.616261);
   S18_ThetaY_20_25__1818->SetEntries(157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1818->SetLineColor(ci);
   S18_ThetaY_20_25__1818->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1818->SetMarkerColor(ci);
   S18_ThetaY_20_25__1818->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__1818->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__1818->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1818->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1818->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1818->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__1818->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__1818->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1818->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1818->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1818->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1818->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1818->Draw("AE");
   
   TH1D *ThetaY_20_25__1819 = new TH1D("ThetaY_20_25__1819","",630,-1575,1575);
   ThetaY_20_25__1819->SetBinContent(312,0.04802432);
   ThetaY_20_25__1819->SetBinContent(313,1);
   ThetaY_20_25__1819->SetBinContent(314,1.981611);
   ThetaY_20_25__1819->SetBinContent(315,2.33693);
   ThetaY_20_25__1819->SetBinContent(316,2.378419);
   ThetaY_20_25__1819->SetBinContent(317,1.967021);
   ThetaY_20_25__1819->SetBinContent(318,0.9767477);
   ThetaY_20_25__1819->SetBinContent(319,0.05030395);
   ThetaY_20_25__1819->SetBinError(312,0.002701579);
   ThetaY_20_25__1819->SetBinError(313,0.01232784);
   ThetaY_20_25__1819->SetBinError(314,0.01735387);
   ThetaY_20_25__1819->SetBinError(315,0.0188456);
   ThetaY_20_25__1819->SetBinError(316,0.01901215);
   ThetaY_20_25__1819->SetBinError(317,0.01728986);
   ThetaY_20_25__1819->SetBinError(318,0.01218367);
   ThetaY_20_25__1819->SetBinError(319,0.002764955);
   ThetaY_20_25__1819->SetEntries(70663);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1819->SetLineColor(ci);
   ThetaY_20_25__1819->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1819->SetMarkerColor(ci);
   ThetaY_20_25__1819->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1819->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1819->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1819->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1819->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1819->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1819->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1819->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1819->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1819->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1819->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1819->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1819->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1819->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1819->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1819->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1819->Draw("AEsame");
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
   
   Double_t _fx3607[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3607[8] = {
   0,
   1,
   0.6488228,
   0.6877154,
   0.6456869,
   0.09078266,
   0,
   0};
   Double_t _felx3607[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3607[8] = {
   0,
   0.1882327,
   0.107777,
   0.1022823,
   0.09821353,
   0.0392188,
   0,
   0};
   Double_t _fehx3607[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3607[8] = {
   1.37311,
   0.2275366,
   0.1273709,
   0.118764,
   0.1144303,
   0.06143386,
   0.06732567,
   1.310711};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3607,_fy3607,_felx3607,_fehx3607,_fely3607,_fehy3607);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3607 = new TH1F("Graph_Graph3607","",100,-100,100);
   Graph_Graph3607->SetMinimum(0);
   Graph_Graph3607->SetMaximum(1.5);
   Graph_Graph3607->SetDirectory(0);
   Graph_Graph3607->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3607->SetLineColor(ci);
   Graph_Graph3607->GetXaxis()->SetRange(1,100);
   Graph_Graph3607->GetXaxis()->CenterTitle(true);
   Graph_Graph3607->GetXaxis()->SetLabelFont(42);
   Graph_Graph3607->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3607->GetXaxis()->SetTitleFont(42);
   Graph_Graph3607->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3607->GetYaxis()->CenterTitle(true);
   Graph_Graph3607->GetYaxis()->SetLabelFont(42);
   Graph_Graph3607->GetYaxis()->SetTitleFont(42);
   Graph_Graph3607->GetZaxis()->SetLabelFont(42);
   Graph_Graph3607->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3607->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3607);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.616261,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1820 = new TH2D("ThetaY_vs_Y_20_25__1820","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8129,316);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8155,6580);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8181,13039);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8207,15377);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8233,15650);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8259,12943);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8285,6427);
   ThetaY_vs_Y_20_25__1820->SetBinContent(8311,331);
   ThetaY_vs_Y_20_25__1820->SetEntries(70663);
   ThetaY_vs_Y_20_25__1820->SetContour(20);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(1,782.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(2,1565);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(3,2347.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(4,3130);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(5,3912.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(6,4695);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(7,5477.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(8,6260);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(9,7042.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(10,7825);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(11,8607.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(12,9390);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(13,10172.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(14,10955);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(15,11737.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(16,12520);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(17,13302.5);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(18,14085);
   ThetaY_vs_Y_20_25__1820->SetContourLevel(19,14867.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1820->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1820->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1820->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1820->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1820->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1820->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1820->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1820->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1820->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1820->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1820->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1820->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1820->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1820->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1820->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1820->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
