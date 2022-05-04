void S12_VerticalDecayPositionRatio_2000_2250_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06917785,81.25,1.314379);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1378 = new TH1D("S12_Y__1378","",24,-60,60);
   S12_Y__1378->SetBinContent(4,0.01914242);
   S12_Y__1378->SetBinContent(5,0.06049005);
   S12_Y__1378->SetBinContent(6,0.1049005);
   S12_Y__1378->SetBinContent(7,0.2151608);
   S12_Y__1378->SetBinContent(8,0.3460949);
   S12_Y__1378->SetBinContent(9,0.5627871);
   S12_Y__1378->SetBinContent(10,0.7756508);
   S12_Y__1378->SetBinContent(11,0.9762634);
   S12_Y__1378->SetBinContent(12,1.072741);
   S12_Y__1378->SetBinContent(13,1.091118);
   S12_Y__1378->SetBinContent(14,1);
   S12_Y__1378->SetBinContent(15,0.7595712);
   S12_Y__1378->SetBinContent(16,0.5612557);
   S12_Y__1378->SetBinContent(17,0.3422665);
   S12_Y__1378->SetBinContent(18,0.1906585);
   S12_Y__1378->SetBinContent(19,0.1026034);
   S12_Y__1378->SetBinContent(20,0.04517611);
   S12_Y__1378->SetBinContent(21,0.01607963);
   S12_Y__1378->SetBinError(4,0.003828484);
   S12_Y__1378->SetBinError(5,0.006805662);
   S12_Y__1378->SetBinError(6,0.008962251);
   S12_Y__1378->SetBinError(7,0.01283542);
   S12_Y__1378->SetBinError(8,0.01627894);
   S12_Y__1378->SetBinError(9,0.02075872);
   S12_Y__1378->SetBinError(10,0.02437034);
   S12_Y__1378->SetBinError(11,0.02734084);
   S12_Y__1378->SetBinError(12,0.02865998);
   S12_Y__1378->SetBinError(13,0.02890442);
   S12_Y__1378->SetBinError(14,0.02767123);
   S12_Y__1378->SetBinError(15,0.02411641);
   S12_Y__1378->SetBinError(16,0.02073045);
   S12_Y__1378->SetBinError(17,0.01618865);
   S12_Y__1378->SetBinError(18,0.01208249);
   S12_Y__1378->SetBinError(19,0.008863581);
   S12_Y__1378->SetBinError(20,0.005881429);
   S12_Y__1378->SetBinError(21,0.003508863);
   S12_Y__1378->SetEntries(10764);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__1378->SetLineColor(ci);
   S12_Y__1378->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__1378->SetMarkerColor(ci);
   S12_Y__1378->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__1378->GetXaxis()->SetRange(0,25);
   S12_Y__1378->GetXaxis()->SetLabelFont(42);
   S12_Y__1378->GetXaxis()->SetTitleOffset(1);
   S12_Y__1378->GetXaxis()->SetTitleFont(42);
   S12_Y__1378->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__1378->GetYaxis()->CenterTitle(true);
   S12_Y__1378->GetYaxis()->SetLabelFont(42);
   S12_Y__1378->GetYaxis()->SetTitleFont(42);
   S12_Y__1378->GetZaxis()->SetLabelFont(42);
   S12_Y__1378->GetZaxis()->SetTitleOffset(1);
   S12_Y__1378->GetZaxis()->SetTitleFont(42);
   S12_Y__1378->Draw("AE");
   
   TH1D *Y__1379 = new TH1D("Y__1379","",24,-60,60);
   Y__1379->SetBinContent(4,0.03100016);
   Y__1379->SetBinContent(5,0.08155382);
   Y__1379->SetBinContent(6,0.1532375);
   Y__1379->SetBinContent(7,0.2580982);
   Y__1379->SetBinContent(8,0.41037);
   Y__1379->SetBinContent(9,0.606732);
   Y__1379->SetBinContent(10,0.8193956);
   Y__1379->SetBinContent(11,0.9996746);
   Y__1379->SetBinContent(12,1.098648);
   Y__1379->SetBinContent(13,1.098803);
   Y__1379->SetBinContent(14,1);
   Y__1379->SetBinContent(15,0.81867);
   Y__1379->SetBinContent(16,0.6038003);
   Y__1379->SetBinContent(17,0.4102046);
   Y__1379->SetBinContent(18,0.2592079);
   Y__1379->SetBinContent(19,0.1520424);
   Y__1379->SetBinContent(20,0.08111367);
   Y__1379->SetBinContent(21,0.03068805);
   Y__1379->SetBinError(4,0.0002875691);
   Y__1379->SetBinError(5,0.0004664256);
   Y__1379->SetBinError(6,0.0006393561);
   Y__1379->SetBinError(7,0.0008297604);
   Y__1379->SetBinError(8,0.00104628);
   Y__1379->SetBinError(9,0.00127221);
   Y__1379->SetBinError(10,0.001478451);
   Y__1379->SetBinError(11,0.001633013);
   Y__1379->SetBinError(12,0.001711944);
   Y__1379->SetBinError(13,0.001712064);
   Y__1379->SetBinError(14,0.001633278);
   Y__1379->SetBinError(15,0.001477797);
   Y__1379->SetBinError(16,0.001269132);
   Y__1379->SetBinError(17,0.001046069);
   Y__1379->SetBinError(18,0.0008315423);
   Y__1379->SetBinError(19,0.0006368581);
   Y__1379->SetBinError(20,0.0004651652);
   Y__1379->SetBinError(21,0.0002861178);
   Y__1379->SetEntries(3341297);

   ci = TColor::GetColor("#ff0000");
   Y__1379->SetLineColor(ci);
   Y__1379->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1379->SetMarkerColor(ci);
   Y__1379->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1379->GetXaxis()->CenterTitle(true);
   Y__1379->GetXaxis()->SetLabelFont(42);
   Y__1379->GetXaxis()->SetTitleSize(0.04);
   Y__1379->GetXaxis()->SetTitleOffset(1.1);
   Y__1379->GetXaxis()->SetTitleFont(42);
   Y__1379->GetYaxis()->SetTitle("Decays");
   Y__1379->GetYaxis()->CenterTitle(true);
   Y__1379->GetYaxis()->SetNdivisions(4000510);
   Y__1379->GetYaxis()->SetLabelFont(42);
   Y__1379->GetYaxis()->SetTitleSize(0.04);
   Y__1379->GetYaxis()->SetTitleOffset(1.1);
   Y__1379->GetYaxis()->SetTitleFont(42);
   Y__1379->GetZaxis()->SetLabelFont(42);
   Y__1379->GetZaxis()->SetTitleOffset(1);
   Y__1379->GetZaxis()->SetTitleFont(42);
   Y__1379->Draw("AEsame");
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
   
   Double_t _fx3460[18] = {
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
   Double_t _fy3460[18] = {
   0.6174942,
   0.7417193,
   0.6845611,
   0.8336394,
   0.8433729,
   0.9275713,
   0.9466134,
   0.9765812,
   0.9764196,
   0.9930064,
   1,
   0.9278112,
   0.9295388,
   0.8343798,
   0.7355428,
   0.6748337,
   0.5569482,
   0.5239704};
   Double_t _felx3460[18] = {
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
   Double_t _fely3460[18] = {
   0.1227943,
   0.08337916,
   0.05848369,
   0.04977305,
   0.03971235,
   0.03426136,
   0.02978589,
   0.02739261,
   0.02612778,
   0.02634773,
   0.02771581,
   0.0295006,
   0.03438094,
   0.03950723,
   0.04664125,
   0.05829186,
   0.07237135,
   0.1135212};
   Double_t _fehx3460[18] = {
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
   Double_t _fehy3460[18] = {
   0.1500436,
   0.09332663,
   0.06370811,
   0.05283789,
   0.0416281,
   0.03555101,
   0.0307383,
   0.02817202,
   0.02683653,
   0.02705633,
   0.0284949,
   0.03045394,
   0.03567689,
   0.04142394,
   0.04969742,
   0.06355957,
   0.08244983,
   0.1412657};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3460,_fy3460,_felx3460,_fehx3460,_fely3460,_fehy3460);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3460 = new TH1F("Graph_Graph3460","",100,-65,65);
   Graph_Graph3460->SetMinimum(0);
   Graph_Graph3460->SetMaximum(1.25);
   Graph_Graph3460->SetDirectory(0);
   Graph_Graph3460->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3460->SetLineColor(ci);
   Graph_Graph3460->GetXaxis()->SetRange(1,100);
   Graph_Graph3460->GetXaxis()->CenterTitle(true);
   Graph_Graph3460->GetXaxis()->SetLabelFont(42);
   Graph_Graph3460->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3460->GetXaxis()->SetTitleFont(42);
   Graph_Graph3460->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3460->GetYaxis()->CenterTitle(true);
   Graph_Graph3460->GetYaxis()->SetLabelFont(42);
   Graph_Graph3460->GetYaxis()->SetTitleFont(42);
   Graph_Graph3460->GetZaxis()->SetLabelFont(42);
   Graph_Graph3460->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3460->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3460);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.176023,510,"S");
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
