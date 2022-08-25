void S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 28 10:51:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.6875,-1.986229,3375.235,6.771734);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1168[11] = {
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
   Double_t Graph0_fy1168[11] = {
   5.247851,
   -0.2394505,
   -0.5142437,
   -0.4037806,
   -0.3166841,
   -0.3087489,
   -0.2130672,
   -0.1470871,
   -0.1637273,
   -0.1027097,
   -0.114444};
   Double_t Graph0_fex1168[11] = {
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
   Double_t Graph0_fey1168[11] = {
   0.06422225,
   0.0215193,
   0.01232495,
   0.01011461,
   0.009282421,
   0.008876894,
   0.009013704,
   0.009674895,
   0.01072025,
   0.01108608,
   0.02737629};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1168,Graph0_fy1168,Graph0_fex1168,Graph0_fey1168);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01168 = new TH1F("Graph_Graph01168","S12S18_",100,218.2359,3021.343);
   Graph_Graph01168->SetMinimum(-1.110433);
   Graph_Graph01168->SetMaximum(5.895937);
   Graph_Graph01168->SetDirectory(0);
   Graph_Graph01168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01168->SetLineColor(ci);
   Graph_Graph01168->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01168->GetXaxis()->SetRange(0,100);
   Graph_Graph01168->GetXaxis()->CenterTitle(true);
   Graph_Graph01168->GetXaxis()->SetLabelFont(42);
   Graph_Graph01168->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01168->GetXaxis()->SetTitleFont(42);
   Graph_Graph01168->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01168->GetYaxis()->CenterTitle(true);
   Graph_Graph01168->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01168->GetYaxis()->SetLabelFont(42);
   Graph_Graph01168->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01168->GetYaxis()->SetTitleFont(42);
   Graph_Graph01168->GetZaxis()->SetLabelFont(42);
   Graph_Graph01168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01168);
   
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
