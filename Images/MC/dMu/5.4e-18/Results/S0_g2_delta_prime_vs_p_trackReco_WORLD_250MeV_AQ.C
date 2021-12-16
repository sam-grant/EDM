void S0_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:48:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.8959,-1.163015,3047.151,0.8142002);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1095[8] = {
   875.2717,
   1123.906,
   1373.288,
   1622.379,
   1870.823,
   2119.356,
   2366.927,
   2612.775};
   Double_t _fy1095[8] = {
   0.09761434,
   -0.1302947,
   0.1380157,
   -0.1304273,
   -0.2238934,
   -0.2754544,
   -0.3665221,
   -0.5976937};
   Double_t _fex1095[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1095[8] = {
   0.1886779,
   0.1587957,
   0.1423189,
   0.1360587,
   0.1398342,
   0.1564441,
   0.1956957,
   0.2940801};
   TGraphErrors *gre = new TGraphErrors(8,_fx1095,_fy1095,_fex1095,_fey1095);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1095 = new TH1F("Graph_Graph1095","",100,701.5214,2786.525);
   Graph_Graph1095->SetMinimum(-0.9652938);
   Graph_Graph1095->SetMaximum(0.6164786);
   Graph_Graph1095->SetDirectory(0);
   Graph_Graph1095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1095->SetLineColor(ci);
   Graph_Graph1095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1095->GetXaxis()->CenterTitle(true);
   Graph_Graph1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph1095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph1095->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1095->GetYaxis()->CenterTitle(true);
   Graph_Graph1095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph1095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1095->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1095);
   
   
   TF1 *pol01096 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01096->SetFillColor(19);
   pol01096->SetFillStyle(0);
   pol01096->SetLineColor(2);
   pol01096->SetLineWidth(2);
   pol01096->SetChisquare(10.28219);
   pol01096->SetNDF(7);
   pol01096->GetXaxis()->SetLabelFont(42);
   pol01096->GetXaxis()->SetTitleOffset(1);
   pol01096->GetXaxis()->SetTitleFont(42);
   pol01096->GetYaxis()->SetLabelFont(42);
   pol01096->GetYaxis()->SetTitleFont(42);
   pol01096->SetParameter(0,-0.1391005);
   pol01096->SetParError(0,0.05765699);
   pol01096->SetParLimits(0,0,0);
   pol01096->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01096);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackReco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.14
#pm0.06
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
