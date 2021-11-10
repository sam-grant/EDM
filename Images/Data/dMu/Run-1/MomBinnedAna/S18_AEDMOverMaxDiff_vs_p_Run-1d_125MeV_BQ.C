void S18_AEDMOverMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.02442856,2727,0.1028919);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[22] = {
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
   Double_t Graph0_fy1036[22] = {
   0.001653123,
   9.35719e-05,
   0.0004324959,
   0.0002438642,
   6.385209e-05,
   0.0001118313,
   9.804768e-05,
   0.0001042989,
   0.0001712307,
   0.0002970363,
   6.424198e-05,
   0.000256396,
   0.0002911985,
   0.0005221465,
   0.0007117334,
   0.0003168313,
   0.0007388148,
   0.0004428653,
   0.0001247838,
   0.0009144084,
   0.002728122,
   0.06329504};
   Double_t Graph0_fex1036[22] = {
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
   Double_t Graph0_fey1036[22] = {
   0.004861606,
   0.000339714,
   0.0001748902,
   0.0001278419,
   8.797464e-05,
   7.830616e-05,
   7.404304e-05,
   7.313258e-05,
   6.544107e-05,
   6.965997e-05,
   8.293361e-05,
   8.884408e-05,
   9.857539e-05,
   0.0001363822,
   0.0001442081,
   0.0001693155,
   0.000220619,
   0.0002517213,
   0.0002800073,
   0.00036586,
   0.001178879,
   0.0183768};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S18",100,49.5,3199.5);
   Graph_Graph01036->SetMinimum(-0.01169651);
   Graph_Graph01036->SetMaximum(0.09015987);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(23,78);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
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
