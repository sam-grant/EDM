void verticalOffsetStationComp_1mm_noVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Tue Apr  5 16:49:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(446.4153,-1.25,3048.173,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1019[8] = {
   880.0417,
   1123.23,
   1371.169,
   1620.035,
   1867.131,
   2114.768,
   2362.473,
   2614.547};
   Double_t _fy1019[8] = {
   -0.6617422,
   -0.4532668,
   -0.3271361,
   -0.317057,
   -0.2210203,
   -0.1789262,
   -0.1760857,
   -0.1362666};
   Double_t _fex1019[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1019[8] = {
   0.02426815,
   0.01994305,
   0.018295,
   0.01743536,
   0.01759611,
   0.01889759,
   0.02093792,
   0.02177276};
   TGraphErrors *gre = new TGraphErrors(8,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("#pm1 mm");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","#pm1 mm",100,706.5911,2787.998);
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
   
   Double_t _fx1020[8] = {
   880.4848,
   1123.086,
   1370.894,
   1619.625,
   1866.463,
   2114.779,
   2363.232,
   2612.947};
   Double_t _fy1020[8] = {
   -0.2936617,
   -0.3471812,
   -0.2760456,
   -0.2341696,
   -0.1750594,
   -0.09208386,
   -0.14351,
   -0.05264044};
   Double_t _fex1020[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1020[8] = {
   0.02433679,
   0.0200072,
   0.01847941,
   0.01778719,
   0.01817833,
   0.01960831,
   0.02184511,
   0.02230312};
   gre = new TGraphErrors(8,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,707.2386,2786.194);
   Graph_Graph1020->SetMinimum(-0.4008735);
   Graph_Graph1020->SetMaximum(0.003347785);
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
   
   TPaveText *pt = new TPaveText(0.4334673,0.94,0.5665327,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#pm1 mm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
