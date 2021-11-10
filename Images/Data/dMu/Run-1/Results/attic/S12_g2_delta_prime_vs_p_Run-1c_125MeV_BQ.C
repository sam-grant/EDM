void S12_g2_delta_prime_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:00:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-1.543164,2843.25,1.784856);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1031[14] = {
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
   Double_t _fy1031[14] = {
   0.1208457,
   0.6627357,
   0.1846857,
   0.2894994,
   0.1493303,
   -0.0215072,
   0.07320912,
   -0.440599,
   0.04395282,
   0.07856147,
   -0.2406508,
   -0.4952635,
   0.1026306,
   0.6112605};
   Double_t _fex1031[14] = {
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
   Double_t _fey1031[14] = {
   0.4840756,
   0.3545318,
   0.28696,
   0.2457866,
   0.2229856,
   0.2079533,
   0.2102206,
   0.2087216,
   0.2262307,
   0.246264,
   0.286744,
   0.3388233,
   0.4381754,
   0.654733};
   TGraphErrors *gre = new TGraphErrors(14,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","S12_",100,649.5,2599.5);
   Graph_Graph1031->SetMinimum(-1.210362);
   Graph_Graph1031->SetMaximum(1.452054);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1031->GetXaxis()->CenterTitle(true);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1031->GetYaxis()->CenterTitle(true);
   Graph_Graph1031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *pol01032 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01032->SetFillColor(19);
   pol01032->SetFillStyle(0);
   pol01032->SetLineColor(2);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(14.22946);
   pol01032->SetNDF(13);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,0.01929086);
   pol01032->SetParError(0,0.07176237);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.019
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
