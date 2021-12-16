void VertexGraphs_S18_BQ()
{
//=========Macro generated from canvas: S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S18 = new TCanvas("S18", "",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(-132.6318,-0.015625,3376.697,0.140625);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackTruth_fx1019[11] = {
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
   Double_t S18_trackTruth_fy1019[11] = {
   -0.2375532,
   0.1161065,
   0.04070232,
   0.06855138,
   0.05955331,
   0.08353152,
   0.0814325,
   0.03725904,
   0.04008008,
   0.08839138,
   0.001610542};
   Double_t S18_trackTruth_fex1019[11] = {
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
   Double_t S18_trackTruth_fey1019[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S18_trackTruth_fx1019,S18_trackTruth_fy1019,S18_trackTruth_fex1019,S18_trackTruth_fey1019);
   gre->SetName("S18_trackTruth");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackTruth1019 = new TH1F("Graph_S18_trackTruth1019","S18_",100,218.3011,3025.764);
   Graph_S18_trackTruth1019->SetMinimum(0);
   Graph_S18_trackTruth1019->SetMaximum(0.125);
   Graph_S18_trackTruth1019->SetDirectory(0);
   Graph_S18_trackTruth1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_trackTruth1019->SetLineColor(ci);
   Graph_S18_trackTruth1019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackTruth1019->GetXaxis()->SetRange(1,100);
   Graph_S18_trackTruth1019->GetXaxis()->CenterTitle(true);
   Graph_S18_trackTruth1019->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackTruth1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_trackTruth1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_trackTruth1019->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackTruth1019->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S18_trackTruth1019->GetYaxis()->CenterTitle(true);
   Graph_S18_trackTruth1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_trackTruth1019->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackTruth1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_trackTruth1019->GetYaxis()->SetTitleOffset(1.15);
   Graph_S18_trackTruth1019->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackTruth1019->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackTruth1019->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackTruth1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackTruth1019);
   
   gre->Draw("ap");
   
   Double_t S18_trackReco_fx1020[11] = {
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
   Double_t S18_trackReco_fy1020[11] = {
   -0.1983612,
   0.1007469,
   0.04247719,
   0.07099755,
   0.06238868,
   0.08473406,
   0.07700416,
   0.03842846,
   0.03498285,
   0.09140762,
   0.02762337};
   Double_t S18_trackReco_fex1020[11] = {
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
   Double_t S18_trackReco_fey1020[11] = {
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
   gre = new TGraphErrors(11,S18_trackReco_fx1020,S18_trackReco_fy1020,S18_trackReco_fex1020,S18_trackReco_fey1020);
   gre->SetName("S18_trackReco");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_trackReco1020 = new TH1F("Graph_S18_trackReco1020","S18_",100,218.5678,3021.138);
   Graph_S18_trackReco1020->SetMinimum(0);
   Graph_S18_trackReco1020->SetMaximum(0.125);
   Graph_S18_trackReco1020->SetDirectory(0);
   Graph_S18_trackReco1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_trackReco1020->SetLineColor(ci);
   Graph_S18_trackReco1020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackReco1020->GetXaxis()->SetRange(1,100);
   Graph_S18_trackReco1020->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackReco1020->GetXaxis()->SetTitleOffset(1);
   Graph_S18_trackReco1020->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackReco1020->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S18_trackReco1020->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackReco1020->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackReco1020->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackReco1020->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackReco1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackReco1020);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
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
   TLegendEntry *entry=leg->AddEntry("S18_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_trackReco","Reco vertices","lpf");
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
