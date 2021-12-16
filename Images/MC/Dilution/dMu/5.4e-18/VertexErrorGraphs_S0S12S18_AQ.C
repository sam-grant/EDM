void VertexErrorGraphs_S0S12S18_AQ()
{
//=========Macro generated from canvas: S0S12S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(-132.1113,-0.00375,3364.952,0.03375);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[12] = {
   108.5855,
   434.7742,
   631.4237,
   875.6653,
   1124.341,
   1373.527,
   1622.515,
   1871.416,
   2120.03,
   2367.802,
   2613.322,
   2835.781};
   Double_t Graph0_fy1033[12] = {
   0.5224759,
   0.0195603,
   0.008902676,
   0.006912753,
   0.005830963,
   0.005088117,
   0.004571048,
   0.004199678,
   0.003934573,
   0.003757958,
   0.003679075,
   0.004369713};
   Double_t Graph0_fex1033[12] = {
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
   Double_t Graph0_fey1033[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","",100,0,3108.5);
   Graph_Graph01033->SetMinimum(0);
   Graph_Graph01033->SetMaximum(0.03);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(8,97);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1034[12] = {
   194.7094,
   428.8875,
   630.8811,
   875.2126,
   1123.934,
   1373.236,
   1622.304,
   1870.749,
   2119.247,
   2366.839,
   2612.635,
   2826.058};
   Double_t Graph1_fy1034[12] = {
   0.1890246,
   0.01839532,
   0.008733941,
   0.006849563,
   0.005879533,
   0.005204487,
   0.00473938,
   0.004455805,
   0.004327418,
   0.004334615,
   0.004573606,
   0.006576987};
   Double_t Graph1_fex1034[12] = {
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
   Double_t Graph1_fey1034[12] = {
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
   gre = new TGraphErrors(12,Graph1_fx1034,Graph1_fy1034,Graph1_fex1034,Graph1_fey1034);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11034 = new TH1F("Graph_Graph11034","Graph",100,0,3089.192);
   Graph_Graph11034->SetMinimum(0);
   Graph_Graph11034->SetMaximum(0.03);
   Graph_Graph11034->SetDirectory(0);
   Graph_Graph11034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11034->SetLineColor(ci);
   Graph_Graph11034->GetXaxis()->SetRange(8,98);
   Graph_Graph11034->GetXaxis()->SetLabelFont(42);
   Graph_Graph11034->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11034->GetXaxis()->SetTitleFont(42);
   Graph_Graph11034->GetYaxis()->SetLabelFont(42);
   Graph_Graph11034->GetYaxis()->SetTitleFont(42);
   Graph_Graph11034->GetZaxis()->SetLabelFont(42);
   Graph_Graph11034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11034);
   
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
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
