void VertexGraphs_S18_AQ()
{
//=========Macro generated from canvas: S18/
//=========  (Tue Dec  7 01:11:47 2021) by ROOT version 6.24/04
   TCanvas *S18 = new TCanvas("S18", "",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(-132.0991,-0.015625,3364.641,0.140625);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackTruth_fx1009[12] = {
   108.3281,
   434.6973,
   631.5345,
   875.6243,
   1124.334,
   1373.468,
   1622.472,
   1871.33,
   2119.915,
   2367.684,
   2613.196,
   2835.497};
   Double_t S18_trackTruth_fy1009[12] = {
   1.171043,
   0.02056944,
   0.08761111,
   0.0779249,
   0.1134109,
   0.08963205,
   0.1016827,
   0.09899124,
   0.09061186,
   0.07711423,
   0.05435017,
   0.02700697};
   Double_t S18_trackTruth_fex1009[12] = {
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
   Double_t S18_trackTruth_fey1009[12] = {
   0.8530771,
   0.03397845,
   0.01545771,
   0.01199999,
   0.01013271,
   0.008862745,
   0.007965262,
   0.007322457,
   0.00686574,
   0.0065796,
   0.006465399,
   0.007720725};
   TGraphErrors *gre = new TGraphErrors(12,S18_trackTruth_fx1009,S18_trackTruth_fy1009,S18_trackTruth_fex1009,S18_trackTruth_fey1009);
   gre->SetName("S18_trackTruth");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackTruth1009 = new TH1F("Graph_S18_trackTruth1009","S18_",100,0,3108.214);
   Graph_S18_trackTruth1009->SetMinimum(0);
   Graph_S18_trackTruth1009->SetMaximum(0.125);
   Graph_S18_trackTruth1009->SetDirectory(0);
   Graph_S18_trackTruth1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_trackTruth1009->SetLineColor(ci);
   Graph_S18_trackTruth1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackTruth1009->GetXaxis()->SetRange(8,97);
   Graph_S18_trackTruth1009->GetXaxis()->CenterTitle(true);
   Graph_S18_trackTruth1009->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackTruth1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_trackTruth1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_trackTruth1009->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackTruth1009->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S18_trackTruth1009->GetYaxis()->CenterTitle(true);
   Graph_S18_trackTruth1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_trackTruth1009->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackTruth1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_trackTruth1009->GetYaxis()->SetTitleOffset(1.15);
   Graph_S18_trackTruth1009->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackTruth1009->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackTruth1009->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackTruth1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackTruth1009);
   
   gre->Draw("ap");
   
   Double_t S18_trackReco_fx1010[12] = {
   193.627,
   428.7209,
   630.9542,
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58,
   2825.157};
   Double_t S18_trackReco_fy1010[12] = {
   0.7218307,
   0.03773616,
   0.06681348,
   0.09549265,
   0.1100734,
   0.08603646,
   0.09838704,
   0.08837325,
   0.08433232,
   0.07311202,
   0.07314901,
   0.05033946};
   Double_t S18_trackReco_fex1010[12] = {
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
   Double_t S18_trackReco_fey1010[12] = {
   0.325337,
   0.03194155,
   0.01515347,
   0.01188739,
   0.01021946,
   0.009058174,
   0.008255266,
   0.007772672,
   0.007565294,
   0.007618001,
   0.008087438,
   0.01182073};
   gre = new TGraphErrors(12,S18_trackReco_fx1010,S18_trackReco_fy1010,S18_trackReco_fex1010,S18_trackReco_fey1010);
   gre->SetName("S18_trackReco");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_trackReco1010 = new TH1F("Graph_S18_trackReco1010","S18_",100,0,3088.31);
   Graph_S18_trackReco1010->SetMinimum(0);
   Graph_S18_trackReco1010->SetMaximum(0.125);
   Graph_S18_trackReco1010->SetDirectory(0);
   Graph_S18_trackReco1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_trackReco1010->SetLineColor(ci);
   Graph_S18_trackReco1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackReco1010->GetXaxis()->SetRange(8,98);
   Graph_S18_trackReco1010->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackReco1010->GetXaxis()->SetTitleOffset(1);
   Graph_S18_trackReco1010->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackReco1010->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S18_trackReco1010->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackReco1010->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackReco1010->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackReco1010->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackReco1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackReco1010);
   
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
