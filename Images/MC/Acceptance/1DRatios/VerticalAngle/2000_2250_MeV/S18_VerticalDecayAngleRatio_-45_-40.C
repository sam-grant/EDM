void S18_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.07939431,125,1.508492);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI45_mI40__1437 = new TH1D("S18_ThetaY_mI45_mI40__1437","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__1437->SetBinContent(315,0.125);
   S18_ThetaY_mI45_mI40__1437->SetBinContent(316,0.75);
   S18_ThetaY_mI45_mI40__1437->SetBinContent(317,0.75);
   S18_ThetaY_mI45_mI40__1437->SetBinContent(318,1);
   S18_ThetaY_mI45_mI40__1437->SetBinContent(319,0.625);
   S18_ThetaY_mI45_mI40__1437->SetBinContent(320,0.125);
   S18_ThetaY_mI45_mI40__1437->SetBinError(315,0.125);
   S18_ThetaY_mI45_mI40__1437->SetBinError(316,0.3061862);
   S18_ThetaY_mI45_mI40__1437->SetBinError(317,0.3061862);
   S18_ThetaY_mI45_mI40__1437->SetBinError(318,0.3535534);
   S18_ThetaY_mI45_mI40__1437->SetBinError(319,0.2795085);
   S18_ThetaY_mI45_mI40__1437->SetBinError(320,0.125);
   S18_ThetaY_mI45_mI40__1437->SetMinimum(0);
   S18_ThetaY_mI45_mI40__1437->SetMaximum(1.349703);
   S18_ThetaY_mI45_mI40__1437->SetEntries(27);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__1437->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__1437->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__1437->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__1437->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__1437->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__1437->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1437->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__1437->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1437->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__1437->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__1437->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1437->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1437->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1437->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__1437->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1437->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1438 = new TH1D("ThetaY_mI45_mI40__1438","",630,-1575,1575);
   ThetaY_mI45_mI40__1438->SetBinContent(310,0.00148368);
   ThetaY_mI45_mI40__1438->SetBinContent(311,0.2366469);
   ThetaY_mI45_mI40__1438->SetBinContent(312,0.7388724);
   ThetaY_mI45_mI40__1438->SetBinContent(313,0.9821958);
   ThetaY_mI45_mI40__1438->SetBinContent(314,1.113501);
   ThetaY_mI45_mI40__1438->SetBinContent(315,1.227003);
   ThetaY_mI45_mI40__1438->SetBinContent(316,1.15727);
   ThetaY_mI45_mI40__1438->SetBinContent(317,1.146142);
   ThetaY_mI45_mI40__1438->SetBinContent(318,1);
   ThetaY_mI45_mI40__1438->SetBinContent(319,0.7833828);
   ThetaY_mI45_mI40__1438->SetBinContent(320,0.2336795);
   ThetaY_mI45_mI40__1438->SetBinContent(321,0.0007418398);
   ThetaY_mI45_mI40__1438->SetBinError(310,0.00104912);
   ThetaY_mI45_mI40__1438->SetBinError(311,0.01324968);
   ThetaY_mI45_mI40__1438->SetBinError(312,0.02341207);
   ThetaY_mI45_mI40__1438->SetBinError(313,0.02699318);
   ThetaY_mI45_mI40__1438->SetBinError(314,0.02874091);
   ThetaY_mI45_mI40__1438->SetBinError(315,0.03017018);
   ThetaY_mI45_mI40__1438->SetBinError(316,0.02930032);
   ThetaY_mI45_mI40__1438->SetBinError(317,0.02915912);
   ThetaY_mI45_mI40__1438->SetBinError(318,0.02723674);
   ThetaY_mI45_mI40__1438->SetBinError(319,0.02410694);
   ThetaY_mI45_mI40__1438->SetBinError(320,0.01316635);
   ThetaY_mI45_mI40__1438->SetBinError(321,0.0007418398);
   ThetaY_mI45_mI40__1438->SetEntries(11621);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1438->SetLineColor(ci);
   ThetaY_mI45_mI40__1438->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1438->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1438->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1438->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1438->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1438->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1438->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1438->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1438->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1438->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1438->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1438->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1438->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1438->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1438->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1438->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1438->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1438->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1438->Draw("AEsame");
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
   
   Double_t _fx3480[12] = {
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
   Double_t _fy3480[12] = {
   0,
   0,
   0,
   0,
   0,
   0.1018742,
   0.6480769,
   0.6543689,
   1,
   0.797822,
   0.5349206,
   0};
   Double_t _felx3480[12] = {
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
   Double_t _fely3480[12] = {
   0,
   0,
   0,
   0,
   0,
   0.0842848,
   0.2574861,
   0.2599901,
   0.3469604,
   0.3452865,
   0.4427783,
   0};
   Double_t _fehx3480[12] = {
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
   Double_t _fehy3480[12] = {
   254.5315,
   0.9752634,
   0.311746,
   0.2344622,
   0.2067971,
   0.2344963,
   0.3882682,
   0.3920494,
   0.4953271,
   0.5418646,
   1.236519,
   893.5512};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3480,_fy3480,_felx3480,_fehx3480,_fely3480,_fehy3480);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3480 = new TH1F("Graph_Graph3480","",100,-100,100);
   Graph_Graph3480->SetMinimum(0);
   Graph_Graph3480->SetMaximum(1.5);
   Graph_Graph3480->SetDirectory(0);
   Graph_Graph3480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3480->SetLineColor(ci);
   Graph_Graph3480->GetXaxis()->SetRange(1,100);
   Graph_Graph3480->GetXaxis()->CenterTitle(true);
   Graph_Graph3480->GetXaxis()->SetLabelFont(42);
   Graph_Graph3480->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3480->GetXaxis()->SetTitleFont(42);
   Graph_Graph3480->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3480->GetYaxis()->CenterTitle(true);
   Graph_Graph3480->GetYaxis()->SetLabelFont(42);
   Graph_Graph3480->GetYaxis()->SetTitleFont(42);
   Graph_Graph3480->GetZaxis()->SetLabelFont(42);
   Graph_Graph3480->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3480->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3480);
   
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1439 = new TH2D("ThetaY_vs_Y_mI45_mI40__1439","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8064,2);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8090,319);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8116,996);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8142,1324);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8168,1501);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8194,1654);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8220,1560);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8246,1545);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8272,1348);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8298,1056);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8324,315);
   ThetaY_vs_Y_mI45_mI40__1439->SetBinContent(8350,1);
   ThetaY_vs_Y_mI45_mI40__1439->SetEntries(11621);
   ThetaY_vs_Y_mI45_mI40__1439->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(1,82.7);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(2,165.4);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(3,248.1);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(4,330.8);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(5,413.5);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(6,496.2);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(7,578.9);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(8,661.6);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(9,744.3);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(10,827);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(11,909.7);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(12,992.4);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(13,1075.1);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(14,1157.8);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(15,1240.5);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(16,1323.2);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(17,1405.9);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(18,1488.6);
   ThetaY_vs_Y_mI45_mI40__1439->SetContourLevel(19,1571.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1439->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1439->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1439->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1439->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1439->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1439->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1439->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1439->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1439->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1439->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1439->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1439->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1439->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1439->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1439->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1439->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-45_-40","Reco vertices","lpf");
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
