void S12S18_Momentum_Y_RMS_vs_p_Run-1d_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1608,10.87842,2703.806,25.96109);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[11] = {
   456.1407,
   654.522,
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447,
   2607.574,
   2781.592};
   Double_t Graph0_fy1111[11] = {
   14.22035,
   15.85255,
   17.11937,
   18.73062,
   19.93807,
   20.37753,
   19.9401,
   19.0412,
   17.50137,
   15.32954,
   13.91268};
   Double_t Graph0_fex1111[11] = {
   0.05661455,
   0.03997354,
   0.02675629,
   0.02434376,
   0.02403286,
   0.02662535,
   0.03248723,
   0.04093049,
   0.05375175,
   0.0746232,
   0.1234491};
   Double_t Graph0_fey1111[11] = {
   0.01809785,
   0.006573834,
   0.004575261,
   0.004462188,
   0.004751615,
   0.005387598,
   0.006392494,
   0.007686857,
   0.009405704,
   0.01187711,
   0.04627953};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S12S18",100,223.521,3014.278);
   Graph_Graph01111->SetMinimum(12.38669);
   Graph_Graph01111->SetMaximum(24.45282);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01111->GetXaxis()->SetRange(28,82);
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
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
