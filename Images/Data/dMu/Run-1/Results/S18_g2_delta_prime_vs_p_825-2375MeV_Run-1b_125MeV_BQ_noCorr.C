void S18_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.08956179,2655.75,0.1668793);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1069[12] = {
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
   Double_t _fy1069[12] = {
   0.05314297,
   -0.01705064,
   -0.02948443,
   0.001796612,
   -0.003782874,
   0.007310432,
   0.01685735,
   -0.02379274,
   -0.01849849,
   -0.03226864,
   0.002097542,
   0.00633463};
   Double_t _fex1069[12] = {
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
   Double_t _fey1069[12] = {
   0.03203353,
   0.02825444,
   0.02557084,
   0.02413485,
   0.02301494,
   0.02294698,
   0.02243195,
   0.02343753,
   0.02388484,
   0.02531924,
   0.02591798,
   0.02741762};
   TGraphErrors *gre = new TGraphErrors(12,_fx1069,_fy1069,_fex1069,_fey1069);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","S18_",100,799.5,2449.5);
   Graph_Graph1069->SetMinimum(-0.06391768);
   Graph_Graph1069->SetMaximum(0.1412352);
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
   
   
   TF1 *pol01070 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01070->SetFillColor(19);
   pol01070->SetFillStyle(0);
   pol01070->SetLineColor(2);
   pol01070->SetLineWidth(2);
   pol01070->SetChisquare(8.075302);
   pol01070->SetNDF(11);
   pol01070->GetXaxis()->SetLabelFont(42);
   pol01070->GetXaxis()->SetTitleOffset(1);
   pol01070->GetXaxis()->SetTitleFont(42);
   pol01070->GetYaxis()->SetLabelFont(42);
   pol01070->GetYaxis()->SetTitleFont(42);
   pol01070->SetParameter(0,-0.004471976);
   pol01070->SetParError(0,0.007216919);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0045
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
