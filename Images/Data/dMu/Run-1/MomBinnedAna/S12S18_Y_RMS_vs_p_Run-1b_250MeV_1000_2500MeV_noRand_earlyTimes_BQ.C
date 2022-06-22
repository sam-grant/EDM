void S12S18_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.074,9.429244,2704.178,16.0463);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[11] = {
   456.0655,
   655.1139,
   884.2586,
   1127.589,
   1373.332,
   1620.025,
   1866.92,
   2116.441,
   2359.526,
   2607.688,
   2781.8};
   Double_t Graph0_fy1110[11] = {
   13.72131,
   12.90815,
   12.82356,
   12.77627,
   12.75332,
   12.75444,
   12.72127,
   12.65964,
   12.61332,
   12.80587,
   14.0902};
   Double_t Graph0_fex1110[11] = {
   0.1468545,
   0.1034093,
   0.06917995,
   0.06270531,
   0.06147707,
   0.06775025,
   0.08207162,
   0.1030123,
   0.1339743,
   0.1851687,
   0.3050852};
   Double_t Graph0_fey1110[11] = {
   0.04547571,
   0.01389887,
   0.008855588,
   0.007842776,
   0.00777641,
   0.008579534,
   0.01030895,
   0.01284694,
   0.01690038,
   0.02463451,
   0.1152768};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S12S18",100,223.3,3014.724);
   Graph_Graph01110->SetMinimum(10.09095);
   Graph_Graph01110->SetMaximum(15.3846);
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
