void S18_simple_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.1435222,3650,0.2313787);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1246[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1246[15] = {
   0.1011735,
   0.1010917,
   0.1093628,
   0.1265002,
   0.1499298,
   0.1385852,
   0.1476078,
   0.1495192,
   0.146297,
   0.1135982,
   0.1023283,
   0.1336023,
   0.08402839,
   0.03101734,
   -0.008783503};
   Double_t Graph0_fex1246[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1246[15] = {
   0.01837525,
   0.01837515,
   0.01832473,
   0.0180734,
   0.01794544,
   0.01809446,
   0.01854754,
   0.0193761,
   0.02069729,
   0.02263998,
   0.0254624,
   0.02942176,
   0.03479246,
   0.0440691,
   0.07225522};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1246,Graph0_fy1246,Graph0_fex1246,Graph0_fey1246);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01246 = new TH1F("Graph_Graph01246","S18",100,-400,3200);
   Graph_Graph01246->SetMinimum(-0.1060321);
   Graph_Graph01246->SetMaximum(0.1938886);
   Graph_Graph01246->SetDirectory(0);
   Graph_Graph01246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01246->SetLineColor(ci);
   Graph_Graph01246->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01246->GetXaxis()->CenterTitle(true);
   Graph_Graph01246->GetXaxis()->SetLabelFont(42);
   Graph_Graph01246->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01246->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01246->GetXaxis()->SetTitleFont(42);
   Graph_Graph01246->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01246->GetYaxis()->CenterTitle(true);
   Graph_Graph01246->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01246->GetYaxis()->SetLabelFont(42);
   Graph_Graph01246->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01246->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01246->GetYaxis()->SetTitleFont(42);
   Graph_Graph01246->GetZaxis()->SetLabelFont(42);
   Graph_Graph01246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01246->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01246);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
