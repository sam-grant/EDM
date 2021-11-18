void S12_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2011,12.44873,2741.317,13.2525);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[11] = {
   451.6103,
   653.3617,
   880.2228,
   1123.036,
   1371.149,
   1620.258,
   1866.731,
   2114.882,
   2362.569,
   2614.228,
   2787.765};
   Double_t Graph0_fy1039[11] = {
   13.07926,
   13.00182,
   12.9645,
   12.87238,
   12.82211,
   12.78336,
   12.73072,
   12.69798,
   12.65186,
   12.64056,
   12.66854};
   Double_t Graph0_fex1039[11] = {
   0.1408015,
   0.1187295,
   0.0860464,
   0.08406461,
   0.08952956,
   0.09891579,
   0.1153262,
   0.1443485,
   0.1883778,
   0.2315654,
   0.2839935};
   Double_t Graph0_fey1039[11] = {
   0.03928184,
   0.01586766,
   0.0110311,
   0.01062685,
   0.01128317,
   0.01245583,
   0.01448802,
   0.01807469,
   0.02354862,
   0.02970001,
   0.08584551};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12_",100,217.8116,3021.707);
   Graph_Graph01039->SetMinimum(12.52911);
   Graph_Graph01039->SetMaximum(13.17212);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(19,82);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
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
