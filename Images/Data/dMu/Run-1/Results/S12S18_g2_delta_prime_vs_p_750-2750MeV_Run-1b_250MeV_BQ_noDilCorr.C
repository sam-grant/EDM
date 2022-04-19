void S12S18_g2_delta_prime_vs_p_750-2750MeV_Run-1b_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:16:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(453.0928,-1.041197,3038.419,1.027016);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1023[8] = {
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525,
   2607.531};
   Double_t _fy1023[8] = {
   0.0256062,
   -0.04195921,
   0.008328358,
   0.03073001,
   -0.05872943,
   -0.01843833,
   -0.02091184,
   0.01180939};
   Double_t _fex1023[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[8] = {
   0.04458824,
   0.03035502,
   0.02308824,
   0.02080551,
   0.02564642,
   0.0220797,
   0.02121435,
   0.03150594};
   TGraphErrors *gre = new TGraphErrors(8,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","S12S18",100,711.6254,2779.886);
   Graph_Graph1023->SetMinimum(-0.8343758);
   Graph_Graph1023->SetMaximum(0.8201944);
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
   Graph_Graph1023->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
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
   pol01024->SetChisquare(10.68291);
   pol01024->SetNDF(7);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,-0.008566132);
   pol01024->SetParError(0,0.008917429);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00857
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
