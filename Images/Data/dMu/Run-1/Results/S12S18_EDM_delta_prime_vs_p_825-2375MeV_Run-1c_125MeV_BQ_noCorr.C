void S12S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.02364284,2655.75,0.1039883);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1077[12] = {
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
   Double_t _fy1077[12] = {
   0.04017272,
   0.04695266,
   0.06113031,
   0.04082078,
   0.04384651,
   0.03932553,
   0.05562376,
   0.04351266,
   0.06317048,
   0.05358697,
   0.0210945,
   0.063495};
   Double_t _fex1077[12] = {
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
   Double_t _fey1077[12] = {
   0.01856453,
   0.01630894,
   0.01474516,
   0.01389317,
   0.0131641,
   0.01318709,
   0.01278097,
   0.01325812,
   0.01337126,
   0.01398119,
   0.01425231,
   0.01488866};
   TGraphErrors *gre = new TGraphErrors(12,_fx1077,_fy1077,_fex1077,_fey1077);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","S12S18_",100,799.5,2449.5);
   Graph_Graph1077->SetMinimum(-0.01087973);
   Graph_Graph1077->SetMaximum(0.09122517);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1077->GetXaxis()->CenterTitle(true);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1077->GetYaxis()->CenterTitle(true);
   Graph_Graph1077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   
   TF1 *pol01078 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01078->SetFillColor(19);
   pol01078->SetFillStyle(0);
   pol01078->SetLineColor(2);
   pol01078->SetLineWidth(2);
   pol01078->SetChisquare(8.337822);
   pol01078->SetNDF(11);
   pol01078->GetXaxis()->SetLabelFont(42);
   pol01078->GetXaxis()->SetTitleOffset(1);
   pol01078->GetXaxis()->SetTitleFont(42);
   pol01078->GetYaxis()->SetLabelFont(42);
   pol01078->GetYaxis()->SetTitleFont(42);
   pol01078->SetParameter(0,0.04791183);
   pol01078->SetParError(0,0.004085337);
   pol01078->SetParLimits(0,0,0);
   pol01078->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01078);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.048
#pm0.004
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
