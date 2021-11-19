void S12S18_eAEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.836,-0.2344789,2728.07,2.294443);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
   367.1623,
   457.1238,
   570.1453,
   694.7801,
   815.8457,
   938.5329,
   1062.817,
   1188.293,
   1312.63,
   1435.855,
   1561.931,
   1685.197,
   1810.575,
   1935.047,
   2060.265,
   2184.882,
   2309.029,
   2433.132,
   2559.653,
   2678.385,
   2780.888,
   2886.946};
   Double_t Graph0_fy1040[22] = {
   1.857815,
   0.1780973,
   0.08582434,
   0.05208369,
   0.03602151,
   0.02963499,
   0.02602425,
   0.02355843,
   0.02216728,
   0.02103706,
   0.02114633,
   0.02045927,
   0.02119948,
   0.02141838,
   0.02241245,
   0.02279987,
   0.02388733,
   0.02579576,
   0.02727891,
   0.02979975,
   0.07576497,
   0.8344652};
   Double_t Graph0_fex1040[22] = {
   0.1665134,
   0.08299863,
   0.05531789,
   0.0382026,
   0.03068863,
   0.02772217,
   0.0262764,
   0.02551509,
   0.02594171,
   0.02610396,
   0.02813113,
   0.02965413,
   0.03349714,
   0.03670287,
   0.04213071,
   0.04660818,
   0.05393212,
   0.06499286,
   0.07753794,
   0.08964244,
   0.1821461,
   1.217803};
   Double_t Graph0_fey1040[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,114.879,3140.281);
   Graph_Graph01040->SetMinimum(0.01841335);
   Graph_Graph01040->SetMaximum(2.041551);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(21,79);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
