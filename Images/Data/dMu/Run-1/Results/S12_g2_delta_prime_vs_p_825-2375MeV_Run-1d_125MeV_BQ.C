void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.9491842,2655.75,0.8880087);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1043[12] = {
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
   Double_t _fy1043[12] = {
   -0.05695684,
   0.44259,
   0.02260046,
   0.4438824,
   0.2033806,
   -0.2577606,
   0.3220779,
   0.003360284,
   -0.1075389,
   -0.08707654,
   -0.01929094,
   -0.3192607};
   Double_t _fex1043[12] = {
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
   Double_t _fey1043[12] = {
   0.2576393,
   0.2093595,
   0.1789337,
   0.1624645,
   0.1516599,
   0.1529744,
   0.1520116,
   0.1655539,
   0.1797552,
   0.2096288,
   0.246542,
   0.3206317};
   TGraphErrors *gre = new TGraphErrors(12,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","S12_",100,799.5,2449.5);
   Graph_Graph1043->SetMinimum(-0.7654649);
   Graph_Graph1043->SetMaximum(0.7042894);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1043->GetXaxis()->CenterTitle(true);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1043->GetYaxis()->CenterTitle(true);
   Graph_Graph1043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol01044 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01044->SetFillColor(19);
   pol01044->SetFillStyle(0);
   pol01044->SetLineColor(2);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(20.11718);
   pol01044->SetNDF(11);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,0.08478915);
   pol01044->SetParError(0,0.05323561);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.085
#pm0.05
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
