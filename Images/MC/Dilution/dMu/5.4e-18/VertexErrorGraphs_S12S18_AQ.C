void VertexErrorGraphs_S12S18_AQ()
{
//=========Macro generated from canvas: S12S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S12S18 = new TCanvas("S12S18", "",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(-132.117,-0.00375,3365.098,0.03375);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[12] = {
   107.613,
   434.4437,
   631.4983,
   875.645,
   1124.343,
   1373.479,
   1622.481,
   1871.403,
   2119.962,
   2367.8,
   2613.257,
   2835.815};
   Double_t Graph0_fy1031[12] = {
   0.6273586,
   0.02392729,
   0.01091576,
   0.008475081,
   0.007154044,
   0.006250629,
   0.005613168,
   0.005159743,
   0.004836235,
   0.004627593,
   0.004539727,
   0.005399937};
   Double_t Graph0_fex1031[12] = {
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
   Double_t Graph0_fey1031[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","",100,0,3108.635);
   Graph_Graph01031->SetMinimum(0);
   Graph_Graph01031->SetMaximum(0.03);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->SetRange(8,97);
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1032[12] = {
   194.2052,
   428.5039,
   630.9259,
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793,
   2612.56,
   2825.572};
   Double_t Graph1_fy1032[12] = {
   0.2288328,
   0.02250446,
   0.01070293,
   0.008395426,
   0.007213334,
   0.006390976,
   0.005817928,
   0.005474364,
   0.005323736,
   0.005348422,
   0.005662583,
   0.008232133};
   Double_t Graph1_fex1032[12] = {
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
   Double_t Graph1_fey1032[12] = {
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
   gre = new TGraphErrors(12,Graph1_fx1032,Graph1_fy1032,Graph1_fex1032,Graph1_fey1032);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11032 = new TH1F("Graph_Graph11032","Graph",100,0,3088.709);
   Graph_Graph11032->SetMinimum(0);
   Graph_Graph11032->SetMaximum(0.03);
   Graph_Graph11032->SetDirectory(0);
   Graph_Graph11032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11032->SetLineColor(ci);
   Graph_Graph11032->GetXaxis()->SetRange(8,98);
   Graph_Graph11032->GetXaxis()->SetLabelFont(42);
   Graph_Graph11032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11032->GetXaxis()->SetTitleFont(42);
   Graph_Graph11032->GetYaxis()->SetLabelFont(42);
   Graph_Graph11032->GetYaxis()->SetTitleFont(42);
   Graph_Graph11032->GetZaxis()->SetLabelFont(42);
   Graph_Graph11032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11032);
   
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
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
