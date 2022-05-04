void S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_mI40_mI35__927 = new TH1D("S18_ThetaY_mI40_mI35__927","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__927->SetBinContent(314,1);
   S18_ThetaY_mI40_mI35__927->SetBinContent(315,17);
   S18_ThetaY_mI40_mI35__927->SetBinContent(316,31);
   S18_ThetaY_mI40_mI35__927->SetBinContent(317,36);
   S18_ThetaY_mI40_mI35__927->SetBinContent(318,23);
   S18_ThetaY_mI40_mI35__927->SetBinContent(319,39);
   S18_ThetaY_mI40_mI35__927->SetBinContent(320,22);
   S18_ThetaY_mI40_mI35__927->SetBinContent(321,24);
   S18_ThetaY_mI40_mI35__927->SetBinContent(322,15);
   S18_ThetaY_mI40_mI35__927->SetBinContent(323,8);
   S18_ThetaY_mI40_mI35__927->SetBinContent(324,1);
   S18_ThetaY_mI40_mI35__927->SetBinError(314,1);
   S18_ThetaY_mI40_mI35__927->SetBinError(315,4.123106);
   S18_ThetaY_mI40_mI35__927->SetBinError(316,5.567764);
   S18_ThetaY_mI40_mI35__927->SetBinError(317,6);
   S18_ThetaY_mI40_mI35__927->SetBinError(318,4.795832);
   S18_ThetaY_mI40_mI35__927->SetBinError(319,6.244998);
   S18_ThetaY_mI40_mI35__927->SetBinError(320,4.690416);
   S18_ThetaY_mI40_mI35__927->SetBinError(321,4.898979);
   S18_ThetaY_mI40_mI35__927->SetBinError(322,3.872983);
   S18_ThetaY_mI40_mI35__927->SetBinError(323,2.828427);
   S18_ThetaY_mI40_mI35__927->SetBinError(324,1);
   S18_ThetaY_mI40_mI35__927->SetMinimum(0);
   S18_ThetaY_mI40_mI35__927->SetMaximum(199.716);
   S18_ThetaY_mI40_mI35__927->SetEntries(217);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__927->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__927->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__927->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__927->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__927->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__927->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__927->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__927->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__927->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__927->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__927->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__927->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__927->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__927->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__927->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__927->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__928 = new TH1D("ThetaY_mI40_mI35__928","",630,-1575,1575);
   ThetaY_mI40_mI35__928->SetBinContent(307,0.84);
   ThetaY_mI40_mI35__928->SetBinContent(308,33.16);
   ThetaY_mI40_mI35__928->SetBinContent(309,88.56);
   ThetaY_mI40_mI35__928->SetBinContent(310,126.16);
   ThetaY_mI40_mI35__928->SetBinContent(311,149.08);
   ThetaY_mI40_mI35__928->SetBinContent(312,167.8);
   ThetaY_mI40_mI35__928->SetBinContent(313,171.08);
   ThetaY_mI40_mI35__928->SetBinContent(314,177.12);
   ThetaY_mI40_mI35__928->SetBinContent(315,181.56);
   ThetaY_mI40_mI35__928->SetBinContent(316,181.44);
   ThetaY_mI40_mI35__928->SetBinContent(317,180.4);
   ThetaY_mI40_mI35__928->SetBinContent(318,168.96);
   ThetaY_mI40_mI35__928->SetBinContent(319,164.44);
   ThetaY_mI40_mI35__928->SetBinContent(320,150.04);
   ThetaY_mI40_mI35__928->SetBinContent(321,125.48);
   ThetaY_mI40_mI35__928->SetBinContent(322,93.56);
   ThetaY_mI40_mI35__928->SetBinContent(323,30.64);
   ThetaY_mI40_mI35__928->SetBinContent(324,1);
   ThetaY_mI40_mI35__928->SetBinError(307,0.183303);
   ThetaY_mI40_mI35__928->SetBinError(308,1.151694);
   ThetaY_mI40_mI35__928->SetBinError(309,1.882126);
   ThetaY_mI40_mI35__928->SetBinError(310,2.246419);
   ThetaY_mI40_mI35__928->SetBinError(311,2.441966);
   ThetaY_mI40_mI35__928->SetBinError(312,2.590753);
   ThetaY_mI40_mI35__928->SetBinError(313,2.615951);
   ThetaY_mI40_mI35__928->SetBinError(314,2.661729);
   ThetaY_mI40_mI35__928->SetBinError(315,2.694884);
   ThetaY_mI40_mI35__928->SetBinError(316,2.693993);
   ThetaY_mI40_mI35__928->SetBinError(317,2.686261);
   ThetaY_mI40_mI35__928->SetBinError(318,2.599692);
   ThetaY_mI40_mI35__928->SetBinError(319,2.564683);
   ThetaY_mI40_mI35__928->SetBinError(320,2.449816);
   ThetaY_mI40_mI35__928->SetBinError(321,2.240357);
   ThetaY_mI40_mI35__928->SetBinError(322,1.934528);
   ThetaY_mI40_mI35__928->SetBinError(323,1.107068);
   ThetaY_mI40_mI35__928->SetBinError(324,0.2);
   ThetaY_mI40_mI35__928->SetEntries(54783);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__928->SetLineColor(ci);
   ThetaY_mI40_mI35__928->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__928->SetMarkerColor(ci);
   ThetaY_mI40_mI35__928->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__928->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__928->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__928->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__928->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__928->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__928->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__928->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__928->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__928->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__928->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__928->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__928->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__928->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__928->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__928->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__928->Draw("AEsame");
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
   
   Double_t _fx3310[18] = {
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
   Double_t _fy3310[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00564589,
   0.09363296,
   0.1708554,
   0.1995565,
   0.1361269,
   0.2371686,
   0.1466276,
   0.1912655,
   0.1603249,
   0.2610966,
   1};
   Double_t _felx3310[18] = {
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
   Double_t _fely3310[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.004670742,
   0.02252372,
   0.03062103,
   0.03323257,
   0.02825009,
   0.03798836,
   0.03110873,
   0.03891026,
   0.04105269,
   0.09077045,
   0.8333375};
   Double_t _fehx3310[18] = {
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
   Double_t _fehy3310[18] = {
   2.290633,
   0.05558104,
   0.02079706,
   0.01459701,
   0.01235227,
   0.01097393,
   0.01076349,
   0.01298771,
   0.02873123,
   0.03667913,
   0.03929701,
   0.03483227,
   0.04463273,
   0.03854085,
   0.04777974,
   0.0532266,
   0.1297614,
   2.454926};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3310,_fy3310,_felx3310,_fehx3310,_fely3310,_fehy3310);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3310 = new TH1F("Graph_Graph3310","",100,-100,100);
   Graph_Graph3310->SetMinimum(0);
   Graph_Graph3310->SetMaximum(1.5);
   Graph_Graph3310->SetDirectory(0);
   Graph_Graph3310->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3310->SetLineColor(ci);
   Graph_Graph3310->GetXaxis()->SetRange(1,100);
   Graph_Graph3310->GetXaxis()->CenterTitle(true);
   Graph_Graph3310->GetXaxis()->SetLabelFont(42);
   Graph_Graph3310->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3310->GetXaxis()->SetTitleFont(42);
   Graph_Graph3310->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3310->GetYaxis()->CenterTitle(true);
   Graph_Graph3310->GetYaxis()->SetLabelFont(42);
   Graph_Graph3310->GetYaxis()->SetTitleFont(42);
   Graph_Graph3310->GetZaxis()->SetLabelFont(42);
   Graph_Graph3310->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3310->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3310);
   
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__929 = new TH2D("ThetaY_vs_Y_mI40_mI35__929","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(7987,21);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8013,829);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8039,2214);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8065,3154);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8091,3727);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8117,4195);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8143,4277);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8169,4428);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8195,4539);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8221,4536);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8247,4510);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8273,4224);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8299,4111);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8325,3751);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8351,3137);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8377,2339);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8403,766);
   ThetaY_vs_Y_mI40_mI35__929->SetBinContent(8429,25);
   ThetaY_vs_Y_mI40_mI35__929->SetEntries(54783);
   ThetaY_vs_Y_mI40_mI35__929->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(1,226.95);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(2,453.9);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(3,680.85);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(4,907.8);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(5,1134.75);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(6,1361.7);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(7,1588.65);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(8,1815.6);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(9,2042.55);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(10,2269.5);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(11,2496.45);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(12,2723.4);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(13,2950.35);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(14,3177.3);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(15,3404.25);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(16,3631.2);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(17,3858.15);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(18,4085.1);
   ThetaY_vs_Y_mI40_mI35__929->SetContourLevel(19,4312.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__929->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__929->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__929->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__929->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__929->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__929->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__929->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__929->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__929->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__929->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__929->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__929->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__929->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__929->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__929->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__929->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-40_-35","Reco vertices","lpf");
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
