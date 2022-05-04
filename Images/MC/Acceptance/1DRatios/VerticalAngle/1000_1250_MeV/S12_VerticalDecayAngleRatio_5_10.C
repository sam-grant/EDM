void S12_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06696462,125,1.272328);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__726 = new TH1D("S12_ThetaY_5_10__726","",630,-1575,1575);
   S12_ThetaY_5_10__726->SetBinContent(307,0.01420455);
   S12_ThetaY_5_10__726->SetBinContent(308,0.1789773);
   S12_ThetaY_5_10__726->SetBinContent(309,0.5284091);
   S12_ThetaY_5_10__726->SetBinContent(310,0.8721591);
   S12_ThetaY_5_10__726->SetBinContent(311,0.8551136);
   S12_ThetaY_5_10__726->SetBinContent(312,1);
   S12_ThetaY_5_10__726->SetBinContent(313,0.9659091);
   S12_ThetaY_5_10__726->SetBinContent(314,0.8607955);
   S12_ThetaY_5_10__726->SetBinContent(315,0.9261364);
   S12_ThetaY_5_10__726->SetBinContent(316,0.9943182);
   S12_ThetaY_5_10__726->SetBinContent(317,0.9857955);
   S12_ThetaY_5_10__726->SetBinContent(318,0.9375);
   S12_ThetaY_5_10__726->SetBinContent(319,0.7926136);
   S12_ThetaY_5_10__726->SetBinContent(320,0.5596591);
   S12_ThetaY_5_10__726->SetBinContent(321,0.1193182);
   S12_ThetaY_5_10__726->SetBinContent(322,0.005681818);
   S12_ThetaY_5_10__726->SetBinError(307,0.006352466);
   S12_ThetaY_5_10__726->SetBinError(308,0.02254902);
   S12_ThetaY_5_10__726->SetBinError(309,0.03874483);
   S12_ThetaY_5_10__726->SetBinError(310,0.04977675);
   S12_ThetaY_5_10__726->SetBinError(311,0.04928793);
   S12_ThetaY_5_10__726->SetBinError(312,0.05330018);
   S12_ThetaY_5_10__726->SetBinError(313,0.05238378);
   S12_ThetaY_5_10__726->SetBinError(314,0.04945141);
   S12_ThetaY_5_10__726->SetBinError(315,0.05129395);
   S12_ThetaY_5_10__726->SetBinError(316,0.05314854);
   S12_ThetaY_5_10__726->SetBinError(317,0.05292027);
   S12_ThetaY_5_10__726->SetBinError(318,0.05160768);
   S12_ThetaY_5_10__726->SetBinError(319,0.04745254);
   S12_ThetaY_5_10__726->SetBinError(320,0.03987406);
   S12_ThetaY_5_10__726->SetBinError(321,0.0184112);
   S12_ThetaY_5_10__726->SetBinError(322,0.004017652);
   S12_ThetaY_5_10__726->SetMinimum(0);
   S12_ThetaY_5_10__726->SetMaximum(1.138398);
   S12_ThetaY_5_10__726->SetEntries(3730);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__726->SetLineColor(ci);
   S12_ThetaY_5_10__726->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__726->SetMarkerColor(ci);
   S12_ThetaY_5_10__726->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__726->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__726->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__726->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__726->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__726->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__726->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__726->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__726->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__726->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__726->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__726->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__726->Draw("AE");
   
   TH1D *ThetaY_5_10__727 = new TH1D("ThetaY_5_10__727","",630,-1575,1575);
   ThetaY_5_10__727->SetBinContent(305,0.0001020096);
   ThetaY_5_10__727->SetBinContent(306,0.04963787);
   ThetaY_5_10__727->SetBinContent(307,0.3063756);
   ThetaY_5_10__727->SetBinContent(308,0.5868204);
   ThetaY_5_10__727->SetBinContent(309,0.7641946);
   ThetaY_5_10__727->SetBinContent(310,0.8819545);
   ThetaY_5_10__727->SetBinContent(311,0.9524635);
   ThetaY_5_10__727->SetBinContent(312,1);
   ThetaY_5_10__727->SetBinContent(313,1.016648);
   ThetaY_5_10__727->SetBinContent(314,1.024503);
   ThetaY_5_10__727->SetBinContent(315,1.034908);
   ThetaY_5_10__727->SetBinContent(316,1.032174);
   ThetaY_5_10__727->SetBinContent(317,1.0274);
   ThetaY_5_10__727->SetBinContent(318,1.009915);
   ThetaY_5_10__727->SetBinContent(319,0.9971641);
   ThetaY_5_10__727->SetBinContent(320,0.9525655);
   ThetaY_5_10__727->SetBinContent(321,0.8761196);
   ThetaY_5_10__727->SetBinContent(322,0.7628277);
   ThetaY_5_10__727->SetBinContent(323,0.5856779);
   ThetaY_5_10__727->SetBinContent(324,0.3074977);
   ThetaY_5_10__727->SetBinContent(325,0.04986229);
   ThetaY_5_10__727->SetBinContent(326,6.120575e-05);
   ThetaY_5_10__727->SetBinError(305,4.562008e-05);
   ThetaY_5_10__727->SetBinError(306,0.001006334);
   ThetaY_5_10__727->SetBinError(307,0.00250013);
   ThetaY_5_10__727->SetBinError(308,0.003460095);
   ThetaY_5_10__727->SetBinError(309,0.003948549);
   ThetaY_5_10__727->SetBinError(310,0.004241882);
   ThetaY_5_10__727->SetBinError(311,0.004408184);
   ThetaY_5_10__727->SetBinError(312,0.004516848);
   ThetaY_5_10__727->SetBinError(313,0.004554291);
   ThetaY_5_10__727->SetBinError(314,0.004571851);
   ThetaY_5_10__727->SetBinError(315,0.004595008);
   ThetaY_5_10__727->SetBinError(316,0.004588935);
   ThetaY_5_10__727->SetBinError(317,0.00457831);
   ThetaY_5_10__727->SetBinError(318,0.004539186);
   ThetaY_5_10__727->SetBinError(319,0.004510439);
   ThetaY_5_10__727->SetBinError(320,0.00440842);
   ThetaY_5_10__727->SetBinError(321,0.004227827);
   ThetaY_5_10__727->SetBinError(322,0.003945016);
   ThetaY_5_10__727->SetBinError(323,0.003456726);
   ThetaY_5_10__727->SetBinError(324,0.002504704);
   ThetaY_5_10__727->SetBinError(325,0.001008606);
   ThetaY_5_10__727->SetBinError(326,3.533716e-05);
   ThetaY_5_10__727->SetEntries(745953);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__727->SetLineColor(ci);
   ThetaY_5_10__727->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__727->SetMarkerColor(ci);
   ThetaY_5_10__727->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__727->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__727->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__727->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__727->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__727->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__727->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__727->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__727->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__727->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__727->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__727->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__727->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__727->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__727->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__727->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__727->Draw("AEsame");
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
   
   Double_t _fx3243[22] = {
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
   Double_t _fy3243[22] = {
   0,
   0,
   0.04636317,
   0.304995,
   0.6914588,
   0.9888935,
   0.8977915,
   1,
   0.950092,
   0.8402081,
   0.8948976,
   0.9633244,
   0.9595052,
   0.9282956,
   0.7948678,
   0.5875282,
   0.1361894,
   0.007448364,
   0,
   0,
   0,
   0};
   Double_t _felx3243[22] = {
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
   Double_t _fely3243[22] = {
   0,
   0,
   0.0200288,
   0.0383648,
   0.05077958,
   0.05660771,
   0.05188503,
   0.0534653,
   0.05167554,
   0.04838693,
   0.04969684,
   0.05164449,
   0.05166071,
   0.05124457,
   0.04769405,
   0.04191182,
   0.02094046,
   0.004811033,
   0,
   0,
   0,
   0};
   Double_t _fehx3243[22] = {
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
   Double_t _fehy3243[22] = {
   61.9841,
   0.1054065,
   0.03137319,
   0.04352475,
   0.05465453,
   0.05994613,
   0.05497502,
   0.05640437,
   0.05456672,
   0.05125811,
   0.05253744,
   0.05449137,
   0.05452106,
   0.05415573,
   0.05064646,
   0.04501482,
   0.02443796,
   0.009824478,
   0.008930409,
   0.01700987,
   0.1049319,
   117.9709};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3243,_fy3243,_felx3243,_fehx3243,_fely3243,_fehy3243);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3243 = new TH1F("Graph_Graph3243","",100,-100,100);
   Graph_Graph3243->SetMinimum(0);
   Graph_Graph3243->SetMaximum(1.5);
   Graph_Graph3243->SetDirectory(0);
   Graph_Graph3243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3243->SetLineColor(ci);
   Graph_Graph3243->GetXaxis()->SetRange(1,100);
   Graph_Graph3243->GetXaxis()->CenterTitle(true);
   Graph_Graph3243->GetXaxis()->SetLabelFont(42);
   Graph_Graph3243->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3243->GetXaxis()->SetTitleFont(42);
   Graph_Graph3243->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3243->GetYaxis()->CenterTitle(true);
   Graph_Graph3243->GetYaxis()->SetLabelFont(42);
   Graph_Graph3243->GetYaxis()->SetTitleFont(42);
   Graph_Graph3243->GetZaxis()->SetLabelFont(42);
   Graph_Graph3243->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3243->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3243);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.138398,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__728 = new TH2D("ThetaY_vs_Y_5_10__728","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__728->SetBinContent(7944,5);
   ThetaY_vs_Y_5_10__728->SetBinContent(7970,2433);
   ThetaY_vs_Y_5_10__728->SetBinContent(7996,15017);
   ThetaY_vs_Y_5_10__728->SetBinContent(8022,28763);
   ThetaY_vs_Y_5_10__728->SetBinContent(8048,37457);
   ThetaY_vs_Y_5_10__728->SetBinContent(8074,43229);
   ThetaY_vs_Y_5_10__728->SetBinContent(8100,46685);
   ThetaY_vs_Y_5_10__728->SetBinContent(8126,49015);
   ThetaY_vs_Y_5_10__728->SetBinContent(8152,49831);
   ThetaY_vs_Y_5_10__728->SetBinContent(8178,50216);
   ThetaY_vs_Y_5_10__728->SetBinContent(8204,50726);
   ThetaY_vs_Y_5_10__728->SetBinContent(8230,50592);
   ThetaY_vs_Y_5_10__728->SetBinContent(8256,50358);
   ThetaY_vs_Y_5_10__728->SetBinContent(8282,49501);
   ThetaY_vs_Y_5_10__728->SetBinContent(8308,48876);
   ThetaY_vs_Y_5_10__728->SetBinContent(8334,46690);
   ThetaY_vs_Y_5_10__728->SetBinContent(8360,42943);
   ThetaY_vs_Y_5_10__728->SetBinContent(8386,37390);
   ThetaY_vs_Y_5_10__728->SetBinContent(8412,28707);
   ThetaY_vs_Y_5_10__728->SetBinContent(8438,15072);
   ThetaY_vs_Y_5_10__728->SetBinContent(8464,2444);
   ThetaY_vs_Y_5_10__728->SetBinContent(8490,3);
   ThetaY_vs_Y_5_10__728->SetEntries(745953);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__728->SetLineColor(ci);
   ThetaY_vs_Y_5_10__728->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__728->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__728->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__728->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__728->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__728->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__728->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__728->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__728->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__728->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__728->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__728->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__728->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__728->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__728->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
