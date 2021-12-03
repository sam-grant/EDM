void S12_AEDM_vs_p_A_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.6115,-1.563401e-07,3019.97,1.768414e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[12] = {
   106.8541,
   434.1964,
   631.4626,
   875.6655,
   1124.351,
   1373.49,
   1622.49,
   1871.474,
   2120.007,
   2367.914,
   2613.316,
   2836.123};
   Double_t Graph0_fy1054[12] = {
   0.0005499261,
   2.240604e-07,
   4.405074e-08,
   5.878459e-08,
   7.449989e-08,
   1.112352e-07,
   1.236659e-07,
   1.597842e-07,
   1.542048e-07,
   2.341175e-07,
   4.002136e-07,
   1.297665e-06};
   Double_t Graph0_fex1054[12] = {
   1.820096,
   0.05734266,
   0.04772134,
   0.04554609,
   0.04567215,
   0.04680967,
   0.04904856,
   0.05265824,
   0.0582703,
   0.06704882,
   0.08295268,
   0.1203711};
   Double_t Graph0_fey1054[12] = {
   0.0007892119,
   7.245478e-08,
   1.239491e-08,
   1.030876e-08,
   1.037632e-08,
   1.119454e-08,
   1.282908e-08,
   1.575331e-08,
   2.091817e-08,
   3.11675e-08,
   5.731862e-08,
   2.461764e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S12_",100,0,3109.364);
   Graph_Graph01054->SetMinimum(3.613535e-08);
   Graph_Graph01054->SetMaximum(1.575939e-06);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01054->GetXaxis()->SetRange(25,89);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
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
