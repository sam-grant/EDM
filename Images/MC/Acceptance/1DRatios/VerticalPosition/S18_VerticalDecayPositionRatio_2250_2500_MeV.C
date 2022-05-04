void S18_VerticalDecayPositionRatio_2250_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06388073,81.25,1.213734);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__1606 = new TH1D("S18_Y__1606","",24,-60,60);
   S18_Y__1606->SetBinContent(4,0.01995305);
   S18_Y__1606->SetBinContent(5,0.04812207);
   S18_Y__1606->SetBinContent(6,0.1044601);
   S18_Y__1606->SetBinContent(7,0.1948357);
   S18_Y__1606->SetBinContent(8,0.2934272);
   S18_Y__1606->SetBinContent(9,0.5422535);
   S18_Y__1606->SetBinContent(10,0.6302817);
   S18_Y__1606->SetBinContent(11,0.8368545);
   S18_Y__1606->SetBinContent(12,0.8943662);
   S18_Y__1606->SetBinContent(13,1);
   S18_Y__1606->SetBinContent(14,0.8462441);
   S18_Y__1606->SetBinContent(15,0.6396714);
   S18_Y__1606->SetBinContent(16,0.4647887);
   S18_Y__1606->SetBinContent(17,0.2969484);
   S18_Y__1606->SetBinContent(18,0.1960094);
   S18_Y__1606->SetBinContent(19,0.1032864);
   S18_Y__1606->SetBinContent(20,0.03873239);
   S18_Y__1606->SetBinContent(21,0.01525822);
   S18_Y__1606->SetBinError(4,0.004839326);
   S18_Y__1606->SetBinError(5,0.007515404);
   S18_Y__1606->SetBinError(6,0.01107275);
   S18_Y__1606->SetBinError(7,0.01512218);
   S18_Y__1606->SetBinError(8,0.01855797);
   S18_Y__1606->SetBinError(9,0.02522792);
   S18_Y__1606->SetBinError(10,0.02719866);
   S18_Y__1606->SetBinError(11,0.03134045);
   S18_Y__1606->SetBinError(12,0.03239947);
   S18_Y__1606->SetBinError(13,0.03425944);
   S18_Y__1606->SetBinError(14,0.03151578);
   S18_Y__1606->SetBinError(15,0.02740051);
   S18_Y__1606->SetBinError(16,0.02335651);
   S18_Y__1606->SetBinError(17,0.01866898);
   S18_Y__1606->SetBinError(18,0.01516766);
   S18_Y__1606->SetBinError(19,0.01101037);
   S18_Y__1606->SetBinError(20,0.006742444);
   S18_Y__1606->SetBinError(21,0.004231868);
   S18_Y__1606->SetEntries(6105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__1606->SetLineColor(ci);
   S18_Y__1606->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__1606->SetMarkerColor(ci);
   S18_Y__1606->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__1606->GetXaxis()->SetRange(0,25);
   S18_Y__1606->GetXaxis()->SetLabelFont(42);
   S18_Y__1606->GetXaxis()->SetTitleOffset(1);
   S18_Y__1606->GetXaxis()->SetTitleFont(42);
   S18_Y__1606->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__1606->GetYaxis()->CenterTitle(true);
   S18_Y__1606->GetYaxis()->SetLabelFont(42);
   S18_Y__1606->GetYaxis()->SetTitleFont(42);
   S18_Y__1606->GetZaxis()->SetLabelFont(42);
   S18_Y__1606->GetZaxis()->SetTitleOffset(1);
   S18_Y__1606->GetZaxis()->SetTitleFont(42);
   S18_Y__1606->Draw("AE");
   
   TH1D *Y__1607 = new TH1D("Y__1607","",24,-60,60);
   Y__1607->SetBinContent(4,0.02875938);
   Y__1607->SetBinContent(5,0.07436025);
   Y__1607->SetBinContent(6,0.1396722);
   Y__1607->SetBinContent(7,0.2356378);
   Y__1607->SetBinContent(8,0.371435);
   Y__1607->SetBinContent(9,0.5529463);
   Y__1607->SetBinContent(10,0.7455932);
   Y__1607->SetBinContent(11,0.9108889);
   Y__1607->SetBinContent(12,1.002746);
   Y__1607->SetBinContent(13,1);
   Y__1607->SetBinContent(14,0.9120674);
   Y__1607->SetBinContent(15,0.7469748);
   Y__1607->SetBinContent(16,0.5519743);
   Y__1607->SetBinContent(17,0.3709989);
   Y__1607->SetBinContent(18,0.2335438);
   Y__1607->SetBinContent(19,0.1390597);
   Y__1607->SetBinContent(20,0.07533232);
   Y__1607->SetBinContent(21,0.02921545);
   Y__1607->SetBinError(4,0.0003094195);
   Y__1607->SetBinError(5,0.0004975405);
   Y__1607->SetBinError(6,0.0006818879);
   Y__1607->SetBinError(7,0.0008856874);
   Y__1607->SetBinError(8,0.001111986);
   Y__1607->SetBinError(9,0.001356749);
   Y__1607->SetBinError(10,0.001575466);
   Y__1607->SetBinError(11,0.001741369);
   Y__1607->SetBinError(12,0.001827063);
   Y__1607->SetBinError(13,0.001824559);
   Y__1607->SetBinError(14,0.001742495);
   Y__1607->SetBinError(15,0.001576925);
   Y__1607->SetBinError(16,0.001355556);
   Y__1607->SetBinError(17,0.001111333);
   Y__1607->SetBinError(18,0.0008817434);
   Y__1607->SetBinError(19,0.0006803911);
   Y__1607->SetBinError(20,0.0005007819);
   Y__1607->SetBinError(21,0.0003118633);
   Y__1607->SetEntries(2439521);

   ci = TColor::GetColor("#ff0000");
   Y__1607->SetLineColor(ci);
   Y__1607->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1607->SetMarkerColor(ci);
   Y__1607->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1607->GetXaxis()->CenterTitle(true);
   Y__1607->GetXaxis()->SetLabelFont(42);
   Y__1607->GetXaxis()->SetTitleSize(0.04);
   Y__1607->GetXaxis()->SetTitleOffset(1.1);
   Y__1607->GetXaxis()->SetTitleFont(42);
   Y__1607->GetYaxis()->SetTitle("Decays");
   Y__1607->GetYaxis()->CenterTitle(true);
   Y__1607->GetYaxis()->SetNdivisions(4000510);
   Y__1607->GetYaxis()->SetLabelFont(42);
   Y__1607->GetYaxis()->SetTitleSize(0.04);
   Y__1607->GetYaxis()->SetTitleOffset(1.1);
   Y__1607->GetYaxis()->SetTitleFont(42);
   Y__1607->GetZaxis()->SetLabelFont(42);
   Y__1607->GetZaxis()->SetTitleOffset(1);
   Y__1607->GetZaxis()->SetTitleFont(42);
   Y__1607->Draw("AEsame");
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
   
   Double_t _fx3536[18] = {
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
   Double_t _fy3536[18] = {
   0.6937929,
   0.6471477,
   0.7478945,
   0.8268439,
   0.7899826,
   0.9806621,
   0.8453426,
   0.9187229,
   0.8919166,
   1,
   0.9278307,
   0.8563494,
   0.8420478,
   0.8004022,
   0.8392831,
   0.7427486,
   0.5141538,
   0.5222653};
   Double_t _felx3536[18] = {
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
   Double_t _fely3536[18] = {
   0.1667544,
   0.1007437,
   0.07921043,
   0.06418556,
   0.04998517,
   0.04567128,
   0.03651149,
   0.03444311,
   0.03234443,
   0.03430121,
   0.03459159,
   0.03671516,
   0.042347,
   0.05034444,
   0.06495735,
   0.07910884,
   0.08910983,
   0.1430651};
   Double_t _fehx3536[18] = {
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
   Double_t _fehy3536[18] = {
   0.2126437,
   0.1178009,
   0.08808137,
   0.06937351,
   0.05325306,
   0.04784976,
   0.03812376,
   0.03575938,
   0.0335393,
   0.03549857,
   0.03590605,
   0.03832425,
   0.04453241,
   0.05361567,
   0.07019143,
   0.08802127,
   0.10608,
   0.1889118};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3536,_fy3536,_felx3536,_fehx3536,_fely3536,_fehy3536);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3536 = new TH1F("Graph_Graph3536","",100,-65,65);
   Graph_Graph3536->SetMinimum(0);
   Graph_Graph3536->SetMaximum(1.25);
   Graph_Graph3536->SetDirectory(0);
   Graph_Graph3536->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3536->SetLineColor(ci);
   Graph_Graph3536->GetXaxis()->SetRange(1,100);
   Graph_Graph3536->GetXaxis()->CenterTitle(true);
   Graph_Graph3536->GetXaxis()->SetLabelFont(42);
   Graph_Graph3536->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3536->GetXaxis()->SetTitleFont(42);
   Graph_Graph3536->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3536->GetYaxis()->CenterTitle(true);
   Graph_Graph3536->GetYaxis()->SetLabelFont(42);
   Graph_Graph3536->GetYaxis()->SetTitleFont(42);
   Graph_Graph3536->GetZaxis()->SetLabelFont(42);
   Graph_Graph3536->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3536->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3536);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.085972,510,"S");
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
