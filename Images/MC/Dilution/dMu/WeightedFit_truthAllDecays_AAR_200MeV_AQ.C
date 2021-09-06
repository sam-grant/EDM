void WeightedFit_truthAllDecays_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 14:08:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,0.3875,3456.75,2.5125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1005[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t delta_A_vs_p_fy1005[15] = {
   1.566645,
   1.572169,
   1.978818,
   1.627221,
   1.67765,
   1.684379,
   1.697625,
   1.602134,
   1.833569,
   1.648449,
   1.458343,
   1.714412,
   1.750175,
   1.773156,
   2.565705};
   Double_t delta_A_vs_p_fex1005[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t delta_A_vs_p_fey1005[15] = {
   0.4948426,
   0.1995139,
   0.1455999,
   0.1191779,
   0.1038268,
   0.09458154,
   0.08948929,
   0.0876226,
   0.08869208,
   0.09317686,
   0.1023347,
   0.1194325,
   0.1526267,
   0.2313536,
   0.576681};
   TGraphErrors *gre = new TGraphErrors(15,delta_A_vs_p_fx1005,delta_A_vs_p_fy1005,delta_A_vs_p_fex1005,delta_A_vs_p_fey1005);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1005 = new TH1F("Graph_delta_A_vs_p1005","",100,0,3300);
   Graph_delta_A_vs_p1005->SetMinimum(0.6);
   Graph_delta_A_vs_p1005->SetMaximum(2.3);
   Graph_delta_A_vs_p1005->SetDirectory(0);
   Graph_delta_A_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1005->SetLineColor(ci);
   Graph_delta_A_vs_p1005->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100");
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
   pol01006->SetChisquare(16.18807);
   pol01006->SetNDF(14);
   pol01006->GetXaxis()->SetLabelFont(42);
   pol01006->GetXaxis()->SetTitleOffset(1);
   pol01006->GetXaxis()->SetTitleFont(42);
   pol01006->GetYaxis()->SetLabelFont(42);
   pol01006->GetYaxis()->SetTitleFont(42);
   pol01006->SetParameter(0,1.68379);
   pol01006->SetParError(0,0.03044355);
   pol01006->SetParLimits(0,0,0);
   pol01006->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01006);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.3,0.27,0.7,0.42,NULL,"brNDC");
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
   entry=leg->AddEntry("pol0","Fit: #LT#delta'#GT = 1.68
#pm0.03
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
