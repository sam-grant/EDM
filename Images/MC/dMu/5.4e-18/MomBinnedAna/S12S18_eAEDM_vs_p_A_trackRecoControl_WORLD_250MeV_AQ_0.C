void S12S18_eAEDM_vs_p_A_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.458,-4.689149e-08,3034.571,4.892899e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1091[12] = {
   191.2492,
   423.0726,
   631.3751,
   875.8727,
   1123.701,
   1372.838,
   1621.917,
   1870.444,
   2118.783,
   2366.347,
   2612.986,
   2825.089};
   Double_t Graph0_fy1091[12] = {
   2.04442e-05,
   5.782731e-08,
   1.0949e-08,
   8.404742e-09,
   8.619239e-09,
   9.646106e-09,
   1.14771e-08,
   1.482487e-08,
   2.163774e-08,
   3.530215e-08,
   7.066445e-08,
   3.43855e-07};
   Double_t Graph0_fex1091[12] = {
   0.2451076,
   0.05852805,
   0.04492808,
   0.04216635,
   0.04284521,
   0.0445378,
   0.04722669,
   0.05151899,
   0.05884351,
   0.06982903,
   0.08868849,
   0.1128886};
   Double_t Graph0_fey1091[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","S12S18_",100,0,3088.622);
   Graph_Graph01091->SetMinimum(6.726651e-09);
   Graph_Graph01091->SetMaximum(4.356717e-07);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01091->GetXaxis()->SetRange(25,90);
   Graph_Graph01091->GetXaxis()->CenterTitle(true);
   Graph_Graph01091->GetXaxis()->SetLabelFont(42);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01091->GetXaxis()->SetTitleFont(42);
   Graph_Graph01091->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01091->GetYaxis()->CenterTitle(true);
   Graph_Graph01091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01091->GetYaxis()->SetLabelFont(42);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01091->GetYaxis()->SetTitleFont(42);
   Graph_Graph01091->GetZaxis()->SetLabelFont(42);
   Graph_Graph01091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01091);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
