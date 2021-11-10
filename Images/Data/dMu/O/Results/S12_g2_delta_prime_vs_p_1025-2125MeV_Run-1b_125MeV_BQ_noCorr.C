void S12_g2_delta_prime_vs_p_1025-2125MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.1737043,2312,0.1411395);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1067[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1067[9] = {
   -0.0331527,
   -0.04298674,
   0.03185448,
   0.07009596,
   0.01301545,
   -0.0571535,
   -0.0184359,
   0.01390587,
   0.004101942};
   Double_t _fex1067[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1067[9] = {
   0.03966082,
   0.03576854,
   0.03349282,
   0.03164732,
   0.03157626,
   0.03040423,
   0.03145167,
   0.03158838,
   0.03293368};
   TGraphErrors *gre = new TGraphErrors(9,_fx1067,_fy1067,_fex1067,_fey1067);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","S12_",100,962,2162);
   Graph_Graph1067->SetMinimum(-0.14222);
   Graph_Graph1067->SetMaximum(0.1096551);
   Graph_Graph1067->SetDirectory(0);
   Graph_Graph1067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1067->SetLineColor(ci);
   Graph_Graph1067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1067->GetXaxis()->CenterTitle(true);
   Graph_Graph1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph1067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph1067->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
   Graph_Graph1067->GetYaxis()->CenterTitle(true);
   Graph_Graph1067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph1067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph1067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1067);
   
   
   TF1 *pol01068 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01068->SetFillColor(19);
   pol01068->SetFillStyle(0);
   pol01068->SetLineColor(2);
   pol01068->SetLineWidth(2);
   pol01068->SetChisquare(12.20556);
   pol01068->SetNDF(8);
   pol01068->GetXaxis()->SetLabelFont(42);
   pol01068->GetXaxis()->SetTitleOffset(1);
   pol01068->GetXaxis()->SetTitleFont(42);
   pol01068->GetYaxis()->SetLabelFont(42);
   pol01068->GetYaxis()->SetTitleFont(42);
   pol01068->SetParameter(0,-0.0007185677);
   pol01068->SetParError(0,0.01095859);
   pol01068->SetParLimits(0,0,0);
   pol01068->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01068);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00072
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
