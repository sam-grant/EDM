void full_Momentum_Y_RMS_vs_p_truthAllDecays_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 11 10:48:27 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,5.666372,3456.75,30.34723);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[15] = {
   100,
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
   Double_t Graph0_fy1043[15] = {
   9.785001,
   16.31995,
   20.076,
   22.58434,
   24.32067,
   25.41096,
   26.05646,
   26.2164,
   26.03955,
   25.43196,
   24.34192,
   22.81229,
   20.62616,
   17.67721,
   13.40318};
   Double_t Graph0_fex1043[15] = {
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
   100,
   100};
   Double_t Graph0_fey1043[15] = {
   0.005152161,
   0.008726978,
   0.0109447,
   0.01262453,
   0.01400952,
   0.01522794,
   0.01633135,
   0.01735907,
   0.01839438,
   0.01943173,
   0.02044224,
   0.02157188,
   0.02275963,
   0.02436297,
   0.02674363};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#sigma_{py}} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","",100,0,3300);
   Graph_Graph01043->SetMinimum(8.134459);
   Graph_Graph01043->SetMaximum(27.87915);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(0,93);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#sigma_{py}} [MeV]");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
