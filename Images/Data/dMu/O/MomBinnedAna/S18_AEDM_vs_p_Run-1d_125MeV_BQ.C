void S18_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 10:22:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-4.907992,2727,1.114052);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[22] = {
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
   Double_t Graph0_fy1024[22] = {
   -1.94298,
   -0.07092522,
   -0.1033962,
   0.02653077,
   -0.02315107,
   -0.04874015,
   0.007438034,
   -0.01012589,
   0.02393875,
   0.02724898,
   0.01467536,
   -0.01322302,
   -0.03139649,
   -0.03987788,
   -0.008400007,
   -0.0002730862,
   -0.06918056,
   -0.03009295,
   -0.04933891,
   0.04658615,
   0.02636553,
   -0.6649612};
   Double_t Graph0_fex1024[22] = {
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
   Double_t Graph0_fey1024[22] = {
   1.961338,
   0.1802586,
   0.08745658,
   0.05385222,
   0.03766594,
   0.03109656,
   0.02736926,
   0.02481281,
   0.02351051,
   0.02238099,
   0.02248709,
   0.02190235,
   0.02296244,
   0.02328545,
   0.0244794,
   0.02501238,
   0.02633441,
   0.02839551,
   0.02978028,
   0.03251415,
   0.08401203,
   0.417665};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S18",100,49.5,3199.5);
   Graph_Graph01024->SetMinimum(-4.305788);
   Graph_Graph01024->SetMaximum(0.5118472);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01024->GetXaxis()->SetRange(23,78);
   Graph_Graph01024->GetXaxis()->CenterTitle(true);
   Graph_Graph01024->GetXaxis()->SetLabelFont(42);
   Graph_Graph01024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetXaxis()->SetTitleFont(42);
   Graph_Graph01024->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01024->GetYaxis()->CenterTitle(true);
   Graph_Graph01024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01024->GetYaxis()->SetLabelFont(42);
   Graph_Graph01024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01024->GetYaxis()->SetTitleFont(42);
   Graph_Graph01024->GetZaxis()->SetLabelFont(42);
   Graph_Graph01024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01024);
   
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
