void S18_AEDM_vs_p_overlay_Run-1c_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(819.2636,-0.02456179,2667.528,0.09455792);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1012[6] = {
   1127.308,
   1372.915,
   1619.591,
   1866.595,
   2115.817,
   2359.484};
   Double_t _fy1012[6] = {
   0.05912866,
   0.009004961,
   0.03568672,
   0.04044022,
   0.02717575,
   0.03261073};
   Double_t _fex1012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1012[6] = {
   0.01557598,
   0.01371347,
   0.01328514,
   0.01379134,
   0.01475017,
   0.01623919};
   TGraphErrors *gre = new TGraphErrors(6,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,1004.09,2482.702);
   Graph_Graph1012->SetMinimum(-0.01264982);
   Graph_Graph1012->SetMaximum(0.08264595);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1012->GetXaxis()->CenterTitle(true);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1012->GetYaxis()->CenterTitle(true);
   Graph_Graph1012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.7,0.8,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1c","lpf");
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
