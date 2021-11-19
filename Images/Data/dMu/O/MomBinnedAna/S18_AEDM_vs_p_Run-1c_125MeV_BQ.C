void S18_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6605,-4.595313,2721.946,5.114562);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[22] = {
   367.1695,
   457.1672,
   569.9915,
   694.434,
   815.6521,
   938.5283,
   1062.845,
   1188.203,
   1312.631,
   1435.697,
   1561.957,
   1685.048,
   1810.518,
   1934.935,
   2060.25,
   2184.735,
   2308.965,
   2433.42,
   2559.743,
   2677.947,
   2781.437,
   2884.329};
   Double_t Graph0_fy1024[22] = {
   1.024225,
   0.2617123,
   -0.05086806,
   -0.08963969,
   -0.09925915,
   0.02749927,
   0.009283538,
   -0.02156343,
   0.005503218,
   -0.012759,
   -0.03434157,
   -0.01791361,
   -0.03006793,
   -0.02593287,
   0.04222019,
   -0.03075241,
   0.01957218,
   -0.02076728,
   0.05679272,
   -0.1024734,
   0.004692229,
   -0.09522025};
   Double_t Graph0_fex1024[22] = {
   0.2256843,
   0.1159461,
   0.07683435,
   0.05391212,
   0.04369731,
   0.03961808,
   0.03755871,
   0.03651898,
   0.03739335,
   0.03772291,
   0.04075554,
   0.04317573,
   0.04913531,
   0.05397125,
   0.06228492,
   0.06899389,
   0.08028826,
   0.09726218,
   0.1147976,
   0.1336637,
   0.2822085,
   1.333561};
   Double_t Graph0_fey1024[22] = {
   2.472024,
   0.2467507,
   0.1185844,
   0.07311496,
   0.05104532,
   0.04224353,
   0.03721926,
   0.03361137,
   0.03183875,
   0.03040513,
   0.03054381,
   0.0297013,
   0.03100127,
   0.03148928,
   0.03302665,
   0.03361586,
   0.03542367,
   0.03835864,
   0.04028036,
   0.04429592,
   0.116262,
   2.881781};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S18",100,115.072,3137.534);
   Graph_Graph01024->SetMinimum(-3.624326);
   Graph_Graph01024->SetMaximum(4.143574);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01024->GetXaxis()->SetRange(22,79);
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
