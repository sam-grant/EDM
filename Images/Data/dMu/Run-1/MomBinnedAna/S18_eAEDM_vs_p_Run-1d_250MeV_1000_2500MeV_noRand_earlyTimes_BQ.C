void S18_eAEDM_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.6017,0.01006019,2704.746,0.02920971);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1080[11] = {
   456.5642,
   653.6442,
   883.7203,
   1127.396,
   1373.03,
   1619.425,
   1866.664,
   2115.94,
   2359.34,
   2606.745,
   2782.38};
   Double_t Graph0_fy1080[11] = {
   0.1745295,
   0.04457316,
   0.02311226,
   0.0176246,
   0.01549182,
   0.01496762,
   0.01552996,
   0.01654268,
   0.01826139,
   0.02078349,
   0.07950972};
   Double_t Graph0_fex1080[11] = {
   0.124654,
   0.08811526,
   0.05948594,
   0.05402501,
   0.05364135,
   0.05963199,
   0.07358881,
   0.09289413,
   0.1232358,
   0.1691106,
   0.2944501};
   Double_t Graph0_fey1080[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1080,Graph0_fy1080,Graph0_fex1080,Graph0_fey1080);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01080 = new TH1F("Graph_Graph01080","S18",100,223.816,3015.298);
   Graph_Graph01080->SetMinimum(0.01197514);
   Graph_Graph01080->SetMaximum(0.02729476);
   Graph_Graph01080->SetDirectory(0);
   Graph_Graph01080->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01080->SetLineColor(ci);
   Graph_Graph01080->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01080->GetXaxis()->SetRange(28,82);
   Graph_Graph01080->GetXaxis()->CenterTitle(true);
   Graph_Graph01080->GetXaxis()->SetLabelFont(42);
   Graph_Graph01080->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01080->GetXaxis()->SetTitleFont(42);
   Graph_Graph01080->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01080->GetYaxis()->CenterTitle(true);
   Graph_Graph01080->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01080->GetYaxis()->SetLabelFont(42);
   Graph_Graph01080->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01080->GetYaxis()->SetTitleFont(42);
   Graph_Graph01080->GetZaxis()->SetLabelFont(42);
   Graph_Graph01080->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01080);
   
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
