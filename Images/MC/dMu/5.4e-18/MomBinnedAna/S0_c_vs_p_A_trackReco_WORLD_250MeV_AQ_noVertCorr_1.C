void S0_c_vs_p_A_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5522,-4.771798e-05,3406.97,0.0002287618);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[12] = {
   195.823,
   429.6527,
   630.8,
   875.2732,
   1123.898,
   1373.276,
   1622.384,
   1870.824,
   2119.362,
   2366.93,
   2612.759,
   2826.954};
   Double_t Graph0_fy1062[12] = {
   0.0001555192,
   -1.595537e-06,
   -1.567609e-07,
   -1.488144e-08,
   1.974564e-09,
   4.336514e-09,
   1.319461e-08,
   1.66781e-08,
   3.771159e-08,
   2.508224e-08,
   -2.498166e-08,
   3.548489e-07};
   Double_t Graph0_fex1062[12] = {
   0.3433006,
   0.05845302,
   0.04584003,
   0.04397189,
   0.04462686,
   0.04604067,
   0.0485406,
   0.05262217,
   0.05904232,
   0.06922493,
   0.0867387,
   0.1101555};
   Double_t Graph0_fey1062[12] = {
   2.716265e-05,
   4.247496e-08,
   7.921767e-09,
   6.655437e-09,
   6.883692e-09,
   7.585496e-09,
   9.062246e-09,
   1.210023e-08,
   1.848656e-08,
   3.343477e-08,
   7.611098e-08,
   4.069544e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S0_",100,0,3090.222);
   Graph_Graph01062->SetMinimum(-2.007e-05);
   Graph_Graph01062->SetMaximum(0.0002011138);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(1,98);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
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
