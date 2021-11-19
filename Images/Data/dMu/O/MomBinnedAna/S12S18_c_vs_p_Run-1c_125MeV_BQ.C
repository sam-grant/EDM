void S12S18_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.836,-3.357658,2728.07,2.961677);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[22] = {
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
   Double_t Graph0_fy1033[22] = {
   -1.057554,
   0.03070882,
   -0.2540372,
   -0.1869202,
   -0.2451109,
   -0.189113,
   -0.1837703,
   -0.08869731,
   -0.09049629,
   -0.08109612,
   -0.01759452,
   -0.07506762,
   -0.04830753,
   -0.02388282,
   -0.03416458,
   -0.03863549,
   -0.03347531,
   -0.03013173,
   -0.03111753,
   0.06298676,
   0.03231301,
   1.201457};
   Double_t Graph0_fex1033[22] = {
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
   Double_t Graph0_fey1033[22] = {
   1.246882,
   0.123945,
   0.0599905,
   0.03638693,
   0.02517817,
   0.02073124,
   0.01818562,
   0.01647802,
   0.01551353,
   0.01472323,
   0.01479157,
   0.01432579,
   0.0148492,
   0.01500145,
   0.01569498,
   0.01597501,
   0.01672692,
   0.01809183,
   0.01917094,
   0.02093962,
   0.05282517,
   0.7069971};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","S12S18",100,114.879,3140.281);
   Graph_Graph01033->SetMinimum(-2.725724);
   Graph_Graph01033->SetMaximum(2.329743);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(21,79);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
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
