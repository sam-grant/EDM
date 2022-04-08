void verticalOffsetFits_S18()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 16:44:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(757.374,-1.25,2977.171,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[7] = {
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205};
   Double_t _fy1009[7] = {
   -0.4474794,
   -0.4138531,
   -0.2093635,
   -0.07458984,
   -0.01955939,
   0.006714371,
   0.01347812};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.0156335,
   0.01372789,
   0.01326113,
   0.01378129,
   0.01490272,
   0.01673893,
   0.01964262};
   TGraphErrors *gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,979.3537,2755.191);
   Graph_Graph1009->SetMinimum(-1);
   Graph_Graph1009->SetMaximum(1);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
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
   
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);
   fit1010->SetLineColor(2);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(110.7639);
   fit1010->SetNDF(4);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,-0.8223826);
   fit1010->SetParError(0,0.02992371);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.0003592212);
   fit1010->SetParError(1,1.545551e-05);
   fit1010->SetParLimits(1,0,0);
   fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1010);
   gre->Draw("ap");
   
   Double_t _fx1011[7] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239};
   Double_t _fy1011[7] = {
   -0.3631521,
   -0.3613913,
   -0.1888101,
   -0.05875643,
   -0.001628842,
   0.002780129,
   0.0156971};
   Double_t _fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[7] = {
   0.01336411,
   0.0117414,
   0.01132148,
   0.01180217,
   0.01277149,
   0.01431503,
   0.01680647};
   gre = new TGraphErrors(7,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,979.1654,2755.245);
   Graph_Graph1011->SetMinimum(-0.4174182);
   Graph_Graph1011->SetMaximum(0.07340554);
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
   
   
   TF1 *fit1012 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1012->SetFillColor(19);
   fit1012->SetFillStyle(0);
   fit1012->SetLineColor(2);
   fit1012->SetLineWidth(2);
   fit1012->SetChisquare(125.7187);
   fit1012->SetNDF(4);
   fit1012->GetXaxis()->SetLabelFont(42);
   fit1012->GetXaxis()->SetTitleOffset(1);
   fit1012->GetXaxis()->SetTitleFont(42);
   fit1012->GetYaxis()->SetLabelFont(42);
   fit1012->GetYaxis()->SetTitleFont(42);
   fit1012->SetParameter(0,-0.727268);
   fit1012->SetParError(0,0.02558691);
   fit1012->SetParLimits(0,0,0);
   fit1012->SetParameter(1,0.0003198354);
   fit1012->SetParError(1,1.321871e-05);
   fit1012->SetParLimits(1,0,0);
   fit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1012);
   gre->Draw("p ");
   
   Double_t _fx1013[7] = {
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1013[7] = {
   -0.515818,
   -0.4586708,
   -0.2290593,
   -0.09722382,
   -0.05849442,
   -0.005661826,
   0.02117755};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.01099636,
   0.00968276,
   0.009383729,
   0.009791495,
   0.01057808,
   0.01190168,
   0.01416838};
   gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,979.3911,2754.341);
   Graph_Graph1013->SetMinimum(-0.5830303);
   Graph_Graph1013->SetMaximum(0.09156195);
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
   
   
   TF1 *fit1014 = new TF1("fit","[0]+[1]*x",1127.522,2607.54, TF1::EAddToList::kNo);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);
   fit1014->SetLineColor(2);
   fit1014->SetLineWidth(2);
   fit1014->SetChisquare(221.1691);
   fit1014->SetNDF(4);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,-0.9025367);
   fit1014->SetParError(0,0.02125949);
   fit1014->SetParLimits(0,0,0);
   fit1014->SetParameter(1,0.0003884853);
   fit1014->SetParError(1,1.100532e-05);
   fit1014->SetParLimits(1,0,0);
   fit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1014);
   gre->Draw("p ");
   
   Double_t _fx1015[7] = {
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1015[7] = {
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394,
   0.01548025};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887,
   0.01043666};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,979.2867,2754.721);
   Graph_Graph1015->SetMinimum(-0.8017174);
   Graph_Graph1015->SetMaximum(0.1011564);
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
   
   
   TF1 *fit1016 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1016->SetFillColor(19);
   fit1016->SetFillStyle(0);
   fit1016->SetLineColor(2);
   fit1016->SetLineWidth(2);
   fit1016->SetChisquare(569.2721);
   fit1016->SetNDF(4);
   fit1016->GetXaxis()->SetLabelFont(42);
   fit1016->GetXaxis()->SetTitleOffset(1);
   fit1016->GetXaxis()->SetTitleFont(42);
   fit1016->GetYaxis()->SetLabelFont(42);
   fit1016->GetYaxis()->SetTitleFont(42);
   fit1016->SetParameter(0,-1.250085);
   fit1016->SetParError(0,0.01566531);
   fit1016->SetParLimits(0,0,0);
   fit1016->SetParameter(1,0.000523953);
   fit1016->SetParError(1,8.11422e-06);
   fit1016->SetParLimits(1,0,0);
   fit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1016);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.69,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
