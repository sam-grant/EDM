void DeltaPrimeFits_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 30 16:30:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(492.7419,-0.4375,2815.323,3.9375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1009[7] = {
   1.909358,
   1.696934,
   1.542062,
   1.782766,
   1.790788,
   1.914215,
   2.74284};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.3208365,
   0.2096061,
   0.176348,
   0.1718453,
   0.1985111,
   0.2875238,
   0.6871482};
   TGraphErrors *gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,725,2525);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(3.5);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(55);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(4.193486);
   pol01010->SetNDF(6);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,1.749186);
   pol01010->SetParError(0,0.08509941);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("ap");
   
   TF1 *pol01011 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01011->SetFillColor(19);
   pol01011->SetFillStyle(0);
   pol01011->SetLineColor(55);
   pol01011->SetLineWidth(2);
   pol01011->SetChisquare(4.193486);
   pol01011->SetNDF(6);
   pol01011->GetXaxis()->SetLabelFont(42);
   pol01011->GetXaxis()->SetTitleOffset(1);
   pol01011->GetXaxis()->SetTitleFont(42);
   pol01011->GetYaxis()->SetLabelFont(42);
   pol01011->GetYaxis()->SetTitleFont(42);
   pol01011->SetParameter(0,1.749186);
   pol01011->SetParError(0,0.08509941);
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
   1.804647,
   1.604574,
   1.458556,
   1.686693,
   1.694901,
   1.812984,
   2.604825};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.3032415,
   0.1981977,
   0.1667984,
   0.1625845,
   0.1878818,
   0.2723183,
   0.652572};
   gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,725,2525);
   Graph_Graph1011->SetMinimum(1.095194);
   Graph_Graph1011->SetMaximum(3.453961);
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
   pol01012->SetLineColor(55);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(4.233489);
   pol01012->SetNDF(6);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.654825);
   pol01012->SetParError(0,0.08051246);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("p ");
   
   TF1 *pol01013 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(55);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(4.233489);
   pol01013->SetNDF(6);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.654825);
   pol01013->SetParError(0,0.08051246);
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
   1.703311,
   1.548018,
   1.416967,
   1.63497,
   1.621859,
   1.673208,
   2.071829};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.2862137,
   0.1912119,
   0.1620424,
   0.1575988,
   0.1797851,
   0.2513235,
   0.5190435};
   gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,725,2525);
   Graph_Graph1013->SetMinimum(1.12133);
   Graph_Graph1013->SetMaximum(2.724467);
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
   pol01014->SetLineColor(55);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(2.42815);
   pol01014->SetNDF(6);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.587311);
   pol01014->SetParError(0,0.07706323);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("p ");
   
   TF1 *pol01015 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01015->SetFillColor(19);
   pol01015->SetFillStyle(0);
   pol01015->SetLineColor(55);
   pol01015->SetLineWidth(2);
   pol01015->SetChisquare(2.42815);
   pol01015->SetNDF(6);
   pol01015->GetXaxis()->SetLabelFont(42);
   pol01015->GetXaxis()->SetTitleOffset(1);
   pol01015->GetXaxis()->SetTitleFont(42);
   pol01015->GetYaxis()->SetLabelFont(42);
   pol01015->GetYaxis()->SetTitleFont(42);
   pol01015->SetParameter(0,1.587311);
   pol01015->SetParError(0,0.07706323);
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
   2.232183,
   1.828119,
   1.593395,
   1.791256,
   1.755766,
   1.818133,
   2.377993};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.3750821,
   0.22581,
   0.1822184,
   0.1726636,
   0.1946288,
   0.2730918,
   0.5957451};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,725,2525);
   Graph_Graph1015->SetMinimum(1.25492);
   Graph_Graph1015->SetMaximum(3.129994);
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
   pol01016->SetLineColor(55);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(3.592647);
   pol01016->SetNDF(6);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,1.783547);
   pol01016->SetParError(0,0.08670946);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("p ");
   
   TF1 *pol01017 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01017->SetFillColor(19);
   pol01017->SetFillStyle(0);
   pol01017->SetLineColor(55);
   pol01017->SetLineWidth(2);
   pol01017->SetChisquare(3.592647);
   pol01017->SetNDF(6);
   pol01017->GetXaxis()->SetLabelFont(42);
   pol01017->GetXaxis()->SetTitleOffset(1);
   pol01017->GetXaxis()->SetTitleFont(42);
   pol01017->GetYaxis()->SetLabelFont(42);
   pol01017->GetYaxis()->SetTitleFont(42);
   pol01017->SetParameter(0,1.783547);
   pol01017->SetParError(0,0.08670946);
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
   2.193041,
   1.732729,
   1.487364,
   1.659099,
   1.620438,
   1.679399,
   2.230711};
   Double_t _fex1017[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[7] = {
   0.3685049,
   0.2140274,
   0.1700928,
   0.1599247,
   0.1796276,
   0.2522533,
   0.5588475};
   gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,725,2525);
   Graph_Graph1017->SetMinimum(1.170042);
   Graph_Graph1017->SetMaximum(2.936787);
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
   pol01018->SetLineColor(55);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(4.334178);
   pol01018->SetNDF(6);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.662729);
   pol01018->SetParError(0,0.08090667);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("p ");
   
   TF1 *pol01019 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01019->SetFillColor(19);
   pol01019->SetFillStyle(0);
   pol01019->SetLineColor(55);
   pol01019->SetLineWidth(2);
   pol01019->SetChisquare(4.334178);
   pol01019->SetNDF(6);
   pol01019->GetXaxis()->SetLabelFont(42);
   pol01019->GetXaxis()->SetTitleOffset(1);
   pol01019->GetXaxis()->SetTitleFont(42);
   pol01019->GetYaxis()->SetLabelFont(42);
   pol01019->GetYaxis()->SetTitleFont(42);
   pol01019->SetParameter(0,1.662729);
   pol01019->SetParError(0,0.08090667);
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
   1.902637,
   1.622217,
   1.433265,
   1.611943,
   1.560581,
   1.557213,
   1.769472};
   Double_t _fex1019[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[7] = {
   0.3197072,
   0.200377,
   0.1639061,
   0.1553792,
   0.1729923,
   0.2339004,
   0.4432958};
   gre = new TGraphErrors(7,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,725,2525);
   Graph_Graph1019->SetMinimum(1.17406);
   Graph_Graph1019->SetMaximum(2.317643);
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
   pol01020->SetLineColor(55);
   pol01020->SetLineWidth(2);
   pol01020->SetChisquare(2.111292);
   pol01020->SetNDF(6);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,1.579812);
   pol01020->SetParError(0,0.07667049);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("p ");
   
   TF1 *pol01021 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01021->SetFillColor(19);
   pol01021->SetFillStyle(0);
   pol01021->SetLineColor(55);
   pol01021->SetLineWidth(2);
   pol01021->SetChisquare(2.111292);
   pol01021->SetNDF(6);
   pol01021->GetXaxis()->SetLabelFont(42);
   pol01021->GetXaxis()->SetTitleOffset(1);
   pol01021->GetXaxis()->SetTitleFont(42);
   pol01021->GetYaxis()->SetLabelFont(42);
   pol01021->GetYaxis()->SetTitleFont(42);
   pol01021->SetParameter(0,1.579812);
   pol01021->SetParError(0,0.07667049);
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
   2.41676,
   1.917398,
   1.636693,
   1.801424,
   1.714745,
   1.680381,
   1.843436};
   Double_t _fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[7] = {
   0.4060971,
   0.2368378,
   0.1871698,
   0.1736438,
   0.1900817,
   0.2524008,
   0.4618256};
   gre = new TGraphErrors(7,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,725,2525);
   Graph_Graph1021->SetMinimum(1.237486);
   Graph_Graph1021->SetMaximum(2.966981);
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
   pol01022->SetLineColor(55);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(3.688974);
   pol01022->SetNDF(6);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.778939);
   pol01022->SetParError(0,0.08649527);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("p ");
   
   TF1 *pol01023 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01023->SetFillColor(19);
   pol01023->SetFillStyle(0);
   pol01023->SetLineColor(55);
   pol01023->SetLineWidth(2);
   pol01023->SetChisquare(3.688974);
   pol01023->SetNDF(6);
   pol01023->GetXaxis()->SetLabelFont(42);
   pol01023->GetXaxis()->SetTitleOffset(1);
   pol01023->GetXaxis()->SetTitleFont(42);
   pol01023->GetYaxis()->SetLabelFont(42);
   pol01023->GetYaxis()->SetTitleFont(42);
   pol01023->SetParameter(0,1.778939);
   pol01023->SetParError(0,0.08649527);
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
   2.384057,
   1.851056,
   1.56326,
   1.707181,
   1.612035,
   1.56101,
   1.661792};
   Double_t _fex1023[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[7] = {
   0.4006019,
   0.2286432,
   0.1787721,
   0.1645595,
   0.178696,
   0.2344708,
   0.4163193};
   gre = new TGraphErrors(7,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,725,2525);
   Graph_Graph1023->SetMinimum(1.091554);
   Graph_Graph1023->SetMaximum(2.938577);
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
   pol01024->SetLineColor(55);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(4.503802);
   pol01024->SetNDF(6);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,1.684114);
   pol01024->SetParError(0,0.08196368);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("p ");
   
   TF1 *pol01025 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01025->SetFillColor(19);
   pol01025->SetFillStyle(0);
   pol01025->SetLineColor(55);
   pol01025->SetLineWidth(2);
   pol01025->SetChisquare(4.503802);
   pol01025->SetNDF(6);
   pol01025->GetXaxis()->SetLabelFont(42);
   pol01025->GetXaxis()->SetTitleOffset(1);
   pol01025->GetXaxis()->SetTitleFont(42);
   pol01025->GetYaxis()->SetLabelFont(42);
   pol01025->GetYaxis()->SetTitleFont(42);
   pol01025->SetParameter(0,1.684114);
   pol01025->SetParError(0,0.08196368);
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
   2.095853,
   1.729418,
   1.496472,
   1.650649,
   1.559235,
   1.491758,
   1.513901};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.352174,
   0.2136184,
   0.1711344,
   0.1591102,
   0.1728432,
   0.2240688,
   0.3792691};
   gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,725,2525);
   Graph_Graph1025->SetMinimum(1.003293);
   Graph_Graph1025->SetMaximum(2.579366);
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
   pol01026->SetLineColor(55);
   pol01026->SetLineWidth(2);
   pol01026->SetChisquare(3.148758);
   pol01026->SetNDF(6);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,1.607201);
   pol01026->SetParError(0,0.07809522);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
   gre->Draw("p ");
   
   TF1 *pol01027 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(55);
   pol01027->SetLineWidth(2);
   pol01027->SetChisquare(3.148758);
   pol01027->SetNDF(6);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,1.607201);
   pol01027->SetParError(0,0.07809522);
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
   1.69581,
   1.667747,
   1.594441,
   1.88882,
   1.90279,
   1.972193,
   2.385877};
   Double_t _fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[7] = {
   0.2849532,
   0.2060008,
   0.182338,
   0.182068,
   0.2109266,
   0.2962323,
   0.5977204};
   gre = new TGraphErrors(7,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(55);
   gre->SetMarkerColor(55);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,725,2525);
   Graph_Graph1027->SetMinimum(1.253583);
   Graph_Graph1027->SetMaximum(3.140872);
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
   pol01028->SetLineColor(55);
   pol01028->SetLineWidth(2);
   pol01028->SetChisquare(3.561059);
   pol01028->SetNDF(6);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,1.785011);
   pol01028->SetParError(0,0.0867774);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
   gre->Draw("p ");
   
   TF1 *pol01029 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01029->SetFillColor(19);
   pol01029->SetFillStyle(0);
   pol01029->SetLineColor(55);
   pol01029->SetLineWidth(2);
   pol01029->SetChisquare(3.561059);
   pol01029->SetNDF(6);
   pol01029->GetXaxis()->SetLabelFont(42);
   pol01029->GetXaxis()->SetTitleOffset(1);
   pol01029->GetXaxis()->SetTitleFont(42);
   pol01029->GetYaxis()->SetLabelFont(42);
   pol01029->GetYaxis()->SetTitleFont(42);
   pol01029->SetParameter(0,1.785011);
   pol01029->SetParError(0,0.0867774);
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
   1.523514,
   1.534888,
   1.488654,
   1.7795,
   1.802191,
   1.870245,
   2.240534};
   Double_t _fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[7] = {
   0.2560017,
   0.1895901,
   0.1702403,
   0.1715304,
   0.1997751,
   0.2809192,
   0.5613084};
   gre = new TGraphErrors(7,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,725,2525);
   Graph_Graph1029->SetMinimum(1.114079);
   Graph_Graph1029->SetMaximum(2.955276);
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
   pol01030->SetLineColor(56);
   pol01030->SetLineWidth(2);
   pol01030->SetChisquare(4.351679);
   pol01030->SetNDF(6);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,1.664299);
   pol01030->SetParError(0,0.08098475);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
   gre->Draw("p ");
   
   TF1 *pol01031 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(56);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(4.351679);
   pol01031->SetNDF(6);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,1.664299);
   pol01031->SetParError(0,0.08098475);
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
   1.498614,
   1.494677,
   1.434112,
   1.690523,
   1.675662,
   1.66887,
   1.773834};
   Double_t _fex1031[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[7] = {
   0.2518177,
   0.1846231,
   0.164003,
   0.1629537,
   0.1857492,
   0.2506717,
   0.4443886};
   gre = new TGraphErrors(7,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,725,2525);
   Graph_Graph1031->SetMinimum(1.149654);
   Graph_Graph1031->SetMaximum(2.315365);
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
   pol01032->SetLineColor(56);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(2.150439);
   pol01032->SetNDF(6);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,1.580706);
   pol01032->SetParError(0,0.07671745);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("p ");
   
   TF1 *pol01033 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01033->SetFillColor(19);
   pol01033->SetFillStyle(0);
   pol01033->SetLineColor(56);
   pol01033->SetLineWidth(2);
   pol01033->SetChisquare(2.150439);
   pol01033->SetNDF(6);
   pol01033->GetXaxis()->SetLabelFont(42);
   pol01033->GetXaxis()->SetTitleOffset(1);
   pol01033->GetXaxis()->SetTitleFont(42);
   pol01033->GetYaxis()->SetLabelFont(42);
   pol01033->GetYaxis()->SetTitleFont(42);
   pol01033->SetParameter(0,1.580706);
   pol01033->SetParError(0,0.07671745);
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
   1.975182,
   1.839118,
   1.695786,
   1.949273,
   1.901302,
   1.878004,
   2.007588};
   Double_t _fex1033[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[7] = {
   0.3318972,
   0.2271686,
   0.1939277,
   0.1878952,
   0.2107617,
   0.2820847,
   0.5029495};
   gre = new TGraphErrors(7,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,725,2525);
   Graph_Graph1033->SetMinimum(1.400991);
   Graph_Graph1033->SetMaximum(2.611405);
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
   pol01034->SetLineColor(56);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(1.197839);
   pol01034->SetNDF(6);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,1.864433);
   pol01034->SetParError(0,0.09038642);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("p ");
   
   TF1 *pol01035 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01035->SetFillColor(19);
   pol01035->SetFillStyle(0);
   pol01035->SetLineColor(56);
   pol01035->SetLineWidth(2);
   pol01035->SetChisquare(1.197839);
   pol01035->SetNDF(6);
   pol01035->GetXaxis()->SetLabelFont(42);
   pol01035->GetXaxis()->SetTitleOffset(1);
   pol01035->GetXaxis()->SetTitleFont(42);
   pol01035->GetYaxis()->SetLabelFont(42);
   pol01035->GetYaxis()->SetTitleFont(42);
   pol01035->SetParameter(0,1.864433);
   pol01035->SetParError(0,0.09038642);
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
   1.623331,
   1.557809,
   1.45168,
   1.664345,
   1.595668,
   1.508725,
   1.423223};
   Double_t _fex1035[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1035[7] = {
   0.2727743,
   0.1924212,
   0.166012,
   0.1604303,
   0.1768818,
   0.2266172,
   0.356552};
   gre = new TGraphErrors(7,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,725,2525);
   Graph_Graph1035->SetMinimum(0.9837277);
   Graph_Graph1035->SetMaximum(1.979048);
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
   pol01036->SetLineColor(56);
   pol01036->SetLineWidth(2);
   pol01036->SetChisquare(1.141812);
   pol01036->SetNDF(6);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,1.559894);
   pol01036->SetParError(0,0.07561757);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
   gre->Draw("p ");
   
   TF1 *pol01037 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01037->SetFillColor(19);
   pol01037->SetFillStyle(0);
   pol01037->SetLineColor(56);
   pol01037->SetLineWidth(2);
   pol01037->SetChisquare(1.141812);
   pol01037->SetNDF(6);
   pol01037->GetXaxis()->SetLabelFont(42);
   pol01037->GetXaxis()->SetTitleOffset(1);
   pol01037->GetXaxis()->SetTitleFont(42);
   pol01037->GetYaxis()->SetLabelFont(42);
   pol01037->GetYaxis()->SetTitleFont(42);
   pol01037->SetParameter(0,1.559894);
   pol01037->SetParError(0,0.07561757);
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
   2.197721,
   1.935639,
   1.720405,
   1.914551,
   1.798972,
   1.677617,
   1.569883};
   Double_t _fex1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[7] = {
   0.3692912,
   0.239091,
   0.1967431,
   0.1845483,
   0.1994182,
   0.2519856,
   0.3932939};
   gre = new TGraphErrors(7,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,725,2525);
   Graph_Graph1037->SetMinimum(1.037547);
   Graph_Graph1037->SetMaximum(2.706055);
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
   pol01038->SetLineColor(56);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(2.53078);
   pol01038->SetNDF(6);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,1.82477);
   pol01038->SetParError(0,0.08860247);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("p ");
   
   TF1 *pol01039 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01039->SetFillColor(19);
   pol01039->SetFillStyle(0);
   pol01039->SetLineColor(56);
   pol01039->SetLineWidth(2);
   pol01039->SetChisquare(2.53078);
   pol01039->SetNDF(6);
   pol01039->GetXaxis()->SetLabelFont(42);
   pol01039->GetXaxis()->SetTitleOffset(1);
   pol01039->GetXaxis()->SetTitleFont(42);
   pol01039->GetYaxis()->SetLabelFont(42);
   pol01039->GetYaxis()->SetTitleFont(42);
   pol01039->SetParameter(0,1.82477);
   pol01039->SetParError(0,0.08860247);
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
   2.14628,
   1.872122,
   1.647972,
   1.811945,
   1.672879,
   1.51377,
   1.325524};
   Double_t _fex1039[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[7] = {
   0.3606474,
   0.2312453,
   0.1884598,
   0.1746579,
   0.1854407,
   0.2273751,
   0.332076};
   gre = new TGraphErrors(7,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,725,2525);
   Graph_Graph1039->SetMinimum(0.8421);
   Graph_Graph1039->SetMaximum(2.658275);
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
   pol01040->SetLineColor(56);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(4.528311);
   pol01040->SetNDF(6);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,1.707375);
   pol01040->SetParError(0,0.08309821);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
   gre->Draw("p ");
   
   TF1 *pol01041 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01041->SetFillColor(19);
   pol01041->SetFillStyle(0);
   pol01041->SetLineColor(56);
   pol01041->SetLineWidth(2);
   pol01041->SetChisquare(4.528311);
   pol01041->SetNDF(6);
   pol01041->GetXaxis()->SetLabelFont(42);
   pol01041->GetXaxis()->SetTitleOffset(1);
   pol01041->GetXaxis()->SetTitleFont(42);
   pol01041->GetYaxis()->SetLabelFont(42);
   pol01041->GetYaxis()->SetTitleFont(42);
   pol01041->SetParameter(0,1.707375);
   pol01041->SetParError(0,0.08309821);
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
   1.877542,
   1.706324,
   1.535213,
   1.711105,
   1.594621,
   1.452978,
   1.279414};
   Double_t _fex1041[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1041[7] = {
   0.3154904,
   0.2107659,
   0.1755648,
   0.1649377,
   0.1767658,
   0.2182438,
   0.3205244};
   gre = new TGraphErrors(7,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,725,2525);
   Graph_Graph1041->SetMinimum(0.8354753);
   Graph_Graph1041->SetMaximum(2.316447);
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
   pol01042->SetLineColor(56);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(3.069714);
   pol01042->SetNDF(6);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,1.604771);
   pol01042->SetParError(0,0.07796985);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p ");
   
   TF1 *pol01043 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);
   pol01043->SetLineColor(56);
   pol01043->SetLineWidth(2);
   pol01043->SetChisquare(3.069714);
   pol01043->SetNDF(6);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetTitleOffset(1);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,1.604771);
   pol01043->SetParError(0,0.07796985);
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
   1.549986,
   1.646261,
   1.638497,
   1.968401,
   1.955752,
   1.904974,
   1.851181};
   Double_t _fex1043[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1043[7] = {
   0.2604499,
   0.2033469,
   0.1873761,
   0.189739,
   0.2167975,
   0.2861356,
   0.4637658};
   gre = new TGraphErrors(7,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,725,2525);
   Graph_Graph1043->SetMinimum(1.186995);
   Graph_Graph1043->SetMaximum(2.417488);
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
   pol01044->SetLineColor(56);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(3.640026);
   pol01044->SetNDF(6);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,1.781308);
   pol01044->SetParError(0,0.08660548);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("p ");
   
   TF1 *pol01045 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);
   pol01045->SetLineColor(56);
   pol01045->SetLineWidth(2);
   pol01045->SetChisquare(3.640026);
   pol01045->SetNDF(6);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetTitleOffset(1);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,1.781308);
   pol01045->SetParError(0,0.08660548);
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
   1.422785,
   1.549345,
   1.565276,
   1.893624,
   1.878576,
   1.802839,
   1.669503};
   Double_t _fex1045[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[7] = {
   0.2390759,
   0.1913757,
   0.1790027,
   0.1825311,
   0.2082424,
   0.2707945,
   0.4182511};
   gre = new TGraphErrors(7,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,725,2525);
   Graph_Graph1045->SetMinimum(1.093305);
   Graph_Graph1045->SetMaximum(2.178159);
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
   pol01046->SetLineColor(56);
   pol01046->SetLineWidth(2);
   pol01046->SetChisquare(4.513599);
   pol01046->SetNDF(6);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.686455);
   pol01046->SetParError(0,0.08207857);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p ");
   
   TF1 *pol01047 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);
   pol01047->SetLineColor(56);
   pol01047->SetLineWidth(2);
   pol01047->SetChisquare(4.513599);
   pol01047->SetNDF(6);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetTitleOffset(1);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,1.686455);
   pol01047->SetParError(0,0.08207857);
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
   1.411387,
   1.505738,
   1.49798,
   1.789765,
   1.756002,
   1.666143,
   1.519121};
   Double_t _fex1047[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[7] = {
   0.2371607,
   0.1859894,
   0.1713068,
   0.1725199,
   0.194655,
   0.2502622,
   0.3805767};
   gre = new TGraphErrors(7,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(56);
   gre->SetMarkerColor(56);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,725,2525);
   Graph_Graph1047->SetMinimum(1.05617);
   Graph_Graph1047->SetMaximum(2.044659);
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
   pol01048->SetLineColor(56);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(3.198647);
   pol01048->SetNDF(6);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,1.608775);
   pol01048->SetParError(0,0.07817632);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
   gre->Draw("p ");
   
   TF1 *pol01049 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);
   pol01049->SetLineColor(56);
   pol01049->SetLineWidth(2);
   pol01049->SetChisquare(3.198647);
   pol01049->SetNDF(6);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetTitleOffset(1);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,1.608775);
   pol01049->SetParError(0,0.07817632);
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
   1.675846,
   1.756771,
   1.721626,
   2.026427,
   1.953639,
   1.80793,
   1.573315};
   Double_t _fex1049[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1049[7] = {
   0.2815986,
   0.2169971,
   0.1968827,
   0.1953323,
   0.2165633,
   0.2715593,
   0.3941538};
   gre = new TGraphErrors(7,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(57);
   gre->SetMarkerColor(57);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,725,2525);
   Graph_Graph1049->SetMinimum(1.074902);
   Graph_Graph1049->SetMaximum(2.326019);
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
   pol01050->SetLineColor(57);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(2.482767);
   pol01050->SetNDF(6);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.826367);
   pol01050->SetParError(0,0.08867496);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("p ");
   
   TF1 *pol01051 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01051->SetFillColor(19);
   pol01051->SetFillStyle(0);
   pol01051->SetLineColor(57);
   pol01051->SetLineWidth(2);
   pol01051->SetChisquare(2.482767);
   pol01051->SetNDF(6);
   pol01051->GetXaxis()->SetLabelFont(42);
   pol01051->GetXaxis()->SetTitleOffset(1);
   pol01051->GetXaxis()->SetTitleFont(42);
   pol01051->GetYaxis()->SetLabelFont(42);
   pol01051->GetYaxis()->SetTitleFont(42);
   pol01051->SetParameter(0,1.826367);
   pol01051->SetParError(0,0.08867496);
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
   1.500798,
   1.643272,
   1.649556,
   1.956518,
   1.86729,
   1.667109,
   1.328986};
   Double_t _fex1051[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1051[7] = {
   0.2521847,
   0.2029776,
   0.1886409,
   0.1885936,
   0.2069915,
   0.2504074,
   0.3329434};
   gre = new TGraphErrors(7,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(57);
   gre->SetMarkerColor(57);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,725,2525);
   Graph_Graph1051->SetMinimum(0.8811359);
   Graph_Graph1051->SetMaximum(2.260018);
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
   pol01052->SetLineColor(57);
   pol01052->SetLineWidth(2);
   pol01052->SetChisquare(4.523782);
   pol01052->SetNDF(6);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,1.709123);
   pol01052->SetParError(0,0.08318282);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
   gre->Draw("p ");
   
   TF1 *pol01053 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01053->SetFillColor(19);
   pol01053->SetFillStyle(0);
   pol01053->SetLineColor(57);
   pol01053->SetLineWidth(2);
   pol01053->SetChisquare(4.523782);
   pol01053->SetNDF(6);
   pol01053->GetXaxis()->SetLabelFont(42);
   pol01053->GetXaxis()->SetTitleOffset(1);
   pol01053->GetXaxis()->SetTitleFont(42);
   pol01053->GetYaxis()->SetLabelFont(42);
   pol01053->GetYaxis()->SetTitleFont(42);
   pol01053->SetParameter(0,1.709123);
   pol01053->SetParError(0,0.08318282);
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
   1.483002,
   1.565788,
   1.536185,
   1.799917,
   1.714971,
   1.549722,
   1.281693};
   Double_t _fex1053[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1053[7] = {
   0.2491943,
   0.1934068,
   0.1756759,
   0.1734985,
   0.1901067,
   0.2327753,
   0.3210953};
   gre = new TGraphErrors(7,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(57);
   gre->SetMarkerColor(57);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,725,2525);
   Graph_Graph1053->SetMinimum(0.8593158);
   Graph_Graph1053->SetMaximum(2.074697);
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
   pol01054->SetLineColor(57);
   pol01054->SetLineWidth(2);
   pol01054->SetChisquare(3.101128);
   pol01054->SetNDF(6);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.605728);
   pol01054->SetParError(0,0.07801924);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p ");
   
   TF1 *pol01055 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01055->SetFillColor(19);
   pol01055->SetFillStyle(0);
   pol01055->SetLineColor(57);
   pol01055->SetLineWidth(2);
   pol01055->SetChisquare(3.101128);
   pol01055->SetNDF(6);
   pol01055->GetXaxis()->SetLabelFont(42);
   pol01055->GetXaxis()->SetTitleOffset(1);
   pol01055->GetXaxis()->SetTitleFont(42);
   pol01055->GetYaxis()->SetLabelFont(42);
   pol01055->GetYaxis()->SetTitleFont(42);
   pol01055->SetParameter(0,1.605728);
   pol01055->SetParError(0,0.07801924);
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
   1.868432,
   1.852953,
   1.745744,
   1.991172,
   1.865408,
   1.673255,
   1.392611};
   Double_t _fex1055[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1055[7] = {
   0.3139596,
   0.2288775,
   0.1996408,
   0.191934,
   0.2067828,
   0.2513305,
   0.3488831};
   gre = new TGraphErrors(7,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(57);
   gre->SetMarkerColor(57);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,725,2525);
   Graph_Graph1055->SetMinimum(0.9297906);
   Graph_Graph1055->SetMaximum(2.297043);
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
   pol01056->SetLineColor(57);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(2.862171);
   pol01056->SetNDF(6);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,1.813262);
   pol01056->SetParError(0,0.08807807);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("p ");
   
   TF1 *pol01057 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01057->SetFillColor(19);
   pol01057->SetFillStyle(0);
   pol01057->SetLineColor(57);
   pol01057->SetLineWidth(2);
   pol01057->SetChisquare(2.862171);
   pol01057->SetNDF(6);
   pol01057->GetXaxis()->SetLabelFont(42);
   pol01057->GetXaxis()->SetTitleOffset(1);
   pol01057->GetXaxis()->SetTitleFont(42);
   pol01057->GetYaxis()->SetLabelFont(42);
   pol01057->GetYaxis()->SetTitleFont(42);
   pol01057->SetParameter(0,1.813262);
   pol01057->SetParError(0,0.08807807);
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
   1.760021,
   1.777942,
   1.686498,
   1.919487,
   1.777313,
   1.553483,
   1.224233};
   Double_t _fex1057[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1057[7] = {
   0.295743,
   0.2196122,
   0.1928655,
   0.1850241,
   0.1970173,
   0.2333402,
   0.3067002};
   gre = new TGraphErrors(7,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(57);
   gre->SetMarkerColor(57);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,725,2525);
   Graph_Graph1057->SetMinimum(0.7988352);
   Graph_Graph1057->SetMaximum(2.223209);
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
   pol01058->SetLineColor(57);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(4.48685);
   pol01058->SetNDF(6);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,1.718135);
   pol01058->SetParError(0,0.08361778);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("p ");
   
   TF1 *pol01059 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01059->SetFillColor(19);
   pol01059->SetFillStyle(0);
   pol01059->SetLineColor(57);
   pol01059->SetLineWidth(2);
   pol01059->SetChisquare(4.48685);
   pol01059->SetNDF(6);
   pol01059->GetXaxis()->SetLabelFont(42);
   pol01059->GetXaxis()->SetTitleOffset(1);
   pol01059->GetXaxis()->SetTitleFont(42);
   pol01059->GetYaxis()->SetLabelFont(42);
   pol01059->GetYaxis()->SetTitleFont(42);
   pol01059->SetParameter(0,1.718135);
   pol01059->SetParError(0,0.08361778);
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
   1.670666,
   1.676816,
   1.587121,
   1.808571,
   1.682825,
   1.486139,
   1.19595};
   Double_t _fex1059[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1059[7] = {
   0.2807283,
   0.207121,
   0.1815009,
   0.1743326,
   0.1865432,
   0.2232249,
   0.2996146};
   gre = new TGraphErrors(7,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(57);
   gre->SetMarkerColor(57);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","",100,725,2525);
   Graph_Graph1059->SetMinimum(0.7876787);
   Graph_Graph1059->SetMaximum(2.09156);
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
   pol01060->SetLineColor(57);
   pol01060->SetLineWidth(2);
   pol01060->SetChisquare(3.771337);
   pol01060->SetNDF(6);
   pol01060->GetXaxis()->SetLabelFont(42);
   pol01060->GetXaxis()->SetTitleOffset(1);
   pol01060->GetXaxis()->SetTitleFont(42);
   pol01060->GetYaxis()->SetLabelFont(42);
   pol01060->GetYaxis()->SetTitleFont(42);
   pol01060->SetParameter(0,1.629856);
   pol01060->SetParError(0,0.07925431);
   pol01060->SetParLimits(0,0,0);
   pol01060->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01060);
   gre->Draw("p ");
   
   TF1 *pol01061 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01061->SetFillColor(19);
   pol01061->SetFillStyle(0);
   pol01061->SetLineColor(57);
   pol01061->SetLineWidth(2);
   pol01061->SetChisquare(3.771337);
   pol01061->SetNDF(6);
   pol01061->GetXaxis()->SetLabelFont(42);
   pol01061->GetXaxis()->SetTitleOffset(1);
   pol01061->GetXaxis()->SetTitleFont(42);
   pol01061->GetYaxis()->SetLabelFont(42);
   pol01061->GetYaxis()->SetTitleFont(42);
   pol01061->SetParameter(0,1.629856);
   pol01061->SetParError(0,0.07925431);
   pol01061->SetParLimits(0,0,0);
   pol01061->Draw("same");
   
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
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, -1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 0, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 0, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 0, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","-1, 1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, -1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(55);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(55);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, -1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, -1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 0, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 0, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","0, 1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, -1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, -1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, -1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(56);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(56);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 0, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(57);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(57);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 0, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(57);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(57);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 0, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(57);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(57);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 1, -1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(57);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(57);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 1, 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(57);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(57);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","1, 1, 1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(57);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(57);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
