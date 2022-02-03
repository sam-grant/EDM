void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4033,2.948415,3407.53,28.25323);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[11] = {
   451.8566,
   653.3028,
   880.3056,
   1123.079,
   1371.077,
   1620.197,
   1866.984,
   2115.419,
   2362.991,
   2613.824,
   2788.2};
   Double_t Graph0_fy1213[11] = {
   14.06636,
   16.70108,
   18.58573,
   20.09692,
   21.07378,
   21.43591,
   21.19694,
   20.29934,
   18.70955,
   16.2746,
   13.80989};
   Double_t Graph0_fex1213[11] = {
   0.07208923,
   0.06091129,
   0.04412931,
   0.04310084,
   0.0460258,
   0.05089799,
   0.0593305,
   0.0737244,
   0.09523859,
   0.1166572,
   0.1421294};
   Double_t Graph0_fey1213[11] = {
   0.02172054,
   0.01044469,
   0.008107523,
   0.008510305,
   0.009532414,
   0.01073954,
   0.0123987,
   0.01474389,
   0.01759074,
   0.01926322,
   0.04682368};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S0S12S18_",100,218.1288,3021.998);
   Graph_Graph01213->SetMinimum(5.478897);
   Graph_Graph01213->SetMaximum(25.72274);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01213->GetXaxis()->SetRange(0,101);
   Graph_Graph01213->GetXaxis()->CenterTitle(true);
   Graph_Graph01213->GetXaxis()->SetLabelFont(42);
   Graph_Graph01213->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01213->GetXaxis()->SetTitleFont(42);
   Graph_Graph01213->GetYaxis()->CenterTitle(true);
   Graph_Graph01213->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01213->GetYaxis()->SetLabelFont(42);
   Graph_Graph01213->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01213->GetYaxis()->SetTitleFont(42);
   Graph_Graph01213->GetZaxis()->SetLabelFont(42);
   Graph_Graph01213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01213);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
