void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08801183,125,1.672225);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__765 = new TH1D("S18_ThetaY_mI25_mI20__765","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__765->SetBinContent(312,0.05042017);
   S18_ThetaY_mI25_mI20__765->SetBinContent(313,0.7142857);
   S18_ThetaY_mI25_mI20__765->SetBinContent(314,1.184874);
   S18_ThetaY_mI25_mI20__765->SetBinContent(315,1.193277);
   S18_ThetaY_mI25_mI20__765->SetBinContent(316,1.193277);
   S18_ThetaY_mI25_mI20__765->SetBinContent(317,0.9243697);
   S18_ThetaY_mI25_mI20__765->SetBinContent(318,1.277311);
   S18_ThetaY_mI25_mI20__765->SetBinContent(319,1.067227);
   S18_ThetaY_mI25_mI20__765->SetBinContent(320,1.109244);
   S18_ThetaY_mI25_mI20__765->SetBinContent(321,1);
   S18_ThetaY_mI25_mI20__765->SetBinContent(322,1);
   S18_ThetaY_mI25_mI20__765->SetBinContent(323,0.6386555);
   S18_ThetaY_mI25_mI20__765->SetBinContent(324,0.2773109);
   S18_ThetaY_mI25_mI20__765->SetBinContent(325,0.02521008);
   S18_ThetaY_mI25_mI20__765->SetBinError(312,0.02058395);
   S18_ThetaY_mI25_mI20__765->SetBinError(313,0.07747516);
   S18_ThetaY_mI25_mI20__765->SetBinError(314,0.09978439);
   S18_ThetaY_mI25_mI20__765->SetBinError(315,0.1001376);
   S18_ThetaY_mI25_mI20__765->SetBinError(316,0.1001376);
   S18_ThetaY_mI25_mI20__765->SetBinError(317,0.0881352);
   S18_ThetaY_mI25_mI20__765->SetBinError(318,0.1036036);
   S18_ThetaY_mI25_mI20__765->SetBinError(319,0.09470107);
   S18_ThetaY_mI25_mI20__765->SetBinError(320,0.09654727);
   S18_ThetaY_mI25_mI20__765->SetBinError(321,0.09166985);
   S18_ThetaY_mI25_mI20__765->SetBinError(322,0.09166985);
   S18_ThetaY_mI25_mI20__765->SetBinError(323,0.07325881);
   S18_ThetaY_mI25_mI20__765->SetBinError(324,0.04827364);
   S18_ThetaY_mI25_mI20__765->SetBinError(325,0.01455505);
   S18_ThetaY_mI25_mI20__765->SetMinimum(0);
   S18_ThetaY_mI25_mI20__765->SetMaximum(1.496201);
   S18_ThetaY_mI25_mI20__765->SetEntries(1387);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__765->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__765->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__765->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__765->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__765->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__765->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__765->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__765->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__765->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__765->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__765->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__765->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__765->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__765->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__765->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__765->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__766 = new TH1D("ThetaY_mI25_mI20__766","",630,-1575,1575);
   ThetaY_mI25_mI20__766->SetBinContent(305,6.527415e-05);
   ThetaY_mI25_mI20__766->SetBinContent(306,0.06977807);
   ThetaY_mI25_mI20__766->SetBinContent(307,0.4026762);
   ThetaY_mI25_mI20__766->SetBinContent(308,0.7902089);
   ThetaY_mI25_mI20__766->SetBinContent(309,1.008355);
   ThetaY_mI25_mI20__766->SetBinContent(310,1.160901);
   ThetaY_mI25_mI20__766->SetBinContent(311,1.252611);
   ThetaY_mI25_mI20__766->SetBinContent(312,1.308943);
   ThetaY_mI25_mI20__766->SetBinContent(313,1.335444);
   ThetaY_mI25_mI20__766->SetBinContent(314,1.3453);
   ThetaY_mI25_mI20__766->SetBinContent(315,1.35705);
   ThetaY_mI25_mI20__766->SetBinContent(316,1.360183);
   ThetaY_mI25_mI20__766->SetBinContent(317,1.347715);
   ThetaY_mI25_mI20__766->SetBinContent(318,1.359269);
   ThetaY_mI25_mI20__766->SetBinContent(319,1.288903);
   ThetaY_mI25_mI20__766->SetBinContent(320,1.250653);
   ThetaY_mI25_mI20__766->SetBinContent(321,1.15953);
   ThetaY_mI25_mI20__766->SetBinContent(322,1);
   ThetaY_mI25_mI20__766->SetBinContent(323,0.7779373);
   ThetaY_mI25_mI20__766->SetBinContent(324,0.4098564);
   ThetaY_mI25_mI20__766->SetBinContent(325,0.06879896);
   ThetaY_mI25_mI20__766->SetBinContent(326,0.0001305483);
   ThetaY_mI25_mI20__766->SetBinError(305,6.527415e-05);
   ThetaY_mI25_mI20__766->SetBinError(306,0.002134175);
   ThetaY_mI25_mI20__766->SetBinError(307,0.005126826);
   ThetaY_mI25_mI20__766->SetBinError(308,0.007181937);
   ThetaY_mI25_mI20__766->SetBinError(309,0.008112923);
   ThetaY_mI25_mI20__766->SetBinError(310,0.008704988);
   ThetaY_mI25_mI20__766->SetBinError(311,0.009042296);
   ThetaY_mI25_mI20__766->SetBinError(312,0.009243382);
   ThetaY_mI25_mI20__766->SetBinError(313,0.009336486);
   ThetaY_mI25_mI20__766->SetBinError(314,0.009370877);
   ThetaY_mI25_mI20__766->SetBinError(315,0.009411709);
   ThetaY_mI25_mI20__766->SetBinError(316,0.009422567);
   ThetaY_mI25_mI20__766->SetBinError(317,0.009379285);
   ThetaY_mI25_mI20__766->SetBinError(318,0.009419402);
   ThetaY_mI25_mI20__766->SetBinError(319,0.009172354);
   ThetaY_mI25_mI20__766->SetBinError(320,0.009035225);
   ThetaY_mI25_mI20__766->SetBinError(321,0.008699847);
   ThetaY_mI25_mI20__766->SetBinError(322,0.008079242);
   ThetaY_mI25_mI20__766->SetBinError(323,0.007125953);
   ThetaY_mI25_mI20__766->SetBinError(324,0.005172333);
   ThetaY_mI25_mI20__766->SetBinError(325,0.002119149);
   ThetaY_mI25_mI20__766->SetBinError(326,9.231159e-05);
   ThetaY_mI25_mI20__766->SetEntries(307232);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__766->SetLineColor(ci);
   ThetaY_mI25_mI20__766->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__766->SetMarkerColor(ci);
   ThetaY_mI25_mI20__766->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__766->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__766->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__766->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__766->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__766->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__766->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__766->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__766->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__766->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__766->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__766->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__766->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__766->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__766->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__766->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__766->Draw("AEsame");
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
   
   Double_t _fx3256[22] = {
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
   Double_t _fy3256[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03851977,
   0.5348676,
   0.8807506,
   0.8793174,
   0.8772919,
   0.685879,
   0.9397043,
   0.8280115,
   0.8869318,
   0.8624184,
   1,
   0.82096,
   0.6766051,
   0.3664312,
   0};
   Double_t _felx3256[22] = {
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
   Double_t _fely3256[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01528103,
   0.05801899,
   0.07433579,
   0.07395327,
   0.07378235,
   0.06546864,
   0.07641177,
   0.0736111,
   0.0773628,
   0.07920838,
   0.09189284,
   0.09425825,
   0.1174806,
   0.1996329,
   0};
   Double_t _fehx3256[22] = {
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
   Double_t _fehy3256[22] = {
   682.7022,
   0.221905,
   0.03842561,
   0.01957957,
   0.0153435,
   0.01332721,
   0.01235141,
   0.02301234,
   0.0646849,
   0.08089503,
   0.0804547,
   0.08026869,
   0.07204076,
   0.08289698,
   0.0804694,
   0.08442857,
   0.08684508,
   0.1007583,
   0.1057647,
   0.139916,
   0.3574392,
   194.4703};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3256,_fy3256,_felx3256,_fehx3256,_fely3256,_fehy3256);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3256 = new TH1F("Graph_Graph3256","",100,-100,100);
   Graph_Graph3256->SetMinimum(0);
   Graph_Graph3256->SetMaximum(1.5);
   Graph_Graph3256->SetDirectory(0);
   Graph_Graph3256->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3256->SetLineColor(ci);
   Graph_Graph3256->GetXaxis()->SetRange(1,100);
   Graph_Graph3256->GetXaxis()->CenterTitle(true);
   Graph_Graph3256->GetXaxis()->SetLabelFont(42);
   Graph_Graph3256->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3256->GetXaxis()->SetTitleFont(42);
   Graph_Graph3256->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3256->GetYaxis()->CenterTitle(true);
   Graph_Graph3256->GetYaxis()->SetLabelFont(42);
   Graph_Graph3256->GetYaxis()->SetTitleFont(42);
   Graph_Graph3256->GetZaxis()->SetLabelFont(42);
   Graph_Graph3256->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3256->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3256);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.496201,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__767 = new TH2D("ThetaY_vs_Y_mI25_mI20__767","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(7938,1);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(7964,1069);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(7990,6169);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8016,12106);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8042,15448);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8068,17785);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8094,19190);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8120,20053);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8146,20459);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8172,20610);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8198,20790);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8224,20838);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8250,20647);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8276,20824);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8302,19746);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8328,19160);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8354,17764);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8380,15320);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8406,11918);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8432,6279);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8458,1054);
   ThetaY_vs_Y_mI25_mI20__767->SetBinContent(8484,2);
   ThetaY_vs_Y_mI25_mI20__767->SetEntries(307232);
   ThetaY_vs_Y_mI25_mI20__767->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(1,1041.9);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(2,2083.8);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(3,3125.7);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(4,4167.6);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(5,5209.5);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(6,6251.4);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(7,7293.3);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(8,8335.2);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(9,9377.1);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(10,10419);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(11,11460.9);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(12,12502.8);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(13,13544.7);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(14,14586.6);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(15,15628.5);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(16,16670.4);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(17,17712.3);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(18,18754.2);
   ThetaY_vs_Y_mI25_mI20__767->SetContourLevel(19,19796.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__767->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__767->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__767->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__767->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__767->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__767->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__767->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__767->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__767->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__767->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__767->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__767->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__767->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__767->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__767->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__767->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
