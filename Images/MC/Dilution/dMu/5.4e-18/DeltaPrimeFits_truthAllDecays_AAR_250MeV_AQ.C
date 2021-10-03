void DeltaPrimeFits_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 30 10:32:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(492.7419,-0.4375,2815.323,3.9375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1011[7] = {
   1.681945,
   1.693173,
   1.70925,
   1.716126,
   1.787168,
   1.552975,
   1.901264};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.09176957,
   0.08361646,
   0.08045037,
   0.08114005,
   0.08624536,
   0.09750355,
   0.1206279};
   TGraphErrors *gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,725,2525);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(3.5);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(55);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(6.042982);
   pol01012->SetNDF(6);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.712371);
   pol01012->SetParError(0,0.03377698);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("ap");
   
   TF1 *pol01013 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(55);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(6.042982);
   pol01013->SetNDF(6);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.712371);
   pol01013->SetParError(0,0.03377698);
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
   1.665909,
   1.674374,
   1.688315,
   1.693942,
   1.763915,
   1.534029,
   1.882803};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.09089465,
   0.08268808,
   0.07946499,
   0.0800912,
   0.0851232,
   0.09631404,
   0.1194567};
   gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,725,2525);
   Graph_Graph1013->SetMinimum(1.381261);
   Graph_Graph1013->SetMaximum(2.058714);
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
   pol01014->SetLineColor(56);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(6.085615);
   pol01014->SetNDF(6);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.692278);
   pol01014->SetParError(0,0.03338092);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("p ");
   
   TF1 *pol01015 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01015->SetFillColor(19);
   pol01015->SetFillStyle(0);
   pol01015->SetLineColor(56);
   pol01015->SetLineWidth(2);
   pol01015->SetChisquare(6.085615);
   pol01015->SetNDF(6);
   pol01015->GetXaxis()->SetLabelFont(42);
   pol01015->GetXaxis()->SetTitleOffset(1);
   pol01015->GetXaxis()->SetTitleFont(42);
   pol01015->GetYaxis()->SetLabelFont(42);
   pol01015->GetYaxis()->SetTitleFont(42);
   pol01015->SetParameter(0,1.692278);
   pol01015->SetParError(0,0.03338092);
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
   1.654453,
   1.663905,
   1.677378,
   1.68075,
   1.745117,
   1.509346,
   1.832862};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.09026955,
   0.08217107,
   0.07895021,
   0.07946745,
   0.08421607,
   0.09476431,
   0.1162881};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(58);
   gre->SetMarkerColor(58);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,725,2525);
   Graph_Graph1015->SetMinimum(1.361125);
   Graph_Graph1015->SetMaximum(2.002607);
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
   pol01016->SetLineColor(58);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(5.667885);
   pol01016->SetNDF(6);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,1.675263);
   pol01016->SetParError(0,0.03304259);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("p ");
   
   TF1 *pol01017 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01017->SetFillColor(19);
   pol01017->SetFillStyle(0);
   pol01017->SetLineColor(58);
   pol01017->SetLineWidth(2);
   pol01017->SetChisquare(5.667885);
   pol01017->SetNDF(6);
   pol01017->GetXaxis()->SetLabelFont(42);
   pol01017->GetXaxis()->SetTitleOffset(1);
   pol01017->GetXaxis()->SetTitleFont(42);
   pol01017->GetYaxis()->SetLabelFont(42);
   pol01017->GetYaxis()->SetTitleFont(42);
   pol01017->SetParameter(0,1.675263);
   pol01017->SetParError(0,0.03304259);
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
   1.71656,
   1.718282,
   1.725402,
   1.723354,
   1.785044,
   1.541686,
   1.872435};
   Double_t _fex1017[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[7] = {
   0.09365821,
   0.08485643,
   0.08121058,
   0.08148182,
   0.08614286,
   0.09679477,
   0.1187988};
   gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(59);
   gre->SetMarkerColor(59);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,725,2525);
   Graph_Graph1017->SetMinimum(1.390257);
   Graph_Graph1017->SetMaximum(2.045868);
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
   pol01018->SetLineColor(59);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(5.616363);
   pol01018->SetNDF(6);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.721415);
   pol01018->SetParError(0,0.03395255);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("p ");
   
   TF1 *pol01019 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01019->SetFillColor(19);
   pol01019->SetFillStyle(0);
   pol01019->SetLineColor(59);
   pol01019->SetLineWidth(2);
   pol01019->SetChisquare(5.616363);
   pol01019->SetNDF(6);
   pol01019->GetXaxis()->SetLabelFont(42);
   pol01019->GetXaxis()->SetTitleOffset(1);
   pol01019->GetXaxis()->SetTitleFont(42);
   pol01019->GetYaxis()->SetLabelFont(42);
   pol01019->GetYaxis()->SetTitleFont(42);
   pol01019->SetParameter(0,1.721415);
   pol01019->SetParError(0,0.03395255);
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
   1.707803,
   1.700984,
   1.70138,
   1.694643,
   1.752725,
   1.514319,
   1.845807};
   Double_t _fex1019[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[7] = {
   0.09318042,
   0.08400218,
   0.08007994,
   0.08012431,
   0.0845832,
   0.09507652,
   0.1171094};
   gre = new TGraphErrors(7,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(61);
   gre->SetMarkerColor(61);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,725,2525);
   Graph_Graph1019->SetMinimum(1.364875);
   Graph_Graph1019->SetMaximum(2.017284);
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
   pol01020->SetLineColor(61);
   pol01020->SetLineWidth(2);
   pol01020->SetChisquare(5.759669);
   pol01020->SetNDF(6);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,1.697622);
   pol01020->SetParError(0,0.03348419);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("p ");
   
   TF1 *pol01021 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01021->SetFillColor(19);
   pol01021->SetFillStyle(0);
   pol01021->SetLineColor(61);
   pol01021->SetLineWidth(2);
   pol01021->SetChisquare(5.759669);
   pol01021->SetNDF(6);
   pol01021->GetXaxis()->SetLabelFont(42);
   pol01021->GetXaxis()->SetTitleOffset(1);
   pol01021->GetXaxis()->SetTitleFont(42);
   pol01021->GetYaxis()->SetLabelFont(42);
   pol01021->GetYaxis()->SetTitleFont(42);
   pol01021->SetParameter(0,1.697622);
   pol01021->SetParError(0,0.03348419);
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
   1.681631,
   1.681519,
   1.6858,
   1.679868,
   1.733934,
   1.489343,
   1.79178};
   Double_t _fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[7] = {
   0.09175246,
   0.08304092,
   0.0793466,
   0.07942576,
   0.08367636,
   0.09350842,
   0.1136816};
   gre = new TGraphErrors(7,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(62);
   gre->SetMarkerColor(62);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,725,2525);
   Graph_Graph1021->SetMinimum(1.344872);
   Graph_Graph1021->SetMaximum(1.956424);
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
   pol01022->SetLineColor(62);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(5.526796);
   pol01022->SetNDF(6);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.675481);
   pol01022->SetParError(0,0.03304599);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("p ");
   
   TF1 *pol01023 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01023->SetFillColor(19);
   pol01023->SetFillStyle(0);
   pol01023->SetLineColor(62);
   pol01023->SetLineWidth(2);
   pol01023->SetChisquare(5.526796);
   pol01023->SetNDF(6);
   pol01023->GetXaxis()->SetLabelFont(42);
   pol01023->GetXaxis()->SetTitleOffset(1);
   pol01023->GetXaxis()->SetTitleFont(42);
   pol01023->GetYaxis()->SetLabelFont(42);
   pol01023->GetYaxis()->SetTitleFont(42);
   pol01023->SetParameter(0,1.675481);
   pol01023->SetParError(0,0.03304599);
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
   1.737603,
   1.735887,
   1.737987,
   1.728549,
   1.779141,
   1.521487,
   1.816869};
   Double_t _fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[7] = {
   0.09480634,
   0.08572587,
   0.08180295,
   0.08172743,
   0.08585797,
   0.09552659,
   0.1152734};
   gre = new TGraphErrors(7,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(64);
   gre->SetMarkerColor(64);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,725,2525);
   Graph_Graph1023->SetMinimum(1.375342);
   Graph_Graph1023->SetMaximum(1.982761);
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
   pol01024->SetLineColor(64);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(5.624092);
   pol01024->SetNDF(6);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,1.7219);
   pol01024->SetParError(0,0.03396215);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("p ");
   
   TF1 *pol01025 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01025->SetFillColor(19);
   pol01025->SetFillStyle(0);
   pol01025->SetLineColor(64);
   pol01025->SetLineWidth(2);
   pol01025->SetChisquare(5.624092);
   pol01025->SetNDF(6);
   pol01025->GetXaxis()->SetLabelFont(42);
   pol01025->GetXaxis()->SetTitleOffset(1);
   pol01025->GetXaxis()->SetTitleFont(42);
   pol01025->GetYaxis()->SetLabelFont(42);
   pol01025->GetYaxis()->SetTitleFont(42);
   pol01025->SetParameter(0,1.7219);
   pol01025->SetParError(0,0.03396215);
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
   1.733257,
   1.725807,
   1.722775,
   1.708789,
   1.754346,
   1.496559,
   1.782387};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.09456924,
   0.08522806,
   0.08108694,
   0.08079317,
   0.08466145,
   0.09396148,
   0.1130857};
   gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(65);
   gre->SetMarkerColor(65);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,725,2525);
   Graph_Graph1025->SetMinimum(1.35331);
   Graph_Graph1025->SetMaximum(1.944761);
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
   pol01026->SetLineColor(65);
   pol01026->SetLineWidth(2);
   pol01026->SetChisquare(5.92621);
   pol01026->SetNDF(6);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,1.703459);
   pol01026->SetParError(0,0.03360041);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
   gre->Draw("p ");
   
   TF1 *pol01027 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(65);
   pol01027->SetLineWidth(2);
   pol01027->SetChisquare(5.92621);
   pol01027->SetNDF(6);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,1.703459);
   pol01027->SetParError(0,0.03360041);
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
   1.708276,
   1.705137,
   1.705044,
   1.692665,
   1.737462,
   1.479586,
   1.754306};
   Double_t _fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[7] = {
   0.09320627,
   0.0842073,
   0.08025241,
   0.08003078,
   0.08384665,
   0.0928958,
   0.111304};
   gre = new TGraphErrors(7,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(67);
   gre->SetMarkerColor(67);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,725,2525);
   Graph_Graph1027->SetMinimum(1.338798);
   Graph_Graph1027->SetMaximum(1.913502);
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
   pol01028->SetLineColor(67);
   pol01028->SetLineWidth(2);
   pol01028->SetChisquare(5.858948);
   pol01028->SetNDF(6);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,1.683987);
   pol01028->SetParError(0,0.03321589);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
   gre->Draw("p ");
   
   TF1 *pol01029 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01029->SetFillColor(19);
   pol01029->SetFillStyle(0);
   pol01029->SetLineColor(67);
   pol01029->SetLineWidth(2);
   pol01029->SetChisquare(5.858948);
   pol01029->SetNDF(6);
   pol01029->GetXaxis()->SetLabelFont(42);
   pol01029->GetXaxis()->SetTitleOffset(1);
   pol01029->GetXaxis()->SetTitleFont(42);
   pol01029->GetYaxis()->SetLabelFont(42);
   pol01029->GetYaxis()->SetTitleFont(42);
   pol01029->SetParameter(0,1.683987);
   pol01029->SetParError(0,0.03321589);
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
   1.662186,
   1.689341,
   1.717686,
   1.732424,
   1.806167,
   1.56324,
   1.888496};
   Double_t _fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[7] = {
   0.09069151,
   0.0834272,
   0.08084744,
   0.08191066,
   0.08716221,
   0.09814803,
   0.1198179};
   gre = new TGraphErrors(7,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(68);
   gre->SetMarkerColor(68);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,725,2525);
   Graph_Graph1029->SetMinimum(1.410769);
   Graph_Graph1029->SetMaximum(2.062636);
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
   pol01030->SetLineColor(68);
   pol01030->SetLineWidth(2);
   pol01030->SetChisquare(6.059907);
   pol01030->SetNDF(6);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,1.716411);
   pol01030->SetParError(0,0.03385677);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
   gre->Draw("p ");
   
   TF1 *pol01031 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(68);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(6.059907);
   pol01031->SetNDF(6);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,1.716411);
   pol01031->SetParError(0,0.03385677);
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
   1.632658,
   1.661143,
   1.690789,
   1.707071,
   1.781658,
   1.543889,
   1.867955};
   Double_t _fex1031[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[7] = {
   0.08908043,
   0.08203469,
   0.07958146,
   0.08071194,
   0.08597947,
   0.09693307,
   0.1185146};
   gre = new TGraphErrors(7,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(70);
   gre->SetMarkerColor(70);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,725,2525);
   Graph_Graph1031->SetMinimum(1.393004);
   Graph_Graph1031->SetMaximum(2.040421);
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
   pol01032->SetLineColor(70);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(6.245484);
   pol01032->SetNDF(6);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,1.690834);
   pol01032->SetParError(0,0.03335345);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("p ");
   
   TF1 *pol01033 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01033->SetFillColor(19);
   pol01033->SetFillStyle(0);
   pol01033->SetLineColor(70);
   pol01033->SetLineWidth(2);
   pol01033->SetChisquare(6.245484);
   pol01033->SetNDF(6);
   pol01033->GetXaxis()->SetLabelFont(42);
   pol01033->GetXaxis()->SetTitleOffset(1);
   pol01033->GetXaxis()->SetTitleFont(42);
   pol01033->GetYaxis()->SetLabelFont(42);
   pol01033->GetYaxis()->SetTitleFont(42);
   pol01033->SetParameter(0,1.690834);
   pol01033->SetParError(0,0.03335345);
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
   1.629414,
   1.653793,
   1.678434,
   1.688485,
   1.753857,
   1.509449,
   1.806482};
   Double_t _fex1033[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[7] = {
   0.08890342,
   0.0816717,
   0.0789999,
   0.07983317,
   0.08463785,
   0.09477075,
   0.1146144};
   gre = new TGraphErrors(7,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(71);
   gre->SetMarkerColor(71);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,725,2525);
   Graph_Graph1033->SetMinimum(1.364036);
   Graph_Graph1033->SetMaximum(1.971739);
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
   pol01034->SetLineColor(71);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(5.581525);
   pol01034->SetNDF(6);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,1.670985);
   pol01034->SetParError(0,0.03295766);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("p ");
   
   TF1 *pol01035 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01035->SetFillColor(19);
   pol01035->SetFillStyle(0);
   pol01035->SetLineColor(71);
   pol01035->SetLineWidth(2);
   pol01035->SetChisquare(5.581525);
   pol01035->SetNDF(6);
   pol01035->GetXaxis()->SetLabelFont(42);
   pol01035->GetXaxis()->SetTitleOffset(1);
   pol01035->GetXaxis()->SetTitleFont(42);
   pol01035->GetYaxis()->SetLabelFont(42);
   pol01035->GetYaxis()->SetTitleFont(42);
   pol01035->SetParameter(0,1.670985);
   pol01035->SetParError(0,0.03295766);
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
   1.702275,
   1.722913,
   1.743877,
   1.749627,
   1.812301,
   1.55488,
   1.853554};
   Double_t _fex1035[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1035[7] = {
   0.09287882,
   0.08508516,
   0.08208019,
   0.08272404,
   0.08745823,
   0.09762315,
   0.1176009};
   gre = new TGraphErrors(7,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(73);
   gre->SetMarkerColor(73);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,725,2525);
   Graph_Graph1035->SetMinimum(1.405867);
   Graph_Graph1035->SetMaximum(2.022545);
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
   pol01036->SetLineColor(73);
   pol01036->SetLineWidth(2);
   pol01036->SetChisquare(5.383213);
   pol01036->SetNDF(6);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,1.732397);
   pol01036->SetParError(0,0.03416761);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
   gre->Draw("p ");
   
   TF1 *pol01037 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01037->SetFillColor(19);
   pol01037->SetFillStyle(0);
   pol01037->SetLineColor(73);
   pol01037->SetLineWidth(2);
   pol01037->SetChisquare(5.383213);
   pol01037->SetNDF(6);
   pol01037->GetXaxis()->SetLabelFont(42);
   pol01037->GetXaxis()->SetTitleOffset(1);
   pol01037->GetXaxis()->SetTitleFont(42);
   pol01037->GetYaxis()->SetLabelFont(42);
   pol01037->GetYaxis()->SetTitleFont(42);
   pol01037->SetParameter(0,1.732397);
   pol01037->SetParError(0,0.03416761);
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
   1.654092,
   1.671106,
   1.687224,
   1.686929,
   1.738714,
   1.480658,
   1.743673};
   Double_t _fex1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[7] = {
   0.09024987,
   0.08252667,
   0.07941364,
   0.07975959,
   0.08390705,
   0.09296311,
   0.1106294};
   gre = new TGraphErrors(7,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(74);
   gre->SetMarkerColor(74);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,725,2525);
   Graph_Graph1037->SetMinimum(1.341034);
   Graph_Graph1037->SetMaximum(1.900963);
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
   pol01038->SetLineColor(74);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(5.378893);
   pol01038->SetNDF(6);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,1.667266);
   pol01038->SetParError(0,0.03288302);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("p ");
   
   TF1 *pol01039 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01039->SetFillColor(19);
   pol01039->SetFillStyle(0);
   pol01039->SetLineColor(74);
   pol01039->SetLineWidth(2);
   pol01039->SetChisquare(5.378893);
   pol01039->SetNDF(6);
   pol01039->GetXaxis()->SetLabelFont(42);
   pol01039->GetXaxis()->SetTitleOffset(1);
   pol01039->GetXaxis()->SetTitleFont(42);
   pol01039->GetYaxis()->SetLabelFont(42);
   pol01039->GetYaxis()->SetTitleFont(42);
   pol01039->SetParameter(0,1.667266);
   pol01039->SetParError(0,0.03288302);
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
   1.729227,
   1.741711,
   1.753368,
   1.747956,
   1.796136,
   1.524347,
   1.787489};
   Double_t _fex1039[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[7] = {
   0.09434937,
   0.08601349,
   0.08252691,
   0.08264503,
   0.08667814,
   0.09570616,
   0.1134094};
   gre = new TGraphErrors(7,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(76);
   gre->SetMarkerColor(76);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,725,2525);
   Graph_Graph1039->SetMinimum(1.381415);
   Graph_Graph1039->SetMaximum(1.948124);
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
   pol01040->SetLineColor(76);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(5.599392);
   pol01040->SetNDF(6);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,1.728114);
   pol01040->SetParError(0,0.03408457);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
   gre->Draw("p ");
   
   TF1 *pol01041 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01041->SetFillColor(19);
   pol01041->SetFillStyle(0);
   pol01041->SetLineColor(76);
   pol01041->SetLineWidth(2);
   pol01041->SetChisquare(5.599392);
   pol01041->SetNDF(6);
   pol01041->GetXaxis()->SetLabelFont(42);
   pol01041->GetXaxis()->SetTitleOffset(1);
   pol01041->GetXaxis()->SetTitleFont(42);
   pol01041->GetYaxis()->SetLabelFont(42);
   pol01041->GetYaxis()->SetTitleFont(42);
   pol01041->SetParameter(0,1.728114);
   pol01041->SetParError(0,0.03408457);
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
   1.725588,
   1.733633,
   1.740085,
   1.728474,
   1.767885,
   1.490764,
   1.731118};
   Double_t _fex1041[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1041[7] = {
   0.09415083,
   0.08561453,
   0.08190168,
   0.0817239,
   0.08531479,
   0.09359764,
   0.1098329};
   gre = new TGraphErrors(7,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(77);
   gre->SetMarkerColor(77);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,725,2525);
   Graph_Graph1041->SetMinimum(1.351563);
   Graph_Graph1041->SetMaximum(1.898803);
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
   pol01042->SetLineColor(77);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(6.262634);
   pol01042->SetNDF(6);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,1.7065);
   pol01042->SetParError(0,0.03366261);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p ");
   
   TF1 *pol01043 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);
   pol01043->SetLineColor(77);
   pol01043->SetLineWidth(2);
   pol01043->SetChisquare(6.262634);
   pol01043->SetNDF(6);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetTitleOffset(1);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,1.7065);
   pol01043->SetParError(0,0.03366261);
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
   1.693787,
   1.70395,
   1.712487,
   1.703236,
   1.744398,
   1.473155,
   1.713842};
   Double_t _fex1043[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1043[7] = {
   0.09241567,
   0.08414869,
   0.08060272,
   0.08053061,
   0.08418133,
   0.09249209,
   0.1087368};
   gre = new TGraphErrors(7,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(79);
   gre->SetMarkerColor(79);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,725,2525);
   Graph_Graph1043->SetMinimum(1.335872);
   Graph_Graph1043->SetMaximum(1.87337);
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
   pol01044->SetLineColor(79);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(6.030281);
   pol01044->SetNDF(6);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,1.681486);
   pol01044->SetParError(0,0.03316767);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("p ");
   
   TF1 *pol01045 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);
   pol01045->SetLineColor(79);
   pol01045->SetLineWidth(2);
   pol01045->SetChisquare(6.030281);
   pol01045->SetNDF(6);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetTitleOffset(1);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,1.681486);
   pol01045->SetParError(0,0.03316767);
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
   1.648464,
   1.688176,
   1.72524,
   1.7435,
   1.813663,
   1.556064,
   1.841689};
   Double_t _fex1045[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[7] = {
   0.08994283,
   0.08336966,
   0.08120298,
   0.08243432,
   0.08752394,
   0.09769748,
   0.1168481};
   gre = new TGraphErrors(7,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(80);
   gre->SetMarkerColor(80);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,725,2525);
   Graph_Graph1045->SetMinimum(1.408349);
   Graph_Graph1045->SetMaximum(2.008554);
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
   pol01046->SetLineColor(80);
   pol01046->SetLineWidth(2);
   pol01046->SetChisquare(5.8782);
   pol01046->SetNDF(6);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.714051);
   pol01046->SetParError(0,0.03380902);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p ");
   
   TF1 *pol01047 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);
   pol01047->SetLineColor(80);
   pol01047->SetLineWidth(2);
   pol01047->SetChisquare(5.8782);
   pol01047->SetNDF(6);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetTitleOffset(1);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,1.714051);
   pol01047->SetParError(0,0.03380902);
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
   1.625852,
   1.668392,
   1.707459,
   1.726717,
   1.795623,
   1.537722,
   1.811723};
   Double_t _fex1047[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[7] = {
   0.08870908,
   0.08239268,
   0.08036608,
   0.08164079,
   0.08665339,
   0.09654589,
   0.1149469};
   gre = new TGraphErrors(7,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(82);
   gre->SetMarkerColor(82);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,725,2525);
   Graph_Graph1047->SetMinimum(1.392627);
   Graph_Graph1047->SetMaximum(1.975219);
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
   pol01048->SetLineColor(82);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(5.919733);
   pol01048->SetNDF(6);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,1.694266);
   pol01048->SetParError(0,0.03341904);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
   gre->Draw("p ");
   
   TF1 *pol01049 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);
   pol01049->SetLineColor(82);
   pol01049->SetLineWidth(2);
   pol01049->SetChisquare(5.919733);
   pol01049->SetNDF(6);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetTitleOffset(1);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,1.694266);
   pol01049->SetParError(0,0.03341904);
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
   1.622047,
   1.659079,
   1.692775,
   1.706998,
   1.770371,
   1.512264,
   1.777434};
   Double_t _fex1049[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1049[7] = {
   0.08850146,
   0.08193272,
   0.07967489,
   0.0807085,
   0.08543476,
   0.09494749,
   0.1127714};
   gre = new TGraphErrors(7,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(83);
   gre->SetMarkerColor(83);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,725,2525);
   Graph_Graph1049->SetMinimum(1.370027);
   Graph_Graph1049->SetMaximum(1.937495);
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
   pol01050->SetLineColor(83);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(5.608611);
   pol01050->SetNDF(6);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.676804);
   pol01050->SetParError(0,0.0330726);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("p ");
   
   TF1 *pol01051 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01051->SetFillColor(19);
   pol01051->SetFillStyle(0);
   pol01051->SetLineColor(83);
   pol01051->SetLineWidth(2);
   pol01051->SetChisquare(5.608611);
   pol01051->SetNDF(6);
   pol01051->GetXaxis()->SetLabelFont(42);
   pol01051->GetXaxis()->SetTitleOffset(1);
   pol01051->GetXaxis()->SetTitleFont(42);
   pol01051->GetYaxis()->SetLabelFont(42);
   pol01051->GetYaxis()->SetTitleFont(42);
   pol01051->SetParameter(0,1.676804);
   pol01051->SetParError(0,0.0330726);
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
   1.674061,
   1.711983,
   1.745402,
   1.757288,
   1.817524,
   1.545416,
   1.802121};
   Double_t _fex1051[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1051[7] = {
   0.09133942,
   0.08454536,
   0.08215192,
   0.08308623,
   0.08771027,
   0.09702894,
   0.1143377};
   gre = new TGraphErrors(7,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(85);
   gre->SetMarkerColor(85);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,725,2525);
   Graph_Graph1051->SetMinimum(1.401579);
   Graph_Graph1051->SetMaximum(1.963265);
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
   pol01052->SetLineColor(85);
   pol01052->SetLineWidth(2);
   pol01052->SetChisquare(5.538528);
   pol01052->SetNDF(6);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,1.72341);
   pol01052->SetParError(0,0.03399139);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
   gre->Draw("p ");
   
   TF1 *pol01053 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01053->SetFillColor(19);
   pol01053->SetFillStyle(0);
   pol01053->SetLineColor(85);
   pol01053->SetLineWidth(2);
   pol01053->SetChisquare(5.538528);
   pol01053->SetNDF(6);
   pol01053->GetXaxis()->SetLabelFont(42);
   pol01053->GetXaxis()->SetTitleOffset(1);
   pol01053->GetXaxis()->SetTitleFont(42);
   pol01053->GetYaxis()->SetLabelFont(42);
   pol01053->GetYaxis()->SetTitleFont(42);
   pol01053->SetParameter(0,1.72341);
   pol01053->SetParError(0,0.03399139);
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
   1.648906,
   1.692267,
   1.729008,
   1.741406,
   1.797325,
   1.519412,
   1.750585};
   Double_t _fex1053[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1053[7] = {
   0.08996691,
   0.0835717,
   0.08138033,
   0.08233532,
   0.08673553,
   0.09539634,
   0.111068};
   gre = new TGraphErrors(7,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(86);
   gre->SetMarkerColor(86);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,725,2525);
   Graph_Graph1053->SetMinimum(1.378012);
   Graph_Graph1053->SetMaximum(1.930065);
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
   pol01054->SetLineColor(86);
   pol01054->SetLineWidth(2);
   pol01054->SetChisquare(5.76104);
   pol01054->SetNDF(6);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.700295);
   pol01054->SetParError(0,0.03353692);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p ");
   
   TF1 *pol01055 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01055->SetFillColor(19);
   pol01055->SetFillStyle(0);
   pol01055->SetLineColor(86);
   pol01055->SetLineWidth(2);
   pol01055->SetChisquare(5.76104);
   pol01055->SetNDF(6);
   pol01055->GetXaxis()->SetLabelFont(42);
   pol01055->GetXaxis()->SetTitleOffset(1);
   pol01055->GetXaxis()->SetTitleFont(42);
   pol01055->GetYaxis()->SetLabelFont(42);
   pol01055->GetYaxis()->SetTitleFont(42);
   pol01055->SetParameter(0,1.700295);
   pol01055->SetParError(0,0.03353692);
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
   1.640824,
   1.675486,
   1.704887,
   1.712095,
   1.764564,
   1.492823,
   1.727289};
   Double_t _fex1055[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1055[7] = {
   0.08952595,
   0.082743,
   0.08024499,
   0.08094946,
   0.08515452,
   0.09372695,
   0.1095899};
   gre = new TGraphErrors(7,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(88);
   gre->SetMarkerColor(88);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,725,2525);
   Graph_Graph1055->SetMinimum(1.354034);
   Graph_Graph1055->SetMaximum(1.894781);
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
   pol01056->SetLineColor(88);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(5.601593);
   pol01056->SetNDF(6);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,1.677273);
   pol01056->SetParError(0,0.0330818);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("p ");
   
   TF1 *pol01057 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01057->SetFillColor(19);
   pol01057->SetFillStyle(0);
   pol01057->SetLineColor(88);
   pol01057->SetLineWidth(2);
   pol01057->SetChisquare(5.601593);
   pol01057->SetNDF(6);
   pol01057->GetXaxis()->SetLabelFont(42);
   pol01057->GetXaxis()->SetTitleOffset(1);
   pol01057->GetXaxis()->SetTitleFont(42);
   pol01057->GetYaxis()->SetLabelFont(42);
   pol01057->GetYaxis()->SetTitleFont(42);
   pol01057->SetParameter(0,1.677273);
   pol01057->SetParError(0,0.0330818);
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
   1.701893,
   1.730635,
   1.754522,
   1.756324,
   1.805396,
   1.524452,
   1.76239};
   Double_t _fex1057[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1057[7] = {
   0.09285799,
   0.08546649,
   0.0825812,
   0.08304065,
   0.08712501,
   0.09571273,
   0.1118169};
   gre = new TGraphErrors(7,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(89);
   gre->SetMarkerColor(89);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,725,2525);
   Graph_Graph1057->SetMinimum(1.382361);
   Graph_Graph1057->SetMaximum(1.938899);
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
   pol01058->SetLineColor(89);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(5.687915);
   pol01058->SetNDF(6);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,1.723444);
   pol01058->SetParError(0,0.03399303);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("p ");
   
   TF1 *pol01059 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01059->SetFillColor(19);
   pol01059->SetFillStyle(0);
   pol01059->SetLineColor(89);
   pol01059->SetLineWidth(2);
   pol01059->SetChisquare(5.687915);
   pol01059->SetNDF(6);
   pol01059->GetXaxis()->SetLabelFont(42);
   pol01059->GetXaxis()->SetTitleOffset(1);
   pol01059->GetXaxis()->SetTitleFont(42);
   pol01059->GetYaxis()->SetLabelFont(42);
   pol01059->GetYaxis()->SetTitleFont(42);
   pol01059->SetParameter(0,1.723444);
   pol01059->SetParError(0,0.03399303);
   pol01059->SetParLimits(0,0,0);
   pol01059->Draw("same");
   
   Double_t _fx1059[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1059[7] = {
   1.689938,
   1.719453,
   1.742713,
   1.742146,
   1.785709,
   1.500073,
   1.718558};
   Double_t _fex1059[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1059[7] = {
   0.09220569,
   0.08491426,
   0.0820254,
   0.08237031,
   0.08617494,
   0.09418213,
   0.109036};
   gre = new TGraphErrors(7,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(91);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","",100,725,2525);
   Graph_Graph1059->SetMinimum(1.359292);
   Graph_Graph1059->SetMaximum(1.918483);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   
   TF1 *pol01060 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01060->SetFillColor(19);
   pol01060->SetFillStyle(0);
   pol01060->SetLineColor(91);
   pol01060->SetLineWidth(2);
   pol01060->SetChisquare(6.097327);
   pol01060->SetNDF(6);
   pol01060->GetXaxis()->SetLabelFont(42);
   pol01060->GetXaxis()->SetTitleOffset(1);
   pol01060->GetXaxis()->SetTitleFont(42);
   pol01060->GetYaxis()->SetLabelFont(42);
   pol01060->GetYaxis()->SetTitleFont(42);
   pol01060->SetParameter(0,1.705248);
   pol01060->SetParError(0,0.03363682);
   pol01060->SetParLimits(0,0,0);
   pol01060->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01060);
   gre->Draw("p ");
   
   TF1 *pol01061 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01061->SetFillColor(19);
   pol01061->SetFillStyle(0);
   pol01061->SetLineColor(91);
   pol01061->SetLineWidth(2);
   pol01061->SetChisquare(6.097327);
   pol01061->SetNDF(6);
   pol01061->GetXaxis()->SetLabelFont(42);
   pol01061->GetXaxis()->SetTitleOffset(1);
   pol01061->GetXaxis()->SetTitleFont(42);
   pol01061->GetYaxis()->SetLabelFont(42);
   pol01061->GetYaxis()->SetTitleFont(42);
   pol01061->SetParameter(0,1.705248);
   pol01061->SetParError(0,0.03363682);
   pol01061->SetParLimits(0,0,0);
   pol01061->Draw("same");
   
   Double_t _fx1061[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1061[7] = {
   1.67375,
   1.700069,
   1.720955,
   1.719289,
   1.762493,
   1.482389,
   1.703461};
   Double_t _fex1061[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1061[7] = {
   0.09132247,
   0.08395701,
   0.0810013,
   0.08128962,
   0.08505461,
   0.09307182,
   0.1080781};
   gre = new TGraphErrors(7,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(92);
   gre->SetMarkerColor(92);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","",100,725,2525);
   Graph_Graph1061->SetMinimum(1.343494);
   Graph_Graph1061->SetMaximum(1.893371);
   Graph_Graph1061->SetDirectory(0);
   Graph_Graph1061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1061->SetLineColor(ci);
   Graph_Graph1061->GetXaxis()->SetLabelFont(42);
   Graph_Graph1061->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1061->GetXaxis()->SetTitleFont(42);
   Graph_Graph1061->GetYaxis()->SetLabelFont(42);
   Graph_Graph1061->GetYaxis()->SetTitleFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelFont(42);
   Graph_Graph1061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1061);
   
   
   TF1 *pol01062 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01062->SetFillColor(19);
   pol01062->SetFillStyle(0);
   pol01062->SetLineColor(92);
   pol01062->SetLineWidth(2);
   pol01062->SetChisquare(6.020525);
   pol01062->SetNDF(6);
   pol01062->GetXaxis()->SetLabelFont(42);
   pol01062->GetXaxis()->SetTitleOffset(1);
   pol01062->GetXaxis()->SetTitleFont(42);
   pol01062->GetYaxis()->SetLabelFont(42);
   pol01062->GetYaxis()->SetTitleFont(42);
   pol01062->SetParameter(0,1.685399);
   pol01062->SetParError(0,0.03324479);
   pol01062->SetParLimits(0,0,0);
   pol01062->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01062);
   gre->Draw("p ");
   
   TF1 *pol01063 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01063->SetFillColor(19);
   pol01063->SetFillStyle(0);
   pol01063->SetLineColor(92);
   pol01063->SetLineWidth(2);
   pol01063->SetChisquare(6.020525);
   pol01063->SetNDF(6);
   pol01063->GetXaxis()->SetLabelFont(42);
   pol01063->GetXaxis()->SetTitleOffset(1);
   pol01063->GetXaxis()->SetTitleFont(42);
   pol01063->GetYaxis()->SetLabelFont(42);
   pol01063->GetYaxis()->SetTitleFont(42);
   pol01063->SetParameter(0,1.685399);
   pol01063->SetParError(0,0.03324479);
   pol01063->SetParLimits(0,0,0);
   pol01063->Draw("same");
   
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
