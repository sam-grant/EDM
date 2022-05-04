void S12S18_VerticalDecayPositionRatio_1750_2000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06737899,81.25,1.280201);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__1321 = new TH1D("S12S18_Y__1321","",24,-60,60);
   S12S18_Y__1321->SetBinContent(4,0.02000988);
   S12S18_Y__1321->SetBinContent(5,0.05187747);
   S12S18_Y__1321->SetBinContent(6,0.1188241);
   S12S18_Y__1321->SetBinContent(7,0.2042984);
   S12S18_Y__1321->SetBinContent(8,0.3732708);
   S12S18_Y__1321->SetBinContent(9,0.5573123);
   S12S18_Y__1321->SetBinContent(10,0.7882905);
   S12S18_Y__1321->SetBinContent(11,0.9856719);
   S12S18_Y__1321->SetBinContent(12,1.074605);
   S12S18_Y__1321->SetBinContent(13,1.060771);
   S12S18_Y__1321->SetBinContent(14,1);
   S12S18_Y__1321->SetBinContent(15,0.7462945);
   S12S18_Y__1321->SetBinContent(16,0.5578063);
   S12S18_Y__1321->SetBinContent(17,0.3562253);
   S12S18_Y__1321->SetBinContent(18,0.1986166);
   S12S18_Y__1321->SetBinContent(19,0.111413);
   S12S18_Y__1321->SetBinContent(20,0.04990119);
   S12S18_Y__1321->SetBinContent(21,0.01729249);
   S12S18_Y__1321->SetBinError(4,0.00222332);
   S12S18_Y__1321->SetBinError(5,0.003579886);
   S12S18_Y__1321->SetBinError(6,0.005417913);
   S12S18_Y__1321->SetBinError(7,0.007104152);
   S12S18_Y__1321->SetBinError(8,0.009602664);
   S12S18_Y__1321->SetBinError(9,0.01173354);
   S12S18_Y__1321->SetBinError(10,0.01395478);
   S12S18_Y__1321->SetBinError(11,0.01560436);
   S12S18_Y__1321->SetBinError(12,0.01629312);
   S12S18_Y__1321->SetBinError(13,0.0161879);
   S12S18_Y__1321->SetBinError(14,0.01571737);
   S12S18_Y__1321->SetBinError(15,0.01357797);
   S12S18_Y__1321->SetBinError(16,0.01173874);
   S12S18_Y__1321->SetBinError(17,0.009380849);
   S12S18_Y__1321->SetBinError(18,0.007004667);
   S12S18_Y__1321->SetBinError(19,0.005246235);
   S12S18_Y__1321->SetBinError(20,0.003511035);
   S12S18_Y__1321->SetBinError(21,0.002066848);
   S12S18_Y__1321->SetEntries(33487);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1321->SetLineColor(ci);
   S12S18_Y__1321->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1321->SetMarkerColor(ci);
   S12S18_Y__1321->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__1321->GetXaxis()->SetRange(0,25);
   S12S18_Y__1321->GetXaxis()->SetLabelFont(42);
   S12S18_Y__1321->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__1321->GetXaxis()->SetTitleFont(42);
   S12S18_Y__1321->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__1321->GetYaxis()->CenterTitle(true);
   S12S18_Y__1321->GetYaxis()->SetLabelFont(42);
   S12S18_Y__1321->GetYaxis()->SetTitleFont(42);
   S12S18_Y__1321->GetZaxis()->SetLabelFont(42);
   S12S18_Y__1321->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__1321->GetZaxis()->SetTitleFont(42);
   S12S18_Y__1321->Draw("AE");
   
   TH1D *Y__1322 = new TH1D("Y__1322","",24,-60,60);
   Y__1322->SetBinContent(4,0.03197857);
   Y__1322->SetBinContent(5,0.08242529);
   Y__1322->SetBinContent(6,0.1539899);
   Y__1322->SetBinContent(7,0.2586006);
   Y__1322->SetBinContent(8,0.4110083);
   Y__1322->SetBinContent(9,0.6080759);
   Y__1322->SetBinContent(10,0.8236031);
   Y__1322->SetBinContent(11,0.9978545);
   Y__1322->SetBinContent(12,1.101201);
   Y__1322->SetBinContent(13,1.100691);
   Y__1322->SetBinContent(14,1);
   Y__1322->SetBinContent(15,0.8221812);
   Y__1322->SetBinContent(16,0.6074451);
   Y__1322->SetBinContent(17,0.4097931);
   Y__1322->SetBinContent(18,0.259915);
   Y__1322->SetBinContent(19,0.1528486);
   Y__1322->SetBinContent(20,0.08164049);
   Y__1322->SetBinContent(21,0.03108617);
   Y__1322->SetBinError(4,0.0002597395);
   Y__1322->SetBinError(5,0.0004170026);
   Y__1322->SetBinError(6,0.0005699736);
   Y__1322->SetBinError(7,0.0007386239);
   Y__1322->SetBinError(8,0.0009311804);
   Y__1322->SetBinError(9,0.001132628);
   Y__1322->SetBinError(10,0.001318158);
   Y__1322->SetBinError(11,0.001450916);
   Y__1322->SetBinError(12,0.0015242);
   Y__1322->SetBinError(13,0.001523847);
   Y__1322->SetBinError(14,0.001452475);
   Y__1322->SetBinError(15,0.00131702);
   Y__1322->SetBinError(16,0.001132041);
   Y__1322->SetBinError(17,0.0009298029);
   Y__1322->SetBinError(18,0.0007404985);
   Y__1322->SetBinError(19,0.0005678574);
   Y__1322->SetBinError(20,0.0004150127);
   Y__1322->SetBinError(21,0.0002560897);
   Y__1322->SetEntries(4234921);

   ci = TColor::GetColor("#ff0000");
   Y__1322->SetLineColor(ci);
   Y__1322->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1322->SetMarkerColor(ci);
   Y__1322->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1322->GetXaxis()->CenterTitle(true);
   Y__1322->GetXaxis()->SetLabelFont(42);
   Y__1322->GetXaxis()->SetTitleSize(0.04);
   Y__1322->GetXaxis()->SetTitleOffset(1.1);
   Y__1322->GetXaxis()->SetTitleFont(42);
   Y__1322->GetYaxis()->SetTitle("Decays");
   Y__1322->GetYaxis()->CenterTitle(true);
   Y__1322->GetYaxis()->SetNdivisions(4000510);
   Y__1322->GetYaxis()->SetLabelFont(42);
   Y__1322->GetYaxis()->SetTitleSize(0.04);
   Y__1322->GetYaxis()->SetTitleOffset(1.1);
   Y__1322->GetYaxis()->SetTitleFont(42);
   Y__1322->GetZaxis()->SetLabelFont(42);
   Y__1322->GetZaxis()->SetTitleOffset(1);
   Y__1322->GetZaxis()->SetTitleFont(42);
   Y__1322->Draw("AEsame");
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
   
   Double_t _fx3441[18] = {
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
   Double_t _fy3441[18] = {
   0.6257279,
   0.6293878,
   0.7716356,
   0.7900151,
   0.908183,
   0.9165176,
   0.9571242,
   0.9877913,
   0.9758475,
   0.9637317,
   1,
   0.9077007,
   0.9182827,
   0.8692808,
   0.7641599,
   0.7289111,
   0.6112309,
   0.556276};
   Double_t _felx3441[18] = {
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
   Double_t _fely3441[18] = {
   0.06956443,
   0.04351323,
   0.03528679,
   0.02755836,
   0.02345145,
   0.01937008,
   0.01701176,
   0.01570306,
   0.0148567,
   0.01476684,
   0.01578367,
   0.01657752,
   0.01939893,
   0.02297376,
   0.02703191,
   0.03441676,
   0.04308191,
   0.06648369};
   Double_t _fehx3441[18] = {
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
   Double_t _fehy3441[18] = {
   0.07776929,
   0.04663201,
   0.03693907,
   0.0285371,
   0.02406511,
   0.01978392,
   0.01731689,
   0.01595473,
   0.01508466,
   0.01499489,
   0.01603481,
   0.01688312,
   0.0198132,
   0.02358922,
   0.02800573,
   0.03608198,
   0.04623224,
   0.07495255};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3441,_fy3441,_felx3441,_fehx3441,_fely3441,_fehy3441);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3441 = new TH1F("Graph_Graph3441","",100,-65,65);
   Graph_Graph3441->SetMinimum(0);
   Graph_Graph3441->SetMaximum(1.25);
   Graph_Graph3441->SetDirectory(0);
   Graph_Graph3441->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3441->SetLineColor(ci);
   Graph_Graph3441->GetXaxis()->SetRange(1,100);
   Graph_Graph3441->GetXaxis()->CenterTitle(true);
   Graph_Graph3441->GetXaxis()->SetLabelFont(42);
   Graph_Graph3441->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3441->GetXaxis()->SetTitleFont(42);
   Graph_Graph3441->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3441->GetYaxis()->CenterTitle(true);
   Graph_Graph3441->GetYaxis()->SetLabelFont(42);
   Graph_Graph3441->GetYaxis()->SetTitleFont(42);
   Graph_Graph3441->GetZaxis()->SetLabelFont(42);
   Graph_Graph3441->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3441->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3441);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.145443,510,"S");
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
