void S12S18_g2_delta_prime_vs_p_Run-1b_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.04735885,2750,0.07431722);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1071[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1071[7] = {
   0.01410134,
   -0.01550428,
   0.005023219,
   0.01667592,
   -0.02084474,
   -0.01182949,
   -0.01394823};
   Double_t _fex1071[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1071[7] = {
   0.0174721,
   0.01333592,
   0.01160246,
   0.0111397,
   0.0114772,
   0.01229595,
   0.01370837};
   TGraphErrors *gre = new TGraphErrors(7,_fx1071,_fy1071,_fex1071,_fey1071);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1071 = new TH1F("Graph_Graph1071","S12S18_",100,725,2525);
   Graph_Graph1071->SetMinimum(-0.03519125);
   Graph_Graph1071->SetMaximum(0.06214961);
   Graph_Graph1071->SetDirectory(0);
   Graph_Graph1071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1071->SetLineColor(ci);
   Graph_Graph1071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1071->GetXaxis()->CenterTitle(true);
   Graph_Graph1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph1071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph1071->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1071->GetYaxis()->CenterTitle(true);
   Graph_Graph1071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph1071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1071->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph1071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1071);
   
   
   TF1 *pol01072 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01072->SetFillColor(19);
   pol01072->SetFillStyle(0);
   pol01072->SetLineColor(2);
   pol01072->SetLineWidth(2);
   pol01072->SetChisquare(8.952988);
   pol01072->SetNDF(6);
   pol01072->GetXaxis()->SetLabelFont(42);
   pol01072->GetXaxis()->SetTitleOffset(1);
   pol01072->GetXaxis()->SetTitleFont(42);
   pol01072->GetYaxis()->SetLabelFont(42);
   pol01072->GetYaxis()->SetTitleFont(42);
   pol01072->SetParameter(0,-0.004098994);
   pol01072->SetParError(0,0.004772053);
   pol01072->SetParLimits(0,0,0);
   pol01072->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01072);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0041
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
