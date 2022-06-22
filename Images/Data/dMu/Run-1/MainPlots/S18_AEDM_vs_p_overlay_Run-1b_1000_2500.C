void S18_AEDM_vs_p_overlay_Run-1b_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(819.1514,-0.03523613,2667.292,0.08572794);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[6] = {
   1127.175,
   1372.867,
   1619.553,
   1866.461,
   2116.166,
   2359.269};
   Double_t _fy1011[6] = {
   0.0466427,
   0.01691321,
   0.006437529,
   0.001539099,
   0.02840641,
   0.02686575};
   Double_t _fex1011[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[6] = {
   0.01892456,
   0.01663659,
   0.01601976,
   0.01661455,
   0.01778192,
   0.01951646};
   TGraphErrors *gre = new TGraphErrors(6,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,1003.966,2482.478);
   Graph_Graph1011->SetMinimum(-0.02313972);
   Graph_Graph1011->SetMaximum(0.07363153);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.7,0.8,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
