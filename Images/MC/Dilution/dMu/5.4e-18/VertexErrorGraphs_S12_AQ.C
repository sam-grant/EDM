void VertexErrorGraphs_S12_AQ()
{
//=========Macro generated from canvas: S12/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S12 = new TCanvas("S12", "",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(-132.1346,-0.00375,3365.546,0.03375);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[12] = {
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
   Double_t Graph0_fy1027[12] = {
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
   Double_t Graph0_fex1027[12] = {
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
   Double_t Graph0_fey1027[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","",100,0,3109.05);
   Graph_Graph01027->SetMinimum(0);
   Graph_Graph01027->SetMaximum(0.03);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(8,97);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1028[12] = {
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
   Double_t Graph1_fy1028[12] = {
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
   Double_t Graph1_fex1028[12] = {
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
   Double_t Graph1_fey1028[12] = {
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
   gre = new TGraphErrors(12,Graph1_fx1028,Graph1_fy1028,Graph1_fex1028,Graph1_fey1028);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11028 = new TH1F("Graph_Graph11028","Graph",100,0,3089.086);
   Graph_Graph11028->SetMinimum(0);
   Graph_Graph11028->SetMaximum(0.03);
   Graph_Graph11028->SetDirectory(0);
   Graph_Graph11028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11028->SetLineColor(ci);
   Graph_Graph11028->GetXaxis()->SetRange(8,98);
   Graph_Graph11028->GetXaxis()->SetLabelFont(42);
   Graph_Graph11028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetXaxis()->SetTitleFont(42);
   Graph_Graph11028->GetYaxis()->SetLabelFont(42);
   Graph_Graph11028->GetYaxis()->SetTitleFont(42);
   Graph_Graph11028->GetZaxis()->SetLabelFont(42);
   Graph_Graph11028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11028);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,0,750,0.03);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2750,0,2750,0.03);

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
   TLegendEntry *entry=leg->AddEntry("Graph0","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("Graph1","Reco vertices","lpf");
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
