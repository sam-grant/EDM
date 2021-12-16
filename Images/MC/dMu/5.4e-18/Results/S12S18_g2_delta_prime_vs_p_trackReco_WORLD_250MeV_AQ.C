void S12S18_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:50:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.838,-0.6252703,3046.905,0.3480935);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1101[8] = {
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793,
   2612.56};
   Double_t _fy1101[8] = {
   -0.1385884,
   -0.1568641,
   0.01168829,
   -0.1586813,
   -0.0598917,
   -0.3476458,
   -0.1821653,
   -0.1821619};
   Double_t _fex1101[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1101[8] = {
   0.1415802,
   0.1247637,
   0.1147321,
   0.1099837,
   0.1107156,
   0.1180296,
   0.1342155,
   0.1680078};
   TGraphErrors *gre = new TGraphErrors(8,_fx1101,_fy1101,_fex1101,_fey1101);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1101 = new TH1F("Graph_Graph1101","",100,701.4447,2786.298);
   Graph_Graph1101->SetMinimum(-0.5279339);
   Graph_Graph1101->SetMaximum(0.2507572);
   Graph_Graph1101->SetDirectory(0);
   Graph_Graph1101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1101->SetLineColor(ci);
   Graph_Graph1101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1101->GetXaxis()->CenterTitle(true);
   Graph_Graph1101->GetXaxis()->SetLabelFont(42);
   Graph_Graph1101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1101->GetXaxis()->SetTitleFont(42);
   Graph_Graph1101->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1101->GetYaxis()->CenterTitle(true);
   Graph_Graph1101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1101->GetYaxis()->SetLabelFont(42);
   Graph_Graph1101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1101->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1101->GetYaxis()->SetTitleFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelFont(42);
   Graph_Graph1101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1101);
   
   
   TF1 *pol01102 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01102->SetFillColor(19);
   pol01102->SetFillStyle(0);
   pol01102->SetLineColor(2);
   pol01102->SetLineWidth(2);
   pol01102->SetChisquare(5.555135);
   pol01102->SetNDF(7);
   pol01102->GetXaxis()->SetLabelFont(42);
   pol01102->GetXaxis()->SetTitleOffset(1);
   pol01102->GetXaxis()->SetTitleFont(42);
   pol01102->GetYaxis()->SetLabelFont(42);
   pol01102->GetYaxis()->SetTitleFont(42);
   pol01102->SetParameter(0,-0.146263);
   pol01102->SetParError(0,0.04397696);
   pol01102->SetParLimits(0,0,0);
   pol01102->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01102);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.15
#pm0.04
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
