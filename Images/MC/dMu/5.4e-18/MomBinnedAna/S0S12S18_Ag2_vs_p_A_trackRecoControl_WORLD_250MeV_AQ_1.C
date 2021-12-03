void S0S12S18_Ag2_vs_p_A_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.5144,-2.363574e-07,3034.923,2.132671e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[12] = {
   192.2001,
   423.448,
   631.326,
   875.8637,
   1123.741,
   1372.866,
   1621.902,
   1870.424,
   2118.826,
   2366.464,
   2613.201,
   2825.527};
   Double_t Graph0_fy1100[12] = {
   -2.118453e-05,
   -1.093852e-07,
   -1.28493e-10,
   1.048221e-08,
   1.663828e-08,
   3.566663e-09,
   2.355754e-08,
   8.636549e-09,
   1.046748e-08,
   7.937701e-08,
   3.003731e-07,
   1.498162e-06};
   Double_t Graph0_fex1100[12] = {
   0.2040654,
   0.04760665,
   0.03659771,
   0.03433945,
   0.03488441,
   0.03624002,
   0.03844086,
   0.0419287,
   0.04784871,
   0.05675261,
   0.07178417,
   0.09115639};
   Double_t Graph0_fey1100[12] = {
   1.188608e-05,
   3.184129e-08,
   6.015336e-09,
   4.582692e-09,
   4.675588e-09,
   5.245506e-09,
   6.373498e-09,
   8.575556e-09,
   1.351612e-08,
   2.460978e-08,
   5.550519e-08,
   3.011398e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S0S12S18_",100,0,3088.981);
   Graph_Graph01100->SetMinimum(5.454317e-10);
   Graph_Graph01100->SetMaximum(1.895768e-06);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(25,90);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
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
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
