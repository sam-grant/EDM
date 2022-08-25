void S18_AEDM_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:22:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.3487,-0.02256737,2703.496,0.0319803);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[11] = {
   456.4516,
   653.3441,
   883.6048,
   1127.183,
   1372.834,
   1619.467,
   1866.49,
   2115.652,
   2359.14,
   2606.684,
   2781.155};
   Double_t Graph0_fy1073[11] = {
   -0.05539045,
   0.0566662,
   -0.01090928,
   -0.01044491,
   0.02246805,
   -0.02145528,
   0.008460312,
   0.02242129,
   0.002620582,
   0.003028535,
   0.1322176};
   Double_t Graph0_fex1073[11] = {
   0.09432122,
   0.06716796,
   0.04563289,
   0.0415835,
   0.04148536,
   0.04630593,
   0.05732059,
   0.07282875,
   0.0969775,
   0.1332929,
   0.2302059};
   Double_t Graph0_fey1073[11] = {
   0.1319309,
   0.03398063,
   0.01772455,
   0.01359452,
   0.01201179,
   0.01163226,
   0.01213623,
   0.01300631,
   0.01440805,
   0.01634226,
   0.06151224};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,223.8545,3013.888);
   Graph_Graph01073->SetMinimum(-0.0171126);
   Graph_Graph01073->SetMaximum(0.02652554);
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
