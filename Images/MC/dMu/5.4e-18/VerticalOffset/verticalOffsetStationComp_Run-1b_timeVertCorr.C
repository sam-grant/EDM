void verticalOffsetStationComp_Run-1b_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Sun Jun 12 17:26:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(819.5982,-1.25,2667.768,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1033[6] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74};
   Double_t _fy1033[6] = {
   -0.2604132,
   -0.4231579,
   -0.1198555,
   0.01641377,
   -0.00211221,
   0.04664548};
   Double_t _fex1033[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[6] = {
   0.01316455,
   0.01135825,
   0.01085805,
   0.01107303,
   0.01174059,
   0.01303659};
   TGraphErrors *gre = new TGraphErrors(6,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("Run-1b");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","Run-1b",100,1004.415,2482.951);
   Graph_Graph1033->SetMinimum(-1);
   Graph_Graph1033->SetMaximum(1);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetTitle("Momentum [MeV]");
   Graph_Graph1033->GetXaxis()->CenterTitle(true);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1033->GetYaxis()->CenterTitle(true);
   Graph_Graph1033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   gre->Draw("apl");
   
   Double_t _fx1034[6] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264};
   Double_t _fy1034[6] = {
   -0.3631521,
   -0.3613913,
   -0.1888101,
   -0.05875643,
   -0.001628842,
   0.002780129};
   Double_t _fex1034[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1034[6] = {
   0.01336411,
   0.0117414,
   0.01132148,
   0.01180217,
   0.01277149,
   0.01431503};
   gre = new TGraphErrors(6,_fx1034,_fy1034,_fex1034,_fey1034);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1034 = new TH1F("Graph_Graph1034","",100,1003.963,2482.473);
   Graph_Graph1034->SetMinimum(-0.4158774);
   Graph_Graph1034->SetMaximum(0.0564563);
   Graph_Graph1034->SetDirectory(0);
   Graph_Graph1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1034->SetLineColor(ci);
   Graph_Graph1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph1034->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph1034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1034);
   
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
   
   TPaveText *pt = new TPaveText(0.4278141,0.94,0.5721859,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1b");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
