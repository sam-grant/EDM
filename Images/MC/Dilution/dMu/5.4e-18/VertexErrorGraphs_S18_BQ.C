void VertexErrorGraphs_S18_BQ()
{
//=========Macro generated from canvas: S18/
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *S18 = new TCanvas("S18", "",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(-132.6318,-0.00375,3376.697,0.03375);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[11] = {
   452.2563,
   653.3485,
   880.6539,
   1123,
   1370.953,
   1619.754,
   1866.477,
   2115.036,
   2363.276,
   2612.101,
   2791.808};
   Double_t Graph0_fy1039[11] = {
   0.1107447,
   0.03696409,
   0.02110403,
   0.01729288,
   0.01595007,
   0.01525158,
   0.01549945,
   0.01640122,
   0.01777093,
   0.01749984,
   0.03982406};
   Double_t Graph0_fex1039[11] = {
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
   Double_t Graph0_fey1039[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","",100,218.3011,3025.764);
   Graph_Graph01039->SetMinimum(0);
   Graph_Graph01039->SetMaximum(0.03);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(1,100);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1040[11] = {
   452.1153,
   653.259,
   880.6386,
   1123.037,
   1370.835,
   1619.675,
   1866.351,
   2115.144,
   2363.223,
   2612.271,
   2787.59};
   Double_t Graph1_fy1040[11] = {
   0.1107707,
   0.03705102,
   0.02115334,
   0.0173629,
   0.01601287,
   0.01530312,
   0.01556238,
   0.01646739,
   0.01786378,
   0.01757159,
   0.0418298};
   Double_t Graph1_fex1040[11] = {
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
   Double_t Graph1_fey1040[11] = {
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
   gre = new TGraphErrors(11,Graph1_fx1040,Graph1_fy1040,Graph1_fex1040,Graph1_fey1040);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11040 = new TH1F("Graph_Graph11040","Graph",100,218.5678,3021.138);
   Graph_Graph11040->SetMinimum(0);
   Graph_Graph11040->SetMaximum(0.03);
   Graph_Graph11040->SetDirectory(0);
   Graph_Graph11040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11040->SetLineColor(ci);
   Graph_Graph11040->GetXaxis()->SetRange(1,100);
   Graph_Graph11040->GetXaxis()->SetLabelFont(42);
   Graph_Graph11040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11040->GetXaxis()->SetTitleFont(42);
   Graph_Graph11040->GetYaxis()->SetLabelFont(42);
   Graph_Graph11040->GetYaxis()->SetTitleFont(42);
   Graph_Graph11040->GetZaxis()->SetLabelFont(42);
   Graph_Graph11040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11040);
   
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
   S18->Modified();
   S18->cd();
   S18->SetSelected(S18);
}
