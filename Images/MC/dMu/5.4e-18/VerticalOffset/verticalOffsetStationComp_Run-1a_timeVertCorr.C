void verticalOffsetStationComp_Run-1a_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Fri May  6 12:44:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(819.5576,-1.25,2668.079,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[6] = {
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992};
   Double_t _fy1011[6] = {
   -0.2889199,
   -0.4531644,
   -0.1607922,
   0.01181593,
   -0.01040017,
   0.03403629};
   Double_t _fex1011[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[6] = {
   0.01543622,
   0.01332269,
   0.0127284,
   0.01295256,
   0.01374282,
   0.01527657};
   TGraphErrors *gre = new TGraphErrors(6,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("Run-1a");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Run-1a",100,1004.41,2483.226);
   Graph_Graph1011->SetMinimum(-1);
   Graph_Graph1011->SetMaximum(1);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw("apl");
   
   Double_t _fx1012[6] = {
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683};
   Double_t _fy1012[6] = {
   -0.4474794,
   -0.4138531,
   -0.2093635,
   -0.07458984,
   -0.01955939,
   0.006714371};
   Double_t _fex1012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1012[6] = {
   0.0156335,
   0.01372789,
   0.01326113,
   0.01378129,
   0.01490272,
   0.01673893};
   gre = new TGraphErrors(6,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,1004.106,2482.917);
   Graph_Graph1012->SetMinimum(-0.5117695);
   Graph_Graph1012->SetMaximum(0.07210992);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
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
   TText *pt_LaTex = pt->AddText("Run-1a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
