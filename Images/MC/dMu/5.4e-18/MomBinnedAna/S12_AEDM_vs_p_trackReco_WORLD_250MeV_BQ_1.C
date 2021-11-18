void S12_AEDM_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2011,-0.1441325,2741.317,0.4249737);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[11] = {
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
   Double_t Graph0_fy1036[11] = {
   0.1435591,
   0.1524922,
   0.1565726,
   0.1513159,
   0.1029064,
   0.1363966,
   0.1593686,
   0.1181546,
   0.06714803,
   0.08030676,
   0.01813956};
   Double_t Graph0_fex1036[11] = {
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
   Double_t Graph0_fey1036[11] = {
   0.1865635,
   0.06282498,
   0.03610585,
   0.02969714,
   0.02716021,
   0.02579081,
   0.02594663,
   0.02742832,
   0.02941936,
   0.02936487,
   0.067421};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S12_",100,217.8116,3021.707);
   Graph_Graph01036->SetMinimum(-0.08722185);
   Graph_Graph01036->SetMaximum(0.3680631);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(19,82);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
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
