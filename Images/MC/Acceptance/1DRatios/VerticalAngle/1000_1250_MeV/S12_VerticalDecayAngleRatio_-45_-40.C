void S12_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06945612,125,1.319666);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__696 = new TH1D("S12_ThetaY_mI45_mI40__696","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__696->SetBinContent(315,0.1111111);
   S12_ThetaY_mI45_mI40__696->SetBinContent(316,0.5555556);
   S12_ThetaY_mI45_mI40__696->SetBinContent(317,0.7222222);
   S12_ThetaY_mI45_mI40__696->SetBinContent(318,0.4444444);
   S12_ThetaY_mI45_mI40__696->SetBinContent(319,0.6666667);
   S12_ThetaY_mI45_mI40__696->SetBinContent(320,1);
   S12_ThetaY_mI45_mI40__696->SetBinContent(321,0.7222222);
   S12_ThetaY_mI45_mI40__696->SetBinContent(322,0.5555556);
   S12_ThetaY_mI45_mI40__696->SetBinContent(323,0.05555556);
   S12_ThetaY_mI45_mI40__696->SetBinContent(324,0.1111111);
   S12_ThetaY_mI45_mI40__696->SetBinError(315,0.07856742);
   S12_ThetaY_mI45_mI40__696->SetBinError(316,0.1756821);
   S12_ThetaY_mI45_mI40__696->SetBinError(317,0.2003084);
   S12_ThetaY_mI45_mI40__696->SetBinError(318,0.1571348);
   S12_ThetaY_mI45_mI40__696->SetBinError(319,0.1924501);
   S12_ThetaY_mI45_mI40__696->SetBinError(320,0.2357023);
   S12_ThetaY_mI45_mI40__696->SetBinError(321,0.2003084);
   S12_ThetaY_mI45_mI40__696->SetBinError(322,0.1756821);
   S12_ThetaY_mI45_mI40__696->SetBinError(323,0.05555556);
   S12_ThetaY_mI45_mI40__696->SetBinError(324,0.07856742);
   S12_ThetaY_mI45_mI40__696->SetMinimum(0);
   S12_ThetaY_mI45_mI40__696->SetMaximum(1.180754);
   S12_ThetaY_mI45_mI40__696->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__696->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__696->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__696->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__696->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__696->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__696->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__696->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__696->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__696->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__696->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__696->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__696->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__696->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__696->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__696->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__696->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__697 = new TH1D("ThetaY_mI45_mI40__697","",630,-1575,1575);
   ThetaY_mI45_mI40__697->SetBinContent(306,0.03902116);
   ThetaY_mI45_mI40__697->SetBinContent(307,0.3174603);
   ThetaY_mI45_mI40__697->SetBinContent(308,0.6283069);
   ThetaY_mI45_mI40__697->SetBinContent(309,0.7466931);
   ThetaY_mI45_mI40__697->SetBinContent(310,0.8664021);
   ThetaY_mI45_mI40__697->SetBinContent(311,0.978836);
   ThetaY_mI45_mI40__697->SetBinContent(312,1.03373);
   ThetaY_mI45_mI40__697->SetBinContent(313,1.011243);
   ThetaY_mI45_mI40__697->SetBinContent(314,1.044974);
   ThetaY_mI45_mI40__697->SetBinContent(315,1.041005);
   ThetaY_mI45_mI40__697->SetBinContent(316,1.073413);
   ThetaY_mI45_mI40__697->SetBinContent(317,1.025794);
   ThetaY_mI45_mI40__697->SetBinContent(318,1.044312);
   ThetaY_mI45_mI40__697->SetBinContent(319,1.024471);
   ThetaY_mI45_mI40__697->SetBinContent(320,1);
   ThetaY_mI45_mI40__697->SetBinContent(321,0.8611111);
   ThetaY_mI45_mI40__697->SetBinContent(322,0.7579365);
   ThetaY_mI45_mI40__697->SetBinContent(323,0.598545);
   ThetaY_mI45_mI40__697->SetBinContent(324,0.3075397);
   ThetaY_mI45_mI40__697->SetBinContent(325,0.05621693);
   ThetaY_mI45_mI40__697->SetBinError(306,0.005080123);
   ThetaY_mI45_mI40__697->SetBinError(307,0.01449001);
   ThetaY_mI45_mI40__697->SetBinError(308,0.02038497);
   ThetaY_mI45_mI40__697->SetBinError(309,0.02222262);
   ThetaY_mI45_mI40__697->SetBinError(310,0.02393778);
   ThetaY_mI45_mI40__697->SetBinError(311,0.02544363);
   ThetaY_mI45_mI40__697->SetBinError(312,0.02614735);
   ThetaY_mI45_mI40__697->SetBinError(313,0.0258614);
   ThetaY_mI45_mI40__697->SetBinError(314,0.02628916);
   ThetaY_mI45_mI40__697->SetBinError(315,0.0262392);
   ThetaY_mI45_mI40__697->SetBinError(316,0.02664449);
   ThetaY_mI45_mI40__697->SetBinError(317,0.02604678);
   ThetaY_mI45_mI40__697->SetBinError(318,0.02628084);
   ThetaY_mI45_mI40__697->SetBinError(319,0.02602998);
   ThetaY_mI45_mI40__697->SetBinError(320,0.02571722);
   ThetaY_mI45_mI40__697->SetBinError(321,0.02386457);
   ThetaY_mI45_mI40__697->SetBinError(322,0.0223893);
   ThetaY_mI45_mI40__697->SetBinError(323,0.01989631);
   ThetaY_mI45_mI40__697->SetBinError(324,0.01426181);
   ThetaY_mI45_mI40__697->SetBinError(325,0.006097582);
   ThetaY_mI45_mI40__697->SetEntries(23371);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__697->SetLineColor(ci);
   ThetaY_mI45_mI40__697->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__697->SetMarkerColor(ci);
   ThetaY_mI45_mI40__697->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__697->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__697->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__697->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__697->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__697->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__697->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__697->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__697->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__697->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__697->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__697->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__697->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__697->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__697->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__697->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__697->Draw("AEsame");
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
   
   Double_t _fx3233[20] = {
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
   47.5};
   Double_t _fy3233[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1067344,
   0.5175601,
   0.7040619,
   0.4255858,
   0.6507424,
   1,
   0.8387097,
   0.7329843,
   0.09281768,
   0.3612903,
   0};
   Double_t _felx3233[20] = {
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
   Double_t _fely3233[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06896804,
   0.1613441,
   0.1934816,
   0.1476047,
   0.1858667,
   0.2348078,
   0.2306541,
   0.2287652,
   0.07679925,
   0.2336745,
   0};
   Double_t _fehx3233[20] = {
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
   Double_t _fehy3233[20] = {
   2.662439,
   0.3227974,
   0.1629429,
   0.1370877,
   0.1181332,
   0.1045554,
   0.09899996,
   0.1012027,
   0.09793415,
   0.1409827,
   0.2218105,
   0.2558644,
   0.2106682,
   0.2485932,
   0.297888,
   0.3051271,
   0.3147064,
   0.2138261,
   0.4788955,
   1.839208};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3233,_fy3233,_felx3233,_fehx3233,_fely3233,_fehy3233);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3233 = new TH1F("Graph_Graph3233","",100,-100,100);
   Graph_Graph3233->SetMinimum(0);
   Graph_Graph3233->SetMaximum(1.5);
   Graph_Graph3233->SetDirectory(0);
   Graph_Graph3233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3233->SetLineColor(ci);
   Graph_Graph3233->GetXaxis()->SetRange(1,100);
   Graph_Graph3233->GetXaxis()->CenterTitle(true);
   Graph_Graph3233->GetXaxis()->SetLabelFont(42);
   Graph_Graph3233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3233->GetXaxis()->SetTitleFont(42);
   Graph_Graph3233->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3233->GetYaxis()->CenterTitle(true);
   Graph_Graph3233->GetYaxis()->SetLabelFont(42);
   Graph_Graph3233->GetYaxis()->SetTitleFont(42);
   Graph_Graph3233->GetZaxis()->SetLabelFont(42);
   Graph_Graph3233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3233->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3233);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.180754,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__698 = new TH2D("ThetaY_vs_Y_mI45_mI40__698","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(7960,59);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(7986,480);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8012,950);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8038,1129);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8064,1310);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8090,1480);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8116,1563);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8142,1529);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8168,1580);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8194,1574);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8220,1623);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8246,1551);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8272,1579);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8298,1549);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8324,1512);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8350,1302);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8376,1146);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8402,905);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8428,465);
   ThetaY_vs_Y_mI45_mI40__698->SetBinContent(8454,85);
   ThetaY_vs_Y_mI45_mI40__698->SetEntries(23371);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__698->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__698->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__698->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__698->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__698->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__698->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__698->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__698->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__698->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__698->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__698->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__698->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__698->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__698->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__698->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__698->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
