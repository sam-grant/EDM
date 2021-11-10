void S12S18_g2_delta_prime_vs_p_750-2500MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-2.128727,2843.25,1.307428);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1035[14] = {
   812,
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
   2187,
   2312,
   2437};
   Double_t _fy1035[14] = {
   -0.4411097,
   -0.2435844,
   -0.3515487,
   -0.256491,
   0.177578,
   0.008904616,
   0.2423463,
   0.02014815,
   0.6211743,
   0.1085466,
   -0.2476454,
   0.5246734,
   0.202271,
   -0.1009985};
   Double_t _fex1035[14] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1035[14] = {
   0.4887279,
   0.3596362,
   0.2921296,
   0.2507189,
   0.2288845,
   0.2145417,
   0.2170532,
   0.2163824,
   0.2357839,
   0.2563667,
   0.298488,
   0.3513115,
   0.452129,
   0.6660363};
   TGraphErrors *gre = new TGraphErrors(14,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","S12S18_",100,649.5,2599.5);
   Graph_Graph1035->SetMinimum(-1.785111);
   Graph_Graph1035->SetMaximum(0.9638127);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1035->GetXaxis()->CenterTitle(true);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
   Graph_Graph1035->GetYaxis()->CenterTitle(true);
   Graph_Graph1035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1035->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   
   TF1 *pol01036 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01036->SetFillColor(19);
   pol01036->SetFillStyle(0);
   pol01036->SetLineColor(2);
   pol01036->SetLineWidth(2);
   pol01036->SetChisquare(15.06236);
   pol01036->SetNDF(13);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,0.06727696);
   pol01036->SetParError(0,0.07399947);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.067
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
