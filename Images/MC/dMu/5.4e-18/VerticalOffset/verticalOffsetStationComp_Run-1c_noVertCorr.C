#ifdef __CLING__
#pragma cling optimize(0)
#endif
void verticalOffsetStationComp_Run-1c_noVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Thu Sep 15 12:11:36 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(819.4799,-1.25,2667.729,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1015[6] = {
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688};
   Double_t _fy1015[6] = {
   -0.5085134,
   -0.6404448,
   -0.3088544,
   -0.1384816,
   -0.1280128,
   -0.07280956};
   Double_t _fex1015[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[6] = {
   0.0107462,
   0.009308147,
   0.008918082,
   0.009087128,
   0.009666599,
   0.01076956};
   TGraphErrors *gre = new TGraphErrors(6,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("Run-1c");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Run-1c",100,1004.305,2482.904);
   Graph_Graph1015->SetMinimum(-1);
   Graph_Graph1015->SetMaximum(1);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Momentum [MeV]");
   Graph_Graph1015->GetXaxis()->CenterTitle(true);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1015->GetYaxis()->CenterTitle(true);
   Graph_Graph1015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   gre->Draw("apl");
   
   Double_t _fx1016[6] = {
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485};
   Double_t _fy1016[6] = {
   -0.6204031,
   -0.5635104,
   -0.3339691,
   -0.2024419,
   -0.1641854,
   -0.111749};
   Double_t _fex1016[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1016[6] = {
   0.01099632,
   0.009682771,
   0.009383781,
   0.009791484,
   0.01057833,
   0.0119017};
   gre = new TGraphErrors(6,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,1004.085,2482.703);
   Graph_Graph1016->SetMinimum(-0.6845547);
   Graph_Graph1016->SetMaximum(-0.04669212);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.15,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Station 12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Station 18","lpf");
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
   
   TPaveText *pt = new TPaveText(0.4284422,0.94,0.5715578,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1c");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
