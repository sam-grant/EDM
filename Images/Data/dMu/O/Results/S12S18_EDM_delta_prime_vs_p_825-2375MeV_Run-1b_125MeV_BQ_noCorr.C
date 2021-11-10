void S12S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.1603801,2655.75,0.1188813);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1161[12] = {
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
   2312};
   Double_t _fy1161[12] = {
   -0.0334024,
   0.007249519,
   0.05514537,
   -0.008313159,
   -0.0003952181,
   -0.03202853,
   0.000605823,
   0.02785516,
   -0.001044437,
   -0.01765109,
   0.0006589361,
   -0.008103038};
   Double_t _fex1161[12] = {
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
   Double_t _fey1161[12] = {
   0.03601875,
   0.0317599,
   0.02864782,
   0.02690958,
   0.02559131,
   0.02553826,
   0.02477364,
   0.0256522,
   0.02589133,
   0.02712786,
   0.02755635,
   0.02866987};
   TGraphErrors *gre = new TGraphErrors(12,_fx1161,_fy1161,_fex1161,_fey1161);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1161 = new TH1F("Graph_Graph1161","S12S18_",100,799.5,2449.5);
   Graph_Graph1161->SetMinimum(-0.132454);
   Graph_Graph1161->SetMaximum(0.09095515);
   Graph_Graph1161->SetDirectory(0);
   Graph_Graph1161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1161->SetLineColor(ci);
   Graph_Graph1161->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1161->GetXaxis()->CenterTitle(true);
   Graph_Graph1161->GetXaxis()->SetLabelFont(42);
   Graph_Graph1161->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1161->GetXaxis()->SetTitleFont(42);
   Graph_Graph1161->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1161->GetYaxis()->CenterTitle(true);
   Graph_Graph1161->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1161->GetYaxis()->SetLabelFont(42);
   Graph_Graph1161->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1161->GetYaxis()->SetTitleFont(42);
   Graph_Graph1161->GetZaxis()->SetLabelFont(42);
   Graph_Graph1161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1161);
   
   
   TF1 *pol01162 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01162->SetFillColor(19);
   pol01162->SetFillStyle(0);
   pol01162->SetLineColor(2);
   pol01162->SetLineWidth(2);
   pol01162->SetChisquare(7.970322);
   pol01162->SetNDF(11);
   pol01162->GetXaxis()->SetLabelFont(42);
   pol01162->GetXaxis()->SetTitleOffset(1);
   pol01162->GetXaxis()->SetTitleFont(42);
   pol01162->GetYaxis()->SetLabelFont(42);
   pol01162->GetYaxis()->SetTitleFont(42);
   pol01162->SetParameter(0,-0.0002365314);
   pol01162->SetParError(0,0.007916846);
   pol01162->SetParLimits(0,0,0);
   pol01162->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01162);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00024
#pm0.008
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
