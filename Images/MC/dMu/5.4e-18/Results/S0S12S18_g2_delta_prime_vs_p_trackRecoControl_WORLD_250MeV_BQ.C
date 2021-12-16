void S0S12S18_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.1306,-0.1117334,3076.921,0.01241483);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1043[8] = {
   884.5957,
   1123.442,
   1363.52,
   1601.454,
   1825.241,
   2101.269,
   2412.694,
   2638.456};
   Double_t _fy1043[8] = {
   -1.505097,
   -0.5269993,
   0.4393566,
   0.2400167,
   -1.085062,
   1.780217,
   0.3069618,
   -1.329132};
   Double_t _fex1043[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1043[8] = {
   -0.7513376,
   -0.4523442,
   -0.3912127,
   -0.4623224,
   -0.9149712,
   -4.012478,
   -2.073579,
   -1.146319};
   TGraphErrors *gre = new TGraphErrors(8,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,709.2097,2813.842);
   Graph_Graph1043->SetMinimum(0.0384309);
   Graph_Graph1043->SetMaximum(-0.04965931);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1043->GetXaxis()->CenterTitle(true);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1043->GetYaxis()->CenterTitle(true);
   Graph_Graph1043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol01044 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01044->SetFillColor(19);
   pol01044->SetFillStyle(0);
   pol01044->SetLineColor(2);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(8.648347);
   pol01044->SetNDF(7);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,-0.2099673);
   pol01044->SetParError(0,0.3929819);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackRecoControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.21
#pm0.4
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
