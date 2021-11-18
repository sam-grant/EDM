void S18_g2_delta_prime_vs_p_750-2500MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1943984,2843.25,0.1250215);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1069[14] = {
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
   Double_t _fy1069[14] = {
   -0.05558552,
   0.05303745,
   -0.01638519,
   -0.02948594,
   0.002056496,
   -0.003507402,
   0.006761078,
   0.01660302,
   -0.02370754,
   -0.01802485,
   -0.03265494,
   0.001866746,
   0.006098231,
   -0.05407686};
   Double_t _fex1069[14] = {
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
   Double_t _fey1069[14] = {
   0.03886216,
   0.03203363,
   0.02825367,
   0.02557002,
   0.024135,
   0.02301523,
   0.02294669,
   0.02243136,
   0.02343748,
   0.02388422,
   0.02531872,
   0.02591668,
   0.02741945,
   0.03000685};
   TGraphErrors *gre = new TGraphErrors(14,_fx1069,_fy1069,_fex1069,_fey1069);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","S18_",100,649.5,2599.5);
   Graph_Graph1069->SetMinimum(-0.1624564);
   Graph_Graph1069->SetMaximum(0.09307949);
   Graph_Graph1069->SetDirectory(0);
   Graph_Graph1069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1069->SetLineColor(ci);
   Graph_Graph1069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1069->GetXaxis()->CenterTitle(true);
   Graph_Graph1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph1069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph1069->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1069->GetYaxis()->CenterTitle(true);
   Graph_Graph1069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph1069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1069->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph1069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1069);
   
   
   TF1 *pol01070 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01070->SetFillColor(19);
   pol01070->SetFillStyle(0);
   pol01070->SetLineColor(2);
   pol01070->SetLineWidth(2);
   pol01070->SetChisquare(12.08256);
   pol01070->SetNDF(13);
   pol01070->GetXaxis()->SetLabelFont(42);
   pol01070->GetXaxis()->SetTitleOffset(1);
   pol01070->GetXaxis()->SetTitleFont(42);
   pol01070->GetYaxis()->SetLabelFont(42);
   pol01070->GetYaxis()->SetTitleFont(42);
   pol01070->SetParameter(0,-0.00871888);
   pol01070->SetParError(0,0.006905112);
   pol01070->SetParLimits(0,0,0);
   pol01070->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01070);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0087
#pm0.007
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
