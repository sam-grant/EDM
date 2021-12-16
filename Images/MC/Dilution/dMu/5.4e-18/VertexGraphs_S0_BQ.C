void VertexGraphs_S0_BQ()
{
//=========Macro generated from canvas: S0/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S0 = new TCanvas("S0", "",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(-133.5049,-0.015625,3378.193,0.140625);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackTruth_fx1015[11] = {
   451.7781,
   653.2851,
   879.913,
   1123.018,
   1371.498,
   1620.743,
   1868.042,
   2116.557,
   2363.191,
   2615.094,
   2792.91};
   Double_t S0_trackTruth_fy1015[11] = {
   0.1076497,
   0.08176507,
   0.07492143,
   0.09110952,
   0.1095867,
   0.1172825,
   0.06496219,
   0.06517207,
   0.0402524,
   0.04124981,
   -0.05422072};
   Double_t S0_trackTruth_fex1015[11] = {
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
   Double_t S0_trackTruth_fey1015[11] = {
   0.1104355,
   0.03682984,
   0.02131037,
   0.01748237,
   0.01595212,
   0.0151595,
   0.01493115,
   0.01533717,
   0.01586359,
   0.01580069,
   0.03273252};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackTruth_fx1015,S0_trackTruth_fy1015,S0_trackTruth_fex1015,S0_trackTruth_fey1015);
   gre->SetName("S0_trackTruth");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackTruth1015 = new TH1F("Graph_S0_trackTruth1015","S0_",100,217.6649,3027.023);
   Graph_S0_trackTruth1015->SetMinimum(0);
   Graph_S0_trackTruth1015->SetMaximum(0.125);
   Graph_S0_trackTruth1015->SetDirectory(0);
   Graph_S0_trackTruth1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackTruth1015->SetLineColor(ci);
   Graph_S0_trackTruth1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackTruth1015->GetXaxis()->SetRange(1,100);
   Graph_S0_trackTruth1015->GetXaxis()->CenterTitle(true);
   Graph_S0_trackTruth1015->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackTruth1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackTruth1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackTruth1015->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackTruth1015->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackTruth1015->GetYaxis()->CenterTitle(true);
   Graph_S0_trackTruth1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackTruth1015->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackTruth1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackTruth1015->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_trackTruth1015->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackTruth1015->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackTruth1015->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackTruth1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackTruth1015);
   
   gre->Draw("ap");
   
   Double_t S0_trackReco_fx1016[11] = {
   451.647,
   653.2691,
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294,
   2789.557};
   Double_t S0_trackReco_fy1016[11] = {
   0.07814805,
   0.08753551,
   0.08368968,
   0.08311981,
   0.1178339,
   0.1074474,
   0.06591362,
   0.07259367,
   0.04454416,
   0.02802879,
   -0.03439055};
   Double_t S0_trackReco_fex1016[11] = {
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
   Double_t S0_trackReco_fey1016[11] = {
   0.1104967,
   0.03689173,
   0.02135777,
   0.01754203,
   0.01601735,
   0.01521858,
   0.01498697,
   0.01540681,
   0.01595041,
   0.01584908,
   0.03389351};
   gre = new TGraphErrors(11,S0_trackReco_fx1016,S0_trackReco_fy1016,S0_trackReco_fex1016,S0_trackReco_fey1016);
   gre->SetName("S0_trackReco");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0_trackReco1016 = new TH1F("Graph_S0_trackReco1016","S0_",100,217.8561,3023.348);
   Graph_S0_trackReco1016->SetMinimum(0);
   Graph_S0_trackReco1016->SetMaximum(0.125);
   Graph_S0_trackReco1016->SetDirectory(0);
   Graph_S0_trackReco1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco1016->SetLineColor(ci);
   Graph_S0_trackReco1016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco1016->GetXaxis()->SetRange(1,100);
   Graph_S0_trackReco1016->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco1016->GetXaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1016->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco1016->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackReco1016->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco1016->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco1016->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco1016->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco1016);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
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
   TLegendEntry *entry=leg->AddEntry("S0_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0_trackReco","Reco vertices","lpf");
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
