void S12S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:23:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,10.39058,2727,22.51094);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
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
   Double_t Graph0_fy1038[22] = {
   12.85358,
   14.26532,
   15.1817,
   16.18856,
   16.59816,
   17.53567,
   18.32731,
   19.08024,
   19.69611,
   20.12443,
   20.47487,
   20.17841,
   20.06706,
   19.65939,
   19.27311,
   18.66848,
   17.90421,
   16.88202,
   15.76494,
   14.64543,
   13.6706,
   14.18359};
   Double_t Graph0_fex1038[22] = {
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
   Double_t Graph0_fey1038[22] = {
   0.3529817,
   0.03960542,
   0.02400767,
   0.01760892,
   0.01434705,
   0.01358214,
   0.01352848,
   0.01365678,
   0.01419055,
   0.01473097,
   0.01601177,
   0.01674198,
   0.01864941,
   0.0200943,
   0.02244448,
   0.02411047,
   0.02671788,
   0.03030653,
   0.03358366,
   0.03806488,
   0.09711353,
   1.772949};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S12S18",100,49.5,3199.5);
   Graph_Graph01038->SetMinimum(11.60262);
   Graph_Graph01038->SetMaximum(21.29891);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(23,78);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
