void S18_eAEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5205,-0.04604184,3027.918,0.5660775);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1124[22] = {
   367.0173,
   457.2104,
   570.0374,
   694.4612,
   815.6827,
   938.5171,
   1062.885,
   1188.2,
   1312.605,
   1435.72,
   1562.001,
   1685.025,
   1810.514,
   1934.906,
   2060.262,
   2184.773,
   2308.971,
   2433.427,
   2559.674,
   2677.991,
   2781.684,
   2884.375};
   Double_t Graph0_fy1124[22] = {
   1.646939,
   0.1562459,
   0.07568377,
   0.04660851,
   0.03264212,
   0.02695597,
   0.02374667,
   0.02146554,
   0.02033905,
   0.01937539,
   0.01942395,
   0.01894297,
   0.01980242,
   0.02004652,
   0.02106651,
   0.02154469,
   0.02255639,
   0.02427358,
   0.02553636,
   0.02796656,
   0.07141796,
   0.6865203};
   Double_t Graph0_fex1124[22] = {
   0.2151465,
   0.1079987,
   0.0715069,
   0.05014894,
   0.04063452,
   0.03685518,
   0.03488971,
   0.03392339,
   0.03470107,
   0.03500905,
   0.03780692,
   0.04004255,
   0.04550979,
   0.04999256,
   0.05762843,
   0.06384773,
   0.07415466,
   0.08977885,
   0.1061248,
   0.1233522,
   0.2631774,
   1.230174};
   Double_t Graph0_fey1124[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1124,Graph0_fy1124,Graph0_fex1124,Graph0_fey1124);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01124 = new TH1F("Graph_Graph01124","S18",100,114.9218,3137.486);
   Graph_Graph01124->SetMinimum(0.0151701);
   Graph_Graph01124->SetMaximum(0.5048655);
   Graph_Graph01124->SetDirectory(0);
   Graph_Graph01124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01124->SetLineColor(ci);
   Graph_Graph01124->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01124->GetXaxis()->SetRange(22,88);
   Graph_Graph01124->GetXaxis()->CenterTitle(true);
   Graph_Graph01124->GetXaxis()->SetLabelFont(42);
   Graph_Graph01124->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01124->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01124->GetXaxis()->SetTitleFont(42);
   Graph_Graph01124->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01124->GetYaxis()->CenterTitle(true);
   Graph_Graph01124->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01124->GetYaxis()->SetLabelFont(42);
   Graph_Graph01124->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01124->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01124->GetYaxis()->SetTitleFont(42);
   Graph_Graph01124->GetZaxis()->SetLabelFont(42);
   Graph_Graph01124->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01124);
   
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
