void S12S18_VerticalDecayPositionRatio_2500_2750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06779342,81.25,1.288075);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__1834 = new TH1D("S12S18_Y__1834","",24,-60,60);
   S12S18_Y__1834->SetBinContent(4,0.01079914);
   S12S18_Y__1834->SetBinContent(5,0.05075594);
   S12S18_Y__1834->SetBinContent(6,0.08423326);
   S12S18_Y__1834->SetBinContent(7,0.2116631);
   S12S18_Y__1834->SetBinContent(8,0.3207343);
   S12S18_Y__1834->SetBinContent(9,0.5053996);
   S12S18_Y__1834->SetBinContent(10,0.7796976);
   S12S18_Y__1834->SetBinContent(11,1);
   S12S18_Y__1834->SetBinContent(12,1.063715);
   S12S18_Y__1834->SetBinContent(13,1.032397);
   S12S18_Y__1834->SetBinContent(14,0.9157667);
   S12S18_Y__1834->SetBinContent(15,0.7224622);
   S12S18_Y__1834->SetBinContent(16,0.5658747);
   S12S18_Y__1834->SetBinContent(17,0.3347732);
   S12S18_Y__1834->SetBinContent(18,0.1803456);
   S12S18_Y__1834->SetBinContent(19,0.09395248);
   S12S18_Y__1834->SetBinContent(20,0.0475162);
   S12S18_Y__1834->SetBinContent(21,0.008639309);
   S12S18_Y__1834->SetBinError(4,0.003414987);
   S12S18_Y__1834->SetBinError(5,0.007403515);
   S12S18_Y__1834->SetBinError(6,0.009537539);
   S12S18_Y__1834->SetBinError(7,0.01511879);
   S12S18_Y__1834->SetBinError(8,0.01861089);
   S12S18_Y__1834->SetBinError(9,0.0233621);
   S12S18_Y__1834->SetBinError(10,0.02901734);
   S12S18_Y__1834->SetBinError(11,0.03286204);
   S12S18_Y__1834->SetBinError(12,0.03389278);
   S12S18_Y__1834->SetBinError(13,0.03339012);
   S12S18_Y__1834->SetBinError(14,0.03144756);
   S12S18_Y__1834->SetBinError(15,0.027932);
   S12S18_Y__1834->SetBinError(16,0.02472035);
   S12S18_Y__1834->SetBinError(17,0.01901384);
   S12S18_Y__1834->SetBinError(18,0.01395556);
   S12S18_Y__1834->SetBinError(19,0.01007276);
   S12S18_Y__1834->SetBinError(20,0.007163336);
   S12S18_Y__1834->SetBinError(21,0.003054457);
   S12S18_Y__1834->SetEntries(7342);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1834->SetLineColor(ci);
   S12S18_Y__1834->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1834->SetMarkerColor(ci);
   S12S18_Y__1834->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__1834->GetXaxis()->SetRange(0,25);
   S12S18_Y__1834->GetXaxis()->SetLabelFont(42);
   S12S18_Y__1834->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__1834->GetXaxis()->SetTitleFont(42);
   S12S18_Y__1834->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__1834->GetYaxis()->CenterTitle(true);
   S12S18_Y__1834->GetYaxis()->SetLabelFont(42);
   S12S18_Y__1834->GetYaxis()->SetTitleFont(42);
   S12S18_Y__1834->GetZaxis()->SetLabelFont(42);
   S12S18_Y__1834->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__1834->GetZaxis()->SetTitleFont(42);
   S12S18_Y__1834->Draw("AE");
   
   TH1D *Y__1835 = new TH1D("Y__1835","",24,-60,60);
   Y__1835->SetBinContent(4,0.03112454);
   Y__1835->SetBinContent(5,0.0824835);
   Y__1835->SetBinContent(6,0.1533213);
   Y__1835->SetBinContent(7,0.259425);
   Y__1835->SetBinContent(8,0.410416);
   Y__1835->SetBinContent(9,0.6081918);
   Y__1835->SetBinContent(10,0.8203532);
   Y__1835->SetBinContent(11,1);
   Y__1835->SetBinContent(12,1.104027);
   Y__1835->SetBinContent(13,1.105008);
   Y__1835->SetBinContent(14,1.000519);
   Y__1835->SetBinContent(15,0.8189862);
   Y__1835->SetBinContent(16,0.6082553);
   Y__1835->SetBinContent(17,0.4075896);
   Y__1835->SetBinContent(18,0.2569678);
   Y__1835->SetBinContent(19,0.1508698);
   Y__1835->SetBinContent(20,0.08157792);
   Y__1835->SetBinContent(21,0.0308073);
   Y__1835->SetBinError(4,0.0004237084);
   Y__1835->SetBinError(5,0.0006897617);
   Y__1835->SetBinError(6,0.0009404089);
   Y__1835->SetBinError(7,0.001223268);
   Y__1835->SetBinError(8,0.001538607);
   Y__1835->SetBinError(9,0.001872992);
   Y__1835->SetBinError(10,0.002175284);
   Y__1835->SetBinError(11,0.002401682);
   Y__1835->SetBinError(12,0.002523512);
   Y__1835->SetBinError(13,0.002524633);
   Y__1835->SetBinError(14,0.002402305);
   Y__1835->SetBinError(15,0.002173471);
   Y__1835->SetBinError(16,0.001873089);
   Y__1835->SetBinError(17,0.0015333);
   Y__1835->SetBinError(18,0.001217461);
   Y__1835->SetBinError(19,0.0009328605);
   Y__1835->SetBinError(20,0.0006859648);
   Y__1835->SetBinError(21,0.0004215435);
   Y__1835->SetEntries(1548163);

   ci = TColor::GetColor("#ff0000");
   Y__1835->SetLineColor(ci);
   Y__1835->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1835->SetMarkerColor(ci);
   Y__1835->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1835->GetXaxis()->CenterTitle(true);
   Y__1835->GetXaxis()->SetLabelFont(42);
   Y__1835->GetXaxis()->SetTitleSize(0.04);
   Y__1835->GetXaxis()->SetTitleOffset(1.1);
   Y__1835->GetXaxis()->SetTitleFont(42);
   Y__1835->GetYaxis()->SetTitle("Decays");
   Y__1835->GetYaxis()->CenterTitle(true);
   Y__1835->GetYaxis()->SetNdivisions(4000510);
   Y__1835->GetYaxis()->SetLabelFont(42);
   Y__1835->GetYaxis()->SetTitleSize(0.04);
   Y__1835->GetYaxis()->SetTitleOffset(1.1);
   Y__1835->GetYaxis()->SetTitleFont(42);
   Y__1835->GetZaxis()->SetLabelFont(42);
   Y__1835->GetZaxis()->SetTitleOffset(1);
   Y__1835->GetZaxis()->SetTitleFont(42);
   Y__1835->Draw("AEsame");
   upper_pad->Modified();
   c->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.5769231,81.25,1.346154);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3612[18] = {
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
   Double_t _fy3612[18] = {
   0.3469653,
   0.6153466,
   0.5493906,
   0.815893,
   0.781486,
   0.8309871,
   0.9504413,
   1,
   0.9634861,
   0.9342897,
   0.9152916,
   0.8821421,
   0.9303244,
   0.8213487,
   0.7018216,
   0.6227387,
   0.582464,
   0.2804306};
   Double_t _felx3612[18] = {
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
   Double_t _fely3612[18] = {
   0.1079519,
   0.08958086,
   0.06216249,
   0.05835445,
   0.04541508,
   0.03848363,
   0.03545311,
   0.03294365,
   0.03077281,
   0.03028702,
   0.03150169,
   0.03417719,
   0.04072909,
   0.04672616,
   0.05435519,
   0.06674555,
   0.08760773,
   0.09710717};
   Double_t _fehx3612[18] = {
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
   Double_t _fehy3612[18] = {
   0.148244,
   0.1036853,
   0.06963058,
   0.06268657,
   0.04813492,
   0.04030886,
   0.03680116,
   0.03404743,
   0.03177189,
   0.03128529,
   0.03260519,
   0.03552794,
   0.04255285,
   0.04946383,
   0.05873856,
   0.07431649,
   0.1018987,
   0.1384469};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3612,_fy3612,_felx3612,_fehx3612,_fely3612,_fehy3612);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3612 = new TH1F("Graph_Graph3612","",100,-65,65);
   Graph_Graph3612->SetMinimum(0);
   Graph_Graph3612->SetMaximum(1.25);
   Graph_Graph3612->SetDirectory(0);
   Graph_Graph3612->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3612->SetLineColor(ci);
   Graph_Graph3612->GetXaxis()->SetRange(1,100);
   Graph_Graph3612->GetXaxis()->CenterTitle(true);
   Graph_Graph3612->GetXaxis()->SetLabelFont(42);
   Graph_Graph3612->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3612->GetXaxis()->SetTitleFont(42);
   Graph_Graph3612->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3612->GetYaxis()->CenterTitle(true);
   Graph_Graph3612->GetYaxis()->SetLabelFont(42);
   Graph_Graph3612->GetYaxis()->SetTitleFont(42);
   Graph_Graph3612->GetZaxis()->SetLabelFont(42);
   Graph_Graph3612->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3612->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3612);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c->cd();
  
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.152488,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay y-position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.25,510,"-S");
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
   c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Y","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_Y","Truth vertices","lpf");
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
