void VertexGraphs_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 29 12:25:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-137.5,-0.128125,3387.5,0.153125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackTruth_fx1009[11] = {
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
   Double_t trackTruth_fy1009[11] = {
   -0.02568712,
   0.09513451,
   0.07151201,
   0.08237594,
   0.07851831,
   0.09222488,
   0.0805044,
   0.05882719,
   0.03778898,
   0.05777411,
   -0.008507791};
   Double_t trackTruth_fex1009[11] = {
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
   Double_t trackTruth_fey1009[11] = {
   0.06371896,
   0.02130296,
   0.01223655,
   0.01004357,
   0.009201662,
   0.008763131,
   0.00878238,
   0.009190779,
   0.009764998,
   0.009695387,
   0.02116047};
   TGraphErrors *gre = new TGraphErrors(11,trackTruth_fx1009,trackTruth_fy1009,trackTruth_fex1009,trackTruth_fey1009);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1009 = new TH1F("Graph_trackTruth1009","",100,125,3125);
   Graph_trackTruth1009->SetMinimum(-0.1);
   Graph_trackTruth1009->SetMaximum(0.125);
   Graph_trackTruth1009->SetDirectory(0);
   Graph_trackTruth1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackTruth1009->SetLineColor(ci);
   Graph_trackTruth1009->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1009->GetXaxis()->SetRange(4,97);
   Graph_trackTruth1009->GetXaxis()->CenterTitle(true);
   Graph_trackTruth1009->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1009->GetXaxis()->SetTitleSize(0.04);
   Graph_trackTruth1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackTruth1009->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1009->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1009->GetYaxis()->CenterTitle(true);
   Graph_trackTruth1009->GetYaxis()->SetNdivisions(4000510);
   Graph_trackTruth1009->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1009->GetYaxis()->SetTitleSize(0.04);
   Graph_trackTruth1009->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackTruth1009->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1009->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1009->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1009);
   
   gre->Draw("ap");
   
   Double_t trackReco_fx1010[11] = {
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
   Double_t trackReco_fy1010[11] = {
   -0.01376755,
   0.09268763,
   0.07301164,
   0.08159744,
   0.08079776,
   0.09122593,
   0.07952967,
   0.06147354,
   0.03917428,
   0.05486392,
   -0.008986673};
   Double_t trackReco_fex1010[11] = {
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
   Double_t trackReco_fey1010[11] = {
   0.06371519,
   0.02133871,
   0.01226842,
   0.01007895,
   0.009239917,
   0.008793494,
   0.008815962,
   0.009233603,
   0.00981411,
   0.009736495,
   0.02198102};
   gre = new TGraphErrors(11,trackReco_fx1010,trackReco_fy1010,trackReco_fex1010,trackReco_fey1010);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_trackReco1010 = new TH1F("Graph_trackReco1010","",100,125,3125);
   Graph_trackReco1010->SetMinimum(-0.1);
   Graph_trackReco1010->SetMaximum(0.125);
   Graph_trackReco1010->SetDirectory(0);
   Graph_trackReco1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1010->SetLineColor(ci);
   Graph_trackReco1010->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1010->GetXaxis()->SetRange(4,97);
   Graph_trackReco1010->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1010->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1010->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1010->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1010->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1010->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1010->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1010->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1010);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,-0.1,750,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2500,-0.1,2500,0.125);

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
