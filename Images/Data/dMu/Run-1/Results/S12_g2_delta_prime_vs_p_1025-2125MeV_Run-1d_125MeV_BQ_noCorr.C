void S12_g2_delta_prime_vs_p_1025-2125MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:10:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.05376778,2312,0.09558634);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1091[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1091[9] = {
   0.03505282,
   0.001888166,
   0.03826612,
   0.01773258,
   -0.02229383,
   0.02709054,
   0.0002690008,
   -0.007991671,
   -0.005825019};
   Double_t _fex1091[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1091[9] = {
   0.01658113,
   0.0149491,
   0.01400571,
   0.01322309,
   0.01323083,
   0.01278596,
   0.01325308,
   0.01335837,
   0.0140232};
   TGraphErrors *gre = new TGraphErrors(9,_fx1091,_fy1091,_fex1091,_fey1091);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","S12_",100,962,2162);
   Graph_Graph1091->SetMinimum(-0.03883237);
   Graph_Graph1091->SetMaximum(0.08065092);
   Graph_Graph1091->SetDirectory(0);
   Graph_Graph1091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1091->SetLineColor(ci);
   Graph_Graph1091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1091->GetXaxis()->CenterTitle(true);
   Graph_Graph1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph1091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph1091->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1091->GetYaxis()->CenterTitle(true);
   Graph_Graph1091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph1091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1091->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1091);
   
   
   TF1 *pol01092 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01092->SetFillColor(19);
   pol01092->SetFillStyle(0);
   pol01092->SetLineColor(2);
   pol01092->SetLineWidth(2);
   pol01092->SetChisquare(18.24859);
   pol01092->SetNDF(8);
   pol01092->GetXaxis()->SetLabelFont(42);
   pol01092->GetXaxis()->SetTitleOffset(1);
   pol01092->GetXaxis()->SetTitleFont(42);
   pol01092->GetYaxis()->SetLabelFont(42);
   pol01092->GetYaxis()->SetTitleFont(42);
   pol01092->SetParameter(0,0.008441058);
   pol01092->SetParError(0,0.004605756);
   pol01092->SetParLimits(0,0,0);
   pol01092->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01092);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0084
#pm0.005
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
