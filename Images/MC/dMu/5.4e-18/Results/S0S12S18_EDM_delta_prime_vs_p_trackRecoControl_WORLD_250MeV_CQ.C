void S0S12S18_EDM_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.417,1.557686,3045.949,1.773088);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1053[8] = {
   883.8391,
   1126.202,
   1373.788,
   1622.437,
   1870.724,
   2119.217,
   2366.762,
   2613.527};
   Double_t _fy1053[8] = {
   1.734916,
   1.480803,
   1.856072,
   1.699212,
   1.919821,
   1.392785,
   1.614644,
   1.929993};
   Double_t _fex1053[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1053[8] = {
   -0.255461,
   -0.1770859,
   -0.1460098,
   -0.1337963,
   -0.1346183,
   -0.1491533,
   -0.1835422,
   -0.268758};
   TGraphErrors *gre = new TGraphErrors(8,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,710.8702,2786.496);
   Graph_Graph1053->SetMinimum(1.579227);
   Graph_Graph1053->SetMaximum(1.751548);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1053->GetXaxis()->CenterTitle(true);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1053->GetYaxis()->CenterTitle(true);
   Graph_Graph1053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1053->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   
   TF1 *pol01054 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01054->SetFillColor(19);
   pol01054->SetFillStyle(0);
   pol01054->SetLineColor(2);
   pol01054->SetLineWidth(2);
   pol01054->SetChisquare(0.2764106);
   pol01054->SetNDF(7);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.703531);
   pol01054->SetParError(0,0.07025598);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
#pm0.07
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
