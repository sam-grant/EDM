void S18_chi2NDF_vs_p_fit_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.2579,-0.6385047,3018.413,3.111495);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1015[11] = {
   456.247,
   653.5144,
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429,
   2782.043};
   Double_t S18_chi2NDF_vs_p_fy1015[11] = {
   0.7294197,
   0.5490088,
   1.194913,
   1.061986,
   1.076941,
   0.9061201,
   1.49173,
   1.670483,
   1.211713,
   0.5948505,
   0.7844693};
   Double_t S18_chi2NDF_vs_p_fex1015[11] = {
   0.1091934,
   0.07732065,
   0.05250078,
   0.04772049,
   0.04755709,
   0.05301721,
   0.06529801,
   0.08285997,
   0.1099856,
   0.1514908,
   0.2639107};
   Double_t S18_chi2NDF_vs_p_fey1015[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S18_chi2NDF_vs_p_fx1015,S18_chi2NDF_vs_p_fy1015,S18_chi2NDF_vs_p_fex1015,S18_chi2NDF_vs_p_fey1015);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1015 = new TH1F("Graph_S18_chi2NDF_vs_p1015","",100,223.5209,3014.924);
   Graph_S18_chi2NDF_vs_p1015->SetMinimum(-0.2635046);
   Graph_S18_chi2NDF_vs_p1015->SetMaximum(2.736495);
   Graph_S18_chi2NDF_vs_p1015->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1015->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetRange(19,91);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1015);
   
   
   TF1 *pol01016 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01016->SetFillColor(19);
   pol01016->SetFillStyle(0);
   pol01016->SetLineColor(2);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(0.4191629);
   pol01016->SetNDF(5);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,1.236495);
   pol01016->SetParError(0,0.1182036);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.24
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
