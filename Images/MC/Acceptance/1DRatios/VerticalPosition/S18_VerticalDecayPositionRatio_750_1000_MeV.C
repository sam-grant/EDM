void S18_VerticalDecayPositionRatio_750_1000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06273814,81.25,1.192025);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__580 = new TH1D("S18_Y__580","",24,-60,60);
   S18_Y__580->SetBinContent(4,0.01962245);
   S18_Y__580->SetBinContent(5,0.05340288);
   S18_Y__580->SetBinContent(6,0.112767);
   S18_Y__580->SetBinContent(7,0.1992052);
   S18_Y__580->SetBinContent(8,0.3412817);
   S18_Y__580->SetBinContent(9,0.4987581);
   S18_Y__580->SetBinContent(10,0.7153502);
   S18_Y__580->SetBinContent(11,0.8941878);
   S18_Y__580->SetBinContent(12,0.9982613);
   S18_Y__580->SetBinContent(13,1);
   S18_Y__580->SetBinContent(14,0.8862394);
   S18_Y__580->SetBinContent(15,0.7108793);
   S18_Y__580->SetBinContent(16,0.5099354);
   S18_Y__580->SetBinContent(17,0.3246398);
   S18_Y__580->SetBinContent(18,0.1870343);
   S18_Y__580->SetBinContent(19,0.1150025);
   S18_Y__580->SetBinContent(20,0.05439642);
   S18_Y__580->SetBinContent(21,0.01788376);
   S18_Y__580->SetBinError(4,0.002207699);
   S18_Y__580->SetBinError(5,0.003642046);
   S18_Y__580->SetBinError(6,0.005292418);
   S18_Y__580->SetBinError(7,0.007034179);
   S18_Y__580->SetBinError(8,0.009207031);
   S18_Y__580->SetBinError(9,0.01113033);
   S18_Y__580->SetBinError(10,0.01332976);
   S18_Y__580->SetBinError(11,0.01490313);
   S18_Y__580->SetBinError(12,0.01574654);
   S18_Y__580->SetBinError(13,0.01576025);
   S18_Y__580->SetBinError(14,0.01483675);
   S18_Y__580->SetBinError(15,0.01328804);
   S18_Y__580->SetBinError(16,0.01125436);
   S18_Y__580->SetBinError(17,0.008979745);
   S18_Y__580->SetBinError(18,0.006815908);
   S18_Y__580->SetBinError(19,0.005344619);
   S18_Y__580->SetBinError(20,0.00367577);
   S18_Y__580->SetBinError(21,0.002107621);
   S18_Y__580->SetEntries(30754);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__580->SetLineColor(ci);
   S18_Y__580->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__580->SetMarkerColor(ci);
   S18_Y__580->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__580->GetXaxis()->SetRange(0,25);
   S18_Y__580->GetXaxis()->SetLabelFont(42);
   S18_Y__580->GetXaxis()->SetTitleOffset(1);
   S18_Y__580->GetXaxis()->SetTitleFont(42);
   S18_Y__580->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__580->GetYaxis()->CenterTitle(true);
   S18_Y__580->GetYaxis()->SetLabelFont(42);
   S18_Y__580->GetYaxis()->SetTitleFont(42);
   S18_Y__580->GetZaxis()->SetLabelFont(42);
   S18_Y__580->GetZaxis()->SetTitleOffset(1);
   S18_Y__580->GetZaxis()->SetTitleFont(42);
   S18_Y__580->Draw("AE");
   
   TH1D *Y__581 = new TH1D("Y__581","",24,-60,60);
   Y__581->SetBinContent(4,0.02830102);
   Y__581->SetBinContent(5,0.07446525);
   Y__581->SetBinContent(6,0.1389994);
   Y__581->SetBinContent(7,0.2346157);
   Y__581->SetBinContent(8,0.3736527);
   Y__581->SetBinContent(9,0.551038);
   Y__581->SetBinContent(10,0.7467257);
   Y__581->SetBinContent(11,0.9090345);
   Y__581->SetBinContent(12,1.000639);
   Y__581->SetBinContent(13,1);
   Y__581->SetBinContent(14,0.9090113);
   Y__581->SetBinContent(15,0.7448262);
   Y__581->SetBinContent(16,0.550622);
   Y__581->SetBinContent(17,0.3726659);
   Y__581->SetBinContent(18,0.2349);
   Y__581->SetBinContent(19,0.1392616);
   Y__581->SetBinContent(20,0.0744398);
   Y__581->SetBinContent(21,0.02855215);
   Y__581->SetBinError(4,0.0001769436);
   Y__581->SetBinError(5,0.000287019);
   Y__581->SetBinError(6,0.0003921392);
   Y__581->SetBinError(7,0.0005094626);
   Y__581->SetBinError(8,0.0006429362);
   Y__581->SetBinError(9,0.0007807726);
   Y__581->SetBinError(10,0.0009088963);
   Y__581->SetBinError(11,0.001002822);
   Y__581->SetBinError(12,0.001052138);
   Y__581->SetBinError(13,0.001051802);
   Y__581->SetBinError(14,0.001002809);
   Y__581->SetBinError(15,0.0009077396);
   Y__581->SetBinError(16,0.0007804779);
   Y__581->SetBinError(17,0.0006420866);
   Y__581->SetBinError(18,0.0005097712);
   Y__581->SetBinError(19,0.0003925088);
   Y__581->SetBinError(20,0.0002869699);
   Y__581->SetBinError(21,0.0001777269);
   Y__581->SetEntries(7332414);

   ci = TColor::GetColor("#ff0000");
   Y__581->SetLineColor(ci);
   Y__581->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__581->SetMarkerColor(ci);
   Y__581->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__581->GetXaxis()->CenterTitle(true);
   Y__581->GetXaxis()->SetLabelFont(42);
   Y__581->GetXaxis()->SetTitleSize(0.04);
   Y__581->GetXaxis()->SetTitleOffset(1.1);
   Y__581->GetXaxis()->SetTitleFont(42);
   Y__581->GetYaxis()->SetTitle("Decays");
   Y__581->GetYaxis()->CenterTitle(true);
   Y__581->GetYaxis()->SetNdivisions(4000510);
   Y__581->GetYaxis()->SetLabelFont(42);
   Y__581->GetYaxis()->SetTitleSize(0.04);
   Y__581->GetYaxis()->SetTitleOffset(1.1);
   Y__581->GetYaxis()->SetTitleFont(42);
   Y__581->GetZaxis()->SetLabelFont(42);
   Y__581->GetZaxis()->SetTitleOffset(1);
   Y__581->GetZaxis()->SetTitleFont(42);
   Y__581->Draw("AEsame");
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
   
   Double_t _fx3194[18] = {
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
   Double_t _fy3194[18] = {
   0.6933479,
   0.7171517,
   0.8112772,
   0.84907,
   0.913366,
   0.9051247,
   0.9579826,
   0.9836676,
   0.9976234,
   1,
   0.9749488,
   0.9544231,
   0.9261079,
   0.8711284,
   0.7962293,
   0.8258021,
   0.7307438,
   0.6263541};
   Double_t _felx3194[18] = {
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
   Double_t _fely3194[18] = {
   0.07796092,
   0.04894894,
   0.03812967,
   0.03003202,
   0.02468765,
   0.02023782,
   0.01788795,
   0.01642956,
   0.01577074,
   0.01579465,
   0.01635647,
   0.01787729,
   0.02047978,
   0.02413955,
   0.0290611,
   0.03843477,
   0.04942126,
   0.07374599};
   Double_t _fehx3194[18] = {
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
   Double_t _fehy3194[18] = {
   0.087265,
   0.05241042,
   0.03996561,
   0.03111368,
   0.0253642,
   0.0206955,
   0.01822515,
   0.01670631,
   0.01602206,
   0.01604613,
   0.01663323,
   0.01821535,
   0.02093779,
   0.024818,
   0.03014179,
   0.04026696,
   0.05288309,
   0.08298868};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3194,_fy3194,_felx3194,_fehx3194,_fely3194,_fehy3194);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3194 = new TH1F("Graph_Graph3194","",100,-65,65);
   Graph_Graph3194->SetMinimum(0);
   Graph_Graph3194->SetMaximum(1.25);
   Graph_Graph3194->SetDirectory(0);
   Graph_Graph3194->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3194->SetLineColor(ci);
   Graph_Graph3194->GetXaxis()->SetRange(1,100);
   Graph_Graph3194->GetXaxis()->CenterTitle(true);
   Graph_Graph3194->GetXaxis()->SetLabelFont(42);
   Graph_Graph3194->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3194->GetXaxis()->SetTitleFont(42);
   Graph_Graph3194->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3194->GetYaxis()->CenterTitle(true);
   Graph_Graph3194->GetYaxis()->SetLabelFont(42);
   Graph_Graph3194->GetYaxis()->SetTitleFont(42);
   Graph_Graph3194->GetZaxis()->SetLabelFont(42);
   Graph_Graph3194->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3194->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3194);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.066548,510,"S");
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
   entry=leg->AddEntry("S18_Y","Truth vertices","lpf");
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
