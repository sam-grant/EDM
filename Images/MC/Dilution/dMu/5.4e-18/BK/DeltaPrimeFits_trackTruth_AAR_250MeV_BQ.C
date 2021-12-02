void DeltaPrimeFits_trackTruth_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 16 18:44:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(492.7419,-0.4375,2815.323,3.9375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1007[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1007[7] = {
   1.844529,
   1.718581,
   1.509673,
   1.808236,
   1.792567,
   1.743933,
   2.163111};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.3156206,
   0.2095355,
   0.1769205,
   0.1718171,
   0.1955545,
   0.2724608,
   0.5589666};
   TGraphErrors *gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,725,2525);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(3.5);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1007->GetXaxis()->CenterTitle(true);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph1007->GetYaxis()->CenterTitle(true);
   Graph_Graph1007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *pol01008 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01008->SetFillColor(19);
   pol01008->SetFillStyle(0);
   pol01008->SetLineColor(55);
   pol01008->SetLineWidth(2);
   pol01008->SetChisquare(2.597638);
   pol01008->SetNDF(6);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,1.727955);
   pol01008->SetParError(0,0.08407879);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
   gre->Draw("ap");
   
   TF1 *pol01009 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01009->SetFillColor(19);
   pol01009->SetFillStyle(0);
   pol01009->SetLineColor(55);
   pol01009->SetLineWidth(2);
   pol01009->SetChisquare(2.597638);
   pol01009->SetNDF(6);
   pol01009->GetXaxis()->SetLabelFont(42);
   pol01009->GetXaxis()->SetTitleOffset(1);
   pol01009->GetXaxis()->SetTitleFont(42);
   pol01009->GetYaxis()->SetLabelFont(42);
   pol01009->GetYaxis()->SetTitleFont(42);
   pol01009->SetParameter(0,1.727955);
   pol01009->SetParError(0,0.08407879);
   pol01009->SetParLimits(0,0,0);
   pol01009->Draw("same");
   
   Double_t _fx1009[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1009[7] = {
   1.790212,
   1.667516,
   1.464857,
   1.755027,
   1.740888,
   1.696075,
   2.114424};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.3063264,
   0.2033095,
   0.1716685,
   0.1667612,
   0.1899168,
   0.2649838,
   0.5463854};
   gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,725,2525);
   Graph_Graph1009->SetMinimum(1.156426);
   Graph_Graph1009->SetMaximum(2.797571);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(56);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(2.644037);
   pol01010->SetNDF(6);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,1.677616);
   pol01010->SetParError(0,0.08163387);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("p ");
   
   TF1 *pol01011 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01011->SetFillColor(19);
   pol01011->SetFillStyle(0);
   pol01011->SetLineColor(56);
   pol01011->SetLineWidth(2);
   pol01011->SetChisquare(2.644037);
   pol01011->SetNDF(6);
   pol01011->GetXaxis()->SetLabelFont(42);
   pol01011->GetXaxis()->SetTitleOffset(1);
   pol01011->GetXaxis()->SetTitleFont(42);
   pol01011->GetYaxis()->SetLabelFont(42);
   pol01011->GetYaxis()->SetTitleFont(42);
   pol01011->SetParameter(0,1.677616);
   pol01011->SetParError(0,0.08163387);
   pol01011->SetParLimits(0,0,0);
   pol01011->Draw("same");
   
   Double_t _fx1011[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1011[7] = {
   1.73475,
   1.634899,
   1.441666,
   1.725245,
   1.699712,
   1.625693,
   1.896735};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.2968362,
   0.1993326,
   0.1689507,
   0.1639313,
   0.1854248,
   0.2539878,
   0.4901327};
   gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(58);
   gre->SetMarkerColor(58);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,725,2525);
   Graph_Graph1011->SetMinimum(1.1613);
   Graph_Graph1011->SetMaximum(2.498283);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(58);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(2.131889);
   pol01012->SetNDF(6);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.638441);
   pol01012->SetParError(0,0.07967927);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("p ");
   
   TF1 *pol01013 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(58);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(2.131889);
   pol01013->SetNDF(6);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.638441);
   pol01013->SetParError(0,0.07967927);
   pol01013->SetParLimits(0,0,0);
   pol01013->Draw("same");
   
   Double_t _fx1013[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1013[7] = {
   1.995625,
   1.786878,
   1.536163,
   1.812856,
   1.774052,
   1.698654,
   2.028269};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.341475,
   0.2178625,
   0.180025,
   0.1722561,
   0.1935347,
   0.2653867,
   0.5241222};
   gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(59);
   gre->SetMarkerColor(59);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,725,2525);
   Graph_Graph1013->SetMinimum(1.236513);
   Graph_Graph1013->SetMaximum(2.672016);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *pol01014 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01014->SetFillColor(19);
   pol01014->SetFillStyle(0);
   pol01014->SetLineColor(59);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(2.421632);
   pol01014->SetNDF(6);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.745169);
   pol01014->SetParError(0,0.08489871);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("p ");
   
   TF1 *pol01015 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01015->SetFillColor(19);
   pol01015->SetFillStyle(0);
   pol01015->SetLineColor(59);
   pol01015->SetLineWidth(2);
   pol01015->SetChisquare(2.421632);
   pol01015->SetNDF(6);
   pol01015->GetXaxis()->SetLabelFont(42);
   pol01015->GetXaxis()->SetTitleOffset(1);
   pol01015->GetXaxis()->SetTitleFont(42);
   pol01015->GetYaxis()->SetLabelFont(42);
   pol01015->GetYaxis()->SetTitleFont(42);
   pol01015->SetParameter(0,1.745169);
   pol01015->SetParError(0,0.08489871);
   pol01015->SetParLimits(0,0,0);
   pol01015->Draw("same");
   
   Double_t _fx1015[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1015[7] = {
   1.978628,
   1.737791,
   1.480637,
   1.739289,
   1.698914,
   1.628927,
   1.96722};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.3385665,
   0.2118776,
   0.1735177,
   0.1652658,
   0.1853378,
   0.2544929,
   0.5083466};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(61);
   gre->SetMarkerColor(61);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,725,2525);
   Graph_Graph1015->SetMinimum(1.190274);
   Graph_Graph1015->SetMaximum(2.592411);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *pol01016 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01016->SetFillColor(19);
   pol01016->SetFillStyle(0);
   pol01016->SetLineColor(61);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(2.670429);
   pol01016->SetNDF(6);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,1.682112);
   pol01016->SetParError(0,0.08185523);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("p ");
   
   TF1 *pol01017 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01017->SetFillColor(19);
   pol01017->SetFillStyle(0);
   pol01017->SetLineColor(61);
   pol01017->SetLineWidth(2);
   pol01017->SetChisquare(2.670429);
   pol01017->SetNDF(6);
   pol01017->GetXaxis()->SetLabelFont(42);
   pol01017->GetXaxis()->SetTitleOffset(1);
   pol01017->GetXaxis()->SetTitleFont(42);
   pol01017->GetYaxis()->SetLabelFont(42);
   pol01017->GetYaxis()->SetTitleFont(42);
   pol01017->SetParameter(0,1.682112);
   pol01017->SetParError(0,0.08185523);
   pol01017->SetParLimits(0,0,0);
   pol01017->Draw("same");
   
   Double_t _fx1017[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1017[7] = {
   1.841232,
   1.677536,
   1.45087,
   1.71175,
   1.663876,
   1.563036,
   1.74658};
   Double_t _fex1017[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[7] = {
   0.3150564,
   0.2045312,
   0.1700293,
   0.1626491,
   0.1815154,
   0.2441987,
   0.4513314};
   gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(62);
   gre->SetMarkerColor(62);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,725,2525);
   Graph_Graph1017->SetMinimum(1.189134);
   Graph_Graph1017->SetMaximum(2.289619);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *pol01018 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01018->SetFillColor(19);
   pol01018->SetFillStyle(0);
   pol01018->SetLineColor(62);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(2.040257);
   pol01018->SetNDF(6);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.634015);
   pol01018->SetParError(0,0.07945545);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("p ");
   
   TF1 *pol01019 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01019->SetFillColor(19);
   pol01019->SetFillStyle(0);
   pol01019->SetLineColor(62);
   pol01019->SetLineWidth(2);
   pol01019->SetChisquare(2.040257);
   pol01019->SetNDF(6);
   pol01019->GetXaxis()->SetLabelFont(42);
   pol01019->GetXaxis()->SetTitleOffset(1);
   pol01019->GetXaxis()->SetTitleFont(42);
   pol01019->GetYaxis()->SetLabelFont(42);
   pol01019->GetYaxis()->SetTitleFont(42);
   pol01019->SetParameter(0,1.634015);
   pol01019->SetParError(0,0.07945545);
   pol01019->SetParLimits(0,0,0);
   pol01019->Draw("same");
   
   Double_t _fx1019[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1019[7] = {
   2.072282,
   1.830689,
   1.557886,
   1.818358,
   1.751928,
   1.629566,
   1.785627};
   Double_t _fex1019[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[7] = {
   0.3545919,
   0.2232041,
   0.1825707,
   0.1727789,
   0.1911212,
   0.2545928,
   0.4614215};
   gre = new TGraphErrors(7,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(64);
   gre->SetMarkerColor(64);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,725,2525);
   Graph_Graph1019->SetMinimum(1.213939);
   Graph_Graph1019->SetMaximum(2.537141);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   
   TF1 *pol01020 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01020->SetFillColor(19);
   pol01020->SetFillStyle(0);
   pol01020->SetLineColor(64);
   pol01020->SetLineWidth(2);
   pol01020->SetChisquare(2.444187);
   pol01020->SetNDF(6);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,1.743318);
   pol01020->SetParError(0,0.08481093);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("p ");
   
   TF1 *pol01021 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01021->SetFillColor(19);
   pol01021->SetFillStyle(0);
   pol01021->SetLineColor(64);
   pol01021->SetLineWidth(2);
   pol01021->SetChisquare(2.444187);
   pol01021->SetNDF(6);
   pol01021->GetXaxis()->SetLabelFont(42);
   pol01021->GetXaxis()->SetTitleOffset(1);
   pol01021->GetXaxis()->SetTitleFont(42);
   pol01021->GetYaxis()->SetLabelFont(42);
   pol01021->GetYaxis()->SetTitleFont(42);
   pol01021->SetParameter(0,1.743318);
   pol01021->SetParError(0,0.08481093);
   pol01021->SetParLimits(0,0,0);
   pol01021->Draw("same");
   
   Double_t _fx1021[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1021[7] = {
   2.059233,
   1.798389,
   1.520789,
   1.766718,
   1.694145,
   1.565226,
   1.687375};
   Double_t _fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[7] = {
   0.352359,
   0.219266,
   0.1782232,
   0.1678721,
   0.1848175,
   0.2445408,
   0.4360322};
   gre = new TGraphErrors(7,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(65);
   gre->SetMarkerColor(65);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,725,2525);
   Graph_Graph1021->SetMinimum(1.135317);
   Graph_Graph1021->SetMaximum(2.527616);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *pol01022 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01022->SetFillColor(19);
   pol01022->SetFillStyle(0);
   pol01022->SetLineColor(65);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(2.710759);
   pol01022->SetNDF(6);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.694382);
   pol01022->SetParError(0,0.08245624);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("p ");
   
   TF1 *pol01023 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01023->SetFillColor(19);
   pol01023->SetFillStyle(0);
   pol01023->SetLineColor(65);
   pol01023->SetLineWidth(2);
   pol01023->SetChisquare(2.710759);
   pol01023->SetNDF(6);
   pol01023->GetXaxis()->SetLabelFont(42);
   pol01023->GetXaxis()->SetTitleOffset(1);
   pol01023->GetXaxis()->SetTitleFont(42);
   pol01023->GetYaxis()->SetLabelFont(42);
   pol01023->GetYaxis()->SetTitleFont(42);
   pol01023->SetParameter(0,1.694382);
   pol01023->SetParError(0,0.08245624);
   pol01023->SetParLimits(0,0,0);
   pol01023->Draw("same");
   
   Double_t _fx1023[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1023[7] = {
   1.93473,
   1.736033,
   1.48557,
   1.734457,
   1.663131,
   1.525864,
   1.600123};
   Double_t _fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[7] = {
   0.3310552,
   0.2116633,
   0.1740959,
   0.1648066,
   0.1814342,
   0.2383912,
   0.4134856};
   gre = new TGraphErrors(7,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(67);
   gre->SetMarkerColor(67);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,725,2525);
   Graph_Graph1023->SetMinimum(1.078723);
   Graph_Graph1023->SetMaximum(2.373701);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   
   TF1 *pol01024 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01024->SetFillColor(19);
   pol01024->SetFillStyle(0);
   pol01024->SetLineColor(67);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(2.350424);
   pol01024->SetNDF(6);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,1.65081);
   pol01024->SetParError(0,0.08030155);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("p ");
   
   TF1 *pol01025 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01025->SetFillColor(19);
   pol01025->SetFillStyle(0);
   pol01025->SetLineColor(67);
   pol01025->SetLineWidth(2);
   pol01025->SetChisquare(2.350424);
   pol01025->SetNDF(6);
   pol01025->GetXaxis()->SetLabelFont(42);
   pol01025->GetXaxis()->SetTitleOffset(1);
   pol01025->GetXaxis()->SetTitleFont(42);
   pol01025->GetYaxis()->SetLabelFont(42);
   pol01025->GetYaxis()->SetTitleFont(42);
   pol01025->SetParameter(0,1.65081);
   pol01025->SetParError(0,0.08030155);
   pol01025->SetParLimits(0,0,0);
   pol01025->Draw("same");
   
   Double_t _fx1025[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1025[7] = {
   1.730366,
   1.702639,
   1.53661,
   1.863924,
   1.849706,
   1.770296,
   2.031569};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.296086,
   0.2075918,
   0.1800773,
   0.1771085,
   0.201788,
   0.2765797,
   0.5249751};
   gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(68);
   gre->SetMarkerColor(68);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,725,2525);
   Graph_Graph1025->SetMinimum(1.236531);
   Graph_Graph1025->SetMaximum(2.676546);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *pol01026 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01026->SetFillColor(19);
   pol01026->SetFillStyle(0);
   pol01026->SetLineColor(68);
   pol01026->SetLineWidth(2);
   pol01026->SetChisquare(2.409547);
   pol01026->SetNDF(6);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,1.746133);
   pol01026->SetParError(0,0.0849444);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
   gre->Draw("p ");
   
   TF1 *pol01027 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(68);
   pol01027->SetLineWidth(2);
   pol01027->SetChisquare(2.409547);
   pol01027->SetNDF(6);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,1.746133);
   pol01027->SetParError(0,0.0849444);
   pol01027->SetParLimits(0,0,0);
   pol01027->Draw("same");
   
   Double_t _fx1027[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1027[7] = {
   1.628571,
   1.627073,
   1.481223,
   1.806442,
   1.79854,
   1.723518,
   1.971614};
   Double_t _fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[7] = {
   0.2786677,
   0.1983785,
   0.1735864,
   0.1716466,
   0.1962062,
   0.2692713,
   0.509482};
   gre = new TGraphErrors(7,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(70);
   gre->SetMarkerColor(70);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,725,2525);
   Graph_Graph1027->SetMinimum(1.190291);
   Graph_Graph1027->SetMaximum(2.598441);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *pol01028 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01028->SetFillColor(19);
   pol01028->SetFillStyle(0);
   pol01028->SetLineColor(70);
   pol01028->SetLineWidth(2);
   pol01028->SetChisquare(2.676302);
   pol01028->SetNDF(6);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,1.683291);
   pol01028->SetParError(0,0.08191315);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
   gre->Draw("p ");
   
   TF1 *pol01029 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01029->SetFillColor(19);
   pol01029->SetFillStyle(0);
   pol01029->SetLineColor(70);
   pol01029->SetLineWidth(2);
   pol01029->SetChisquare(2.676302);
   pol01029->SetNDF(6);
   pol01029->GetXaxis()->SetLabelFont(42);
   pol01029->GetXaxis()->SetTitleOffset(1);
   pol01029->GetXaxis()->SetTitleFont(42);
   pol01029->GetYaxis()->SetLabelFont(42);
   pol01029->GetYaxis()->SetTitleFont(42);
   pol01029->SetParameter(0,1.683291);
   pol01029->SetParError(0,0.08191315);
   pol01029->SetParLimits(0,0,0);
   pol01029->Draw("same");
   
   Double_t _fx1029[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1029[7] = {
   1.613083,
   1.603076,
   1.451268,
   1.757209,
   1.730249,
   1.623492,
   1.749027};
   Double_t _fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[7] = {
   0.2760175,
   0.1954527,
   0.170076,
   0.1669685,
   0.1887562,
   0.2536439,
   0.4519637};
   gre = new TGraphErrors(7,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(71);
   gre->SetMarkerColor(71);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,725,2525);
   Graph_Graph1029->SetMinimum(1.189212);
   Graph_Graph1029->SetMaximum(2.292971);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *pol01030 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01030->SetFillColor(19);
   pol01030->SetFillStyle(0);
   pol01030->SetLineColor(71);
   pol01030->SetLineWidth(2);
   pol01030->SetChisquare(2.056071);
   pol01030->SetNDF(6);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,1.634755);
   pol01030->SetParError(0,0.07949289);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
   gre->Draw("p ");
   
   TF1 *pol01031 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(71);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(2.056071);
   pol01031->SetNDF(6);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,1.634755);
   pol01031->SetParError(0,0.07949289);
   pol01031->SetParLimits(0,0,0);
   pol01031->Draw("same");
   
   Double_t _fx1031[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1031[7] = {
   1.87715,
   1.792281,
   1.586536,
   1.894407,
   1.849042,
   1.727287,
   1.867033};
   Double_t _fex1031[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[7] = {
   0.3212025,
   0.2185212,
   0.1859282,
   0.180005,
   0.2017156,
   0.2698601,
   0.4824574};
   gre = new TGraphErrors(7,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(73);
   gre->SetMarkerColor(73);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,725,2525);
   Graph_Graph1031->SetMinimum(1.288084);
   Graph_Graph1031->SetMaximum(2.445982);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *pol01032 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01032->SetFillColor(19);
   pol01032->SetFillStyle(0);
   pol01032->SetLineColor(73);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(1.767423);
   pol01032->SetNDF(6);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,1.78361);
   pol01032->SetParError(0,0.08670166);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("p ");
   
   TF1 *pol01033 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01033->SetFillColor(19);
   pol01033->SetFillStyle(0);
   pol01033->SetLineColor(73);
   pol01033->SetLineWidth(2);
   pol01033->SetChisquare(1.767423);
   pol01033->SetNDF(6);
   pol01033->GetXaxis()->SetLabelFont(42);
   pol01033->GetXaxis()->SetTitleOffset(1);
   pol01033->GetXaxis()->SetTitleFont(42);
   pol01033->GetYaxis()->SetLabelFont(42);
   pol01033->GetYaxis()->SetTitleFont(42);
   pol01033->SetParameter(0,1.78361);
   pol01033->SetParError(0,0.08670166);
   pol01033->SetParLimits(0,0,0);
   pol01033->Draw("same");
   
   Double_t _fx1033[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1033[7] = {
   1.688774,
   1.640596,
   1.461081,
   1.742322,
   1.684619,
   1.535675,
   1.543062};
   Double_t _fex1033[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[7] = {
   0.2889691,
   0.2000272,
   0.1712259,
   0.1655539,
   0.1837783,
   0.239924,
   0.3987406};
   gre = new TGraphErrors(7,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(74);
   gre->SetMarkerColor(74);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,725,2525);
   Graph_Graph1033->SetMinimum(1.060979);
   Graph_Graph1033->SetMaximum(2.061085);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *pol01034 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01034->SetFillColor(19);
   pol01034->SetFillStyle(0);
   pol01034->SetLineColor(74);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(1.758226);
   pol01034->SetNDF(6);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,1.622147);
   pol01034->SetParError(0,0.07885206);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("p ");
   
   TF1 *pol01035 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01035->SetFillColor(19);
   pol01035->SetFillStyle(0);
   pol01035->SetLineColor(74);
   pol01035->SetLineWidth(2);
   pol01035->SetChisquare(1.758226);
   pol01035->SetNDF(6);
   pol01035->GetXaxis()->SetLabelFont(42);
   pol01035->GetXaxis()->SetTitleOffset(1);
   pol01035->GetXaxis()->SetTitleFont(42);
   pol01035->GetYaxis()->SetLabelFont(42);
   pol01035->GetYaxis()->SetTitleFont(42);
   pol01035->SetParameter(0,1.622147);
   pol01035->SetParError(0,0.07885206);
   pol01035->SetParLimits(0,0,0);
   pol01035->Draw("same");
   
   Double_t _fx1035[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1035[7] = {
   1.980445,
   1.839309,
   1.59827,
   1.877116,
   1.797026,
   1.628225,
   1.634188};
   Double_t _fex1035[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1035[7] = {
   0.3388774,
   0.2242551,
   0.1873034,
   0.178362,
   0.196041,
   0.2543833,
   0.4222882};
   gre = new TGraphErrors(7,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(76);
   gre->SetMarkerColor(76);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,725,2525);
   Graph_Graph1035->SetMinimum(1.101157);
   Graph_Graph1035->SetMaximum(2.430064);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   
   TF1 *pol01036 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01036->SetFillColor(19);
   pol01036->SetFillStyle(0);
   pol01036->SetLineColor(76);
   pol01036->SetLineWidth(2);
   pol01036->SetChisquare(2.113137);
   pol01036->SetNDF(6);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,1.765822);
   pol01036->SetParError(0,0.08587209);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
   gre->Draw("p ");
   
   TF1 *pol01037 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01037->SetFillColor(19);
   pol01037->SetFillStyle(0);
   pol01037->SetLineColor(76);
   pol01037->SetLineWidth(2);
   pol01037->SetChisquare(2.113137);
   pol01037->SetNDF(6);
   pol01037->GetXaxis()->SetLabelFont(42);
   pol01037->GetXaxis()->SetTitleOffset(1);
   pol01037->GetXaxis()->SetTitleFont(42);
   pol01037->GetYaxis()->SetLabelFont(42);
   pol01037->GetYaxis()->SetTitleFont(42);
   pol01037->SetParameter(0,1.765822);
   pol01037->SetParError(0,0.08587209);
   pol01037->SetParLimits(0,0,0);
   pol01037->Draw("same");
   
   Double_t _fx1037[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1037[7] = {
   1.957588,
   1.808702,
   1.56345,
   1.824012,
   1.728848,
   1.538667,
   1.478257};
   Double_t _fex1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[7] = {
   0.3349664,
   0.2205234,
   0.1832227,
   0.1733161,
   0.1886033,
   0.2403913,
   0.3819943};
   gre = new TGraphErrors(7,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(77);
   gre->SetMarkerColor(77);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,725,2525);
   Graph_Graph1037->SetMinimum(0.9766332);
   Graph_Graph1037->SetMaximum(2.412184);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *pol01038 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01038->SetFillColor(19);
   pol01038->SetFillStyle(0);
   pol01038->SetLineColor(77);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(2.704282);
   pol01038->SetNDF(6);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,1.707536);
   pol01038->SetParError(0,0.08309574);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("p ");
   
   TF1 *pol01039 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01039->SetFillColor(19);
   pol01039->SetFillStyle(0);
   pol01039->SetLineColor(77);
   pol01039->SetLineWidth(2);
   pol01039->SetChisquare(2.704282);
   pol01039->SetNDF(6);
   pol01039->GetXaxis()->SetLabelFont(42);
   pol01039->GetXaxis()->SetTitleOffset(1);
   pol01039->GetXaxis()->SetTitleFont(42);
   pol01039->GetYaxis()->SetLabelFont(42);
   pol01039->GetYaxis()->SetTitleFont(42);
   pol01039->SetParameter(0,1.707536);
   pol01039->SetParError(0,0.08309574);
   pol01039->SetParLimits(0,0,0);
   pol01039->Draw("same");
   
   Double_t _fx1039[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1039[7] = {
   1.828302,
   1.723664,
   1.506148,
   1.768929,
   1.684068,
   1.503206,
   1.446255};
   Double_t _fex1039[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[7] = {
   0.312844,
   0.2101552,
   0.1765074,
   0.1680822,
   0.1837182,
   0.2348512,
   0.3737248};
   gre = new TGraphErrors(7,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(79);
   gre->SetMarkerColor(79);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,725,2525);
   Graph_Graph1039->SetMinimum(0.9656687);
   Graph_Graph1039->SetMaximum(2.248007);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
   
   TF1 *pol01040 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01040->SetFillColor(19);
   pol01040->SetFillStyle(0);
   pol01040->SetLineColor(79);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(2.334843);
   pol01040->SetNDF(6);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,1.649814);
   pol01040->SetParError(0,0.08025165);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
   gre->Draw("p ");
   
   TF1 *pol01041 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01041->SetFillColor(19);
   pol01041->SetFillStyle(0);
   pol01041->SetLineColor(79);
   pol01041->SetLineWidth(2);
   pol01041->SetChisquare(2.334843);
   pol01041->SetNDF(6);
   pol01041->GetXaxis()->SetLabelFont(42);
   pol01041->GetXaxis()->SetTitleOffset(1);
   pol01041->GetXaxis()->SetTitleFont(42);
   pol01041->GetYaxis()->SetLabelFont(42);
   pol01041->GetYaxis()->SetTitleFont(42);
   pol01041->SetParameter(0,1.649814);
   pol01041->SetParError(0,0.08025165);
   pol01041->SetParLimits(0,0,0);
   pol01041->Draw("same");
   
   Double_t _fx1041[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1041[7] = {
   1.644736,
   1.690739,
   1.558636,
   1.903793,
   1.875641,
   1.73987,
   1.789807};
   Double_t _fex1041[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1041[7] = {
   0.2814338,
   0.2061409,
   0.1826585,
   0.1808969,
   0.2046173,
   0.271826,
   0.4625017};
   gre = new TGraphErrors(7,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(80);
   gre->SetMarkerColor(80);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,725,2525);
   Graph_Graph1041->SetMinimum(1.234805);
   Graph_Graph1041->SetMaximum(2.34481);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   
   TF1 *pol01042 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);
   pol01042->SetLineColor(80);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(2.425128);
   pol01042->SetNDF(6);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,1.744887);
   pol01042->SetParError(0,0.08488533);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p ");
   
   TF1 *pol01043 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);
   pol01043->SetLineColor(80);
   pol01043->SetLineWidth(2);
   pol01043->SetChisquare(2.425128);
   pol01043->SetNDF(6);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetTitleOffset(1);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,1.744887);
   pol01043->SetParError(0,0.08488533);
   pol01043->SetParLimits(0,0,0);
   pol01043->Draw("same");
   
   Double_t _fx1043[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1043[7] = {
   1.564333,
   1.63551,
   1.521664,
   1.866385,
   1.8377,
   1.69137,
   1.691948};
   Double_t _fex1043[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1043[7] = {
   0.2676757,
   0.1994072,
   0.1783257,
   0.1773423,
   0.2004783,
   0.2642487,
   0.437214};
   gre = new TGraphErrors(7,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(82);
   gre->SetMarkerColor(82);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,725,2525);
   Graph_Graph1043->SetMinimum(1.167291);
   Graph_Graph1043->SetMaximum(2.216605);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol01044 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01044->SetFillColor(19);
   pol01044->SetFillStyle(0);
   pol01044->SetLineColor(82);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(2.712785);
   pol01044->SetNDF(6);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,1.696099);
   pol01044->SetParError(0,0.08254);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("p ");
   
   TF1 *pol01045 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);
   pol01045->SetLineColor(82);
   pol01045->SetLineWidth(2);
   pol01045->SetChisquare(2.712785);
   pol01045->SetNDF(6);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetTitleOffset(1);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,1.696099);
   pol01045->SetParError(0,0.08254);
   pol01045->SetParLimits(0,0,0);
   pol01045->Draw("same");
   
   Double_t _fx1045[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1045[7] = {
   1.556885,
   1.609682,
   1.486252,
   1.812022,
   1.774223,
   1.622162,
   1.603479};
   Double_t _fex1045[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[7] = {
   0.2664014,
   0.1962581,
   0.1741758,
   0.1721768,
   0.1935534,
   0.253436,
   0.4143528};
   gre = new TGraphErrors(7,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(83);
   gre->SetMarkerColor(83);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,725,2525);
   Graph_Graph1045->SetMinimum(1.106256);
   Graph_Graph1045->SetMaximum(2.100702);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   
   TF1 *pol01046 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01046->SetFillColor(19);
   pol01046->SetFillStyle(0);
   pol01046->SetLineColor(83);
   pol01046->SetLineWidth(2);
   pol01046->SetChisquare(2.369656);
   pol01046->SetNDF(6);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.65207);
   pol01046->SetParError(0,0.0803647);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p ");
   
   TF1 *pol01047 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);
   pol01047->SetLineColor(83);
   pol01047->SetLineWidth(2);
   pol01047->SetChisquare(2.369656);
   pol01047->SetNDF(6);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetTitleOffset(1);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,1.65207);
   pol01047->SetParError(0,0.0803647);
   pol01047->SetParLimits(0,0,0);
   pol01047->Draw("same");
   
   Double_t _fx1047[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1047[7] = {
   1.718942,
   1.750177,
   1.598753,
   1.931923,
   1.874695,
   1.693935,
   1.636329};
   Double_t _fex1047[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[7] = {
   0.2941312,
   0.2133878,
   0.18736,
   0.1835697,
   0.2045141,
   0.2646494,
   0.4228417};
   gre = new TGraphErrors(7,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(85);
   gre->SetMarkerColor(85);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,725,2525);
   Graph_Graph1047->SetMinimum(1.123287);
   Graph_Graph1047->SetMaximum(2.205693);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *pol01048 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01048->SetFillColor(19);
   pol01048->SetFillStyle(0);
   pol01048->SetLineColor(85);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(2.095461);
   pol01048->SetNDF(6);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,1.766831);
   pol01048->SetParError(0,0.08591936);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
   gre->Draw("p ");
   
   TF1 *pol01049 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);
   pol01049->SetLineColor(85);
   pol01049->SetLineWidth(2);
   pol01049->SetChisquare(2.095461);
   pol01049->SetNDF(6);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetTitleOffset(1);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,1.766831);
   pol01049->SetParError(0,0.08591936);
   pol01049->SetParLimits(0,0,0);
   pol01049->Draw("same");
   
   Double_t _fx1049[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1049[7] = {
   1.61429,
   1.689076,
   1.564104,
   1.898005,
   1.832121,
   1.622795,
   1.480736};
   Double_t _fex1049[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1049[7] = {
   0.2762241,
   0.2059381,
   0.1832993,
   0.1803469,
   0.1998696,
   0.253535,
   0.382635};
   gre = new TGraphErrors(7,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(86);
   gre->SetMarkerColor(86);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,725,2525);
   Graph_Graph1049->SetMinimum(1.000076);
   Graph_Graph1049->SetMaximum(2.176377);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *pol01050 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01050->SetFillColor(19);
   pol01050->SetFillStyle(0);
   pol01050->SetLineColor(86);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(2.701069);
   pol01050->SetNDF(6);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.708788);
   pol01050->SetParError(0,0.08315633);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("p ");
   
   TF1 *pol01051 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01051->SetFillColor(19);
   pol01051->SetFillStyle(0);
   pol01051->SetLineColor(86);
   pol01051->SetLineWidth(2);
   pol01051->SetChisquare(2.701069);
   pol01051->SetNDF(6);
   pol01051->GetXaxis()->SetLabelFont(42);
   pol01051->GetXaxis()->SetTitleOffset(1);
   pol01051->GetXaxis()->SetTitleFont(42);
   pol01051->GetYaxis()->SetLabelFont(42);
   pol01051->GetYaxis()->SetTitleFont(42);
   pol01051->SetParameter(0,1.708788);
   pol01051->SetParError(0,0.08315633);
   pol01051->SetParLimits(0,0,0);
   pol01051->Draw("same");
   
   Double_t _fx1051[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1051[7] = {
   1.60315,
   1.645149,
   1.506577,
   1.817519,
   1.752095,
   1.55904,
   1.447932};
   Double_t _fex1051[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1051[7] = {
   0.2743179,
   0.2005823,
   0.1765577,
   0.1726991,
   0.1911394,
   0.2435743,
   0.3741582};
   gre = new TGraphErrors(7,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(88);
   gre->SetMarkerColor(88);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,725,2525);
   Graph_Graph1051->SetMinimum(0.9821297);
   Graph_Graph1051->SetMaximum(2.081862);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   
   TF1 *pol01052 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01052->SetFillColor(19);
   pol01052->SetFillStyle(0);
   pol01052->SetLineColor(88);
   pol01052->SetLineWidth(2);
   pol01052->SetChisquare(2.346918);
   pol01052->SetNDF(6);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,1.650584);
   pol01052->SetParError(0,0.08029023);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
   gre->Draw("p ");
   
   TF1 *pol01053 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01053->SetFillColor(19);
   pol01053->SetFillStyle(0);
   pol01053->SetLineColor(88);
   pol01053->SetLineWidth(2);
   pol01053->SetChisquare(2.346918);
   pol01053->SetNDF(6);
   pol01053->GetXaxis()->SetLabelFont(42);
   pol01053->GetXaxis()->SetTitleOffset(1);
   pol01053->GetXaxis()->SetTitleFont(42);
   pol01053->GetYaxis()->SetLabelFont(42);
   pol01053->GetYaxis()->SetTitleFont(42);
   pol01053->SetParameter(0,1.650584);
   pol01053->SetParError(0,0.08029023);
   pol01053->SetParLimits(0,0,0);
   pol01053->Draw("same");
   
   Double_t _fx1053[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1053[7] = {
   1.823433,
   1.799129,
   1.61008,
   1.915017,
   1.831195,
   1.626017,
   1.523346};
   Double_t _fex1053[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1053[7] = {
   0.3120109,
   0.2193562,
   0.1886874,
   0.1819634,
   0.1997686,
   0.2540384,
   0.3936459};
   gre = new TGraphErrors(7,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(89);
   gre->SetMarkerColor(89);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,725,2525);
   Graph_Graph1053->SetMinimum(1.029126);
   Graph_Graph1053->SetMaximum(2.236018);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   
   TF1 *pol01054 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01054->SetFillColor(19);
   pol01054->SetFillStyle(0);
   pol01054->SetLineColor(89);
   pol01054->SetLineWidth(2);
   pol01054->SetChisquare(2.196704);
   pol01054->SetNDF(6);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.760854);
   pol01054->SetParError(0,0.08563893);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p ");
   
   TF1 *pol01055 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01055->SetFillColor(19);
   pol01055->SetFillStyle(0);
   pol01055->SetLineColor(89);
   pol01055->SetLineWidth(2);
   pol01055->SetChisquare(2.196704);
   pol01055->SetNDF(6);
   pol01055->GetXaxis()->SetLabelFont(42);
   pol01055->GetXaxis()->SetTitleOffset(1);
   pol01055->GetXaxis()->SetTitleFont(42);
   pol01055->GetYaxis()->SetLabelFont(42);
   pol01055->GetYaxis()->SetTitleFont(42);
   pol01055->SetParameter(0,1.760854);
   pol01055->SetParError(0,0.08563893);
   pol01055->SetParLimits(0,0,0);
   pol01055->Draw("same");
   
   Double_t _fx1055[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1055[7] = {
   1.765926,
   1.761219,
   1.582107,
   1.879612,
   1.785692,
   1.561219,
   1.407006};
   Double_t _fex1055[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1055[7] = {
   0.3021708,
   0.214734,
   0.1854092,
   0.1785992,
   0.1948046,
   0.2439147,
   0.3635824};
   gre = new TGraphErrors(7,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(91);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,725,2525);
   Graph_Graph1055->SetMinimum(0.9409558);
   Graph_Graph1055->SetMaximum(2.170565);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   
   TF1 *pol01056 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01056->SetFillColor(19);
   pol01056->SetFillStyle(0);
   pol01056->SetLineColor(91);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(2.68448);
   pol01056->SetNDF(6);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,1.71363);
   pol01056->SetParError(0,0.08339035);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("p ");
   
   TF1 *pol01057 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01057->SetFillColor(19);
   pol01057->SetFillStyle(0);
   pol01057->SetLineColor(91);
   pol01057->SetLineWidth(2);
   pol01057->SetChisquare(2.68448);
   pol01057->SetNDF(6);
   pol01057->GetXaxis()->SetLabelFont(42);
   pol01057->GetXaxis()->SetTitleOffset(1);
   pol01057->GetXaxis()->SetTitleFont(42);
   pol01057->GetYaxis()->SetLabelFont(42);
   pol01057->GetYaxis()->SetTitleFont(42);
   pol01057->SetParameter(0,1.71363);
   pol01057->SetParError(0,0.08339035);
   pol01057->SetParLimits(0,0,0);
   pol01057->Draw("same");
   
   Double_t _fx1057[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1057[7] = {
   1.716078,
   1.707628,
   1.532958,
   1.822187,
   1.734403,
   1.522753,
   1.386243};
   Double_t _fex1057[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1057[7] = {
   0.2936411,
   0.2082,
   0.1796493,
   0.1731427,
   0.1892093,
   0.237905,
   0.3582172};
   gre = new TGraphErrors(7,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(92);
   gre->SetMarkerColor(92);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,725,2525);
   Graph_Graph1057->SetMinimum(0.9298566);
   Graph_Graph1057->SetMaximum(2.107888);
   Graph_Graph1057->SetDirectory(0);
   Graph_Graph1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1057->SetLineColor(ci);
   Graph_Graph1057->GetXaxis()->SetLabelFont(42);
   Graph_Graph1057->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1057->GetXaxis()->SetTitleFont(42);
   Graph_Graph1057->GetYaxis()->SetLabelFont(42);
   Graph_Graph1057->GetYaxis()->SetTitleFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelFont(42);
   Graph_Graph1057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1057);
   
   
   TF1 *pol01058 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01058->SetFillColor(19);
   pol01058->SetFillStyle(0);
   pol01058->SetLineColor(92);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(2.534192);
   pol01058->SetNDF(6);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,1.664874);
   pol01058->SetParError(0,0.08100331);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("p ");
   
   TF1 *pol01059 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01059->SetFillColor(19);
   pol01059->SetFillStyle(0);
   pol01059->SetLineColor(92);
   pol01059->SetLineWidth(2);
   pol01059->SetChisquare(2.534192);
   pol01059->SetNDF(6);
   pol01059->GetXaxis()->SetLabelFont(42);
   pol01059->GetXaxis()->SetTitleOffset(1);
   pol01059->GetXaxis()->SetTitleFont(42);
   pol01059->GetYaxis()->SetLabelFont(42);
   pol01059->GetYaxis()->SetTitleFont(42);
   pol01059->SetParameter(0,1.664874);
   pol01059->SetParError(0,0.08100331);
   pol01059->SetParLimits(0,0,0);
   pol01059->Draw("same");
   
   TLegend *leg = new TLegend(0.89,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","i, j, k","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, -1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, -1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, -1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(58);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(58);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 0, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(59);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(59);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 0, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(61);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(61);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 0, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(62);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(62);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(64);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(64);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(65);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(65);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(67);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(67);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, -1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(68);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(68);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, -1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(70);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(70);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, -1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(71);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(71);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 0, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(73);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(73);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 0, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(74);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(74);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(76);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(76);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(77);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(77);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(79);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(79);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, -1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(80);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(80);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, -1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(82);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(82);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, -1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(83);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(83);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 0, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(85);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(85);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 0, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(86);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(86);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 0, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(88);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(88);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(89);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(89);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(91);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(91);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(92);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(92);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
