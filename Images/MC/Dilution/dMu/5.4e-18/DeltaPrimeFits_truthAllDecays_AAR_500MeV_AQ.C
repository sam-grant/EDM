void DeltaPrimeFits_truthAllDecays_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 16 18:56:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(367.7419,-0.4375,2690.323,3.9375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1007[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1007[4] = {
   1.717922,
   1.680289,
   1.706788,
   1.774114};
   Double_t _fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1007[4] = {
   0.07485239,
   0.05783455,
   0.05806502,
   0.0804716};
   TGraphErrors *gre = new TGraphErrors(4,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,600,2400);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(3.5);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
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
   pol01008->SetChisquare(0.9105918);
   pol01008->SetNDF(3);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,1.711593);
   pol01008->SetParError(0,0.03281827);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
   gre->Draw("ap");
   
   TF1 *pol01009 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01009->SetFillColor(19);
   pol01009->SetFillStyle(0);
   pol01009->SetLineColor(55);
   pol01009->SetLineWidth(2);
   pol01009->SetChisquare(0.9105918);
   pol01009->SetNDF(3);
   pol01009->GetXaxis()->SetLabelFont(42);
   pol01009->GetXaxis()->SetTitleOffset(1);
   pol01009->GetXaxis()->SetTitleFont(42);
   pol01009->GetYaxis()->SetLabelFont(42);
   pol01009->GetYaxis()->SetTitleFont(42);
   pol01009->SetParameter(0,1.711593);
   pol01009->SetParError(0,0.03281827);
   pol01009->SetParLimits(0,0,0);
   pol01009->Draw("same");
   
   Double_t _fx1009[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1009[4] = {
   1.703202,
   1.659986,
   1.684318,
   1.756091};
   Double_t _fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1009[4] = {
   0.07421104,
   0.05713573,
   0.05730059,
   0.0796541};
   gre = new TGraphErrors(4,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,600,2400);
   Graph_Graph1009->SetMinimum(1.57956);
   Graph_Graph1009->SetMaximum(1.859034);
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
   pol01010->SetChisquare(1.002123);
   pol01010->SetNDF(3);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,1.691988);
   pol01010->SetParError(0,0.03244291);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("p ");
   
   TF1 *pol01011 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01011->SetFillColor(19);
   pol01011->SetFillStyle(0);
   pol01011->SetLineColor(56);
   pol01011->SetLineWidth(2);
   pol01011->SetChisquare(1.002123);
   pol01011->SetNDF(3);
   pol01011->GetXaxis()->SetLabelFont(42);
   pol01011->GetXaxis()->SetTitleOffset(1);
   pol01011->GetXaxis()->SetTitleFont(42);
   pol01011->GetYaxis()->SetLabelFont(42);
   pol01011->GetYaxis()->SetTitleFont(42);
   pol01011->SetParameter(0,1.691988);
   pol01011->SetParError(0,0.03244291);
   pol01011->SetParLimits(0,0,0);
   pol01011->Draw("same");
   
   Double_t _fx1011[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1011[4] = {
   1.689302,
   1.65071,
   1.670508,
   1.71639};
   Double_t _fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1011[4] = {
   0.07360537,
   0.05681649,
   0.05683078,
   0.07785331};
   gre = new TGraphErrors(4,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(58);
   gre->SetMarkerColor(58);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,600,2400);
   Graph_Graph1011->SetMinimum(1.573859);
   Graph_Graph1011->SetMaximum(1.814278);
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
   pol01012->SetChisquare(0.5090835);
   pol01012->SetNDF(3);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.675571);
   pol01012->SetParError(0,0.03212521);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("p ");
   
   TF1 *pol01013 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(58);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(0.5090835);
   pol01013->SetNDF(3);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.675571);
   pol01013->SetParError(0,0.03212521);
   pol01013->SetParLimits(0,0,0);
   pol01013->Draw("same");
   
   Double_t _fx1013[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1013[4] = {
   1.755988,
   1.695567,
   1.705565,
   1.75475};
   Double_t _fex1013[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1013[4] = {
   0.07651101,
   0.05836041,
   0.05802341,
   0.07959328};
   gre = new TGraphErrors(4,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(59);
   gre->SetMarkerColor(59);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,600,2400);
   Graph_Graph1013->SetMinimum(1.617493);
   Graph_Graph1013->SetMaximum(1.854057);
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
   pol01014->SetChisquare(0.6489959);
   pol01014->SetNDF(3);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.720187);
   pol01014->SetParError(0,0.03298146);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("p ");
   
   TF1 *pol01015 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01015->SetFillColor(19);
   pol01015->SetFillStyle(0);
   pol01015->SetLineColor(59);
   pol01015->SetLineWidth(2);
   pol01015->SetChisquare(0.6489959);
   pol01015->SetNDF(3);
   pol01015->GetXaxis()->SetLabelFont(42);
   pol01015->GetXaxis()->SetTitleOffset(1);
   pol01015->GetXaxis()->SetTitleFont(42);
   pol01015->GetYaxis()->SetLabelFont(42);
   pol01015->GetYaxis()->SetTitleFont(42);
   pol01015->SetParameter(0,1.720187);
   pol01015->SetParError(0,0.03298146);
   pol01015->SetParLimits(0,0,0);
   pol01015->Draw("same");
   
   Double_t _fx1015[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1015[4] = {
   1.751513,
   1.671773,
   1.673488,
   1.729679};
   Double_t _fex1015[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1015[4] = {
   0.07631601,
   0.05754146,
   0.05693216,
   0.07845609};
   gre = new TGraphErrors(4,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(61);
   gre->SetMarkerColor(61);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,600,2400);
   Graph_Graph1015->SetMinimum(1.592872);
   Graph_Graph1015->SetMaximum(1.849189);
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
   pol01016->SetChisquare(1.046433);
   pol01016->SetNDF(3);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,1.696784);
   pol01016->SetParError(0,0.03253513);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("p ");
   
   TF1 *pol01017 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01017->SetFillColor(19);
   pol01017->SetFillStyle(0);
   pol01017->SetLineColor(61);
   pol01017->SetLineWidth(2);
   pol01017->SetChisquare(1.046433);
   pol01017->SetNDF(3);
   pol01017->GetXaxis()->SetLabelFont(42);
   pol01017->GetXaxis()->SetTitleOffset(1);
   pol01017->GetXaxis()->SetTitleFont(42);
   pol01017->GetYaxis()->SetLabelFont(42);
   pol01017->GetYaxis()->SetTitleFont(42);
   pol01017->SetParameter(0,1.696784);
   pol01017->SetParError(0,0.03253513);
   pol01017->SetParLimits(0,0,0);
   pol01017->Draw("same");
   
   Double_t _fx1017[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1017[4] = {
   1.719518,
   1.658832,
   1.661405,
   1.68606};
   Double_t _fex1017[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1017[4] = {
   0.07492196,
   0.05709602,
   0.05652109,
   0.07647759};
   gre = new TGraphErrors(4,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(62);
   gre->SetMarkerColor(62);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,600,2400);
   Graph_Graph1017->SetMinimum(1.582465);
   Graph_Graph1017->SetMaximum(1.813711);
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
   pol01018->SetChisquare(0.511644);
   pol01018->SetNDF(3);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.675626);
   pol01018->SetParError(0,0.03212628);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("p ");
   
   TF1 *pol01019 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01019->SetFillColor(19);
   pol01019->SetFillStyle(0);
   pol01019->SetLineColor(62);
   pol01019->SetLineWidth(2);
   pol01019->SetChisquare(0.511644);
   pol01019->SetNDF(3);
   pol01019->GetXaxis()->SetLabelFont(42);
   pol01019->GetXaxis()->SetTitleOffset(1);
   pol01019->GetXaxis()->SetTitleFont(42);
   pol01019->GetYaxis()->SetLabelFont(42);
   pol01019->GetYaxis()->SetTitleFont(42);
   pol01019->SetParameter(0,1.675626);
   pol01019->SetParError(0,0.03212628);
   pol01019->SetParLimits(0,0,0);
   pol01019->Draw("same");
   
   Double_t _fx1019[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1019[4] = {
   1.77576,
   1.708945,
   1.704906,
   1.714298};
   Double_t _fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1019[4] = {
   0.0773725,
   0.0588209,
   0.058001,
   0.07775846};
   gre = new TGraphErrors(4,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(64);
   gre->SetMarkerColor(64);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,600,2400);
   Graph_Graph1019->SetMinimum(1.614881);
   Graph_Graph1019->SetMaximum(1.874792);
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
   pol01020->SetChisquare(0.6272683);
   pol01020->SetNDF(3);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,1.720751);
   pol01020->SetParError(0,0.03299214);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("p ");
   
   TF1 *pol01021 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01021->SetFillColor(19);
   pol01021->SetFillStyle(0);
   pol01021->SetLineColor(64);
   pol01021->SetLineWidth(2);
   pol01021->SetChisquare(0.6272683);
   pol01021->SetNDF(3);
   pol01021->GetXaxis()->SetLabelFont(42);
   pol01021->GetXaxis()->SetTitleOffset(1);
   pol01021->GetXaxis()->SetTitleFont(42);
   pol01021->GetYaxis()->SetLabelFont(42);
   pol01021->GetYaxis()->SetTitleFont(42);
   pol01021->SetParameter(0,1.720751);
   pol01021->SetParError(0,0.03299214);
   pol01021->SetParLimits(0,0,0);
   pol01021->Draw("same");
   
   Double_t _fx1021[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1021[4] = {
   1.773337,
   1.694363,
   1.682074,
   1.684823};
   Double_t _fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1021[4] = {
   0.0772669,
   0.05831898,
   0.05722425,
   0.07642151};
   gre = new TGraphErrors(4,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(65);
   gre->SetMarkerColor(65);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,600,2400);
   Graph_Graph1021->SetMinimum(1.584182);
   Graph_Graph1021->SetMaximum(1.874824);
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
   pol01022->SetChisquare(1.040815);
   pol01022->SetNDF(3);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.702722);
   pol01022->SetParError(0,0.03264896);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("p ");
   
   TF1 *pol01023 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01023->SetFillColor(19);
   pol01023->SetFillStyle(0);
   pol01023->SetLineColor(65);
   pol01023->SetLineWidth(2);
   pol01023->SetChisquare(1.040815);
   pol01023->SetNDF(3);
   pol01023->GetXaxis()->SetLabelFont(42);
   pol01023->GetXaxis()->SetTitleOffset(1);
   pol01023->GetXaxis()->SetTitleFont(42);
   pol01023->GetYaxis()->SetLabelFont(42);
   pol01023->GetYaxis()->SetTitleFont(42);
   pol01023->SetParameter(0,1.702722);
   pol01023->SetParError(0,0.03264896);
   pol01023->SetParLimits(0,0,0);
   pol01023->Draw("same");
   
   Double_t _fx1023[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1023[4] = {
   1.745198,
   1.678359,
   1.668705,
   1.660342};
   Double_t _fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1023[4] = {
   0.07604084,
   0.05776814,
   0.05676945,
   0.07531106};
   gre = new TGraphErrors(4,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(67);
   gre->SetMarkerColor(67);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,600,2400);
   Graph_Graph1023->SetMinimum(1.56141);
   Graph_Graph1023->SetMaximum(1.844859);
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
   pol01024->SetChisquare(0.8285018);
   pol01024->SetNDF(3);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,1.683975);
   pol01024->SetParError(0,0.03228824);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("p ");
   
   TF1 *pol01025 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01025->SetFillColor(19);
   pol01025->SetFillStyle(0);
   pol01025->SetLineColor(67);
   pol01025->SetLineWidth(2);
   pol01025->SetChisquare(0.8285018);
   pol01025->SetNDF(3);
   pol01025->GetXaxis()->SetLabelFont(42);
   pol01025->GetXaxis()->SetTitleOffset(1);
   pol01025->GetXaxis()->SetTitleFont(42);
   pol01025->GetYaxis()->SetLabelFont(42);
   pol01025->GetYaxis()->SetTitleFont(42);
   pol01025->SetParameter(0,1.683975);
   pol01025->SetParError(0,0.03228824);
   pol01025->SetParLimits(0,0,0);
   pol01025->Draw("same");
   
   Double_t _fx1025[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1025[4] = {
   1.688741,
   1.690945,
   1.731301,
   1.767029};
   Double_t _fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1025[4] = {
   0.07358094,
   0.05820133,
   0.05889895,
   0.08015025};
   gre = new TGraphErrors(4,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(68);
   gre->SetMarkerColor(68);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,600,2400);
   Graph_Graph1025->SetMinimum(1.591958);
   Graph_Graph1025->SetMaximum(1.870381);
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
   pol01026->SetChisquare(0.7953958);
   pol01026->SetNDF(3);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,1.715916);
   pol01026->SetParError(0,0.03290047);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
   gre->Draw("p ");
   
   TF1 *pol01027 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(68);
   pol01027->SetLineWidth(2);
   pol01027->SetChisquare(0.7953958);
   pol01027->SetNDF(3);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,1.715916);
   pol01027->SetParError(0,0.03290047);
   pol01027->SetParLimits(0,0,0);
   pol01027->Draw("same");
   
   Double_t _fx1027[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1027[4] = {
   1.65836,
   1.665426,
   1.708735,
   1.746598};
   Double_t _fex1027[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1027[4] = {
   0.07225719,
   0.05732299,
   0.05813125,
   0.07922354};
   gre = new TGraphErrors(4,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(70);
   gre->SetMarkerColor(70);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,600,2400);
   Graph_Graph1027->SetMinimum(1.562131);
   Graph_Graph1027->SetMaximum(1.849794);
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
   pol01028->SetChisquare(0.9886775);
   pol01028->SetNDF(3);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,1.691076);
   pol01028->SetParError(0,0.03242533);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
   gre->Draw("p ");
   
   TF1 *pol01029 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01029->SetFillColor(19);
   pol01029->SetFillStyle(0);
   pol01029->SetLineColor(70);
   pol01029->SetLineWidth(2);
   pol01029->SetChisquare(0.9886775);
   pol01029->SetNDF(3);
   pol01029->GetXaxis()->SetLabelFont(42);
   pol01029->GetXaxis()->SetTitleOffset(1);
   pol01029->GetXaxis()->SetTitleFont(42);
   pol01029->GetYaxis()->SetLabelFont(42);
   pol01029->GetYaxis()->SetTitleFont(42);
   pol01029->SetParameter(0,1.691076);
   pol01029->SetParError(0,0.03242533);
   pol01029->SetParLimits(0,0,0);
   pol01029->Draw("same");
   
   Double_t _fx1029[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1029[4] = {
   1.654984,
   1.654408,
   1.685816,
   1.697394};
   Double_t _fex1029[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1029[4] = {
   0.07211009,
   0.05694375,
   0.05735156,
   0.07699167};
   gre = new TGraphErrors(4,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(71);
   gre->SetMarkerColor(71);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,600,2400);
   Graph_Graph1029->SetMinimum(1.563723);
   Graph_Graph1029->SetMaximum(1.793536);
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
   pol01030->SetChisquare(0.3178999);
   pol01030->SetNDF(3);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,1.671781);
   pol01030->SetParError(0,0.03205141);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
   gre->Draw("p ");
   
   TF1 *pol01031 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(71);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(0.3178999);
   pol01031->SetNDF(3);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,1.671781);
   pol01031->SetParError(0,0.03205141);
   pol01031->SetParLimits(0,0,0);
   pol01031->Draw("same");
   
   Double_t _fx1031[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1031[4] = {
   1.729968,
   1.716534,
   1.73983,
   1.744723};
   Double_t _fex1031[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1031[4] = {
   0.07537727,
   0.05908211,
   0.05918911,
   0.07913847};
   gre = new TGraphErrors(4,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(73);
   gre->SetMarkerColor(73);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,600,2400);
   Graph_Graph1031->SetMinimum(1.637664);
   Graph_Graph1031->SetMaximum(1.840788);
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
   pol01032->SetChisquare(0.112295);
   pol01032->SetNDF(3);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,1.731425);
   pol01032->SetParError(0,0.03319366);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("p ");
   
   TF1 *pol01033 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01033->SetFillColor(19);
   pol01033->SetFillStyle(0);
   pol01033->SetLineColor(73);
   pol01033->SetLineWidth(2);
   pol01033->SetChisquare(0.112295);
   pol01033->SetNDF(3);
   pol01033->GetXaxis()->SetLabelFont(42);
   pol01033->GetXaxis()->SetTitleOffset(1);
   pol01033->GetXaxis()->SetTitleFont(42);
   pol01033->GetYaxis()->SetLabelFont(42);
   pol01033->GetYaxis()->SetTitleFont(42);
   pol01033->SetParameter(0,1.731425);
   pol01033->SetParError(0,0.03319366);
   pol01033->SetParLimits(0,0,0);
   pol01033->Draw("same");
   
   Double_t _fx1033[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1033[4] = {
   1.680315,
   1.663784,
   1.675581,
   1.650191};
   Double_t _fex1033[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1033[4] = {
   0.07321379,
   0.05726647,
   0.05700334,
   0.0748506};
   gre = new TGraphErrors(4,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(74);
   gre->SetMarkerColor(74);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,600,2400);
   Graph_Graph1033->SetMinimum(1.557521);
   Graph_Graph1033->SetMaximum(1.771347);
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
   pol01034->SetChisquare(0.1079802);
   pol01034->SetNDF(3);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,1.66817);
   pol01034->SetParError(0,0.03198095);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("p ");
   
   TF1 *pol01035 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01035->SetFillColor(19);
   pol01035->SetFillStyle(0);
   pol01035->SetLineColor(74);
   pol01035->SetLineWidth(2);
   pol01035->SetChisquare(0.1079802);
   pol01035->SetNDF(3);
   pol01035->GetXaxis()->SetLabelFont(42);
   pol01035->GetXaxis()->SetTitleOffset(1);
   pol01035->GetXaxis()->SetTitleFont(42);
   pol01035->GetYaxis()->SetLabelFont(42);
   pol01035->GetYaxis()->SetTitleFont(42);
   pol01035->SetParameter(0,1.66817);
   pol01035->SetParError(0,0.03198095);
   pol01035->SetParLimits(0,0,0);
   pol01035->Draw("same");
   
   Double_t _fx1035[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1035[4] = {
   1.757665,
   1.72663,
   1.72893,
   1.694889};
   Double_t _fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1035[4] = {
   0.07658408,
   0.0594296,
   0.05881829,
   0.07687809};
   gre = new TGraphErrors(4,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(76);
   gre->SetMarkerColor(76);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,600,2400);
   Graph_Graph1035->SetMinimum(1.596388);
   Graph_Graph1035->SetMaximum(1.855873);
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
   pol01036->SetChisquare(0.335837);
   pol01036->SetNDF(3);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,1.727273);
   pol01036->SetParError(0,0.03311541);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
   gre->Draw("p ");
   
   TF1 *pol01037 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01037->SetFillColor(19);
   pol01037->SetFillStyle(0);
   pol01037->SetLineColor(76);
   pol01037->SetLineWidth(2);
   pol01037->SetChisquare(0.335837);
   pol01037->SetNDF(3);
   pol01037->GetXaxis()->SetLabelFont(42);
   pol01037->GetXaxis()->SetTitleOffset(1);
   pol01037->GetXaxis()->SetTitleFont(42);
   pol01037->GetYaxis()->SetLabelFont(42);
   pol01037->GetYaxis()->SetTitleFont(42);
   pol01037->SetParameter(0,1.727273);
   pol01037->SetParError(0,0.03311541);
   pol01037->SetParLimits(0,0,0);
   pol01037->Draw("same");
   
   Double_t _fx1037[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1037[4] = {
   1.753874,
   1.71479,
   1.70547,
   1.648516};
   Double_t _fex1037[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1037[4] = {
   0.07641887,
   0.05902208,
   0.05802019,
   0.07477466};
   gre = new TGraphErrors(4,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(77);
   gre->SetMarkerColor(77);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,600,2400);
   Graph_Graph1037->SetMinimum(1.548087);
   Graph_Graph1037->SetMaximum(1.855948);
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
   pol01038->SetChisquare(1.005625);
   pol01038->SetNDF(3);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,1.706303);
   pol01038->SetParError(0,0.0327174);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("p ");
   
   TF1 *pol01039 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01039->SetFillColor(19);
   pol01039->SetFillStyle(0);
   pol01039->SetLineColor(77);
   pol01039->SetLineWidth(2);
   pol01039->SetChisquare(1.005625);
   pol01039->SetNDF(3);
   pol01039->GetXaxis()->SetLabelFont(42);
   pol01039->GetXaxis()->SetTitleOffset(1);
   pol01039->GetXaxis()->SetTitleFont(42);
   pol01039->GetYaxis()->SetLabelFont(42);
   pol01039->GetYaxis()->SetTitleFont(42);
   pol01039->SetParameter(0,1.706303);
   pol01039->SetParError(0,0.0327174);
   pol01039->SetParLimits(0,0,0);
   pol01039->Draw("same");
   
   Double_t _fx1039[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1039[4] = {
   1.721126,
   1.688552,
   1.683568,
   1.63072};
   Double_t _fex1039[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1039[4] = {
   0.07499202,
   0.05811898,
   0.05727508,
   0.07396746};
   gre = new TGraphErrors(4,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(79);
   gre->SetMarkerColor(79);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,600,2400);
   Graph_Graph1039->SetMinimum(1.532816);
   Graph_Graph1039->SetMaximum(1.820055);
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
   pol01040->SetChisquare(0.7662989);
   pol01040->SetNDF(3);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,1.682003);
   pol01040->SetParError(0,0.03225004);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
   gre->Draw("p ");
   
   TF1 *pol01041 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01041->SetFillColor(19);
   pol01041->SetFillStyle(0);
   pol01041->SetLineColor(79);
   pol01041->SetLineWidth(2);
   pol01041->SetChisquare(0.7662989);
   pol01041->SetNDF(3);
   pol01041->GetXaxis()->SetLabelFont(42);
   pol01041->GetXaxis()->SetTitleOffset(1);
   pol01041->GetXaxis()->SetTitleFont(42);
   pol01041->GetYaxis()->SetLabelFont(42);
   pol01041->GetYaxis()->SetTitleFont(42);
   pol01041->SetParameter(0,1.682003);
   pol01041->SetParError(0,0.03225004);
   pol01041->SetParLimits(0,0,0);
   pol01041->Draw("same");
   
   Double_t _fx1041[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1041[4] = {
   1.666192,
   1.701292,
   1.747305,
   1.733517};
   Double_t _fex1041[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1041[4] = {
   0.07259845,
   0.05855747,
   0.05944342,
   0.07863018};
   gre = new TGraphErrors(4,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(80);
   gre->SetMarkerColor(80);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,600,2400);
   Graph_Graph1041->SetMinimum(1.571738);
   Graph_Graph1041->SetMaximum(1.834002);
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
   pol01042->SetChisquare(0.8562437);
   pol01042->SetNDF(3);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,1.71379);
   pol01042->SetParError(0,0.03286006);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p ");
   
   TF1 *pol01043 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);
   pol01043->SetLineColor(80);
   pol01043->SetLineWidth(2);
   pol01043->SetChisquare(0.8562437);
   pol01043->SetNDF(3);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetTitleOffset(1);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,1.71379);
   pol01043->SetParError(0,0.03286006);
   pol01043->SetParLimits(0,0,0);
   pol01043->Draw("same");
   
   Double_t _fx1043[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1043[4] = {
   1.641327,
   1.685157,
   1.732884,
   1.707611};
   Double_t _fex1043[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1043[4] = {
   0.07151502,
   0.05800213,
   0.0589528,
   0.07745511};
   gre = new TGraphErrors(4,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(82);
   gre->SetMarkerColor(82);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,600,2400);
   Graph_Graph1043->SetMinimum(1.547609);
   Graph_Graph1043->SetMaximum(1.814039);
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
   pol01044->SetChisquare(1.031355);
   pol01044->SetNDF(3);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,1.694559);
   pol01044->SetParError(0,0.03249238);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("p ");
   
   TF1 *pol01045 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);
   pol01045->SetLineColor(82);
   pol01045->SetLineWidth(2);
   pol01045->SetChisquare(1.031355);
   pol01045->SetNDF(3);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetTitleOffset(1);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,1.694559);
   pol01045->SetParError(0,0.03249238);
   pol01045->SetParLimits(0,0,0);
   pol01045->Draw("same");
   
   Double_t _fx1045[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1045[4] = {
   1.639256,
   1.670976,
   1.709302,
   1.678363};
   Double_t _fex1045[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1045[4] = {
   0.0714248,
   0.05751403,
   0.05815053,
   0.07612848};
   gre = new TGraphErrors(4,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(83);
   gre->SetMarkerColor(83);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,600,2400);
   Graph_Graph1045->SetMinimum(1.547869);
   Graph_Graph1045->SetMaximum(1.787414);
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
   pol01046->SetChisquare(0.598772);
   pol01046->SetNDF(3);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.677588);
   pol01046->SetParError(0,0.0321644);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p ");
   
   TF1 *pol01047 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);
   pol01047->SetLineColor(83);
   pol01047->SetLineWidth(2);
   pol01047->SetChisquare(0.598772);
   pol01047->SetNDF(3);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetTitleOffset(1);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,1.677588);
   pol01047->SetParError(0,0.0321644);
   pol01047->SetParLimits(0,0,0);
   pol01047->Draw("same");
   
   Double_t _fx1047[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1047[4] = {
   1.690292,
   1.721838,
   1.755382,
   1.706343};
   Double_t _fex1047[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1047[4] = {
   0.07364852,
   0.05926464,
   0.05971818,
   0.07739759};
   gre = new TGraphErrors(4,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(85);
   gre->SetMarkerColor(85);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,600,2400);
   Graph_Graph1047->SetMinimum(1.596798);
   Graph_Graph1047->SetMaximum(1.834946);
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
   pol01048->SetChisquare(0.5379602);
   pol01048->SetNDF(3);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,1.722933);
   pol01048->SetParError(0,0.03303343);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
   gre->Draw("p ");
   
   TF1 *pol01049 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);
   pol01049->SetLineColor(85);
   pol01049->SetLineWidth(2);
   pol01049->SetChisquare(0.5379602);
   pol01049->SetNDF(3);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetTitleOffset(1);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,1.722933);
   pol01049->SetParError(0,0.03303343);
   pol01049->SetParLimits(0,0,0);
   pol01049->Draw("same");
   
   Double_t _fx1049[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1049[4] = {
   1.660476,
   1.708113,
   1.742092,
   1.663878};
   Double_t _fex1049[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1049[4] = {
   0.07234938,
   0.05879224,
   0.05926605,
   0.07547146};
   gre = new TGraphErrors(4,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(86);
   gre->SetMarkerColor(86);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,600,2400);
   Graph_Graph1049->SetMinimum(1.566803);
   Graph_Graph1049->SetMaximum(1.822681);
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
   pol01050->SetChisquare(1.050754);
   pol01050->SetNDF(3);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.700466);
   pol01050->SetParError(0,0.03260575);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("p ");
   
   TF1 *pol01051 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01051->SetFillColor(19);
   pol01051->SetFillStyle(0);
   pol01051->SetLineColor(86);
   pol01051->SetLineWidth(2);
   pol01051->SetChisquare(1.050754);
   pol01051->SetNDF(3);
   pol01051->GetXaxis()->SetLabelFont(42);
   pol01051->GetXaxis()->SetTitleOffset(1);
   pol01051->GetXaxis()->SetTitleFont(42);
   pol01051->GetYaxis()->SetLabelFont(42);
   pol01051->GetYaxis()->SetTitleFont(42);
   pol01051->SetParameter(0,1.700466);
   pol01051->SetParError(0,0.03260575);
   pol01051->SetParLimits(0,0,0);
   pol01051->Draw("same");
   
   Double_t _fx1051[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1051[4] = {
   1.656473,
   1.683968,
   1.70864,
   1.64132};
   Double_t _fex1051[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1051[4] = {
   0.072175,
   0.05796121,
   0.05812802,
   0.07444825};
   gre = new TGraphErrors(4,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(88);
   gre->SetMarkerColor(88);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,600,2400);
   Graph_Graph1051->SetMinimum(1.546882);
   Graph_Graph1051->SetMaximum(1.786758);
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
   pol01052->SetChisquare(0.62014);
   pol01052->SetNDF(3);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,1.678098);
   pol01052->SetParError(0,0.03217431);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
   gre->Draw("p ");
   
   TF1 *pol01053 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01053->SetFillColor(19);
   pol01053->SetFillStyle(0);
   pol01053->SetLineColor(88);
   pol01053->SetLineWidth(2);
   pol01053->SetChisquare(0.62014);
   pol01053->SetNDF(3);
   pol01053->GetXaxis()->SetLabelFont(42);
   pol01053->GetXaxis()->SetTitleOffset(1);
   pol01053->GetXaxis()->SetTitleFont(42);
   pol01053->GetYaxis()->SetLabelFont(42);
   pol01053->GetYaxis()->SetTitleFont(42);
   pol01053->SetParameter(0,1.678098);
   pol01053->SetParError(0,0.03217431);
   pol01053->SetParLimits(0,0,0);
   pol01053->Draw("same");
   
   Double_t _fx1053[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1053[4] = {
   1.720544,
   1.730676,
   1.745333,
   1.676364};
   Double_t _fex1053[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1053[4] = {
   0.07496667,
   0.05956885,
   0.05937632,
   0.07603779};
   gre = new TGraphErrors(4,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(89);
   gre->SetMarkerColor(89);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,600,2400);
   Graph_Graph1053->SetMinimum(1.579888);
   Graph_Graph1053->SetMaximum(1.825148);
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
   pol01054->SetChisquare(0.5353193);
   pol01054->SetNDF(3);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.722994);
   pol01054->SetParError(0,0.0330346);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p ");
   
   TF1 *pol01055 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01055->SetFillColor(19);
   pol01055->SetFillStyle(0);
   pol01055->SetLineColor(89);
   pol01055->SetLineWidth(2);
   pol01055->SetChisquare(0.5353193);
   pol01055->SetNDF(3);
   pol01055->GetXaxis()->SetLabelFont(42);
   pol01055->GetXaxis()->SetTitleOffset(1);
   pol01055->GetXaxis()->SetTitleFont(42);
   pol01055->GetYaxis()->SetLabelFont(42);
   pol01055->GetYaxis()->SetTitleFont(42);
   pol01055->SetParameter(0,1.722994);
   pol01055->SetParError(0,0.0330346);
   pol01055->SetParLimits(0,0,0);
   pol01055->Draw("same");
   
   Double_t _fx1055[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1055[4] = {
   1.70636,
   1.720596,
   1.730509,
   1.640148};
   Double_t _fex1055[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1055[4] = {
   0.07434865,
   0.05922192,
   0.058872,
   0.07439511};
   gre = new TGraphErrors(4,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(91);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,600,2400);
   Graph_Graph1055->SetMinimum(1.543391);
   Graph_Graph1055->SetMaximum(1.811743);
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
   pol01056->SetChisquare(1.017201);
   pol01056->SetNDF(3);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,1.705359);
   pol01056->SetParError(0,0.03269937);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("p ");
   
   TF1 *pol01057 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01057->SetFillColor(19);
   pol01057->SetFillStyle(0);
   pol01057->SetLineColor(91);
   pol01057->SetLineWidth(2);
   pol01057->SetChisquare(1.017201);
   pol01057->SetNDF(3);
   pol01057->GetXaxis()->SetLabelFont(42);
   pol01057->GetXaxis()->SetTitleOffset(1);
   pol01057->GetXaxis()->SetTitleFont(42);
   pol01057->GetYaxis()->SetLabelFont(42);
   pol01057->GetYaxis()->SetTitleFont(42);
   pol01057->SetParameter(0,1.705359);
   pol01057->SetParError(0,0.03269937);
   pol01057->SetParLimits(0,0,0);
   pol01057->Draw("same");
   
   Double_t _fx1057[4] = {
   750,
   1250,
   1750,
   2250};
   Double_t _fy1057[4] = {
   1.691838,
   1.699314,
   1.707414,
   1.624733};
   Double_t _fex1057[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1057[4] = {
   0.07371586,
   0.05848938,
   0.05808632,
   0.07369588};
   gre = new TGraphErrors(4,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(92);
   gre->SetMarkerColor(92);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,600,2400);
   Graph_Graph1057->SetMinimum(1.529585);
   Graph_Graph1057->SetMaximum(1.787005);
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
   pol01058->SetChisquare(0.8851366);
   pol01058->SetNDF(3);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,1.686033);
   pol01058->SetParError(0,0.03232803);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("p ");
   
   TF1 *pol01059 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01059->SetFillColor(19);
   pol01059->SetFillStyle(0);
   pol01059->SetLineColor(92);
   pol01059->SetLineWidth(2);
   pol01059->SetChisquare(0.8851366);
   pol01059->SetNDF(3);
   pol01059->GetXaxis()->SetLabelFont(42);
   pol01059->GetXaxis()->SetTitleOffset(1);
   pol01059->GetXaxis()->SetTitleFont(42);
   pol01059->GetYaxis()->SetLabelFont(42);
   pol01059->GetYaxis()->SetTitleFont(42);
   pol01059->SetParameter(0,1.686033);
   pol01059->SetParError(0,0.03232803);
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
