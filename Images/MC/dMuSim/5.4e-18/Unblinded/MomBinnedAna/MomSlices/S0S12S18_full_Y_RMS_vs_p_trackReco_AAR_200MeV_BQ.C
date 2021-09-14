void S0S12S18_full_Y_RMS_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:37:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,12.39566,3411.2,13.23998);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1162[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1162[14] = {
   13.02103,
   13.02058,
   12.97663,
   12.93884,
   12.87832,
   12.82689,
   12.79158,
   12.77804,
   12.72253,
   12.68736,
   12.6646,
   12.62165,
   12.62864,
   12.62245};
   Double_t Graph0_fex1162[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1162[14] = {
   0.07823015,
   0.0145878,
   0.008581203,
   0.006974889,
   0.006802917,
   0.007092749,
   0.007619482,
   0.008333169,
   0.009502959,
   0.01127224,
   0.0136583,
   0.01681924,
   0.02101495,
   0.0860684};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1162,Graph0_fy1162,Graph0_fex1162,Graph0_fey1162);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01162 = new TH1F("Graph_Graph01162","",100,0,3280);
   Graph_Graph01162->SetMinimum(12.4801);
   Graph_Graph01162->SetMaximum(13.15555);
   Graph_Graph01162->SetDirectory(0);
   Graph_Graph01162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01162->SetLineColor(ci);
   Graph_Graph01162->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01162->GetXaxis()->SetRange(6,93);
   Graph_Graph01162->GetXaxis()->CenterTitle(true);
   Graph_Graph01162->GetXaxis()->SetLabelFont(42);
   Graph_Graph01162->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01162->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01162->GetXaxis()->SetTitleFont(42);
   Graph_Graph01162->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01162->GetYaxis()->CenterTitle(true);
   Graph_Graph01162->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01162->GetYaxis()->SetLabelFont(42);
   Graph_Graph01162->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01162->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01162->GetYaxis()->SetTitleFont(42);
   Graph_Graph01162->GetZaxis()->SetLabelFont(42);
   Graph_Graph01162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01162);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
