void verticalOffsetStationComp_Run-1c_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 15:51:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(453.5532,-1.25,3038.337,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1015[8] = {
   884.3505,
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54};
   Double_t _fy1015[8] = {
   0.2184978,
   -0.4028806,
   -0.5342711,
   -0.2022927,
   -0.03165616,
   -0.02058869,
   0.03476062,
   0.1470785};
   Double_t _fex1015[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[8] = {
   0.01418345,
   0.01074611,
   0.009308063,
   0.008917926,
   0.009086981,
   0.009666378,
   0.01076934,
   0.0129109};
   TGraphErrors *gre = new TGraphErrors(8,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("Run-1c");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Run-1c",100,712.0316,2779.858);
   Graph_Graph1015->SetMinimum(-1);
   Graph_Graph1015->SetMaximum(1);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
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
   
   Double_t _fx1016[8] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1016[8] = {
   0.07400714,
   -0.515818,
   -0.4586708,
   -0.2290593,
   -0.09722382,
   -0.05849442,
   -0.005661826,
   0.02117755};
   Double_t _fex1016[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1016[8] = {
   0.01439275,
   0.01099636,
   0.00968276,
   0.009383729,
   0.009791495,
   0.01057808,
   0.01190168,
   0.01416838};
   gre = new TGraphErrors(8,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,711.3269,2778.711);
   Graph_Graph1016->SetMinimum(-0.5883357);
   Graph_Graph1016->SetMaximum(0.1499213);
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
