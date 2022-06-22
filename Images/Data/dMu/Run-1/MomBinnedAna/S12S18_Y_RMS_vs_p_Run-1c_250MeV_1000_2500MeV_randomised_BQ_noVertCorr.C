void S12S18_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_randomised_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 15:15:23 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1679,9.262278,2703.758,15.73235);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[11] = {
   456.1787,
   654.5548,
   883.9908,
   1127.416,
   1373.269,
   1619.964,
   1866.889,
   2116.048,
   2359.597,
   2607.034,
   2781.495};
   Double_t Graph0_fy1110[11] = {
   13.46948,
   12.68294,
   12.57439,
   12.52461,
   12.50462,
   12.51024,
   12.48549,
   12.40699,
   12.38638,
   12.52358,
   13.36392};
   Double_t Graph0_fex1110[11] = {
   0.07805049,
   0.05494874,
   0.03668373,
   0.03331817,
   0.03291707,
   0.0364692,
   0.04438784,
   0.05594664,
   0.07339069,
   0.102103,
   0.1693809};
   Double_t Graph0_fey1110[11] = {
   0.02364034,
   0.007227365,
   0.004608075,
   0.004083245,
   0.004077854,
   0.004526408,
   0.005468292,
   0.006843431,
   0.009081229,
   0.01330161,
   0.06172861};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S12S18",100,223.5443,3014.22);
   Graph_Graph01110->SetMinimum(9.909286);
   Graph_Graph01110->SetMaximum(15.08534);
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
