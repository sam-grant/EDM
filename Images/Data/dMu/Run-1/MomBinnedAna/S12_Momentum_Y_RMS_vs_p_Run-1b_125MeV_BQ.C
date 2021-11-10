void S12_Momentum_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,10.17757,2727,22.68945);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[22] = {
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
   Double_t Graph0_fy1022[22] = {
   13.60419,
   14.35718,
   15.24798,
   16.2562,
   16.67823,
   17.61704,
   18.41287,
   19.16716,
   19.78407,
   20.19975,
   20.58687,
   20.29318,
   20.19559,
   19.73273,
   19.30066,
   18.76268,
   17.96965,
   16.90714,
   15.84002,
   14.69092,
   13.70608,
   14.19451};
   Double_t Graph0_fex1022[22] = {
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
   Double_t Graph0_fey1022[22] = {
   0.421443,
   0.04419874,
   0.02707503,
   0.01955866,
   0.01577627,
   0.01486109,
   0.01481756,
   0.01491336,
   0.01539943,
   0.01590568,
   0.01726916,
   0.01796969,
   0.01990721,
   0.02137613,
   0.02367618,
   0.02546158,
   0.02798875,
   0.03172757,
   0.03552771,
   0.04006561,
   0.09993526,
   1.931628};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12",100,49.5,3199.5);
   Graph_Graph01022->SetMinimum(11.42876);
   Graph_Graph01022->SetMaximum(21.43827);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(23,78);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
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
