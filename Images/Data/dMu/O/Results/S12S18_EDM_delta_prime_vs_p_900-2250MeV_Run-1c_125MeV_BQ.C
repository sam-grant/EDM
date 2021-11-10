void S12S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-1.243136,2499.5,1.599761);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1125[11] = {
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187};
   Double_t _fy1125[11] = {
   0.2017258,
   0.546178,
   -0.05111747,
   -0.1951143,
   -0.07769596,
   -0.3791968,
   0.1339701,
   -0.5359655,
   -0.02946702,
   0.004845226,
   -0.4657075};
   Double_t _fex1125[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1125[11] = {
   0.4049983,
   0.3285919,
   0.2819834,
   0.2571378,
   0.2412808,
   0.2444932,
   0.2432392,
   0.264818,
   0.2882137,
   0.3350372,
   0.3945109};
   TGraphErrors *gre = new TGraphErrors(11,_fx1125,_fy1125,_fex1125,_fey1125);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1125 = new TH1F("Graph_Graph1125","S12S18_",100,812,2312);
   Graph_Graph1125->SetMinimum(-0.9588461);
   Graph_Graph1125->SetMaximum(1.315471);
   Graph_Graph1125->SetDirectory(0);
   Graph_Graph1125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1125->SetLineColor(ci);
   Graph_Graph1125->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1125->GetXaxis()->CenterTitle(true);
   Graph_Graph1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph1125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph1125->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1125->GetYaxis()->CenterTitle(true);
   Graph_Graph1125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph1125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1125->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph1125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1125);
   
   
   TF1 *pol01126 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01126->SetFillColor(19);
   pol01126->SetFillStyle(0);
   pol01126->SetLineColor(2);
   pol01126->SetLineWidth(2);
   pol01126->SetChisquare(10.55414);
   pol01126->SetNDF(10);
   pol01126->GetXaxis()->SetLabelFont(42);
   pol01126->GetXaxis()->SetTitleOffset(1);
   pol01126->GetXaxis()->SetTitleFont(42);
   pol01126->GetYaxis()->SetLabelFont(42);
   pol01126->GetYaxis()->SetTitleFont(42);
   pol01126->SetParameter(0,-0.1008548);
   pol01126->SetParError(0,0.08590787);
   pol01126->SetParLimits(0,0,0);
   pol01126->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01126);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.1
#pm0.09
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
