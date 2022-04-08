void S12_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0789,-0.0001846355,3379.886,4.230926e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[11] = {
   451.6332,
   653.4671,
   880.0622,
   1123.093,
   1371.258,
   1620.035,
   1867.297,
   2114.967,
   2362.535,
   2614.675,
   2791.065};
   Double_t Graph0_fy1099[11] = {
   1.037797e-06,
   2.152261e-07,
   3.479051e-09,
   7.400709e-08,
   2.117336e-08,
   -2.851942e-07,
   -6.113055e-07,
   -7.163749e-07,
   -3.015695e-06,
   3.171232e-08,
   -9.469561e-05};
   Double_t Graph0_fex1099[11] = {
   0.1455403,
   0.1229281,
   0.08914858,
   0.08707993,
   0.09307324,
   0.102489,
   0.1193871,
   0.1490946,
   0.1954569,
   0.2406913,
   0.3331762};
   Double_t Graph0_fey1099[11] = {
   3.44734e-06,
   2.375145e-07,
   7.985746e-08,
   7.284305e-08,
   8.887838e-08,
   1.211997e-07,
   1.965948e-07,
   4.056334e-07,
   1.000098e-06,
   2.220393e-06,
   5.211572e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,217.4966,3025.389);
   Graph_Graph01099->SetMinimum(-0.000161941);
   Graph_Graph01099->SetMaximum(1.961478e-05);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(0,100);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
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
