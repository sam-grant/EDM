void S0S12S18_full_Y_RMS_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,12.24069,3411.2,13.0825);
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
   12.86425,
   12.8086,
   12.75309,
   12.71696,
   12.6444,
   12.58875,
   12.55237,
   12.53917,
   12.49661,
   12.46972,
   12.4567,
   12.41388,
   12.40162,
   12.56885};
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
   0.07794657,
   0.01437421,
   0.008444132,
   0.006859269,
   0.006681266,
   0.006960379,
   0.007475929,
   0.008176542,
   0.009329567,
   0.01105581,
   0.01342177,
   0.01651059,
   0.02062587,
   0.07906973};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1162,Graph0_fy1162,Graph0_fex1162,Graph0_fey1162);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01162 = new TH1F("Graph_Graph01162","",100,0,3280);
   Graph_Graph01162->SetMinimum(12.32487);
   Graph_Graph01162->SetMaximum(12.99832);
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
