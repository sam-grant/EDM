void S18_VerticalDecayPositionRatio_2000_2250_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06342496,81.25,1.205074);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__1435 = new TH1D("S18_Y__1435","",24,-60,60);
   S18_Y__1435->SetBinContent(4,0.01950867);
   S18_Y__1435->SetBinContent(5,0.05563584);
   S18_Y__1435->SetBinContent(6,0.09393064);
   S18_Y__1435->SetBinContent(7,0.1893064);
   S18_Y__1435->SetBinContent(8,0.3460983);
   S18_Y__1435->SetBinContent(9,0.5021676);
   S18_Y__1435->SetBinContent(10,0.7037572);
   S18_Y__1435->SetBinContent(11,0.8930636);
   S18_Y__1435->SetBinContent(12,0.9573699);
   S18_Y__1435->SetBinContent(13,1);
   S18_Y__1435->SetBinContent(14,0.8966763);
   S18_Y__1435->SetBinContent(15,0.6871387);
   S18_Y__1435->SetBinContent(16,0.5021676);
   S18_Y__1435->SetBinContent(17,0.3063584);
   S18_Y__1435->SetBinContent(18,0.1654624);
   S18_Y__1435->SetBinContent(19,0.1018786);
   S18_Y__1435->SetBinContent(20,0.04263006);
   S18_Y__1435->SetBinContent(21,0.0166185);
   S18_Y__1435->SetBinError(4,0.003754445);
   S18_Y__1435->SetBinError(5,0.006340292);
   S18_Y__1435->SetBinError(6,0.008238262);
   S18_Y__1435->SetBinError(7,0.01169539);
   S18_Y__1435->SetBinError(8,0.01581363);
   S18_Y__1435->SetBinError(9,0.0190483);
   S18_Y__1435->SetBinError(10,0.02254984);
   S18_Y__1435->SetBinError(11,0.02540231);
   S18_Y__1435->SetBinError(12,0.02630098);
   S18_Y__1435->SetBinError(13,0.02688017);
   S18_Y__1435->SetBinError(14,0.02545363);
   S18_Y__1435->SetBinError(15,0.022282);
   S18_Y__1435->SetBinError(16,0.0190483);
   S18_Y__1435->SetBinError(17,0.01487808);
   S18_Y__1435->SetBinError(18,0.01093406);
   S18_Y__1435->SetBinError(19,0.008579727);
   S18_Y__1435->SetBinError(20,0.005549961);
   S18_Y__1435->SetBinError(21,0.003465196);
   S18_Y__1435->SetEntries(10352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__1435->SetLineColor(ci);
   S18_Y__1435->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__1435->SetMarkerColor(ci);
   S18_Y__1435->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__1435->GetXaxis()->SetRange(0,25);
   S18_Y__1435->GetXaxis()->SetLabelFont(42);
   S18_Y__1435->GetXaxis()->SetTitleOffset(1);
   S18_Y__1435->GetXaxis()->SetTitleFont(42);
   S18_Y__1435->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__1435->GetYaxis()->CenterTitle(true);
   S18_Y__1435->GetYaxis()->SetLabelFont(42);
   S18_Y__1435->GetYaxis()->SetTitleFont(42);
   S18_Y__1435->GetZaxis()->SetLabelFont(42);
   S18_Y__1435->GetZaxis()->SetTitleOffset(1);
   S18_Y__1435->GetZaxis()->SetTitleFont(42);
   S18_Y__1435->Draw("AE");
   
   TH1D *Y__1436 = new TH1D("Y__1436","",24,-60,60);
   Y__1436->SetBinContent(4,0.02821268);
   Y__1436->SetBinContent(5,0.07422064);
   Y__1436->SetBinContent(6,0.1394587);
   Y__1436->SetBinContent(7,0.2348904);
   Y__1436->SetBinContent(8,0.3734702);
   Y__1436->SetBinContent(9,0.5521756);
   Y__1436->SetBinContent(10,0.7457169);
   Y__1436->SetBinContent(11,0.9097855);
   Y__1436->SetBinContent(12,0.9998592);
   Y__1436->SetBinContent(13,1);
   Y__1436->SetBinContent(14,0.9100816);
   Y__1436->SetBinContent(15,0.7450565);
   Y__1436->SetBinContent(16,0.5495075);
   Y__1436->SetBinContent(17,0.3733197);
   Y__1436->SetBinContent(18,0.2359003);
   Y__1436->SetBinContent(19,0.138371);
   Y__1436->SetBinContent(20,0.07382006);
   Y__1436->SetBinContent(21,0.02792863);
   Y__1436->SetBinError(4,0.0002617114);
   Y__1436->SetBinError(5,0.0004244854);
   Y__1436->SetBinError(6,0.0005818662);
   Y__1436->SetBinError(7,0.0007551497);
   Y__1436->SetBinError(8,0.0009522005);
   Y__1436->SetBinError(9,0.001157815);
   Y__1436->SetBinError(10,0.001345511);
   Y__1436->SetBinError(11,0.001486175);
   Y__1436->SetBinError(12,0.001558009);
   Y__1436->SetBinError(13,0.001558118);
   Y__1436->SetBinError(14,0.001486417);
   Y__1436->SetBinError(15,0.001344916);
   Y__1436->SetBinError(16,0.001155014);
   Y__1436->SetBinError(17,0.0009520086);
   Y__1436->SetBinError(18,0.0007567714);
   Y__1436->SetBinError(19,0.0005795928);
   Y__1436->SetBinError(20,0.0004233384);
   Y__1436->SetBinError(21,0.0002603906);
   Y__1436->SetEntries(3341297);

   ci = TColor::GetColor("#ff0000");
   Y__1436->SetLineColor(ci);
   Y__1436->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1436->SetMarkerColor(ci);
   Y__1436->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1436->GetXaxis()->CenterTitle(true);
   Y__1436->GetXaxis()->SetLabelFont(42);
   Y__1436->GetXaxis()->SetTitleSize(0.04);
   Y__1436->GetXaxis()->SetTitleOffset(1.1);
   Y__1436->GetXaxis()->SetTitleFont(42);
   Y__1436->GetYaxis()->SetTitle("Decays");
   Y__1436->GetYaxis()->CenterTitle(true);
   Y__1436->GetYaxis()->SetNdivisions(4000510);
   Y__1436->GetYaxis()->SetLabelFont(42);
   Y__1436->GetYaxis()->SetTitleSize(0.04);
   Y__1436->GetYaxis()->SetTitleOffset(1.1);
   Y__1436->GetYaxis()->SetTitleFont(42);
   Y__1436->GetZaxis()->SetLabelFont(42);
   Y__1436->GetZaxis()->SetTitleOffset(1);
   Y__1436->GetZaxis()->SetTitleFont(42);
   Y__1436->Draw("AEsame");
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
   
   Double_t _fx3479[18] = {
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
   Double_t _fy3479[18] = {
   0.6914859,
   0.7496007,
   0.6735375,
   0.8059348,
   0.9267091,
   0.9094346,
   0.9437325,
   0.98162,
   0.9575048,
   1,
   0.9852702,
   0.9222639,
   0.9138503,
   0.8206328,
   0.7014082,
   0.7362712,
   0.5774861,
   0.5950344};
   Double_t _felx3479[18] = {
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
   Double_t _fely3479[18] = {
   0.1323954,
   0.08534495,
   0.05906332,
   0.04982613,
   0.04239337,
   0.03454111,
   0.0302818,
   0.0279634,
   0.02634361,
   0.02692201,
   0.02801097,
   0.02994745,
   0.03470908,
   0.03989251,
   0.04637083,
   0.06200767,
   0.0750401,
   0.1232829};
   Double_t _fehx3479[18] = {
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
   Double_t _fehy3479[18] = {
   0.1605579,
   0.09566564,
   0.06448561,
   0.05300664,
   0.04437881,
   0.03587876,
   0.03126951,
   0.02877165,
   0.02707863,
   0.02765681,
   0.02881894,
   0.03093615,
   0.03605325,
   0.04188082,
   0.04954319,
   0.06746463,
   0.08549023,
   0.1519302};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3479,_fy3479,_felx3479,_fehx3479,_fely3479,_fehy3479);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3479 = new TH1F("Graph_Graph3479","",100,-65,65);
   Graph_Graph3479->SetMinimum(0);
   Graph_Graph3479->SetMaximum(1.25);
   Graph_Graph3479->SetDirectory(0);
   Graph_Graph3479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3479->SetLineColor(ci);
   Graph_Graph3479->GetXaxis()->SetRange(1,100);
   Graph_Graph3479->GetXaxis()->CenterTitle(true);
   Graph_Graph3479->GetXaxis()->SetLabelFont(42);
   Graph_Graph3479->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3479->GetXaxis()->SetTitleFont(42);
   Graph_Graph3479->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3479->GetYaxis()->CenterTitle(true);
   Graph_Graph3479->GetYaxis()->SetLabelFont(42);
   Graph_Graph3479->GetYaxis()->SetTitleFont(42);
   Graph_Graph3479->GetZaxis()->SetLabelFont(42);
   Graph_Graph3479->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3479->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3479);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.078224,510,"S");
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
