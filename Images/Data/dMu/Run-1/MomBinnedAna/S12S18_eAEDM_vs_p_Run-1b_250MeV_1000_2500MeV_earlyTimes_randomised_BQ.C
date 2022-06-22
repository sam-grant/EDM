void S12S18_eAEDM_vs_p_Run-1b_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0812,0.01131753,2704.187,0.03421878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1113[11] = {
   456.0723,
   655.1118,
   884.2609,
   1127.596,
   1373.336,
   1620.019,
   1866.925,
   2116.45,
   2359.522,
   2607.665,
   2781.81};
   Double_t Graph0_fy1113[11] = {
   0.2066199,
   0.05299106,
   0.02702502,
   0.02056546,
   0.01780856,
   0.01700951,
   0.0173731,
   0.01832099,
   0.01999501,
   0.02273312,
   0.08177712};
   Double_t Graph0_fex1113[11] = {
   0.1468243,
   0.1034126,
   0.06917846,
   0.06270082,
   0.06147718,
   0.06775308,
   0.0820677,
   0.1030029,
   0.1339861,
   0.185148,
   0.3051867};
   Double_t Graph0_fey1113[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1113,Graph0_fy1113,Graph0_fex1113,Graph0_fey1113);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01113 = new TH1F("Graph_Graph01113","S12S18",100,223.3065,3014.734);
   Graph_Graph01113->SetMinimum(0.01360766);
   Graph_Graph01113->SetMaximum(0.03192866);
   Graph_Graph01113->SetDirectory(0);
   Graph_Graph01113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01113->SetLineColor(ci);
   Graph_Graph01113->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01113->GetXaxis()->SetRange(28,82);
   Graph_Graph01113->GetXaxis()->CenterTitle(true);
   Graph_Graph01113->GetXaxis()->SetLabelFont(42);
   Graph_Graph01113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01113->GetXaxis()->SetTitleFont(42);
   Graph_Graph01113->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01113->GetYaxis()->CenterTitle(true);
   Graph_Graph01113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01113->GetYaxis()->SetLabelFont(42);
   Graph_Graph01113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01113->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01113->GetYaxis()->SetTitleFont(42);
   Graph_Graph01113->GetZaxis()->SetLabelFont(42);
   Graph_Graph01113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01113);
   
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
