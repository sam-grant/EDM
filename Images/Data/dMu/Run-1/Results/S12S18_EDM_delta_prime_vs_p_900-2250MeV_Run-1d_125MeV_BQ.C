void S12S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.2615572,2499.5,1.062894);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1041[11] = {
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
   Double_t _fy1041[11] = {
   0.3804636,
   0.4219928,
   0.3220951,
   0.5460067,
   0.5011634,
   0.3467098,
   0.5136005,
   0.4911143,
   0.6037638,
   0.7157515,
   0.7048389};
   Double_t _fex1041[11] = {
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
   Double_t _fey1041[11] = {
   0.1853002,
   0.1507736,
   0.1292007,
   0.1180109,
   0.110544,
   0.1116239,
   0.1112579,
   0.1214883,
   0.1320766,
   0.1537501,
   0.1804882};
   TGraphErrors *gre = new TGraphErrors(11,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","S12S18_",100,812,2312);
   Graph_Graph1041->SetMinimum(-0.1291121);
   Graph_Graph1041->SetMaximum(0.9304491);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1041->GetXaxis()->CenterTitle(true);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1041->GetYaxis()->CenterTitle(true);
   Graph_Graph1041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1041->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   
   TF1 *pol01042 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);
   pol01042->SetLineColor(2);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(8.479556);
   pol01042->SetNDF(10);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetTitleOffset(1);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,0.4928544);
   pol01042->SetParError(0,0.03935115);
   pol01042->SetParLimits(0,0,0);
   pol01042->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.49
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
