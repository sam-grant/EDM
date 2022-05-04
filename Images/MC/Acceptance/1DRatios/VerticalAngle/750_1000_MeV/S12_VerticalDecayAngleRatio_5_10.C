void S12_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06509799,125,1.236862);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__555 = new TH1D("S12_ThetaY_5_10__555","",630,-1575,1575);
   S12_ThetaY_5_10__555->SetBinContent(305,0.003257329);
   S12_ThetaY_5_10__555->SetBinContent(306,0.02931596);
   S12_ThetaY_5_10__555->SetBinContent(307,0.1889251);
   S12_ThetaY_5_10__555->SetBinContent(308,0.5667752);
   S12_ThetaY_5_10__555->SetBinContent(309,0.7850163);
   S12_ThetaY_5_10__555->SetBinContent(310,0.8273616);
   S12_ThetaY_5_10__555->SetBinContent(311,0.9185668);
   S12_ThetaY_5_10__555->SetBinContent(312,0.7980456);
   S12_ThetaY_5_10__555->SetBinContent(313,0.8078176);
   S12_ThetaY_5_10__555->SetBinContent(314,1);
   S12_ThetaY_5_10__555->SetBinContent(315,0.8599349);
   S12_ThetaY_5_10__555->SetBinContent(316,0.8599349);
   S12_ThetaY_5_10__555->SetBinContent(317,0.7980456);
   S12_ThetaY_5_10__555->SetBinContent(318,0.9022801);
   S12_ThetaY_5_10__555->SetBinContent(319,0.8794788);
   S12_ThetaY_5_10__555->SetBinContent(320,0.8013029);
   S12_ThetaY_5_10__555->SetBinContent(321,0.3843648);
   S12_ThetaY_5_10__555->SetBinContent(322,0.06514658);
   S12_ThetaY_5_10__555->SetBinContent(323,0.003257329);
   S12_ThetaY_5_10__555->SetBinError(305,0.003257329);
   S12_ThetaY_5_10__555->SetBinError(306,0.009771987);
   S12_ThetaY_5_10__555->SetBinError(307,0.02480708);
   S12_ThetaY_5_10__555->SetBinError(308,0.04296712);
   S12_ThetaY_5_10__555->SetBinError(309,0.05056734);
   S12_ThetaY_5_10__555->SetBinError(310,0.05191328);
   S12_ThetaY_5_10__555->SetBinError(311,0.05469986);
   S12_ThetaY_5_10__555->SetBinError(312,0.05098526);
   S12_ThetaY_5_10__555->SetBinError(313,0.05129647);
   S12_ThetaY_5_10__555->SetBinError(314,0.05707301);
   S12_ThetaY_5_10__555->SetBinError(315,0.05292533);
   S12_ThetaY_5_10__555->SetBinError(316,0.05292533);
   S12_ThetaY_5_10__555->SetBinError(317,0.05098526);
   S12_ThetaY_5_10__555->SetBinError(318,0.05421276);
   S12_ThetaY_5_10__555->SetBinError(319,0.05352338);
   S12_ThetaY_5_10__555->SetBinError(320,0.05108921);
   S12_ThetaY_5_10__555->SetBinError(321,0.03538365);
   S12_ThetaY_5_10__555->SetBinError(322,0.01456722);
   S12_ThetaY_5_10__555->SetBinError(323,0.003257329);
   S12_ThetaY_5_10__555->SetMinimum(0);
   S12_ThetaY_5_10__555->SetMaximum(1.106666);
   S12_ThetaY_5_10__555->SetEntries(3524);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__555->SetLineColor(ci);
   S12_ThetaY_5_10__555->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__555->SetMarkerColor(ci);
   S12_ThetaY_5_10__555->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__555->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__555->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__555->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__555->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__555->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__555->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__555->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__555->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__555->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__555->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__555->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__555->Draw("AE");
   
   TH1D *ThetaY_5_10__556 = new TH1D("ThetaY_5_10__556","",630,-1575,1575);
   ThetaY_5_10__556->SetBinContent(303,0.0003773501);
   ThetaY_5_10__556->SetBinContent(304,0.05149719);
   ThetaY_5_10__556->SetBinContent(305,0.2401057);
   ThetaY_5_10__556->SetBinContent(306,0.5059599);
   ThetaY_5_10__556->SetBinContent(307,0.688109);
   ThetaY_5_10__556->SetBinContent(308,0.8179397);
   ThetaY_5_10__556->SetBinContent(309,0.8924552);
   ThetaY_5_10__556->SetBinContent(310,0.943908);
   ThetaY_5_10__556->SetBinContent(311,0.9879914);
   ThetaY_5_10__556->SetBinContent(312,0.9869481);
   ThetaY_5_10__556->SetBinContent(313,0.992342);
   ThetaY_5_10__556->SetBinContent(314,1);
   ThetaY_5_10__556->SetBinContent(315,0.999889);
   ThetaY_5_10__556->SetBinContent(316,1.000244);
   ThetaY_5_10__556->SetBinContent(317,0.9937626);
   ThetaY_5_10__556->SetBinContent(318,0.9907216);
   ThetaY_5_10__556->SetBinContent(319,1.00606);
   ThetaY_5_10__556->SetBinContent(320,0.9861712);
   ThetaY_5_10__556->SetBinContent(321,0.9471932);
   ThetaY_5_10__556->SetBinContent(322,0.8976271);
   ThetaY_5_10__556->SetBinContent(323,0.8162305);
   ThetaY_5_10__556->SetBinContent(324,0.6968547);
   ThetaY_5_10__556->SetBinContent(325,0.503829);
   ThetaY_5_10__556->SetBinContent(326,0.2399725);
   ThetaY_5_10__556->SetBinContent(327,0.05225189);
   ThetaY_5_10__556->SetBinContent(328,0.0003995472);
   ThetaY_5_10__556->SetBinError(303,9.152085e-05);
   ThetaY_5_10__556->SetBinError(304,0.001069152);
   ThetaY_5_10__556->SetBinError(305,0.002308602);
   ThetaY_5_10__556->SetBinError(306,0.003351242);
   ThetaY_5_10__556->SetBinError(307,0.003908197);
   ThetaY_5_10__556->SetBinError(308,0.004260969);
   ThetaY_5_10__556->SetBinError(309,0.00445083);
   ThetaY_5_10__556->SetBinError(310,0.004577334);
   ThetaY_5_10__556->SetBinError(311,0.004683002);
   ThetaY_5_10__556->SetBinError(312,0.004680529);
   ThetaY_5_10__556->SetBinError(313,0.004693302);
   ThetaY_5_10__556->SetBinError(314,0.004711376);
   ThetaY_5_10__556->SetBinError(315,0.004711115);
   ThetaY_5_10__556->SetBinError(316,0.004711951);
   ThetaY_5_10__556->SetBinError(317,0.00469666);
   ThetaY_5_10__556->SetBinError(318,0.004689468);
   ThetaY_5_10__556->SetBinError(319,0.00472563);
   ThetaY_5_10__556->SetBinError(320,0.004678687);
   ThetaY_5_10__556->SetBinError(321,0.004585293);
   ThetaY_5_10__556->SetBinError(322,0.004463708);
   ThetaY_5_10__556->SetBinError(323,0.004256515);
   ThetaY_5_10__556->SetBinError(324,0.003932954);
   ThetaY_5_10__556->SetBinError(325,0.003344178);
   ThetaY_5_10__556->SetBinError(326,0.002307961);
   ThetaY_5_10__556->SetBinError(327,0.001076958);
   ThetaY_5_10__556->SetBinError(328,9.417417e-05);
   ThetaY_5_10__556->SetEntries(821678);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__556->SetLineColor(ci);
   ThetaY_5_10__556->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__556->SetMarkerColor(ci);
   ThetaY_5_10__556->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__556->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__556->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__556->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__556->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__556->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__556->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__556->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__556->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__556->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__556->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__556->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__556->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__556->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__556->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__556->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__556->Draw("AEsame");
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
   
   Double_t _fx3186[26] = {
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
   Double_t _fy3186[26] = {
   0,
   0,
   0.01356623,
   0.05794127,
   0.2745569,
   0.6929304,
   0.8796142,
   0.8765277,
   0.9297316,
   0.8085993,
   0.8140516,
   1,
   0.8600303,
   0.8597249,
   0.8030546,
   0.9107302,
   0.8741815,
   0.8125394,
   0.4057935,
   0.07257644,
   0.003990697,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3186[26] = {
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
   Double_t _fely3186[26] = {
   0,
   0,
   0.01122281,
   0.01895314,
   0.0359799,
   0.05260349,
   0.05679038,
   0.05512532,
   0.05550629,
   0.05176573,
   0.0518,
   0.05723535,
   0.0530519,
   0.05303301,
   0.0514098,
   0.05485629,
   0.05332561,
   0.05191297,
   0.03735444,
   0.01609562,
   0.003301307,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3186[26] = {
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
   Double_t _fehy3186[26] = {
   16.78434,
   0.1164955,
   0.03120067,
   0.02646877,
   0.04103618,
   0.05675844,
   0.06058238,
   0.05870758,
   0.05892464,
   0.05519201,
   0.05520713,
   0.06061023,
   0.05643119,
   0.05641109,
   0.05481244,
   0.05826565,
   0.05668338,
   0.05534182,
   0.04096308,
   0.02013369,
   0.009177127,
   0.008605796,
   0.01190296,
   0.02499172,
   0.1148123,
   15.80343};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3186,_fy3186,_felx3186,_fehx3186,_fely3186,_fehy3186);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3186 = new TH1F("Graph_Graph3186","",100,-100,100);
   Graph_Graph3186->SetMinimum(0);
   Graph_Graph3186->SetMaximum(1.5);
   Graph_Graph3186->SetDirectory(0);
   Graph_Graph3186->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3186->SetLineColor(ci);
   Graph_Graph3186->GetXaxis()->SetRange(1,100);
   Graph_Graph3186->GetXaxis()->CenterTitle(true);
   Graph_Graph3186->GetXaxis()->SetLabelFont(42);
   Graph_Graph3186->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3186->GetXaxis()->SetTitleFont(42);
   Graph_Graph3186->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3186->GetYaxis()->CenterTitle(true);
   Graph_Graph3186->GetYaxis()->SetLabelFont(42);
   Graph_Graph3186->GetYaxis()->SetTitleFont(42);
   Graph_Graph3186->GetZaxis()->SetLabelFont(42);
   Graph_Graph3186->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3186->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3186);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106666,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__557 = new TH2D("ThetaY_vs_Y_5_10__557","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__557->SetBinContent(7892,17);
   ThetaY_vs_Y_5_10__557->SetBinContent(7918,2320);
   ThetaY_vs_Y_5_10__557->SetBinContent(7944,10817);
   ThetaY_vs_Y_5_10__557->SetBinContent(7970,22794);
   ThetaY_vs_Y_5_10__557->SetBinContent(7996,31000);
   ThetaY_vs_Y_5_10__557->SetBinContent(8022,36849);
   ThetaY_vs_Y_5_10__557->SetBinContent(8048,40206);
   ThetaY_vs_Y_5_10__557->SetBinContent(8074,42524);
   ThetaY_vs_Y_5_10__557->SetBinContent(8100,44510);
   ThetaY_vs_Y_5_10__557->SetBinContent(8126,44463);
   ThetaY_vs_Y_5_10__557->SetBinContent(8152,44706);
   ThetaY_vs_Y_5_10__557->SetBinContent(8178,45051);
   ThetaY_vs_Y_5_10__557->SetBinContent(8204,45046);
   ThetaY_vs_Y_5_10__557->SetBinContent(8230,45062);
   ThetaY_vs_Y_5_10__557->SetBinContent(8256,44770);
   ThetaY_vs_Y_5_10__557->SetBinContent(8282,44633);
   ThetaY_vs_Y_5_10__557->SetBinContent(8308,45324);
   ThetaY_vs_Y_5_10__557->SetBinContent(8334,44428);
   ThetaY_vs_Y_5_10__557->SetBinContent(8360,42672);
   ThetaY_vs_Y_5_10__557->SetBinContent(8386,40439);
   ThetaY_vs_Y_5_10__557->SetBinContent(8412,36772);
   ThetaY_vs_Y_5_10__557->SetBinContent(8438,31394);
   ThetaY_vs_Y_5_10__557->SetBinContent(8464,22698);
   ThetaY_vs_Y_5_10__557->SetBinContent(8490,10811);
   ThetaY_vs_Y_5_10__557->SetBinContent(8516,2354);
   ThetaY_vs_Y_5_10__557->SetBinContent(8542,18);
   ThetaY_vs_Y_5_10__557->SetEntries(821678);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__557->SetLineColor(ci);
   ThetaY_vs_Y_5_10__557->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__557->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__557->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__557->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__557->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__557->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__557->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__557->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__557->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__557->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__557->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__557->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__557->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__557->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__557->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
