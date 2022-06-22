void S12S18_AEDM_vs_p_overlay_Run-1d_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(819.2245,-2.798415e-05,2667.425,0.05019623);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1022[6] = {
   1127.258,
   1373.207,
   1619.861,
   1866.687,
   2115.945,
   2359.391};
   Double_t _fy1022[6] = {
   0.01783374,
   0.03350915,
   0.02248476,
   0.027985,
   0.02892483,
   0.02403656};
   Double_t _fex1022[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1022[6] = {
   0.00949102,
   0.008316378,
   0.008014203,
   0.008261358,
   0.00877323,
   0.009659553};
   TGraphErrors *gre = new TGraphErrors(6,_fx1022,_fy1022,_fex1022,_fey1022);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,1004.045,2482.605);
   Graph_Graph1022->SetMinimum(0.004994438);
   Graph_Graph1022->SetMaximum(0.04517381);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1022->GetXaxis()->CenterTitle(true);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1022->GetYaxis()->CenterTitle(true);
   Graph_Graph1022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.7,0.8,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1d","lpf");
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
