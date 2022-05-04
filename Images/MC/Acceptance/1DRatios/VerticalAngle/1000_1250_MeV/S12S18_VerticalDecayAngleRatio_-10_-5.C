void S12S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06814758,125,1.294804);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__831 = new TH1D("S12S18_ThetaY_mI10_mI5__831","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(309,0.004137931);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(310,0.1586207);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(311,0.5917241);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(312,1);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(313,0.9641379);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(314,0.9986207);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(315,1.017931);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(316,1.052414);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(317,0.9393103);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(318,0.9075862);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(319,0.9268966);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(320,0.8427586);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(321,0.7324138);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(322,0.457931);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(323,0.1103448);
   S12S18_ThetaY_mI10_mI5__831->SetBinContent(324,0.006896552);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(309,0.002389036);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(310,0.01479146);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(311,0.02856871);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(312,0.03713907);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(313,0.03646705);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(314,0.03711345);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(315,0.03747056);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(316,0.03809994);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(317,0.03599445);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(318,0.03538139);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(319,0.03575581);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(320,0.03409436);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(321,0.03178405);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(322,0.02513223);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(323,0.01233693);
   S12S18_ThetaY_mI10_mI5__831->SetBinError(324,0.003084232);
   S12S18_ThetaY_mI10_mI5__831->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__831->SetMaximum(1.158509);
   S12S18_ThetaY_mI10_mI5__831->SetEntries(7766);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__831->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__831->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__831->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__831->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__831->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__831->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__831->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__831->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__831->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__831->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__831->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__831->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__831->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__831->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__831->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__831->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__832 = new TH1D("ThetaY_mI10_mI5__832","",630,-1575,1575);
   ThetaY_mI10_mI5__832->SetBinContent(305,0.0001027622);
   ThetaY_mI10_mI5__832->SetBinContent(306,0.05000411);
   ThetaY_mI10_mI5__832->SetBinContent(307,0.3135893);
   ThetaY_mI10_mI5__832->SetBinContent(308,0.6094829);
   ThetaY_mI10_mI5__832->SetBinContent(309,0.7731421);
   ThetaY_mI10_mI5__832->SetBinContent(310,0.8816179);
   ThetaY_mI10_mI5__832->SetBinContent(311,0.959039);
   ThetaY_mI10_mI5__832->SetBinContent(312,1);
   ThetaY_mI10_mI5__832->SetBinContent(313,1.017244);
   ThetaY_mI10_mI5__832->SetBinContent(314,1.029061);
   ThetaY_mI10_mI5__832->SetBinContent(315,1.044619);
   ThetaY_mI10_mI5__832->SetBinContent(316,1.05319);
   ThetaY_mI10_mI5__832->SetBinContent(317,1.042893);
   ThetaY_mI10_mI5__832->SetBinContent(318,1.027972);
   ThetaY_mI10_mI5__832->SetBinContent(319,1.003453);
   ThetaY_mI10_mI5__832->SetBinContent(320,0.9579497);
   ThetaY_mI10_mI5__832->SetBinContent(321,0.8812479);
   ThetaY_mI10_mI5__832->SetBinContent(322,0.7749712);
   ThetaY_mI10_mI5__832->SetBinContent(323,0.5964526);
   ThetaY_mI10_mI5__832->SetBinContent(324,0.3143086);
   ThetaY_mI10_mI5__832->SetBinContent(325,0.05214157);
   ThetaY_mI10_mI5__832->SetBinContent(326,4.11049e-05);
   ThetaY_mI10_mI5__832->SetBinError(305,4.595667e-05);
   ThetaY_mI10_mI5__832->SetBinError(306,0.001013759);
   ThetaY_mI10_mI5__832->SetBinError(307,0.002538706);
   ThetaY_mI10_mI5__832->SetBinError(308,0.003539261);
   ThetaY_mI10_mI5__832->SetBinError(309,0.003986222);
   ThetaY_mI10_mI5__832->SetBinError(310,0.00425669);
   ThetaY_mI10_mI5__832->SetBinError(311,0.004439662);
   ThetaY_mI10_mI5__832->SetBinError(312,0.004533481);
   ThetaY_mI10_mI5__832->SetBinError(313,0.0045724);
   ThetaY_mI10_mI5__832->SetBinError(314,0.004598883);
   ThetaY_mI10_mI5__832->SetBinError(315,0.004633518);
   ThetaY_mI10_mI5__832->SetBinError(316,0.004652486);
   ThetaY_mI10_mI5__832->SetBinError(317,0.004629687);
   ThetaY_mI10_mI5__832->SetBinError(318,0.004596449);
   ThetaY_mI10_mI5__832->SetBinError(319,0.004541301);
   ThetaY_mI10_mI5__832->SetBinError(320,0.00443714);
   ThetaY_mI10_mI5__832->SetBinError(321,0.004255797);
   ThetaY_mI10_mI5__832->SetBinError(322,0.003990934);
   ThetaY_mI10_mI5__832->SetBinError(323,0.003501223);
   ThetaY_mI10_mI5__832->SetBinError(324,0.002541616);
   ThetaY_mI10_mI5__832->SetBinError(325,0.001035199);
   ThetaY_mI10_mI5__832->SetBinError(326,2.906555e-05);
   ThetaY_mI10_mI5__832->SetEntries(748452);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__832->SetLineColor(ci);
   ThetaY_mI10_mI5__832->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__832->SetMarkerColor(ci);
   ThetaY_mI10_mI5__832->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__832->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__832->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__832->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__832->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__832->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__832->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__832->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__832->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__832->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__832->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__832->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__832->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__832->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__832->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__832->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__832->Draw("AEsame");
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
   
   Double_t _fx3278[22] = {
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5};
   Double_t _fy3278[22] = {
   0,
   0,
   0,
   0,
   0.005352097,
   0.17992,
   0.616997,
   1,
   0.9477946,
   0.9704192,
   0.9744516,
   0.9992632,
   0.9006776,
   0.8828901,
   0.9237072,
   0.8797525,
   0.8311098,
   0.5909007,
   0.1850018,
   0.02194197,
   0,
   0};
   Double_t _felx3278[22] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3278[22] = {
   0,
   0,
   0,
   0,
   0.002912883,
   0.01677546,
   0.02991355,
   0.03740574,
   0.03609215,
   0.03631642,
   0.03612101,
   0.03643576,
   0.03473601,
   0.03463516,
   0.03586788,
   0.03581332,
   0.0362779,
   0.03255553,
   0.0206686,
   0.009478865,
   0,
   0};
   Double_t _fehx3278[22] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3278[22] = {
   29.87393,
   0.05080185,
   0.008098151,
   0.004166514,
   0.005206547,
   0.01841798,
   0.03140089,
   0.03883261,
   0.03749419,
   0.03770238,
   0.03748616,
   0.0377899,
   0.03610292,
   0.036022,
   0.03728921,
   0.03730258,
   0.03789797,
   0.03440147,
   0.02311837,
   0.01484769,
   0.04871856,
   101.3771};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3278,_fy3278,_felx3278,_fehx3278,_fely3278,_fehy3278);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3278 = new TH1F("Graph_Graph3278","",100,-100,100);
   Graph_Graph3278->SetMinimum(0);
   Graph_Graph3278->SetMaximum(1.5);
   Graph_Graph3278->SetDirectory(0);
   Graph_Graph3278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3278->SetLineColor(ci);
   Graph_Graph3278->GetXaxis()->SetRange(1,100);
   Graph_Graph3278->GetXaxis()->CenterTitle(true);
   Graph_Graph3278->GetXaxis()->SetLabelFont(42);
   Graph_Graph3278->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3278->GetXaxis()->SetTitleFont(42);
   Graph_Graph3278->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3278->GetYaxis()->CenterTitle(true);
   Graph_Graph3278->GetYaxis()->SetLabelFont(42);
   Graph_Graph3278->GetYaxis()->SetTitleFont(42);
   Graph_Graph3278->GetZaxis()->SetLabelFont(42);
   Graph_Graph3278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3278->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3278);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.158509,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__833 = new TH2D("ThetaY_vs_Y_mI10_mI5__833","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(7941,5);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(7967,2433);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(7993,15258);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8019,29655);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8045,37618);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8071,42896);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8097,46663);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8123,48656);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8149,49495);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8175,50070);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8201,50827);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8227,51244);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8253,50743);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8279,50017);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8305,48824);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8331,46610);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8357,42878);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8383,37707);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8409,29021);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8435,15293);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8461,2537);
   ThetaY_vs_Y_mI10_mI5__833->SetBinContent(8487,2);
   ThetaY_vs_Y_mI10_mI5__833->SetEntries(748452);
   ThetaY_vs_Y_mI10_mI5__833->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(1,2562.2);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(2,5124.4);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(3,7686.6);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(4,10248.8);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(5,12811);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(6,15373.2);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(7,17935.4);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(8,20497.6);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(9,23059.8);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(10,25622);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(11,28184.2);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(12,30746.4);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(13,33308.6);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(14,35870.8);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(15,38433);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(16,40995.2);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(17,43557.4);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(18,46119.6);
   ThetaY_vs_Y_mI10_mI5__833->SetContourLevel(19,48681.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__833->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__833->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__833->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__833->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__833->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__833->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__833->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__833->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__833->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__833->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__833->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__833->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__833->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__833->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__833->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__833->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-10_-5","Reco vertices","lpf");
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
