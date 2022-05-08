void S12S18_AEDM_vs_p_overlay_Run-1b_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 19:12:39 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(819.3734,-0.003082711,2667.556,0.07269462);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[6] = {
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525};
   Double_t _fy1002[6] = {
   0.03400325,
   0.02631389,
   0.0166016,
   0.01637092,
   0.03297551,
   0.04649221};
   Double_t _fex1002[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1002[6] = {
   0.01328135,
   0.0115722,
   0.01109154,
   0.01137645,
   0.01204376,
   0.013159};
   TGraphErrors *gre = new TGraphErrors(6,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} (BLIND) [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,1004.192,2482.737);
   Graph_Graph1002->SetMinimum(0.004495023);
   Graph_Graph1002->SetMaximum(0.06511689);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("A_{EDM} (BLIND) [mrad]");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
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
