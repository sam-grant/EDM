void verticalOffsetOffsetDataFit_Run-1b_S18()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.1554,-0.44375,2977.255,-0.006249997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[7] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239};
   Double_t _fy1013[7] = {
   -0.3631521,
   -0.3613913,
   -0.1888101,
   -0.05875643,
   -0.001628842,
   0.002780129,
   0.0156971};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.01336411,
   0.0117414,
   0.01132148,
   0.01180217,
   0.01277149,
   0.01431503,
   0.01680647};
   TGraphErrors *gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","S18",100,979.1654,2755.245);
   Graph_Graph1013->SetMinimum(-0.4);
   Graph_Graph1013->SetMaximum(-0.05);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *fit1014 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1014->SetLineColor(ci);
   fit1014->SetLineWidth(2);
   fit1014->SetChisquare(125.7187);
   fit1014->SetNDF(4);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,-0.727268);
   fit1014->SetParError(0,0.02558691);
   fit1014->SetParLimits(0,0,0);
   fit1014->SetParameter(1,0.0003198354);
   fit1014->SetParError(1,1.321871e-05);
   fit1014->SetParLimits(1,0,0);
   fit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1014);
   gre->Draw("ap");
   
   Double_t _fx1015[7] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239};
   Double_t _fy1015[7] = {
   -0.3631521,
   -0.3613913,
   -0.1888101,
   -0.05875643,
   -0.001628842,
   0.002780129,
   0.0156971};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.01336411,
   0.0117414,
   0.01132148,
   0.01180217,
   0.01277149,
   0.01431503,
   0.01680647};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10131015 = new TH1F("Graph_Graph_Graph10131015","S18",100,979.1654,2755.245);
   Graph_Graph_Graph10131015->SetMinimum(-0.4);
   Graph_Graph_Graph10131015->SetMaximum(-0.05);
   Graph_Graph_Graph10131015->SetDirectory(0);
   Graph_Graph_Graph10131015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10131015->SetLineColor(ci);
   Graph_Graph_Graph10131015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10131015->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10131015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10131015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10131015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10131015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10131015->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10131015->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10131015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10131015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10131015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10131015->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10131015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10131015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10131015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10131015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10131015);
   
   
   TF1 *fit1016 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1016->SetFillColor(19);
   fit1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1016->SetLineColor(ci);
   fit1016->SetLineWidth(2);
   fit1016->SetChisquare(125.7187);
   fit1016->SetNDF(4);
   fit1016->GetXaxis()->SetLabelFont(42);
   fit1016->GetXaxis()->SetTitleOffset(1);
   fit1016->GetXaxis()->SetTitleFont(42);
   fit1016->GetYaxis()->SetLabelFont(42);
   fit1016->GetYaxis()->SetTitleFont(42);
   fit1016->SetParameter(0,-0.727268);
   fit1016->SetParError(0,0.02558691);
   fit1016->SetParLimits(0,0,0);
   fit1016->SetParameter(1,0.0003198354);
   fit1016->SetParError(1,1.321871e-05);
   fit1016->SetParLimits(1,0,0);
   fit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1016);
   gre->Draw("p ");
   
   TF1 *fit1017 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1017->SetFillColor(19);
   fit1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1017->SetLineColor(ci);
   fit1017->SetLineWidth(2);
   fit1017->SetChisquare(125.7187);
   fit1017->SetNDF(4);
   fit1017->GetXaxis()->SetLabelFont(42);
   fit1017->GetXaxis()->SetTitleOffset(1);
   fit1017->GetXaxis()->SetTitleFont(42);
   fit1017->GetYaxis()->SetLabelFont(42);
   fit1017->GetYaxis()->SetTitleFont(42);
   fit1017->SetParameter(0,-0.727268);
   fit1017->SetParError(0,0.02558691);
   fit1017->SetParLimits(0,0,0);
   fit1017->SetParameter(1,0.0003198354);
   fit1017->SetParError(1,1.321871e-05);
   fit1017->SetParLimits(1,0,0);
   fit1017->Draw("SAME");
   
   TF1 *fit1018 = new TF1("fit","[0]+[1]*x",1127.627,2607.778, TF1::EAddToList::kNo);
   fit1018->SetFillColor(19);
   fit1018->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1018->SetLineColor(ci);
   fit1018->SetLineWidth(2);
   fit1018->SetChisquare(125.7187);
   fit1018->SetNDF(4);
   fit1018->GetXaxis()->SetLabelFont(42);
   fit1018->GetXaxis()->SetTitleOffset(1);
   fit1018->GetXaxis()->SetTitleFont(42);
   fit1018->GetYaxis()->SetLabelFont(42);
   fit1018->GetYaxis()->SetTitleFont(42);
   fit1018->SetParameter(0,-0.727268);
   fit1018->SetParError(0,0.02558691);
   fit1018->SetParLimits(0,0,0);
   fit1018->SetParameter(1,0.0003198354);
   fit1018->SetParError(1,1.321871e-05);
   fit1018->SetParLimits(1,0,0);
   fit1018->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","0 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","#minus1 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
