void S12S18_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 12 13:19:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2432,9.277434,2704.44,15.78131);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[11] = {
   456.1939,
   654.8477,
   884.126,
   1127.672,
   1373.377,
   1620.055,
   1867.062,
   2116.138,
   2359.718,
   2607.233,
   2782.11};
   Double_t Graph0_fy1110[11] = {
   13.48236,
   12.71153,
   12.6129,
   12.55454,
   12.54189,
   12.54624,
   12.52028,
   12.42924,
   12.40956,
   12.6022,
   14.20849};
   Double_t Graph0_fex1110[11] = {
   0.1219767,
   0.0852733,
   0.05670851,
   0.05129367,
   0.05046427,
   0.05574092,
   0.06765295,
   0.08499206,
   0.110715,
   0.1542762,
   0.2603046};
   Double_t Graph0_fey1110[11] = {
   0.03690213,
   0.01125659,
   0.007142699,
   0.006301689,
   0.006269709,
   0.006941579,
   0.008354751,
   0.01040946,
   0.01373292,
   0.02018983,
   0.09913491};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S12S18",100,223.442,3015.001);
   Graph_Graph01110->SetMinimum(9.927821);
   Graph_Graph01110->SetMaximum(15.13092);
   Graph_Graph01110->SetDirectory(0);
   Graph_Graph01110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01110->SetLineColor(ci);
   Graph_Graph01110->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01110->GetXaxis()->SetRange(28,82);
   Graph_Graph01110->GetXaxis()->CenterTitle(true);
   Graph_Graph01110->GetXaxis()->SetLabelFont(42);
   Graph_Graph01110->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01110->GetXaxis()->SetTitleFont(42);
   Graph_Graph01110->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01110->GetYaxis()->CenterTitle(true);
   Graph_Graph01110->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01110->GetYaxis()->SetLabelFont(42);
   Graph_Graph01110->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01110->GetYaxis()->SetTitleFont(42);
   Graph_Graph01110->GetZaxis()->SetLabelFont(42);
   Graph_Graph01110->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01110);
   
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
