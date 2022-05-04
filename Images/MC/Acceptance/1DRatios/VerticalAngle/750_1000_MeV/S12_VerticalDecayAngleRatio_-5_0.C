void S12_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(0,0,1,1);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__549 = new TH1D("S12_ThetaY_mI5_0__549","",630,-1575,1575);
   S12_ThetaY_mI5_0__549->SetBinContent(307,0.00619195);
   S12_ThetaY_mI5_0__549->SetBinContent(308,0.09287926);
   S12_ThetaY_mI5_0__549->SetBinContent(309,0.3374613);
   S12_ThetaY_mI5_0__549->SetBinContent(310,0.7863777);
   S12_ThetaY_mI5_0__549->SetBinContent(311,0.8885449);
   S12_ThetaY_mI5_0__549->SetBinContent(312,0.9411765);
   S12_ThetaY_mI5_0__549->SetBinContent(313,0.9009288);
   S12_ThetaY_mI5_0__549->SetBinContent(314,0.9752322);
   S12_ThetaY_mI5_0__549->SetBinContent(315,0.9256966);
   S12_ThetaY_mI5_0__549->SetBinContent(316,0.9411765);
   S12_ThetaY_mI5_0__549->SetBinContent(317,1);
   S12_ThetaY_mI5_0__549->SetBinContent(318,0.9411765);
   S12_ThetaY_mI5_0__549->SetBinContent(319,0.8606811);
   S12_ThetaY_mI5_0__549->SetBinContent(320,0.8173375);
   S12_ThetaY_mI5_0__549->SetBinContent(321,0.9040248);
   S12_ThetaY_mI5_0__549->SetBinContent(322,0.4705882);
   S12_ThetaY_mI5_0__549->SetBinContent(323,0.250774);
   S12_ThetaY_mI5_0__549->SetBinContent(324,0.02786378);
   S12_ThetaY_mI5_0__549->SetBinContent(325,0.003095975);
   S12_ThetaY_mI5_0__549->SetBinError(307,0.00437837);
   S12_ThetaY_mI5_0__549->SetBinError(308,0.01695735);
   S12_ThetaY_mI5_0__549->SetBinError(309,0.03232293);
   S12_ThetaY_mI5_0__549->SetBinError(310,0.04934173);
   S12_ThetaY_mI5_0__549->SetBinError(311,0.05244915);
   S12_ThetaY_mI5_0__549->SetBinError(312,0.05398017);
   S12_ThetaY_mI5_0__549->SetBinError(313,0.05281338);
   S12_ThetaY_mI5_0__549->SetBinError(314,0.05494811);
   S12_ThetaY_mI5_0__549->SetBinError(315,0.05353442);
   S12_ThetaY_mI5_0__549->SetBinError(316,0.05398017);
   S12_ThetaY_mI5_0__549->SetBinError(317,0.05564149);
   S12_ThetaY_mI5_0__549->SetBinError(318,0.05398017);
   S12_ThetaY_mI5_0__549->SetBinError(319,0.05162022);
   S12_ThetaY_mI5_0__549->SetBinError(320,0.05030364);
   S12_ThetaY_mI5_0__549->SetBinError(321,0.05290405);
   S12_ThetaY_mI5_0__549->SetBinError(322,0.03816975);
   S12_ThetaY_mI5_0__549->SetBinError(323,0.02786378);
   S12_ThetaY_mI5_0__549->SetBinError(324,0.009287926);
   S12_ThetaY_mI5_0__549->SetBinError(325,0.003095975);
   S12_ThetaY_mI5_0__549->SetMinimum(0);
   S12_ThetaY_mI5_0__549->SetMaximum(1.1);
   S12_ThetaY_mI5_0__549->SetEntries(3899);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__549->SetLineColor(ci);
   S12_ThetaY_mI5_0__549->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__549->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__549->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__549->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__549->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__549->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__549->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__549->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__549->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__549->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__549->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__549->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__549->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__549->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__549->Draw("AE");
   
   TH1D *ThetaY_mI5_0__550 = new TH1D("ThetaY_mI5_0__550","",630,-1575,1575);
   ThetaY_mI5_0__550->SetBinContent(303,0.000402002);
   ThetaY_mI5_0__550->SetBinContent(304,0.05256176);
   ThetaY_mI5_0__550->SetBinContent(305,0.2407389);
   ThetaY_mI5_0__550->SetBinContent(306,0.5038291);
   ThetaY_mI5_0__550->SetBinContent(307,0.689152);
   ThetaY_mI5_0__550->SetBinContent(308,0.8185162);
   ThetaY_mI5_0__550->SetBinContent(309,0.9017306);
   ThetaY_mI5_0__550->SetBinContent(310,0.9464533);
   ThetaY_mI5_0__550->SetBinContent(311,0.9736488);
   ThetaY_mI5_0__550->SetBinContent(312,0.9875982);
   ThetaY_mI5_0__550->SetBinContent(313,0.9951157);
   ThetaY_mI5_0__550->SetBinContent(314,0.9915781);
   ThetaY_mI5_0__550->SetBinContent(315,0.9922012);
   ThetaY_mI5_0__550->SetBinContent(316,0.9836385);
   ThetaY_mI5_0__550->SetBinContent(317,1);
   ThetaY_mI5_0__550->SetBinContent(318,0.9923218);
   ThetaY_mI5_0__550->SetBinContent(319,0.9940906);
   ThetaY_mI5_0__550->SetBinContent(320,0.9769251);
   ThetaY_mI5_0__550->SetBinContent(321,0.9482422);
   ThetaY_mI5_0__550->SetBinContent(322,0.892766);
   ThetaY_mI5_0__550->SetBinContent(323,0.8145163);
   ThetaY_mI5_0__550->SetBinContent(324,0.6852928);
   ThetaY_mI5_0__550->SetBinContent(325,0.5085526);
   ThetaY_mI5_0__550->SetBinContent(326,0.2389902);
   ThetaY_mI5_0__550->SetBinContent(327,0.05145625);
   ThetaY_mI5_0__550->SetBinContent(328,0.0002814014);
   ThetaY_mI5_0__550->SetBinError(303,8.989037e-05);
   ThetaY_mI5_0__550->SetBinError(304,0.00102786);
   ThetaY_mI5_0__550->SetBinError(305,0.002199744);
   ThetaY_mI5_0__550->SetBinError(306,0.003182297);
   ThetaY_mI5_0__550->SetBinError(307,0.003721831);
   ThetaY_mI5_0__550->SetBinError(308,0.004056138);
   ThetaY_mI5_0__550->SetBinError(309,0.004257332);
   ThetaY_mI5_0__550->SetBinError(310,0.004361629);
   ThetaY_mI5_0__550->SetBinError(311,0.004423849);
   ThetaY_mI5_0__550->SetBinError(312,0.004455426);
   ThetaY_mI5_0__550->SetBinError(313,0.004472351);
   ThetaY_mI5_0__550->SetBinError(314,0.004464394);
   ThetaY_mI5_0__550->SetBinError(315,0.004465797);
   ThetaY_mI5_0__550->SetBinError(316,0.004446485);
   ThetaY_mI5_0__550->SetBinError(317,0.004483313);
   ThetaY_mI5_0__550->SetBinError(318,0.004466068);
   ThetaY_mI5_0__550->SetBinError(319,0.004470047);
   ThetaY_mI5_0__550->SetBinError(320,0.004431285);
   ThetaY_mI5_0__550->SetBinError(321,0.004365749);
   ThetaY_mI5_0__550->SetBinError(322,0.004236117);
   ThetaY_mI5_0__550->SetBinError(323,0.004046215);
   ThetaY_mI5_0__550->SetBinError(324,0.003711395);
   ThetaY_mI5_0__550->SetBinError(325,0.00319718);
   ThetaY_mI5_0__550->SetBinError(326,0.00219174);
   ThetaY_mI5_0__550->SetBinError(327,0.001016993);
   ThetaY_mI5_0__550->SetBinError(328,7.520768e-05);
   ThetaY_mI5_0__550->SetEntries(904503);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__550->SetLineColor(ci);
   ThetaY_mI5_0__550->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__550->SetMarkerColor(ci);
   ThetaY_mI5_0__550->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__550->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__550->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__550->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__550->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__550->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__550->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__550->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__550->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__550->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__550->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__550->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__550->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__550->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__550->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__550->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__550->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-125,-0.6923077,125,1.615385);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3184[26] = {
   -62.5,
   -57.5,
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3184[26] = {
   0,
   0,
   0,
   0,
   0.008984884,
   0.1134727,
   0.3742374,
   0.8308679,
   0.9125928,
   0.9529953,
   0.9053508,
   0.9835153,
   0.9329727,
   0.9568317,
   1,
   0.948459,
   0.8657975,
   0.8366429,
   0.953369,
   0.5271126,
   0.3078809,
   0.04065967,
   0.006087817,
   0,
   0,
   0};
   Double_t _felx3184[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3184[26] = {
   0,
   0,
   0,
   0,
   0.005803508,
   0.02060841,
   0.03583345,
   0.05223877,
   0.05399599,
   0.05479617,
   0.05319726,
   0.05556141,
   0.05408758,
   0.05501744,
   0.05579239,
   0.05453454,
   0.052041,
   0.05159826,
   0.05593149,
   0.04277997,
   0.03417192,
   0.01329938,
   0.005036162,
   0,
   0,
   0};
   Double_t _fehx3184[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3184[26] = {
   14.85149,
   0.1084774,
   0.02367792,
   0.01131329,
   0.01185123,
   0.02474076,
   0.03944138,
   0.05563232,
   0.05729058,
   0.05804244,
   0.05641996,
   0.05879371,
   0.05731911,
   0.05827686,
   0.05899672,
   0.05776526,
   0.0552683,
   0.05488415,
   0.05931445,
   0.04640232,
   0.03819371,
   0.01857241,
   0.01400001,
   0.02385118,
   0.1108088,
   21.64703};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3184,_fy3184,_felx3184,_fehx3184,_fely3184,_fehy3184);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3184 = new TH1F("Graph_Graph3184","",100,-100,100);
   Graph_Graph3184->SetMinimum(0);
   Graph_Graph3184->SetMaximum(1.5);
   Graph_Graph3184->SetDirectory(0);
   Graph_Graph3184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3184->SetLineColor(ci);
   Graph_Graph3184->GetXaxis()->SetRange(1,100);
   Graph_Graph3184->GetXaxis()->CenterTitle(true);
   Graph_Graph3184->GetXaxis()->SetLabelFont(42);
   Graph_Graph3184->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3184->GetXaxis()->SetTitleFont(42);
   Graph_Graph3184->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3184->GetYaxis()->CenterTitle(true);
   Graph_Graph3184->GetYaxis()->SetLabelFont(42);
   Graph_Graph3184->GetYaxis()->SetTitleFont(42);
   Graph_Graph3184->GetZaxis()->SetLabelFont(42);
   Graph_Graph3184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3184->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3184);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-100,0.7,100,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1,100,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1.3,100,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   p1->cd();
  
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-100,100,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-100,100,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("#theta_{y} [mrad]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.5,510,"-S");
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
   p1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0.69,0.69,0.99,0.99);
   p2->Draw();
   p2->cd();
   p2->Range(0,0,1,1);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetFrameBorderMode(0);
   
   TH2D *ThetaY_vs_Y_mI5_0__551 = new TH2D("ThetaY_vs_Y_mI5_0__551","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(7890,20);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(7916,2615);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(7942,11977);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(7968,25066);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(7994,34286);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8020,40722);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8046,44862);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8072,47087);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8098,48440);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8124,49134);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8150,49508);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8176,49332);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8202,49363);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8228,48937);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8254,49751);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8280,49369);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8306,49457);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8332,48603);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8358,47176);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8384,44416);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8410,40523);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8436,34094);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8462,25301);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8488,11890);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8514,2560);
   ThetaY_vs_Y_mI5_0__551->SetBinContent(8540,14);
   ThetaY_vs_Y_mI5_0__551->SetEntries(904503);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__551->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__551->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__551->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__551->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__551->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__551->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__551->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__551->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__551->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__551->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__551->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__551->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__551->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__551->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__551->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__551->Draw("COL");
   p2->Modified();
   c->cd();
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
