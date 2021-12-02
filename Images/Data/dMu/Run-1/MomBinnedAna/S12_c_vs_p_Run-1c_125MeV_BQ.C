void S12_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,-0.7343995,2731.307,0.4123353);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   367.0259,
   456.9861,
   570.3033,
   695.1491,
   816.0438,
   938.5662,
   1062.777,
   1188.406,
   1312.66,
   1436.011,
   1561.94,
   1685.36,
   1810.626,
   1935.175,
   2060.29,
   2185.097,
   2309.115,
   2432.874,
   2559.589,
   2678.766,
   2780.784,
   2890.136};
   Double_t Graph0_fy1017[22] = {
   8.650802,
   2.892072,
   2.104727,
   -0.2842219,
   -0.09745458,
   0.2796107,
   -0.5008235,
   -0.5206984,
   -0.6922573,
   -0.592092,
   -0.3734671,
   -0.2374438,
   -0.1826508,
   -0.08686341,
   -0.1473668,
   -0.1059496,
   -0.08398473,
   -0.05855153,
   -0.02152217,
   0.1386377,
   0.1212906,
   0.04803418};
   Double_t Graph0_fex1017[22] = {
   0.22722,
   0.1087091,
   0.07270613,
   0.04936012,
   0.03923618,
   0.03530122,
   0.03342569,
   0.03237394,
   0.03268045,
   0.03278089,
   0.03521736,
   0.03693347,
   0.04144578,
   0.04526516,
   0.05166049,
   0.0571106,
   0.06562328,
   0.0787792,
   0.09490435,
   0.1086824,
   0.2160954,
   1.498282};
   Double_t Graph0_fey1017[22] = {
   1.217046,
   0.1130865,
   0.05499923,
   0.03277427,
   0.02246263,
   0.01836946,
   0.01608657,
   0.01453567,
   0.01361342,
   0.01283944,
   0.01286418,
   0.01241812,
   0.01281787,
   0.01293904,
   0.01354739,
   0.0138523,
   0.01457634,
   0.01599389,
   0.0173299,
   0.01932311,
   0.04866835,
   0.3983408};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,114.3151,3144.118);
   Graph_Graph01017->SetMinimum(-0.619726);
   Graph_Graph01017->SetMaximum(0.2976618);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,79);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
