void S18_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.1042794,2655.75,0.2402785);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1165[12] = {
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
   Double_t _fy1165[12] = {
   0.08015817,
   0.04353397,
   0.02371636,
   0.005493588,
   -0.01734913,
   -0.000609443,
   0.003086734,
   -0.009009729,
   0.006742848,
   -0.02307849,
   0.0357827,
   -0.02246948};
   Double_t _fex1165[12] = {
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
   Double_t _fey1165[12] = {
   0.04569621,
   0.04015398,
   0.03636298,
   0.03436656,
   0.03271235,
   0.03265786,
   0.03186602,
   0.03324149,
   0.03383078,
   0.03563801,
   0.03615037,
   0.03788331};
   TGraphErrors *gre = new TGraphErrors(12,_fx1165,_fy1165,_fex1165,_fey1165);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1165 = new TH1F("Graph_Graph1165","S18_",100,799.5,2449.5);
   Graph_Graph1165->SetMinimum(-0.06982361);
   Graph_Graph1165->SetMaximum(0.2058227);
   Graph_Graph1165->SetDirectory(0);
   Graph_Graph1165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1165->SetLineColor(ci);
   Graph_Graph1165->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1165->GetXaxis()->CenterTitle(true);
   Graph_Graph1165->GetXaxis()->SetLabelFont(42);
   Graph_Graph1165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1165->GetXaxis()->SetTitleFont(42);
   Graph_Graph1165->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1165->GetYaxis()->CenterTitle(true);
   Graph_Graph1165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1165->GetYaxis()->SetLabelFont(42);
   Graph_Graph1165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1165->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1165->GetYaxis()->SetTitleFont(42);
   Graph_Graph1165->GetZaxis()->SetLabelFont(42);
   Graph_Graph1165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1165);
   
   
   TF1 *pol01166 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01166->SetFillColor(19);
   pol01166->SetFillStyle(0);
   pol01166->SetLineColor(2);
   pol01166->SetLineWidth(2);
   pol01166->SetChisquare(6.410731);
   pol01166->SetNDF(11);
   pol01166->GetXaxis()->SetLabelFont(42);
   pol01166->GetXaxis()->SetTitleOffset(1);
   pol01166->GetXaxis()->SetTitleFont(42);
   pol01166->GetYaxis()->SetLabelFont(42);
   pol01166->GetYaxis()->SetTitleFont(42);
   pol01166->SetParameter(0,0.006834432);
   pol01166->SetParError(0,0.0102131);
   pol01166->SetParLimits(0,0,0);
   pol01166->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01166);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0068
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
