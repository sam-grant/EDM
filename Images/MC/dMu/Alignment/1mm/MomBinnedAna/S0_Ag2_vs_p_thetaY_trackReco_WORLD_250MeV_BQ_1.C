void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4953,-0.2703507,3409.331,0.8462996);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[11] = {
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
   Double_t Graph0_fy1059[11] = {
   0.01629662,
   -0.2020212,
   -0.05933187,
   -0.01592472,
   -0.01308163,
   -0.02206182,
   0.04366435,
   0.003173976,
   0.001428739,
   -0.05585423,
   0.08270005};
   Double_t Graph0_fex1059[11] = {
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
   Double_t Graph0_fey1059[11] = {
   0.2552389,
   0.08550463,
   0.04914534,
   0.040517,
   0.03693509,
   0.03520193,
   0.03489942,
   0.03612695,
   0.03854732,
   0.04001854,
   0.0897056};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S0_",100,217.3487,3023.487);
   Graph_Graph01059->SetMinimum(-0.1586857);
   Graph_Graph01059->SetMaximum(0.7346346);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(0,101);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
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
