void S12_chi2NDF_vs_p_fit_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(470.8546,-0.8477952,3018.168,2.902205);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1001[11] = {
   455.8948,
   656.0632,
   884.3183,
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574,
   2781.732};
   Double_t S12_chi2NDF_vs_p_fy1001[11] = {
   0.6675582,
   0.646971,
   0.9025477,
   0.9268094,
   1.588606,
   0.9657949,
   1.018184,
   0.484355,
   1.17948,
   0.7487603,
   0.9206148};
   Double_t S12_chi2NDF_vs_p_fex1001[11] = {
   0.1612216,
   0.1117597,
   0.07355508,
   0.06671218,
   0.06510647,
   0.07171005,
   0.08614684,
   0.1078021,
   0.1395437,
   0.1943605,
   0.3152937};
   Double_t S12_chi2NDF_vs_p_fey1001[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12_chi2NDF_vs_p_fx1001,S12_chi2NDF_vs_p_fy1001,S12_chi2NDF_vs_p_fex1001,S12_chi2NDF_vs_p_fey1001);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1001 = new TH1F("Graph_S12_chi2NDF_vs_p1001","",100,223.1022,3014.678);
   Graph_S12_chi2NDF_vs_p1001->SetMinimum(-0.4727951);
   Graph_S12_chi2NDF_vs_p1001->SetMaximum(2.527205);
   Graph_S12_chi2NDF_vs_p1001->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1001->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetRange(19,91);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1001);
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(0.6469766);
   pol01002->SetNDF(5);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,1.027205);
   pol01002->SetParError(0,0.1468533);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.03
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
