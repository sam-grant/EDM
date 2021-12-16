void VertexErrorGraphs_S12S18_BQ()
{
//=========Macro generated from canvas: S12S18/
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *S12S18 = new TCanvas("S12S18", "",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(-132.9671,-0.00375,3376.805,0.03375);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[11] = {
   451.995,
   653.3689,
   880.4532,
   1123.026,
   1371.063,
   1620.016,
   1866.622,
   2114.934,
   2362.94,
   2613.154,
   2791.843};
   Double_t Graph0_fy1041[11] = {
   0.07810725,
   0.02613249,
   0.01495277,
   0.01227616,
   0.01126697,
   0.01074253,
   0.01085813,
   0.01147506,
   0.01237924,
   0.01226826,
   0.02770814};
   Double_t Graph0_fex1041[11] = {
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
   Double_t Graph0_fey1041[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","",100,218.0102,3025.828);
   Graph_Graph01041->SetMinimum(0);
   Graph_Graph01041->SetMaximum(0.03);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(1,100);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1042[11] = {
   451.859,
   653.3117,
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266,
   2787.684};
   Double_t Graph1_fy1042[11] = {
   0.07808962,
   0.02618025,
   0.01499285,
   0.0123194,
   0.01131333,
   0.01077821,
   0.01090028,
   0.01152905,
   0.01243668,
   0.01232611,
   0.02890409};
   Double_t Graph1_fex1042[11] = {
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
   Double_t Graph1_fey1042[11] = {
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
   gre = new TGraphErrors(11,Graph1_fx1042,Graph1_fy1042,Graph1_fex1042,Graph1_fey1042);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11042 = new TH1F("Graph_Graph11042","Graph",100,218.2765,3021.267);
   Graph_Graph11042->SetMinimum(0);
   Graph_Graph11042->SetMaximum(0.03);
   Graph_Graph11042->SetDirectory(0);
   Graph_Graph11042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11042->SetLineColor(ci);
   Graph_Graph11042->GetXaxis()->SetRange(1,100);
   Graph_Graph11042->GetXaxis()->SetLabelFont(42);
   Graph_Graph11042->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11042->GetXaxis()->SetTitleFont(42);
   Graph_Graph11042->GetYaxis()->SetLabelFont(42);
   Graph_Graph11042->GetYaxis()->SetTitleFont(42);
   Graph_Graph11042->GetZaxis()->SetLabelFont(42);
   Graph_Graph11042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11042);
   
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
