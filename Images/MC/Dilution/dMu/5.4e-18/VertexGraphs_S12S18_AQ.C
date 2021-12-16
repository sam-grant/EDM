void VertexGraphs_S12S18_AQ()
{
//=========Macro generated from canvas: S12S18/
//=========  (Tue Dec  7 01:11:47 2021) by ROOT version 6.24/04
   TCanvas *S12S18 = new TCanvas("S12S18", "",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(-132.117,-0.015625,3365.098,0.140625);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackTruth_fx1011[12] = {
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
   Double_t S12S18_trackTruth_fy1011[12] = {
   0.6345073,
   0.08809861,
   0.08537249,
   0.08592733,
   0.1014125,
   0.0986616,
   0.1028487,
   0.09699662,
   0.07872428,
   0.06981859,
   0.05572198,
   0.03617413};
   Double_t S12S18_trackTruth_fex1011[12] = {
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
   Double_t S12S18_trackTruth_fey1011[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,S12S18_trackTruth_fx1011,S12S18_trackTruth_fy1011,S12S18_trackTruth_fex1011,S12S18_trackTruth_fey1011);
   gre->SetName("S12S18_trackTruth");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackTruth1011 = new TH1F("Graph_S12S18_trackTruth1011","S12S18_",100,0,3108.635);
   Graph_S12S18_trackTruth1011->SetMinimum(0);
   Graph_S12S18_trackTruth1011->SetMaximum(0.125);
   Graph_S12S18_trackTruth1011->SetDirectory(0);
   Graph_S12S18_trackTruth1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackTruth1011->SetLineColor(ci);
   Graph_S12S18_trackTruth1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackTruth1011->GetXaxis()->SetRange(8,97);
   Graph_S12S18_trackTruth1011->GetXaxis()->CenterTitle(true);
   Graph_S12S18_trackTruth1011->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackTruth1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackTruth1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_trackTruth1011->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackTruth1011->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12S18_trackTruth1011->GetYaxis()->CenterTitle(true);
   Graph_S12S18_trackTruth1011->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_trackTruth1011->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackTruth1011->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackTruth1011->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12S18_trackTruth1011->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackTruth1011->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackTruth1011->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackTruth1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackTruth1011);
   
   gre->Draw("ap");
   
   Double_t S12S18_trackReco_fx1012[12] = {
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
   Double_t S12S18_trackReco_fy1012[12] = {
   0.51621,
   0.08326388,
   0.07181014,
   0.09886268,
   0.09763465,
   0.09266204,
   0.09608984,
   0.09059453,
   0.07326372,
   0.06351876,
   0.07039908,
   0.04269755};
   Double_t S12S18_trackReco_fex1012[12] = {
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
   Double_t S12S18_trackReco_fey1012[12] = {
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
   gre = new TGraphErrors(12,S12S18_trackReco_fx1012,S12S18_trackReco_fy1012,S12S18_trackReco_fex1012,S12S18_trackReco_fey1012);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12S18_trackReco1012 = new TH1F("Graph_S12S18_trackReco1012","S12S18_",100,0,3088.709);
   Graph_S12S18_trackReco1012->SetMinimum(0);
   Graph_S12S18_trackReco1012->SetMaximum(0.125);
   Graph_S12S18_trackReco1012->SetDirectory(0);
   Graph_S12S18_trackReco1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackReco1012->SetLineColor(ci);
   Graph_S12S18_trackReco1012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackReco1012->GetXaxis()->SetRange(8,98);
   Graph_S12S18_trackReco1012->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1012->GetXaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco1012->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1012->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12S18_trackReco1012->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1012->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1012->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1012->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackReco1012);
   
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
