void S0_c_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4953,-4.260793e-05,3409.331,0.0003223065);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[11] = {
   451.3821,
   653.3903,
   879.7967,
   1123.261,
   1371.434,
   1620.943,
   1867.966,
   2116.623,
   2363.769,
   2615.976,
   2789.306};
   Double_t Graph0_fy1060[11] = {
   4.042521e-05,
   -2.049437e-07,
   -1.491002e-07,
   -2.797192e-07,
   -2.578029e-07,
   -3.666306e-07,
   -2.862338e-07,
   -1.78815e-07,
   -1.209182e-06,
   -7.801808e-06,
   6.278484e-05};
   Double_t Graph0_fex1060[11] = {
   0.1884824,
   0.1599355,
   0.1164829,
   0.1138846,
   0.1213846,
   0.1341141,
   0.1537254,
   0.1860182,
   0.2335834,
   0.2922443,
   0.3358488};
   Double_t Graph0_fey1060[11] = {
   5.58694e-06,
   3.704677e-07,
   1.286857e-07,
   1.150801e-07,
   1.392335e-07,
   1.906349e-07,
   3.018183e-07,
   5.764761e-07,
   1.294578e-06,
   2.953171e-06,
   6.573321e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0_",100,217.3487,3023.487);
   Graph_Graph01060->SetMinimum(-6.116487e-06);
   Graph_Graph01060->SetMaximum(0.0002858151);
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
