void S12S18_AEDM_vs_p_Run-1d_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2282,0.003522154,2704.209,0.06082426);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[11] = {
   456.1818,
   654.8556,
   884.0354,
   1127.579,
   1373.427,
   1619.978,
   1866.931,
   2116.345,
   2359.544,
   2607.526,
   2781.946};
   Double_t Graph0_fy1106[11] = {
   -0.04257515,
   0.06576199,
   0.04421113,
   0.01127172,
   0.04109717,
   0.03562273,
   0.04604097,
   0.03553499,
   0.01925438,
   0.03287788,
   -0.006024149};
   Double_t Graph0_fex1106[11] = {
   0.08787385,
   0.06168673,
   0.04108342,
   0.03725922,
   0.03658865,
   0.04039006,
   0.04912782,
   0.06164003,
   0.08047278,
   0.1114733,
   0.1852503};
   Double_t Graph0_fey1106[11] = {
   0.1235061,
   0.03137852,
   0.01601275,
   0.01218385,
   0.01058549,
   0.0101545,
   0.01039151,
   0.01096272,
   0.01196719,
   0.01364881,
   0.05007571};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S12S18",100,223.4902,3014.735);
   Graph_Graph01106->SetMinimum(0.009252365);
   Graph_Graph01106->SetMaximum(0.05509405);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01106->GetXaxis()->SetRange(28,82);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
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
