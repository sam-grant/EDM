void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-2.026377,2655.75,3.60892);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1103[12] = {
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
   Double_t _fy1103[12] = {
   1.057569,
   0.7728024,
   0.5262447,
   0.2586992,
   1.125295,
   -0.9271537,
   0.1926482,
   0.2103652,
   -0.6614635,
   0.4693621,
   0.5191697,
   1.047453};
   Double_t _fex1103[12] = {
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
   Double_t _fey1103[12] = {
   0.7228441,
   0.5873926,
   0.5026665,
   0.4553925,
   0.4257074,
   0.4285548,
   0.4241879,
   0.4585043,
   0.4954599,
   0.5747763,
   0.6735577,
   0.8701934};
   TGraphErrors *gre = new TGraphErrors(12,_fx1103,_fy1103,_fex1103,_fey1103);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1103 = new TH1F("Graph_Graph1103","S12_",100,799.5,2449.5);
   Graph_Graph1103->SetMinimum(-1.462847);
   Graph_Graph1103->SetMaximum(3.045391);
   Graph_Graph1103->SetDirectory(0);
   Graph_Graph1103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1103->SetLineColor(ci);
   Graph_Graph1103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1103->GetXaxis()->CenterTitle(true);
   Graph_Graph1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph1103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph1103->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1103->GetYaxis()->CenterTitle(true);
   Graph_Graph1103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph1103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1103->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph1103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1103);
   
   
   TF1 *pol01104 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01104->SetFillColor(19);
   pol01104->SetFillStyle(0);
   pol01104->SetLineColor(2);
   pol01104->SetLineWidth(2);
   pol01104->SetChisquare(18.65932);
   pol01104->SetNDF(11);
   pol01104->GetXaxis()->SetLabelFont(42);
   pol01104->GetXaxis()->SetTitleOffset(1);
   pol01104->GetXaxis()->SetTitleFont(42);
   pol01104->GetYaxis()->SetLabelFont(42);
   pol01104->GetYaxis()->SetTitleFont(42);
   pol01104->SetParameter(0,0.2655316);
   pol01104->SetParError(0,0.1482591);
   pol01104->SetParLimits(0,0,0);
   pol01104->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01104);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.27
#pm0.1
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
