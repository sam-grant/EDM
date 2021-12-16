void VertexErrorGraphs_S18_AQ()
{
//=========Macro generated from canvas: S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S18 = new TCanvas("S18", "",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(-132.0991,-0.00375,3364.641,0.03375);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[12] = {
   108.3281,
   434.6973,
   631.5345,
   875.6243,
   1124.334,
   1373.468,
   1622.472,
   1871.33,
   2119.915,
   2367.684,
   2613.196,
   2835.497};
   Double_t Graph0_fy1029[12] = {
   0.8530771,
   0.03397845,
   0.01545771,
   0.01199999,
   0.01013271,
   0.008862745,
   0.007965262,
   0.007322457,
   0.00686574,
   0.0065796,
   0.006465399,
   0.007720725};
   Double_t Graph0_fex1029[12] = {
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
   Double_t Graph0_fey1029[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","",100,0,3108.214);
   Graph_Graph01029->SetMinimum(0);
   Graph_Graph01029->SetMaximum(0.03);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(8,97);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1030[12] = {
   193.627,
   428.7209,
   630.9542,
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58,
   2825.157};
   Double_t Graph1_fy1030[12] = {
   0.325337,
   0.03194155,
   0.01515347,
   0.01188739,
   0.01021946,
   0.009058174,
   0.008255266,
   0.007772672,
   0.007565294,
   0.007618001,
   0.008087438,
   0.01182073};
   Double_t Graph1_fex1030[12] = {
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
   Double_t Graph1_fey1030[12] = {
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
   gre = new TGraphErrors(12,Graph1_fx1030,Graph1_fy1030,Graph1_fex1030,Graph1_fey1030);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11030 = new TH1F("Graph_Graph11030","Graph",100,0,3088.31);
   Graph_Graph11030->SetMinimum(0);
   Graph_Graph11030->SetMaximum(0.03);
   Graph_Graph11030->SetDirectory(0);
   Graph_Graph11030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11030->SetLineColor(ci);
   Graph_Graph11030->GetXaxis()->SetRange(8,98);
   Graph_Graph11030->GetXaxis()->SetLabelFont(42);
   Graph_Graph11030->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11030->GetXaxis()->SetTitleFont(42);
   Graph_Graph11030->GetYaxis()->SetLabelFont(42);
   Graph_Graph11030->GetYaxis()->SetTitleFont(42);
   Graph_Graph11030->GetZaxis()->SetLabelFont(42);
   Graph_Graph11030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11030);
   
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
