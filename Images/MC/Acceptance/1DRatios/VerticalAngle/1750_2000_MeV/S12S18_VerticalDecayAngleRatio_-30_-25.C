void S12S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.124628,125,2.367932);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI30_mI25__1332 = new TH1D("S12S18_ThetaY_mI30_mI25__1332","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(314,0.5824176);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(315,1.428571);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(316,1.769231);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(317,1.604396);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(318,1.351648);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(319,1.164835);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(320,1);
   S12S18_ThetaY_mI30_mI25__1332->SetBinContent(321,0.1868132);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(314,0.08000121);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(315,0.125294);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(316,0.1394349);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(317,0.1327807);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(318,0.121874);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(319,0.1131388);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(320,0.1048285);
   S12S18_ThetaY_mI30_mI25__1332->SetBinError(321,0.04530885);
   S12S18_ThetaY_mI30_mI25__1332->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__1332->SetMaximum(2.118676);
   S12S18_ThetaY_mI30_mI25__1332->SetEntries(827);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1332->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__1332->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1332->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__1332->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__1332->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__1332->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1332->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1332->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1332->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__1332->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__1332->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1332->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1332->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1332->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1332->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1332->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1333 = new TH1D("ThetaY_mI30_mI25__1333","",630,-1575,1575);
   ThetaY_mI30_mI25__1333->SetBinContent(309,0.000932463);
   ThetaY_mI30_mI25__1333->SetBinContent(310,0.2806714);
   ThetaY_mI30_mI25__1333->SetBinContent(311,1.005195);
   ThetaY_mI30_mI25__1333->SetBinContent(312,1.441188);
   ThetaY_mI30_mI25__1333->SetBinContent(313,1.679766);
   ThetaY_mI30_mI25__1333->SetBinContent(314,1.846943);
   ThetaY_mI30_mI25__1333->SetBinContent(315,1.87878);
   ThetaY_mI30_mI25__1333->SetBinContent(316,1.926069);
   ThetaY_mI30_mI25__1333->SetBinContent(317,1.83189);
   ThetaY_mI30_mI25__1333->SetBinContent(318,1.70361);
   ThetaY_mI30_mI25__1333->SetBinContent(319,1.448914);
   ThetaY_mI30_mI25__1333->SetBinContent(320,1);
   ThetaY_mI30_mI25__1333->SetBinContent(321,0.2833356);
   ThetaY_mI30_mI25__1333->SetBinContent(322,0.001198881);
   ThetaY_mI30_mI25__1333->SetBinError(309,0.0003524379);
   ThetaY_mI30_mI25__1333->SetBinError(310,0.006114569);
   ThetaY_mI30_mI25__1333->SetBinError(311,0.01157156);
   ThetaY_mI30_mI25__1333->SetBinError(312,0.01385566);
   ThetaY_mI30_mI25__1333->SetBinError(313,0.01495861);
   ThetaY_mI30_mI25__1333->SetBinError(314,0.01568532);
   ThetaY_mI30_mI25__1333->SetBinError(315,0.01581994);
   ThetaY_mI30_mI25__1333->SetBinError(316,0.01601779);
   ThetaY_mI30_mI25__1333->SetBinError(317,0.01562128);
   ThetaY_mI30_mI25__1333->SetBinError(318,0.0150644);
   ThetaY_mI30_mI25__1333->SetBinError(319,0.01389275);
   ThetaY_mI30_mI25__1333->SetBinError(320,0.01154162);
   ThetaY_mI30_mI25__1333->SetBinError(321,0.006143521);
   ThetaY_mI30_mI25__1333->SetBinError(322,0.000399627);
   ThetaY_mI30_mI25__1333->SetEntries(122578);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1333->SetLineColor(ci);
   ThetaY_mI30_mI25__1333->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1333->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1333->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1333->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1333->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1333->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1333->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1333->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1333->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1333->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1333->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1333->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1333->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1333->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1333->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1333->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1333->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1333->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1333->Draw("AEsame");
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
   
   Double_t _fx3445[14] = {
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
   Double_t _fy3445[14] = {
   0,
   0,
   0,
   0,
   0,
   0.3153414,
   0.7603719,
   0.9185708,
   0.8758143,
   0.7934025,
   0.8039365,
   1,
   0.6593355,
   0};
   Double_t _felx3445[14] = {
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
   Double_t _fely3445[14] = {
   0,
   0,
   0,
   0,
   0,
   0.04325932,
   0.06690712,
   0.07271736,
   0.07278057,
   0.07178134,
   0.07833735,
   0.105261,
   0.1589223,
   0};
   Double_t _fehx3445[14] = {
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
   Double_t _fehy3445[14] = {
   24.81688,
   0.07211226,
   0.0201289,
   0.01403892,
   0.01204483,
   0.04964733,
   0.07307563,
   0.07872061,
   0.07910124,
   0.07859537,
   0.08637776,
   0.1169861,
   0.2028758,
   18.72481};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3445,_fy3445,_felx3445,_fehx3445,_fely3445,_fehy3445);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3445 = new TH1F("Graph_Graph3445","",100,-100,100);
   Graph_Graph3445->SetMinimum(0);
   Graph_Graph3445->SetMaximum(1.5);
   Graph_Graph3445->SetDirectory(0);
   Graph_Graph3445->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3445->SetLineColor(ci);
   Graph_Graph3445->GetXaxis()->SetRange(1,100);
   Graph_Graph3445->GetXaxis()->CenterTitle(true);
   Graph_Graph3445->GetXaxis()->SetLabelFont(42);
   Graph_Graph3445->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3445->GetXaxis()->SetTitleFont(42);
   Graph_Graph3445->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3445->GetYaxis()->CenterTitle(true);
   Graph_Graph3445->GetYaxis()->SetLabelFont(42);
   Graph_Graph3445->GetYaxis()->SetTitleFont(42);
   Graph_Graph3445->GetZaxis()->SetLabelFont(42);
   Graph_Graph3445->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3445->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3445);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.118676,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1334 = new TH2D("ThetaY_vs_Y_mI30_mI25__1334","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8041,7);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8067,2107);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8093,7546);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8119,10819);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8145,12610);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8171,13865);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8197,14104);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8223,14459);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8249,13752);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8275,12789);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8301,10877);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8327,7507);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8353,2127);
   ThetaY_vs_Y_mI30_mI25__1334->SetBinContent(8379,9);
   ThetaY_vs_Y_mI30_mI25__1334->SetEntries(122578);
   ThetaY_vs_Y_mI30_mI25__1334->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(1,722.95);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(2,1445.9);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(3,2168.85);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(4,2891.8);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(5,3614.75);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(6,4337.7);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(7,5060.65);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(8,5783.6);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(9,6506.55);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(10,7229.5);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(11,7952.45);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(12,8675.4);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(13,9398.35);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(14,10121.3);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(15,10844.25);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(16,11567.2);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(17,12290.15);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(18,13013.1);
   ThetaY_vs_Y_mI30_mI25__1334->SetContourLevel(19,13736.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1334->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1334->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1334->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1334->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1334->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1334->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1334->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1334->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1334->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1334->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1334->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1334->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1334->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1334->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1334->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1334->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
