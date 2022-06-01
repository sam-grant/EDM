void S12_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4225,-0.6612314,3405.802,2.023029);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[12] = {
   194.7741,
   428.2602,
   630.9465,
   875.2165,
   1124.014,
   1373.242,
   1622.299,
   1870.808,
   2119.299,
   2366.864,
   2612.607,
   2825.938};
   Double_t Graph0_fy1100[12] = {
   1.194727,
   -0.176933,
   -0.04903267,
   -0.01008122,
   -0.01893937,
   -0.006223547,
   -0.02441941,
   -0.02829987,
   -0.0193983,
   -0.02640688,
   -0.02599235,
   -0.03279877};
   Double_t Graph0_fex1100[12] = {
   0.2305179,
   0.04066602,
   0.0316485,
   0.03041501,
   0.03088632,
   0.03188215,
   0.03358649,
   0.0364383,
   0.04104611,
   0.04825386,
   0.06099314,
   0.0777546};
   Double_t Graph0_fey1100[12] = {
   0.3809254,
   0.03692158,
   0.01759229,
   0.01379139,
   0.01183198,
   0.01048042,
   0.009570528,
   0.009068258,
   0.008940528,
   0.009228173,
   0.01021969,
   0.01598473};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S12_",100,0,3089.163);
   Graph_Graph01100->SetMinimum(-0.3928053);
   Graph_Graph01100->SetMaximum(1.754603);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(1,98);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
