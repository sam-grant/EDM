void S12_g2_delta_prime_vs_p_1000-2750MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 11:37:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(757.5888,-1.878037,2977.816,1.547342);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1007[7] = {
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778};
   Double_t _fy1007[7] = {
   -0.1910112,
   0.09952023,
   0.2463731,
   -0.4014295,
   -0.0524635,
   -0.1781772,
   -0.3385021};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.2699835,
   0.2231004,
   0.2084309,
   0.2202342,
   0.2698016,
   0.3279311,
   0.4469972};
   TGraphErrors *gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","S12",100,979.6115,2755.793);
   Graph_Graph1007->SetMinimum(-1.535499);
   Graph_Graph1007->SetMaximum(1.204804);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1007->GetXaxis()->CenterTitle(true);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1007->GetYaxis()->CenterTitle(true);
   Graph_Graph1007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *pol01008 = new TF1("pol0","pol0",1000,2750, TF1::EAddToList::kNo);
   pol01008->SetFillColor(19);
   pol01008->SetFillStyle(0);
   pol01008->SetLineColor(2);
   pol01008->SetLineWidth(2);
   pol01008->SetChisquare(5.820713);
   pol01008->SetNDF(6);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,-0.06918413);
   pol01008->SetParError(0,0.09736444);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.069
#pm0.1
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
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
