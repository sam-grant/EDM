void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 28 10:51:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.6875,-3.173174e-05,3375.235,2.939559e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.8963,
   653.3497,
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265,
   2787.611};
   Double_t Graph0_fy1171[11] = {
   1.895583e-05,
   -1.774203e-07,
   -1.945304e-07,
   -1.668958e-07,
   -1.797055e-07,
   -2.252111e-07,
   -2.43512e-07,
   -2.96277e-07,
   -7.219501e-07,
   -1.009098e-06,
   -1.655462e-05};
   Double_t Graph0_fex1171[11] = {
   0.06811951,
   0.05748166,
   0.04155252,
   0.0405763,
   0.04336583,
   0.04797142,
   0.05629496,
   0.07062218,
   0.0925011,
   0.1122526,
   0.1394332};
   Double_t Graph0_fey1171[11] = {
   2.518733e-07,
   1.7107e-08,
   5.738327e-09,
   5.199314e-09,
   6.356347e-09,
   8.802901e-09,
   1.484818e-08,
   3.145474e-08,
   7.841857e-08,
   1.814367e-07,
   4.989234e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,218.2359,3021.343);
   Graph_Graph01171->SetMinimum(-2.561901e-05);
   Graph_Graph01171->SetMaximum(2.328286e-05);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,100);
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
