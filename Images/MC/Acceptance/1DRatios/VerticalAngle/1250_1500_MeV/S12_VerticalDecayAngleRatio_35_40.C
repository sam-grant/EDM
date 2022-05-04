void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.1332493,125,2.531736);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__915 = new TH1D("S12_ThetaY_35_40__915","",630,-1575,1575);
   S12_ThetaY_35_40__915->SetBinContent(308,0.1904762);
   S12_ThetaY_35_40__915->SetBinContent(309,1);
   S12_ThetaY_35_40__915->SetBinContent(310,0.9047619);
   S12_ThetaY_35_40__915->SetBinContent(311,1.52381);
   S12_ThetaY_35_40__915->SetBinContent(312,1.047619);
   S12_ThetaY_35_40__915->SetBinContent(313,1.047619);
   S12_ThetaY_35_40__915->SetBinContent(314,1.380952);
   S12_ThetaY_35_40__915->SetBinContent(315,1.142857);
   S12_ThetaY_35_40__915->SetBinContent(316,0.2857143);
   S12_ThetaY_35_40__915->SetBinError(308,0.0952381);
   S12_ThetaY_35_40__915->SetBinError(309,0.2182179);
   S12_ThetaY_35_40__915->SetBinError(310,0.2075666);
   S12_ThetaY_35_40__915->SetBinError(311,0.269374);
   S12_ThetaY_35_40__915->SetBinError(312,0.2233531);
   S12_ThetaY_35_40__915->SetBinError(313,0.2233531);
   S12_ThetaY_35_40__915->SetBinError(314,0.2564364);
   S12_ThetaY_35_40__915->SetBinError(315,0.2332847);
   S12_ThetaY_35_40__915->SetBinError(316,0.1166424);
   S12_ThetaY_35_40__915->SetMinimum(0);
   S12_ThetaY_35_40__915->SetMaximum(2.265237);
   S12_ThetaY_35_40__915->SetEntries(179);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__915->SetLineColor(ci);
   S12_ThetaY_35_40__915->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__915->SetMarkerColor(ci);
   S12_ThetaY_35_40__915->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__915->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__915->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__915->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__915->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__915->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__915->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__915->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__915->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__915->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__915->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__915->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__915->Draw("AE");
   
   TH1D *ThetaY_35_40__916 = new TH1D("ThetaY_35_40__916","",630,-1575,1575);
   ThetaY_35_40__916->SetBinContent(307,0.01505474);
   ThetaY_35_40__916->SetBinContent(308,0.3453467);
   ThetaY_35_40__916->SetBinContent(309,1);
   ThetaY_35_40__916->SetBinContent(310,1.415146);
   ThetaY_35_40__916->SetBinContent(311,1.655566);
   ThetaY_35_40__916->SetBinContent(312,1.854927);
   ThetaY_35_40__916->SetBinContent(313,1.985401);
   ThetaY_35_40__916->SetBinContent(314,2.059307);
   ThetaY_35_40__916->SetBinContent(315,2.031022);
   ThetaY_35_40__916->SetBinContent(316,2.050639);
   ThetaY_35_40__916->SetBinContent(317,2.002737);
   ThetaY_35_40__916->SetBinContent(318,1.974453);
   ThetaY_35_40__916->SetBinContent(319,1.876369);
   ThetaY_35_40__916->SetBinContent(320,1.749088);
   ThetaY_35_40__916->SetBinContent(321,1.400547);
   ThetaY_35_40__916->SetBinContent(322,1.023723);
   ThetaY_35_40__916->SetBinContent(323,0.3800182);
   ThetaY_35_40__916->SetBinContent(324,0.009580292);
   ThetaY_35_40__916->SetBinError(307,0.002620695);
   ThetaY_35_40__916->SetBinError(308,0.01255184);
   ThetaY_35_40__916->SetBinError(309,0.02135894);
   ThetaY_35_40__916->SetBinError(310,0.02540858);
   ThetaY_35_40__916->SetBinError(311,0.02748229);
   ThetaY_35_40__916->SetBinError(312,0.02908996);
   ThetaY_35_40__916->SetBinError(313,0.03009566);
   ThetaY_35_40__916->SetBinError(314,0.03065069);
   ThetaY_35_40__916->SetBinError(315,0.03043947);
   ThetaY_35_40__916->SetBinError(316,0.03058611);
   ThetaY_35_40__916->SetBinError(317,0.03022677);
   ThetaY_35_40__916->SetBinError(318,0.03001256);
   ThetaY_35_40__916->SetBinError(319,0.02925761);
   ThetaY_35_40__916->SetBinError(320,0.02824786);
   ThetaY_35_40__916->SetBinError(321,0.02527718);
   ThetaY_35_40__916->SetBinError(322,0.0216108);
   ThetaY_35_40__916->SetBinError(323,0.01316685);
   ThetaY_35_40__916->SetBinError(324,0.002090591);
   ThetaY_35_40__916->SetEntries(54425);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__916->SetLineColor(ci);
   ThetaY_35_40__916->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__916->SetMarkerColor(ci);
   ThetaY_35_40__916->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__916->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__916->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__916->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__916->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__916->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__916->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__916->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__916->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__916->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__916->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__916->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__916->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__916->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__916->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__916->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__916->Draw("AEsame");
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
   
   Double_t _fx3306[18] = {
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
   Double_t _fy3306[18] = {
   0,
   0.5515506,
   1,
   0.6393417,
   0.9204162,
   0.5647764,
   0.5276611,
   0.670591,
   0.5627006,
   0.1393294,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3306[18] = {
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
   Double_t _fely3306[18] = {
   0,
   0.264516,
   0.2174554,
   0.1457963,
   0.1625443,
   0.1197979,
   0.1119062,
   0.1241875,
   0.11435,
   0.05529733,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3306[18] = {
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
   Double_t _fehy3306[18] = {
   5.988759,
   0.4381686,
   0.2709297,
   0.1836118,
   0.1941942,
   0.1484084,
   0.1386245,
   0.1496645,
   0.1403703,
   0.08330649,
   0.04378312,
   0.04441046,
   0.04673246,
   0.050134,
   0.06261408,
   0.08567132,
   0.2309485,
   9.563937};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3306,_fy3306,_felx3306,_fehx3306,_fely3306,_fehy3306);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3306 = new TH1F("Graph_Graph3306","",100,-100,100);
   Graph_Graph3306->SetMinimum(0);
   Graph_Graph3306->SetMaximum(1.5);
   Graph_Graph3306->SetDirectory(0);
   Graph_Graph3306->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3306->SetLineColor(ci);
   Graph_Graph3306->GetXaxis()->SetRange(1,100);
   Graph_Graph3306->GetXaxis()->CenterTitle(true);
   Graph_Graph3306->GetXaxis()->SetLabelFont(42);
   Graph_Graph3306->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3306->GetXaxis()->SetTitleFont(42);
   Graph_Graph3306->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3306->GetYaxis()->CenterTitle(true);
   Graph_Graph3306->GetYaxis()->SetLabelFont(42);
   Graph_Graph3306->GetYaxis()->SetTitleFont(42);
   Graph_Graph3306->GetZaxis()->SetLabelFont(42);
   Graph_Graph3306->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3306->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3306);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.265237,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__917 = new TH2D("ThetaY_vs_Y_35_40__917","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__917->SetBinContent(8002,33);
   ThetaY_vs_Y_35_40__917->SetBinContent(8028,757);
   ThetaY_vs_Y_35_40__917->SetBinContent(8054,2192);
   ThetaY_vs_Y_35_40__917->SetBinContent(8080,3102);
   ThetaY_vs_Y_35_40__917->SetBinContent(8106,3629);
   ThetaY_vs_Y_35_40__917->SetBinContent(8132,4066);
   ThetaY_vs_Y_35_40__917->SetBinContent(8158,4352);
   ThetaY_vs_Y_35_40__917->SetBinContent(8184,4514);
   ThetaY_vs_Y_35_40__917->SetBinContent(8210,4452);
   ThetaY_vs_Y_35_40__917->SetBinContent(8236,4495);
   ThetaY_vs_Y_35_40__917->SetBinContent(8262,4390);
   ThetaY_vs_Y_35_40__917->SetBinContent(8288,4328);
   ThetaY_vs_Y_35_40__917->SetBinContent(8314,4113);
   ThetaY_vs_Y_35_40__917->SetBinContent(8340,3834);
   ThetaY_vs_Y_35_40__917->SetBinContent(8366,3070);
   ThetaY_vs_Y_35_40__917->SetBinContent(8392,2244);
   ThetaY_vs_Y_35_40__917->SetBinContent(8418,833);
   ThetaY_vs_Y_35_40__917->SetBinContent(8444,21);
   ThetaY_vs_Y_35_40__917->SetEntries(54425);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__917->SetLineColor(ci);
   ThetaY_vs_Y_35_40__917->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__917->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__917->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__917->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__917->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__917->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__917->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__917->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__917->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__917->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__917->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__917->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__917->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__917->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__917->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
