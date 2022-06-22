void S12S18_AEDM_vs_p_overlay_Run-1b_1000_2500()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 10:31:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(819.3752,-0.01355631,2667.554,0.0563772);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1020[6] = {
   1127.405,
   1373.258,
   1619.937,
   1866.797,
   2116.311,
   2359.524};
   Double_t _fy1020[6] = {
   0.03143813,
   0.01988616,
   0.01356499,
   0.009475396,
   0.02443705,
   0.02854857};
   Double_t _fex1020[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1020[6] = {
   0.01328349,
   0.01157177,
   0.011092,
   0.01137612,
   0.01204196,
   0.01316028};
   TGraphErrors *gre = new TGraphErrors(6,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,1004.193,2482.736);
   Graph_Graph1020->SetMinimum(-0.006562959);
   Graph_Graph1020->SetMaximum(0.04938385);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetTitle("Decay vertex momentum (Run-1a) [MeV]");
   Graph_Graph1020->GetXaxis()->CenterTitle(true);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetTitle("A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1020->GetYaxis()->CenterTitle(true);
   Graph_Graph1020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
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
