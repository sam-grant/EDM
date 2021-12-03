void S18_eAEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 14:24:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0523,0.01400039,3028.099,0.08433228);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[22] = {
   366.6108,
   457.1028,
   570.2676,
   694.5045,
   815.6442,
   938.5045,
   1062.791,
   1188.168,
   1312.631,
   1435.783,
   1561.985,
   1685.031,
   1810.403,
   1935.07,
   2060.344,
   2184.717,
   2309.137,
   2433.457,
   2559.791,
   2678.02,
   2781.349,
   2884.595};
   Double_t Graph0_fy1036[22] = {
   2.2191,
   0.2191003,
   0.10676,
   0.06530659,
   0.04567267,
   0.03768858,
   0.03319213,
   0.02996644,
   0.02837732,
   0.02698519,
   0.02695543,
   0.02626369,
   0.02738874,
   0.02770064,
   0.02923603,
   0.02962182,
   0.03124112,
   0.03353933,
   0.03505741,
   0.03777449,
   0.09510751,
   0.9680139};
   Double_t Graph0_fex1036[22] = {
   0.3102122,
   0.1519888,
   0.1005352,
   0.06984739,
   0.05677918,
   0.05154475,
   0.04885287,
   0.04739523,
   0.04842386,
   0.04890634,
   0.05247658,
   0.05577436,
   0.06316181,
   0.06915618,
   0.07965764,
   0.08793112,
   0.1021086,
   0.1237632,
   0.1455347,
   0.1671362,
   0.3532232,
   1.155309};
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
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S18",100,114.3557,3137.695);
   Graph_Graph01036->SetMinimum(0.02103358);
   Graph_Graph01036->SetMaximum(0.07729909);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(22,88);
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
