void S18_g2_delta_prime_vs_p_750-2500MeV_Run-1d_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(514.7396,-1.027345,2728.088,1.058829);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1045[7] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1045[7] = {
   0.06191897,
   0.01602497,
   -0.01957559,
   0.01721602,
   -0.05034912,
   0.03965511,
   -0.008327198};
   Double_t _fex1045[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[7] = {
   0.03829293,
   0.03453025,
   0.02130588,
   0.01885129,
   0.0183786,
   0.02386867,
   0.01810938};
   TGraphErrors *gre = new TGraphErrors(7,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","S18",100,736.0744,2506.753);
   Graph_Graph1045->SetMinimum(-0.8187277);
   Graph_Graph1045->SetMaximum(0.8502119);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1045->GetXaxis()->CenterTitle(true);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1045->GetYaxis()->CenterTitle(true);
   Graph_Graph1045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   
   TF1 *pol01046 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01046->SetFillColor(19);
   pol01046->SetFillStyle(0);
   pol01046->SetLineColor(2);
   pol01046->SetLineWidth(2);
   pol01046->SetChisquare(14.8505);
   pol01046->SetNDF(6);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,-0.003066582);
   pol01046->SetParError(0,0.008361651);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00307
#pm0.008
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
