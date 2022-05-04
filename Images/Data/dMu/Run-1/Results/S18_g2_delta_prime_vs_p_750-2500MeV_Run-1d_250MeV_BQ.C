void S18_g2_delta_prime_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7396,-1.579358,2728.088,1.61645);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1133[7] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1133[7] = {
   0.3360147,
   0.09147739,
   -0.1193673,
   0.1143071,
   -0.3734565,
   0.3413866,
   -0.08779389};
   Double_t _fex1133[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1133[7] = {
   0.2078037,
   0.1971134,
   0.1299182,
   0.1251646,
   0.1363204,
   0.2054828,
   0.1909277};
   TGraphErrors *gre = new TGraphErrors(7,_fx1133,_fy1133,_fex1133,_fey1133);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1133 = new TH1F("Graph_Graph1133","S18",100,736.0744,2506.753);
   Graph_Graph1133->SetMinimum(-1.259777);
   Graph_Graph1133->SetMaximum(1.296869);
   Graph_Graph1133->SetDirectory(0);
   Graph_Graph1133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1133->SetLineColor(ci);
   Graph_Graph1133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1133->GetXaxis()->CenterTitle(true);
   Graph_Graph1133->GetXaxis()->SetLabelFont(42);
   Graph_Graph1133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1133->GetXaxis()->SetTitleFont(42);
   Graph_Graph1133->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1133->GetYaxis()->CenterTitle(true);
   Graph_Graph1133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1133->GetYaxis()->SetLabelFont(42);
   Graph_Graph1133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1133->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1133->GetYaxis()->SetTitleFont(42);
   Graph_Graph1133->GetZaxis()->SetLabelFont(42);
   Graph_Graph1133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1133);
   
   
   TF1 *pol01134 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01134->SetFillColor(19);
   pol01134->SetFillStyle(0);
   pol01134->SetLineColor(2);
   pol01134->SetLineWidth(2);
   pol01134->SetChisquare(14.92549);
   pol01134->SetNDF(6);
   pol01134->GetXaxis()->SetLabelFont(42);
   pol01134->GetXaxis()->SetTitleOffset(1);
   pol01134->GetXaxis()->SetTitleFont(42);
   pol01134->GetYaxis()->SetLabelFont(42);
   pol01134->GetYaxis()->SetTitleFont(42);
   pol01134->SetParameter(0,-0.01466027);
   pol01134->SetParError(0,0.06009492);
   pol01134->SetParLimits(0,0,0);
   pol01134->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01134);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0147
#pm0.06
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
