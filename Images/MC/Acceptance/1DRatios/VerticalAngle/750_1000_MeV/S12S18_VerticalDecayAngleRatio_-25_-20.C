void S12S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06507219,125,1.236371);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__651 = new TH1D("S12S18_ThetaY_mI25_mI20__651","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(311,0.007722008);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(312,0.1814672);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(313,0.7528958);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(314,0.9266409);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(315,0.8725869);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(316,0.9266409);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(317,0.9266409);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(318,1);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(319,0.9189189);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(320,0.8725869);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(321,0.7490347);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(322,0.8687259);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(323,0.7722008);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(324,0.5752896);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(325,0.3706564);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(326,0.1158301);
   S12S18_ThetaY_mI25_mI20__651->SetBinContent(327,0.01544402);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(311,0.005460284);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(312,0.02646971);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(313,0.05391598);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(314,0.05981441);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(315,0.05804362);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(316,0.05981441);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(317,0.05981441);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(318,0.06213698);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(319,0.05956467);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(320,0.05804362);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(321,0.05377756);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(322,0.05791506);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(323,0.05460284);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(324,0.04712956);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(325,0.03782996);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(326,0.02114759);
   S12S18_ThetaY_mI25_mI20__651->SetBinError(327,0.007722008);
   S12S18_ThetaY_mI25_mI20__651->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__651->SetMaximum(1.106227);
   S12S18_ThetaY_mI25_mI20__651->SetEntries(2811);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__651->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__651->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__651->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__651->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__651->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__651->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__651->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__651->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__651->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__651->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__651->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__651->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__651->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__651->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__651->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__651->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__652 = new TH1D("ThetaY_mI25_mI20__652","",630,-1575,1575);
   ThetaY_mI25_mI20__652->SetBinContent(303,0.0003773992);
   ThetaY_mI25_mI20__652->SetBinContent(304,0.05283589);
   ThetaY_mI25_mI20__652->SetBinContent(305,0.2385163);
   ThetaY_mI25_mI20__652->SetBinContent(306,0.4954173);
   ThetaY_mI25_mI20__652->SetBinContent(307,0.6954389);
   ThetaY_mI25_mI20__652->SetBinContent(308,0.8169075);
   ThetaY_mI25_mI20__652->SetBinContent(309,0.89449);
   ThetaY_mI25_mI20__652->SetBinContent(310,0.9511538);
   ThetaY_mI25_mI20__652->SetBinContent(311,0.9812379);
   ThetaY_mI25_mI20__652->SetBinContent(312,1.001186);
   ThetaY_mI25_mI20__652->SetBinContent(313,0.9932068);
   ThetaY_mI25_mI20__652->SetBinContent(314,0.9978973);
   ThetaY_mI25_mI20__652->SetBinContent(315,0.9909963);
   ThetaY_mI25_mI20__652->SetBinContent(316,1.005661);
   ThetaY_mI25_mI20__652->SetBinContent(317,0.9868989);
   ThetaY_mI25_mI20__652->SetBinContent(318,1);
   ThetaY_mI25_mI20__652->SetBinContent(319,0.9860901);
   ThetaY_mI25_mI20__652->SetBinContent(320,0.9735281);
   ThetaY_mI25_mI20__652->SetBinContent(321,0.9608044);
   ThetaY_mI25_mI20__652->SetBinContent(322,0.887589);
   ThetaY_mI25_mI20__652->SetBinContent(323,0.8218137);
   ThetaY_mI25_mI20__652->SetBinContent(324,0.6863274);
   ThetaY_mI25_mI20__652->SetBinContent(325,0.5002696);
   ThetaY_mI25_mI20__652->SetBinContent(326,0.2380311);
   ThetaY_mI25_mI20__652->SetBinContent(327,0.05305154);
   ThetaY_mI25_mI20__652->SetBinError(303,0.0001426435);
   ThetaY_mI25_mI20__652->SetBinError(304,0.00168778);
   ThetaY_mI25_mI20__652->SetBinError(305,0.003586002);
   ThetaY_mI25_mI20__652->SetBinError(306,0.005168173);
   ThetaY_mI25_mI20__652->SetBinError(307,0.006123235);
   ThetaY_mI25_mI20__652->SetBinError(308,0.006636482);
   ThetaY_mI25_mI20__652->SetBinError(309,0.006944471);
   ThetaY_mI25_mI20__652->SetBinError(310,0.007161052);
   ThetaY_mI25_mI20__652->SetBinError(311,0.007273419);
   ThetaY_mI25_mI20__652->SetBinError(312,0.00734698);
   ThetaY_mI25_mI20__652->SetBinError(313,0.007317644);
   ThetaY_mI25_mI20__652->SetBinError(314,0.007334903);
   ThetaY_mI25_mI20__652->SetBinError(315,0.007309497);
   ThetaY_mI25_mI20__652->SetBinError(316,0.007363381);
   ThetaY_mI25_mI20__652->SetBinError(317,0.00729437);
   ThetaY_mI25_mI20__652->SetBinError(318,0.007342627);
   ThetaY_mI25_mI20__652->SetBinError(319,0.007291381);
   ThetaY_mI25_mI20__652->SetBinError(320,0.007244789);
   ThetaY_mI25_mI20__652->SetBinError(321,0.007197289);
   ThetaY_mI25_mI20__652->SetBinError(322,0.006917631);
   ThetaY_mI25_mI20__652->SetBinError(323,0.00665638);
   ThetaY_mI25_mI20__652->SetBinError(324,0.00608299);
   ThetaY_mI25_mI20__652->SetBinError(325,0.005193421);
   ThetaY_mI25_mI20__652->SetBinError(326,0.003582352);
   ThetaY_mI25_mI20__652->SetBinError(327,0.001691221);
   ThetaY_mI25_mI20__652->SetEntries(337754);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__652->SetLineColor(ci);
   ThetaY_mI25_mI20__652->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__652->SetMarkerColor(ci);
   ThetaY_mI25_mI20__652->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__652->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__652->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__652->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__652->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__652->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__652->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__652->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__652->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__652->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__652->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__652->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__652->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__652->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__652->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__652->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__652->Draw("AEsame");
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
   
   Double_t _fx3218[25] = {
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
   57.5};
   Double_t _fy3218[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007869659,
   0.1812522,
   0.7580453,
   0.9285934,
   0.8805147,
   0.9214248,
   0.9389421,
   1,
   0.9318813,
   0.896314,
   0.7795913,
   0.9787479,
   0.93963,
   0.8382145,
   0.7409133,
   0.4866177,
   0.2911134};
   Double_t _felx3218[25] = {
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
   Double_t _fely3218[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005083246,
   0.02637658,
   0.05452306,
   0.06028419,
   0.05888478,
   0.05981586,
   0.06096036,
   0.06252727,
   0.0607523,
   0.05994786,
   0.05622517,
   0.06564347,
   0.06681828,
   0.06898972,
   0.07587276,
   0.08863601,
   0.1395468};
   Double_t _fehx3218[25] = {
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
   Double_t _fehy3218[25] = {
   21.54366,
   0.1346599,
   0.02980791,
   0.01434933,
   0.01022189,
   0.008701871,
   0.007947083,
   0.007473621,
   0.01038085,
   0.03052738,
   0.05859637,
   0.06433441,
   0.0629643,
   0.06383438,
   0.06505635,
   0.06656836,
   0.06485177,
   0.06410157,
   0.0604376,
   0.0702053,
   0.07175233,
   0.07492182,
   0.08408005,
   0.1064893,
   0.231018};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3218,_fy3218,_felx3218,_fehx3218,_fely3218,_fehy3218);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3218 = new TH1F("Graph_Graph3218","",100,-100,100);
   Graph_Graph3218->SetMinimum(0);
   Graph_Graph3218->SetMaximum(1.5);
   Graph_Graph3218->SetDirectory(0);
   Graph_Graph3218->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3218->SetLineColor(ci);
   Graph_Graph3218->GetXaxis()->SetRange(1,100);
   Graph_Graph3218->GetXaxis()->CenterTitle(true);
   Graph_Graph3218->GetXaxis()->SetLabelFont(42);
   Graph_Graph3218->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3218->GetXaxis()->SetTitleFont(42);
   Graph_Graph3218->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3218->GetYaxis()->CenterTitle(true);
   Graph_Graph3218->GetYaxis()->SetLabelFont(42);
   Graph_Graph3218->GetYaxis()->SetTitleFont(42);
   Graph_Graph3218->GetZaxis()->SetLabelFont(42);
   Graph_Graph3218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3218->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3218);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106227,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__653 = new TH2D("ThetaY_vs_Y_mI25_mI20__653","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(7886,7);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(7912,980);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(7938,4424);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(7964,9189);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(7990,12899);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8016,15152);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8042,16591);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8068,17642);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8094,18200);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8120,18570);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8146,18422);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8172,18509);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8198,18381);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8224,18653);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8250,18305);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8276,18548);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8302,18290);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8328,18057);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8354,17821);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8380,16463);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8406,15243);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8432,12730);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8458,9279);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8484,4415);
   ThetaY_vs_Y_mI25_mI20__653->SetBinContent(8510,984);
   ThetaY_vs_Y_mI25_mI20__653->SetEntries(337754);
   ThetaY_vs_Y_mI25_mI20__653->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(1,932.65);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(2,1865.3);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(3,2797.95);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(4,3730.6);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(5,4663.25);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(6,5595.9);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(7,6528.55);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(8,7461.2);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(9,8393.85);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(10,9326.5);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(11,10259.15);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(12,11191.8);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(13,12124.45);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(14,13057.1);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(15,13989.75);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(16,14922.4);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(17,15855.05);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(18,16787.7);
   ThetaY_vs_Y_mI25_mI20__653->SetContourLevel(19,17720.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__653->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__653->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__653->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__653->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__653->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__653->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__653->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__653->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__653->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__653->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__653->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__653->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__653->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__653->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__653->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__653->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
