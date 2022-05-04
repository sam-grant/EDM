void S12S18_VerticalDecayPositionRatio_750_1000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06245491,81.25,1.186643);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__637 = new TH1D("S12S18_Y__637","",24,-60,60);
   S12S18_Y__637->SetBinContent(4,0.02047952);
   S12S18_Y__637->SetBinContent(5,0.05394605);
   S12S18_Y__637->SetBinContent(6,0.1101399);
   S12S18_Y__637->SetBinContent(7,0.2031718);
   S12S18_Y__637->SetBinContent(8,0.351024);
   S12S18_Y__637->SetBinContent(9,0.511988);
   S12S18_Y__637->SetBinContent(10,0.7355145);
   S12S18_Y__637->SetBinContent(11,0.9005994);
   S12S18_Y__637->SetBinContent(12,0.9887612);
   S12S18_Y__637->SetBinContent(13,1);
   S12S18_Y__637->SetBinContent(14,0.8856144);
   S12S18_Y__637->SetBinContent(15,0.7112887);
   S12S18_Y__637->SetBinContent(16,0.5152348);
   S12S18_Y__637->SetBinContent(17,0.3416583);
   S12S18_Y__637->SetBinContent(18,0.1995504);
   S12S18_Y__637->SetBinContent(19,0.113012);
   S12S18_Y__637->SetBinContent(20,0.05819181);
   S12S18_Y__637->SetBinContent(21,0.01810689);
   S12S18_Y__637->SetBinError(4,0.001599182);
   S12S18_Y__637->SetBinError(5,0.002595481);
   S12S18_Y__637->SetBinError(6,0.003708602);
   S12S18_Y__637->SetBinError(7,0.005036974);
   S12S18_Y__637->SetBinError(8,0.006620737);
   S12S18_Y__637->SetBinError(9,0.007995909);
   S12S18_Y__637->SetBinError(10,0.009583708);
   S12S18_Y__637->SetBinError(11,0.01060483);
   S12S18_Y__637->SetBinError(12,0.01111178);
   S12S18_Y__637->SetBinError(13,0.01117475);
   S12S18_Y__637->SetBinError(14,0.01051624);
   S12S18_Y__637->SetBinError(15,0.009424557);
   S12S18_Y__637->SetBinError(16,0.008021222);
   S12S18_Y__637->SetBinError(17,0.006531817);
   S12S18_Y__637->SetBinError(18,0.004991882);
   S12S18_Y__637->SetBinError(19,0.003756646);
   S12S18_Y__637->SetBinError(20,0.002695683);
   S12S18_Y__637->SetBinError(21,0.001503696);
   S12S18_Y__637->SetEntries(61808);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__637->SetLineColor(ci);
   S12S18_Y__637->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__637->SetMarkerColor(ci);
   S12S18_Y__637->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__637->GetXaxis()->SetRange(0,25);
   S12S18_Y__637->GetXaxis()->SetLabelFont(42);
   S12S18_Y__637->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__637->GetXaxis()->SetTitleFont(42);
   S12S18_Y__637->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__637->GetYaxis()->CenterTitle(true);
   S12S18_Y__637->GetYaxis()->SetLabelFont(42);
   S12S18_Y__637->GetYaxis()->SetTitleFont(42);
   S12S18_Y__637->GetZaxis()->SetLabelFont(42);
   S12S18_Y__637->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__637->GetZaxis()->SetTitleFont(42);
   S12S18_Y__637->Draw("AE");
   
   TH1D *Y__638 = new TH1D("Y__638","",24,-60,60);
   Y__638->SetBinContent(4,0.02830102);
   Y__638->SetBinContent(5,0.07446525);
   Y__638->SetBinContent(6,0.1389994);
   Y__638->SetBinContent(7,0.2346157);
   Y__638->SetBinContent(8,0.3736527);
   Y__638->SetBinContent(9,0.551038);
   Y__638->SetBinContent(10,0.7467257);
   Y__638->SetBinContent(11,0.9090345);
   Y__638->SetBinContent(12,1.000639);
   Y__638->SetBinContent(13,1);
   Y__638->SetBinContent(14,0.9090113);
   Y__638->SetBinContent(15,0.7448262);
   Y__638->SetBinContent(16,0.550622);
   Y__638->SetBinContent(17,0.3726659);
   Y__638->SetBinContent(18,0.2349);
   Y__638->SetBinContent(19,0.1392616);
   Y__638->SetBinContent(20,0.0744398);
   Y__638->SetBinContent(21,0.02855215);
   Y__638->SetBinError(4,0.0001769436);
   Y__638->SetBinError(5,0.000287019);
   Y__638->SetBinError(6,0.0003921392);
   Y__638->SetBinError(7,0.0005094626);
   Y__638->SetBinError(8,0.0006429362);
   Y__638->SetBinError(9,0.0007807726);
   Y__638->SetBinError(10,0.0009088963);
   Y__638->SetBinError(11,0.001002822);
   Y__638->SetBinError(12,0.001052138);
   Y__638->SetBinError(13,0.001051802);
   Y__638->SetBinError(14,0.001002809);
   Y__638->SetBinError(15,0.0009077396);
   Y__638->SetBinError(16,0.0007804779);
   Y__638->SetBinError(17,0.0006420866);
   Y__638->SetBinError(18,0.0005097712);
   Y__638->SetBinError(19,0.0003925088);
   Y__638->SetBinError(20,0.0002869699);
   Y__638->SetBinError(21,0.0001777269);
   Y__638->SetEntries(7332414);

   ci = TColor::GetColor("#ff0000");
   Y__638->SetLineColor(ci);
   Y__638->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__638->SetMarkerColor(ci);
   Y__638->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__638->GetXaxis()->CenterTitle(true);
   Y__638->GetXaxis()->SetLabelFont(42);
   Y__638->GetXaxis()->SetTitleSize(0.04);
   Y__638->GetXaxis()->SetTitleOffset(1.1);
   Y__638->GetXaxis()->SetTitleFont(42);
   Y__638->GetYaxis()->SetTitle("Decays");
   Y__638->GetYaxis()->CenterTitle(true);
   Y__638->GetYaxis()->SetNdivisions(4000510);
   Y__638->GetYaxis()->SetLabelFont(42);
   Y__638->GetYaxis()->SetTitleSize(0.04);
   Y__638->GetYaxis()->SetTitleOffset(1.1);
   Y__638->GetYaxis()->SetTitleFont(42);
   Y__638->GetZaxis()->SetLabelFont(42);
   Y__638->GetZaxis()->SetTitleOffset(1);
   Y__638->GetZaxis()->SetTitleFont(42);
   Y__638->Draw("AEsame");
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
   
   Double_t _fx3213[18] = {
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
   Double_t _fy3213[18] = {
   0.7236319,
   0.724446,
   0.7923767,
   0.8659771,
   0.9394392,
   0.9291338,
   0.9849862,
   0.9907208,
   0.9881294,
   1,
   0.9742612,
   0.9549728,
   0.9357322,
   0.9167954,
   0.8495123,
   0.8115089,
   0.7817297,
   0.6341692};
   Double_t _felx3213[18] = {
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
   Double_t _fely3213[18] = {
   0.05662809,
   0.03495282,
   0.02676902,
   0.02154898,
   0.01779146,
   0.01456962,
   0.01288981,
   0.01171685,
   0.01115294,
   0.0112239,
   0.01161841,
   0.01270639,
   0.01462722,
   0.01759721,
   0.02132863,
   0.02706716,
   0.03632482,
   0.05275069};
   Double_t _fehx3213[18] = {
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
   Double_t _fehy3213[18] = {
   0.06124535,
   0.03668186,
   0.02768923,
   0.02209209,
   0.01813169,
   0.01479993,
   0.01305962,
   0.01185626,
   0.01127955,
   0.01135061,
   0.01175781,
   0.01287661,
   0.0148577,
   0.01793831,
   0.02187107,
   0.0279856,
   0.03805383,
   0.05733448};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3213,_fy3213,_felx3213,_fehx3213,_fely3213,_fehy3213);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3213 = new TH1F("Graph_Graph3213","",100,-65,65);
   Graph_Graph3213->SetMinimum(0);
   Graph_Graph3213->SetMaximum(1.25);
   Graph_Graph3213->SetDirectory(0);
   Graph_Graph3213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3213->SetLineColor(ci);
   Graph_Graph3213->GetXaxis()->SetRange(1,100);
   Graph_Graph3213->GetXaxis()->CenterTitle(true);
   Graph_Graph3213->GetXaxis()->SetLabelFont(42);
   Graph_Graph3213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3213->GetXaxis()->SetTitleFont(42);
   Graph_Graph3213->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3213->GetYaxis()->CenterTitle(true);
   Graph_Graph3213->GetYaxis()->SetLabelFont(42);
   Graph_Graph3213->GetYaxis()->SetTitleFont(42);
   Graph_Graph3213->GetZaxis()->SetLabelFont(42);
   Graph_Graph3213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3213->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3213);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.061733,510,"S");
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
