void S18_AEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 19:14:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(529.9807,-5.673312,2721.688,6.648719);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[22] = {
   366.5662,
   457.0917,
   570.2421,
   694.5221,
   815.6213,
   938.4662,
   1062.727,
   1188.134,
   1312.601,
   1435.769,
   1561.946,
   1685.013,
   1810.381,
   1934.997,
   2060.333,
   2184.767,
   2309.184,
   2433.47,
   2559.803,
   2678.098,
   2781.058,
   2884.141};
   Double_t Graph0_fy1024[22] = {
   -0.02125809,
   -0.06112217,
   -0.1740223,
   -0.07854035,
   0.119508,
   -0.03619095,
   -0.01324917,
   -0.07047571,
   -0.07157923,
   -0.08563092,
   -0.06681973,
   0.006919492,
   0.0961077,
   -0.05229375,
   0.04967561,
   0.000141819,
   0.1020378,
   0.06874037,
   -0.06255234,
   0.0305634,
   0.2199358,
   1.938936};
   Double_t Graph0_fex1024[22] = {
   0.3336677,
   0.1656362,
   0.1099873,
   0.07619882,
   0.06207029,
   0.05636812,
   0.05341752,
   0.05190892,
   0.05306636,
   0.05358227,
   0.05753787,
   0.06116378,
   0.06928167,
   0.07588051,
   0.08755577,
   0.09662597,
   0.1121965,
   0.1360054,
   0.159986,
   0.1834622,
   0.3828877,
   1.295421};
   Double_t Graph0_fey1024[22] = {
   3.598382,
   0.3496208,
   0.1694931,
   0.103873,
   0.0728082,
   0.05985734,
   0.05275557,
   0.04772744,
   0.04523198,
   0.04296828,
   0.04296588,
   0.04187319,
   0.04371773,
   0.04399934,
   0.04671563,
   0.0476395,
   0.04987387,
   0.0535642,
   0.05585109,
   0.06076341,
   0.1523085,
   2.656111};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S18",100,114.3121,3137.356);
   Graph_Graph01024->SetMinimum(-4.441109);
   Graph_Graph01024->SetMaximum(5.416516);
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
