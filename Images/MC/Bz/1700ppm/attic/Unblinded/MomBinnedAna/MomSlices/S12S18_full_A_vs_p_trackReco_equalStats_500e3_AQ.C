void S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-437.25,-1.277988,3605.25,1.762378);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1278[15] = {
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
   Double_t Graph0_fy1278[15] = {
   0.2421949,
   -0.2380306,
   0.1135136,
   0.04181237,
   0.2518047,
   0.1595496,
   0.1953307,
   0.1918334,
   0.1517886,
   0.1454309,
   0.09549337,
   0.1740209,
   0.1450492,
   0.07047755,
   -0.05501776};
   Double_t Graph0_fex1278[15] = {
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
   Double_t Graph0_fey1278[15] = {
   1.013455,
   0.1646317,
   0.05601323,
   0.04341264,
   0.03840013,
   0.03549551,
   0.03319953,
   0.03149105,
   0.03050039,
   0.03056495,
   0.03158924,
   0.03374419,
   0.03628609,
   0.03674524,
   0.05184803};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1278,Graph0_fy1278,Graph0_fex1278,Graph0_fey1278);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01278 = new TH1F("Graph_Graph01278","S12S18",100,0,3300);
   Graph_Graph01278->SetMinimum(-0.9739513);
   Graph_Graph01278->SetMaximum(1.458341);
   Graph_Graph01278->SetDirectory(0);
   Graph_Graph01278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01278->SetLineColor(ci);
   Graph_Graph01278->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01278->GetXaxis()->SetRange(0,97);
   Graph_Graph01278->GetXaxis()->CenterTitle(true);
   Graph_Graph01278->GetXaxis()->SetLabelFont(42);
   Graph_Graph01278->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01278->GetXaxis()->SetTitleFont(42);
   Graph_Graph01278->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01278->GetYaxis()->CenterTitle(true);
   Graph_Graph01278->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01278->GetYaxis()->SetLabelFont(42);
   Graph_Graph01278->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01278->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01278->GetYaxis()->SetTitleFont(42);
   Graph_Graph01278->GetZaxis()->SetLabelFont(42);
   Graph_Graph01278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01278);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
