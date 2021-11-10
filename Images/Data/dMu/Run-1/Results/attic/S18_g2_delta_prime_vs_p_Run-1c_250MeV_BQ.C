void S18_g2_delta_prime_vs_p_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.234353,2750,1.746117);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1033[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1033[7] = {
   0.6387344,
   -0.009987311,
   -0.144159,
   0.07217065,
   0.1481651,
   -0.2001538,
   -0.418794};
   Double_t _fex1033[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[7] = {
   0.2943039,
   0.1915576,
   0.1584674,
   0.1559989,
   0.1799381,
   0.2405198,
   0.4140098};
   TGraphErrors *gre = new TGraphErrors(7,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","S18_",100,725,2525);
   Graph_Graph1033->SetMinimum(-0.9363062);
   Graph_Graph1033->SetMaximum(1.44807);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1033->GetXaxis()->CenterTitle(true);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1033->GetYaxis()->CenterTitle(true);
   Graph_Graph1033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *pol01034 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01034->SetFillColor(19);
   pol01034->SetFillStyle(0);
   pol01034->SetLineColor(2);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(8.096584);
   pol01034->SetNDF(6);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,0.01727038);
   pol01034->SetParError(0,0.07587153);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.017
#pm0.08
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
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
