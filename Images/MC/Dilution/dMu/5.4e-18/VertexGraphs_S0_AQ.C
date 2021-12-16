void VertexGraphs_S0_AQ()
{
//=========Macro generated from canvas: S0/
//=========  (Tue Dec  7 01:11:47 2021) by ROOT version 6.24/04
   TCanvas *S0 = new TCanvas("S0", "",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(-132.0994,-0.015625,3364.65,0.140625);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackTruth_fx1005[12] = {
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
   Double_t S0_trackTruth_fy1005[12] = {
   -1.906134,
   0.03220954,
   0.1009218,
   0.1197247,
   0.09718668,
   0.1111834,
   0.1066205,
   0.09247984,
   0.09123083,
   0.06616009,
   0.05266952,
   0.01877375};
   Double_t S0_trackTruth_fex1005[12] = {
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
   Double_t S0_trackTruth_fey1005[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,S0_trackTruth_fx1005,S0_trackTruth_fy1005,S0_trackTruth_fex1005,S0_trackTruth_fey1005);
   gre->SetName("S0_trackTruth");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackTruth1005 = new TH1F("Graph_S0_trackTruth1005","S0_",100,0,3108.222);
   Graph_S0_trackTruth1005->SetMinimum(0);
   Graph_S0_trackTruth1005->SetMaximum(0.125);
   Graph_S0_trackTruth1005->SetDirectory(0);
   Graph_S0_trackTruth1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackTruth1005->SetLineColor(ci);
   Graph_S0_trackTruth1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackTruth1005->GetXaxis()->SetRange(8,97);
   Graph_S0_trackTruth1005->GetXaxis()->CenterTitle(true);
   Graph_S0_trackTruth1005->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackTruth1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackTruth1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackTruth1005->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackTruth1005->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackTruth1005->GetYaxis()->CenterTitle(true);
   Graph_S0_trackTruth1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackTruth1005->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackTruth1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackTruth1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_trackTruth1005->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackTruth1005->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackTruth1005->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackTruth1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackTruth1005);
   
   gre->Draw("ap");
   
   Double_t S0_trackReco_fx1006[12] = {
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
   Double_t S0_trackReco_fy1006[12] = {
   -0.9698742,
   0.03422766,
   0.1019367,
   0.1182288,
   0.09088983,
   0.115626,
   0.09767659,
   0.09918228,
   0.08620036,
   0.06123055,
   0.05200003,
   0.02842158};
   Double_t S0_trackReco_fex1006[12] = {
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
   Double_t S0_trackReco_fey1006[12] = {
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
   gre = new TGraphErrors(12,S0_trackReco_fx1006,S0_trackReco_fy1006,S0_trackReco_fex1006,S0_trackReco_fey1006);
   gre->SetName("S0_trackReco");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0_trackReco1006 = new TH1F("Graph_S0_trackReco1006","S0_",100,0,3090.055);
   Graph_S0_trackReco1006->SetMinimum(0);
   Graph_S0_trackReco1006->SetMaximum(0.125);
   Graph_S0_trackReco1006->SetDirectory(0);
   Graph_S0_trackReco1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco1006->SetLineColor(ci);
   Graph_S0_trackReco1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco1006->GetXaxis()->SetRange(8,98);
   Graph_S0_trackReco1006->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco1006->GetXaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1006->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco1006->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackReco1006->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco1006->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco1006->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco1006->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco1006);
   
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
