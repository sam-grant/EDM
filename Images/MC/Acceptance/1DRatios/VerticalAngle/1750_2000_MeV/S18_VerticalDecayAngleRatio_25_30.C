void S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08667898,125,1.6469);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__1308 = new TH1D("S18_ThetaY_25_30__1308","",630,-1575,1575);
   S18_ThetaY_25_30__1308->SetBinContent(310,0.1639344);
   S18_ThetaY_25_30__1308->SetBinContent(311,0.6229508);
   S18_ThetaY_25_30__1308->SetBinContent(312,1);
   S18_ThetaY_25_30__1308->SetBinContent(313,1);
   S18_ThetaY_25_30__1308->SetBinContent(314,0.9508197);
   S18_ThetaY_25_30__1308->SetBinContent(315,1.295082);
   S18_ThetaY_25_30__1308->SetBinContent(316,1.295082);
   S18_ThetaY_25_30__1308->SetBinContent(317,0.2295082);
   S18_ThetaY_25_30__1308->SetBinContent(318,0.01639344);
   S18_ThetaY_25_30__1308->SetBinError(310,0.05184062);
   S18_ThetaY_25_30__1308->SetBinError(311,0.101056);
   S18_ThetaY_25_30__1308->SetBinError(312,0.1280369);
   S18_ThetaY_25_30__1308->SetBinError(313,0.1280369);
   S18_ThetaY_25_30__1308->SetBinError(314,0.1248487);
   S18_ThetaY_25_30__1308->SetBinError(315,0.1457081);
   S18_ThetaY_25_30__1308->SetBinError(316,0.1457081);
   S18_ThetaY_25_30__1308->SetBinError(317,0.06133865);
   S18_ThetaY_25_30__1308->SetBinError(318,0.01639344);
   S18_ThetaY_25_30__1308->SetMinimum(0);
   S18_ThetaY_25_30__1308->SetMaximum(1.473543);
   S18_ThetaY_25_30__1308->SetEntries(401);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1308->SetLineColor(ci);
   S18_ThetaY_25_30__1308->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1308->SetMarkerColor(ci);
   S18_ThetaY_25_30__1308->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__1308->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__1308->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1308->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1308->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1308->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__1308->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__1308->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1308->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1308->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1308->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1308->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1308->Draw("AE");
   
   TH1D *ThetaY_25_30__1309 = new TH1D("ThetaY_25_30__1309","",630,-1575,1575);
   ThetaY_25_30__1309->SetBinContent(309,0.0007426662);
   ThetaY_25_30__1309->SetBinContent(310,0.1973635);
   ThetaY_25_30__1309->SetBinContent(311,0.710453);
   ThetaY_25_30__1309->SetBinContent(312,1);
   ThetaY_25_30__1309->SetBinContent(313,1.176012);
   ThetaY_25_30__1309->SetBinContent(314,1.289083);
   ThetaY_25_30__1309->SetBinContent(315,1.333921);
   ThetaY_25_30__1309->SetBinContent(316,1.339584);
   ThetaY_25_30__1309->SetBinContent(317,1.29326);
   ThetaY_25_30__1309->SetBinContent(318,1.187616);
   ThetaY_25_30__1309->SetBinContent(319,0.9967508);
   ThetaY_25_30__1309->SetBinContent(320,0.7113814);
   ThetaY_25_30__1309->SetBinContent(321,0.2006127);
   ThetaY_25_30__1309->SetBinContent(322,0.0003713331);
   ThetaY_25_30__1309->SetBinError(309,0.0002625721);
   ThetaY_25_30__1309->SetBinError(310,0.004280409);
   ThetaY_25_30__1309->SetBinError(311,0.008121187);
   ThetaY_25_30__1309->SetBinError(312,0.009635002);
   ThetaY_25_30__1309->SetBinError(313,0.01044859);
   ThetaY_25_30__1309->SetBinError(314,0.01093937);
   ThetaY_25_30__1309->SetBinError(315,0.011128);
   ThetaY_25_30__1309->SetBinError(316,0.01115159);
   ThetaY_25_30__1309->SetBinError(317,0.01095708);
   ThetaY_25_30__1309->SetBinError(318,0.01050001);
   ThetaY_25_30__1309->SetBinError(319,0.009619337);
   ThetaY_25_30__1309->SetBinError(320,0.008126491);
   ThetaY_25_30__1309->SetBinError(321,0.004315499);
   ThetaY_25_30__1309->SetBinError(322,0.0001856665);
   ThetaY_25_30__1309->SetEntries(123201);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1309->SetLineColor(ci);
   ThetaY_25_30__1309->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1309->SetMarkerColor(ci);
   ThetaY_25_30__1309->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1309->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1309->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1309->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1309->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1309->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1309->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1309->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1309->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1309->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1309->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1309->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1309->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1309->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1309->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1309->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1309->Draw("AEsame");
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
   
   Double_t _fx3437[14] = {
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
   Double_t _fy3437[14] = {
   0,
   0.8306217,
   0.876836,
   1,
   0.8503315,
   0.7375939,
   0.9708834,
   0.9667791,
   0.1774648,
   0.01380366,
   0,
   0,
   0,
   0};
   Double_t _felx3437[14] = {
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
   Double_t _fely3437[14] = {
   0,
   0.2587671,
   0.1419551,
   0.1280402,
   0.1088315,
   0.09676891,
   0.1092968,
   0.1088335,
   0.04687906,
   0.01141919,
   0,
   0,
   0,
   0};
   Double_t _fehx3437[14] = {
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
   Double_t _fehy3437[14] = {
   45.6946,
   0.3556109,
   0.1670555,
   0.1456004,
   0.1237489,
   0.110389,
   0.1223609,
   0.121842,
   0.06127156,
   0.03174597,
   0.03028166,
   0.04243056,
   0.1505066,
   103.2132};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3437,_fy3437,_felx3437,_fehx3437,_fely3437,_fehy3437);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3437 = new TH1F("Graph_Graph3437","",100,-100,100);
   Graph_Graph3437->SetMinimum(0);
   Graph_Graph3437->SetMaximum(1.5);
   Graph_Graph3437->SetDirectory(0);
   Graph_Graph3437->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3437->SetLineColor(ci);
   Graph_Graph3437->GetXaxis()->SetRange(1,100);
   Graph_Graph3437->GetXaxis()->CenterTitle(true);
   Graph_Graph3437->GetXaxis()->SetLabelFont(42);
   Graph_Graph3437->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3437->GetXaxis()->SetTitleFont(42);
   Graph_Graph3437->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3437->GetYaxis()->CenterTitle(true);
   Graph_Graph3437->GetYaxis()->SetLabelFont(42);
   Graph_Graph3437->GetYaxis()->SetTitleFont(42);
   Graph_Graph3437->GetZaxis()->SetLabelFont(42);
   Graph_Graph3437->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3437->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3437);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.473543,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1310 = new TH2D("ThetaY_vs_Y_25_30__1310","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8052,8);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8078,2126);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8104,7653);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8130,10772);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8156,12668);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8182,13886);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8208,14369);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8234,14430);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8260,13931);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8286,12793);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8312,10737);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8338,7663);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8364,2161);
   ThetaY_vs_Y_25_30__1310->SetBinContent(8390,4);
   ThetaY_vs_Y_25_30__1310->SetEntries(123201);
   ThetaY_vs_Y_25_30__1310->SetContour(20);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(1,721.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(2,1443);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(3,2164.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(4,2886);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(5,3607.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(6,4329);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(7,5050.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(8,5772);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(9,6493.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(10,7215);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(11,7936.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(12,8658);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(13,9379.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(14,10101);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(15,10822.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(16,11544);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(17,12265.5);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(18,12987);
   ThetaY_vs_Y_25_30__1310->SetContourLevel(19,13708.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1310->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1310->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1310->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1310->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1310->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1310->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1310->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1310->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1310->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1310->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1310->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1310->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1310->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1310->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1310->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1310->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
