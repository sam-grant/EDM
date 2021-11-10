void S12_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:24:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-6.648232,2727,4.004076);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[22] = {
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
   Double_t Graph0_fy1015[22] = {
   -3.185987,
   0.2595578,
   0.004399792,
   -0.005249026,
   0.02885585,
   -0.002696434,
   0.05297101,
   3.020511e-05,
   0.01272354,
   -0.005214615,
   -0.003659344,
   -0.01179882,
   0.01012211,
   0.004068212,
   -0.01786134,
   -0.008612061,
   -0.004873254,
   0.007880564,
   -0.003420032,
   -0.0407588,
   -0.03142997,
   0.9714883};
   Double_t Graph0_fex1015[22] = {
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
   Double_t Graph0_fey1015[22] = {
   1.68686,
   0.1622211,
   0.0795513,
   0.04737067,
   0.03273148,
   0.02690005,
   0.02365269,
   0.0214207,
   0.02005027,
   0.01893329,
   0.01897136,
   0.01830903,
   0.01894065,
   0.01903119,
   0.01986792,
   0.0201423,
   0.02114329,
   0.02268436,
   0.02414899,
   0.02592321,
   0.06230949,
   1.257203};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","S12",100,49.5,3199.5);
   Graph_Graph01015->SetMinimum(-5.583001);
   Graph_Graph01015->SetMaximum(2.938845);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(23,78);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
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
