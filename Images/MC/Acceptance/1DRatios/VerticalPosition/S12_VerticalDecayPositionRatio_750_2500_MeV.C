void S12_VerticalDecayPositionRatio_750_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:33 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06220384,81.25,1.181873);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__172 = new TH1D("S12_Y__172","",24,-60,60);
   S12_Y__172->SetBinContent(4,0.01799525);
   S12_Y__172->SetBinContent(5,0.05201436);
   S12_Y__172->SetBinContent(6,0.1034727);
   S12_Y__172->SetBinContent(7,0.196684);
   S12_Y__172->SetBinContent(8,0.3360461);
   S12_Y__172->SetBinContent(9,0.5164535);
   S12_Y__172->SetBinContent(10,0.7294141);
   S12_Y__172->SetBinContent(11,0.8964262);
   S12_Y__172->SetBinContent(12,1);
   S12_Y__172->SetBinContent(13,0.9923166);
   S12_Y__172->SetBinContent(14,0.8797452);
   S12_Y__172->SetBinContent(15,0.7047465);
   S12_Y__172->SetBinContent(16,0.5094273);
   S12_Y__172->SetBinContent(17,0.3232068);
   S12_Y__172->SetBinContent(18,0.1869282);
   S12_Y__172->SetBinContent(19,0.1050902);
   S12_Y__172->SetBinContent(20,0.05044735);
   S12_Y__172->SetBinContent(21,0.01632715);
   S12_Y__172->SetBinError(4,0.0009537463);
   S12_Y__172->SetBinError(5,0.001621495);
   S12_Y__172->SetBinError(6,0.002287003);
   S12_Y__172->SetBinError(7,0.003153105);
   S12_Y__172->SetBinError(8,0.004121481);
   S12_Y__172->SetBinError(9,0.005109396);
   S12_Y__172->SetBinError(10,0.006072129);
   S12_Y__172->SetBinError(11,0.00673149);
   S12_Y__172->SetBinError(12,0.007109743);
   S12_Y__172->SetBinError(13,0.007082377);
   S12_Y__172->SetBinError(14,0.006668565);
   S12_Y__172->SetBinError(15,0.005968571);
   S12_Y__172->SetBinError(16,0.005074521);
   S12_Y__172->SetBinError(17,0.00404198);
   S12_Y__172->SetBinError(18,0.003073911);
   S12_Y__172->SetBinError(19,0.00230481);
   S12_Y__172->SetBinError(20,0.001596883);
   S12_Y__172->SetBinError(21,0.0009084669);
   S12_Y__172->SetEntries(150682);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__172->SetLineColor(ci);
   S12_Y__172->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__172->SetMarkerColor(ci);
   S12_Y__172->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__172->GetXaxis()->SetRange(0,25);
   S12_Y__172->GetXaxis()->SetLabelFont(42);
   S12_Y__172->GetXaxis()->SetTitleOffset(1);
   S12_Y__172->GetXaxis()->SetTitleFont(42);
   S12_Y__172->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__172->GetYaxis()->CenterTitle(true);
   S12_Y__172->GetYaxis()->SetLabelFont(42);
   S12_Y__172->GetYaxis()->SetTitleFont(42);
   S12_Y__172->GetZaxis()->SetLabelFont(42);
   S12_Y__172->GetZaxis()->SetTitleOffset(1);
   S12_Y__172->GetZaxis()->SetTitleFont(42);
   S12_Y__172->Draw("AE");
   
   TH1D *Y__173 = new TH1D("Y__173","",24,-60,60);
   Y__173->SetBinContent(4,0.02845981);
   Y__173->SetBinContent(5,0.07450355);
   Y__173->SetBinContent(6,0.1390867);
   Y__173->SetBinContent(7,0.2347645);
   Y__173->SetBinContent(8,0.372564);
   Y__173->SetBinContent(9,0.5515269);
   Y__173->SetBinContent(10,0.7456047);
   Y__173->SetBinContent(11,0.9083284);
   Y__173->SetBinContent(12,1);
   Y__173->SetBinContent(13,0.9987504);
   Y__173->SetBinContent(14,0.908036);
   Y__173->SetBinContent(15,0.7451078);
   Y__173->SetBinContent(16,0.550801);
   Y__173->SetBinContent(17,0.3719204);
   Y__173->SetBinContent(18,0.2349691);
   Y__173->SetBinContent(19,0.1388833);
   Y__173->SetBinContent(20,0.07428415);
   Y__173->SetBinContent(21,0.02850096);
   Y__173->SetBinError(4,8.111401e-05);
   Y__173->SetBinError(5,0.0001312406);
   Y__173->SetBinError(6,0.0001793175);
   Y__173->SetBinError(7,0.0002329679);
   Y__173->SetBinError(8,0.0002934812);
   Y__173->SetBinError(9,0.0003570781);
   Y__173->SetBinError(10,0.0004151779);
   Y__173->SetBinError(11,0.0004582488);
   Y__173->SetBinError(12,0.0004808171);
   Y__173->SetBinError(13,0.0004805166);
   Y__173->SetBinError(14,0.000458175);
   Y__173->SetBinError(15,0.0004150395);
   Y__173->SetBinError(16,0.000356843);
   Y__173->SetBinError(17,0.0002932276);
   Y__173->SetBinError(18,0.0002330694);
   Y__173->SetBinError(19,0.0001791863);
   Y__173->SetBinError(20,0.0001310473);
   Y__173->SetBinError(21,8.117263e-05);
   Y__173->SetEntries(3.506322e+07);

   ci = TColor::GetColor("#ff0000");
   Y__173->SetLineColor(ci);
   Y__173->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__173->SetMarkerColor(ci);
   Y__173->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__173->GetXaxis()->CenterTitle(true);
   Y__173->GetXaxis()->SetLabelFont(42);
   Y__173->GetXaxis()->SetTitleSize(0.04);
   Y__173->GetXaxis()->SetTitleOffset(1.1);
   Y__173->GetXaxis()->SetTitleFont(42);
   Y__173->GetYaxis()->SetTitle("Decays");
   Y__173->GetYaxis()->CenterTitle(true);
   Y__173->GetYaxis()->SetNdivisions(4000510);
   Y__173->GetYaxis()->SetLabelFont(42);
   Y__173->GetYaxis()->SetTitleSize(0.04);
   Y__173->GetYaxis()->SetTitleOffset(1.1);
   Y__173->GetYaxis()->SetTitleFont(42);
   Y__173->GetZaxis()->SetLabelFont(42);
   Y__173->GetZaxis()->SetTitleOffset(1);
   Y__173->GetZaxis()->SetTitleFont(42);
   Y__173->Draw("AEsame");
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
   
   Double_t _fx3058[18] = {
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
   Double_t _fy3058[18] = {
   0.632304,
   0.698146,
   0.7439437,
   0.8377929,
   0.9019823,
   0.9364068,
   0.9782854,
   0.9868966,
   1,
   0.9935581,
   0.968844,
   0.9458316,
   0.9248845,
   0.8690215,
   0.7955436,
   0.7566803,
   0.6791133,
   0.5728632};
   Double_t _felx3058[18] = {
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
   Double_t _fely3058[18] = {
   0.03354458,
   0.02179514,
   0.0164696,
   0.01345605,
   0.01108499,
   0.009283755,
   0.008162002,
   0.00742749,
   0.007125922,
   0.00710727,
   0.007360125,
   0.008027555,
   0.009232295,
   0.01088915,
   0.01310537,
   0.01662265,
   0.02152668,
   0.03190005};
   Double_t _fehx3058[18] = {
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
   Double_t _fehy3058[18] = {
   0.03537347,
   0.02248648,
   0.01683833,
   0.01367394,
   0.01122207,
   0.00937626,
   0.008230388,
   0.007483603,
   0.007176885,
   0.007158296,
   0.007416254,
   0.008095981,
   0.00932492,
   0.01102647,
   0.01332308,
   0.01699191,
   0.02222016,
   0.03372814};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,-65,65);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(1.25);
   Graph_Graph3058->SetDirectory(0);
   Graph_Graph3058->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3058->SetLineColor(ci);
   Graph_Graph3058->GetXaxis()->SetRange(1,100);
   Graph_Graph3058->GetXaxis()->CenterTitle(true);
   Graph_Graph3058->GetXaxis()->SetLabelFont(42);
   Graph_Graph3058->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3058->GetXaxis()->SetTitleFont(42);
   Graph_Graph3058->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3058->GetYaxis()->CenterTitle(true);
   Graph_Graph3058->GetYaxis()->SetLabelFont(42);
   Graph_Graph3058->GetYaxis()->SetTitleFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelFont(42);
   Graph_Graph3058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3058);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.057465,510,"S");
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
