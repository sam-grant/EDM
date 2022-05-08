void S12_eAEDM_vs_p_Run-1a_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.907,0.01196586,2704.116,0.03647435);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[11] = {
   455.8948,
   656.0632,
   884.3183,
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574,
   2781.732};
   Double_t Graph0_fy1047[11] = {
   0.2274249,
   0.05729173,
   0.02880088,
   0.02185004,
   0.01886897,
   0.01801977,
   0.01825268,
   0.01912992,
   0.02082483,
   0.02381293,
   0.08430722};
   Double_t Graph0_fex1047[11] = {
   0.1612216,
   0.1117597,
   0.07355508,
   0.06671218,
   0.06510647,
   0.07171005,
   0.08614684,
   0.1078021,
   0.1395437,
   0.1943605,
   0.3152937};
   Double_t Graph0_fey1047[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","S12",100,223.1022,3014.678);
   Graph_Graph01047->SetMinimum(0.01441671);
   Graph_Graph01047->SetMaximum(0.0340235);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01047->GetXaxis()->SetRange(28,82);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
