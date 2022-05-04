void S12S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-11.748,125,223.212);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__984 = new TH1D("S12S18_ThetaY_mI40_mI35__984","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(314,1);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(315,26);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(316,66);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(317,63);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(318,51);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(319,76);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(320,48);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(321,56);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(322,25);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(323,12);
   S12S18_ThetaY_mI40_mI35__984->SetBinContent(324,1);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(314,1);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(315,5.09902);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(316,8.124038);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(317,7.937254);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(318,7.141428);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(319,8.717798);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(320,6.928203);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(321,7.483315);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(322,5);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(323,3.464102);
   S12S18_ThetaY_mI40_mI35__984->SetBinError(324,1);
   S12S18_ThetaY_mI40_mI35__984->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__984->SetMaximum(199.716);
   S12S18_ThetaY_mI40_mI35__984->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__984->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__984->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__984->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__984->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__984->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__984->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__984->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__984->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__984->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__984->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__984->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__984->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__984->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__984->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__984->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__984->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__985 = new TH1D("ThetaY_mI40_mI35__985","",630,-1575,1575);
   ThetaY_mI40_mI35__985->SetBinContent(307,0.84);
   ThetaY_mI40_mI35__985->SetBinContent(308,33.16);
   ThetaY_mI40_mI35__985->SetBinContent(309,88.56);
   ThetaY_mI40_mI35__985->SetBinContent(310,126.16);
   ThetaY_mI40_mI35__985->SetBinContent(311,149.08);
   ThetaY_mI40_mI35__985->SetBinContent(312,167.8);
   ThetaY_mI40_mI35__985->SetBinContent(313,171.08);
   ThetaY_mI40_mI35__985->SetBinContent(314,177.12);
   ThetaY_mI40_mI35__985->SetBinContent(315,181.56);
   ThetaY_mI40_mI35__985->SetBinContent(316,181.44);
   ThetaY_mI40_mI35__985->SetBinContent(317,180.4);
   ThetaY_mI40_mI35__985->SetBinContent(318,168.96);
   ThetaY_mI40_mI35__985->SetBinContent(319,164.44);
   ThetaY_mI40_mI35__985->SetBinContent(320,150.04);
   ThetaY_mI40_mI35__985->SetBinContent(321,125.48);
   ThetaY_mI40_mI35__985->SetBinContent(322,93.56);
   ThetaY_mI40_mI35__985->SetBinContent(323,30.64);
   ThetaY_mI40_mI35__985->SetBinContent(324,1);
   ThetaY_mI40_mI35__985->SetBinError(307,0.183303);
   ThetaY_mI40_mI35__985->SetBinError(308,1.151694);
   ThetaY_mI40_mI35__985->SetBinError(309,1.882126);
   ThetaY_mI40_mI35__985->SetBinError(310,2.246419);
   ThetaY_mI40_mI35__985->SetBinError(311,2.441966);
   ThetaY_mI40_mI35__985->SetBinError(312,2.590753);
   ThetaY_mI40_mI35__985->SetBinError(313,2.615951);
   ThetaY_mI40_mI35__985->SetBinError(314,2.661729);
   ThetaY_mI40_mI35__985->SetBinError(315,2.694884);
   ThetaY_mI40_mI35__985->SetBinError(316,2.693993);
   ThetaY_mI40_mI35__985->SetBinError(317,2.686261);
   ThetaY_mI40_mI35__985->SetBinError(318,2.599692);
   ThetaY_mI40_mI35__985->SetBinError(319,2.564683);
   ThetaY_mI40_mI35__985->SetBinError(320,2.449816);
   ThetaY_mI40_mI35__985->SetBinError(321,2.240357);
   ThetaY_mI40_mI35__985->SetBinError(322,1.934528);
   ThetaY_mI40_mI35__985->SetBinError(323,1.107068);
   ThetaY_mI40_mI35__985->SetBinError(324,0.2);
   ThetaY_mI40_mI35__985->SetEntries(54783);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__985->SetLineColor(ci);
   ThetaY_mI40_mI35__985->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__985->SetMarkerColor(ci);
   ThetaY_mI40_mI35__985->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__985->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__985->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__985->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__985->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__985->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__985->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__985->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__985->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__985->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__985->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__985->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__985->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__985->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__985->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__985->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__985->Draw("AEsame");
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
   
   Double_t _fx3329[18] = {
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
   Double_t _fy3329[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00564589,
   0.1432033,
   0.3637566,
   0.3492239,
   0.3018466,
   0.4621747,
   0.3199147,
   0.4462863,
   0.2672082,
   0.3916449,
   1};
   Double_t _felx3329[18] = {
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
   Double_t _fely3329[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.004670742,
   0.02797962,
   0.04498058,
   0.0441817,
   0.04237668,
   0.05337862,
   0.04630184,
   0.05997807,
   0.05335408,
   0.1122677,
   0.8333375};
   Double_t _fehx3329[18] = {
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
   Double_t _fehy3329[18] = {
   2.290633,
   0.05558104,
   0.02079706,
   0.01459701,
   0.01235227,
   0.01097393,
   0.01076349,
   0.01298771,
   0.03407219,
   0.05093049,
   0.05017043,
   0.04880071,
   0.05994565,
   0.05355715,
   0.06865883,
   0.06527166,
   0.1504256,
   2.454926};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3329,_fy3329,_felx3329,_fehx3329,_fely3329,_fehy3329);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3329 = new TH1F("Graph_Graph3329","",100,-100,100);
   Graph_Graph3329->SetMinimum(0);
   Graph_Graph3329->SetMaximum(1.5);
   Graph_Graph3329->SetDirectory(0);
   Graph_Graph3329->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3329->SetLineColor(ci);
   Graph_Graph3329->GetXaxis()->SetRange(1,100);
   Graph_Graph3329->GetXaxis()->CenterTitle(true);
   Graph_Graph3329->GetXaxis()->SetLabelFont(42);
   Graph_Graph3329->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3329->GetXaxis()->SetTitleFont(42);
   Graph_Graph3329->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3329->GetYaxis()->CenterTitle(true);
   Graph_Graph3329->GetYaxis()->SetLabelFont(42);
   Graph_Graph3329->GetYaxis()->SetTitleFont(42);
   Graph_Graph3329->GetZaxis()->SetLabelFont(42);
   Graph_Graph3329->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3329->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3329);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,199.716,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__986 = new TH2D("ThetaY_vs_Y_mI40_mI35__986","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(7987,21);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8013,829);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8039,2214);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8065,3154);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8091,3727);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8117,4195);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8143,4277);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8169,4428);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8195,4539);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8221,4536);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8247,4510);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8273,4224);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8299,4111);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8325,3751);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8351,3137);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8377,2339);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8403,766);
   ThetaY_vs_Y_mI40_mI35__986->SetBinContent(8429,25);
   ThetaY_vs_Y_mI40_mI35__986->SetEntries(54783);
   ThetaY_vs_Y_mI40_mI35__986->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(1,226.95);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(2,453.9);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(3,680.85);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(4,907.8);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(5,1134.75);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(6,1361.7);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(7,1588.65);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(8,1815.6);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(9,2042.55);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(10,2269.5);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(11,2496.45);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(12,2723.4);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(13,2950.35);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(14,3177.3);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(15,3404.25);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(16,3631.2);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(17,3858.15);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(18,4085.1);
   ThetaY_vs_Y_mI40_mI35__986->SetContourLevel(19,4312.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__986->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__986->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__986->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__986->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__986->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__986->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__986->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__986->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__986->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__986->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__986->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__986->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__986->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__986->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__986->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__986->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-40_-35","Reco vertices","lpf");
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
