void VertexGraphs_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:01:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-135.2991,-0.015625,3382.477,0.140625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackTruth_fx1005[12] = {
   200.2236,
   433.6193,
   628.4777,
   873.018,
   1121.651,
   1371.589,
   1620.262,
   1868.394,
   2116.814,
   2363.628,
   2613.583,
   2829.611};
   Double_t trackTruth_fy1005[12] = {
   2.106203,
   0.05795998,
   0.09915619,
   0.09915931,
   0.09789243,
   0.100879,
   0.09820909,
   0.09260111,
   0.07989332,
   0.05374595,
   0.0636122,
   0.03510456};
   Double_t trackTruth_fex1005[12] = {
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
   Double_t trackTruth_fey1005[12] = {
   0.6777398,
   0.0236693,
   0.0118169,
   0.00970933,
   0.00875586,
   0.008055087,
   0.007599435,
   0.007448266,
   0.007500867,
   0.00780087,
   0.008030246,
   0.009519822};
   TGraphErrors *gre = new TGraphErrors(12,trackTruth_fx1005,trackTruth_fy1005,trackTruth_fex1005,trackTruth_fey1005);
   gre->SetName("trackTruth");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1005 = new TH1F("Graph_trackTruth1005","",100,0,3092.55);
   Graph_trackTruth1005->SetMinimum(0);
   Graph_trackTruth1005->SetMaximum(0.125);
   Graph_trackTruth1005->SetDirectory(0);
   Graph_trackTruth1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackTruth1005->SetLineColor(ci);
   Graph_trackTruth1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackTruth1005->GetXaxis()->SetRange(8,98);
   Graph_trackTruth1005->GetXaxis()->CenterTitle(true);
   Graph_trackTruth1005->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1005->GetXaxis()->SetTitleSize(0.04);
   Graph_trackTruth1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackTruth1005->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1005->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackTruth1005->GetYaxis()->CenterTitle(true);
   Graph_trackTruth1005->GetYaxis()->SetNdivisions(4000510);
   Graph_trackTruth1005->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1005->GetYaxis()->SetTitleSize(0.04);
   Graph_trackTruth1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackTruth1005->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1005->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1005->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1005);
   
   gre->Draw("ap");
   
   Double_t trackReco_fx1006[12] = {
   176.0138,
   432.6504,
   628.4065,
   872.9909,
   1121.658,
   1371.497,
   1620.22,
   1868.422,
   2116.783,
   2363.589,
   2614.113,
   2827.094};
   Double_t trackReco_fy1006[12] = {
   0.06909422,
   0.05726215,
   0.09455236,
   0.1103326,
   0.09755733,
   0.1023564,
   0.09805339,
   0.09523377,
   0.07130707,
   0.0548529,
   0.05818781,
   0.03220587};
   Double_t trackReco_fex1006[12] = {
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
   Double_t trackReco_fey1006[12] = {
   0.3540749,
   0.02393894,
   0.0119255,
   0.009786713,
   0.008830967,
   0.008139897,
   0.007688857,
   0.007543985,
   0.007646547,
   0.008049577,
   0.008217598,
   0.009839241};
   gre = new TGraphErrors(12,trackReco_fx1006,trackReco_fy1006,trackReco_fex1006,trackReco_fey1006);
   gre->SetName("trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_trackReco1006 = new TH1F("Graph_trackReco1006","",100,0,3092.202);
   Graph_trackReco1006->SetMinimum(0);
   Graph_trackReco1006->SetMaximum(0.125);
   Graph_trackReco1006->SetDirectory(0);
   Graph_trackReco1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1006->SetLineColor(ci);
   Graph_trackReco1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackReco1006->GetXaxis()->SetRange(8,98);
   Graph_trackReco1006->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1006->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1006->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1006->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackReco1006->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1006->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1006->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1006->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1006);
   
   gre->Draw("p ");
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
   TLegendEntry *entry=leg->AddEntry("trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
