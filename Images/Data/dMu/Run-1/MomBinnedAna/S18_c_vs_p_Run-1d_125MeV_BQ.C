void S18_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8077,-0.9192323,2722.058,-0.1126694);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
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
   Double_t Graph0_fy1028[22] = {
   7.679672,
   1.977654,
   1.661794,
   -0.8496016,
   -0.5618122,
   -0.2010666,
   -0.9369073,
   -0.8470086,
   -0.8892867,
   -0.7219732,
   -0.5695122,
   -0.4712489,
   -0.4042891,
   -0.2914534,
   -0.2936753,
   -0.2437589,
   -0.2196592,
   -0.2358627,
   -0.1645907,
   -0.1480297,
   -0.3992528,
   -0.2452269};
   Double_t Graph0_fex1028[22] = {
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
   Double_t Graph0_fey1028[22] = {
   0.8671495,
   0.07997519,
   0.03876003,
   0.02387306,
   0.01670083,
   0.01379444,
   0.01213601,
   0.01097374,
   0.01041263,
   0.009911574,
   0.009942139,
   0.009700656,
   0.01019363,
   0.01036366,
   0.01096792,
   0.01126566,
   0.01195734,
   0.01315335,
   0.01402927,
   0.01574406,
   0.04160512,
   0.3315991};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,115.2258,3137.64);
   Graph_Graph01028->SetMinimum(-0.8385761);
   Graph_Graph01028->SetMaximum(-0.1933257);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,79);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
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
