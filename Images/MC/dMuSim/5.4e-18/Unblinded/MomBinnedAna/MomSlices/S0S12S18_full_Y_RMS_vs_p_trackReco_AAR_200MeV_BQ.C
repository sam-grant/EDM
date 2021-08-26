void S0S12S18_full_Y_RMS_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Aug 25 16:47:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-360.8,12.24878,3575.2,13.42881);
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
   13.09681,
   13.01398,
   12.94534,
   12.91836,
   12.88001,
   12.80723,
   12.77026,
   12.73952,
   12.72421,
   12.6406,
   12.64724,
   12.62088,
   12.62362,
   12.59268};
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
   0.1353283,
   0.0251358,
   0.01467867,
   0.01191899,
   0.01160896,
   0.01204712,
   0.01291413,
   0.0140667,
   0.01606731,
   0.01897882,
   0.02301249,
   0.02853344,
   0.03562245,
   0.1472249};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1162,Graph0_fy1162,Graph0_fex1162,Graph0_fey1162);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01162 = new TH1F("Graph_Graph01162","",100,0,3280);
   Graph_Graph01162->SetMinimum(12.36679);
   Graph_Graph01162->SetMaximum(13.31081);
   Graph_Graph01162->SetDirectory(0);
   Graph_Graph01162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01162->SetLineColor(ci);
   Graph_Graph01162->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01162->GetXaxis()->SetRange(2,97);
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
