void VertexGraphs_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 21 16:06:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-129.9375,-0.015625,3374.438,0.140625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackTruth_fx1005[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackTruth_fy1005[12] = {
   2.107326,
   0.05792543,
   0.09910718,
   0.09912971,
   0.09787021,
   0.1008978,
   0.09820562,
   0.09259891,
   0.07989598,
   0.05376532,
   0.06363584,
   0.03505713};
   Double_t trackTruth_fex1005[12] = {
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
   0,
   0};
   Double_t trackTruth_fey1005[12] = {
   0.6776693,
   0.02366909,
   0.01181676,
   0.009709212,
   0.008755766,
   0.008054999,
   0.00759934,
   0.007448148,
   0.007500743,
   0.007800729,
   0.008029997,
   0.009519484};
   TGraphErrors *gre = new TGraphErrors(12,trackTruth_fx1005,trackTruth_fy1005,trackTruth_fex1005,trackTruth_fey1005);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1005 = new TH1F("Graph_trackTruth1005","",100,0,3150);
   Graph_trackTruth1005->SetMinimum(0);
   Graph_trackTruth1005->SetMaximum(0.125);
   Graph_trackTruth1005->SetDirectory(0);
   Graph_trackTruth1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackTruth1005->SetLineColor(ci);
   Graph_trackTruth1005->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1005->GetXaxis()->SetRange(8,96);
   Graph_trackTruth1005->GetXaxis()->CenterTitle(true);
   Graph_trackTruth1005->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1005->GetXaxis()->SetTitleSize(0.04);
   Graph_trackTruth1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackTruth1005->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1005->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1005->GetYaxis()->CenterTitle(true);
   Graph_trackTruth1005->GetYaxis()->SetNdivisions(4000510);
   Graph_trackTruth1005->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1005->GetYaxis()->SetTitleSize(0.04);
   Graph_trackTruth1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackTruth1005->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1005->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1005->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1005);
   
   gre->Draw("ap");
   
   Double_t trackReco_fx1006[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackReco_fy1006[12] = {
   0.0691376,
   0.05724382,
   0.09451482,
   0.1103124,
   0.09753489,
   0.1023655,
   0.09804854,
   0.09522534,
   0.0713046,
   0.05485442,
   0.05819845,
   0.03218078};
   Double_t trackReco_fex1006[12] = {
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
   0,
   0};
   Double_t trackReco_fey1006[12] = {
   0.3540861,
   0.02393878,
   0.01192541,
   0.009786631,
   0.008830908,
   0.008139843,
   0.007688796,
   0.007543905,
   0.007646466,
   0.008049477,
   0.008217442,
   0.009839138};
   gre = new TGraphErrors(12,trackReco_fx1006,trackReco_fy1006,trackReco_fex1006,trackReco_fey1006);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_trackReco1006 = new TH1F("Graph_trackReco1006","",100,0,3150);
   Graph_trackReco1006->SetMinimum(0);
   Graph_trackReco1006->SetMaximum(0.125);
   Graph_trackReco1006->SetDirectory(0);
   Graph_trackReco1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1006->SetLineColor(ci);
   Graph_trackReco1006->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1006->GetXaxis()->SetRange(8,96);
   Graph_trackReco1006->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1006->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1006->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1006->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1006->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1006->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1006->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1006->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1006);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,0,750,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2500,0,2500,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   
   TLegend *leg = new TLegend(0.25,0.91,0.75,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
