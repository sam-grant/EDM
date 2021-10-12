void AllGraphs()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 12 10:58:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-413.4375,-0.14375,3405.938,0.29375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t truthAllDecays_fx1001[12] = {
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
   Double_t truthAllDecays_fy1001[12] = {
   0.1604489,
   0.1914321,
   0.1861539,
   0.1873514,
   0.1781711,
   0.1665037,
   0.1509201,
   0.1372834,
   0.09944449,
   0.0942995,
   0.05480421,
   0.03201876};
   Double_t truthAllDecays_fex1001[12] = {
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
   Double_t truthAllDecays_fey1001[12] = {
   0.04228325,
   0.01694546,
   0.01249446,
   0.01022219,
   0.008798885,
   0.007836936,
   0.007135645,
   0.006625037,
   0.006243624,
   0.005982943,
   0.005849845,
   0.006017373};
   TGraphErrors *gre = new TGraphErrors(12,truthAllDecays_fx1001,truthAllDecays_fy1001,truthAllDecays_fex1001,truthAllDecays_fey1001);
   gre->SetName("truthAllDecays");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truthAllDecays1001 = new TH1F("Graph_truthAllDecays1001","",100,0,3150);
   Graph_truthAllDecays1001->SetMinimum(-0.1);
   Graph_truthAllDecays1001->SetMaximum(0.25);
   Graph_truthAllDecays1001->SetDirectory(0);
   Graph_truthAllDecays1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_truthAllDecays1001->SetLineColor(ci);
   Graph_truthAllDecays1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_truthAllDecays1001->GetXaxis()->SetRange(0,96);
   Graph_truthAllDecays1001->GetXaxis()->CenterTitle(true);
   Graph_truthAllDecays1001->GetXaxis()->SetLabelFont(42);
   Graph_truthAllDecays1001->GetXaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_truthAllDecays1001->GetXaxis()->SetTitleFont(42);
   Graph_truthAllDecays1001->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truthAllDecays1001->GetYaxis()->CenterTitle(true);
   Graph_truthAllDecays1001->GetYaxis()->SetNdivisions(4000510);
   Graph_truthAllDecays1001->GetYaxis()->SetLabelFont(42);
   Graph_truthAllDecays1001->GetYaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_truthAllDecays1001->GetYaxis()->SetTitleFont(42);
   Graph_truthAllDecays1001->GetZaxis()->SetLabelFont(42);
   Graph_truthAllDecays1001->GetZaxis()->SetTitleOffset(1);
   Graph_truthAllDecays1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truthAllDecays1001);
   
   gre->Draw("ap");
   
   Double_t truth_fx1002[12] = {
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
   Double_t truth_fy1002[12] = {
   0.145862,
   0.1518495,
   0.1527863,
   0.1549356,
   0.1527917,
   0.1519917,
   0.1384607,
   0.1245835,
   0.1081712,
   0.08904711,
   0.06684329,
   0.03597273};
   Double_t truth_fex1002[12] = {
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
   Double_t truth_fey1002[12] = {
   0.02915516,
   0.01215319,
   0.00794793,
   0.00595679,
   0.004925984,
   0.004279869,
   0.003804361,
   0.003484944,
   0.003272252,
   0.003126432,
   0.003030826,
   0.003116538};
   gre = new TGraphErrors(12,truth_fx1002,truth_fy1002,truth_fex1002,truth_fey1002);
   gre->SetName("truth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truth1002 = new TH1F("Graph_truth1002","",100,0,3150);
   Graph_truth1002->SetMinimum(-0.1);
   Graph_truth1002->SetMaximum(0.25);
   Graph_truth1002->SetDirectory(0);
   Graph_truth1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truth1002->SetLineColor(ci);
   Graph_truth1002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_truth1002->GetXaxis()->SetRange(0,96);
   Graph_truth1002->GetXaxis()->SetLabelFont(42);
   Graph_truth1002->GetXaxis()->SetTitleOffset(1);
   Graph_truth1002->GetXaxis()->SetTitleFont(42);
   Graph_truth1002->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truth1002->GetYaxis()->SetLabelFont(42);
   Graph_truth1002->GetYaxis()->SetTitleFont(42);
   Graph_truth1002->GetZaxis()->SetLabelFont(42);
   Graph_truth1002->GetZaxis()->SetTitleOffset(1);
   Graph_truth1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truth1002);
   
   gre->Draw("p ");
   
   Double_t trackTruth_fx1003[11] = {
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
   Double_t trackTruth_fy1003[11] = {
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
   Double_t trackTruth_fex1003[11] = {
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
   Double_t trackTruth_fey1003[11] = {
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
   gre = new TGraphErrors(11,trackTruth_fx1003,trackTruth_fy1003,trackTruth_fex1003,trackTruth_fey1003);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1003 = new TH1F("Graph_trackTruth1003","",100,125,3125);
   Graph_trackTruth1003->SetMinimum(-0.1);
   Graph_trackTruth1003->SetMaximum(0.25);
   Graph_trackTruth1003->SetDirectory(0);
   Graph_trackTruth1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1003->SetLineColor(ci);
   Graph_trackTruth1003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1003->GetXaxis()->SetRange(0,97);
   Graph_trackTruth1003->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1003->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1003);
   
   gre->Draw("p ");
   
   Double_t trackReco_fx1004[11] = {
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
   Double_t trackReco_fy1004[11] = {
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
   Double_t trackReco_fex1004[11] = {
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
   Double_t trackReco_fey1004[11] = {
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
   gre = new TGraphErrors(11,trackReco_fx1004,trackReco_fy1004,trackReco_fex1004,trackReco_fey1004);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1004 = new TH1F("Graph_trackReco1004","",100,125,3125);
   Graph_trackReco1004->SetMinimum(-0.1);
   Graph_trackReco1004->SetMaximum(0.25);
   Graph_trackReco1004->SetDirectory(0);
   Graph_trackReco1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1004->SetLineColor(ci);
   Graph_trackReco1004->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1004->GetXaxis()->SetRange(0,97);
   Graph_trackReco1004->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1004->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1004);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.59,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("truthAllDecays","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("truth","Accepted decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
