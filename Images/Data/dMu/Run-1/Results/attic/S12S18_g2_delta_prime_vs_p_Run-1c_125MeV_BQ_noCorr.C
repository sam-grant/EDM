void S12S18_g2_delta_prime_vs_p_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:00:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.06122881,2843.25,0.09439767);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1083[14] = {
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
   Double_t _fy1083[14] = {
   0.01628776,
   0.05567736,
   -0.002551777,
   0.02063658,
   0.01040296,
   -0.01782286,
   0.0004169184,
   -0.01135384,
   0.01044544,
   0.001738901,
   -0.01629201,
   -0.02342044,
   -0.007846561,
   0.008855191};
   Double_t _fex1083[14] = {
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
   Double_t _fey1083[14] = {
   0.0225287,
   0.01852613,
   0.01625168,
   0.01468767,
   0.01382792,
   0.01311552,
   0.01314616,
   0.01275176,
   0.01324842,
   0.01344507,
   0.01413177,
   0.01447432,
   0.01529099,
   0.01676601};
   TGraphErrors *gre = new TGraphErrors(14,_fx1083,_fy1083,_fex1083,_fey1083);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1083 = new TH1F("Graph_Graph1083","S12S18_",100,649.5,2599.5);
   Graph_Graph1083->SetMinimum(-0.04566616);
   Graph_Graph1083->SetMaximum(0.07883503);
   Graph_Graph1083->SetDirectory(0);
   Graph_Graph1083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1083->SetLineColor(ci);
   Graph_Graph1083->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1083->GetXaxis()->CenterTitle(true);
   Graph_Graph1083->GetXaxis()->SetLabelFont(42);
   Graph_Graph1083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1083->GetXaxis()->SetTitleFont(42);
   Graph_Graph1083->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1083->GetYaxis()->CenterTitle(true);
   Graph_Graph1083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1083->GetYaxis()->SetLabelFont(42);
   Graph_Graph1083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1083->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1083->GetYaxis()->SetTitleFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelFont(42);
   Graph_Graph1083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1083);
   
   
   TF1 *pol01084 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01084->SetFillColor(19);
   pol01084->SetFillStyle(0);
   pol01084->SetLineColor(2);
   pol01084->SetLineWidth(2);
   pol01084->SetChisquare(19.86632);
   pol01084->SetNDF(13);
   pol01084->GetXaxis()->SetLabelFont(42);
   pol01084->GetXaxis()->SetTitleOffset(1);
   pol01084->GetXaxis()->SetTitleFont(42);
   pol01084->GetYaxis()->SetLabelFont(42);
   pol01084->GetYaxis()->SetTitleFont(42);
   pol01084->SetParameter(0,0.0005742524);
   pol01084->SetParError(0,0.003918439);
   pol01084->SetParLimits(0,0,0);
   pol01084->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01084);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00057
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
