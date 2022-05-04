void S12S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07939431,125,1.508492);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__1494 = new TH1D("S12S18_ThetaY_mI45_mI40__1494","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__1494->SetBinContent(315,0.05882353);
   S12S18_ThetaY_mI45_mI40__1494->SetBinContent(316,0.5294118);
   S12S18_ThetaY_mI45_mI40__1494->SetBinContent(317,0.8235294);
   S12S18_ThetaY_mI45_mI40__1494->SetBinContent(318,1);
   S12S18_ThetaY_mI45_mI40__1494->SetBinContent(319,0.5294118);
   S12S18_ThetaY_mI45_mI40__1494->SetBinContent(320,0.1176471);
   S12S18_ThetaY_mI45_mI40__1494->SetBinError(315,0.05882353);
   S12S18_ThetaY_mI45_mI40__1494->SetBinError(316,0.1764706);
   S12S18_ThetaY_mI45_mI40__1494->SetBinError(317,0.2200975);
   S12S18_ThetaY_mI45_mI40__1494->SetBinError(318,0.2425356);
   S12S18_ThetaY_mI45_mI40__1494->SetBinError(319,0.1764706);
   S12S18_ThetaY_mI45_mI40__1494->SetBinError(320,0.08318903);
   S12S18_ThetaY_mI45_mI40__1494->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__1494->SetMaximum(1.349703);
   S12S18_ThetaY_mI45_mI40__1494->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1494->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__1494->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1494->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__1494->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__1494->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__1494->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1494->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1494->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1494->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__1494->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__1494->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1494->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1494->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1494->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1494->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1494->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1495 = new TH1D("ThetaY_mI45_mI40__1495","",630,-1575,1575);
   ThetaY_mI45_mI40__1495->SetBinContent(310,0.00148368);
   ThetaY_mI45_mI40__1495->SetBinContent(311,0.2366469);
   ThetaY_mI45_mI40__1495->SetBinContent(312,0.7388724);
   ThetaY_mI45_mI40__1495->SetBinContent(313,0.9821958);
   ThetaY_mI45_mI40__1495->SetBinContent(314,1.113501);
   ThetaY_mI45_mI40__1495->SetBinContent(315,1.227003);
   ThetaY_mI45_mI40__1495->SetBinContent(316,1.15727);
   ThetaY_mI45_mI40__1495->SetBinContent(317,1.146142);
   ThetaY_mI45_mI40__1495->SetBinContent(318,1);
   ThetaY_mI45_mI40__1495->SetBinContent(319,0.7833828);
   ThetaY_mI45_mI40__1495->SetBinContent(320,0.2336795);
   ThetaY_mI45_mI40__1495->SetBinContent(321,0.0007418398);
   ThetaY_mI45_mI40__1495->SetBinError(310,0.00104912);
   ThetaY_mI45_mI40__1495->SetBinError(311,0.01324968);
   ThetaY_mI45_mI40__1495->SetBinError(312,0.02341207);
   ThetaY_mI45_mI40__1495->SetBinError(313,0.02699318);
   ThetaY_mI45_mI40__1495->SetBinError(314,0.02874091);
   ThetaY_mI45_mI40__1495->SetBinError(315,0.03017018);
   ThetaY_mI45_mI40__1495->SetBinError(316,0.02930032);
   ThetaY_mI45_mI40__1495->SetBinError(317,0.02915912);
   ThetaY_mI45_mI40__1495->SetBinError(318,0.02723674);
   ThetaY_mI45_mI40__1495->SetBinError(319,0.02410694);
   ThetaY_mI45_mI40__1495->SetBinError(320,0.01316635);
   ThetaY_mI45_mI40__1495->SetBinError(321,0.0007418398);
   ThetaY_mI45_mI40__1495->SetEntries(11621);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1495->SetLineColor(ci);
   ThetaY_mI45_mI40__1495->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1495->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1495->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1495->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1495->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1495->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1495->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1495->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1495->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1495->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1495->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1495->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1495->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1495->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1495->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1495->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1495->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1495->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1495->Draw("AEsame");
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
   
   Double_t _fx3499[12] = {
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
   Double_t _fy3499[12] = {
   0,
   0,
   0,
   0,
   0,
   0.04794082,
   0.4574661,
   0.7185227,
   1,
   0.6758021,
   0.5034547,
   0};
   Double_t _felx3499[12] = {
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
   Double_t _fely3499[12] = {
   0,
   0,
   0,
   0,
   0,
   0.03966344,
   0.1500032,
   0.1905171,
   0.2415554,
   0.2218686,
   0.325831,
   0};
   Double_t _fehx3499[12] = {
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
   Double_t _fehy3499[12] = {
   119.7795,
   0.4589475,
   0.146704,
   0.1103351,
   0.09731629,
   0.1103512,
   0.2097975,
   0.2494193,
   0.3086185,
   0.3105465,
   0.6689176,
   420.4947};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3499,_fy3499,_felx3499,_fehx3499,_fely3499,_fehy3499);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3499 = new TH1F("Graph_Graph3499","",100,-100,100);
   Graph_Graph3499->SetMinimum(0);
   Graph_Graph3499->SetMaximum(1.5);
   Graph_Graph3499->SetDirectory(0);
   Graph_Graph3499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3499->SetLineColor(ci);
   Graph_Graph3499->GetXaxis()->SetRange(1,100);
   Graph_Graph3499->GetXaxis()->CenterTitle(true);
   Graph_Graph3499->GetXaxis()->SetLabelFont(42);
   Graph_Graph3499->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3499->GetXaxis()->SetTitleFont(42);
   Graph_Graph3499->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3499->GetYaxis()->CenterTitle(true);
   Graph_Graph3499->GetYaxis()->SetLabelFont(42);
   Graph_Graph3499->GetYaxis()->SetTitleFont(42);
   Graph_Graph3499->GetZaxis()->SetLabelFont(42);
   Graph_Graph3499->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3499->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3499);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.349703,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1496 = new TH2D("ThetaY_vs_Y_mI45_mI40__1496","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8064,2);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8090,319);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8116,996);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8142,1324);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8168,1501);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8194,1654);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8220,1560);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8246,1545);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8272,1348);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8298,1056);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8324,315);
   ThetaY_vs_Y_mI45_mI40__1496->SetBinContent(8350,1);
   ThetaY_vs_Y_mI45_mI40__1496->SetEntries(11621);
   ThetaY_vs_Y_mI45_mI40__1496->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(1,82.7);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(2,165.4);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(3,248.1);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(4,330.8);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(5,413.5);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(6,496.2);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(7,578.9);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(8,661.6);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(9,744.3);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(10,827);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(11,909.7);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(12,992.4);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(13,1075.1);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(14,1157.8);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(15,1240.5);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(16,1323.2);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(17,1405.9);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(18,1488.6);
   ThetaY_vs_Y_mI45_mI40__1496->SetContourLevel(19,1571.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1496->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1496->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1496->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1496->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1496->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1496->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1496->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1496->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1496->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1496->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1496->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1496->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1496->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1496->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1496->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1496->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
