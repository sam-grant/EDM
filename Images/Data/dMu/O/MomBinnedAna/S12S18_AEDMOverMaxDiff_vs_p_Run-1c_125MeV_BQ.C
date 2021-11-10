void S12S18_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:23:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.01303425,2727,0.006392841);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1042[22] = {
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
   Double_t Graph0_fy1042[22] = {
   -0.004073239,
   -0.000312833,
   5.714372e-05,
   -0.0002659668,
   -6.879507e-05,
   6.433804e-05,
   0.0002169258,
   -2.289347e-05,
   -8.526807e-05,
   -4.269409e-05,
   -0.0001799503,
   9.384585e-05,
   -0.0003176234,
   -2.002519e-05,
   3.084983e-06,
   -0.0002988656,
   0.0002144085,
   -0.0002474551,
   0.0006887916,
   -0.001167846,
   0.001545779,
   -0.009796399};
   Double_t Graph0_fex1042[22] = {
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
   Double_t Graph0_fey1042[22] = {
   -0.008664645,
   -0.0005257087,
   0.0002741556,
   -0.0001959164,
   -0.0001354834,
   0.0001291722,
   0.0001305487,
   -0.0001262896,
   -0.000112381,
   -0.0001325868,
   -0.0001160644,
   0.0001704052,
   -0.0001570981,
   -0.000195865,
   0.0002133201,
   -0.0002533754,
   0.0002857607,
   -0.0004011893,
   0.000439984,
   -0.0006085111,
   0.001609214,
   -0.02995563};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","S12S18",100,49.5,3199.5);
   Graph_Graph01042->SetMinimum(-0.01109154);
   Graph_Graph01042->SetMaximum(0.004450132);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01042->GetXaxis()->SetRange(23,78);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01042->GetYaxis()->CenterTitle(true);
   Graph_Graph01042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01042->GetYaxis()->SetLabelFont(42);
   Graph_Graph01042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01042->GetYaxis()->SetTitleFont(42);
   Graph_Graph01042->GetZaxis()->SetLabelFont(42);
   Graph_Graph01042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01042);
   
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
