void S12_g2_delta_prime_vs_p_825.000000-2375.000000MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:56:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-1.742259,2655.75,2.263399);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1007[12] = {
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
   Double_t _fy1007[12] = {
   0.4620729,
   -0.06247882,
   -0.03073521,
   0.3731501,
   0.08298814,
   0.3149979,
   -0.394773,
   -0.6489936,
   -0.1855883,
   0.01942402,
   -0.4372833,
   -0.5618321};
   Double_t _fex1007[12] = {
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
   Double_t _fey1007[12] = {
   0.5093675,
   0.4132497,
   0.3527466,
   0.3192053,
   0.2983876,
   0.3001514,
   0.2974346,
   0.3224926,
   0.3507197,
   0.4083462,
   0.4796144,
   0.6238887};
   TGraphErrors *gre = new TGraphErrors(12,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","S12_",100,799.5,2449.5);
   Graph_Graph1007->SetMinimum(-1.341693);
   Graph_Graph1007->SetMaximum(1.862834);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1007->GetXaxis()->CenterTitle(true);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1007->GetYaxis()->CenterTitle(true);
   Graph_Graph1007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *pol01008 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01008->SetFillColor(19);
   pol01008->SetFillStyle(0);
   pol01008->SetLineColor(2);
   pol01008->SetLineWidth(2);
   pol01008->SetChisquare(10.71879);
   pol01008->SetNDF(11);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,-0.0672857);
   pol01008->SetParError(0,0.1043398);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.067
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
