void S18_AEDM_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 12 13:19:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.4716,-0.007570533,2705.515,0.09757855);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[11] = {
   456.3266,
   653.7599,
   883.7132,
   1127.509,
   1372.948,
   1619.692,
   1866.666,
   2115.868,
   2359.717,
   2606.463,
   2783.066};
   Double_t Graph0_fy1073[11] = {
   -0.06502475,
   0.05951773,
   0.06307814,
   0.03043811,
   0.008639322,
   0.02509641,
   0.0727511,
   0.05794748,
   0.003630331,
   0.04734489,
   0.05583183};
   Double_t Graph0_fex1073[11] = {
   0.1715822,
   0.1204355,
   0.08157387,
   0.0738885,
   0.07350217,
   0.08175499,
   0.1004466,
   0.1271665,
   0.1675907,
   0.2315802,
   0.415148};
   Double_t Graph0_fey1073[11] = {
   0.235163,
   0.06071984,
   0.03156068,
   0.02413281,
   0.02114564,
   0.02045112,
   0.02119545,
   0.02257211,
   0.02468006,
   0.0282036,
   0.1062277};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,223.4224,3016.213);
   Graph_Graph01073->SetMinimum(0.002944377);
   Graph_Graph01073->SetMaximum(0.08706364);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->SetRange(28,82);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
