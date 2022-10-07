#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12S18_Ag2_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 11:40:49 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.102,-0.02702649,2703.55,0.05412751);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
   456.1259,
   654.3484,
   883.8465,
   1127.258,
   1373.207,
   1619.861,
   1866.687,
   2115.945,
   2359.391,
   2607.511,
   2781.302};
   Double_t Graph0_fy1107[11] = {
   0.07207649,
   0.02214204,
   0.0399196,
   0.01616884,
   0.004746201,
   0.01197964,
   -0.02399281,
   0.002639138,
   -0.01767251,
   -0.001756377,
   -0.02116311};
   Double_t Graph0_fex1107[11] = {
   0.06685408,
   0.04739569,
   0.03179544,
   0.02897557,
   0.0286816,
   0.03183412,
   0.03891513,
   0.04912633,
   0.06471906,
   0.08999573,
   0.1485384};
   Double_t Graph0_fey1107[11] = {
   0.09363549,
   0.024029,
   0.01235835,
   0.009453052,
   0.008280234,
   0.007988265,
   0.00828111,
   0.008891551,
   0.009973606,
   0.01185133,
   0.04451908};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12S18",100,223.5199,3013.99);
   Graph_Graph01107->SetMinimum(-0.01891109);
   Graph_Graph01107->SetMaximum(0.04601211);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(28,82);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
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
