void S18_chi2NDF_vs_p_fit_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(470.7315,-0.952981,3017.857,2.797019);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1009[11] = {
   455.7432,
   653.8266,
   883.6284,
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239,
   2781.455};
   Double_t S18_chi2NDF_vs_p_fy1009[11] = {
   0.9516316,
   0.9383193,
   1.335136,
   0.8789341,
   0.56858,
   1.399376,
   0.7050641,
   0.8361559,
   1.144004,
   1.33069,
   1.311456};
   Double_t S18_chi2NDF_vs_p_fex1009[11] = {
   0.1316061,
   0.09315749,
   0.06347119,
   0.05779539,
   0.05748647,
   0.06386167,
   0.07853738,
   0.09949788,
   0.1316717,
   0.1793381,
   0.2983409};
   Double_t S18_chi2NDF_vs_p_fey1009[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S18_chi2NDF_vs_p_fx1009,S18_chi2NDF_vs_p_fy1009,S18_chi2NDF_vs_p_fex1009,S18_chi2NDF_vs_p_fey1009);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1009 = new TH1F("Graph_S18_chi2NDF_vs_p1009","",100,222.9975,3014.367);
   Graph_S18_chi2NDF_vs_p1009->SetMinimum(-0.5779809);
   Graph_S18_chi2NDF_vs_p1009->SetMaximum(2.422019);
   Graph_S18_chi2NDF_vs_p1009->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1009->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetRange(19,91);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1009);
   
   
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
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.922
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
