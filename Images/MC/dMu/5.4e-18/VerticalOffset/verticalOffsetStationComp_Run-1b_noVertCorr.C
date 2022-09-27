#ifdef __CLING__
#pragma cling optimize(0)
#endif
void verticalOffsetStationComp_Run-1b_noVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Thu Sep 15 12:11:36 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(819.5982,-1.25,2667.768,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[6] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74};
   Double_t _fy1013[6] = {
   -0.3224613,
   -0.4855784,
   -0.1826274,
   -0.04676929,
   -0.06542192,
   -0.01746437};
   Double_t _fex1013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[6] = {
   0.01316462,
   0.01135827,
   0.01085825,
   0.01107332,
   0.01174054,
   0.01303666};
   TGraphErrors *gre = new TGraphErrors(6,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("Run-1b");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","Run-1b",100,1004.415,2482.951);
   Graph_Graph1013->SetMinimum(-1);
   Graph_Graph1013->SetMaximum(1);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Momentum [MeV]");
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
   
   gre->Draw("apl");
   
   Double_t _fx1014[6] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264};
   Double_t _fy1014[6] = {
   -0.4245642,
   -0.4230591,
   -0.2505682,
   -0.1206441,
   -0.06399819,
   -0.05979813};
   Double_t _fex1014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1014[6] = {
   0.01336412,
   0.01174143,
   0.0113216,
   0.01180227,
   0.01277114,
   0.01431537};
   gre = new TGraphErrors(6,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,1003.963,2482.473);
   Graph_Graph1014->SetMinimum(-0.4771729);
   Graph_Graph1014->SetMaximum(-0.006238202);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
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
