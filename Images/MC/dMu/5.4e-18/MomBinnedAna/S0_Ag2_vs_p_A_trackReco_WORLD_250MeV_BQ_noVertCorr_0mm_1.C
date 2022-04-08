void S0_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7291,-5.65601e-05,3377.355,0.0001248906);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[11] = {
   451.5069,
   653.3858,
   879.7988,
   1123.221,
   1371.452,
   1620.906,
   1867.986,
   2116.638,
   2363.802,
   2615.911,
   2789.041};
   Double_t Graph0_fy1062[11] = {
   -1.655074e-05,
   -1.255874e-06,
   -1.251374e-07,
   -3.523787e-08,
   -5.210671e-08,
   -2.550514e-08,
   -1.106135e-07,
   -5.343723e-07,
   -1.544414e-06,
   -9.866734e-06,
   3.416524e-05};
   Double_t Graph0_fex1062[11] = {
   0.1705331,
   0.1452717,
   0.1058655,
   0.1035205,
   0.1102686,
   0.1219472,
   0.1396871,
   0.1690043,
   0.2121382,
   0.265093,
   0.3045348};
   Double_t Graph0_fey1062[11] = {
   5.745237e-06,
   3.924306e-07,
   1.331887e-07,
   1.230517e-07,
   1.47497e-07,
   2.029391e-07,
   3.155189e-07,
   5.923741e-07,
   1.295099e-06,
   2.892075e-06,
   6.048356e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S0_",100,217.5354,3023.147);
   Graph_Graph01062->SetMinimum(-3.841503e-05);
   Graph_Graph01062->SetMaximum(0.0001067455);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(0,100);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
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
