void S0S12S18_full_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,9.573023,3605.25,29.37845);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1468[15] = {
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
   Double_t Graph0_fy1468[15] = {
   25.55482,
   14.15741,
   13.31928,
   13.05292,
   12.94987,
   12.90666,
   12.88391,
   12.93382,
   12.99849,
   13.04494,
   13.04125,
   13.11222,
   13.2495,
   13.17537,
   13.05995};
   Double_t Graph0_fex1468[15] = {
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
   Double_t Graph0_fey1468[15] = {
   0.5227257,
   0.02878522,
   0.01017687,
   0.008843715,
   0.0089401,
   0.009403889,
   0.009985831,
   0.01074494,
   0.0117805,
   0.01324216,
   0.01521539,
   0.01828052,
   0.02302628,
   0.02831089,
   0.04784539};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1468,Graph0_fy1468,Graph0_fex1468,Graph0_fey1468);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigmay [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01468 = new TH1F("Graph_Graph01468","",100,0,3300);
   Graph_Graph01468->SetMinimum(11.55357);
   Graph_Graph01468->SetMaximum(27.3979);
   Graph_Graph01468->SetDirectory(0);
   Graph_Graph01468->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01468->SetLineColor(ci);
   Graph_Graph01468->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01468->GetXaxis()->SetRange(0,97);
   Graph_Graph01468->GetXaxis()->CenterTitle(true);
   Graph_Graph01468->GetXaxis()->SetLabelFont(42);
   Graph_Graph01468->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01468->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01468->GetXaxis()->SetTitleFont(42);
   Graph_Graph01468->GetYaxis()->SetTitle("#sigmay [mm]");
   Graph_Graph01468->GetYaxis()->CenterTitle(true);
   Graph_Graph01468->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01468->GetYaxis()->SetLabelFont(42);
   Graph_Graph01468->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01468->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01468->GetYaxis()->SetTitleFont(42);
   Graph_Graph01468->GetZaxis()->SetLabelFont(42);
   Graph_Graph01468->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01468);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
