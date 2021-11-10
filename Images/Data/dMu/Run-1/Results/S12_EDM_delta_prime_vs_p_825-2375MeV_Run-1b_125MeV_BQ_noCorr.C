void S12_EDM_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.09264289,2655.75,0.1259632);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1061[12] = {
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
   Double_t _fy1061[12] = {
   0.01666015,
   0.05826461,
   -0.02291274,
   0.06019384,
   -0.01315955,
   0.01784521,
   0.01417481,
   0.00769913,
   0.03804467,
   0.03958209,
   0.01980984,
   0.0526513};
   Double_t _fex1061[12] = {
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
   Double_t _fey1061[12] = {
   0.03179725,
   0.02800178,
   0.02521028,
   0.02359503,
   0.02223052,
   0.02222565,
   0.02141005,
   0.02209297,
   0.022213,
   0.02310093,
   0.02335214,
   0.02437917};
   TGraphErrors *gre = new TGraphErrors(12,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","S12_",100,799.5,2449.5);
   Graph_Graph1061->SetMinimum(-0.07078228);
   Graph_Graph1061->SetMaximum(0.1041026);
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
   Graph_Graph1061->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
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
   
   
   TF1 *pol01062 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01062->SetFillColor(19);
   pol01062->SetFillStyle(0);
   pol01062->SetLineColor(2);
   pol01062->SetLineWidth(2);
   pol01062->SetChisquare(13.24734);
   pol01062->SetNDF(11);
   pol01062->GetXaxis()->SetLabelFont(42);
   pol01062->GetXaxis()->SetTitleOffset(1);
   pol01062->GetXaxis()->SetTitleFont(42);
   pol01062->GetYaxis()->SetLabelFont(42);
   pol01062->GetYaxis()->SetTitleFont(42);
   pol01062->SetParameter(0,0.023219);
   pol01062->SetParError(0,0.006847214);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.023
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
