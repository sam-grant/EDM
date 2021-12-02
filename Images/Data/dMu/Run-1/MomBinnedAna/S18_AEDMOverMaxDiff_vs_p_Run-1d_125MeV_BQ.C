void S18_AEDMOverMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8077,-0.0001188972,2722.058,0.01020076);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
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
   Double_t Graph0_fy1038[22] = {
   0.008978758,
   0.001455138,
   0.005088227,
   0.002789114,
   0.0009956654,
   0.001535216,
   0.001438952,
   0.001517784,
   0.002885565,
   0.004228275,
   0.001099821,
   0.003415817,
   0.004160535,
   0.005851804,
   0.008339953,
   0.003559983,
   0.007558964,
   0.004773875,
   0.001020743,
   0.009807774,
   0.02491352,
   0.3425586};
   Double_t Graph0_fex1038[22] = {
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
   Double_t Graph0_fey1038[22] = {
   0.03487919,
   0.003663757,
   0.002068335,
   0.001451118,
   0.001163551,
   0.00104493,
   0.0009958717,
   0.0009689583,
   0.0009811587,
   0.001000281,
   0.001072823,
   0.001144989,
   0.001295707,
   0.001430373,
   0.001636441,
   0.001821505,
   0.002121921,
   0.002578604,
   0.003036924,
   0.003725881,
   0.01046453,
   0.1218456};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S18",100,115.2258,3137.64);
   Graph_Graph01038->SetMinimum(0.0009130688);
   Graph_Graph01038->SetMaximum(0.009168796);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(22,79);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
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
