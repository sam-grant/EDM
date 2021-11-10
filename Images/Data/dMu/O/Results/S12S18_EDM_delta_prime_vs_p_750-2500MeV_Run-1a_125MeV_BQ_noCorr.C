void S12S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1690768,2843.25,0.2387159);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1053[14] = {
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
   Double_t _fy1053[14] = {
   0.05657907,
   -0.009136627,
   -0.01776668,
   -0.02785608,
   -0.04919745,
   -0.09087209,
   -0.02263717,
   -0.006378013,
   -0.01881898,
   -0.02057118,
   0.003235986,
   0.03753996,
   0.02909738,
   0.09255958};
   Double_t _fex1053[14] = {
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
   Double_t _fey1053[14] = {
   0.05140274,
   0.04217002,
   0.03712553,
   0.03359376,
   0.03153741,
   0.02994036,
   0.02994964,
   0.02902356,
   0.03005956,
   0.03024085,
   0.03178609,
   0.03226296,
   0.03367309,
   0.03623494};
   TGraphErrors *gre = new TGraphErrors(14,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","S12S18_",100,649.5,2599.5);
   Graph_Graph1053->SetMinimum(-0.1282975);
   Graph_Graph1053->SetMaximum(0.1979366);
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
   Graph_Graph1053->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
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
   
   
   TF1 *pol01054 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01054->SetFillColor(19);
   pol01054->SetFillStyle(0);
   pol01054->SetLineColor(2);
   pol01054->SetLineWidth(2);
   pol01054->SetChisquare(22.93366);
   pol01054->SetNDF(13);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,-0.008836458);
   pol01054->SetParError(0,0.008849354);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0088
#pm0.009
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
