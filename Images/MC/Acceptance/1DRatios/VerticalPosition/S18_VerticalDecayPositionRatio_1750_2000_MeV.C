void S18_VerticalDecayPositionRatio_1750_2000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06798021,81.25,1.291624);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__1264 = new TH1D("S18_Y__1264","",24,-60,60);
   S18_Y__1264->SetBinContent(4,0.02286585);
   S18_Y__1264->SetBinContent(5,0.05843496);
   S18_Y__1264->SetBinContent(6,0.1275407);
   S18_Y__1264->SetBinContent(7,0.2012195);
   S18_Y__1264->SetBinContent(8,0.3648374);
   S18_Y__1264->SetBinContent(9,0.5599593);
   S18_Y__1264->SetBinContent(10,0.7789634);
   S18_Y__1264->SetBinContent(11,0.992378);
   S18_Y__1264->SetBinContent(12,1.044207);
   S18_Y__1264->SetBinContent(13,1.077236);
   S18_Y__1264->SetBinContent(14,1);
   S18_Y__1264->SetBinContent(15,0.738313);
   S18_Y__1264->SetBinContent(16,0.554878);
   S18_Y__1264->SetBinContent(17,0.3729675);
   S18_Y__1264->SetBinContent(18,0.2037602);
   S18_Y__1264->SetBinContent(19,0.1158537);
   S18_Y__1264->SetBinContent(20,0.04827236);
   S18_Y__1264->SetBinContent(21,0.01371951);
   S18_Y__1264->SetBinError(4,0.00340864);
   S18_Y__1264->SetBinError(5,0.005449088);
   S18_Y__1264->SetBinError(6,0.008050294);
   S18_Y__1264->SetBinError(7,0.01011166);
   S18_Y__1264->SetBinError(8,0.01361561);
   S18_Y__1264->SetBinError(9,0.01686808);
   S18_Y__1264->SetBinError(10,0.01989509);
   S18_Y__1264->SetBinError(11,0.02245567);
   S18_Y__1264->SetBinError(12,0.02303461);
   S18_Y__1264->SetBinError(13,0.02339607);
   S18_Y__1264->SetBinError(14,0.02254174);
   S18_Y__1264->SetBinError(15,0.01936902);
   S18_Y__1264->SetBinError(16,0.01679137);
   S18_Y__1264->SetBinError(17,0.01376648);
   S18_Y__1264->SetBinError(18,0.0101753);
   S18_Y__1264->SetBinError(19,0.007672596);
   S18_Y__1264->SetBinError(20,0.004952639);
   S18_Y__1264->SetBinError(21,0.002640321);
   S18_Y__1264->SetEntries(16286);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__1264->SetLineColor(ci);
   S18_Y__1264->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__1264->SetMarkerColor(ci);
   S18_Y__1264->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__1264->GetXaxis()->SetRange(0,25);
   S18_Y__1264->GetXaxis()->SetLabelFont(42);
   S18_Y__1264->GetXaxis()->SetTitleOffset(1);
   S18_Y__1264->GetXaxis()->SetTitleFont(42);
   S18_Y__1264->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__1264->GetYaxis()->CenterTitle(true);
   S18_Y__1264->GetYaxis()->SetLabelFont(42);
   S18_Y__1264->GetYaxis()->SetTitleFont(42);
   S18_Y__1264->GetZaxis()->SetLabelFont(42);
   S18_Y__1264->GetZaxis()->SetTitleOffset(1);
   S18_Y__1264->GetZaxis()->SetTitleFont(42);
   S18_Y__1264->Draw("AE");
   
   TH1D *Y__1265 = new TH1D("Y__1265","",24,-60,60);
   Y__1265->SetBinContent(4,0.03197857);
   Y__1265->SetBinContent(5,0.08242529);
   Y__1265->SetBinContent(6,0.1539899);
   Y__1265->SetBinContent(7,0.2586006);
   Y__1265->SetBinContent(8,0.4110083);
   Y__1265->SetBinContent(9,0.6080759);
   Y__1265->SetBinContent(10,0.8236031);
   Y__1265->SetBinContent(11,0.9978545);
   Y__1265->SetBinContent(12,1.101201);
   Y__1265->SetBinContent(13,1.100691);
   Y__1265->SetBinContent(14,1);
   Y__1265->SetBinContent(15,0.8221812);
   Y__1265->SetBinContent(16,0.6074451);
   Y__1265->SetBinContent(17,0.4097931);
   Y__1265->SetBinContent(18,0.259915);
   Y__1265->SetBinContent(19,0.1528486);
   Y__1265->SetBinContent(20,0.08164049);
   Y__1265->SetBinContent(21,0.03108617);
   Y__1265->SetBinError(4,0.0002597395);
   Y__1265->SetBinError(5,0.0004170026);
   Y__1265->SetBinError(6,0.0005699736);
   Y__1265->SetBinError(7,0.0007386239);
   Y__1265->SetBinError(8,0.0009311804);
   Y__1265->SetBinError(9,0.001132628);
   Y__1265->SetBinError(10,0.001318158);
   Y__1265->SetBinError(11,0.001450916);
   Y__1265->SetBinError(12,0.0015242);
   Y__1265->SetBinError(13,0.001523847);
   Y__1265->SetBinError(14,0.001452475);
   Y__1265->SetBinError(15,0.00131702);
   Y__1265->SetBinError(16,0.001132041);
   Y__1265->SetBinError(17,0.0009298029);
   Y__1265->SetBinError(18,0.0007404985);
   Y__1265->SetBinError(19,0.0005678574);
   Y__1265->SetBinError(20,0.0004150127);
   Y__1265->SetBinError(21,0.0002560897);
   Y__1265->SetEntries(4234921);

   ci = TColor::GetColor("#ff0000");
   Y__1265->SetLineColor(ci);
   Y__1265->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1265->SetMarkerColor(ci);
   Y__1265->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1265->GetXaxis()->CenterTitle(true);
   Y__1265->GetXaxis()->SetLabelFont(42);
   Y__1265->GetXaxis()->SetTitleSize(0.04);
   Y__1265->GetXaxis()->SetTitleOffset(1.1);
   Y__1265->GetXaxis()->SetTitleFont(42);
   Y__1265->GetYaxis()->SetTitle("Decays");
   Y__1265->GetYaxis()->CenterTitle(true);
   Y__1265->GetYaxis()->SetNdivisions(4000510);
   Y__1265->GetYaxis()->SetLabelFont(42);
   Y__1265->GetYaxis()->SetTitleSize(0.04);
   Y__1265->GetYaxis()->SetTitleOffset(1.1);
   Y__1265->GetYaxis()->SetTitleFont(42);
   Y__1265->GetZaxis()->SetLabelFont(42);
   Y__1265->GetZaxis()->SetTitleOffset(1);
   Y__1265->GetZaxis()->SetTitleFont(42);
   Y__1265->Draw("AEsame");
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
   
   Double_t _fx3422[18] = {
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
   Double_t _fy3422[18] = {
   0.7150369,
   0.7089445,
   0.8282402,
   0.7781091,
   0.8876643,
   0.9208709,
   0.9457995,
   0.9945118,
   0.9482437,
   0.9786905,
   1,
   0.8979931,
   0.9134621,
   0.910136,
   0.7839493,
   0.7579635,
   0.5912796,
   0.4413381};
   Double_t _felx3422[18] = {
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
   Double_t _fely3422[18] = {
   0.1063479,
   0.06610945,
   0.05233264,
   0.03914788,
   0.03318052,
   0.02778882,
   0.02420088,
   0.02254842,
   0.02095712,
   0.02129724,
   0.02258655,
   0.02359923,
   0.02769071,
   0.0336494,
   0.03919573,
   0.05023908,
   0.06063059,
   0.08448088};
   Double_t _fehx3422[18] = {
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
   Double_t _fehy3422[18] = {
   0.1234853,
   0.07258342,
   0.05574933,
   0.04116916,
   0.03444478,
   0.02864041,
   0.02482826,
   0.02306559,
   0.02142553,
   0.02176586,
   0.0231026,
   0.02422778,
   0.02854322,
   0.03491727,
   0.04120652,
   0.05368544,
   0.0671927,
   0.1024445};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3422,_fy3422,_felx3422,_fehx3422,_fely3422,_fehy3422);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3422 = new TH1F("Graph_Graph3422","",100,-65,65);
   Graph_Graph3422->SetMinimum(0);
   Graph_Graph3422->SetMaximum(1.25);
   Graph_Graph3422->SetDirectory(0);
   Graph_Graph3422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3422->SetLineColor(ci);
   Graph_Graph3422->GetXaxis()->SetRange(1,100);
   Graph_Graph3422->GetXaxis()->CenterTitle(true);
   Graph_Graph3422->GetXaxis()->SetLabelFont(42);
   Graph_Graph3422->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3422->GetXaxis()->SetTitleFont(42);
   Graph_Graph3422->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3422->GetYaxis()->CenterTitle(true);
   Graph_Graph3422->GetYaxis()->SetLabelFont(42);
   Graph_Graph3422->GetYaxis()->SetTitleFont(42);
   Graph_Graph3422->GetZaxis()->SetLabelFont(42);
   Graph_Graph3422->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3422->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3422);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.155663,510,"S");
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
