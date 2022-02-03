void S12S18_g2_delta_prime_vs_p_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 11:00:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.1068,-1.959139,3144.375,1.790861);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1023[16] = {
   815.8181,
   938.6515,
   1062.74,
   1188.098,
   1312.711,
   1435.779,
   1562.01,
   1685.105,
   1810.597,
   1935.076,
   2060.311,
   2184.992,
   2309.087,
   2433.142,
   2559.748,
   2678.663};
   Double_t _fy1023[16] = {
   -0.1634289,
   0.4050534,
   -0.1569178,
   -0.3656517,
   0.0463424,
   0.02634048,
   0.1570698,
   0.2614009,
   -0.3915863,
   -0.359858,
   -0.28287,
   -0.04723563,
   -0.008205582,
   -0.6424898,
   0.2821403,
   -0.1912453};
   Double_t _fex1023[16] = {
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
   0,
   0,
   0};
   Double_t _fey1023[16] = {
   0.4643364,
   0.3650567,
   0.3107498,
   0.2731549,
   0.2516858,
   0.2367897,
   0.2355287,
   0.2299459,
   0.2418443,
   0.2499751,
   0.2707523,
   0.2878159,
   0.3178553,
   0.3689909,
   0.4283063,
   0.5156133};
   TGraphErrors *gre = new TGraphErrors(16,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","S12S18",100,629.5336,2864.948);
   Graph_Graph1023->SetMinimum(-1.584139);
   Graph_Graph1023->SetMaximum(1.415861);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1023->GetXaxis()->CenterTitle(true);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1023->GetYaxis()->CenterTitle(true);
   Graph_Graph1023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   
   TF1 *pol01024 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01024->SetFillColor(19);
   pol01024->SetFillStyle(0);
   pol01024->SetLineColor(2);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(13.2444);
   pol01024->SetNDF(15);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,-0.08413918);
   pol01024->SetParError(0,0.07221977);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.084
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
