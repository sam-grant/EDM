void S12S18_VerticalDecayPositionRatio_2000_2250_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06293008,81.25,1.195671);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__1492 = new TH1D("S12S18_Y__1492","",24,-60,60);
   S12S18_Y__1492->SetBinContent(4,0.01851193);
   S12S18_Y__1492->SetBinContent(5,0.05553578);
   S12S18_Y__1492->SetBinContent(6,0.09505162);
   S12S18_Y__1492->SetBinContent(7,0.1933072);
   S12S18_Y__1492->SetBinContent(8,0.3314347);
   S12S18_Y__1492->SetBinContent(9,0.509078);
   S12S18_Y__1492->SetBinContent(10,0.7073692);
   S12S18_Y__1492->SetBinContent(11,0.8939124);
   S12S18_Y__1492->SetBinContent(12,0.9704521);
   S12S18_Y__1492->SetBinContent(13,1);
   S12S18_Y__1492->SetBinContent(14,0.9067284);
   S12S18_Y__1492->SetBinContent(15,0.6917052);
   S12S18_Y__1492->SetBinContent(16,0.508366);
   S12S18_Y__1492->SetBinContent(17,0.3100748);
   S12S18_Y__1492->SetBinContent(18,0.1701673);
   S12S18_Y__1492->SetBinContent(19,0.09789961);
   S12S18_Y__1492->SetBinContent(20,0.04200783);
   S12S18_Y__1492->SetBinContent(21,0.01566394);
   S12S18_Y__1492->SetBinError(4,0.002567142);
   S12S18_Y__1492->SetBinError(5,0.004446421);
   S12S18_Y__1492->SetBinError(6,0.005817065);
   S12S18_Y__1492->SetBinError(7,0.008295607);
   S12S18_Y__1492->SetBinError(8,0.01086233);
   S12S18_Y__1492->SetBinError(9,0.01346221);
   S12S18_Y__1492->SetBinError(10,0.01586891);
   S12S18_Y__1492->SetBinError(11,0.01783905);
   S12S18_Y__1492->SetBinError(12,0.01858708);
   S12S18_Y__1492->SetBinError(13,0.01886792);
   S12S18_Y__1492->SetBinError(14,0.01796647);
   S12S18_Y__1492->SetBinError(15,0.01569223);
   S12S18_Y__1492->SetBinError(16,0.01345279);
   S12S18_Y__1492->SetBinError(17,0.01050648);
   S12S18_Y__1492->SetBinError(18,0.007783272);
   S12S18_Y__1492->SetBinError(19,0.005903569);
   S12S18_Y__1492->SetBinError(20,0.003867134);
   S12S18_Y__1492->SetBinError(21,0.002361427);
   S12S18_Y__1492->SetEntries(21116);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1492->SetLineColor(ci);
   S12S18_Y__1492->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1492->SetMarkerColor(ci);
   S12S18_Y__1492->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__1492->GetXaxis()->SetRange(0,25);
   S12S18_Y__1492->GetXaxis()->SetLabelFont(42);
   S12S18_Y__1492->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__1492->GetXaxis()->SetTitleFont(42);
   S12S18_Y__1492->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__1492->GetYaxis()->CenterTitle(true);
   S12S18_Y__1492->GetYaxis()->SetLabelFont(42);
   S12S18_Y__1492->GetYaxis()->SetTitleFont(42);
   S12S18_Y__1492->GetZaxis()->SetLabelFont(42);
   S12S18_Y__1492->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__1492->GetZaxis()->SetTitleFont(42);
   S12S18_Y__1492->Draw("AE");
   
   TH1D *Y__1493 = new TH1D("Y__1493","",24,-60,60);
   Y__1493->SetBinContent(4,0.02821268);
   Y__1493->SetBinContent(5,0.07422064);
   Y__1493->SetBinContent(6,0.1394587);
   Y__1493->SetBinContent(7,0.2348904);
   Y__1493->SetBinContent(8,0.3734702);
   Y__1493->SetBinContent(9,0.5521756);
   Y__1493->SetBinContent(10,0.7457169);
   Y__1493->SetBinContent(11,0.9097855);
   Y__1493->SetBinContent(12,0.9998592);
   Y__1493->SetBinContent(13,1);
   Y__1493->SetBinContent(14,0.9100816);
   Y__1493->SetBinContent(15,0.7450565);
   Y__1493->SetBinContent(16,0.5495075);
   Y__1493->SetBinContent(17,0.3733197);
   Y__1493->SetBinContent(18,0.2359003);
   Y__1493->SetBinContent(19,0.138371);
   Y__1493->SetBinContent(20,0.07382006);
   Y__1493->SetBinContent(21,0.02792863);
   Y__1493->SetBinError(4,0.0002617114);
   Y__1493->SetBinError(5,0.0004244854);
   Y__1493->SetBinError(6,0.0005818662);
   Y__1493->SetBinError(7,0.0007551497);
   Y__1493->SetBinError(8,0.0009522005);
   Y__1493->SetBinError(9,0.001157815);
   Y__1493->SetBinError(10,0.001345511);
   Y__1493->SetBinError(11,0.001486175);
   Y__1493->SetBinError(12,0.001558009);
   Y__1493->SetBinError(13,0.001558118);
   Y__1493->SetBinError(14,0.001486417);
   Y__1493->SetBinError(15,0.001344916);
   Y__1493->SetBinError(16,0.001155014);
   Y__1493->SetBinError(17,0.0009520086);
   Y__1493->SetBinError(18,0.0007567714);
   Y__1493->SetBinError(19,0.0005795928);
   Y__1493->SetBinError(20,0.0004233384);
   Y__1493->SetBinError(21,0.0002603906);
   Y__1493->SetEntries(3341297);

   ci = TColor::GetColor("#ff0000");
   Y__1493->SetLineColor(ci);
   Y__1493->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1493->SetMarkerColor(ci);
   Y__1493->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1493->GetXaxis()->CenterTitle(true);
   Y__1493->GetXaxis()->SetLabelFont(42);
   Y__1493->GetXaxis()->SetTitleSize(0.04);
   Y__1493->GetXaxis()->SetTitleOffset(1.1);
   Y__1493->GetXaxis()->SetTitleFont(42);
   Y__1493->GetYaxis()->SetTitle("Decays");
   Y__1493->GetYaxis()->CenterTitle(true);
   Y__1493->GetYaxis()->SetNdivisions(4000510);
   Y__1493->GetYaxis()->SetLabelFont(42);
   Y__1493->GetYaxis()->SetTitleSize(0.04);
   Y__1493->GetYaxis()->SetTitleOffset(1.1);
   Y__1493->GetYaxis()->SetTitleFont(42);
   Y__1493->GetZaxis()->SetLabelFont(42);
   Y__1493->GetZaxis()->SetTitleOffset(1);
   Y__1493->GetZaxis()->SetTitleFont(42);
   Y__1493->Draw("AEsame");
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
   
   Double_t _fx3498[18] = {
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
   Double_t _fy3498[18] = {
   0.6561563,
   0.7482525,
   0.6815756,
   0.8229678,
   0.887446,
   0.9219494,
   0.9485761,
   0.982553,
   0.9705888,
   1,
   0.9963154,
   0.928393,
   0.9251301,
   0.8305877,
   0.7213526,
   0.7075152,
   0.5690571,
   0.5608558};
   Double_t _felx3498[18] = {
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
   Double_t _fely3498[18] = {
   0.09089787,
   0.05999544,
   0.04178205,
   0.03540482,
   0.02916742,
   0.02445392,
   0.02134697,
   0.01967222,
   0.01864996,
   0.018931,
   0.01980723,
   0.02112652,
   0.02455572,
   0.02821748,
   0.03306323,
   0.04274121,
   0.05241221,
   0.08438702};
   Double_t _fehx3498[18] = {
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
   Double_t _fehy3498[18] = {
   0.1044643,
   0.06501231,
   0.04442616,
   0.03696213,
   0.03014238,
   0.02511141,
   0.02183293,
   0.02007014,
   0.01901185,
   0.01929287,
   0.02020503,
   0.0216129,
   0.02521643,
   0.02919298,
   0.03461492,
   0.04540544,
   0.057479,
   0.09815944};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3498,_fy3498,_felx3498,_fehx3498,_fely3498,_fehy3498);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3498 = new TH1F("Graph_Graph3498","",100,-65,65);
   Graph_Graph3498->SetMinimum(0);
   Graph_Graph3498->SetMaximum(1.25);
   Graph_Graph3498->SetDirectory(0);
   Graph_Graph3498->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3498->SetLineColor(ci);
   Graph_Graph3498->GetXaxis()->SetRange(1,100);
   Graph_Graph3498->GetXaxis()->CenterTitle(true);
   Graph_Graph3498->GetXaxis()->SetLabelFont(42);
   Graph_Graph3498->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3498->GetXaxis()->SetTitleFont(42);
   Graph_Graph3498->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3498->GetYaxis()->CenterTitle(true);
   Graph_Graph3498->GetYaxis()->SetLabelFont(42);
   Graph_Graph3498->GetYaxis()->SetTitleFont(42);
   Graph_Graph3498->GetZaxis()->SetLabelFont(42);
   Graph_Graph3498->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3498->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3498);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.069811,510,"S");
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
