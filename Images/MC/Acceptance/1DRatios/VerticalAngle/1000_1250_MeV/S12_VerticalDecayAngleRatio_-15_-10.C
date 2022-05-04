void S12_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07633278,125,1.450323);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__714 = new TH1D("S12_ThetaY_mI15_mI10__714","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__714->SetBinContent(310,0.01872659);
   S12_ThetaY_mI15_mI10__714->SetBinContent(311,0.3146067);
   S12_ThetaY_mI15_mI10__714->SetBinContent(312,1.007491);
   S12_ThetaY_mI15_mI10__714->SetBinContent(313,1.06367);
   S12_ThetaY_mI15_mI10__714->SetBinContent(314,1.029963);
   S12_ThetaY_mI15_mI10__714->SetBinContent(315,1.127341);
   S12_ThetaY_mI15_mI10__714->SetBinContent(316,1.149813);
   S12_ThetaY_mI15_mI10__714->SetBinContent(317,1.089888);
   S12_ThetaY_mI15_mI10__714->SetBinContent(318,1.078652);
   S12_ThetaY_mI15_mI10__714->SetBinContent(319,1.041199);
   S12_ThetaY_mI15_mI10__714->SetBinContent(320,1.007491);
   S12_ThetaY_mI15_mI10__714->SetBinContent(321,1);
   S12_ThetaY_mI15_mI10__714->SetBinContent(322,0.6441948);
   S12_ThetaY_mI15_mI10__714->SetBinContent(323,0.3970037);
   S12_ThetaY_mI15_mI10__714->SetBinContent(324,0.04868914);
   S12_ThetaY_mI15_mI10__714->SetBinError(310,0.008374786);
   S12_ThetaY_mI15_mI10__714->SetBinError(311,0.03432641);
   S12_ThetaY_mI15_mI10__714->SetBinError(312,0.06142779);
   S12_ThetaY_mI15_mI10__714->SetBinError(313,0.06311723);
   S12_ThetaY_mI15_mI10__714->SetBinError(314,0.06210908);
   S12_ThetaY_mI15_mI10__714->SetBinError(315,0.06497884);
   S12_ThetaY_mI15_mI10__714->SetBinError(316,0.06562328);
   S12_ThetaY_mI15_mI10__714->SetBinError(317,0.06389034);
   S12_ThetaY_mI15_mI10__714->SetBinError(318,0.06356016);
   S12_ThetaY_mI15_mI10__714->SetBinError(319,0.06244694);
   S12_ThetaY_mI15_mI10__714->SetBinError(320,0.06142779);
   S12_ThetaY_mI15_mI10__714->SetBinError(321,0.06119901);
   S12_ThetaY_mI15_mI10__714->SetBinError(322,0.04911939);
   S12_ThetaY_mI15_mI10__714->SetBinError(323,0.03856041);
   S12_ThetaY_mI15_mI10__714->SetBinError(324,0.01350394);
   S12_ThetaY_mI15_mI10__714->SetMinimum(0);
   S12_ThetaY_mI15_mI10__714->SetMaximum(1.297657);
   S12_ThetaY_mI15_mI10__714->SetEntries(3209);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__714->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__714->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__714->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__714->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__714->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__714->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__714->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__714->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__714->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__714->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__714->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__714->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__714->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__714->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__714->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__714->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__715 = new TH1D("ThetaY_mI15_mI10__715","",630,-1575,1575);
   ThetaY_mI15_mI10__715->SetBinContent(305,2.832861e-05);
   ThetaY_mI15_mI10__715->SetBinContent(306,0.05932011);
   ThetaY_mI15_mI10__715->SetBinContent(307,0.3501133);
   ThetaY_mI15_mI10__715->SetBinContent(308,0.6733711);
   ThetaY_mI15_mI10__715->SetBinContent(309,0.8719263);
   ThetaY_mI15_mI10__715->SetBinContent(310,1.012266);
   ThetaY_mI15_mI10__715->SetBinContent(311,1.091331);
   ThetaY_mI15_mI10__715->SetBinContent(312,1.133484);
   ThetaY_mI15_mI10__715->SetBinContent(313,1.159603);
   ThetaY_mI15_mI10__715->SetBinContent(314,1.17221);
   ThetaY_mI15_mI10__715->SetBinContent(315,1.17119);
   ThetaY_mI15_mI10__715->SetBinContent(316,1.165241);
   ThetaY_mI15_mI10__715->SetBinContent(317,1.179688);
   ThetaY_mI15_mI10__715->SetBinContent(318,1.163739);
   ThetaY_mI15_mI10__715->SetBinContent(319,1.135751);
   ThetaY_mI15_mI10__715->SetBinContent(320,1.089518);
   ThetaY_mI15_mI10__715->SetBinContent(321,1);
   ThetaY_mI15_mI10__715->SetBinContent(322,0.8748159);
   ThetaY_mI15_mI10__715->SetBinContent(323,0.6756091);
   ThetaY_mI15_mI10__715->SetBinContent(324,0.3480453);
   ThetaY_mI15_mI10__715->SetBinContent(325,0.05912181);
   ThetaY_mI15_mI10__715->SetBinContent(326,0.0001133144);
   ThetaY_mI15_mI10__715->SetBinError(305,2.832861e-05);
   ThetaY_mI15_mI10__715->SetBinError(306,0.001296324);
   ThetaY_mI15_mI10__715->SetBinError(307,0.003149321);
   ThetaY_mI15_mI10__715->SetBinError(308,0.00436757);
   ThetaY_mI15_mI10__715->SetBinError(309,0.004969956);
   ThetaY_mI15_mI10__715->SetBinError(310,0.005355007);
   ThetaY_mI15_mI10__715->SetBinError(311,0.005560207);
   ThetaY_mI15_mI10__715->SetBinError(312,0.005666572);
   ThetaY_mI15_mI10__715->SetBinError(313,0.005731488);
   ThetaY_mI15_mI10__715->SetBinError(314,0.005762558);
   ThetaY_mI15_mI10__715->SetBinError(315,0.00576005);
   ThetaY_mI15_mI10__715->SetBinError(316,0.005745403);
   ThetaY_mI15_mI10__715->SetBinError(317,0.005780911);
   ThetaY_mI15_mI10__715->SetBinError(318,0.0057417);
   ThetaY_mI15_mI10__715->SetBinError(319,0.005672234);
   ThetaY_mI15_mI10__715->SetBinError(320,0.005555587);
   ThetaY_mI15_mI10__715->SetBinError(321,0.005322463);
   ThetaY_mI15_mI10__715->SetBinError(322,0.004978184);
   ThetaY_mI15_mI10__715->SetBinError(323,0.004374822);
   ThetaY_mI15_mI10__715->SetBinError(324,0.003140007);
   ThetaY_mI15_mI10__715->SetBinError(325,0.001294156);
   ThetaY_mI15_mI10__715->SetBinError(326,5.665722e-05);
   ThetaY_mI15_mI10__715->SetEntries(613743);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__715->SetLineColor(ci);
   ThetaY_mI15_mI10__715->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__715->SetMarkerColor(ci);
   ThetaY_mI15_mI10__715->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__715->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__715->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__715->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__715->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__715->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__715->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__715->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__715->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__715->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__715->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__715->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__715->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__715->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__715->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__715->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__715->Draw("AEsame");
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
   
   Double_t _fx3239[22] = {
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
   52.5};
   Double_t _fy3239[22] = {
   0,
   0,
   0,
   0,
   0,
   0.01849967,
   0.2882779,
   0.8888438,
   0.9172709,
   0.8786505,
   0.9625603,
   0.9867598,
   0.9238776,
   0.9268842,
   0.9167492,
   0.9247119,
   1,
   0.7363775,
   0.5876235,
   0.1398931,
   0,
   0};
   Double_t _felx3239[22] = {
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
   Double_t _fely3239[22] = {
   0,
   0,
   0,
   0,
   0,
   0.007991179,
   0.03142478,
   0.05434118,
   0.05458571,
   0.05312745,
   0.05565108,
   0.05649569,
   0.05431571,
   0.05477584,
   0.05513941,
   0.05654163,
   0.06139071,
   0.05624877,
   0.05711022,
   0.03831363,
   0,
   0};
   Double_t _fehx3239[22] = {
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
   Double_t _fehy3239[22] = {
   701.1049,
   0.1162885,
   0.0196957,
   0.01024024,
   0.007908258,
   0.01251639,
   0.03505328,
   0.05777096,
   0.0579363,
   0.05644256,
   0.05896694,
   0.05982818,
   0.05760826,
   0.05811409,
   0.05856144,
   0.06011085,
   0.06528225,
   0.06072068,
   0.06295262,
   0.05058703,
   0.1166787,
   77.27377};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3239,_fy3239,_felx3239,_fehx3239,_fely3239,_fehy3239);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3239 = new TH1F("Graph_Graph3239","",100,-100,100);
   Graph_Graph3239->SetMinimum(0);
   Graph_Graph3239->SetMaximum(1.5);
   Graph_Graph3239->SetDirectory(0);
   Graph_Graph3239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3239->SetLineColor(ci);
   Graph_Graph3239->GetXaxis()->SetRange(1,100);
   Graph_Graph3239->GetXaxis()->CenterTitle(true);
   Graph_Graph3239->GetXaxis()->SetLabelFont(42);
   Graph_Graph3239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3239->GetXaxis()->SetTitleFont(42);
   Graph_Graph3239->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3239->GetYaxis()->CenterTitle(true);
   Graph_Graph3239->GetYaxis()->SetLabelFont(42);
   Graph_Graph3239->GetYaxis()->SetTitleFont(42);
   Graph_Graph3239->GetZaxis()->SetLabelFont(42);
   Graph_Graph3239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3239->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3239);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.297657,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__716 = new TH2D("ThetaY_vs_Y_mI15_mI10__716","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(7940,1);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(7966,2094);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(7992,12359);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8018,23770);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8044,30779);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8070,35733);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8096,38524);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8122,40012);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8148,40934);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8174,41379);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8200,41343);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8226,41133);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8252,41643);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8278,41080);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8304,40092);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8330,38460);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8356,35300);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8382,30881);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8408,23849);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8434,12286);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8460,2087);
   ThetaY_vs_Y_mI15_mI10__716->SetBinContent(8486,4);
   ThetaY_vs_Y_mI15_mI10__716->SetEntries(613743);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__716->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__716->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__716->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__716->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__716->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__716->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__716->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__716->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__716->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__716->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__716->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__716->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__716->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__716->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__716->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__716->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
