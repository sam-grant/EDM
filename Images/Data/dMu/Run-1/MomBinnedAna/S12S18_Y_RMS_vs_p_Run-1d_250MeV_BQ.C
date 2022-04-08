void S12S18_Y_RMS_vs_p_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 11:54:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(471.2007,8.97574,3017.767,17.59861);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[11] = {
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
   Double_t Graph0_fy1110[11] = {
   13.35197,
   12.59054,
   12.46439,
   12.43579,
   12.43507,
   12.44138,
   12.4057,
   12.33626,
   12.29714,
   12.47564,
   13.5772};
   Double_t Graph0_fex1110[11] = {
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
   Double_t Graph0_fey1110[11] = {
   0.01699436,
   0.005221157,
   0.003331148,
   0.002962418,
   0.002963252,
   0.003288993,
   0.003976753,
   0.004979938,
   0.006608749,
   0.009666076,
   0.0451796};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S12S18",100,223.521,3014.278);
   Graph_Graph01110->SetMinimum(9.838027);
   Graph_Graph01110->SetMaximum(16.73633);
   Graph_Graph01110->SetDirectory(0);
   Graph_Graph01110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01110->SetLineColor(ci);
   Graph_Graph01110->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01110->GetXaxis()->SetRange(19,91);
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
