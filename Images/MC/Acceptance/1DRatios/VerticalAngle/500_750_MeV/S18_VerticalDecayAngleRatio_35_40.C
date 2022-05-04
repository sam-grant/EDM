void S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.108001,125,21.05202);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__459 = new TH1D("S18_ThetaY_35_40__459","",630,-1575,1575);
   S18_ThetaY_35_40__459->SetBinContent(301,1);
   S18_ThetaY_35_40__459->SetBinContent(303,1);
   S18_ThetaY_35_40__459->SetBinContent(304,3);
   S18_ThetaY_35_40__459->SetBinContent(305,6);
   S18_ThetaY_35_40__459->SetBinContent(306,3);
   S18_ThetaY_35_40__459->SetBinContent(307,9);
   S18_ThetaY_35_40__459->SetBinContent(308,6);
   S18_ThetaY_35_40__459->SetBinContent(309,8);
   S18_ThetaY_35_40__459->SetBinContent(310,12);
   S18_ThetaY_35_40__459->SetBinContent(311,8);
   S18_ThetaY_35_40__459->SetBinContent(312,10);
   S18_ThetaY_35_40__459->SetBinContent(313,4);
   S18_ThetaY_35_40__459->SetBinContent(314,13);
   S18_ThetaY_35_40__459->SetBinContent(315,9);
   S18_ThetaY_35_40__459->SetBinContent(316,3);
   S18_ThetaY_35_40__459->SetBinContent(319,1);
   S18_ThetaY_35_40__459->SetBinError(301,1);
   S18_ThetaY_35_40__459->SetBinError(303,1);
   S18_ThetaY_35_40__459->SetBinError(304,1.732051);
   S18_ThetaY_35_40__459->SetBinError(305,2.44949);
   S18_ThetaY_35_40__459->SetBinError(306,1.732051);
   S18_ThetaY_35_40__459->SetBinError(307,3);
   S18_ThetaY_35_40__459->SetBinError(308,2.44949);
   S18_ThetaY_35_40__459->SetBinError(309,2.828427);
   S18_ThetaY_35_40__459->SetBinError(310,3.464102);
   S18_ThetaY_35_40__459->SetBinError(311,2.828427);
   S18_ThetaY_35_40__459->SetBinError(312,3.162278);
   S18_ThetaY_35_40__459->SetBinError(313,2);
   S18_ThetaY_35_40__459->SetBinError(314,3.605551);
   S18_ThetaY_35_40__459->SetBinError(315,3);
   S18_ThetaY_35_40__459->SetBinError(316,1.732051);
   S18_ThetaY_35_40__459->SetBinError(319,1);
   S18_ThetaY_35_40__459->SetMinimum(0);
   S18_ThetaY_35_40__459->SetMaximum(18.83602);
   S18_ThetaY_35_40__459->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__459->SetLineColor(ci);
   S18_ThetaY_35_40__459->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__459->SetMarkerColor(ci);
   S18_ThetaY_35_40__459->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__459->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__459->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__459->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__459->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__459->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__459->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__459->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__459->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__459->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__459->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__459->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__459->Draw("AE");
   
   TH1D *ThetaY_35_40__460 = new TH1D("ThetaY_35_40__460","",630,-1575,1575);
   ThetaY_35_40__460->SetBinContent(300,0.06989247);
   ThetaY_35_40__460->SetBinContent(301,1);
   ThetaY_35_40__460->SetBinContent(302,3.107527);
   ThetaY_35_40__460->SetBinContent(303,6.467742);
   ThetaY_35_40__460->SetBinContent(304,9.913978);
   ThetaY_35_40__460->SetBinContent(305,12.39247);
   ThetaY_35_40__460->SetBinContent(306,14.37634);
   ThetaY_35_40__460->SetBinContent(307,14.85484);
   ThetaY_35_40__460->SetBinContent(308,15.8172);
   ThetaY_35_40__460->SetBinContent(309,16.36022);
   ThetaY_35_40__460->SetBinContent(310,17.12366);
   ThetaY_35_40__460->SetBinContent(311,16.47312);
   ThetaY_35_40__460->SetBinContent(312,16.08065);
   ThetaY_35_40__460->SetBinContent(313,16.17204);
   ThetaY_35_40__460->SetBinContent(314,16.7957);
   ThetaY_35_40__460->SetBinContent(315,16.55914);
   ThetaY_35_40__460->SetBinContent(316,16.5914);
   ThetaY_35_40__460->SetBinContent(317,16.24731);
   ThetaY_35_40__460->SetBinContent(318,16.26882);
   ThetaY_35_40__460->SetBinContent(319,16.47849);
   ThetaY_35_40__460->SetBinContent(320,16.4086);
   ThetaY_35_40__460->SetBinContent(321,16.56452);
   ThetaY_35_40__460->SetBinContent(322,16.54301);
   ThetaY_35_40__460->SetBinContent(323,16.44086);
   ThetaY_35_40__460->SetBinContent(324,15.40323);
   ThetaY_35_40__460->SetBinContent(325,14.36559);
   ThetaY_35_40__460->SetBinContent(326,12.49462);
   ThetaY_35_40__460->SetBinContent(327,9.564516);
   ThetaY_35_40__460->SetBinContent(328,6.591398);
   ThetaY_35_40__460->SetBinContent(329,3);
   ThetaY_35_40__460->SetBinContent(330,1.139785);
   ThetaY_35_40__460->SetBinContent(331,0.09139785);
   ThetaY_35_40__460->SetBinError(300,0.01938468);
   ThetaY_35_40__460->SetBinError(301,0.07332356);
   ThetaY_35_40__460->SetBinError(302,0.1292561);
   ThetaY_35_40__460->SetBinError(303,0.1864747);
   ThetaY_35_40__460->SetBinError(304,0.23087);
   ThetaY_35_40__460->SetBinError(305,0.2581205);
   ThetaY_35_40__460->SetBinError(306,0.2780147);
   ThetaY_35_40__460->SetBinError(307,0.2826035);
   ThetaY_35_40__460->SetBinError(308,0.291614);
   ThetaY_35_40__460->SetBinError(309,0.2965774);
   ThetaY_35_40__460->SetBinError(310,0.3034183);
   ThetaY_35_40__460->SetBinError(311,0.297599);
   ThetaY_35_40__460->SetBinError(312,0.2940324);
   ThetaY_35_40__460->SetBinError(313,0.2948669);
   ThetaY_35_40__460->SetBinError(314,0.3004987);
   ThetaY_35_40__460->SetBinError(315,0.298375);
   ThetaY_35_40__460->SetBinError(316,0.2986655);
   ThetaY_35_40__460->SetBinError(317,0.2955523);
   ThetaY_35_40__460->SetBinError(318,0.2957478);
   ThetaY_35_40__460->SetBinError(319,0.2976475);
   ThetaY_35_40__460->SetBinError(320,0.2970156);
   ThetaY_35_40__460->SetBinError(321,0.2984234);
   ThetaY_35_40__460->SetBinError(322,0.2982296);
   ThetaY_35_40__460->SetBinError(323,0.2973075);
   ThetaY_35_40__460->SetBinError(324,0.2877726);
   ThetaY_35_40__460->SetBinError(325,0.2779107);
   ThetaY_35_40__460->SetBinError(326,0.2591822);
   ThetaY_35_40__460->SetBinError(327,0.2267645);
   ThetaY_35_40__460->SetBinError(328,0.1882488);
   ThetaY_35_40__460->SetBinError(329,0.1270001);
   ThetaY_35_40__460->SetBinError(330,0.07828075);
   ThetaY_35_40__460->SetBinError(331,0.02216723);
   ThetaY_35_40__460->SetEntries(72123);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__460->SetLineColor(ci);
   ThetaY_35_40__460->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__460->SetMarkerColor(ci);
   ThetaY_35_40__460->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__460->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__460->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__460->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__460->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__460->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__460->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__460->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__460->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__460->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__460->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__460->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__460->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__460->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__460->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__460->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__460->Draw("AEsame");
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
   
   Double_t _fx3154[32] = {
   -77.5,
   -72.5,
   -67.5,
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
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3154[32] = {
   0,
   1,
   0,
   0.1546135,
   0.302603,
   0.4841649,
   0.2086761,
   0.6058632,
   0.3793338,
   0.4889911,
   0.7007849,
   0.4856397,
   0.6218656,
   0.2473404,
   0.7740077,
   0.5435065,
   0.1808166,
   0,
   0,
   0.06068515,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3154[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3154[32] = {
   0,
   0.8280906,
   0,
   0.1279237,
   0.1647855,
   0.1922605,
   0.1136156,
   0.1984389,
   0.1505961,
   0.1694123,
   0.1997943,
   0.1682499,
   0.193613,
   0.1184358,
   0.212289,
   0.1779884,
   0.09844183,
   0,
   0,
   0.05020469,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3154[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3154[32] = {
   28.29718,
   2.319987,
   0.593384,
   0.3560256,
   0.2948231,
   0.28978,
   0.2032099,
   0.2773476,
   0.2269351,
   0.2416156,
   0.2669797,
   0.2399564,
   0.2659796,
   0.195802,
   0.280481,
   0.2487418,
   0.1760541,
   0.1133469,
   0.113197,
   0.1396223,
   0.1122324,
   0.1111757,
   0.1113203,
   0.1120121,
   0.1195602,
   0.1281991,
   0.1474035,
   0.1925842,
   0.2795165,
   0.6146873,
   1.62227,
   21.2741};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3154,_fy3154,_felx3154,_fehx3154,_fely3154,_fehy3154);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3154 = new TH1F("Graph_Graph3154","",100,-100,100);
   Graph_Graph3154->SetMinimum(0);
   Graph_Graph3154->SetMaximum(1.5);
   Graph_Graph3154->SetDirectory(0);
   Graph_Graph3154->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3154->SetLineColor(ci);
   Graph_Graph3154->GetXaxis()->SetRange(1,100);
   Graph_Graph3154->GetXaxis()->CenterTitle(true);
   Graph_Graph3154->GetXaxis()->SetLabelFont(42);
   Graph_Graph3154->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3154->GetXaxis()->SetTitleFont(42);
   Graph_Graph3154->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3154->GetYaxis()->CenterTitle(true);
   Graph_Graph3154->GetYaxis()->SetLabelFont(42);
   Graph_Graph3154->GetYaxis()->SetTitleFont(42);
   Graph_Graph3154->GetZaxis()->SetLabelFont(42);
   Graph_Graph3154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3154->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3154);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,18.83602,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__461 = new TH2D("ThetaY_vs_Y_35_40__461","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__461->SetBinContent(7820,13);
   ThetaY_vs_Y_35_40__461->SetBinContent(7846,186);
   ThetaY_vs_Y_35_40__461->SetBinContent(7872,578);
   ThetaY_vs_Y_35_40__461->SetBinContent(7898,1203);
   ThetaY_vs_Y_35_40__461->SetBinContent(7924,1844);
   ThetaY_vs_Y_35_40__461->SetBinContent(7950,2305);
   ThetaY_vs_Y_35_40__461->SetBinContent(7976,2674);
   ThetaY_vs_Y_35_40__461->SetBinContent(8002,2763);
   ThetaY_vs_Y_35_40__461->SetBinContent(8028,2942);
   ThetaY_vs_Y_35_40__461->SetBinContent(8054,3043);
   ThetaY_vs_Y_35_40__461->SetBinContent(8080,3185);
   ThetaY_vs_Y_35_40__461->SetBinContent(8106,3064);
   ThetaY_vs_Y_35_40__461->SetBinContent(8132,2991);
   ThetaY_vs_Y_35_40__461->SetBinContent(8158,3008);
   ThetaY_vs_Y_35_40__461->SetBinContent(8184,3124);
   ThetaY_vs_Y_35_40__461->SetBinContent(8210,3080);
   ThetaY_vs_Y_35_40__461->SetBinContent(8236,3086);
   ThetaY_vs_Y_35_40__461->SetBinContent(8262,3022);
   ThetaY_vs_Y_35_40__461->SetBinContent(8288,3026);
   ThetaY_vs_Y_35_40__461->SetBinContent(8314,3065);
   ThetaY_vs_Y_35_40__461->SetBinContent(8340,3052);
   ThetaY_vs_Y_35_40__461->SetBinContent(8366,3081);
   ThetaY_vs_Y_35_40__461->SetBinContent(8392,3077);
   ThetaY_vs_Y_35_40__461->SetBinContent(8418,3058);
   ThetaY_vs_Y_35_40__461->SetBinContent(8444,2865);
   ThetaY_vs_Y_35_40__461->SetBinContent(8470,2672);
   ThetaY_vs_Y_35_40__461->SetBinContent(8496,2324);
   ThetaY_vs_Y_35_40__461->SetBinContent(8522,1779);
   ThetaY_vs_Y_35_40__461->SetBinContent(8548,1226);
   ThetaY_vs_Y_35_40__461->SetBinContent(8574,558);
   ThetaY_vs_Y_35_40__461->SetBinContent(8600,212);
   ThetaY_vs_Y_35_40__461->SetBinContent(8626,17);
   ThetaY_vs_Y_35_40__461->SetEntries(72123);
   ThetaY_vs_Y_35_40__461->SetContour(20);
   ThetaY_vs_Y_35_40__461->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__461->SetContourLevel(1,159.25);
   ThetaY_vs_Y_35_40__461->SetContourLevel(2,318.5);
   ThetaY_vs_Y_35_40__461->SetContourLevel(3,477.75);
   ThetaY_vs_Y_35_40__461->SetContourLevel(4,637);
   ThetaY_vs_Y_35_40__461->SetContourLevel(5,796.25);
   ThetaY_vs_Y_35_40__461->SetContourLevel(6,955.5);
   ThetaY_vs_Y_35_40__461->SetContourLevel(7,1114.75);
   ThetaY_vs_Y_35_40__461->SetContourLevel(8,1274);
   ThetaY_vs_Y_35_40__461->SetContourLevel(9,1433.25);
   ThetaY_vs_Y_35_40__461->SetContourLevel(10,1592.5);
   ThetaY_vs_Y_35_40__461->SetContourLevel(11,1751.75);
   ThetaY_vs_Y_35_40__461->SetContourLevel(12,1911);
   ThetaY_vs_Y_35_40__461->SetContourLevel(13,2070.25);
   ThetaY_vs_Y_35_40__461->SetContourLevel(14,2229.5);
   ThetaY_vs_Y_35_40__461->SetContourLevel(15,2388.75);
   ThetaY_vs_Y_35_40__461->SetContourLevel(16,2548);
   ThetaY_vs_Y_35_40__461->SetContourLevel(17,2707.25);
   ThetaY_vs_Y_35_40__461->SetContourLevel(18,2866.5);
   ThetaY_vs_Y_35_40__461->SetContourLevel(19,3025.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__461->SetLineColor(ci);
   ThetaY_vs_Y_35_40__461->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__461->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__461->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__461->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__461->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__461->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__461->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__461->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__461->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__461->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__461->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__461->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__461->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__461->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__461->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_35_40","Reco vertices","lpf");
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
