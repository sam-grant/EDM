void VertexGraphs_S12S18_BQ()
{
//=========Macro generated from canvas: S12S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S12S18 = new TCanvas("S12S18", "",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(-132.9671,-0.015625,3376.805,0.140625);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackTruth_fx1021[11] = {
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
   Double_t S12S18_trackTruth_fy1021[11] = {
   -0.08602138,
   0.09883385,
   0.06955369,
   0.07703632,
   0.06275568,
   0.07945771,
   0.08725909,
   0.05367309,
   0.03755978,
   0.06650523,
   0.02079491};
   Double_t S12S18_trackTruth_fex1021[11] = {
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
   Double_t S12S18_trackTruth_fey1021[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12S18_trackTruth_fx1021,S12S18_trackTruth_fy1021,S12S18_trackTruth_fex1021,S12S18_trackTruth_fey1021);
   gre->SetName("S12S18_trackTruth");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackTruth1021 = new TH1F("Graph_S12S18_trackTruth1021","S12S18_",100,218.0102,3025.828);
   Graph_S12S18_trackTruth1021->SetMinimum(0);
   Graph_S12S18_trackTruth1021->SetMaximum(0.125);
   Graph_S12S18_trackTruth1021->SetDirectory(0);
   Graph_S12S18_trackTruth1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackTruth1021->SetLineColor(ci);
   Graph_S12S18_trackTruth1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackTruth1021->GetXaxis()->SetRange(1,100);
   Graph_S12S18_trackTruth1021->GetXaxis()->CenterTitle(true);
   Graph_S12S18_trackTruth1021->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackTruth1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackTruth1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_trackTruth1021->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackTruth1021->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12S18_trackTruth1021->GetYaxis()->CenterTitle(true);
   Graph_S12S18_trackTruth1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_trackTruth1021->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackTruth1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackTruth1021->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12S18_trackTruth1021->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackTruth1021->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackTruth1021->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackTruth1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackTruth1021);
   
   gre->Draw("ap");
   
   Double_t S12S18_trackReco_fx1022[11] = {
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
   Double_t S12S18_trackReco_fy1022[11] = {
   -0.05203544,
   0.09203146,
   0.06746833,
   0.08038724,
   0.06266647,
   0.08177498,
   0.08560464,
   0.05369497,
   0.03499522,
   0.06993077,
   0.01901643};
   Double_t S12S18_trackReco_fex1022[11] = {
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
   Double_t S12S18_trackReco_fey1022[11] = {
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
   gre = new TGraphErrors(11,S12S18_trackReco_fx1022,S12S18_trackReco_fy1022,S12S18_trackReco_fex1022,S12S18_trackReco_fey1022);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12S18_trackReco1022 = new TH1F("Graph_S12S18_trackReco1022","S12S18_",100,218.2765,3021.267);
   Graph_S12S18_trackReco1022->SetMinimum(0);
   Graph_S12S18_trackReco1022->SetMaximum(0.125);
   Graph_S12S18_trackReco1022->SetDirectory(0);
   Graph_S12S18_trackReco1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackReco1022->SetLineColor(ci);
   Graph_S12S18_trackReco1022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackReco1022->GetXaxis()->SetRange(1,100);
   Graph_S12S18_trackReco1022->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1022->GetXaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco1022->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1022->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12S18_trackReco1022->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1022->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1022->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1022->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackReco1022);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
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
   TLegendEntry *entry=leg->AddEntry("S12S18_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12S18_trackReco","Reco vertices","lpf");
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
