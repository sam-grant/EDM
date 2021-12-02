void S18_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8077,-0.0001720924,2722.058,0.09550457);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
   367.2502,
   457.4177,
   569.9565,
   694.5073,
   815.7095,
   938.4817,
   1062.811,
   1188.155,
   1312.578,
   1435.627,
   1561.976,
   1684.876,
   1810.455,
   1934.884,
   2060.236,
   2184.764,
   2309.028,
   2433.194,
   2559.829,
   2677.851,
   2781.314,
   2884.766};
   Double_t Graph0_fy1029[22] = {
   0.3118696,
   0.04501922,
   0.1347247,
   0.06489836,
   0.02021137,
   0.02866191,
   0.02482327,
   0.02436349,
   0.04339704,
   0.05935849,
   0.01442951,
   0.04093501,
   0.04616022,
   0.05958894,
   0.07815942,
   0.03050835,
   0.05854113,
   0.03293156,
   0.006263825,
   0.05324852,
   0.1247218,
   1.886793};
   Double_t Graph0_fex1029[22] = {
   0.1565263,
   0.07803887,
   0.0516356,
   0.03619803,
   0.02937948,
   0.02663994,
   0.02525597,
   0.02451355,
   0.02509404,
   0.02530411,
   0.02731337,
   0.02899487,
   0.03304421,
   0.03623749,
   0.04172191,
   0.04628837,
   0.05391883,
   0.06547986,
   0.07727017,
   0.08903053,
   0.1899021,
   1.006105};
   Double_t Graph0_fey1029[22] = {
   1.211486,
   0.1133496,
   0.05476464,
   0.03376524,
   0.02361933,
   0.01950845,
   0.01717971,
   0.01555373,
   0.01475598,
   0.01404237,
   0.0140753,
   0.01372148,
   0.01437555,
   0.01456543,
   0.01533608,
   0.01560992,
   0.0164333,
   0.0177879,
   0.01863619,
   0.02022837,
   0.05238335,
   0.6507151};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,115.2258,3137.64);
   Graph_Graph01029->SetMinimum(0.009395574);
   Graph_Graph01029->SetMaximum(0.0859369);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(22,79);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
