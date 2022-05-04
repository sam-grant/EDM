void S12_VerticalDecayPositionRatio_2250_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06790993,81.25,1.290289);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1549 = new TH1D("S12_Y__1549","",24,-60,60);
   S12_Y__1549->SetBinContent(4,0.01610905);
   S12_Y__1549->SetBinContent(5,0.04460967);
   S12_Y__1549->SetBinContent(6,0.1214374);
   S12_Y__1549->SetBinContent(7,0.1858736);
   S12_Y__1549->SetBinContent(8,0.3407683);
   S12_Y__1549->SetBinContent(9,0.5018587);
   S12_Y__1549->SetBinContent(10,0.7211896);
   S12_Y__1549->SetBinContent(11,1);
   S12_Y__1549->SetBinContent(12,1.007435);
   S12_Y__1549->SetBinContent(13,1.063197);
   S12_Y__1549->SetBinContent(14,0.9182156);
   S12_Y__1549->SetBinContent(15,0.7137546);
   S12_Y__1549->SetBinContent(16,0.4807931);
   S12_Y__1549->SetBinContent(17,0.2924411);
   S12_Y__1549->SetBinContent(18,0.1821561);
   S12_Y__1549->SetBinContent(19,0.08798017);
   S12_Y__1549->SetBinContent(20,0.03965304);
   S12_Y__1549->SetBinContent(21,0.02478315);
   S12_Y__1549->SetBinError(4,0.004467845);
   S12_Y__1549->SetBinError(5,0.007434944);
   S12_Y__1549->SetBinError(6,0.01226703);
   S12_Y__1549->SetBinError(7,0.01517652);
   S12_Y__1549->SetBinError(8,0.0205491);
   S12_Y__1549->SetBinError(9,0.02493756);
   S12_Y__1549->SetBinError(10,0.02989427);
   S12_Y__1549->SetBinError(11,0.03520167);
   S12_Y__1549->SetBinError(12,0.03533229);
   S12_Y__1549->SetBinError(13,0.03629695);
   S12_Y__1549->SetBinError(14,0.03373149);
   S12_Y__1549->SetBinError(15,0.02973978);
   S12_Y__1549->SetBinError(16,0.02440857);
   S12_Y__1549->SetBinError(17,0.0190363);
   S12_Y__1549->SetBinError(18,0.01502398);
   S12_Y__1549->SetBinError(19,0.01044133);
   S12_Y__1549->SetBinError(20,0.007009733);
   S12_Y__1549->SetBinError(21,0.00554168);
   S12_Y__1549->SetEntries(6248);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__1549->SetLineColor(ci);
   S12_Y__1549->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__1549->SetMarkerColor(ci);
   S12_Y__1549->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__1549->GetXaxis()->SetRange(0,25);
   S12_Y__1549->GetXaxis()->SetLabelFont(42);
   S12_Y__1549->GetXaxis()->SetTitleOffset(1);
   S12_Y__1549->GetXaxis()->SetTitleFont(42);
   S12_Y__1549->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__1549->GetYaxis()->CenterTitle(true);
   S12_Y__1549->GetYaxis()->SetLabelFont(42);
   S12_Y__1549->GetYaxis()->SetTitleFont(42);
   S12_Y__1549->GetZaxis()->SetLabelFont(42);
   S12_Y__1549->GetZaxis()->SetTitleOffset(1);
   S12_Y__1549->GetZaxis()->SetTitleFont(42);
   S12_Y__1549->Draw("AE");
   
   TH1D *Y__1550 = new TH1D("Y__1550","",24,-60,60);
   Y__1550->SetBinContent(4,0.03157287);
   Y__1550->SetBinContent(5,0.08163482);
   Y__1550->SetBinContent(6,0.1533362);
   Y__1550->SetBinContent(7,0.2586899);
   Y__1550->SetBinContent(8,0.4077721);
   Y__1550->SetBinContent(9,0.6070404);
   Y__1550->SetBinContent(10,0.8185337);
   Y__1550->SetBinContent(11,1);
   Y__1550->SetBinContent(12,1.100844);
   Y__1550->SetBinContent(13,1.097829);
   Y__1550->SetBinContent(14,1.001294);
   Y__1550->SetBinContent(15,0.8200504);
   Y__1550->SetBinContent(16,0.6059732);
   Y__1550->SetBinContent(17,0.4072933);
   Y__1550->SetBinContent(18,0.2563911);
   Y__1550->SetBinContent(19,0.1526637);
   Y__1550->SetBinContent(20,0.08270199);
   Y__1550->SetBinContent(21,0.03207356);
   Y__1550->SetBinError(4,0.0003396896);
   Y__1550->SetBinError(5,0.0005462142);
   Y__1550->SetBinError(6,0.0007485962);
   Y__1550->SetBinError(7,0.0009723331);
   Y__1550->SetBinError(8,0.00122077);
   Y__1550->SetBinError(9,0.001489478);
   Y__1550->SetBinError(10,0.001729592);
   Y__1550->SetBinError(11,0.001911724);
   Y__1550->SetBinError(12,0.002005802);
   Y__1550->SetBinError(13,0.002003054);
   Y__1550->SetBinError(14,0.001912961);
   Y__1550->SetBinError(15,0.001731193);
   Y__1550->SetBinError(16,0.001488168);
   Y__1550->SetBinError(17,0.001220054);
   Y__1550->SetBinError(18,0.0009680032);
   Y__1550->SetBinError(19,0.0007469529);
   Y__1550->SetBinError(20,0.0005497728);
   Y__1550->SetBinError(21,0.0003423725);
   Y__1550->SetEntries(2439521);

   ci = TColor::GetColor("#ff0000");
   Y__1550->SetLineColor(ci);
   Y__1550->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1550->SetMarkerColor(ci);
   Y__1550->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1550->GetXaxis()->CenterTitle(true);
   Y__1550->GetXaxis()->SetLabelFont(42);
   Y__1550->GetXaxis()->SetTitleSize(0.04);
   Y__1550->GetXaxis()->SetTitleOffset(1.1);
   Y__1550->GetXaxis()->SetTitleFont(42);
   Y__1550->GetYaxis()->SetTitle("Decays");
   Y__1550->GetYaxis()->CenterTitle(true);
   Y__1550->GetYaxis()->SetNdivisions(4000510);
   Y__1550->GetYaxis()->SetLabelFont(42);
   Y__1550->GetYaxis()->SetTitleSize(0.04);
   Y__1550->GetYaxis()->SetTitleOffset(1.1);
   Y__1550->GetYaxis()->SetTitleFont(42);
   Y__1550->GetZaxis()->SetLabelFont(42);
   Y__1550->GetZaxis()->SetTitleOffset(1);
   Y__1550->GetZaxis()->SetTitleFont(42);
   Y__1550->Draw("AEsame");
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
   
   Double_t _fx3517[18] = {
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
   Double_t _fy3517[18] = {
   0.510218,
   0.5464539,
   0.7919685,
   0.7185189,
   0.8356832,
   0.8267304,
   0.8810751,
   1,
   0.9151479,
   0.9684543,
   0.9170292,
   0.870379,
   0.7934229,
   0.7180112,
   0.7104619,
   0.5763005,
   0.479469,
   0.7726971};
   Double_t _felx3517[18] = {
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
   Double_t _fely3517[18] = {
   0.1397665,
   0.09072167,
   0.07995649,
   0.05866304,
   0.05042477,
   0.04111353,
   0.03655858,
   0.03524618,
   0.03213227,
   0.03310317,
   0.03372577,
   0.0363017,
   0.04030957,
   0.04675466,
   0.0585921,
   0.06829,
   0.08437149,
   0.1715103};
   Double_t _fehx3517[18] = {
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
   Double_t _fehy3517[18] = {
   0.184557,
   0.1072013,
   0.08846919,
   0.06366074,
   0.05356368,
   0.04321104,
   0.03810809,
   0.03651105,
   0.0332809,
   0.03425461,
   0.03498965,
   0.03784846,
   0.04241166,
   0.04990346,
   0.0636365,
   0.07690648,
   0.1007109,
   0.2146008};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3517,_fy3517,_felx3517,_fehx3517,_fely3517,_fehy3517);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3517 = new TH1F("Graph_Graph3517","",100,-65,65);
   Graph_Graph3517->SetMinimum(0);
   Graph_Graph3517->SetMaximum(1.25);
   Graph_Graph3517->SetDirectory(0);
   Graph_Graph3517->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3517->SetLineColor(ci);
   Graph_Graph3517->GetXaxis()->SetRange(1,100);
   Graph_Graph3517->GetXaxis()->CenterTitle(true);
   Graph_Graph3517->GetXaxis()->SetLabelFont(42);
   Graph_Graph3517->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3517->GetXaxis()->SetTitleFont(42);
   Graph_Graph3517->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3517->GetYaxis()->CenterTitle(true);
   Graph_Graph3517->GetYaxis()->SetLabelFont(42);
   Graph_Graph3517->GetYaxis()->SetTitleFont(42);
   Graph_Graph3517->GetZaxis()->SetLabelFont(42);
   Graph_Graph3517->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3517->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3517);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.154469,510,"S");
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
   entry=leg->AddEntry("S12_Y","Truth vertices","lpf");
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
