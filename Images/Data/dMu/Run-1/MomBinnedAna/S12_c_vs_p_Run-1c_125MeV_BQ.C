void S12_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5321,-0.4585657,3003.766,1.261738);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[22] = {
   367.0352,
   456.9819,
   570.2976,
   695.1562,
   816.0421,
   938.5715,
   1062.782,
   1188.409,
   1312.658,
   1436.007,
   1561.937,
   1685.365,
   1810.622,
   1935.171,
   2060.292,
   2185.098,
   2309.109,
   2432.863,
   2559.588,
   2678.779,
   2780.736,
   2889.944};
   Double_t Graph0_fy1061[22] = {
   8.844148,
   3.227175,
   2.434005,
   0.04356654,
   0.2320076,
   0.6048027,
   -0.1713414,
   -0.1906139,
   -0.3618321,
   -0.2623811,
   -0.04446411,
   0.09065374,
   0.1460516,
   0.2430703,
   0.1831458,
   0.2232004,
   0.2460466,
   0.2712197,
   0.3065648,
   0.464208,
   0.4421853,
   0.2846955};
   Double_t Graph0_fex1061[22] = {
   0.2251397,
   0.1080441,
   0.07224719,
   0.04905187,
   0.03899622,
   0.03509039,
   0.03322333,
   0.03218015,
   0.03248772,
   0.03258516,
   0.03500937,
   0.0367165,
   0.04120481,
   0.04500112,
   0.0513695,
   0.05678027,
   0.06525989,
   0.07833329,
   0.09434737,
   0.1080842,
   0.2147682,
   1.476472};
   Double_t Graph0_fey1061[22] = {
   1.207747,
   0.1123853,
   0.05466407,
   0.03256977,
   0.02232211,
   0.01825782,
   0.01599022,
   0.01444794,
   0.01353298,
   0.0127632,
   0.01278764,
   0.0123461,
   0.01274448,
   0.01286409,
   0.01347124,
   0.01377015,
   0.01449653,
   0.01590215,
   0.01723829,
   0.01922528,
   0.04838717,
   0.3736198};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S12",100,114.349,3143.882);
   Graph_Graph01061->SetMinimum(-0.2865354);
   Graph_Graph01061->SetMaximum(1.089707);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(21,87);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
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
