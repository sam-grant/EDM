void S0_Y_RMS_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,10.15012,2727,13.87772);
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
   12.58835,
   13.18627,
   13.04761,
   12.98285,
   12.92154,
   12.86453,
   12.84966,
   12.85064,
   12.81549,
   12.76359,
   12.75375,
   12.6883,
   12.78975,
   12.68796,
   12.60146,
   12.59674,
   12.59829,
   12.67622,
   12.60721,
   12.6981,
   12.82264,
   11.88447};
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
   0.5710193,
   0.07018145,
   0.04930968,
   0.03372134,
   0.0281947,
   0.02643377,
   0.02608499,
   0.02669604,
   0.02739203,
   0.02851119,
   0.02983286,
   0.03128635,
   0.03394836,
   0.03659985,
   0.04006019,
   0.04426754,
   0.04954203,
   0.05778177,
   0.06414572,
   0.07241059,
   0.1320589,
   1.113083};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","S0_",100,49.5,3199.5);
   Graph_Graph01015->SetMinimum(10.52288);
   Graph_Graph01015->SetMaximum(13.50496);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01015->GetXaxis()->SetRange(23,78);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("#sigma_{y} [mm]");
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
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
