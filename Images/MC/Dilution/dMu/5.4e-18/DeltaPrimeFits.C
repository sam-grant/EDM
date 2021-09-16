void DeltaPrimeFits()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 16 17:31:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(492.7419,0.51875,2815.323,3.83125);
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
   1.847652,
   1.692189,
   1.552364,
   1.788732,
   1.764329,
   1.793459,
   2.106078};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.3104679,
   0.2090199,
   0.1775261,
   0.1724203,
   0.1955781,
   0.2693857,
   0.5276238};
   TGraphErrors *gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,725,2525);
   Graph_Graph1007->SetMinimum(0.85);
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
   pol01008->SetChisquare(1.887716);
   pol01008->SetNDF(6);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,1.728713);
   pol01008->SetParError(0,0.08387483);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
   gre->Draw("ap");
   
   TF1 *pol01009 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01009->SetFillColor(19);
   pol01009->SetFillStyle(0);
   pol01009->SetLineColor(55);
   pol01009->SetLineWidth(2);
   pol01009->SetChisquare(1.887716);
   pol01009->SetNDF(6);
   pol01009->GetXaxis()->SetLabelFont(42);
   pol01009->GetXaxis()->SetTitleOffset(1);
   pol01009->GetXaxis()->SetTitleFont(42);
   pol01009->GetYaxis()->SetLabelFont(42);
   pol01009->GetYaxis()->SetTitleFont(42);
   pol01009->SetParameter(0,1.728713);
   pol01009->SetParError(0,0.08387483);
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
   1.794014,
   1.642001,
   1.50614,
   1.735904,
   1.713473,
   1.744852,
   2.06142};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.3014549,
   0.2028206,
   0.17224,
   0.1673281,
   0.1899406,
   0.2620847,
   0.5164358};
   gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,725,2525);
   Graph_Graph1009->SetMinimum(1.209504);
   Graph_Graph1009->SetMaximum(2.702251);
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
   pol01010->SetChisquare(1.946076);
   pol01010->SetNDF(6);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,1.678469);
   pol01010->SetParError(0,0.08144263);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("p ");
   
   TF1 *pol01011 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01011->SetFillColor(19);
   pol01011->SetFillStyle(0);
   pol01011->SetLineColor(56);
   pol01011->SetLineWidth(2);
   pol01011->SetChisquare(1.946076);
   pol01011->SetNDF(6);
   pol01011->GetXaxis()->SetLabelFont(42);
   pol01011->GetXaxis()->SetTitleOffset(1);
   pol01011->GetXaxis()->SetTitleFont(42);
   pol01011->GetYaxis()->SetLabelFont(42);
   pol01011->GetYaxis()->SetTitleFont(42);
   pol01011->SetParameter(0,1.678469);
   pol01011->SetParError(0,0.08144263);
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
   1.73924,
   1.60995,
   1.482219,
   1.706322,
   1.672914,
   1.673219,
   1.859797};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.2922509,
   0.1988617,
   0.1695044,
   0.1644766,
   0.1854446,
   0.2513251,
   0.4659244};
   gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(58);
   gre->SetMarkerColor(58);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,725,2525);
   Graph_Graph1011->SetMinimum(1.211414);
   Graph_Graph1011->SetMaximum(2.427022);
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
   pol01012->SetChisquare(1.438586);
   pol01012->SetNDF(6);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.6391);
   pol01012->SetParError(0,0.07948492);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("p ");
   
   TF1 *pol01013 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(58);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(1.438586);
   pol01013->SetNDF(6);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.6391);
   pol01013->SetParError(0,0.07948492);
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
   1.996431,
   1.759223,
   1.579644,
   1.793273,
   1.746057,
   1.747389,
   1.981758};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.3354677,
   0.2173,
   0.1806458,
   0.172858,
   0.1935526,
   0.2624657,
   0.4964787};
   gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(59);
   gre->SetMarkerColor(59);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,725,2525);
   Graph_Graph1013->SetMinimum(1.291074);
   Graph_Graph1013->SetMaximum(2.586161);
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
   pol01014->SetChisquare(1.709342);
   pol01014->SetNDF(6);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.745769);
   pol01014->SetParError(0,0.08468455);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("p ");
   
   TF1 *pol01015 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01015->SetFillColor(19);
   pol01015->SetFillStyle(0);
   pol01015->SetLineColor(59);
   pol01015->SetLineWidth(2);
   pol01015->SetChisquare(1.709342);
   pol01015->SetNDF(6);
   pol01015->GetXaxis()->SetLabelFont(42);
   pol01015->GetXaxis()->SetTitleOffset(1);
   pol01015->GetXaxis()->SetTitleFont(42);
   pol01015->GetYaxis()->SetLabelFont(42);
   pol01015->GetYaxis()->SetTitleFont(42);
   pol01015->SetParameter(0,1.745769);
   pol01015->SetParError(0,0.08468455);
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
   1.979604,
   1.710957,
   1.522353,
   1.720225,
   1.672109,
   1.67651,
   1.925346};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.3326402,
   0.2113381,
   0.1740941,
   0.1658168,
   0.1853554,
   0.2518194,
   0.4823462};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(61);
   gre->SetMarkerColor(61);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,725,2525);
   Graph_Graph1015->SetMinimum(1.242316);
   Graph_Graph1015->SetMaximum(2.513636);
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
   pol01016->SetChisquare(1.971002);
   pol01016->SetNDF(6);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,1.682882);
   pol01016->SetParError(0,0.08165918);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("p ");
   
   TF1 *pol01017 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01017->SetFillColor(19);
   pol01017->SetFillStyle(0);
   pol01017->SetLineColor(61);
   pol01017->SetLineWidth(2);
   pol01017->SetChisquare(1.971002);
   pol01017->SetNDF(6);
   pol01017->GetXaxis()->SetLabelFont(42);
   pol01017->GetXaxis()->SetTitleOffset(1);
   pol01017->GetXaxis()->SetTitleFont(42);
   pol01017->GetYaxis()->SetLabelFont(42);
   pol01017->GetYaxis()->SetTitleFont(42);
   pol01017->SetParameter(0,1.682882);
   pol01017->SetParError(0,0.08165918);
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
   1.844296,
   1.65179,
   1.491666,
   1.692882,
   1.637596,
   1.609383,
   1.719363};
   Double_t _fex1017[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[7] = {
   0.3099038,
   0.2040298,
   0.1705849,
   0.1631811,
   0.1815295,
   0.2417365,
   0.4307424};
   gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(62);
   gre->SetMarkerColor(62);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,725,2525);
   Graph_Graph1017->SetMinimum(1.202063);
   Graph_Graph1017->SetMaximum(2.240757);
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
   pol01018->SetChisquare(1.344474);
   pol01018->SetNDF(6);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.634533);
   pol01018->SetParError(0,0.07925468);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("p ");
   
   TF1 *pol01019 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01019->SetFillColor(19);
   pol01019->SetFillStyle(0);
   pol01019->SetLineColor(62);
   pol01019->SetLineWidth(2);
   pol01019->SetChisquare(1.344474);
   pol01019->SetNDF(6);
   pol01019->GetXaxis()->SetLabelFont(42);
   pol01019->GetXaxis()->SetTitleOffset(1);
   pol01019->GetXaxis()->SetTitleFont(42);
   pol01019->GetYaxis()->SetLabelFont(42);
   pol01019->GetYaxis()->SetTitleFont(42);
   pol01019->SetParameter(0,1.634533);
   pol01019->SetParError(0,0.07925468);
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
   2.071789,
   1.802224,
   1.602016,
   1.798685,
   1.724215,
   1.677031,
   1.755815};
   Double_t _fex1019[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[7] = {
   0.3481304,
   0.2226115,
   0.1832043,
   0.1733798,
   0.1911313,
   0.2518976,
   0.4398743};
   gre = new TGraphErrors(7,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(64);
   gre->SetMarkerColor(64);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,725,2525);
   Graph_Graph1019->SetMinimum(1.205542);
   Graph_Graph1019->SetMaximum(2.530317);
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
   pol01020->SetChisquare(1.737158);
   pol01020->SetNDF(6);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,1.743517);
   pol01020->SetParError(0,0.0845781);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("p ");
   
   TF1 *pol01021 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01021->SetFillColor(19);
   pol01021->SetFillStyle(0);
   pol01021->SetLineColor(64);
   pol01021->SetLineWidth(2);
   pol01021->SetChisquare(1.737158);
   pol01021->SetNDF(6);
   pol01021->GetXaxis()->SetLabelFont(42);
   pol01021->GetXaxis()->SetTitleOffset(1);
   pol01021->GetXaxis()->SetTitleFont(42);
   pol01021->GetYaxis()->SetLabelFont(42);
   pol01021->GetYaxis()->SetTitleFont(42);
   pol01021->SetParameter(0,1.743517);
   pol01021->SetParError(0,0.0845781);
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
   2.058896,
   1.770465,
   1.56373,
   1.747397,
   1.667333,
   1.61154,
   1.663588};
   Double_t _fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[7] = {
   0.345964,
   0.2186886,
   0.178826,
   0.168436,
   0.1848259,
   0.2420606,
   0.4167693};
   gre = new TGraphErrors(7,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(65);
   gre->SetMarkerColor(65);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,725,2525);
   Graph_Graph1021->SetMinimum(1.131014);
   Graph_Graph1021->SetMaximum(2.520665);
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
   pol01022->SetChisquare(2.008002);
   pol01022->SetNDF(6);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.694629);
   pol01022->SetParError(0,0.08223273);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("p ");
   
   TF1 *pol01023 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01023->SetFillColor(19);
   pol01023->SetFillStyle(0);
   pol01023->SetLineColor(65);
   pol01023->SetLineWidth(2);
   pol01023->SetChisquare(2.008002);
   pol01023->SetNDF(6);
   pol01023->GetXaxis()->SetLabelFont(42);
   pol01023->GetXaxis()->SetTitleOffset(1);
   pol01023->GetXaxis()->SetTitleFont(42);
   pol01023->GetYaxis()->SetLabelFont(42);
   pol01023->GetYaxis()->SetTitleFont(42);
   pol01023->SetParameter(0,1.694629);
   pol01023->SetParError(0,0.08223273);
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
   1.936441,
   1.709236,
   1.52742,
   1.715377,
   1.636807,
   1.571436,
   1.581245};
   Double_t _fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[7] = {
   0.3253874,
   0.2111256,
   0.1746735,
   0.1653495,
   0.181442,
   0.2360369,
   0.3961404};
   gre = new TGraphErrors(7,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(67);
   gre->SetMarkerColor(67);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,725,2525);
   Graph_Graph1023->SetMinimum(1.077432);
   Graph_Graph1023->SetMaximum(2.369501);
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
   pol01024->SetChisquare(1.648509);
   pol01024->SetNDF(6);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,1.651019);
   pol01024->SetParError(0,0.08008268);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("p ");
   
   TF1 *pol01025 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01025->SetFillColor(19);
   pol01025->SetFillStyle(0);
   pol01025->SetLineColor(67);
   pol01025->SetLineWidth(2);
   pol01025->SetChisquare(1.648509);
   pol01025->SetNDF(6);
   pol01025->GetXaxis()->SetLabelFont(42);
   pol01025->GetXaxis()->SetTitleOffset(1);
   pol01025->GetXaxis()->SetTitleFont(42);
   pol01025->GetYaxis()->SetLabelFont(42);
   pol01025->GetYaxis()->SetTitleFont(42);
   pol01025->SetParameter(0,1.651019);
   pol01025->SetParError(0,0.08008268);
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
   1.735067,
   1.676608,
   1.580191,
   1.844051,
   1.820549,
   1.820155,
   1.984669};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.2915497,
   0.2070953,
   0.1807084,
   0.1777526,
   0.2018101,
   0.2733954,
   0.4972078};
   gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(68);
   gre->SetMarkerColor(68);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,725,2525);
   Graph_Graph1025->SetMinimum(1.291243);
   Graph_Graph1025->SetMaximum(2.590116);
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
   pol01026->SetChisquare(1.700267);
   pol01026->SetNDF(6);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,1.746482);
   pol01026->SetParError(0,0.08471823);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
   gre->Draw("p ");
   
   TF1 *pol01027 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(68);
   pol01027->SetLineWidth(2);
   pol01027->SetChisquare(1.700267);
   pol01027->SetNDF(6);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,1.746482);
   pol01027->SetParError(0,0.08471823);
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
   1.634366,
   1.602359,
   1.523072,
   1.786979,
   1.770205,
   1.772667,
   1.929234};
   Double_t _fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[7] = {
   0.2746286,
   0.197924,
   0.1741764,
   0.1722514,
   0.1962294,
   0.2662625,
   0.48332};
   gre = new TGraphErrors(7,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(70);
   gre->SetMarkerColor(70);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,725,2525);
   Graph_Graph1027->SetMinimum(1.24253);
   Graph_Graph1027->SetMaximum(2.51892);
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
   pol01028->SetChisquare(1.975205);
   pol01028->SetNDF(6);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,1.683754);
   pol01028->SetParError(0,0.0817019);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
   gre->Draw("p ");
   
   TF1 *pol01029 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01029->SetFillColor(19);
   pol01029->SetFillStyle(0);
   pol01029->SetLineColor(70);
   pol01029->SetLineWidth(2);
   pol01029->SetChisquare(1.975205);
   pol01029->SetNDF(6);
   pol01029->GetXaxis()->SetLabelFont(42);
   pol01029->GetXaxis()->SetTitleOffset(1);
   pol01029->GetXaxis()->SetTitleFont(42);
   pol01029->GetYaxis()->SetLabelFont(42);
   pol01029->GetYaxis()->SetTitleFont(42);
   pol01029->SetParameter(0,1.683754);
   pol01029->SetParError(0,0.0817019);
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
   1.619,
   1.578748,
   1.492155,
   1.738063,
   1.702947,
   1.670906,
   1.721554};
   Double_t _fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[7] = {
   0.2720466,
   0.1950076,
   0.1706407,
   0.1675362,
   0.1887738,
   0.2509776,
   0.4312912};
   gre = new TGraphErrors(7,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(71);
   gre->SetMarkerColor(71);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,725,2525);
   Graph_Graph1029->SetMinimum(1.204004);
   Graph_Graph1029->SetMaximum(2.239103);
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
   pol01030->SetChisquare(1.356153);
   pol01030->SetNDF(6);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,1.63508);
   pol01030->SetParError(0,0.07928229);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
   gre->Draw("p ");
   
   TF1 *pol01031 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(71);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(1.356153);
   pol01031->SetNDF(6);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,1.63508);
   pol01031->SetParError(0,0.07928229);
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
   1.879935,
   1.764631,
   1.631652,
   1.87427,
   1.819823,
   1.776371,
   1.831779};
   Double_t _fex1031[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[7] = {
   0.3158925,
   0.217968,
   0.1865934,
   0.1806655,
   0.2017296,
   0.266819,
   0.4589052};
   gre = new TGraphErrors(7,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(73);
   gre->SetMarkerColor(73);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,725,2525);
   Graph_Graph1031->SetMinimum(1.281093);
   Graph_Graph1031->SetMaximum(2.382465);
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
   pol01032->SetChisquare(1.059573);
   pol01032->SetNDF(6);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,1.783579);
   pol01032->SetParError(0,0.08645259);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("p ");
   
   TF1 *pol01033 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01033->SetFillColor(19);
   pol01033->SetFillStyle(0);
   pol01033->SetLineColor(73);
   pol01033->SetLineWidth(2);
   pol01033->SetChisquare(1.059573);
   pol01033->SetNDF(6);
   pol01033->GetXaxis()->SetLabelFont(42);
   pol01033->GetXaxis()->SetTitleOffset(1);
   pol01033->GetXaxis()->SetTitleFont(42);
   pol01033->GetYaxis()->SetLabelFont(42);
   pol01033->GetYaxis()->SetTitleFont(42);
   pol01033->SetParameter(0,1.783579);
   pol01033->SetParError(0,0.08645259);
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
   1.693863,
   1.615573,
   1.502227,
   1.723224,
   1.657967,
   1.581412,
   1.527129};
   Double_t _fex1033[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[7] = {
   0.2846261,
   0.1995562,
   0.1717926,
   0.1661058,
   0.1837877,
   0.2375352,
   0.3825831};
   gre = new TGraphErrors(7,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(74);
   gre->SetMarkerColor(74);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,725,2525);
   Graph_Graph1033->SetMinimum(1.061152);
   Graph_Graph1033->SetMaximum(2.061883);
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
   pol01034->SetChisquare(1.051205);
   pol01034->SetNDF(6);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,1.622206);
   pol01034->SetParError(0,0.07862986);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("p ");
   
   TF1 *pol01035 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01035->SetFillColor(19);
   pol01035->SetFillStyle(0);
   pol01035->SetLineColor(74);
   pol01035->SetLineWidth(2);
   pol01035->SetChisquare(1.051205);
   pol01035->SetNDF(6);
   pol01035->GetXaxis()->SetLabelFont(42);
   pol01035->GetXaxis()->SetTitleOffset(1);
   pol01035->GetXaxis()->SetTitleFont(42);
   pol01035->GetYaxis()->SetLabelFont(42);
   pol01035->GetYaxis()->SetTitleFont(42);
   pol01035->SetParameter(0,1.622206);
   pol01035->SetParError(0,0.07862986);
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
   1.981632,
   1.810765,
   1.643703,
   1.857026,
   1.76855,
   1.675564,
   1.613241};
   Double_t _fex1035[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1035[7] = {
   0.332981,
   0.2236664,
   0.1879715,
   0.1790033,
   0.1960459,
   0.2516773,
   0.4041561};
   gre = new TGraphErrors(7,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(76);
   gre->SetMarkerColor(76);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,725,2525);
   Graph_Graph1035->SetMinimum(1.098532);
   Graph_Graph1035->SetMaximum(2.425166);
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
   pol01036->SetChisquare(1.41341);
   pol01036->SetNDF(6);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,1.765433);
   pol01036->SetParError(0,0.08560861);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
   gre->Draw("p ");
   
   TF1 *pol01037 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01037->SetFillColor(19);
   pol01037->SetFillStyle(0);
   pol01037->SetLineColor(76);
   pol01037->SetLineWidth(2);
   pol01037->SetChisquare(1.41341);
   pol01037->SetNDF(6);
   pol01037->GetXaxis()->SetLabelFont(42);
   pol01037->GetXaxis()->SetTitleOffset(1);
   pol01037->GetXaxis()->SetTitleFont(42);
   pol01037->GetYaxis()->SetLabelFont(42);
   pol01037->GetYaxis()->SetTitleFont(42);
   pol01037->SetParameter(0,1.765433);
   pol01037->SetParError(0,0.08560861);
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
   1.959087,
   1.78067,
   1.607752,
   1.804256,
   1.701415,
   1.58436,
   1.465415};
   Double_t _fex1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[7] = {
   0.3291927,
   0.2199491,
   0.1838602,
   0.1739167,
   0.188604,
   0.237978,
   0.3671223};
   gre = new TGraphErrors(7,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(77);
   gre->SetMarkerColor(77);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,725,2525);
   Graph_Graph1037->SetMinimum(0.9792945);
   Graph_Graph1037->SetMaximum(2.407278);
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
   pol01038->SetChisquare(2.002178);
   pol01038->SetNDF(6);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,1.707093);
   pol01038->SetParError(0,0.08283698);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("p ");
   
   TF1 *pol01039 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01039->SetFillColor(19);
   pol01039->SetFillStyle(0);
   pol01039->SetLineColor(77);
   pol01039->SetLineWidth(2);
   pol01039->SetChisquare(2.002178);
   pol01039->SetNDF(6);
   pol01039->GetXaxis()->SetLabelFont(42);
   pol01039->GetXaxis()->SetTitleOffset(1);
   pol01039->GetXaxis()->SetTitleFont(42);
   pol01039->GetYaxis()->SetLabelFont(42);
   pol01039->GetYaxis()->SetTitleFont(42);
   pol01039->SetParameter(0,1.707093);
   pol01039->SetParError(0,0.08283698);
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
   1.831659,
   1.697148,
   1.548661,
   1.749584,
   1.657365,
   1.548257,
   1.434971};
   Double_t _fex1039[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[7] = {
   0.3077805,
   0.2096324,
   0.1771026,
   0.1686468,
   0.183721,
   0.2325551,
   0.3594951};
   gre = new TGraphErrors(7,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(79);
   gre->SetMarkerColor(79);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,725,2525);
   Graph_Graph1039->SetMinimum(0.9690791);
   Graph_Graph1039->SetMaximum(2.245836);
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
   pol01040->SetChisquare(1.625808);
   pol01040->SetNDF(6);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,1.649578);
   pol01040->SetParError(0,0.08001061);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
   gre->Draw("p ");
   
   TF1 *pol01041 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01041->SetFillColor(19);
   pol01041->SetFillStyle(0);
   pol01041->SetLineColor(79);
   pol01041->SetLineWidth(2);
   pol01041->SetChisquare(1.625808);
   pol01041->SetNDF(6);
   pol01041->GetXaxis()->SetLabelFont(42);
   pol01041->GetXaxis()->SetTitleOffset(1);
   pol01041->GetXaxis()->SetTitleFont(42);
   pol01041->GetYaxis()->SetLabelFont(42);
   pol01041->GetYaxis()->SetTitleFont(42);
   pol01041->SetParameter(0,1.649578);
   pol01041->SetParError(0,0.08001061);
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
   1.650468,
   1.664975,
   1.602936,
   1.883642,
   1.846018,
   1.789129,
   1.759548};
   Double_t _fex1041[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1041[7] = {
   0.2773343,
   0.2056584,
   0.1833095,
   0.1815689,
   0.2046334,
   0.2687352,
   0.4408096};
   gre = new TGraphErrors(7,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(80);
   gre->SetMarkerColor(80);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,725,2525);
   Graph_Graph1041->SetMinimum(1.230577);
   Graph_Graph1041->SetMaximum(2.28852);
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
   pol01042->SetChisquare(1.722996);
   pol01042->SetNDF(6);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,1.744676);
   pol01042->SetParError(0,0.08463292);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p ");
   
   TF1 *pol01043 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);
   pol01043->SetLineColor(80);
   pol01043->SetLineWidth(2);
   pol01043->SetChisquare(1.722996);
   pol01043->SetNDF(6);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetTitleOffset(1);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,1.744676);
   pol01043->SetParError(0,0.08463292);
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
   1.570838,
   1.610713,
   1.564804,
   1.846486,
   1.808671,
   1.739835,
   1.667694};
   Double_t _fex1043[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1043[7] = {
   0.2639538,
   0.198956,
   0.1789487,
   0.1779874,
   0.2004934,
   0.261331,
   0.417798};
   gre = new TGraphErrors(7,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(82);
   gre->SetMarkerColor(82);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,725,2525);
   Graph_Graph1043->SetMinimum(1.166336);
   Graph_Graph1043->SetMaximum(2.169052);
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
   pol01044->SetChisquare(2.009498);
   pol01044->SetNDF(6);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,1.695898);
   pol01044->SetParError(0,0.08229444);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("p ");
   
   TF1 *pol01045 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);
   pol01045->SetLineColor(82);
   pol01045->SetLineWidth(2);
   pol01045->SetChisquare(2.009498);
   pol01045->SetNDF(6);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetTitleOffset(1);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,1.695898);
   pol01045->SetParError(0,0.08229444);
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
   1.563416,
   1.585298,
   1.528256,
   1.792477,
   1.746182,
   1.66945,
   1.584272};
   Double_t _fex1045[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[7] = {
   0.2627065,
   0.1958167,
   0.1747692,
   0.1727813,
   0.1935664,
   0.2507589,
   0.3968988};
   gre = new TGraphErrors(7,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(83);
   gre->SetMarkerColor(83);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,725,2525);
   Graph_Graph1045->SetMinimum(1.107994);
   Graph_Graph1045->SetMaximum(2.060551);
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
   pol01046->SetChisquare(1.662788);
   pol01046->SetNDF(6);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.651951);
   pol01046->SetParError(0,0.08012921);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p ");
   
   TF1 *pol01047 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);
   pol01047->SetLineColor(83);
   pol01047->SetLineWidth(2);
   pol01047->SetChisquare(1.662788);
   pol01047->SetNDF(6);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetTitleOffset(1);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,1.651951);
   pol01047->SetParError(0,0.08012921);
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
   1.723878,
   1.723358,
   1.644296,
   1.911533,
   1.845015,
   1.742357,
   1.615169};
   Double_t _fex1047[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[7] = {
   0.2896696,
   0.2128699,
   0.1880393,
   0.1842574,
   0.2045222,
   0.2617098,
   0.4046392};
   gre = new TGraphErrors(7,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(85);
   gre->SetMarkerColor(85);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,725,2525);
   Graph_Graph1047->SetMinimum(1.122004);
   Graph_Graph1047->SetMaximum(2.184317);
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
   pol01048->SetChisquare(1.40038);
   pol01048->SetNDF(6);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,1.766177);
   pol01048->SetParError(0,0.08564341);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
   gre->Draw("p ");
   
   TF1 *pol01049 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);
   pol01049->SetLineColor(85);
   pol01049->SetLineWidth(2);
   pol01049->SetChisquare(1.40038);
   pol01049->SetNDF(6);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetTitleOffset(1);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,1.766177);
   pol01049->SetParError(0,0.08564341);
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
   1.620356,
   1.663345,
   1.608554,
   1.87783,
   1.803084,
   1.669966,
   1.467666};
   Double_t _fex1049[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1049[7] = {
   0.2722745,
   0.2054571,
   0.1839519,
   0.1810087,
   0.1998741,
   0.2508364,
   0.3676862};
   gre = new TGraphErrors(7,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(86);
   gre->SetMarkerColor(86);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,725,2525);
   Graph_Graph1049->SetMinimum(1.004094);
   Graph_Graph1049->SetMaximum(2.154724);
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
   pol01050->SetChisquare(1.999954);
   pol01050->SetNDF(6);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.708016);
   pol01050->SetParError(0,0.08288158);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("p ");
   
   TF1 *pol01051 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01051->SetFillColor(19);
   pol01051->SetFillStyle(0);
   pol01051->SetLineColor(86);
   pol01051->SetLineWidth(2);
   pol01051->SetChisquare(1.999954);
   pol01051->SetNDF(6);
   pol01051->GetXaxis()->SetLabelFont(42);
   pol01051->GetXaxis()->SetTitleOffset(1);
   pol01051->GetXaxis()->SetTitleFont(42);
   pol01051->GetYaxis()->SetLabelFont(42);
   pol01051->GetYaxis()->SetTitleFont(42);
   pol01051->SetParameter(0,1.708016);
   pol01051->SetParError(0,0.08288158);
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
   1.609254,
   1.620132,
   1.549187,
   1.797885,
   1.724336,
   1.605113,
   1.436496};
   Double_t _fex1051[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1051[7] = {
   0.2704089,
   0.2001194,
   0.1771628,
   0.1733026,
   0.1911448,
   0.2410952,
   0.3598772};
   gre = new TGraphErrors(7,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(88);
   gre->SetMarkerColor(88);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,725,2525);
   Graph_Graph1051->SetMinimum(0.9871619);
   Graph_Graph1051->SetMaximum(2.060644);
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
   pol01052->SetChisquare(1.634841);
   pol01052->SetNDF(6);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,1.650146);
   pol01052->SetParError(0,0.08003902);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
   gre->Draw("p ");
   
   TF1 *pol01053 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01053->SetFillColor(19);
   pol01053->SetFillStyle(0);
   pol01053->SetLineColor(88);
   pol01053->SetLineWidth(2);
   pol01053->SetChisquare(1.634841);
   pol01053->SetNDF(6);
   pol01053->GetXaxis()->SetLabelFont(42);
   pol01053->GetXaxis()->SetTitleOffset(1);
   pol01053->GetXaxis()->SetTitleFont(42);
   pol01053->GetYaxis()->SetLabelFont(42);
   pol01053->GetYaxis()->SetTitleFont(42);
   pol01053->SetParameter(0,1.650146);
   pol01053->SetParError(0,0.08003902);
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
   1.827031,
   1.771388,
   1.655931,
   1.894683,
   1.802149,
   1.673244,
   1.508187};
   Double_t _fex1053[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1053[7] = {
   0.3070029,
   0.2188026,
   0.1893699,
   0.1826331,
   0.1997705,
   0.2513288,
   0.3778376};
   gre = new TGraphErrors(7,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(89);
   gre->SetMarkerColor(89);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,725,2525);
   Graph_Graph1053->SetMinimum(1.029981);
   Graph_Graph1053->SetMaximum(2.234403);
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
   pol01054->SetChisquare(1.504059);
   pol01054->SetNDF(6);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.760027);
   pol01054->SetParError(0,0.0853556);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p ");
   
   TF1 *pol01055 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01055->SetFillColor(19);
   pol01055->SetFillStyle(0);
   pol01055->SetLineColor(89);
   pol01055->SetLineWidth(2);
   pol01055->SetChisquare(1.504059);
   pol01055->SetNDF(6);
   pol01055->GetXaxis()->SetLabelFont(42);
   pol01055->GetXaxis()->SetTitleOffset(1);
   pol01055->GetXaxis()->SetTitleFont(42);
   pol01055->GetYaxis()->SetLabelFont(42);
   pol01055->GetYaxis()->SetTitleFont(42);
   pol01055->SetParameter(0,1.760027);
   pol01055->SetParError(0,0.0853556);
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
   1.770254,
   1.734144,
   1.627061,
   1.859496,
   1.757339,
   1.607259,
   1.397354};
   Double_t _fex1055[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1055[7] = {
   0.2974624,
   0.2142023,
   0.1860683,
   0.1792414,
   0.1948032,
   0.2414175,
   0.3500712};
   gre = new TGraphErrors(7,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(91);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,725,2525);
   Graph_Graph1055->SetMinimum(0.9452395);
   Graph_Graph1055->SetMaximum(2.16976);
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
   pol01056->SetChisquare(1.984746);
   pol01056->SetNDF(6);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,1.712751);
   pol01056->SetParError(0,0.08310984);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("p ");
   
   TF1 *pol01057 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01057->SetFillColor(19);
   pol01057->SetFillStyle(0);
   pol01057->SetLineColor(91);
   pol01057->SetLineWidth(2);
   pol01057->SetChisquare(1.984746);
   pol01057->SetNDF(6);
   pol01057->GetXaxis()->SetLabelFont(42);
   pol01057->GetXaxis()->SetTitleOffset(1);
   pol01057->GetXaxis()->SetTitleFont(42);
   pol01057->GetYaxis()->SetLabelFont(42);
   pol01057->GetYaxis()->SetTitleFont(42);
   pol01057->SetParameter(0,1.712751);
   pol01057->SetParError(0,0.08310984);
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
   1.720956,
   1.681476,
   1.576354,
   1.802472,
   1.706879,
   1.568111,
   1.377553};
   Double_t _fex1057[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1057[7] = {
   0.2891786,
   0.2076966,
   0.1802696,
   0.1737448,
   0.1892097,
   0.2355373,
   0.3451107};
   gre = new TGraphErrors(7,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(92);
   gre->SetMarkerColor(92);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,725,2525);
   Graph_Graph1057->SetMinimum(0.9346737);
   Graph_Graph1057->SetMaximum(2.107903);
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
   pol01058->SetChisquare(1.823451);
   pol01058->SetNDF(6);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,1.664264);
   pol01058->SetParError(0,0.08074173);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("p ");
   
   TF1 *pol01059 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01059->SetFillColor(19);
   pol01059->SetFillStyle(0);
   pol01059->SetLineColor(92);
   pol01059->SetLineWidth(2);
   pol01059->SetChisquare(1.823451);
   pol01059->SetNDF(6);
   pol01059->GetXaxis()->SetLabelFont(42);
   pol01059->GetXaxis()->SetTitleOffset(1);
   pol01059->GetXaxis()->SetTitleFont(42);
   pol01059->GetYaxis()->SetLabelFont(42);
   pol01059->GetYaxis()->SetTitleFont(42);
   pol01059->SetParameter(0,1.664264);
   pol01059->SetParError(0,0.08074173);
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
