void S12_chi2NDF_vs_p_fit_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(470.8363,-0.8412436,3017.373,2.908756);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1007[11] = {
   455.8545,
   655.7505,
   884.3242,
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74,
   2607.778,
   2781.059};
   Double_t S12_chi2NDF_vs_p_fy1007[11] = {
   0.6123641,
   0.9443443,
   0.4997697,
   1.244179,
   1.057269,
   1.537829,
   0.4827002,
   0.5843887,
   1.296173,
   1.008168,
   1.037297};
   Double_t S12_chi2NDF_vs_p_fex1007[11] = {
   0.134606,
   0.09489378,
   0.0625871,
   0.05677389,
   0.0554844,
   0.0609757,
   0.07342478,
   0.09177205,
   0.1190404,
   0.1664793,
   0.2657252};
   Double_t S12_chi2NDF_vs_p_fey1007[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12_chi2NDF_vs_p_fx1007,S12_chi2NDF_vs_p_fy1007,S12_chi2NDF_vs_p_fex1007,S12_chi2NDF_vs_p_fey1007);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1007 = new TH1F("Graph_S12_chi2NDF_vs_p1007","",100,223.1594,3013.885);
   Graph_S12_chi2NDF_vs_p1007->SetMinimum(-0.4662436);
   Graph_S12_chi2NDF_vs_p1007->SetMaximum(2.533756);
   Graph_S12_chi2NDF_vs_p1007->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1007->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetRange(19,91);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1007);
   
   
   TF1 *pol01008 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01008->SetFillColor(19);
   pol01008->SetFillStyle(0);
   pol01008->SetLineColor(2);
   pol01008->SetLineWidth(2);
   pol01008->SetChisquare(0.8733759);
   pol01008->SetNDF(5);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,1.033756);
   pol01008->SetParError(0,0.1706239);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.03
#pm0.2
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
