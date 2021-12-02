void S18_eAEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8077,0.009327713,2722.058,0.03967024);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[22] = {
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
   Double_t Graph0_fy1036[22] = {
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
   Double_t Graph0_fex1036[22] = {
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
   Double_t Graph0_fey1036[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S18",100,115.2258,3137.64);
   Graph_Graph01036->SetMinimum(0.01236197);
   Graph_Graph01036->SetMaximum(0.03663599);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(22,79);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
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
