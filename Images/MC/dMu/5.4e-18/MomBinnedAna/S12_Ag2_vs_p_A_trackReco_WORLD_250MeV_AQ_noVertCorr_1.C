void S12_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4225,-9.78747e-06,3405.802,4.464983e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[12] = {
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
   Double_t Graph0_fy1103[12] = {
   2.403238e-05,
   2.854788e-08,
   7.517882e-09,
   3.927681e-09,
   -7.821798e-10,
   -4.66951e-09,
   -1.400069e-08,
   -2.636341e-08,
   -2.385535e-08,
   -5.331124e-08,
   -1.212881e-07,
   -5.269947e-07};
   Double_t Graph0_fex1103[12] = {
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
   Double_t Graph0_fey1103[12] = {
   1.154457e-05,
   1.941451e-08,
   3.692222e-09,
   3.119092e-09,
   3.23843e-09,
   3.565672e-09,
   4.241893e-09,
   5.601365e-09,
   8.51545e-09,
   1.513842e-08,
   3.445072e-08,
   1.875919e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S12_",100,0,3089.163);
   Graph_Graph01103->SetMinimum(-4.34374e-06);
   Graph_Graph01103->SetMaximum(3.92061e-05);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01103->GetXaxis()->SetRange(1,98);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
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
