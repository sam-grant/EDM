void QuadScans()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jan  2 14:42:46 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1439184,71.125,1.295265,79.875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[1] = {
   0.07142857};
   Double_t Graph0_fy1003[1] = {
   72.50389};
   Double_t Graph0_fex1003[1] = {
   0};
   Double_t Graph0_fey1003[1] = {
   0.01871238};
   TGraphErrors *gre = new TGraphErrors(1,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","",100,0,1.171429);
   Graph_Graph01003->SetMinimum(72);
   Graph_Graph01003->SetMaximum(79);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01003->GetXaxis()->SetRange(1,86);
   Graph_Graph01003->GetXaxis()->CenterTitle(true);
   Graph_Graph01003->GetXaxis()->SetLabelFont(42);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetXaxis()->SetTitleFont(42);
   Graph_Graph01003->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01003->GetYaxis()->CenterTitle(true);
   Graph_Graph01003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01003->GetYaxis()->SetLabelFont(42);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetYaxis()->SetTitleFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelFont(42);
   Graph_Graph01003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,36.25195);
   quadLineFit1004->SetParError(0,0.2960164);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,507.5273);
   quadLineFit1004->SetParError(1,4.14423);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("ap");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,36.25195);
   quadLineFit1005->SetParError(0,0.2960164);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,507.5273);
   quadLineFit1005->SetParError(1,4.14423);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t Graph0_fx1005[1] = {
   0.07142857};
   Double_t Graph0_fy1005[1] = {
   73.39498};
   Double_t Graph0_fex1005[1] = {
   0};
   Double_t Graph0_fey1005[1] = {
   0.0139087};
   gre = new TGraphErrors(1,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("test_-30_quadscan");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010011005 = new TH1F("Graph_Graph_Graph010011005","test_-30_quadscan",100,0,1.171429);
   Graph_Graph_Graph010011005->SetMinimum(73.37829);
   Graph_Graph_Graph010011005->SetMaximum(73.41167);
   Graph_Graph_Graph010011005->SetDirectory(0);
   Graph_Graph_Graph010011005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010011005->SetLineColor(ci);
   Graph_Graph_Graph010011005->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010011005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011005->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010011005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010011005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010011005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010011005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(2);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,36.69749);
   quadLineFit1006->SetParError(0,0.2200257);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,513.7649);
   quadLineFit1006->SetParError(1,3.08036);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(2);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,36.69749);
   quadLineFit1007->SetParError(0,0.2200257);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,513.7649);
   quadLineFit1007->SetParError(1,3.08036);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t Graph1_fx1007[1] = {
   0.07142857};
   Double_t Graph1_fy1007[1] = {
   74.30008};
   Double_t Graph1_fex1007[1] = {
   0};
   Double_t Graph1_fey1007[1] = {
   0.021126};
   gre = new TGraphErrors(1,Graph1_fx1007,Graph1_fy1007,Graph1_fex1007,Graph1_fey1007);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11007 = new TH1F("Graph_Graph11007","Graph",100,0,1.171429);
   Graph_Graph11007->SetMinimum(74.27473);
   Graph_Graph11007->SetMaximum(74.32543);
   Graph_Graph11007->SetDirectory(0);
   Graph_Graph11007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11007->SetLineColor(ci);
   Graph_Graph11007->GetXaxis()->SetLabelFont(42);
   Graph_Graph11007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11007->GetXaxis()->SetTitleFont(42);
   Graph_Graph11007->GetYaxis()->SetLabelFont(42);
   Graph_Graph11007->GetYaxis()->SetTitleFont(42);
   Graph_Graph11007->GetZaxis()->SetLabelFont(42);
   Graph_Graph11007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(3);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,37.15004);
   quadLineFit1008->SetParError(0,0.3341981);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,520.1006);
   quadLineFit1008->SetParError(1,4.678774);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(3);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,37.15004);
   quadLineFit1009->SetParError(0,0.3341981);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,520.1006);
   quadLineFit1009->SetParError(1,4.678774);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t Graph2_fx1009[1] = {
   0.07142857};
   Double_t Graph2_fy1009[1] = {
   75.17069};
   Double_t Graph2_fex1009[1] = {
   0};
   Double_t Graph2_fey1009[1] = {
   0.01904284};
   gre = new TGraphErrors(1,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Graph",100,0,1.171429);
   Graph_Graph21009->SetMinimum(75.14784);
   Graph_Graph21009->SetMaximum(75.19354);
   Graph_Graph21009->SetDirectory(0);
   Graph_Graph21009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21009->SetLineColor(ci);
   Graph_Graph21009->GetXaxis()->SetLabelFont(42);
   Graph_Graph21009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetXaxis()->SetTitleFont(42);
   Graph_Graph21009->GetYaxis()->SetLabelFont(42);
   Graph_Graph21009->GetYaxis()->SetTitleFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelFont(42);
   Graph_Graph21009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);
   quadLineFit1010->SetLineColor(4);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(5.568996e-25);
   quadLineFit1010->SetNDF(0);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,37.58534);
   quadLineFit1010->SetParError(0,0.3012441);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,526.1948);
   quadLineFit1010->SetParError(1,4.217417);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("p ");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);
   quadLineFit1011->SetLineColor(4);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(5.568996e-25);
   quadLineFit1011->SetNDF(0);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,37.58534);
   quadLineFit1011->SetParError(0,0.3012441);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,526.1948);
   quadLineFit1011->SetParError(1,4.217417);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t Graph3_fx1011[1] = {
   0.07142857};
   Double_t Graph3_fy1011[1] = {
   76.11269};
   Double_t Graph3_fex1011[1] = {
   0};
   Double_t Graph3_fey1011[1] = {
   0.02046413};
   gre = new TGraphErrors(1,Graph3_fx1011,Graph3_fy1011,Graph3_fex1011,Graph3_fey1011);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31011 = new TH1F("Graph_Graph31011","Graph",100,0,1.171429);
   Graph_Graph31011->SetMinimum(76.08813);
   Graph_Graph31011->SetMaximum(76.13725);
   Graph_Graph31011->SetDirectory(0);
   Graph_Graph31011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31011->SetLineColor(ci);
   Graph_Graph31011->GetXaxis()->SetLabelFont(42);
   Graph_Graph31011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31011->GetXaxis()->SetTitleFont(42);
   Graph_Graph31011->GetYaxis()->SetLabelFont(42);
   Graph_Graph31011->GetYaxis()->SetTitleFont(42);
   Graph_Graph31011->GetZaxis()->SetLabelFont(42);
   Graph_Graph31011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(5);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,38.05634);
   quadLineFit1012->SetParError(0,0.3237279);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,532.7888);
   quadLineFit1012->SetParError(1,4.53219);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(5);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,38.05634);
   quadLineFit1013->SetParError(0,0.3237279);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,532.7888);
   quadLineFit1013->SetParError(1,4.53219);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   Double_t Graph4_fx1013[1] = {
   0.07142857};
   Double_t Graph4_fy1013[1] = {
   77.00013};
   Double_t Graph4_fex1013[1] = {
   0};
   Double_t Graph4_fey1013[1] = {
   0.02012557};
   gre = new TGraphErrors(1,Graph4_fx1013,Graph4_fy1013,Graph4_fex1013,Graph4_fey1013);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41013 = new TH1F("Graph_Graph41013","Graph",100,0,1.171429);
   Graph_Graph41013->SetMinimum(76.97598);
   Graph_Graph41013->SetMaximum(77.02428);
   Graph_Graph41013->SetDirectory(0);
   Graph_Graph41013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41013->SetLineColor(ci);
   Graph_Graph41013->GetXaxis()->SetLabelFont(42);
   Graph_Graph41013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41013->GetXaxis()->SetTitleFont(42);
   Graph_Graph41013->GetYaxis()->SetLabelFont(42);
   Graph_Graph41013->GetYaxis()->SetTitleFont(42);
   Graph_Graph41013->GetZaxis()->SetLabelFont(42);
   Graph_Graph41013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41013);
   
   
   TF1 *quadLineFit1014 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1014->SetFillColor(19);
   quadLineFit1014->SetFillStyle(0);
   quadLineFit1014->SetLineColor(6);
   quadLineFit1014->SetLineWidth(2);
   quadLineFit1014->SetChisquare(4.985906e-25);
   quadLineFit1014->SetNDF(0);
   quadLineFit1014->GetXaxis()->SetLabelFont(42);
   quadLineFit1014->GetXaxis()->SetTitleOffset(1);
   quadLineFit1014->GetXaxis()->SetTitleFont(42);
   quadLineFit1014->GetYaxis()->SetLabelFont(42);
   quadLineFit1014->GetYaxis()->SetTitleFont(42);
   quadLineFit1014->SetParameter(0,38.50006);
   quadLineFit1014->SetParError(0,0.3183721);
   quadLineFit1014->SetParLimits(0,0,0);
   quadLineFit1014->SetParameter(1,539.0009);
   quadLineFit1014->SetParError(1,4.457209);
   quadLineFit1014->SetParLimits(1,0,0);
   quadLineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1014);
   gre->Draw("p ");
   
   TF1 *quadLineFit1015 = new TF1("quadLineFit","[0]+[1]*x",0,1.171429, TF1::EAddToList::kNo);
   quadLineFit1015->SetFillColor(19);
   quadLineFit1015->SetFillStyle(0);
   quadLineFit1015->SetLineColor(6);
   quadLineFit1015->SetLineWidth(2);
   quadLineFit1015->SetChisquare(4.985906e-25);
   quadLineFit1015->SetNDF(0);
   quadLineFit1015->GetXaxis()->SetLabelFont(42);
   quadLineFit1015->GetXaxis()->SetTitleOffset(1);
   quadLineFit1015->GetXaxis()->SetTitleFont(42);
   quadLineFit1015->GetYaxis()->SetLabelFont(42);
   quadLineFit1015->GetYaxis()->SetTitleFont(42);
   quadLineFit1015->SetParameter(0,38.50006);
   quadLineFit1015->SetParError(0,0.3183721);
   quadLineFit1015->SetParLimits(0,0,0);
   quadLineFit1015->SetParameter(1,539.0009);
   quadLineFit1015->SetParError(1,4.457209);
   quadLineFit1015->SetParLimits(1,0,0);
   quadLineFit1015->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","  #minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
