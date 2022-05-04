void S12S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06582663,125,1.250706);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI15_mI10__828 = new TH1D("S12S18_ThetaY_mI15_mI10__828","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(310,0.01655629);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(311,0.2682119);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(312,0.8112583);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(313,1);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(314,0.968543);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(315,0.9586093);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(316,0.9569536);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(317,0.9503311);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(318,0.9470199);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(319,0.9155629);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(320,0.8990066);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(321,0.8509934);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(322,0.5695364);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(323,0.3029801);
   S12S18_ThetaY_mI15_mI10__828->SetBinContent(324,0.04470199);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(310,0.005235559);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(311,0.02107272);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(312,0.03664891);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(313,0.04068942);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(314,0.04004433);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(315,0.03983844);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(316,0.03980402);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(317,0.03966605);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(318,0.03959689);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(319,0.0389337);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(320,0.03858007);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(321,0.03753571);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(322,0.03070735);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(323,0.02239694);
   S12S18_ThetaY_mI15_mI10__828->SetBinError(324,0.008602901);
   S12S18_ThetaY_mI15_mI10__828->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__828->SetMaximum(1.119053);
   S12S18_ThetaY_mI15_mI10__828->SetEntries(6318);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__828->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__828->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__828->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__828->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__828->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__828->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__828->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__828->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__828->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__828->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__828->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__828->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__828->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__828->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__828->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__828->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__829 = new TH1D("ThetaY_mI15_mI10__829","",630,-1575,1575);
   ThetaY_mI15_mI10__829->SetBinContent(305,2.442957e-05);
   ThetaY_mI15_mI10__829->SetBinContent(306,0.05115552);
   ThetaY_mI15_mI10__829->SetBinContent(307,0.3019251);
   ThetaY_mI15_mI10__829->SetBinContent(308,0.5806909);
   ThetaY_mI15_mI10__829->SetBinContent(309,0.7519177);
   ThetaY_mI15_mI10__829->SetBinContent(310,0.8729418);
   ThetaY_mI15_mI10__829->SetBinContent(311,0.9411247);
   ThetaY_mI15_mI10__829->SetBinContent(312,0.9774759);
   ThetaY_mI15_mI10__829->SetBinContent(313,1);
   ThetaY_mI15_mI10__829->SetBinContent(314,1.010871);
   ThetaY_mI15_mI10__829->SetBinContent(315,1.009992);
   ThetaY_mI15_mI10__829->SetBinContent(316,1.004861);
   ThetaY_mI15_mI10__829->SetBinContent(317,1.017321);
   ThetaY_mI15_mI10__829->SetBinContent(318,1.003567);
   ThetaY_mI15_mI10__829->SetBinContent(319,0.9794303);
   ThetaY_mI15_mI10__829->SetBinContent(320,0.9395612);
   ThetaY_mI15_mI10__829->SetBinContent(321,0.8623638);
   ThetaY_mI15_mI10__829->SetBinContent(322,0.7544095);
   ThetaY_mI15_mI10__829->SetBinContent(323,0.5826208);
   ThetaY_mI15_mI10__829->SetBinContent(324,0.3001417);
   ThetaY_mI15_mI10__829->SetBinContent(325,0.05098451);
   ThetaY_mI15_mI10__829->SetBinContent(326,9.771828e-05);
   ThetaY_mI15_mI10__829->SetBinError(305,2.442957e-05);
   ThetaY_mI15_mI10__829->SetBinError(306,0.001117903);
   ThetaY_mI15_mI10__829->SetBinError(307,0.002715861);
   ThetaY_mI15_mI10__829->SetBinError(308,0.003766434);
   ThetaY_mI15_mI10__829->SetBinError(309,0.00428591);
   ThetaY_mI15_mI10__829->SetBinError(310,0.004617964);
   ThetaY_mI15_mI10__829->SetBinError(311,0.004794922);
   ThetaY_mI15_mI10__829->SetBinError(312,0.004886647);
   ThetaY_mI15_mI10__829->SetBinError(313,0.004942628);
   ThetaY_mI15_mI10__829->SetBinError(314,0.004969421);
   ThetaY_mI15_mI10__829->SetBinError(315,0.004967259);
   ThetaY_mI15_mI10__829->SetBinError(316,0.004954627);
   ThetaY_mI15_mI10__829->SetBinError(317,0.004985249);
   ThetaY_mI15_mI10__829->SetBinError(318,0.004951434);
   ThetaY_mI15_mI10__829->SetBinError(319,0.004891529);
   ThetaY_mI15_mI10__829->SetBinError(320,0.004790937);
   ThetaY_mI15_mI10__829->SetBinError(321,0.004589899);
   ThetaY_mI15_mI10__829->SetBinError(322,0.004293006);
   ThetaY_mI15_mI10__829->SetBinError(323,0.003772688);
   ThetaY_mI15_mI10__829->SetBinError(324,0.002707828);
   ThetaY_mI15_mI10__829->SetBinError(325,0.001116033);
   ThetaY_mI15_mI10__829->SetBinError(326,4.885914e-05);
   ThetaY_mI15_mI10__829->SetEntries(613743);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__829->SetLineColor(ci);
   ThetaY_mI15_mI10__829->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__829->SetMarkerColor(ci);
   ThetaY_mI15_mI10__829->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__829->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__829->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__829->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__829->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__829->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__829->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__829->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__829->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__829->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__829->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__829->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__829->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__829->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__829->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__829->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__829->Draw("AEsame");
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
   
   Double_t _fx3277[22] = {
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
   Double_t _fy3277[22] = {
   0,
   0,
   0,
   0,
   0,
   0.01896609,
   0.2849908,
   0.8299522,
   1,
   0.9581271,
   0.9491259,
   0.9523239,
   0.9341511,
   0.9436541,
   0.9347913,
   0.9568366,
   0.9868148,
   0.7549433,
   0.5200297,
   0.1489363,
   0,
   0};
   Double_t _felx3277[22] = {
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
   Double_t _fely3277[22] = {
   0,
   0,
   0,
   0,
   0,
   0.005896729,
   0.02241457,
   0.03770897,
   0.04097669,
   0.03988085,
   0.03970764,
   0.03987679,
   0.03924663,
   0.03971783,
   0.040012,
   0.04133739,
   0.04382742,
   0.04090937,
   0.03855285,
   0.02851438,
   0,
   0};
   Double_t _fehx3277[22] = {
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
   Double_t _fehy3277[22] = {
   359.3907,
   0.05961017,
   0.01009614,
   0.005249208,
   0.004053822,
   0.00809435,
   0.02425146,
   0.03946348,
   0.04269225,
   0.04157744,
   0.04140565,
   0.04158359,
   0.04093218,
   0.04142679,
   0.04176347,
   0.04316416,
   0.04581985,
   0.04319002,
   0.04152448,
   0.03457922,
   0.0598102,
   39.61101};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3277,_fy3277,_felx3277,_fehx3277,_fely3277,_fehy3277);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3277 = new TH1F("Graph_Graph3277","",100,-100,100);
   Graph_Graph3277->SetMinimum(0);
   Graph_Graph3277->SetMaximum(1.5);
   Graph_Graph3277->SetDirectory(0);
   Graph_Graph3277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3277->SetLineColor(ci);
   Graph_Graph3277->GetXaxis()->SetRange(1,100);
   Graph_Graph3277->GetXaxis()->CenterTitle(true);
   Graph_Graph3277->GetXaxis()->SetLabelFont(42);
   Graph_Graph3277->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3277->GetXaxis()->SetTitleFont(42);
   Graph_Graph3277->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3277->GetYaxis()->CenterTitle(true);
   Graph_Graph3277->GetYaxis()->SetLabelFont(42);
   Graph_Graph3277->GetYaxis()->SetTitleFont(42);
   Graph_Graph3277->GetZaxis()->SetLabelFont(42);
   Graph_Graph3277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3277->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3277);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.119053,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__830 = new TH2D("ThetaY_vs_Y_mI15_mI10__830","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(7940,1);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(7966,2094);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(7992,12359);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8018,23770);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8044,30779);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8070,35733);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8096,38524);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8122,40012);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8148,40934);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8174,41379);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8200,41343);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8226,41133);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8252,41643);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8278,41080);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8304,40092);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8330,38460);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8356,35300);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8382,30881);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8408,23849);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8434,12286);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8460,2087);
   ThetaY_vs_Y_mI15_mI10__830->SetBinContent(8486,4);
   ThetaY_vs_Y_mI15_mI10__830->SetEntries(613743);
   ThetaY_vs_Y_mI15_mI10__830->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(1,2082.15);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(2,4164.3);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(3,6246.45);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(4,8328.6);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(5,10410.75);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(6,12492.9);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(7,14575.05);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(8,16657.2);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(9,18739.35);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(10,20821.5);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(11,22903.65);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(12,24985.8);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(13,27067.95);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(14,29150.1);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(15,31232.25);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(16,33314.4);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(17,35396.55);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(18,37478.7);
   ThetaY_vs_Y_mI15_mI10__830->SetContourLevel(19,39560.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__830->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__830->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__830->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__830->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__830->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__830->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__830->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__830->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__830->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__830->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__830->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__830->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__830->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__830->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__830->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__830->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-15_-10","Reco vertices","lpf");
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
