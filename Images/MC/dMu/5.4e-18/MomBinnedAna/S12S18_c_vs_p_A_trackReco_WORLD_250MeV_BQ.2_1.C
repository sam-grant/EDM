void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3826,-9.408491e-05,3406.967,8.06077e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.8173,
   653.2882,
   880.4177,
   1123.064,
   1371.036,
   1619.971,
   1866.583,
   2115.069,
   2362.842,
   2613.192,
   2787.647};
   Double_t Graph0_fy1171[11] = {
   1.401804e-05,
   -7.400588e-08,
   -6.213394e-08,
   -8.824482e-08,
   -1.027642e-07,
   -5.931205e-08,
   -3.401609e-08,
   1.561377e-08,
   1.33118e-07,
   -8.169335e-07,
   -2.811546e-05};
   Double_t Graph0_fex1171[11] = {
   0.11314,
   0.09526383,
   0.06881198,
   0.06717124,
   0.07180835,
   0.07951552,
   0.09313616,
   0.1168567,
   0.1525684,
   0.1856104,
   0.2333281};
   Double_t Graph0_fey1171[11] = {
   1.172471e-06,
   7.775557e-08,
   2.602659e-08,
   2.356675e-08,
   2.885933e-08,
   4.00341e-08,
   6.753984e-08,
   1.424526e-07,
   3.534024e-07,
   8.010278e-07,
   2.246122e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,218.0866,3021.498);
   Graph_Graph01171->SetMinimum(-7.661565e-05);
   Graph_Graph01171->SetMaximum(6.313844e-05);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,101);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
