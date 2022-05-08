void S12S18_chi2NDF_vs_p_fit_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.0388,-0.9453443,3018.072,2.804656);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1005[11] = {
   456.0315,
   654.9568,
   883.9284,
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852,
   2607.406,
   2781.74};
   Double_t S12S18_chi2NDF_vs_p_fy1005[11] = {
   0.8280442,
   0.553887,
   1.175383,
   0.8901162,
   1.415392,
   1.096948,
   0.6893369,
   0.6411893,
   0.844952,
   0.5832038,
   1.312228};
   Double_t S12S18_chi2NDF_vs_p_fex1005[11] = {
   0.1120561,
   0.07831606,
   0.05238325,
   0.04759446,
   0.04687676,
   0.05184388,
   0.06296364,
   0.0791128,
   0.1034642,
   0.142837,
   0.2374667};
   Double_t S12S18_chi2NDF_vs_p_fey1005[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12S18_chi2NDF_vs_p_fx1005,S12S18_chi2NDF_vs_p_fy1005,S12S18_chi2NDF_vs_p_fex1005,S12S18_chi2NDF_vs_p_fey1005);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1005 = new TH1F("Graph_S12S18_chi2NDF_vs_p1005","",100,223.3137,3014.583);
   Graph_S12S18_chi2NDF_vs_p1005->SetMinimum(-0.5703442);
   Graph_S12S18_chi2NDF_vs_p1005->SetMaximum(2.429656);
   Graph_S12S18_chi2NDF_vs_p1005->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1005->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetRange(19,91);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_chi2NDF_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_chi2NDF_vs_p1005);
   
   
   TF1 *pol01006 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01006->SetFillColor(19);
   pol01006->SetFillStyle(0);
   pol01006->SetLineColor(2);
   pol01006->SetLineWidth(2);
   pol01006->SetChisquare(0.4136305);
   pol01006->SetNDF(5);
   pol01006->GetXaxis()->SetLabelFont(42);
   pol01006->GetXaxis()->SetTitleOffset(1);
   pol01006->GetXaxis()->SetTitleFont(42);
   pol01006->GetYaxis()->SetLabelFont(42);
   pol01006->GetYaxis()->SetTitleFont(42);
   pol01006->SetParameter(0,0.9296558);
   pol01006->SetParError(0,0.117421);
   pol01006->SetParLimits(0,0,0);
   pol01006->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01006);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_chi2NDF_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.93
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
