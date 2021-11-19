void S18_thetaYMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(529.9807,-29.87171,2721.688,395.9354);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[22] = {
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
   Double_t Graph0_fy1031[22] = {
   154.381,
   319.4829,
   298.0411,
   214.4181,
   222.9948,
   197.2646,
   175.8228,
   162.9577,
   175.8228,
   145.8043,
   160.8136,
   107.209,
   143.6601,
   94.34395,
   87.91141,
   79.33469,
   77.1905,
   53.60452,
   45.02779,
   49.31616,
   30.01853,
   17.15345};
   Double_t Graph0_fex1031[22] = {
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
   Double_t Graph0_fey1031[22] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S18",100,114.3121,3137.356);
   Graph_Graph01031->SetMinimum(12.709);
   Graph_Graph01031->SetMaximum(353.3547);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->SetRange(22,79);
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
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
