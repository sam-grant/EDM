void VertexErrorGraphs_S0_BQ()
{
//=========Macro generated from canvas: S0/
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *S0 = new TCanvas("S0", "",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(-133.5049,-0.00375,3378.193,0.03375);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[11] = {
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
   Double_t Graph0_fy1035[11] = {
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
   Double_t Graph0_fex1035[11] = {
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
   Double_t Graph0_fey1035[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","",100,217.6649,3027.023);
   Graph_Graph01035->SetMinimum(0);
   Graph_Graph01035->SetMaximum(0.03);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(1,100);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1036[11] = {
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
   Double_t Graph1_fy1036[11] = {
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
   Double_t Graph1_fex1036[11] = {
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
   Double_t Graph1_fey1036[11] = {
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
   gre = new TGraphErrors(11,Graph1_fx1036,Graph1_fy1036,Graph1_fex1036,Graph1_fey1036);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11036 = new TH1F("Graph_Graph11036","Graph",100,217.8561,3023.348);
   Graph_Graph11036->SetMinimum(0);
   Graph_Graph11036->SetMaximum(0.03);
   Graph_Graph11036->SetDirectory(0);
   Graph_Graph11036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11036->SetLineColor(ci);
   Graph_Graph11036->GetXaxis()->SetRange(1,100);
   Graph_Graph11036->GetXaxis()->SetLabelFont(42);
   Graph_Graph11036->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11036->GetXaxis()->SetTitleFont(42);
   Graph_Graph11036->GetYaxis()->SetLabelFont(42);
   Graph_Graph11036->GetYaxis()->SetTitleFont(42);
   Graph_Graph11036->GetZaxis()->SetLabelFont(42);
   Graph_Graph11036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11036);
   
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
