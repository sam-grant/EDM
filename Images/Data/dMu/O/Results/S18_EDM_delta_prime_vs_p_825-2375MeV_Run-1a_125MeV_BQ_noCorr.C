void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.246446,2655.75,0.2100275);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1147[12] = {
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
   Double_t _fy1147[12] = {
   -0.03619095,
   -0.01324917,
   -0.07047571,
   -0.07157923,
   -0.08563092,
   -0.06681973,
   0.006919492,
   0.0961077,
   -0.05229375,
   0.04967561,
   0.000141819,
   0.1020378};
   Double_t _fex1147[12] = {
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
   Double_t _fey1147[12] = {
   0.05985734,
   0.05275557,
   0.04772744,
   0.04523198,
   0.04296828,
   0.04296588,
   0.04187319,
   0.04371773,
   0.04399934,
   0.04671563,
   0.0476395,
   0.04987387};
   TGraphErrors *gre = new TGraphErrors(12,_fx1147,_fy1147,_fex1147,_fey1147);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1147 = new TH1F("Graph_Graph1147","S18_",100,799.5,2449.5);
   Graph_Graph1147->SetMinimum(-0.2007987);
   Graph_Graph1147->SetMaximum(0.1643802);
   Graph_Graph1147->SetDirectory(0);
   Graph_Graph1147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1147->SetLineColor(ci);
   Graph_Graph1147->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1147->GetXaxis()->CenterTitle(true);
   Graph_Graph1147->GetXaxis()->SetLabelFont(42);
   Graph_Graph1147->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1147->GetXaxis()->SetTitleFont(42);
   Graph_Graph1147->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1147->GetYaxis()->CenterTitle(true);
   Graph_Graph1147->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1147->GetYaxis()->SetLabelFont(42);
   Graph_Graph1147->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1147->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1147->GetYaxis()->SetTitleFont(42);
   Graph_Graph1147->GetZaxis()->SetLabelFont(42);
   Graph_Graph1147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1147);
   
   
   TF1 *pol01148 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01148->SetFillColor(19);
   pol01148->SetFillStyle(0);
   pol01148->SetLineColor(2);
   pol01148->SetLineWidth(2);
   pol01148->SetChisquare(22.15278);
   pol01148->SetNDF(11);
   pol01148->GetXaxis()->SetLabelFont(42);
   pol01148->GetXaxis()->SetTitleOffset(1);
   pol01148->GetXaxis()->SetTitleFont(42);
   pol01148->GetYaxis()->SetLabelFont(42);
   pol01148->GetYaxis()->SetTitleFont(42);
   pol01148->SetParameter(0,-0.01300176);
   pol01148->SetParError(0,0.01341047);
   pol01148->SetParLimits(0,0,0);
   pol01148->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01148);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.013
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
