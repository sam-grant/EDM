void S0_Ag2_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:16:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.5089,-5.759614e-07,3034.889,4.489288e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[12] = {
   191.2482,
   435.2369,
   652.4289,
   883.6659,
   1126.229,
   1373.859,
   1622.425,
   1870.722,
   2119.361,
   2367.038,
   2613.854,
   2825.256};
   Double_t Graph0_fy1040[12] = {
   -0.0008336474,
   -3.667066e-06,
   2.139397e-07,
   6.1155e-08,
   4.193261e-08,
   -8.88334e-08,
   8.7993e-08,
   -2.360978e-08,
   -4.449965e-08,
   1.35054e-07,
   7.665885e-07,
   3.152565e-06};
   Double_t Graph0_fex1040[12] = {
   1.118774,
   0.1970657,
   0.1111295,
   0.07528278,
   0.06973481,
   0.06961886,
   0.07258618,
   0.07835664,
   0.08830407,
   0.1035468,
   0.1290676,
   0.160519};
   Double_t Graph0_fey1040[12] = {
   0.001033588,
   2.595695e-06,
   1.773894e-07,
   4.956085e-08,
   3.728779e-08,
   3.710589e-08,
   4.281885e-08,
   5.564074e-08,
   8.442057e-08,
   1.495514e-07,
   3.242933e-07,
   1.692159e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S0_",100,0,3088.946);
   Graph_Graph01040->SetMinimum(-6.943648e-08);
   Graph_Graph01040->SetMaximum(3.982763e-06);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(25,90);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
