void S12_EDM_delta_prime_vs_p_1025-2125MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:10:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.06004867,2312,0.1191595);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1073[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1073[9] = {
   0.0205669,
   0.05542304,
   0.07708502,
   0.04267801,
   0.0462174,
   0.05373253,
   0.05747959,
   0.05180338,
   0.04137393};
   Double_t _fex1073[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1073[9] = {
   0.02279809,
   0.02061529,
   0.01932289,
   0.0182236,
   0.01823306,
   0.01757417,
   0.01810633,
   0.01820487,
   0.01894712};
   TGraphErrors *gre = new TGraphErrors(9,_fx1073,_fy1073,_fex1073,_fey1073);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1073 = new TH1F("Graph_Graph1073","S12_",100,962,2162);
   Graph_Graph1073->SetMinimum(-0.04212785);
   Graph_Graph1073->SetMaximum(0.1012386);
   Graph_Graph1073->SetDirectory(0);
   Graph_Graph1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1073->SetLineColor(ci);
   Graph_Graph1073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1073->GetXaxis()->CenterTitle(true);
   Graph_Graph1073->GetXaxis()->SetLabelFont(42);
   Graph_Graph1073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1073->GetXaxis()->SetTitleFont(42);
   Graph_Graph1073->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1073->GetYaxis()->CenterTitle(true);
   Graph_Graph1073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1073->GetYaxis()->SetLabelFont(42);
   Graph_Graph1073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1073->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1073->GetYaxis()->SetTitleFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelFont(42);
   Graph_Graph1073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1073);
   
   
   TF1 *pol01074 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01074->SetFillColor(19);
   pol01074->SetFillStyle(0);
   pol01074->SetLineColor(2);
   pol01074->SetLineWidth(2);
   pol01074->SetChisquare(4.332725);
   pol01074->SetNDF(8);
   pol01074->GetXaxis()->SetLabelFont(42);
   pol01074->GetXaxis()->SetTitleOffset(1);
   pol01074->GetXaxis()->SetTitleFont(42);
   pol01074->GetYaxis()->SetLabelFont(42);
   pol01074->GetYaxis()->SetTitleFont(42);
   pol01074->SetParameter(0,0.05046118);
   pol01074->SetParError(0,0.006316296);
   pol01074->SetParLimits(0,0,0);
   pol01074->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01074);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.05
#pm0.006
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
