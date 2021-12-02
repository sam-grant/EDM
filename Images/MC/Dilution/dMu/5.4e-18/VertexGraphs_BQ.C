void VertexGraphs_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 15:17:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-133.169,-0.015625,3377.381,0.140625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackTruth_fx1007[11] = {
   451.9227,
   653.3392,
   880.2735,
   1123.022,
   1371.209,
   1620.262,
   1867.113,
   2115.519,
   2363.039,
   2613.873,
   2792.289};
   Double_t trackTruth_fy1007[11] = {
   -0.0227537,
   0.09516739,
   0.07243882,
   0.08259043,
   0.07774151,
   0.09151081,
   0.07942015,
   0.05897933,
   0.03823984,
   0.05772124,
   -0.007958637};
   Double_t trackTruth_fex1007[11] = {
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
   Double_t trackTruth_fey1007[11] = {
   0.06374959,
   0.02131316,
   0.01224326,
   0.01004791,
   0.009205664,
   0.008765839,
   0.008785619,
   0.009193142,
   0.009766754,
   0.009696812,
   0.02116826};
   TGraphErrors *gre = new TGraphErrors(11,trackTruth_fx1007,trackTruth_fy1007,trackTruth_fex1007,trackTruth_fey1007);
   gre->SetName("trackTruth");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1007 = new TH1F("Graph_trackTruth1007","",100,217.886,3026.326);
   Graph_trackTruth1007->SetMinimum(0);
   Graph_trackTruth1007->SetMaximum(0.125);
   Graph_trackTruth1007->SetDirectory(0);
   Graph_trackTruth1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackTruth1007->SetLineColor(ci);
   Graph_trackTruth1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackTruth1007->GetXaxis()->SetRange(1,100);
   Graph_trackTruth1007->GetXaxis()->CenterTitle(true);
   Graph_trackTruth1007->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetXaxis()->SetTitleSize(0.04);
   Graph_trackTruth1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackTruth1007->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1007->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackTruth1007->GetYaxis()->CenterTitle(true);
   Graph_trackTruth1007->GetYaxis()->SetNdivisions(4000510);
   Graph_trackTruth1007->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetYaxis()->SetTitleSize(0.04);
   Graph_trackTruth1007->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackTruth1007->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1007->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1007);
   
   gre->Draw("ap");
   
   Double_t trackReco_fx1008[11] = {
   451.788,
   653.3045,
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061,
   2788.497};
   Double_t trackReco_fy1008[11] = {
   -0.00966821,
   0.08962262,
   0.07456527,
   0.08291077,
   0.08277196,
   0.08848156,
   0.07888338,
   0.06189772,
   0.03995412,
   0.05663225,
   -0.008615418};
   Double_t trackReco_fex1008[11] = {
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
   Double_t trackReco_fey1008[11] = {
   0.06443398,
   0.02156648,
   0.0124005,
   0.01018395,
   0.00933314,
   0.008881665,
   0.008899678,
   0.009315277,
   0.009894346,
   0.009813133,
   0.02214676};
   gre = new TGraphErrors(11,trackReco_fx1008,trackReco_fy1008,trackReco_fex1008,trackReco_fey1008);
   gre->SetName("trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_trackReco1008 = new TH1F("Graph_trackReco1008","",100,218.1171,3022.168);
   Graph_trackReco1008->SetMinimum(0);
   Graph_trackReco1008->SetMaximum(0.125);
   Graph_trackReco1008->SetDirectory(0);
   Graph_trackReco1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1008->SetLineColor(ci);
   Graph_trackReco1008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackReco1008->GetXaxis()->SetRange(1,100);
   Graph_trackReco1008->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1008->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1008->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1008->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackReco1008->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1008->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1008->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1008->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1008);
   
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
