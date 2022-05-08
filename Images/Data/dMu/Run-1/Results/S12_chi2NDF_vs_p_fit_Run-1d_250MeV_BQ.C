void S12_chi2NDF_vs_p_fit_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(470.8176,-0.9034077,3017.766,2.846592);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1019[11] = {
   455.7789,
   655.5908,
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212,
   2781.519};
   Double_t S12_chi2NDF_vs_p_fy1019[11] = {
   0.953357,
   0.6732563,
   1.308877,
   1.118863,
   1.116925,
   1.184937,
   0.5264982,
   0.7336467,
   1.148684,
   0.7337842,
   0.8236927};
   Double_t S12_chi2NDF_vs_p_fex1019[11] = {
   0.08016522,
   0.05627953,
   0.0372095,
   0.03383925,
   0.03313028,
   0.03650384,
   0.04403932,
   0.05518732,
   0.07177343,
   0.1004618,
   0.1604278};
   Double_t S12_chi2NDF_vs_p_fey1019[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12_chi2NDF_vs_p_fx1019,S12_chi2NDF_vs_p_fy1019,S12_chi2NDF_vs_p_fex1019,S12_chi2NDF_vs_p_fey1019);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1019 = new TH1F("Graph_S12_chi2NDF_vs_p1019","",100,223.1007,3014.277);
   Graph_S12_chi2NDF_vs_p1019->SetMinimum(-0.5284076);
   Graph_S12_chi2NDF_vs_p1019->SetMaximum(2.471592);
   Graph_S12_chi2NDF_vs_p1019->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1019->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetRange(19,91);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1019);
   
   
   TF1 *pol01020 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01020->SetFillColor(19);
   pol01020->SetFillStyle(0);
   pol01020->SetLineColor(2);
   pol01020->SetLineWidth(2);
   pol01020->SetChisquare(0.3744146);
   pol01020->SetNDF(5);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,0.9715924);
   pol01020->SetParError(0,0.1117161);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.972
#pm0.1
","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
