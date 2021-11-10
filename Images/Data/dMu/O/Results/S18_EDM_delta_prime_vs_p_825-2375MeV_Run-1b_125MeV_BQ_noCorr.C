void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.171057,2655.75,0.181004);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1159[12] = {
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
   Double_t _fy1159[12] = {
   0.00497348,
   -0.006991241,
   0.01757761,
   -0.02346623,
   0.0540355,
   -0.02189556,
   -0.007972636,
   -0.007611004,
   -0.02130962,
   -0.01593898,
   -0.01695674,
   -0.004013437};
   Double_t _fex1159[12] = {
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
   Double_t _fey1159[12] = {
   0.05120888,
   0.04519556,
   0.04088514,
   0.03852598,
   0.03680451,
   0.036672,
   0.03582899,
   0.03724832,
   0.0378324,
   0.03995599,
   0.0406045,
   0.04227845};
   TGraphErrors *gre = new TGraphErrors(12,_fx1159,_fy1159,_fex1159,_fey1159);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1159 = new TH1F("Graph_Graph1159","S18_",100,799.5,2449.5);
   Graph_Graph1159->SetMinimum(-0.1358509);
   Graph_Graph1159->SetMaximum(0.1457979);
   Graph_Graph1159->SetDirectory(0);
   Graph_Graph1159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1159->SetLineColor(ci);
   Graph_Graph1159->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1159->GetXaxis()->CenterTitle(true);
   Graph_Graph1159->GetXaxis()->SetLabelFont(42);
   Graph_Graph1159->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1159->GetXaxis()->SetTitleFont(42);
   Graph_Graph1159->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1159->GetYaxis()->CenterTitle(true);
   Graph_Graph1159->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1159->GetYaxis()->SetLabelFont(42);
   Graph_Graph1159->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1159->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1159->GetYaxis()->SetTitleFont(42);
   Graph_Graph1159->GetZaxis()->SetLabelFont(42);
   Graph_Graph1159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1159);
   
   
   TF1 *pol01160 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01160->SetFillColor(19);
   pol01160->SetFillStyle(0);
   pol01160->SetLineColor(2);
   pol01160->SetLineWidth(2);
   pol01160->SetChisquare(3.715226);
   pol01160->SetNDF(11);
   pol01160->GetXaxis()->SetLabelFont(42);
   pol01160->GetXaxis()->SetTitleOffset(1);
   pol01160->GetXaxis()->SetTitleFont(42);
   pol01160->GetYaxis()->SetLabelFont(42);
   pol01160->GetYaxis()->SetTitleFont(42);
   pol01160->SetParameter(0,-0.004242592);
   pol01160->SetParError(0,0.01145913);
   pol01160->SetParLimits(0,0,0);
   pol01160->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01160);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0042
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
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
