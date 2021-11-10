void S12_EDM_delta_prime_vs_p_1025-2125MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.1321526,2312,0.1747248);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1061[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1061[9] = {
   0.02128611,
   0.09117401,
   0.005634274,
   -0.0509358,
   -0.0417061,
   0.007990123,
   0.05815963,
   0.01676499,
   -0.01916878};
   Double_t _fex1061[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1061[9] = {
   0.04463672,
   0.04015035,
   0.03759846,
   0.03560541,
   0.0355788,
   0.03428636,
   0.03537568,
   0.03550565,
   0.03694479};
   TGraphErrors *gre = new TGraphErrors(9,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","S12_",100,962,2162);
   Graph_Graph1061->SetMinimum(-0.1014649);
   Graph_Graph1061->SetMaximum(0.1440371);
   Graph_Graph1061->SetDirectory(0);
   Graph_Graph1061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1061->SetLineColor(ci);
   Graph_Graph1061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1061->GetXaxis()->CenterTitle(true);
   Graph_Graph1061->GetXaxis()->SetLabelFont(42);
   Graph_Graph1061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1061->GetXaxis()->SetTitleFont(42);
   Graph_Graph1061->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
   Graph_Graph1061->GetYaxis()->CenterTitle(true);
   Graph_Graph1061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1061->GetYaxis()->SetLabelFont(42);
   Graph_Graph1061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1061->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1061->GetYaxis()->SetTitleFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelFont(42);
   Graph_Graph1061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1061);
   
   
   TF1 *pol01062 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01062->SetFillColor(19);
   pol01062->SetFillStyle(0);
   pol01062->SetLineColor(2);
   pol01062->SetLineWidth(2);
   pol01062->SetChisquare(11.68716);
   pol01062->SetNDF(8);
   pol01062->GetXaxis()->SetLabelFont(42);
   pol01062->GetXaxis()->SetTitleOffset(1);
   pol01062->GetXaxis()->SetTitleFont(42);
   pol01062->GetYaxis()->SetLabelFont(42);
   pol01062->GetYaxis()->SetTitleFont(42);
   pol01062->SetParameter(0,0.007689425);
   pol01062->SetParError(0,0.01232407);
   pol01062->SetParLimits(0,0,0);
   pol01062->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01062);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0077
#pm0.01
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
