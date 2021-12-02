void WeightedFit_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 14:17:26 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,0.35,3456.75,2.85);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1005[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1005[6] = {
   1.366168,
   1.807706,
   1.670431,
   1.716328,
   1.549605,
   2.180073};
   Double_t delta_A_vs_p_fex1005[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1005[6] = {
   0.6015275,
   0.1526444,
   0.1127256,
   0.1098103,
   0.1482086,
   0.346689};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1005,delta_A_vs_p_fy1005,delta_A_vs_p_fex1005,delta_A_vs_p_fey1005);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1005 = new TH1F("Graph_delta_A_vs_p1005","",100,0,3300);
   Graph_delta_A_vs_p1005->SetMinimum(0.6);
   Graph_delta_A_vs_p1005->SetMaximum(2.6);
   Graph_delta_A_vs_p1005->SetDirectory(0);
   Graph_delta_A_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1005->SetLineColor(ci);
   Graph_delta_A_vs_p1005->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1005->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1005->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1005);
   
   
   TF1 *pol01006 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01006->SetFillColor(19);
   pol01006->SetFillStyle(0);
   pol01006->SetLineColor(2);
   pol01006->SetLineWidth(2);
   pol01006->SetChisquare(3.84394);
   pol01006->SetNDF(5);
   pol01006->GetXaxis()->SetLabelFont(42);
   pol01006->GetXaxis()->SetTitleOffset(1);
   pol01006->GetXaxis()->SetTitleFont(42);
   pol01006->GetYaxis()->SetLabelFont(42);
   pol01006->GetYaxis()->SetTitleFont(42);
   pol01006->SetParameter(0,1.699519);
   pol01006->SetParError(0,0.06188024);
   pol01006->SetParLimits(0,0,0);
   pol01006->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01006);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("delta_A_vs_p","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
#pm0.06
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
