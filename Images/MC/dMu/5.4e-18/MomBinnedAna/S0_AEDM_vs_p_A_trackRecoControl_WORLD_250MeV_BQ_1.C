void S0_AEDM_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:39:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(468.1968,-0.0007633045,3029.484,0.0001210131);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[11] = {
   453.2736,
   656.6675,
   884.0536,
   1123.281,
   1363.384,
   1601.719,
   1825.372,
   2101.358,
   2414.029,
   2640.443,
   2791.648};
   Double_t Graph0_fy1039[11] = {
   -6.424197e-06,
   -1.324461e-06,
   -4.998795e-08,
   -6.163729e-07,
   -7.24845e-07,
   -2.316299e-06,
   -7.124844e-05,
   -0.0008474109,
   -0.0001328577,
   -4.38372e-06,
   1.951033e-05};
   Double_t Graph0_fex1039[11] = {
   0.2807713,
   0.2103466,
   0.1422069,
   0.130941,
   0.1513813,
   0.2158623,
   0.4409652,
   2.537895,
   1.001244,
   0.5214554,
   0.4195432};
   Double_t Graph0_fey1039[11] = {
   2.551499e-05,
   1.228726e-06,
   3.267891e-07,
   2.494125e-07,
   3.941123e-07,
   1.250044e-06,
   1.536654e-05,
   0.001126992,
   0.0001400246,
   1.608281e-05,
   8.484705e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S0_",100,219.0854,3025.975);
   Graph_Graph01039->SetMinimum(-0.0006748727);
   Graph_Graph01039->SetMaximum(3.258136e-05);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(19,91);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
