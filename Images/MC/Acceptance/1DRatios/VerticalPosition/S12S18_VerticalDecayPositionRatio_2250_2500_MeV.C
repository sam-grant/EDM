void S12S18_VerticalDecayPositionRatio_2250_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06325834,81.25,1.201908);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__1663 = new TH1D("S12S18_Y__1663","",24,-60,60);
   S12S18_Y__1663->SetBinContent(4,0.01754386);
   S12S18_Y__1663->SetBinContent(5,0.04502924);
   S12S18_Y__1663->SetBinContent(6,0.1093567);
   S12S18_Y__1663->SetBinContent(7,0.1847953);
   S12S18_Y__1663->SetBinContent(8,0.3070175);
   S12S18_Y__1663->SetBinContent(9,0.5070175);
   S12S18_Y__1663->SetBinContent(10,0.654386);
   S12S18_Y__1663->SetBinContent(11,0.8888889);
   S12S18_Y__1663->SetBinContent(12,0.9210526);
   S12S18_Y__1663->SetBinContent(13,1);
   S12S18_Y__1663->SetBinContent(14,0.8549708);
   S12S18_Y__1663->SetBinContent(15,0.6555556);
   S12S18_Y__1663->SetBinContent(16,0.4584795);
   S12S18_Y__1663->SetBinContent(17,0.2859649);
   S12S18_Y__1663->SetBinContent(18,0.1836257);
   S12S18_Y__1663->SetBinContent(19,0.09298246);
   S12S18_Y__1663->SetBinContent(20,0.0380117);
   S12S18_Y__1663->SetBinContent(21,0.01929825);
   S12S18_Y__1663->SetBinError(4,0.003203056);
   S12S18_Y__1663->SetBinError(5,0.005131558);
   S12S18_Y__1663->SetBinError(6,0.007996956);
   S12S18_Y__1663->SetBinError(7,0.01039555);
   S12S18_Y__1663->SetBinError(8,0.01339934);
   S12S18_Y__1663->SetBinError(9,0.01721922);
   S12S18_Y__1663->SetBinError(10,0.01956226);
   S12S18_Y__1663->SetBinError(11,0.02279952);
   S12S18_Y__1663->SetBinError(12,0.02320834);
   S12S18_Y__1663->SetBinError(13,0.02418254);
   S12S18_Y__1663->SetBinError(14,0.0223603);
   S12S18_Y__1663->SetBinError(15,0.01957973);
   S12S18_Y__1663->SetBinError(16,0.01637427);
   S12S18_Y__1663->SetBinError(17,0.01293178);
   S12S18_Y__1663->SetBinError(18,0.0103626);
   S12S18_Y__1663->SetBinError(19,0.007373988);
   S12S18_Y__1663->SetBinError(20,0.004714771);
   S12S18_Y__1663->SetBinError(21,0.003359393);
   S12S18_Y__1663->SetEntries(12353);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1663->SetLineColor(ci);
   S12S18_Y__1663->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1663->SetMarkerColor(ci);
   S12S18_Y__1663->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__1663->GetXaxis()->SetRange(0,25);
   S12S18_Y__1663->GetXaxis()->SetLabelFont(42);
   S12S18_Y__1663->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__1663->GetXaxis()->SetTitleFont(42);
   S12S18_Y__1663->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__1663->GetYaxis()->CenterTitle(true);
   S12S18_Y__1663->GetYaxis()->SetLabelFont(42);
   S12S18_Y__1663->GetYaxis()->SetTitleFont(42);
   S12S18_Y__1663->GetZaxis()->SetLabelFont(42);
   S12S18_Y__1663->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__1663->GetZaxis()->SetTitleFont(42);
   S12S18_Y__1663->Draw("AE");
   
   TH1D *Y__1664 = new TH1D("Y__1664","",24,-60,60);
   Y__1664->SetBinContent(4,0.02875938);
   Y__1664->SetBinContent(5,0.07436025);
   Y__1664->SetBinContent(6,0.1396722);
   Y__1664->SetBinContent(7,0.2356378);
   Y__1664->SetBinContent(8,0.371435);
   Y__1664->SetBinContent(9,0.5529463);
   Y__1664->SetBinContent(10,0.7455932);
   Y__1664->SetBinContent(11,0.9108889);
   Y__1664->SetBinContent(12,1.002746);
   Y__1664->SetBinContent(13,1);
   Y__1664->SetBinContent(14,0.9120674);
   Y__1664->SetBinContent(15,0.7469748);
   Y__1664->SetBinContent(16,0.5519743);
   Y__1664->SetBinContent(17,0.3709989);
   Y__1664->SetBinContent(18,0.2335438);
   Y__1664->SetBinContent(19,0.1390597);
   Y__1664->SetBinContent(20,0.07533232);
   Y__1664->SetBinContent(21,0.02921545);
   Y__1664->SetBinError(4,0.0003094195);
   Y__1664->SetBinError(5,0.0004975405);
   Y__1664->SetBinError(6,0.0006818879);
   Y__1664->SetBinError(7,0.0008856874);
   Y__1664->SetBinError(8,0.001111986);
   Y__1664->SetBinError(9,0.001356749);
   Y__1664->SetBinError(10,0.001575466);
   Y__1664->SetBinError(11,0.001741369);
   Y__1664->SetBinError(12,0.001827063);
   Y__1664->SetBinError(13,0.001824559);
   Y__1664->SetBinError(14,0.001742495);
   Y__1664->SetBinError(15,0.001576925);
   Y__1664->SetBinError(16,0.001355556);
   Y__1664->SetBinError(17,0.001111333);
   Y__1664->SetBinError(18,0.0008817434);
   Y__1664->SetBinError(19,0.0006803911);
   Y__1664->SetBinError(20,0.0005007819);
   Y__1664->SetBinError(21,0.0003118633);
   Y__1664->SetEntries(2439521);

   ci = TColor::GetColor("#ff0000");
   Y__1664->SetLineColor(ci);
   Y__1664->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1664->SetMarkerColor(ci);
   Y__1664->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1664->GetXaxis()->CenterTitle(true);
   Y__1664->GetXaxis()->SetLabelFont(42);
   Y__1664->GetXaxis()->SetTitleSize(0.04);
   Y__1664->GetXaxis()->SetTitleOffset(1.1);
   Y__1664->GetXaxis()->SetTitleFont(42);
   Y__1664->GetYaxis()->SetTitle("Decays");
   Y__1664->GetYaxis()->CenterTitle(true);
   Y__1664->GetYaxis()->SetNdivisions(4000510);
   Y__1664->GetYaxis()->SetLabelFont(42);
   Y__1664->GetYaxis()->SetTitleSize(0.04);
   Y__1664->GetYaxis()->SetTitleOffset(1.1);
   Y__1664->GetYaxis()->SetTitleFont(42);
   Y__1664->GetZaxis()->SetLabelFont(42);
   Y__1664->GetZaxis()->SetTitleOffset(1);
   Y__1664->GetZaxis()->SetTitleFont(42);
   Y__1664->Draw("AEsame");
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
   
   Double_t _fx3555[18] = {
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
   Double_t _fy3555[18] = {
   0.6100223,
   0.6055553,
   0.7829526,
   0.7842347,
   0.8265713,
   0.916938,
   0.8776716,
   0.9758478,
   0.9185299,
   1,
   0.9373987,
   0.8776141,
   0.8306176,
   0.7707971,
   0.7862581,
   0.6686514,
   0.5045868,
   0.6605493};
   Double_t _felx3555[18] = {
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
   Double_t _fely3555[18] = {
   0.1109361,
   0.06897635,
   0.05733063,
   0.04419133,
   0.03614764,
   0.03121591,
   0.02629865,
   0.02509659,
   0.02320271,
   0.02424887,
   0.02457853,
   0.02627346,
   0.02972854,
   0.03492095,
   0.04444632,
   0.05307182,
   0.06251313,
   0.1146099};
   Double_t _fehx3555[18] = {
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
   Double_t _fehy3555[18] = {
   0.1332261,
   0.07732261,
   0.06169202,
   0.04675518,
   0.03776444,
   0.03229734,
   0.02709885,
   0.02575057,
   0.02379645,
   0.02484421,
   0.02523168,
   0.02707217,
   0.03081227,
   0.03654038,
   0.04703342,
   0.05746253,
   0.07078597,
   0.1364732};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3555,_fy3555,_felx3555,_fehx3555,_fely3555,_fehy3555);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3555 = new TH1F("Graph_Graph3555","",100,-65,65);
   Graph_Graph3555->SetMinimum(0);
   Graph_Graph3555->SetMaximum(1.25);
   Graph_Graph3555->SetDirectory(0);
   Graph_Graph3555->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3555->SetLineColor(ci);
   Graph_Graph3555->GetXaxis()->SetRange(1,100);
   Graph_Graph3555->GetXaxis()->CenterTitle(true);
   Graph_Graph3555->GetXaxis()->SetLabelFont(42);
   Graph_Graph3555->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3555->GetXaxis()->SetTitleFont(42);
   Graph_Graph3555->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3555->GetYaxis()->CenterTitle(true);
   Graph_Graph3555->GetYaxis()->SetLabelFont(42);
   Graph_Graph3555->GetYaxis()->SetTitleFont(42);
   Graph_Graph3555->GetZaxis()->SetLabelFont(42);
   Graph_Graph3555->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3555->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3555);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.075392,510,"S");
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
