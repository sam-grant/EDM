void verticalOffset_trackReco_WORLD_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/
//=========  (Thu Mar 24 10:36:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(62.49997,-0.6562478,3437.5,0.07291643);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[10] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t _fy1001[10] = {
   0.01536076,
   -0.2364458,
   -0.1710175,
   -0.1156669,
   -0.1583614,
   -0.1010138,
   -0.0355223,
   -0.02855737,
   0.002416962,
   -0.1042537};
   Double_t _fex1001[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[10] = {
   0.04444242,
   0.02567444,
   0.02110429,
   0.01926599,
   0.01830518,
   0.01801057,
   0.01848968,
   0.01916832,
   0.01909694,
   0.04069422};
   TGraphErrors *gre = new TGraphErrors(10,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("Sim: reco vertices");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Sim: reco vertices",100,400,3100);
   Graph_Graph1001->SetMinimum(-0.5833314);
   Graph_Graph1001->SetMaximum(1.216797e-309);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("apl");
   
   Double_t _fx1002[10] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t _fy1002[10] = {
   -0.182158,
   -0.5272432,
   -0.406087,
   -0.3319106,
   -0.2997235,
   -0.2011034,
   -0.1696438,
   -0.1764535,
   -0.1115426,
   -0.1295859};
   Double_t _fex1002[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1002[10] = {
   0.03148978,
   0.01801769,
   0.01479965,
   0.01359419,
   0.01297277,
   0.01308737,
   0.01384361,
   0.0149547,
   0.01479692,
   0.03458664};
   gre = new TGraphErrors(10,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,400,3100);
   Graph_Graph1002->SetMinimum(-0.5902871);
   Graph_Graph1002->SetMaximum(-0.04997304);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.59,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","No misaligment","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","With misaligment","lpf");
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
   
   TPaveText *pt = new TPaveText(0.333593,0.94,0.666407,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Sim: reco vertices");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
