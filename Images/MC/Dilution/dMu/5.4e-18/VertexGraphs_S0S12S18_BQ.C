void VertexGraphs_S0S12S18_BQ()
{
//=========Macro generated from canvas: S0S12S18/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(-133.169,-0.015625,3377.378,0.140625);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackTruth_fx1023[11] = {
   451.9222,
   653.3407,
   880.2728,
   1123.023,
   1371.209,
   1620.261,
   1867.114,
   2115.52,
   2363.035,
   2613.878,
   2792.287};
   Double_t S0S12S18_trackTruth_fy1023[11] = {
   -0.02012772,
   0.09296195,
   0.07141234,
   0.08167335,
   0.07841186,
   0.09217439,
   0.07959187,
   0.05779957,
   0.03850457,
   0.05710346,
   -0.0105008};
   Double_t S0S12S18_trackTruth_fex1023[11] = {
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
   Double_t S0S12S18_trackTruth_fey1023[11] = {
   0.06378456,
   0.02131405,
   0.01224083,
   0.01004693,
   0.009203171,
   0.008765288,
   0.008781899,
   0.009188697,
   0.009759984,
   0.00969133,
   0.02117574};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_trackTruth_fx1023,S0S12S18_trackTruth_fy1023,S0S12S18_trackTruth_fex1023,S0S12S18_trackTruth_fey1023);
   gre->SetName("S0S12S18_trackTruth");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackTruth1023 = new TH1F("Graph_S0S12S18_trackTruth1023","S0S12S18_",100,217.8857,3026.323);
   Graph_S0S12S18_trackTruth1023->SetMinimum(0);
   Graph_S0S12S18_trackTruth1023->SetMaximum(0.125);
   Graph_S0S12S18_trackTruth1023->SetDirectory(0);
   Graph_S0S12S18_trackTruth1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackTruth1023->SetLineColor(ci);
   Graph_S0S12S18_trackTruth1023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackTruth1023->GetXaxis()->SetRange(1,100);
   Graph_S0S12S18_trackTruth1023->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_trackTruth1023->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1023->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackTruth1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_trackTruth1023->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackTruth1023->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackTruth1023->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_trackTruth1023->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_trackTruth1023->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1023->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackTruth1023->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0S12S18_trackTruth1023->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackTruth1023->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1023->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackTruth1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackTruth1023);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_trackReco_fx1024[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t S0S12S18_trackReco_fy1024[11] = {
   -0.008641496,
   0.0904474,
   0.07294539,
   0.08128732,
   0.08112969,
   0.09043276,
   0.07881371,
   0.06044737,
   0.03843148,
   0.05430127,
   -0.003981642};
   Double_t S0S12S18_trackReco_fex1024[11] = {
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
   Double_t S0S12S18_trackReco_fey1024[11] = {
   0.06378572,
   0.02135186,
   0.01227176,
   0.01008195,
   0.009240946,
   0.008796052,
   0.008815584,
   0.009231367,
   0.009808522,
   0.009731092,
   0.0220131};
   gre = new TGraphErrors(11,S0S12S18_trackReco_fx1024,S0S12S18_trackReco_fy1024,S0S12S18_trackReco_fex1024,S0S12S18_trackReco_fey1024);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_trackReco1024 = new TH1F("Graph_S0S12S18_trackReco1024","S0S12S18_",100,218.1194,3022.14);
   Graph_S0S12S18_trackReco1024->SetMinimum(0);
   Graph_S0S12S18_trackReco1024->SetMaximum(0.125);
   Graph_S0S12S18_trackReco1024->SetDirectory(0);
   Graph_S0S12S18_trackReco1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco1024->SetLineColor(ci);
   Graph_S0S12S18_trackReco1024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco1024->GetXaxis()->SetRange(1,100);
   Graph_S0S12S18_trackReco1024->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1024->GetXaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1024->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1024->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackReco1024->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1024->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1024->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1024->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco1024);
   
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
