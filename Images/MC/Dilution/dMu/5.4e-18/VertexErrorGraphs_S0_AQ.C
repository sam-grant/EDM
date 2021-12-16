void VertexErrorGraphs_S0_AQ()
{
//=========Macro generated from canvas: S0/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S0 = new TCanvas("S0", "",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(-132.0994,-0.00375,3364.65,0.03375);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[12] = {
   110.6597,
   435.4286,
   631.2771,
   875.7051,
   1124.338,
   1373.621,
   1622.584,
   1871.441,
   2120.162,
   2367.805,
   2613.446,
   2835.716};
   Double_t Graph0_fy1025[12] = {
   0.9138112,
   0.03395374,
   0.01538315,
   0.01194734,
   0.01006334,
   0.008759283,
   0.007875569,
   0.007228404,
   0.006766031,
   0.006439418,
   0.006279251,
   0.00743632};
   Double_t Graph0_fex1025[12] = {
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
   Double_t Graph0_fey1025[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","",100,0,3108.222);
   Graph_Graph01025->SetMinimum(0);
   Graph_Graph01025->SetMaximum(0.03);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(8,97);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1026[12] = {
   195.803,
   429.651,
   630.7927,
   875.2717,
   1123.906,
   1373.288,
   1622.379,
   1870.823,
   2119.356,
   2366.927,
   2612.775,
   2826.941};
   Double_t Graph1_fy1026[12] = {
   0.3335482,
   0.03193005,
   0.0151092,
   0.01184487,
   0.01014847,
   0.00896718,
   0.008171006,
   0.007669607,
   0.007429162,
   0.007398913,
   0.007755952,
   0.01092661};
   Double_t Graph1_fex1026[12] = {
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
   Double_t Graph1_fey1026[12] = {
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
   gre = new TGraphErrors(12,Graph1_fx1026,Graph1_fy1026,Graph1_fex1026,Graph1_fey1026);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11026 = new TH1F("Graph_Graph11026","Graph",100,0,3090.055);
   Graph_Graph11026->SetMinimum(0);
   Graph_Graph11026->SetMaximum(0.03);
   Graph_Graph11026->SetDirectory(0);
   Graph_Graph11026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11026->SetLineColor(ci);
   Graph_Graph11026->GetXaxis()->SetRange(8,98);
   Graph_Graph11026->GetXaxis()->SetLabelFont(42);
   Graph_Graph11026->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11026->GetXaxis()->SetTitleFont(42);
   Graph_Graph11026->GetYaxis()->SetLabelFont(42);
   Graph_Graph11026->GetYaxis()->SetTitleFont(42);
   Graph_Graph11026->GetZaxis()->SetLabelFont(42);
   Graph_Graph11026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11026);
   
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
   S0->Modified();
   S0->cd();
   S0->SetSelected(S0);
}
