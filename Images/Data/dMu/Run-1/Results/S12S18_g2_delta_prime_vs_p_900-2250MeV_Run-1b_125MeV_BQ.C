void S12S18_g2_delta_prime_vs_p_900-2250MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.796569,2499.5,1.420948);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1023[11] = {
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
   Double_t _fy1023[11] = {
   0.3523678,
   -0.1201045,
   -0.2744588,
   0.05794177,
   0.04263089,
   0.142016,
   0.2276662,
   -0.3002249,
   -0.2887697,
   -0.2547817,
   -0.03751979};
   Double_t _fex1023[11] = {
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
   Double_t _fey1023[11] = {
   0.3079376,
   0.250707,
   0.2144609,
   0.1949444,
   0.1831654,
   0.184139,
   0.183957,
   0.2007486,
   0.2189925,
   0.2560285,
   0.3032816};
   TGraphErrors *gre = new TGraphErrors(11,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","S12S18_",100,812,2312);
   Graph_Graph1023->SetMinimum(-0.5748173);
   Graph_Graph1023->SetMaximum(1.199196);
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
   
   
   TF1 *pol01024 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01024->SetFillColor(19);
   pol01024->SetFillStyle(0);
   pol01024->SetLineColor(2);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(10.13954);
   pol01024->SetNDF(10);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,-0.03494156);
   pol01024->SetParError(0,0.06521147);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.035
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
