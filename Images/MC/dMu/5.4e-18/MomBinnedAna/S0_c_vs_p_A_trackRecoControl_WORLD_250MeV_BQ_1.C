void S0_c_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.862,-0.000292111,3411.922,0.002423486);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[11] = {
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
   Double_t Graph0_fy1060[11] = {
   0.0004853684,
   4.55801e-06,
   -1.094958e-06,
   -6.034287e-07,
   -4.042287e-07,
   -1.294561e-06,
   -1.298898e-06,
   -1.183822e-05,
   1.795225e-05,
   -2.577464e-05,
   0.0001644531};
   Double_t Graph0_fex1060[11] = {
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
   Double_t Graph0_fey1060[11] = {
   1.777603e-05,
   8.966432e-07,
   2.331624e-07,
   1.772363e-07,
   2.789686e-07,
   9.30863e-07,
   1.166941e-05,
   0.0008206848,
   0.0001346293,
   1.908332e-05,
   0.0001148745};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0_",100,219.0854,3025.975);
   Graph_Graph01060->SetMinimum(-2.055129e-05);
   Graph_Graph01060->SetMaximum(0.002151926);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01060->GetXaxis()->SetRange(0,101);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
   Graph_Graph01060->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01060->GetYaxis()->CenterTitle(true);
   Graph_Graph01060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01060->GetYaxis()->SetLabelFont(42);
   Graph_Graph01060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01060->GetYaxis()->SetTitleFont(42);
   Graph_Graph01060->GetZaxis()->SetLabelFont(42);
   Graph_Graph01060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01060);
   
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
