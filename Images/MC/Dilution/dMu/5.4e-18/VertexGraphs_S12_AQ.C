void VertexGraphs_S12_AQ()
{
//=========Macro generated from canvas: S12/
//=========  (Tue Dec  7 01:11:47 2021) by ROOT version 6.24/04
   TCanvas *S12 = new TCanvas("S12", "",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(-132.1346,-0.015625,3365.546,0.140625);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackTruth_fx1007[12] = {
   106.8541,
   434.1964,
   631.4626,
   875.6655,
   1124.351,
   1373.49,
   1622.49,
   1871.474,
   2120.007,
   2367.914,
   2613.316,
   2836.123};
   Double_t S12_trackTruth_fy1007[12] = {
   0.06026725,
   0.1531331,
   0.08299826,
   0.0938055,
   0.08957912,
   0.1076011,
   0.1039146,
   0.09503217,
   0.06710763,
   0.06265544,
   0.05706323,
   0.04487843};
   Double_t S12_trackTruth_fex1007[12] = {
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
   Double_t S12_trackTruth_fey1007[12] = {
   0.9054697,
   0.03369642,
   0.01541611,
   0.01197074,
   0.01010175,
   0.008816735,
   0.007911287,
   0.007271552,
   0.006813177,
   0.006509541,
   0.006375421,
   0.007553756};
   TGraphErrors *gre = new TGraphErrors(12,S12_trackTruth_fx1007,S12_trackTruth_fy1007,S12_trackTruth_fex1007,S12_trackTruth_fey1007);
   gre->SetName("S12_trackTruth");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackTruth1007 = new TH1F("Graph_S12_trackTruth1007","S12_",100,0,3109.05);
   Graph_S12_trackTruth1007->SetMinimum(0);
   Graph_S12_trackTruth1007->SetMaximum(0.125);
   Graph_S12_trackTruth1007->SetDirectory(0);
   Graph_S12_trackTruth1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackTruth1007->SetLineColor(ci);
   Graph_S12_trackTruth1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackTruth1007->GetXaxis()->SetRange(8,97);
   Graph_S12_trackTruth1007->GetXaxis()->CenterTitle(true);
   Graph_S12_trackTruth1007->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackTruth1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackTruth1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackTruth1007->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackTruth1007->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12_trackTruth1007->GetYaxis()->CenterTitle(true);
   Graph_S12_trackTruth1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackTruth1007->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackTruth1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackTruth1007->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12_trackTruth1007->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackTruth1007->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackTruth1007->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackTruth1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackTruth1007);
   
   gre->Draw("ap");
   
   Double_t S12_trackReco_fx1008[12] = {
   194.7748,
   428.2916,
   630.898,
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541,
   2825.967};
   Double_t S12_trackReco_fy1008[12] = {
   0.3266736,
   0.1272475,
   0.07663549,
   0.1022067,
   0.08537845,
   0.09916971,
   0.09377903,
   0.09281237,
   0.06238963,
   0.05410887,
   0.06779425,
   0.03563996};
   Double_t S12_trackReco_fex1008[12] = {
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
   Double_t S12_trackReco_fey1008[12] = {
   0.3207424,
   0.03170926,
   0.0151185,
   0.01185819,
   0.01018285,
   0.009018131,
   0.008200352,
   0.00771117,
   0.007492493,
   0.007510204,
   0.007928836,
   0.01146431};
   gre = new TGraphErrors(12,S12_trackReco_fx1008,S12_trackReco_fy1008,S12_trackReco_fex1008,S12_trackReco_fey1008);
   gre->SetName("S12_trackReco");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_trackReco1008 = new TH1F("Graph_S12_trackReco1008","S12_",100,0,3089.086);
   Graph_S12_trackReco1008->SetMinimum(0);
   Graph_S12_trackReco1008->SetMaximum(0.125);
   Graph_S12_trackReco1008->SetDirectory(0);
   Graph_S12_trackReco1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco1008->SetLineColor(ci);
   Graph_S12_trackReco1008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco1008->GetXaxis()->SetRange(8,98);
   Graph_S12_trackReco1008->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco1008->GetXaxis()->SetTitleOffset(1);
   Graph_S12_trackReco1008->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco1008->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12_trackReco1008->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco1008->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco1008->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco1008->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco1008);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   TLine *line = new TLine(750,0,750,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2750,0,2750,0.125);

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
   TLegendEntry *entry=leg->AddEntry("S12_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
