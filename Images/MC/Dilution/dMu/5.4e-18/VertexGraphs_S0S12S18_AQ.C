void VertexGraphs_S0S12S18_AQ()
{
//=========Macro generated from canvas: S0S12S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(-132.1113,-0.015625,3364.952,0.140625);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackTruth_fx1013[12] = {
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
   Double_t S0S12S18_trackTruth_fy1013[12] = {
   -0.1080705,
   0.06957483,
   0.09065387,
   0.09739155,
   0.09991175,
   0.1028525,
   0.104113,
   0.09548777,
   0.08298284,
   0.0685715,
   0.05464015,
   0.03015715};
   Double_t S0S12S18_trackTruth_fex1013[12] = {
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
   Double_t S0S12S18_trackTruth_fey1013[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,S0S12S18_trackTruth_fx1013,S0S12S18_trackTruth_fy1013,S0S12S18_trackTruth_fex1013,S0S12S18_trackTruth_fey1013);
   gre->SetName("S0S12S18_trackTruth");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackTruth1013 = new TH1F("Graph_S0S12S18_trackTruth1013","S0S12S18_",100,0,3108.5);
   Graph_S0S12S18_trackTruth1013->SetMinimum(0);
   Graph_S0S12S18_trackTruth1013->SetMaximum(0.125);
   Graph_S0S12S18_trackTruth1013->SetDirectory(0);
   Graph_S0S12S18_trackTruth1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackTruth1013->SetLineColor(ci);
   Graph_S0S12S18_trackTruth1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackTruth1013->GetXaxis()->SetRange(8,97);
   Graph_S0S12S18_trackTruth1013->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_trackTruth1013->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackTruth1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_trackTruth1013->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackTruth1013->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackTruth1013->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_trackTruth1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_trackTruth1013->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackTruth1013->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0S12S18_trackTruth1013->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackTruth1013->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1013->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackTruth1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackTruth1013);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_trackReco_fx1014[12] = {
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
   Double_t S0S12S18_trackReco_fy1014[12] = {
   0.03280969,
   0.06679208,
   0.08197723,
   0.1053966,
   0.09535286,
   0.1004398,
   0.09663446,
   0.09349452,
   0.0776742,
   0.06278145,
   0.06406132,
   0.03788396};
   Double_t S0S12S18_trackReco_fex1014[12] = {
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
   Double_t S0S12S18_trackReco_fey1014[12] = {
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
   gre = new TGraphErrors(12,S0S12S18_trackReco_fx1014,S0S12S18_trackReco_fy1014,S0S12S18_trackReco_fex1014,S0S12S18_trackReco_fey1014);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_trackReco1014 = new TH1F("Graph_S0S12S18_trackReco1014","S0S12S18_",100,0,3089.192);
   Graph_S0S12S18_trackReco1014->SetMinimum(0);
   Graph_S0S12S18_trackReco1014->SetMaximum(0.125);
   Graph_S0S12S18_trackReco1014->SetDirectory(0);
   Graph_S0S12S18_trackReco1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco1014->SetLineColor(ci);
   Graph_S0S12S18_trackReco1014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco1014->GetXaxis()->SetRange(8,98);
   Graph_S0S12S18_trackReco1014->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1014->GetXaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1014->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1014->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackReco1014->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1014->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1014->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1014->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco1014);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
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
   TLegendEntry *entry=leg->AddEntry("S0S12S18_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_trackReco","Reco vertices","lpf");
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
