void S12_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-2.394026,2727,6.924627);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1018[22] = {
   3.643683,
   0.1943995,
   0.0956411,
   0.06958634,
   0.003344455,
   0.01985998,
   0.0205669,
   0.05542304,
   0.07708502,
   0.04267801,
   0.0462174,
   0.05373253,
   0.05747959,
   0.05180338,
   0.04137393,
   0.01653326,
   0.06895941,
   -0.001783049,
   0.06396181,
   0.02085177,
   -0.004232551,
   -0.3863888};
   Double_t Graph0_fex1018[22] = {
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
   Double_t Graph0_fey1018[22] = {
   1.727835,
   0.1611908,
   0.07798911,
   0.04648453,
   0.03184843,
   0.02602355,
   0.02279809,
   0.02061529,
   0.01932289,
   0.0182236,
   0.01823306,
   0.01757417,
   0.01810633,
   0.01820487,
   0.01894712,
   0.01925893,
   0.02008524,
   0.02165493,
   0.02312836,
   0.02512002,
   0.06138624,
   0.4545287};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,49.5,3199.5);
   Graph_Graph01018->SetMinimum(-1.462161);
   Graph_Graph01018->SetMaximum(5.992762);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(23,78);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
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
