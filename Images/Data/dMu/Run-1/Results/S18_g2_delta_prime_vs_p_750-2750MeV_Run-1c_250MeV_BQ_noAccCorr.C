void S18_g2_delta_prime_vs_p_750-2750MeV_Run-1c_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:10:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(452.9039,-1.77876,3037.134,1.431478);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1033[8] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1033[8] = {
   0.2516128,
   -0.01126269,
   -0.08501761,
   0.02864282,
   0.06950145,
   -0.1402763,
   -0.2222175,
   -0.3655051};
   Double_t _fex1033[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[8] = {
   0.1088414,
   0.08745566,
   0.08267238,
   0.08801496,
   0.104376,
   0.1344967,
   0.1940121,
   0.342231};
   TGraphErrors *gre = new TGraphErrors(8,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","S18",100,711.3269,2778.711);
   Graph_Graph1033->SetMinimum(-1.457736);
   Graph_Graph1033->SetMaximum(1.110454);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1033->GetXaxis()->CenterTitle(true);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1033->GetYaxis()->CenterTitle(true);
   Graph_Graph1033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *pol01034 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01034->SetFillColor(19);
   pol01034->SetFillStyle(0);
   pol01034->SetLineColor(2);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(10.50729);
   pol01034->SetNDF(7);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,0.0009304329);
   pol01034->SetParError(0,0.03855475);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00093
#pm0.04
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
