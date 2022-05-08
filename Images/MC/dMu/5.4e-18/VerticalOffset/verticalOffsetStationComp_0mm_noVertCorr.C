void verticalOffsetStationComp_0mm_noVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Fri May  6 12:44:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(813.3306,-1.25,2672.264,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1019[6] = {
   1123.153,
   1371.24,
   1619.947,
   1867.163,
   2114.835,
   2362.441};
   Double_t _fy1019[6] = {
   -0.4631283,
   -0.3571625,
   -0.3260599,
   -0.2276017,
   -0.1849982,
   -0.14805};
   Double_t _fex1019[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[6] = {
   0.02173917,
   0.01993924,
   0.01900144,
   0.01911805,
   0.02052363,
   0.02282507};
   TGraphErrors *gre = new TGraphErrors(6,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("0 mm");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","0 mm",100,999.2239,2486.37);
   Graph_Graph1019->SetMinimum(-1);
   Graph_Graph1019->SetMaximum(1);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1019->GetXaxis()->CenterTitle(true);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1019->GetYaxis()->CenterTitle(true);
   Graph_Graph1019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   gre->Draw("apl");
   
   Double_t _fx1020[6] = {
   1123.189,
   1370.963,
   1619.706,
   1866.59,
   2114.577,
   2363.22};
   Double_t _fy1020[6] = {
   -0.3197064,
   -0.2356393,
   -0.1934342,
   -0.1606457,
   -0.1123218,
   -0.161165};
   Double_t _fex1020[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1020[6] = {
   0.02179301,
   0.02010147,
   0.01935488,
   0.0197135,
   0.02123517,
   0.02365718};
   gre = new TGraphErrors(6,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,999.1856,2487.223);
   Graph_Graph1020->SetMinimum(-0.3665407);
   Graph_Graph1020->SetMaximum(-0.06604539);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
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
   
   TPaveText *pt = new TPaveText(0.4435176,0.94,0.5564824,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("0 mm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
