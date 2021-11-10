void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.05232615,2655.75,0.1690596);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1063[12] = {
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
   Double_t _fy1063[12] = {
   0.0583667,
   0.05374822,
   0.04707331,
   0.006174791,
   0.05218219,
   0.02004414,
   0.01147117,
   0.01028969,
   0.01284349,
   0.07433022,
   0.003623721,
   0.05245935};
   Double_t _fex1063[12] = {
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
   Double_t _fey1063[12] = {
   0.03220156,
   0.02836592,
   0.02562912,
   0.02423306,
   0.02311028,
   0.02301794,
   0.02245822,
   0.02337703,
   0.02378728,
   0.02507117,
   0.02541383,
   0.02661829};
   TGraphErrors *gre = new TGraphErrors(12,_fx1063,_fy1063,_fex1063,_fey1063);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","S18_",100,799.5,2449.5);
   Graph_Graph1063->SetMinimum(-0.03018758);
   Graph_Graph1063->SetMaximum(0.146921);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1063->GetXaxis()->CenterTitle(true);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1063->GetYaxis()->CenterTitle(true);
   Graph_Graph1063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   
   TF1 *pol01064 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01064->SetFillColor(19);
   pol01064->SetFillStyle(0);
   pol01064->SetLineColor(2);
   pol01064->SetLineWidth(2);
   pol01064->SetChisquare(10.79494);
   pol01064->SetNDF(11);
   pol01064->GetXaxis()->SetLabelFont(42);
   pol01064->GetXaxis()->SetTitleOffset(1);
   pol01064->GetXaxis()->SetTitleFont(42);
   pol01064->GetYaxis()->SetLabelFont(42);
   pol01064->GetYaxis()->SetTitleFont(42);
   pol01064->SetParameter(0,0.0312056);
   pol01064->SetParError(0,0.007193927);
   pol01064->SetParLimits(0,0,0);
   pol01064->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01064);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.031
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
