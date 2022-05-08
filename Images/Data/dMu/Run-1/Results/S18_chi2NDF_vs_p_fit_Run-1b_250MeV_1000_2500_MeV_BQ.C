void S18_chi2NDF_vs_p_fit_Run-1b_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:25:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(819.149,-0.2402524,2667.287,2.162271);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[6] = {
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264};
   Double_t _fy1009[6] = {
   0.8789341,
   0.56858,
   1.399376,
   0.7050641,
   0.8361559,
   1.144004};
   Double_t _fex1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#chi^{2}/NDF / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,1003.963,2482.473);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(1.922019);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#chi^{2}/NDF / 250 MeV");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(2);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(0.4583648);
   pol01010->SetNDF(5);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,0.9220191);
   pol01010->SetParError(0,0.1236076);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.922
#pm0.12
","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
